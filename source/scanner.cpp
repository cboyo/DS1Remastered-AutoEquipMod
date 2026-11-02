struct Pattern{
    std::vector<u8> bytes;
    std::vector<u8> mask;
    size_t alignment;

    // Returns the corresponding value of the hexadecimal character
    // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F
    // If the character is a wildcard, the return value is 16
    // If the character is invalid return value is >16
    // Wildcard characters are: '?' 'x' 'X' '*'
    u8 PatternCharacterValue(char c){
        u8 value = 0xFF;

        if((c >= '0') && (c <= '9')) value = c - '0';
        else if((c >= 'A') && (c <= 'F')) value = c - 'A' + 10;
        else if((c >= 'a') && (c <= 'f')) value = c - 'a' + 10;
        else if(c == '?' || c == 'x' || c == 'X' || c == '*') value = 0x10;
        
        return value;
    }

    bool load_bytes(std::string_view str){
        size_t string_size = 0;
        // Count how many valid characters there are in the string
        for(size_t i = 0; i < str.size(); i++){
            if(PatternCharacterValue(str[i]) <= 16){
                string_size += 1;
            }
        }

        if (string_size == 0) return false;

        // The string ends on a half byte
        // Can be worked with, but whatever
        if ((string_size % 2) == 1) return false;

        // Every 2 hex characters is a byte
        bytes.resize(string_size / 2);
        mask.resize(string_size / 2);

        // Here we work with half bytes to simplify the logic
        // Simply grab the value from the string and plug it into the arrays
        size_t index = 0;
        for(size_t i = 0; i < str.size(); i++){

            u8 mask_v = 0xF;
            u8 value = PatternCharacterValue(str[i]);

            if (value <= 16) {
                
                if(value == 16){
                    // Wildcard
                    mask_v = 0;
                    value = 0;
                }

                if (index % 2 == 0) {
                    //Half a byte into the high bits position
                    value = value << 4;
                    mask_v  = mask_v << 4;
                }

                // Use integer rounding for easy access
                bytes[index / 2] |= value;
                mask[index / 2] |= mask_v;

                index += 1;
            }
        }
        alignment = 1;
        return true;
    }

    size_t size()const{
        return bytes.size();
    }

    void print() const{

        std::cout << std::hex; 
        std::cout << "Pattern: ";

        for(size_t i = 0; i < bytes.size(); i++){

            u8 hmask = mask[i] >> 4;
            u8 lmask = mask[i] & 0x7;
            u8 hbyte = bytes[i] >> 4;
            u8 lbyte = bytes[i] & 0x7;

            if(hmask > 0){
                std::cout << hbyte;
            }else{
                std::cout << '?';
            }
            
            if(lmask > 0){
                std::cout << lbyte;
            }else{
                std::cout << '?';
            }

            if(i + 1 != bytes.size()){
                std::cout << ' ';
            }
        }
        // Restore decimal
        std::cout << std::dec;
    }

};

bool match_pattern(const u8* data, size_t data_size, const Pattern& pattern){
    
    if(data_size != pattern.size()) return false;

    for(size_t j = 0; j<data_size; j++){
        if( (data[j] ^ pattern.bytes[j]) & pattern.mask[j] ) return false;
    }
    return true;
}

std::vector<u64> pattern_scan(const std::vector<u8>& data, const Pattern& pattern){

    if(data.size() < pattern.size()) return {};

    std::vector<u64> offsets;
    const size_t limit = data.size() - pattern.size();
    for(size_t i = 0; i < limit; i+=1){
        if(match_pattern(data.data() + i, pattern.size(), pattern)){
            offsets.push_back(i);
        }
    }
    return offsets;
}