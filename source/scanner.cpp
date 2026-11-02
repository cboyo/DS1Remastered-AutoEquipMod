struct Pattern{
    std::vector<u8> bytes;
    std::vector<u8> mask;
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
        mask.clear();
        bytes.clear();
        bytes.resize(string_size / 2, 0);
        mask.resize(string_size / 2, 0);

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
                std::cout << (uint32_t)hbyte;
            }else{
                std::cout << '?';
            }
            
            if(lmask > 0){
                std::cout << (uint32_t)lbyte;
            }else{
                std::cout << '?';
            }

            if(i + 1 != bytes.size()){
                std::cout << ' ';
            }
        }

        // Restore decimal
        std::cout << std::dec;
        std::cout << '\n';
    }

};

bool match_pattern(const u8* data, size_t data_size, const Pattern& pattern){
    
    if(data_size != pattern.size()) return false;

    for(size_t j = 0; j<data_size; j++){
        if( (data[j] ^ pattern.bytes[j]) & pattern.mask[j] ) return false;
    }
    return true;
}

std::vector<u64> pattern_scan(const u8* data, size_t data_size, const Pattern& pattern){

    if(data_size < pattern.size()) return {};
    if(pattern.size() == 0) return {};

    std::vector<u64> offsets;
    const size_t limit = data_size - pattern.size();
    for(size_t i = 0; i <= limit; i++){
        if(match_pattern(data + i, pattern.size(), pattern)){
            offsets.push_back(i);
        }
    }
    return offsets;
}

std::vector<u64> pattern_scan(const std::vector<u8>& data, const Pattern& pattern){
    return pattern_scan(data.data(), data.size(), pattern);
}

bool pattern_tests(){
    
    const u8 data[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
        0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
        0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
        0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
        0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
        0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0x6F,
        0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F,
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F,
        0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF,
        0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xBE, 0xBF,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF,
        0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0xD5, 0xD6, 0xD7, 0xD8, 0xD9, 0xDA, 0xDB, 0xDC, 0xDD, 0xDE, 0xDF,
        0xE0, 0xE1, 0xE2, 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0xEF,
        0xF0, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF,
    };
    {
        Pattern pattern;
        assert(pattern.load_bytes("?? ?? ??"));
        std::vector<u64> result = pattern_scan(data, sizeof(data), pattern);
        assert(!result.empty());
        assert(result[0] == 0);

        // Another load in same instance
        assert(pattern.load_bytes("05 06 07"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(!result.empty());
        assert(result[0] == 5);

        // Half a byte mask
        assert(pattern.load_bytes("0x x6 0x"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(!result.empty());
        assert(result[0] == 5);

        // Multiple matches with mask
        assert(pattern.load_bytes("?5 ?6 ?7"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(result.size() == 16);
        assert(result[1] == 21);

        // All matches
        assert(pattern.load_bytes("??"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(result.size() == 256);

        assert(pattern.load_bytes("?? ??"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(result.size() == 255);

        // End of the bytes
        assert(pattern.load_bytes("FD FE FF"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(!result.empty());

        // No match
        assert(pattern.load_bytes("B4 B3"));
        result = pattern_scan(data, sizeof(data), pattern);
        assert(result.empty());

    }
    return true;
}