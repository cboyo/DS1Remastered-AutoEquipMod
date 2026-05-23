
struct Process{
    DWORD id{0};
    HANDLE handle{0};
};

struct MemBlock{
    void* base = nullptr;
    u64 size = 0;
};

std::string read_file_contents_binary(const std::filesystem::path& file_path){
    std::ifstream file(file_path, std::ifstream::binary);
    if(!file){
        std::cout<<"Cant open file: "<<file_path<<"\n";
        return "";
    }   
    std::stringstream ss;
    ss<<file.rdbuf();
    return ss.str();
}

void write_file_contents_binary(const std::filesystem::path& file_path, const std::string& contents){
    std::ofstream file(file_path, std::ifstream::binary);
    if(!file){
        std::cout<<"Cant open file: "<<file_path<<"\n";
        return;
    }  
    file<<contents;
    return;
}

HANDLE handle_from_id(DWORD process_id){
    HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, process_id);
    if(!handle){
        std::cout<<"Can't get a valid process handle: ";
        DWORD error = GetLastError();
        if(error == 5){
            std::cout<<"Try launching the application as administrator\n";
        }else{
            std::cout<<"Error code: "<<error<<'\n';
        }
    }
    return handle;
}

Process find_process_id(const wchar_t* process_name){	
    // Take a snapshot of all processes in the system.
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == hProcessSnap) {
        std::cout<<"Invalid process snapshot finding the process id\n";
    };

    PROCESSENTRY32W pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32W);
    if (Process32FirstW(hProcessSnap, &pe32)){
        do{
            //Having to deal with bullshit windows strings
            if (CompareStringW(LOCALE_USER_DEFAULT,0,process_name,-1,pe32.szExeFile,-1)==CSTR_EQUAL){
                Process process;
                process.id = pe32.th32ProcessID;
                process.handle = handle_from_id(process.id);
                if(process.handle){
                    CloseHandle(hProcessSnap);
                    return process;
                }                
            }
        } while (Process32NextW(hProcessSnap, &pe32));
    }
    CloseHandle(hProcessSnap);
    return {};
}

std::string protect_to_string(DWORD protect){
    switch ((protect))
    {
        case PAGE_EXECUTE: return "PAGE_EXECUTE";
        case PAGE_EXECUTE_READ: return "PAGE_EXECUTE_READ";
        case PAGE_EXECUTE_READWRITE: return "PAGE_EXECUTE_READWRITE";
        case PAGE_EXECUTE_WRITECOPY: return "PAGE_EXECUTE_WRITECOPY";
        case PAGE_NOACCESS: return "PAGE_NOACCESS";
        case PAGE_READONLY: return "PAGE_READONLY";
        case PAGE_READWRITE: return "PAGE_READWRITE";
        case PAGE_WRITECOPY: return "PAGE_WRITECOPY";
        case PAGE_TARGETS_INVALID: return "PAGE_TARGETS_INVALID";
        default:return "PAGE_UNKNOWN:"+std::to_string(protect);
    }
}

template<typename T>
bool read_memory(Process& process, const void* address, T& value){
    size_t bytes_read = 0;
    bool success = ReadProcessMemory(process.handle, address, &value, sizeof(value), &bytes_read);

    return success && (bytes_read == sizeof(value));
}

template<typename T>
bool write_memory(Process& process, void* address, const T& value){
    size_t bytes_written = 0;
    bool success = WriteProcessMemory(process.handle, address, &value, sizeof(value), &bytes_written);

    return success && (bytes_written == sizeof(value));
}

void* chase_pointer(Process& process, void* starting_address, const std::vector<u64>& offsets){

    void* pointer = starting_address;
    for(u64 offset : offsets){

        // pointer = pointer + offset;
        void* memory_value = 0;
        if(read_memory(process, pointer, memory_value)){

            pointer = offset_address(memory_value, offset);

        }else{

            return nullptr;

        }
        
    }
    return pointer;
}

MemBlock get_module_memory_block(Process& process, const wchar_t* module_name){

    HANDLE snapshot_handle = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, process.id);
    MemBlock block = {};
    if (snapshot_handle != INVALID_HANDLE_VALUE){
        MODULEENTRY32W module_entry = {};
        module_entry.dwSize = sizeof(MODULEENTRY32W);
        if (Module32FirstW(snapshot_handle, &module_entry)){
            do{
                if(CompareStringW(LOCALE_NAME_USER_DEFAULT,0, module_name, -1, module_entry.szModule, -1) == CSTR_EQUAL){
                    block.base = module_entry.modBaseAddr;
                    block.size = module_entry.modBaseSize;
                    // std::cout<<"Module size: "<<module_entry.modBaseSize<<'\n';
                    break;
                }
            } while (Module32NextW(snapshot_handle, &module_entry));
        }
        CloseHandle(snapshot_handle);
    }
    return block;
}

std::vector<void*> scan_process_module(Process& process, const Pattern& pattern, const wchar_t* module_name){
    
    std::vector<void*> result_addresses;
    std::vector<u8> buffer;
    
    void* virtual_address = 0;

    MEMORY_BASIC_INFORMATION info;
    u64 total_size = 0;
    u64 scanned_size = 0;
    
    std::cout<<"STARTING PROCESS SCAN\n";

    MemBlock module_mem = get_module_memory_block(process, module_name);

    void* module_end = offset_address(module_mem.base, module_mem.size);
    void* module_start = module_mem.base;

    s32 valid_blocks = 0;
    s32 total_blocks = 0;

    while(VirtualQueryEx(process.handle, virtual_address, &info, sizeof(info))){

        total_size += info.RegionSize;
        total_blocks += 1;
        bool valid_mem_block = true;

        if(info.State != MEM_COMMIT) valid_mem_block = false;
        if(!(info.Type==MEM_PRIVATE||info.Type==MEM_IMAGE)) valid_mem_block = false;
        if(info.BaseAddress >= module_end)   valid_mem_block = false;
        if(info.BaseAddress <  module_start) valid_mem_block = false;

        if(valid_mem_block){
            void* base = info.BaseAddress;
            // std::cout<<"SCANNING: "<<base<<" "<<offset_address(base, info.RegionSize)<<'\r';
            buffer.resize(info.RegionSize);
            SIZE_T buffer_bytes_read = 0;
            if(ReadProcessMemory(process.handle, virtual_address, buffer.data(), info.RegionSize, &buffer_bytes_read)){

                for(const u64& offset: pattern_scan(buffer, pattern)){
                    result_addresses.push_back(offset_address(base, offset));
                }
            }

            valid_blocks += 1;
            scanned_size+=info.RegionSize;
        }
        virtual_address = offset_address(virtual_address, info.RegionSize);
    }
    //I was confused at the beggining why total_size was so huge
    //Turns out Windows does whatever it wants in virtual space
    std::cout<<"\nSCANNED: "<<beutify_bytes(scanned_size)<<" out of "<<beutify_bytes(total_size);
    std::cout<<" | "<<valid_blocks<<" out of "<<total_blocks<<" blocks\n";
    // std::cout<<"Valid mem blocks: "<<valid_blocks<<'\n';
    return result_addresses;
}

std::vector<void*> scan_process(Process process,const Pattern& pattern){
    std::vector<void*> result_addresses;
    std::vector<u8> buffer;
    
    void* virtual_address = 0;

    MEMORY_BASIC_INFORMATION info;
    u64 total_size = 0;
    u64 scanned_size = 0;
    
    std::cout<<"STARTING PROCESS SCAN\n";

    s32 valid_blocks = 0;
    s32 total_blocks = 0;

    while(VirtualQueryEx(process.handle, virtual_address, &info, sizeof(info))){

        total_size += info.RegionSize;
        total_blocks += 1;
        bool valid_mem_block = true;

        if(info.State != MEM_COMMIT) valid_mem_block = false;
        if(!(info.Type==MEM_PRIVATE||info.Type==MEM_IMAGE)) valid_mem_block = false;

        if(valid_mem_block){
            void* base = info.BaseAddress;
            // std::cout<<"SCANNING: "<<base<<" "<<offset_address(base, info.RegionSize)<<'\r';
            buffer.resize(info.RegionSize);
            SIZE_T buffer_bytes_read = 0;
            if(ReadProcessMemory(process.handle, virtual_address, buffer.data(), info.RegionSize, &buffer_bytes_read)){

                for(const u64& offset: pattern_scan(buffer, pattern)){
                    result_addresses.push_back(offset_address(base, offset));
                }
            }

            valid_blocks += 1;
            scanned_size+=info.RegionSize;
        }
        virtual_address = offset_address(virtual_address, info.RegionSize);
    }
    //I was confused at the beggining why total_size was so huge
    //Turns out Windows does whatever it wants in virtual space
    std::cout<<"\nSCANNED: "<<beutify_bytes(scanned_size)<<" out of "<<beutify_bytes(total_size);
    std::cout<<" | "<<valid_blocks<<" out of "<<total_blocks<<" blocks\n";
    // std::cout<<"Valid mem blocks: "<<valid_blocks<<'\n';
    return result_addresses;
}

bool set_path(){
    std::wstring path;
    path.resize(MAX_PATH);
    DWORD nSize = GetModuleFileNameW(NULL, path.data(), (DWORD)path.size());
    if(nSize==0){
        std::cout<<"Error getting module path. Error code:"<<GetLastError()<<'\n';
        return false;
    }
    while(nSize==path.size() && GetLastError()==ERROR_INSUFFICIENT_BUFFER){
        if(path.size()>1024*64){
            //Path is huge???
            return false;
        }else if(nSize==0){
            std::cout<<"Error getting module path. Error code:"<<GetLastError()<<'\n';
            return false;
        }
        path.resize(path.size()*2);
        nSize = GetModuleFileNameW(NULL,path.data(),(DWORD)path.size());
    }
    std::filesystem::current_path(std::filesystem::path{path}.parent_path());
    return true;
}
