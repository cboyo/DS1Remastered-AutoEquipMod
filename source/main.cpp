//Windows bullshit
#include <Windows.h>
#include <TlHelp32.h>
#include <timeapi.h>
#include <psapi.h>

//C++ libraries
#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <array>
#include <sstream>
#include <cassert>
#include <filesystem>
#include <fstream>

using u8  = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using s8  = int8_t;
using s16 = int16_t;
using s32 = int32_t;
using s64 = int64_t;
using f32 = float;
using f64 = double;


//Other modules
#include "scanner.cpp"
#include "yep_clock.cpp"
#include "os_stuff.cpp"
#include "weapon_ids.cpp"

//Enums

enum class AppState{
    FindingGame,
    FindingInv,
    MainMenu,
    InvStart,
    InvUpdate
};

enum class ItemType :u32{
    Weapon    = 0x00000000,
    Armor     = 0x10000000,
    Ring      = 0x20000000,
    Consumable= 0x40000000,
    None      = 0xFFFFFFFF
};

enum class ArmorType: u32{
    Head  = 0,
    Chest = 1,
    Hands = 2,
    Legs  = 3,
    Unknown
};

enum class WeaponType:u32{
    RightHand,LeftHand,Arrow,Bolt,Unknown
};

enum class Change{
    Null=0,EquipWeapon,EquipArmor,EquipRing
};

enum class Reinforcement{
    Normal_0  = 0,
    Normal_1  = 1 ,
    Normal_2  = 2 ,
    Normal_3  = 3 ,
    Normal_4  = 4 ,
    Normal_5  = 5 ,
    Normal_6  = 6 ,
    Normal_7  = 7 ,
    Normal_8  = 8 ,
    Normal_9  = 9 ,
    Normal_10 = 10,
    Normal_11 = 11,
    Normal_12 = 12,
    Normal_13 = 13,
    Normal_14 = 14,
    Normal_15 = 15,
    Crystal_0 = 100,
    Crystal_1 = 101,
    Crystal_2 = 102,
    Crystal_3 = 103,
    Crystal_4 = 104,
    Crystal_5 = 105,
    Light_0   = 200,
    Light_1   = 201,
    Light_2   = 202,
    Light_3   = 203,
    Light_4   = 204,
    Light_5   = 205,
    Raw_0 = 300,
    Raw_1 = 301,
    Raw_2 = 302,
    Raw_3 = 303,
    Raw_4 = 304,
    Raw_5 = 305,
    Magic_0 = 400,
    Magic_1 = 401,
    Magic_2 = 402,
    Magic_3 = 403,
    Magic_4 = 404,
    Magic_5 = 405,
    Magic_6 = 406,
    Magic_7 = 407,
    Magic_8 = 408,
    Magic_9 = 409,
    Magic_10 = 410,
    Enchanted_0 = 500,
    Enchanted_1 = 501,
    Enchanted_2 = 502,
    Enchanted_3 = 503,
    Enchanted_4 = 504,
    Enchanted_5 = 505,
    Divine_0  = 600,
    Divine_1  = 601,
    Divine_2  = 602,
    Divine_3  = 603,
    Divine_4  = 604,
    Divine_5  = 605,
    Divine_6  = 606,
    Divine_7  = 607,
    Divine_8  = 608,
    Divine_9  = 609,
    Divine_10 = 610,
    Occult_0 = 700,
    Occult_1 = 701,
    Occult_2 = 702,
    Occult_3 = 703,
    Occult_4 = 704,
    Occult_5 = 705,
    Fire_0  = 800,
    Fire_1  = 801,
    Fire_2  = 802,
    Fire_3  = 803,
    Fire_4  = 804,
    Fire_5  = 805,
    Fire_6  = 806,
    Fire_7  = 807,
    Fire_8  = 808,
    Fire_9  = 809,
    Fire_10 = 810,
    Chaos_0 = 900,
    Chaos_1 = 901,
    Chaos_2 = 902,
    Chaos_3 = 903,
    Chaos_4 = 904,
    Chaos_5 = 905
};

//structs
struct Addresses{
    void* inv;
    void* armor_id;
    void* armor_slot;
    void* weapon_id;
    void* weapon_slot;
    void* ring_id;
    void* ring_slot;
    void* in_game;

    void* inv_search_base;
    void* flags_base;
};

struct ConfigOptions{

    bool equip_weapons = true;
    bool equip_head = true;
    bool equip_chest = true;
    bool equip_glove = true;
    bool equip_pants = true;
    bool equip_ring = true;
    bool count_bosses_defeated = false;

};

struct InvSlot{
    ItemType type;
    u32 id;
    u32 count;
    u32 mysterious_number;//Has to do with display order but other than that im clueless
    u32 valid;
    u32 durability;
    u32 hits;


    bool operator ==(const InvSlot& rhs)const{
        return type==rhs.type && id==rhs.id && count==rhs.count && mysterious_number==rhs.mysterious_number&& valid==rhs.valid && durability==rhs.durability && hits==rhs.hits;
    }

    bool operator !=(const InvSlot& rhs)const{
        return !(*this==rhs);
    }
};

struct RingSlots{
    u32 left_id{0xFFFFFFFF};
    u32 right_id{0xFFFFFFFF};
    u32 left_slot{0xFFFFFFFF};
    u32 right_slot{0xFFFFFFFF};
};

using inv_t = std::array<InvSlot,2048>;
struct State{
    AppState state;
    Process process;
    Addresses addrs;
    ConfigOptions config;
    inv_t inventory;
    inv_t inventory_copy;
    //int ring_slot{0};  Removed as of v0.3 update
};



//Utilities

bool in_range(u32 value,u32 a,u32 b){
    return (value>=a && value<b);
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

template<typename T>
void* offset_address(void* base, T offset){
    return (void*)((u8*) base + offset);
}

ArmorType armor_type_from_id(u32 armor_id){
    u32 type = ((armor_id % 10000u) / 1000u);
    if(type < 4) return (ArmorType)type;
    return ArmorType::Unknown;
}

WeaponType weapon_type_from_id(u32 weapon_id){
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

std::string get_weapon_enchantment_name(u64 weapon_id){

    Reinforcement reinforcement_id = (Reinforcement)(weapon_id % 1000);

    switch(reinforcement_id){
        case Reinforcement::Normal_0:  return "Normal_0";break;
        case Reinforcement::Normal_1:   return "Normal_1";break;
        case Reinforcement::Normal_2:   return "Normal_2";break;
        case Reinforcement::Normal_3:   return "Normal_3";break;
        case Reinforcement::Normal_4:   return "Normal_4";break;
        case Reinforcement::Normal_5:   return "Normal_5";break;
        case Reinforcement::Normal_6:   return "Normal_6";break;
        case Reinforcement::Normal_7:   return "Normal_7";break;
        case Reinforcement::Normal_8:   return "Normal_8";break;
        case Reinforcement::Normal_9:   return "Normal_9";break;
        case Reinforcement::Normal_10:  return "Normal_10";break;
        case Reinforcement::Normal_11:  return "Normal_11";break;
        case Reinforcement::Normal_12:  return "Normal_12";break;
        case Reinforcement::Normal_13:  return "Normal_13";break;
        case Reinforcement::Normal_14:  return "Normal_14";break;
        case Reinforcement::Normal_15:  return "Normal_15";break;
        case Reinforcement::Crystal_0:  return "Crystal_0";break;
        case Reinforcement::Crystal_1:  return "Crystal_1";break;
        case Reinforcement::Crystal_2:  return "Crystal_2";break;
        case Reinforcement::Crystal_3:  return "Crystal_3";break;
        case Reinforcement::Crystal_4:  return "Crystal_4";break;
        case Reinforcement::Crystal_5:  return "Crystal_5";break;
        case Reinforcement::Light_0:    return "Light_0";break;
        case Reinforcement::Light_1:    return "Light_1";break;
        case Reinforcement::Light_2:    return "Light_2";break;
        case Reinforcement::Light_3:    return "Light_3";break;
        case Reinforcement::Light_4:    return "Light_4";break;
        case Reinforcement::Light_5:    return "Light_5";break;
        case Reinforcement::Raw_0:      return "Raw_0";break;
        case Reinforcement::Raw_1:      return "Raw_1";break;
        case Reinforcement::Raw_2:      return "Raw_2";break;
        case Reinforcement::Raw_3:      return "Raw_3";break;
        case Reinforcement::Raw_4:      return "Raw_4";break;
        case Reinforcement::Raw_5:      return "Raw_5";break;
        case Reinforcement::Magic_0:    return "Magic_0";break;
        case Reinforcement::Magic_1:    return "Magic_1";break;
        case Reinforcement::Magic_2:    return "Magic_2";break;
        case Reinforcement::Magic_3:    return "Magic_3";break;
        case Reinforcement::Magic_4:    return "Magic_4";break;
        case Reinforcement::Magic_5:    return "Magic_5";break;
        case Reinforcement::Magic_6:    return "Magic_6";break;
        case Reinforcement::Magic_7:    return "Magic_7";break;
        case Reinforcement::Magic_8:    return "Magic_8";break;
        case Reinforcement::Magic_9:    return "Magic_9";break;
        case Reinforcement::Magic_10:   return "Magic_10";break;
        case Reinforcement::Enchanted_0: return "Enchanted_0";break;
        case Reinforcement::Enchanted_1: return "Enchanted_1";break;
        case Reinforcement::Enchanted_2: return "Enchanted_2";break;
        case Reinforcement::Enchanted_3: return "Enchanted_3";break;
        case Reinforcement::Enchanted_4: return "Enchanted_4";break;
        case Reinforcement::Enchanted_5: return "Enchanted_5";break;
        case Reinforcement::Divine_0:   return "Divine_0";break;
        case Reinforcement::Divine_1:   return "Divine_1";break;
        case Reinforcement::Divine_2:   return "Divine_2";break;
        case Reinforcement::Divine_3:   return "Divine_3";break;
        case Reinforcement::Divine_4:   return "Divine_4";break;
        case Reinforcement::Divine_5:   return "Divine_5";break;
        case Reinforcement::Divine_6:   return "Divine_6";break;
        case Reinforcement::Divine_7:   return "Divine_7";break;
        case Reinforcement::Divine_8:   return "Divine_8";break;
        case Reinforcement::Divine_9:   return "Divine_9";break;
        case Reinforcement::Divine_10:  return "Divine_10";break;
        case Reinforcement::Occult_0:   return "Occult_0";break;
        case Reinforcement::Occult_1:   return "Occult_1";break;
        case Reinforcement::Occult_2:   return "Occult_2";break;
        case Reinforcement::Occult_3:   return "Occult_3";break;
        case Reinforcement::Occult_4:   return "Occult_4";break;
        case Reinforcement::Occult_5:   return "Occult_5";break;
        case Reinforcement::Fire_0:     return "Fire_0";break;
        case Reinforcement::Fire_1:     return "Fire_1";break;
        case Reinforcement::Fire_2:     return "Fire_2";break;
        case Reinforcement::Fire_3:     return "Fire_3";break;
        case Reinforcement::Fire_4:     return "Fire_4";break;
        case Reinforcement::Fire_5:     return "Fire_5";break;
        case Reinforcement::Fire_6:     return "Fire_6";break;
        case Reinforcement::Fire_7:     return "Fire_7";break;
        case Reinforcement::Fire_8:     return "Fire_8";break;
        case Reinforcement::Fire_9:     return "Fire_9";break;
        case Reinforcement::Fire_10:    return "Fire_10";break;
        case Reinforcement::Chaos_0:    return "Chaos_0";break;
        case Reinforcement::Chaos_1:    return "Chaos_1";break;
        case Reinforcement::Chaos_2:    return "Chaos_2";break;
        case Reinforcement::Chaos_3:    return "Chaos_3";break;
        case Reinforcement::Chaos_4:    return "Chaos_4";break;
        case Reinforcement::Chaos_5:    return "Chaos_5";break;
        default:                        return "UNKNOWN";
    }

}






//Looking in memory

bool read_ds1r_flag(Process& process, void* flags_base_address, u64 flag_id){
    //Magic tables found from DS1 debugger
    u64 flag_group_table[10];
    flag_group_table[0]= 0x00000;
    flag_group_table[1]= 0x00500;
    flag_group_table[5]= 0x05F00;
    flag_group_table[6]= 0x0B900;
    flag_group_table[7]= 0x11300;

    u64 flag_area_table[200];
    flag_area_table[000] =   0;
    flag_area_table[100] =   1;
    flag_area_table[101] =   2;
    flag_area_table[102] =   3;
    flag_area_table[110] =   4;
    flag_area_table[120] =   5;
    flag_area_table[121] =   6;
    flag_area_table[130] =   7;
    flag_area_table[131] =   8;
    flag_area_table[132] =   9;
    flag_area_table[140] =  10;
    flag_area_table[141] =  11;
    flag_area_table[150] =  12;
    flag_area_table[151] =  13;
    flag_area_table[160] =  14;
    flag_area_table[170] =  15;
    flag_area_table[180] =  16;
    flag_area_table[181] =  17;

    u64 group = (flag_id / 10'000'000);
    u64 area = (flag_id / 10'000) % 1000;
    u64 section = (flag_id / 1000) % 10;
    u64 number = flag_id % 1000;

    u64 offset = flag_group_table[group];
    offset += flag_area_table[area] * 0x500;
    offset += section * 128;
    offset += (number - (number % 32)) / 8;


    u32 mask = 0x80000000 >> (number % 32);

    u32 value;
    if(read_memory(process, offset_address(flags_base_address, offset), value)){
        return ((value & mask) > 0);
        std::cout<<offset_address(flags_base_address, offset)<<" "<<value<<" "<<mask<<" "<<((value & mask) > 0)<<'\n';
    }
    std::cout<<"Failed to read flag value: "<<flag_id<<'\n';
    std::cout<<"\tGroup:"<<group<<" Area:"<<area<<" Section:"<<section<<" Number:"<<number<<'\n';
    std::cout<<"\tBase address: "<<flags_base_address<<" Reading at: "<<offset_address(flags_base_address, offset)<<'\n';
    return 0;
}

u64 get_defeated_boss_count(Process& process, void* flags_base){
    
    struct BossFlagEntry{
        u64 defeated_id;
        u64 offset;
        u64 mask;
        std::string name;
    };

    std::vector<BossFlagEntry> boss_flags_table={
        {       2,     0,   536870912, "Gaping Dragon"},
        {       3,     0,   268435456, "Bell Gargoyles"},
        {       4,     0,   134217728, "Priscilla"},
        {       5,     0,    67108864, "Sif"},
        {       6,     0,    33554432, "Pinwheel"},
        {       7,     0,    16777216, "Nito"},
        {       9,     0,     4194304, "Chaos Witch Quelaag"},
        {      10,     0,     2097152, "Bed of Chaos"},
        {      11,     0,     1048576, "Iron Golem"},
        {      12,     0,      524288, "Ornstein & Smough"},
        {      13,     0,      262144, "4 Kings"},
        {      14,     0,      131072, "Seath"},
        {      15,     0,       65536, "Gwyn"},
        {      16,     0,       32768, "Asylum Demon"},
        {11010901,  3952,    67108864, "Taurus Demon"},
        {11010902,  3952,    33554432, "Capra Demon"},
        {11200900,  7792,   134217728, "Moonlight Butterfly"},
        {11210000,  8960,  2147483648, "Sanctuary Guardian"},
        {11210001,  8960,  1073741824, "Artorias"},
        {11210002,  8960,   536870912, "Manus"},
        {11210004,  8960,   134217728, "Kalameet"},
        {11410410, 15408,          32, "Demon Firesage"},
        {11410900, 15472,   134217728, "Ceaseless Discharge"},
        {11410901, 15472,    67108864, "Centipede Demon"},
        {11510900, 18032,   134217728, "Gwyndolin"},
        {11810900, 23152,   134217728, "Stray Demon"},
    };
    u64 last_offset = 123456712345;//Value not in table
    u32 cached_value = 0;
    u64 total = 0;
    //Small optimization from ~40us to ~15 by not reading the memory for every single flag
    //Use the fact that some of these are in the same bucket
    //Might not be much but this kind of applications should have as minimal CPU time as possible IMO
    for(BossFlagEntry& e:boss_flags_table){
        // bool result = read_ds1r_flag(process,  flags_base, e.defeated_id);
        bool result = false;
        if(last_offset != e.offset){
            last_offset = e.offset;
            if(!read_memory(process, offset_address(flags_base, e.offset), cached_value)){
                std::cout<<"Failed to read memory for bosses defeated\n";
                return 0;
            }
        }
        result = (cached_value & e.mask) > 0;
        if(result) total += 1;
        // std::cout<<"Defeated?: "<<result<<" "<<e.name<<'\n';
    }
    return total;
}

void* find_world_flags_address(Process process){

    Pattern p;
    p.load_bytes({0x48, 0x8B, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x99, 0x33, 0xC2, 0x45, 0x33, 0xC0, 0x2B, 0xC2, 0x8D, 0x50, 0xF6},
                    {1,    1,    1,    0,    0,    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,    1});

    auto addresses = scan_process_module(process, p, L"DarkSoulsRemastered.exe");
    if(addresses.size() != 1){
        std::cout<<"Disaster"<<'\n';
        return 0;
    }

    void* ptr = addresses[0];
    s32 my_int = 0;

    read_memory(process, offset_address(ptr, 3llu), my_int);
    void* new_ptr = offset_address(offset_address(ptr, my_int), 7llu);
    // std::cout<<"New ptr: "<<new_ptr<<'\n';
    new_ptr = chase_pointer(process, (u8*)new_ptr, {0x0, 0x0});
    // possible_addresses[i] = (u64)new_ptr;
    
    return new_ptr;
}

std::vector<void*> find_inventory_address(Process process){
    
    Pattern p;
    
    //Htf did this work right
    //Basic pattern to find the inventory
    // p.load_words({-1u,0u,2048u,0u},{0,1,1,1}); 
    
    //Got this from a Cheat Engine Table, not sure how good it is(actually good)
    // 48 8B 05 xx xx xx xx 45 33 ED 48 8B F1 48 85 C0
    p.load_bytes({0x48, 0x8B, 0x05, 0x00, 0x00, 0x00, 0x00, 0x45, 0x33, 0xED, 0x48, 0x8B, 0xF1, 0x48, 0x85, 0xC0}, 
                 {   1,    1,    1,    0,    0,    0,    0,    1,    1,    1,    1,    1,    1,    1,    1,    1});
    

    std::vector<void*> addresses = scan_process_module(process, p, L"DarkSoulsRemastered.exe");

    std::cout<<"Found "<<addresses.size()<<" possible addresses\n";

    if(addresses.size() != 1) return addresses;

    void* address = addresses[0];
    s32 my_int = 0;
    //The offset based of 3 and 7 are just based on the cheat engine table
    read_memory(process, offset_address(address, 3llu), my_int);
    void* new_ptr = offset_address(offset_address(address, my_int), 7llu);

    // std::cout<<"New ptr: "<<new_ptr<<'\n';
    new_ptr = chase_pointer(process, (u8*)new_ptr, {0x10, 0x10});

    addresses[0] = new_ptr;
        
    return addresses;
}

void setup_inventory_addresses(Addresses& addrs, void* signature_address){
    addrs.inv         = offset_address(offset_address(signature_address, +0X010), +0x660);
    addrs.armor_id    = offset_address(offset_address(signature_address, -0x32C), +0x660);
    addrs.weapon_id   = offset_address(offset_address(signature_address, -0x34C), +0x660);
    addrs.armor_slot  = offset_address(offset_address(signature_address, -0x3AC), +0x660);
    addrs.weapon_slot = offset_address(offset_address(signature_address, -0x3CC), +0x660);
    addrs.ring_slot   = offset_address(offset_address(signature_address, -0x398), +0x660);
    addrs.ring_id     = offset_address(offset_address(signature_address, -0x318), +0x660);
    addrs.in_game     = offset_address(offset_address(signature_address, -0x660), +0x660);
}

bool try_find_process(Process& process){
    const wchar_t* process_name = L"DarkSoulsRemastered.exe";
    process = find_process_id(process_name);
    return process.handle;
}

bool read_inventory(Process process,void* addr,inv_t& inv){
    SIZE_T read=0;
    if(ReadProcessMemory(process.handle, addr, inv.data(), sizeof(inv), &read)){
        return read==sizeof(inv);
    }
    return false;
}

bool in_main_menu(State& state){
    u32 menu = 0;
    SIZE_T read = 0;
    if(ReadProcessMemory(state.process.handle, state.addrs.in_game, &menu, sizeof(menu), &read)){
        if(read != sizeof(menu)) return true;
        return menu == UINT32_MAX;
    }
    return true;
}

bool find_addresses(State& state){
    
    auto inventory_address = find_inventory_address(state.process);
    if(inventory_address.size()>1){
        std::cout<<"Multiple signatures found, can't pin down correct address\n";
        return false;
        std::cout<<"Try restarting the game or wait for another scan\n";
        Sleep(5000);
    }else if(inventory_address.size()==0){
        std::cout<<"No signatures found, can't pin down correct address\n";
        return false;

        std::cout<<"Try restarting the game or wait for another scan\n";
        Sleep(5000);
    }else{

        if(state.config.count_bosses_defeated){

            state.addrs.flags_base = find_world_flags_address(state.process);
            if(!state.addrs.flags_base){
                std::cout<<"Failed to find boss count address\n";
                return false;
            }
        }
    }
    setup_inventory_addresses(state.addrs, inventory_address[0]);
    return true;

    
}


// Program actions

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

void write_id_and_slot(State& state, u32 item_id, void* id_ptr, u32 slot, void* slot_ptr){
    if(id_ptr&&slot_ptr){
        if(!WriteProcessMemory(state.process.handle, id_ptr, &item_id, sizeof(item_id), nullptr)){
            std::cout<<"Failed to write item id, item not equipped\n";
        }
        //Writing the slot is more a convenience than anything
        if(!WriteProcessMemory(state.process.handle, slot_ptr, &slot, sizeof(slot), nullptr)){
            std::cout<<"Failed to write item slot(Not much of a problem)\n";
        }
    }
}

void write_rings_slots(State& state, RingSlots& rings){
    //@CAUTION: Trick to write both in only one pass assumes that left and right are contiguous in memory
    if(!WriteProcessMemory(state.process.handle, state.addrs.ring_id, &rings.left_id, sizeof(u32)*2, nullptr)){
        std::cout<<"Failed to write ring id, ring not equipped\n";
    }
    //Writing the slot is more a convenience than anything
    if(!WriteProcessMemory(state.process.handle, state.addrs.ring_slot, &rings.left_slot, sizeof(u32)*2, nullptr)){
        std::cout<<"Failed to write ring slot(Not much of a problem)\n";
    }
}

bool read_ring_slots(State& state,RingSlots& ring_slot){
    //@CAUTION: Trick to read both in only one pass assumes that left and right are contiguous in memory
    if(!ReadProcessMemory(state.process.handle, state.addrs.ring_id, &ring_slot.left_id, sizeof(u32)*2u, nullptr)){
        return false;
    }
    if(!ReadProcessMemory(state.process.handle, state.addrs.ring_slot, &ring_slot.left_slot, sizeof(u32)*2u, nullptr)){
        return false;
    }
    return true;
}

void execute_change(Change change, State& state, size_t inv_index){

    if(change == Change::Null)return; //Also redundant

    u32& item_id = state.inventory_copy[inv_index].id;
    Addresses& addrs = state.addrs;
    void* id_ptr = nullptr;
    void* slot_ptr = nullptr;
    if(change == Change::EquipArmor){
        ArmorType armor_type = armor_type_from_id(item_id);
        if(armor_type == ArmorType::Unknown){
            std::cout<<"Unknown armor type, no action executed\n";
        }else{
            bool execute = true;
            if(armor_type == ArmorType::Head){
                std::cout<<"Equip helmet\n";
                execute = state.config.equip_head;
            }else if(armor_type == ArmorType::Hands){
                std::cout<<"Equip gloves\n";
                execute = state.config.equip_glove;
            }else if(armor_type == ArmorType::Chest){
                std::cout<<"Equip chest armor\n";
                execute = state.config.equip_chest;
            }else if(armor_type == ArmorType::Legs){
                std::cout<<"Equip pantalons\n";
                execute = state.config.equip_pants;
            }

            if(execute){
                s32 offset = 4 * (int)armor_type;
                id_ptr   = offset_address(addrs.armor_id,   offset);
                slot_ptr = offset_address(addrs.armor_slot, offset);
                write_id_and_slot(state, item_id, id_ptr, inv_index, slot_ptr);
            }
        }
    }else if(change == Change::EquipWeapon && state.config.equip_weapons){
        auto weapon_type = weapon_type_from_id(item_id);
        if(weapon_type == WeaponType::Unknown){
            std::cout<<"Unknown weapon type, no action executed\n";
        }else{
            s32 offset = 0;
            if(weapon_type == WeaponType::Arrow){
                std::cout<<"Equip arrows\n";
                offset=16;
            }else if(weapon_type == WeaponType::Bolt){
                std::cout<<"Equip bolts\n";
                offset=20;
            }else if(weapon_type == WeaponType::RightHand){
                std::cout<<"Equip right hand weapon\n";
                offset = 4;
            }else if(weapon_type == WeaponType::LeftHand){
                std::cout<<"Equip left hand weapon\n";
                offset = 0;//Redundant
            }
            id_ptr   = offset_address(addrs.weapon_id,   offset);
            slot_ptr = offset_address(addrs.weapon_slot, offset);
            write_id_and_slot(state,item_id,id_ptr,inv_index,slot_ptr);
        }
    }else if(change==Change::EquipRing && state.config.equip_ring){
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
        if(!    ((ring_slots.left_id == 0xFFFFFFFF)   &&   (ring_slots.right_id != 0xFFFFFFFF))    ){
            ring_slots.right_id   = ring_slots.left_id;
            ring_slots.right_slot = ring_slots.left_slot;
        }
        ring_slots.left_id   = item_id;
        ring_slots.left_slot = inv_index;
        write_rings_slots(state, ring_slots); 
    }
}




// Program logic

void update_loop(State& state){
    bool trying_to_find = false;
    u64 search_fails = 0;
    u64 main_menu_stares = 0;
    Stopwatch run_time = time_start_watch();
    Stopwatch boss_count_watch;
    u64 boss_count_cooldown_us = 5000000;

    while(true){
        if(state.state==AppState::FindingGame){
            if(!trying_to_find){
                std::cout<<"Trying to find Darks Souls Remastered process\n";
                trying_to_find = true;
                search_fails = 0;
            }

            if(try_find_process(state.process)){
                state.state=AppState::FindingInv;
                trying_to_find = false;
                std::cout<<'\n';
                std::cout<<"Found Dark Souls Remastered process\n";

            }else{
                search_fails += 1;
                std::cout<<"\rFailed to find Dark Souls Remastered process";
                if(search_fails > 1){
                    std::cout<<" x "<<search_fails;
                }
                Sleep(5000);
            }
        }else{//Check if application closes
            //No clue if this is the correct way
            //Read online that will be active until I close my handle
            //But works so IDK Windows is weird
            DWORD statuscode;
            GetExitCodeProcess(state.process.handle,&statuscode);
            if(statuscode!=STILL_ACTIVE){
                std::cout<<"\nGame closed, going back to search for it\n";
                std::cout<<"---------------->Close the terminal if you are done<-----------------\n";
                state.state=AppState::FindingGame;
                CloseHandle(state.process.handle);
            }
        }
        if(state.state==AppState::FindingInv){
            std::cout<<"Scanning game to find signatures...\n";

            bool search_result = find_addresses(state);
            if(search_result){
                std::cout<<"Unique signature found! Setting everything up\n";
                state.state=AppState::MainMenu;
                state.inventory={};
                state.inventory_copy={};
                boss_count_watch = time_start_watch();
            }else{
                std::cout<<"Try restarting the game or wait for another scan\n";
                Sleep(5000);
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
                std::cout<<"\nGoing into the game\n";
                main_menu_stares = 0;
                state.state=AppState::InvStart;
            }else{
                main_menu_stares += 1;
                std::cout<<"\rStaring at the main menu";
                if(main_menu_stares > 1){
                    std::cout<<" x "<<main_menu_stares;
                }
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
                    int free_slots = 0;
                    for(int i = 0;i<state.inventory_copy.size();i++){
                        if(state.inventory[i] != state.inventory_copy[i]){
                            auto change = identify_change(state.inventory[i],state.inventory_copy[i]);
                            if(change!=Change::Null) execute_change(change,state,i);
                        }
                        if(!state.inventory[i].valid) free_slots += 1;
                    }


                    state.inventory=state.inventory_copy;
                }

                if(state.config.count_bosses_defeated){

                    if(time_watch_elapsed(&boss_count_watch) > boss_count_cooldown_us){
                        time_watch_reset(&boss_count_watch);
                        // Stopwatch a = time_start_watch();
                        u64 count = get_defeated_boss_count(state.process, state.addrs.flags_base);
                        // microsecond_t b = time_watch_elapsed(&a);
                        // std::cout<<"Time for boss count: "<<b<<"Us\n";
                        // std::cout<<"Boss count: "<<count<<'\n';
                        write_file_contents_binary("boss_count.txt", std::to_string(count));
                    }
                }
            }
            Sleep(1000);
        }
    }
}

void parse_confing_file(std::string& buffer, ConfigOptions& config){
    std::string buffer_copy;
    buffer_copy.reserve(buffer.size());
    //Increase if need to fit larger variable names
    char var_name[32] = {};
    int var_value = -1;
    std::cout<<"Reading config file\n";
    for(u64 i = 0; i<buffer.size(); i++){
        
        char c = buffer[i];
        buffer_copy.push_back(c);

        if(c == '\n' || i+1 == buffer.size()){
            //@CAUTION: scanf takes the size of the buffer, minus null at the end
            static_assert(sizeof(var_name) == 32);
            std::sscanf(buffer_copy.data(), "%31s %i", var_name, &var_value);


            if(var_value == 0 || var_value == 1){

                std::cout<<"\""<<var_name<<"\" "<<var_value<<'\n';
                if(std::strcmp(var_name, "weapon") == 0){
                    config.equip_weapons = var_value;
                }        
                if(std::strcmp(var_name, "head") == 0){
                    config.equip_head = var_value;
                }        
                if(std::strcmp(var_name, "chest") == 0){
                    config.equip_chest = var_value;
                }        
                if(std::strcmp(var_name, "gloves") == 0){
                    config.equip_glove = var_value;
                }        
                if(std::strcmp(var_name, "pants") == 0){
                    config.equip_pants = var_value;
                }        
                if(std::strcmp(var_name, "ring") == 0){
                    config.equip_ring = var_value;
                }        
                if(std::strcmp(var_name, "boss_defeated_count") == 0){
                    config.count_bosses_defeated = var_value;
                }        
            }

            buffer_copy.clear();
            memset(var_name, 0, sizeof(var_name) * sizeof(*var_name));
            var_value = -1;
        }
    }
}

bool read_config_file(State& state){
    std::filesystem::path config_file_path = "autoequip_config.txt";
    std::string file_contents = read_file_contents_binary(config_file_path);

    if(file_contents.empty()){
        std::cout<<"Configuration file not loaded, using defaults\n";

        //Default configuration file
        ///////////////////////////////////////////
        file_contents += "weapon 1\n";
        file_contents += "head 1\n";
        file_contents += "chest 1\n";
        file_contents += "gloves 1\n";
        file_contents += "pants 1\n";
        file_contents += "ring 1\n";
        file_contents += "boss_defeated_count 0\n";
        ///////////////////////////////////////////
        if(!std::filesystem::exists(config_file_path)){
            std::cout<<"Writing configuration file\n";
            write_file_contents_binary(config_file_path, file_contents);
        }
    }

    parse_confing_file(file_contents, state.config);
}

int exit_with_error(std::string error_message){
        std::cout<<error_message;
        std::cout<<"This console will close in 5 seconds\n";
        Sleep(5000);
        return EXIT_FAILURE;
}

int main(){

    //Cool ladder test
    assert(beutify_bytes(1) == "1B");
    assert(beutify_bytes(12) == "12B");
    assert(beutify_bytes(123) == "123B");
    assert(beutify_bytes(1234) == "1.23KB");
    assert(beutify_bytes(12345) == "12.34KB");
    assert(beutify_bytes(123456) == "123.45KB");
    assert(beutify_bytes(1234567) == "1.23MB");
    assert(beutify_bytes(12345678) == "12.34MB");
    assert(beutify_bytes(123456789) == "123.45MB");
    assert(beutify_bytes(1234567890) == "1.23GB");

    std::string logo = "AutoEquip for Dark Souls Remastered by chainsboyo\n";
    std::cout<<logo;

    HANDLE handle = CreateMutexW( NULL, TRUE, L"chainsboyo_AutoEquip_DSR");
    if(!handle){
        return exit_with_error("Failed to created instance mutex\n");
    }
    if(ERROR_ALREADY_EXISTS == GetLastError()){
        return exit_with_error("Another instance of AutoEquip_DSR is already running\n");
    }
    if(!set_path()){
        return exit_with_error("Error setting path\n");
    }

    State state;

    read_config_file(state);
    update_loop(state);
    //Will never reach here but Windows should take of it
    ReleaseMutex(handle); 
    CloseHandle(handle);
    return 0;
}