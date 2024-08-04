//Windows bullshit
#include <Windows.h>
#include <TlHelp32.h>
#include <timeapi.h>
#include <psapi.h>
//C++ libraries
#include <iostream>
#include <vector>
#include <span>
#include <iomanip>
#include <string>
#include <array>
#include <sstream>

struct Process{DWORD id{0};HANDLE handle{0};};
struct Pattern{
    std::vector<uint8_t> bytes;
    std::vector<bool> mask;
    size_t alignment;

    void clear(){
        mask.clear();
        bytes.clear();
        alignment=1;
    }
    void from_string(std::string_view string){
        clear();
        mask.resize(string.size(),true);
        bytes.reserve(string.size());
        for(const auto& c:string){
            bytes.push_back(c);
        }
        alignment=1;
    }

    void load(uint32_t value){
        clear();
        alignment = 4;
        mask.resize(alignment,true);
        bytes.resize(alignment);
        for(size_t i = 0;i<alignment;i++){
            bytes[i]=(value>>i*8);
        }
    }
    void load(const std::vector<uint32_t>& value,const std::vector<bool>& value_mask){
        clear();
        alignment = 4;
        mask.resize(alignment*value.size(),true);
        for(int i = 0;i<value_mask.size();i++){
            if(!value_mask[i]){
                for(size_t j=0;j<alignment;j++){
                    mask[j+i*alignment]=false;

                }
            }
        }
        bytes.resize(alignment*value.size());
        for(size_t j = 0;j<value.size();j++){
            for(size_t i = 0;i<alignment;i++){
                bytes[i+j*alignment]=(value[j]>>i*8);
            }

        }
    }
    size_t size()const noexcept{
        return bytes.size();
    }
    void print()const{
        std::stringstream ss;
        ss<<std::hex<<"Bytes: ";
        ss<<std::setfill('0');
        for(const auto& b:bytes){
            ss<<std::setw(2)<<(int)b<<" ";
        }
        ss<<"\nMask:  ";
        ss<<std::setfill(' ');
        for(const auto& b:mask){
            ss<<std::setw(2)<<(int)b<<" ";
        }
        ss<<"\nPtrn:  ";
        ss<<std::setfill('0');
        for(size_t i = 0;i<mask.size();i++){
            if(mask[i]){
                ss<<std::setw(2)<<(int)bytes[i]<<" ";
            }else{
                ss<<std::setw(2)<<"?? ";
            }
        }
        ss<<"\n";
        std::cout<<ss.str();

    }

};
struct Addresses{
    void* inv;
    void* armor_id;
    void* armor_slot;
    void* weapon_id;
    void* weapon_slot;
    void* ring_id;
    void* ring_slot;
    void* in_game;
};

enum class AppState{
    FindingGame,
    FindingInv,
    MainMenu,
    InvStart,
    InvUpdate
};

enum class ItemType :uint32_t{
    Weapon    =0x00000000,
    Armor     =0x10000000,
    Ring      =0x20000000,
    Consumable=0x40000000,
    None      =0xFFFFFFFF
};
enum class ArmorType: uint32_t{
    Head  =0,
    Chest =1,
    Hands =2,
    Legs  =3,
    Unknown
};
enum class WeaponType:uint32_t{
    RightHand,LeftHand,Arrow,Bolt,Unknown
};
ArmorType armor_type_from_id(uint32_t armor_id){
    auto type= ((armor_id%10000u)/1000u);
    if(type<4)return (ArmorType)type;
    return ArmorType::Unknown;
}
bool in_range(uint32_t value,uint32_t a,uint32_t b){
    return (value>=a&&value<b);
}
WeaponType weapon_type_from_id(uint32_t weapon_id){
    if      (in_range(weapon_id, 101000, 102000)){//Parry Dagger
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id,2000000,2100000)){
        return WeaponType::Arrow;
    }else if(in_range(weapon_id,2100000,2200000)){
        return WeaponType::Bolt;
    }else if(in_range(weapon_id,1300000,1600000)){//Catalyst+Shields
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id,9000000,9010000)){//More shields
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id,9014000,9015000)){//Cleansing Greatshield
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id,9017000,9019000)){//Manus and Oolacile Catalyst
        return WeaponType::LeftHand;
    }
    //I should really do a better check for invalid values
    //Default to right hand
    return WeaponType::RightHand;
}


struct InvSlot{
    ItemType type;
    uint32_t id;
    uint32_t count;
    uint32_t mysterious_number;//Has to do with display order but other than that im clueless
    uint32_t valid;
    uint32_t durability;
    uint32_t hits;


    bool operator ==(const InvSlot& rhs)const{
        return type==rhs.type && id==rhs.id && count==rhs.count && mysterious_number==rhs.mysterious_number&& valid==rhs.valid && durability==rhs.durability && hits==rhs.hits;
    }
};
using inv_t = std::array<InvSlot,2048>;
struct RingSlots{
    uint32_t left_id{0xFFFFFFFF};
    uint32_t right_id{0xFFFFFFFF};
    uint32_t left_slot{0xFFFFFFFF};
    uint32_t right_slot{0xFFFFFFFF};
};
struct State{
    AppState state;
    Process process;
    Addresses addrs;
    inv_t inventory;
    inv_t inventory_copy;
    //int ring_slot{0};  Removed as of v0.3 update
};
enum class Change{
    Null=0,EquipWeapon,EquipArmor,EquipRing
};


HANDLE handle_from_id(DWORD process_id){
    auto handle = OpenProcess(PROCESS_ALL_ACCESS,FALSE,process_id);
    if(!handle){
        std::cout<<"Can't get a valid process handle: ";
        auto error = GetLastError();
        if(error==5){
            std::cout<<"Try launching the application as administrator\n";
        }else{
            std::cout<<"Error code: "<<error<<'\n';
        }
    }
    return handle;
}

Process FindProcessId(const TCHAR* process_name){	
    // Take a snapshot of all processes in the system.
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (INVALID_HANDLE_VALUE == hProcessSnap) {
        std::cout<<"Invalid process snapshot finding the process id\n";
    };

    PROCESSENTRY32 pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32);
    if (Process32First(hProcessSnap, &pe32)){
        do{
            //Having to deal with bullshit windows strings
            if (CompareString(LOCALE_USER_DEFAULT,0,process_name,-1,pe32.szExeFile,-1)==CSTR_EQUAL){
                Process process;
                process.id = pe32.th32ProcessID;
                process.handle = handle_from_id(process.id);
                if(process.handle){
                    std::cout<<"Found Dark Souls Remastered process\n";
                    CloseHandle(hProcessSnap);
                    return process;
                }                
            }
        } while (Process32Next(hProcessSnap, &pe32));
    }
    std::cout<<"Can't find Dark Souls Remastered process\n";
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

inline bool match_pattern(std::span<const uint8_t> data,const Pattern& pattern){
    for(size_t j = 0;j<pattern.size();j++){
        if(pattern.mask[j]&&data[j]!=pattern.bytes[j]){
            return false;
        }
    }
    return true;
}   
std::vector<size_t> pattern_scan(const std::vector<uint8_t>& data,const Pattern& pattern){
    if(data.size()<pattern.size())return {};
    std::vector<size_t> offsets;
    const size_t limit = data.size()-pattern.size();
    for(size_t i = 0;i<limit;i+=pattern.alignment){
        if(match_pattern(std::span{data.data()+i,pattern.size()},pattern)){
            offsets.push_back(i);
        }
    }
    return offsets;
}

std::vector<uint64_t> scan_process(Process process,const Pattern& pattern){
    std::vector<uint64_t> result_addresses;
    unsigned char* p = 0;
    MEMORY_BASIC_INFORMATION info;
    DWORD oldprotect;
    uint64_t total_size = 0;
    // std::cout<<"Do stuff\n";
    std::vector<uint8_t> buffer;
    SIZE_T buffer_bytes_read=0;
    uint64_t scanned_size=0;
    std::cout<<"STARTING SCAN\n";
    while(VirtualQueryEx(process.handle, p, &info, sizeof(info))){
        total_size+=info.RegionSize;
        if(info.State==MEM_COMMIT&&(info.Type==MEM_PRIVATE||info.Type==MEM_IMAGE)){
            // std::cout<<protect_to_string(info.Protect)<<'\n';
            auto base = (uint64_t)info.BaseAddress;
            std::cout<<"SCANNING: "<<base<<" "<<base+info.RegionSize<<'\r';
            buffer.resize(info.RegionSize);
            if(ReadProcessMemory(process.handle, p, buffer.data(), info.RegionSize, &buffer_bytes_read)){
                for(const auto& offset:pattern_scan(buffer,pattern)){
                    result_addresses.push_back(base+offset);
                }
            }
            scanned_size+=info.RegionSize;
        }
        p+=info.RegionSize;
    }
    std::cout<<std::scientific<<"TOTAL SIZE: "<<(float)total_size<<" bytes SCANNED: "<<(float)scanned_size<<std::fixed<<"bytes\n";

    return result_addresses;
}

std::vector<uint64_t> find_inventory_address(Process process){
    Pattern p;
    p.load({-1u,0u,2048u,0u},{0,1,1,1}); //Basic pattern to find the inventory
    auto possible_addresses = scan_process(process,p);
    std::cout<<"Found "<<possible_addresses.size()<<" possible addresses\n";
    std::vector<uint64_t> final_addresses;
    for(size_t i = 0;i<possible_addresses.size();i++){
        uint32_t value=0;
        SIZE_T read_bytes=0;
        // std::cout<<"Result "<<i<<": "<<(uint64_t*)addresses[i]<<'\n';
        LPCVOID pointer = (void*)possible_addresses[i];
        if(ReadProcessMemory(process.handle,pointer,&value,sizeof(uint32_t),&read_bytes)){
            if(value==possible_addresses[i]){
                final_addresses.push_back(possible_addresses[i]);
            }
        }
    }
    return final_addresses;
}

Change identify_change(const InvSlot& old,const InvSlot& current){
    if(old.valid&&!current.valid){
        //Removed item from inventory we don't care about this i think
        return Change::Null;
    }
    if(!old.valid&&current.valid){
        //Got a new item let's check it out!
        if(current.type==ItemType::Armor){
            // std::cout<<"Equip armor here\n";
            return Change::EquipArmor;
        }else if(current.type==ItemType::Weapon){
            // std::cout<<"Equip weapon here\n";
            return Change::EquipWeapon;
        }else if(current.type==ItemType::Ring){
            // std::cout<<"Equip ring here\n";
            return Change::EquipRing;
        }
    }else{
        //In here the slot in the inventory changed its nothing new or lost
        if(current.id==old.id){
            //If the id doesnt change it means its the same item 
            //Probably some durability or amount change we don't care about those
            return Change::Null;
        }else if(current.type==ItemType::Weapon&&old.type==current.type){
            //Upgraded weapon most likely
            return Change::Null;
        }
    }
    //Default to null
    return Change::Null;
}
void write_id_and_slot(State& state,uint32_t item_id,void* id_ptr,uint32_t slot,void* slot_ptr){
    if(id_ptr&&slot_ptr){
        if(!WriteProcessMemory(state.process.handle,id_ptr,&item_id,sizeof(uint32_t),nullptr)){
            std::cout<<"Failed to write item id, item not equipped\n";
        }
        //Writing the slot is more a convenience than anything
        if(!WriteProcessMemory(state.process.handle,slot_ptr,&slot,sizeof(uint32_t),nullptr)){
            std::cout<<"Failed to write item slot(Not much of a problem)\n";
        }
    }
}
void write_rings_slots(State& state,RingSlots& rings){
    if(!WriteProcessMemory(state.process.handle,state.addrs.ring_id,&rings.left_id,sizeof(uint32_t)*2,nullptr)){
        std::cout<<"Failed to write ring id, ring not equipped\n";
    }
    //Writing the slot is more a convenience than anything
    if(!WriteProcessMemory(state.process.handle,state.addrs.ring_slot,&rings.left_slot,sizeof(uint32_t)*2,nullptr)){
        std::cout<<"Failed to write ring slot(Not much of a problem)\n";
    }
}

bool read_ring_slots(State& state,RingSlots& ring_slot){
    if(!ReadProcessMemory(state.process.handle,state.addrs.ring_id,&ring_slot.left_id,sizeof(uint32_t)*2u,nullptr)){
        return false;
    }
    if(!ReadProcessMemory(state.process.handle,state.addrs.ring_slot,&ring_slot.left_slot,sizeof(uint32_t)*2u,nullptr)){
        return false;
    }
    return true;
}

void execute_change(Change change,State& state,size_t inv_index){
    if(change==Change::Null)return;//Also redundant
    uint32_t& item_id = state.inventory_copy[inv_index].id;
    Addresses& addrs   = state.addrs;
    void* id_ptr=nullptr;
    void* slot_ptr=nullptr;
    if(change==Change::EquipArmor){
        auto armor_type = armor_type_from_id(item_id);
        if(armor_type==ArmorType::Unknown){
            std::cout<<"Unknown armor type, no action executed\n";
        }else{
            if(armor_type==ArmorType::Head){
                std::cout<<"Equip helmet\n";
            }else if(armor_type==ArmorType::Hands){
                std::cout<<"Equip gloves\n";
            }else if(armor_type==ArmorType::Chest){
                std::cout<<"Equip chest armor\n";
            }else if(armor_type==ArmorType::Legs){
                std::cout<<"Equip pantalons\n";
            }
            auto offset = 4*(int)armor_type;
            id_ptr   = (void*)((uint64_t)addrs.armor_id+offset);
            slot_ptr = (void*)((uint64_t)addrs.armor_slot+offset);
            write_id_and_slot(state,item_id,id_ptr,inv_index,slot_ptr);
        }
    }else if(change==Change::EquipWeapon){
        auto weapon_type = weapon_type_from_id(item_id);
        if(weapon_type==WeaponType::Unknown){
            std::cout<<"Unknown weapon type, no action executed\n";
        }else{
            auto offset=0;
            if(weapon_type==WeaponType::Arrow){
                offset=16;
                std::cout<<"Equip arrows\n";
            }else if(weapon_type==WeaponType::Bolt){
                offset=20;
                std::cout<<"Equip bolts\n";
            }else if(weapon_type==WeaponType::RightHand){
                std::cout<<"Equip right hand weapon\n";
                offset = 4;
            }else if(weapon_type==WeaponType::LeftHand){
                std::cout<<"Equip left hand weapon\n";
                offset = 0;//Redundant
            }
            id_ptr   = (void*)((uint64_t)addrs.weapon_id+offset);
            slot_ptr = (void*)((uint64_t)addrs.weapon_slot+offset);
            write_id_and_slot(state,item_id,id_ptr,inv_index,slot_ptr);
        }
    }else if(change==Change::EquipRing){
        //V0.3 change
        //Now rings equip as a FIFO queue
        //New rings go to the left slot and the previous ring gets pushed into right slot
        //Also now avoids equiping repeated rings
        //No need to know ring slot and let us know the last ring equipped
        //even between sessions!!
        RingSlots ring_slots;
        if(!read_ring_slots(state,ring_slots)){
            std::cout<<"Failed to read ring slots\n";
            return;
        }
        if(ring_slots.left_id==item_id){
            std::cout<<"Ring duplicate detected, ring not equipped\n";
            return;
        }
        std::cout<<"Equip ring\n";
        //If left slot is empty and right is not, only no need to push first ring
        if(!(ring_slots.left_id==0xFFFFFFFF&&ring_slots.right_id!=0xFFFFFFFF)){
            ring_slots.right_id=ring_slots.left_id;
            ring_slots.right_slot=ring_slots.left_slot;
        }
        ring_slots.left_id=item_id;
        ring_slots.left_slot=inv_index;
        write_rings_slots(state,ring_slots); 
    }
}

bool try_find_process(Process& process){
    std::cout<<"Trying to find Darks Souls application\n";
    auto process_name = TEXT("DarkSoulsRemastered.exe");
    process = FindProcessId(process_name);
    return process.handle;
}
void setup_addresses(State& state,uint64_t signature_address){
    state.addrs.inv        = (void*)(signature_address+0X010);
    state.addrs.armor_id   = (void*)(signature_address-0x32C);
    state.addrs.weapon_id  = (void*)(signature_address-0x34C);
    state.addrs.armor_slot = (void*)(signature_address-0x3AC);
    state.addrs.weapon_slot= (void*)(signature_address-0x3CC);
    state.addrs.ring_slot  = (void*)(signature_address-0x398);
    state.addrs.ring_id    = (void*)(signature_address-0x318);
    state.addrs.in_game    = (void*)(signature_address-0x660);
}
bool read_inventory(Process process,void* addr,inv_t& inv){
    SIZE_T read=0;
    if(ReadProcessMemory(process.handle,addr,inv .data(),sizeof(inv),&read)){
        return read==sizeof(inv);
    }
    return false;
}
bool in_main_menu(State& state){
    uint32_t menu = -1;
    SIZE_T read=0;
    if(ReadProcessMemory(state.process.handle,state.addrs.in_game,&menu,sizeof(menu),&read)){
        if(read!=sizeof(menu))return true;
        return menu==-1u;
    }
    return true;
}

void update_loop(State& state){
    while(true){
        if(state.state==AppState::FindingGame){
            if(try_find_process(state.process)){
                state.state=AppState::FindingInv;
            }else{
                Sleep(5000);
            }
        }else{//Check if application closes
            //No clue if this is the correct way
            //Read online that will be active until I close my handle
            //But works so IDK Windows is weird
            DWORD statuscode;
            GetExitCodeProcess(state.process.handle,&statuscode);
            if(statuscode!=STILL_ACTIVE){
                std::cout<<"Game closed, going back to search for it\n";
                std::cout<<"---------------->Close the app if you are done<-----------------\n";
                state.state=AppState::FindingGame;
                CloseHandle(state.process.handle);
            }
        }
        if(state.state==AppState::FindingInv){
            std::cout<<"Scanning game to find signature...\n";
            auto inventory_address = find_inventory_address(state.process);
            // std::vector<uint64_t> inventory_address = {211331840};//Manual search for debugging
            if(inventory_address.size()>1){
                std::cout<<"Multiple signatures found, can't pin down correct address\n";
                std::cout<<"Try restarting the game or wait for another scan\n";
                Sleep(5000);
            }else if(inventory_address.size()==0){
                std::cout<<"No signatures found, can't pin down correct address\n";
                std::cout<<"Try restarting the game or wait for another scan\n";
                Sleep(5000);
            }else{
                std::cout<<"Unique signature found! Setting everything up\n";
                setup_addresses(state,inventory_address[0]);
                state.state=AppState::MainMenu;
                state.inventory={};
                state.inventory_copy={};
            }
        }else if(state.state==AppState::InvStart){
            auto good = read_inventory(state.process,state.addrs.inv,state.inventory);
            if(good){
                state.state=AppState::InvUpdate;
                std::cout<<"Initial inventory read successful\n";
            }else{
                std::cout<<"Initial inventory read failed, trying again\n";
                Sleep(1000);
            }
        }else if(state.state==AppState::MainMenu){
            auto main_menu = in_main_menu(state);
            if(!main_menu){
                std::cout<<"Going into the game\n";
                state.state=AppState::InvStart;
            }else{
                std::cout<<"Staring at the main menu\n";
                Sleep(5000);
            }
        }else if(state.state==AppState::InvUpdate){
            auto main_menu = in_main_menu(state);
            if(main_menu){
                std::cout<<"Going back to main menu\n";
                state.state=AppState::MainMenu;
            }else{
                auto good = read_inventory(state.process,state.addrs.inv,state.inventory_copy);
                if(!good){
                    std::cout<<"Inventory update failed, trying again\n";
                }else{
                    for(int i = 0;i<state.inventory_copy.size();i++){
                        if(state.inventory[i]!=state.inventory_copy[i]){
                            auto change = identify_change(state.inventory[i],state.inventory_copy[i]);
                            if(change!=Change::Null) execute_change(change,state,i);
                        }
                    }
                    state.inventory=state.inventory_copy;
                }
            }
            Sleep(1000);
        }
    }
}

int main()
{
    const std::string mutex_name = "chainsboyo_AutoEquip_DSR";
    HANDLE hHandle = CreateMutex( NULL, TRUE, mutex_name.c_str());
    if(ERROR_ALREADY_EXISTS == GetLastError()){
        std::cout<<"Another instance of AutoEquip_DSR is already running\n";
        std::cout<<"This console will close in 5 seconds\n";
        Sleep(5000);
        return 1;
    }
    State state;
    update_loop(state);
    ReleaseMutex( hHandle ); 
    CloseHandle( hHandle );//Will never reach here but idk
    return 0;
}
