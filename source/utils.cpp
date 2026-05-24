template<typename T>
void* offset_address(void* base, T offset){
    return (void*)((u8*) base + offset);
}

bool in_range(u32 value,u32 a,u32 b){
    return (value>=a && value<b);
}

template<typename T>
void make_max(T& modifiable, const T& test_value){
    if(modifiable < test_value) modifiable = test_value;
}

std::string beutify_bytes(u64 bytes){


    char suffixes[] = {'K', 'M', 'G', 'T', 'P', 'E', 'Z'};

    /*
              1B  1
             12B  12 
            123B  123
          1.23KB  1234
         12.34KB  12345 
        123.45KB  123456
          1.23MB  1234567
         12.34MB  12345678 
        123.45MB  123456789 
          1.23GB  1234567890
             ...
    */

    if(bytes < 1000) return std::to_string(bytes) + "B";

    int power = 0;
    while(bytes > 1'000'000){
        bytes /= 1000;
        power += 1;
    }
    //We only want 2 decimals
    bytes /= 10;
    u64 integral = bytes / 100;
    u64 dec = bytes % 100;
    return std::to_string(integral) + '.' + std::to_string(dec) + suffixes[power] + 'B';
}

