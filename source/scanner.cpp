struct Pattern{
    std::vector<u8> bytes;
    std::vector<bool> mask;
    size_t alignment;

    void clear(){
        mask.clear();
        bytes.clear();
        alignment=1;
    }

    void from_string(std::string_view string){
        clear();
        mask.resize(string.size(), true);
        bytes.reserve(string.size());
        for(char c:string){
            bytes.push_back(c);
        }
        alignment=1;
    }

    void load_bytes(const std::vector<u8>& value, const std::vector<bool>& value_mask){
        clear();
        alignment = 1;
        
        bytes = value;
        mask = value_mask;

        //Match the size of the arrays
        while(mask.size() < bytes.size()){
            mask.push_back(true);
        }
    }

    size_t size()const noexcept{
        return bytes.size();
    }

    void print()const{
        std::stringstream ss;
        ss<<std::hex<<"Bytes: ";
        ss<<std::setfill('0');
        for(const u8& b:bytes){
            ss<<std::setw(2)<<(int)b<<" ";
        }
        ss<<"\nMask:  ";
        ss<<std::setfill(' ');
        for(const bool& b:mask){
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

bool match_pattern(const u8* data, size_t data_size, const Pattern& pattern){
    
    if(data_size != pattern.size()) return false;

    for(size_t j = 0; j<data_size; j++){
        if(pattern.mask[j] && (data[j] != pattern.bytes[j])){
    
            return false;
        
        }
    }
    return true;
}

std::vector<u64> pattern_scan(const std::vector<u8>& data, const Pattern& pattern){

    if(data.size()<pattern.size()) return {};

    std::vector<u64> offsets;
    const size_t limit = data.size() - pattern.size();
    for(size_t i = 0; i<limit; i+=1){
        if(match_pattern(data.data() + i, pattern.size(), pattern)){
            offsets.push_back(i);
        }
    }
    return offsets;
}