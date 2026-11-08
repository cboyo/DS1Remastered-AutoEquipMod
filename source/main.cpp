#ifdef SAMURAI_DEBUG
    #define DEBUG
#else
    #define NDEBUG
#endif

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
#include <cassert>
#include <filesystem>
#include <fstream>
#include <unordered_map>

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
#include "utils.cpp"
#include "scanner.cpp"
#include "yep_clock.cpp"
#include "os_stuff.cpp"
#include "equipment.cpp"

// constants
const wchar_t* EXE_NAME = L"DarkSoulsRemastered.exe";
constexpr u32 EQUIPMENT_MAX_LEVEL = 210u; // Result from the differen equipment reinforcement limits LCM(5, 10, 15, 21)

// enums
enum class AppState{
    FindingGame,
    FindingInv,
    MainMenu,
    InvStart,
    InvUpdate
};

enum class ItemType : u32{
    Weapon     = 0x00000000,
    Armor      = 0x10000000,
    Ring       = 0x20000000,
    Consumable = 0x40000000,
    None       = 0xFFFFFFFF
};

enum class ArmorType : u32{
    Head  = 0,
    Chest = 1,
    Hands = 2,
    Legs  = 3,
    Unknown
};

enum class WeaponType : u32{
    RightHand = 0,
    LeftHand,
    Arrow,
    Bolt,
    Unknown
};

enum class Change : u32{
    Null = 0,
    EquipWeapon,
    EquipArmor,
    EquipRing,
    UpgradedWeapon
};

enum class SpEffects : u32{
    DragonHeadStone = 1520,
    DragonTorsoStone = 1530,
    EggParasite = 5213,
    EvolvedEggParasite = 5214
};

// structs
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
    void* sp_effect_base;
};

struct ConfigOptions{
    s32 auto_upgrades = 0;
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
    u32 mysterious_number; //Has to do with display order but other than that im clueless
    u32 valid;
    u32 durability;
    u32 hits;

    bool operator ==(const InvSlot& rhs)const{
        // Plain memory compare suffices
        return std::memcmp(this, &rhs, sizeof(*this)) == 0;
        //return type==rhs.type && id==rhs.id && count==rhs.count && mysterious_number==rhs.mysterious_number && valid==rhs.valid && durability==rhs.durability && hits==rhs.hits;
    }

    bool operator !=(const InvSlot& rhs)const{
        return !(*this == rhs);
    }
};

struct RingSlots{
    u32 left_id{0xFFFFFFFF};
    u32 right_id{0xFFFFFFFF};
    u32 left_slot{0xFFFFFFFF};
    u32 right_slot{0xFFFFFFFF};
};

struct UpgradeLevels{
    u32 standard[2];
    u32 crystal[2];
    u32 lighting[2];
    u32 raw[2];
    u32 magic[2];
    u32 enchanted[2];
    u32 divine[2];
    u32 occult[2];
    u32 fire[2];
    u32 chaos[2];
    u32 dragon[2];
    u32 twinkling[2];
    u32 demon[2];
    u32 pyro[2];

    u32 armor_standard[4];
    u32 armor_special[4];
};

using inv_t = std::array<InvSlot, 2048>;
struct State{
    AppState state;
    Process process;
    Addresses addrs;
    ConfigOptions config;
    inv_t inventory;
    inv_t inventory_copy;
    UpgradeLevels upg_levels;
    //int ring_slot{0};  Removed as of v0.3 update
};


//Utilities

ArmorType armor_type_from_id(u32 armor_id){
    u32 type = ((armor_id % 10000u) / 1000u);
    if(type < 4) return (ArmorType)type;
    return ArmorType::Unknown;
}

WeaponType weapon_type_from_id(u32 weapon_id){
    if      (in_range(weapon_id, 101000u, 102000u)){
        // Parry Dagger
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id, 2000000u, 2100000u)){
        // Arrows
        return WeaponType::Arrow;
    }else if(in_range(weapon_id, 2100000u, 2200000u)){
        // Bolts
        return WeaponType::Bolt;
    }else if(in_range(weapon_id, 1300000u, 1600000u)){
        // Catalyst + Shields
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id, 9000000u, 9010000u)){
        // More shields
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id, 9014000u, 9015000u)){
        // Cleansing Greatshield
        return WeaponType::LeftHand;
    }else if(in_range(weapon_id, 9017000u, 9019000u)){
        // Manus and Oolacile Catalyst
        return WeaponType::LeftHand;
    }
    //I should really do a better check for invalid values
    //Default to right hand
    return WeaponType::RightHand;
}

UpgradePath get_weapon_path_from_id(u32 weapon_id){
    weapon_id = (weapon_id / 100) * 100;
    auto f = weapon_upgrade_paths.find(weapon_id);
    if(f != weapon_upgrade_paths.end()){
        return f->second;
    }else{
        std::cout << "Weapon id not found\n";
        return UpgradePath::Unknown;
    }
}

UpgradePath get_armor_path_from_id(u32 armor_id){
    // Some armor and weapons share id so we either create a 
    // discriminant or leave them at separate tables
    armor_id = (armor_id / 100) * 100;
    auto f = armor_upgrade_paths.find(armor_id);
    if(f != armor_upgrade_paths.end()){
        return f->second;
    }else{
        std::cout << "Armor id not found" << '\n';
        return UpgradePath::Unknown;
    }
}

u32 get_path_reinforcement_limit(UpgradePath path){
    switch(path){
        case UpgradePath::NoUpgrade: 
            // Levels 0-0
            return 0;
        case UpgradePath::Standard:
            // Levels 0-15
            return 15;
        case UpgradePath::Divine:
        case UpgradePath::Magic:
        case UpgradePath::Fire:
            //Levels 0-10
            return 10;
        case UpgradePath::Pyromancy:
            // Special, lookup the values on equipment table
            // Normal pyro hand and ascended are the treated
            // as the same weapon but at different levels
            return 21;
        case UpgradePath::Demon:
        case UpgradePath::Crystal:
        case UpgradePath::Lightning:
        case UpgradePath::Raw:
        case UpgradePath::Occult:
        case UpgradePath::Enchanted:
        case UpgradePath::Chaos:
        case UpgradePath::Dragon:
        case UpgradePath::Twinkling:
            // Levels 0-5
            return 5;
        case UpgradePath::ArmorLight:
        case UpgradePath::ArmorHeavy:
            return 10;
        case UpgradePath::ArmorSpecial:
            return 5;
        default:
            return 0;
    }

}

u32 get_equipment_reinforcement_from_id(UpgradePath path, u32 id){
    u32 reinforcement = 0;
    if(path == UpgradePath::Pyromancy){
        // Pyro is special due to weapon level is not in the
        // lower id, but rather all the levels of the flame
        // are a different item id, kinda like infusion
        reinforcement = (id / 100) % 100;
        if(reinforcement > 15){
            // Ascended pyro flame 0-5
            // 1332000, 1332100, 1332200, 1332300, 1332400, 1332500
            // Ascended+0 is considered +16 pyro flame
            reinforcement -= 4;
        }
    }else{
        reinforcement = id % 100;
    }
    return reinforcement;
}

u32 get_equipment_reinforcement_from_level(UpgradePath path, u32 level){
    if(level > EQUIPMENT_MAX_LEVEL) level = EQUIPMENT_MAX_LEVEL;
    u32 max_reinforcement = get_path_reinforcement_limit(path);
    u32 reinforcement = 0;
    if(max_reinforcement != 0){
        // Formula fails for equipment with max level 0
        reinforcement = level / (EQUIPMENT_MAX_LEVEL / max_reinforcement);
    }
    if(reinforcement > max_reinforcement) reinforcement = max_reinforcement;
    return reinforcement;
}

u32 get_equipment_level_from_reinforcement(UpgradePath path, u32 reinforcement){
    u32 max_reinforcement = get_path_reinforcement_limit(path);
    if(reinforcement > max_reinforcement) reinforcement = max_reinforcement;
    u32 level = 0;
    if(max_reinforcement != 0){
        // Formula fails for weapons with max level 0
        level = reinforcement * (EQUIPMENT_MAX_LEVEL / max_reinforcement);
    }
    // std::cout << "In: " << weapon_level << " Out: " << weapon_level_out << '\n';
    if(level > EQUIPMENT_MAX_LEVEL) level = EQUIPMENT_MAX_LEVEL;
    return level;
}

u32 get_weapon_id_from_level(u32 weapon_id, u32 level){
    u32 base_id = (weapon_id / 100) * 100;
    if(weapon_upgrade_paths.find(base_id) != weapon_upgrade_paths.end()){
        UpgradePath path = weapon_upgrade_paths.at(base_id);
        u32 reinforcement = get_equipment_reinforcement_from_level(path, level);
        if(path == UpgradePath::Pyromancy){
            // Ascended pyro hand id jumps from ..1500 to ..2000
            if(reinforcement > 15){
                reinforcement += 4;
            }
            return ((weapon_id / 10000) * 10000) + (reinforcement * 100); 
        }else{
            return base_id + reinforcement;
        }
    }
    std::cout << "Unable to find matching id for weapon: " << weapon_id << "\n";
    return weapon_id;
}

u32 get_weapon_level_from_id(u32 weapon_id){
    u32 base_id = (weapon_id / 100) * 100;
    auto find = weapon_upgrade_paths.find(base_id);
    if(find != weapon_upgrade_paths.end()){
        UpgradePath path = find->second;
        u32 reinforcement = get_equipment_reinforcement_from_id(path, weapon_id);
        return get_equipment_level_from_reinforcement(path, reinforcement);
    }
    std::cout << "Unable to find matching level for weapon: " << weapon_id << "\n";
    return 0;
}

u32 get_armor_id_from_level(u32 armor_id, u32 level){
    u32 base_id = (armor_id / 100) * 100;
    auto find = armor_upgrade_paths.find(base_id);
    if(find != armor_upgrade_paths.end()){
        UpgradePath upgrade_path = find->second;
        u32 reinforcement = get_equipment_reinforcement_from_level(upgrade_path, level);
        return base_id + reinforcement;
    }
    
    std::cout << "Unable to find matching id for armor: " << armor_id << "\n";
    return armor_id;
}

u32 get_armor_level_from_id(u32 armor_id){
    u32 base_id = (armor_id / 100) * 100;
    auto find = armor_upgrade_paths.find(base_id);
    if(find != armor_upgrade_paths.end()){
        // Found base (+0) weapon, now determine infusion type to calculate level
        UpgradePath upgrade_path = find->second;
        u32 reinforcement = get_equipment_reinforcement_from_id(upgrade_path, armor_id);
        return get_equipment_level_from_reinforcement(upgrade_path, reinforcement);
    }

    std::cout << "Unable to find matching level for armor: " << armor_id << "\n";
    return 0;
}




//Looking in memory
bool try_find_process(Process& process){
    process = find_process_id(EXE_NAME);
    return process.handle;
}

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
        // std::cout << offset_address(flags_base_address, offset) << " " << value << " " << mask << " " << ((value & mask) > 0) << '\n';
        return ((value & mask) > 0);
    }
    std::cout << "Failed to read flag value: " << flag_id << '\n';
    std::cout << "\tGroup:" << group << " Area:" << area << " Section:" << section << " Number:" << number << '\n';
    std::cout << "\tBase address: " << flags_base_address << " Reading at: " << offset_address(flags_base_address, offset) << '\n';
    return 0;
}

u64 get_defeated_boss_count(Process& process, void* flags_base){
    
    struct BossFlagEntry{
        u64 defeated_id;
        u64 offset;
        u64 mask;
        std::string name;
    };

    std::vector<BossFlagEntry> boss_flags_table = {
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

    u64 last_offset = 123456712345u; // Value not in table
    u32 cached_value = 0u;
    u64 total = 0u;
    // Small optimization from ~40us to ~15 by not reading the memory for every single flag
    // Use the fact that some of these are in the same bucket
    // Might not be much but this kind of applications should have as minimal CPU time as possible IMO
    for(BossFlagEntry& e : boss_flags_table){
        // bool result = read_ds1r_flag(process,  flags_base, e.defeated_id);
        bool result = false;
        if(last_offset != e.offset){
            last_offset = e.offset;
            if(!read_memory(process, offset_address(flags_base, e.offset), cached_value)){
                std::cout << "Failed to read memory for bosses defeated\n";
                return 0;
            }
        }
        result = (cached_value & e.mask) > 0;
        if(result) total += 1;
        // std::cout << "Defeated?: " << result << " " << e.name << '\n';
    }
    return total;
}

void* find_pattern_exe_module(Process process, std::string_view byte_pattern){
    Pattern pattern;
    pattern.load_bytes(byte_pattern);
    std::vector<void*> addresses = scan_process_module(process, pattern, EXE_NAME);
    if(addresses.size() != 1){
        std::cout << "Pattern scan failed: ";
        if(addresses.size() > 1){
            std::cout << "Multiple addresses found\n";
        }else{
            std::cout << "No address found\n";
        }
        std::cout << "Pattern:" << byte_pattern << "\n";
        return nullptr;
    }
    return addresses[0];
}

void* find_world_flags_address(Process process){
    void* ptr = find_pattern_exe_module(process, "48 8B 0D ?? ?? ?? ?? 99 33 C2 45 33 C0 2B C2 8D 50 F6");
    if(!ptr){
        std::cout << "Failed to get the world flags address" << '\n';
        return nullptr;
    }

    s32 offset = 0;
    if(!read_memory(process, offset_address(ptr, 3llu), offset)){
        std::cout << "Failed to read relative jmp offset for world flags\n";
        return nullptr;
    }

    void* out_address = offset_address(offset_address(ptr, offset), 7llu);
    out_address = chase_pointer(process, out_address, {0x0, 0x0});
    return out_address;
}

void* find_useful_address(Process process){
    // Got this from a Cheat Engine Table, not sure how good it is(actually good)
    void* address = find_pattern_exe_module(process, "48 8B 05 ?? ?? ?? ?? 45 33 ED 48 8B F1 48 85 C0");
    if(!address){
        std::cout << "Failed to get the inventory address" << '\n';
    }
    
    s32 offset = 0;
    if(!read_memory(process, offset_address(address, 3llu), offset)){
        std::cout << "Failed to read relative jmp offset for inventory address\n";
        return nullptr;
    }
    // The instruction is 7 bytes and the mov is relative to the NEXT
    // instruction address
    void* out_address = offset_address(offset_address(address, offset), 7);
    out_address = chase_pointer(process, out_address, {0x10, 0x670});
    return out_address;
}

void* find_world_chr_man_address(Process process){
    // std::cout << "Finding WorldChrMan signature...\n";
    // Tentative patterns, way less stable(gets written to often)
    // 49 8B 40 18 48 89 05 ?? ?? ?? ?? 8D 42 9C 83 F8 14
    // This pattern is more stable, only gets written during game loads
    void* address = find_pattern_exe_module(process, "48 8B 05 ?? ?? ?? ?? 48 8B 48 68 48 85 C9 0F 84 ?? ?? ?? ?? 48 39 5E 10 0F 84 ?? ?? ?? ?? 48");
    if(!address){
        std::cout << "Failed to find world_chr_man AOB pattern\n";
        return nullptr;
    }

    // Read relative mov instr offset and follow it
    s32 offset = 0;
    if(!read_memory(process, offset_address(address, 3), offset)){
        std::cout << "Failed to read relative jmp offset for world_chr_man AOB\n";
        return nullptr;
    }

    void* out_address = offset_address(offset_address(address, offset), 7);

    // This memory address is only valid while the player is in game
    // Also changes everytime the game loads a character (homeward bones / teleport / death)
    // So this is as far as we can go during the setup
    return out_address;
}

bool find_addresses(State& state){
    
    void* useful_address = find_useful_address(state.process);
    if(!useful_address){
        return false;
    }
    state.addrs.inv         = offset_address(useful_address,  0x010);
    state.addrs.armor_id    = offset_address(useful_address, -0x32C);
    state.addrs.weapon_id   = offset_address(useful_address, -0x34C);
    state.addrs.armor_slot  = offset_address(useful_address, -0x3AC);
    state.addrs.weapon_slot = offset_address(useful_address, -0x3CC);
    state.addrs.ring_slot   = offset_address(useful_address, -0x398);
    state.addrs.ring_id     = offset_address(useful_address, -0x318);
    state.addrs.in_game     = offset_address(useful_address, -0x660);

    if(state.config.count_bosses_defeated){
        state.addrs.flags_base = find_world_flags_address(state.process);
        if(!state.addrs.flags_base){
            std::cout << "Failed to find boss count address\n";
            return false;
        }
    }
    
    state.addrs.sp_effect_base = find_world_chr_man_address(state.process);
    if(!state.addrs.sp_effect_base){
        std::cout << "Failed to setup SpEffect base address\n";
        return false;
    }

    return true;
}

bool read_inventory(Process process, void* addr, inv_t& inv){
    SIZE_T read = 0;
    if(ReadProcessMemory(process.handle, addr, inv.data(), sizeof(inv), &read)){
        return read == sizeof(inv);
    }
    return false;
}

bool in_main_menu(State& state){
    u32 menu = 0;
    if(!read_memory(state.process, state.addrs.in_game, menu)){
        std::cout << "Failed to read in_game memory\n";
        // By default say we are in the menu for safety
        return true;
    }
    return menu == UINT32_MAX;
}

bool get_active_speffects(State& state, std::vector<u32>& sp_effects){

    sp_effects.clear();

    // Linked list can be dangerous in this case where
    // the processes are not synced. At some point a
    // node might be updated while we chase and can lead
    // to reading arbitrary memory
    u64 nodes_read = 0;
    u64 max_nodes = 100;

    // Active SpEffects are implemented in the game engine as a linked list.
    void* next_entry_node = chase_pointer(state.process, state.addrs.sp_effect_base, {0x40, 0x18, 0x8, 0x0});
    u32 sp_effect_id = 0;
    while (next_entry_node != nullptr){
        if(!read_memory(state.process, offset_address(next_entry_node, 0x30), sp_effect_id)){
            std::cout << "Error when attempting to read SpEffect ID from player list\n";
            return false;
        }

        if(sp_effect_id > 0 && sp_effect_id < 100'000){
            // std::cout << "Found sp effect id: " << sp_effect_id << '\n';
            sp_effects.push_back(sp_effect_id);
        }else{
            std::cout << "Error when attempting to read SpEffect ID from player list. Invalid speffect id\n";
            return false;
        }

        nodes_read += 1;
        if(nodes_read > max_nodes){
            std::cout << "Error when attempting to read SpEffect ID from player list. speffects limit reached\n";
            return false;
        }

        // Read next entry address (nullptr for last entry).
        if(!read_memory(state.process, offset_address(next_entry_node, 0x40), next_entry_node)){
            std::cout << "Failed to fetch next SpEffect list entry from player list\n";
            return false;
        }
    }
    return true;
}

bool is_equip_enabled_for_armor_type(const std::vector<u32>& active_sp_effects, ArmorType armor_type){
    if(armor_type == ArmorType::Head){
        for(u32 effect_id : active_sp_effects){
            switch(effect_id){
                case (u32)(SpEffects::DragonHeadStone):
                    std::cout << "Detected active Dragon Head Stone effect. Skipping helmet autoequip\n";
                    return false; 
                case (u32)(SpEffects::DragonTorsoStone):
                    std::cout << "Detected active Dragon Torso Stone effect. Skipping helmet autoequip\n";
                    return false; 
                case (u32)(SpEffects::EggParasite):
                    std::cout << "Detected active Egg Parasite effect. Skipping helmet autoequip\n";
                    return false;
                case (u32)(SpEffects::EvolvedEggParasite):
                    std::cout << "Detected active Evolved Egg Parasite effect. Skipping helmet autoequip\n";
                    return false;
            }
        }
    }else{
        // Dragon Torso Stone disables all armor
        for(u32 effect_id : active_sp_effects){
            if(effect_id == (u32)(SpEffects::DragonTorsoStone)){
                std::cout << "Detected active Dragon Torso Stone effect. Skipping armor autoequip\n";
                return false; 
            }
        }
    }
    return true;
}


// Program actions
bool read_weapon_slot(State& state, u32& weapon_id){
    // read currently equipped weapon id from right hand slot (offset +4)
    void* weapon_id_ptr = offset_address(state.addrs.weapon_id, 4);
    if(!ReadProcessMemory(state.process.handle,weapon_id_ptr, &weapon_id, sizeof(weapon_id), nullptr)){
        return false;
    }
    return true;
}

void write_inv_slot(State& state, InvSlot& slot, u32 inv_index){
    void* inv_slot_ptr = offset_address(state.addrs.inv, inv_index * sizeof(InvSlot));
    if(!WriteProcessMemory(state.process.handle, inv_slot_ptr, &slot, sizeof(slot), nullptr)){
        std::cout << "Failed to write inventory slot back\n";
    }
}

Change identify_change(const InvSlot& old,const InvSlot& current){
    if(old.valid && !current.valid){
        // Removed item from inventory we don't care about this
        return Change::Null;
    }
    if(!old.valid && current.valid){
        // Got a new item let's check it out!
        if(current.type == ItemType::Armor){
            return Change::EquipArmor;
        }else if(current.type == ItemType::Weapon){
            return Change::EquipWeapon;
        }else if(current.type == ItemType::Ring){
            return Change::EquipRing;
        }
    }else{
        //In here the slot in the inventory changed its nothing new or lost
        if(current.id == old.id){
            //If the id doesnt change it means its the same item 
            //Probably some durability or amount change we don't care about those
            return Change::Null;
        }else if(current.type == ItemType::Weapon && old.type == current.type){
            //Upgraded weapon most likely
            std::cout << "Detected weapon upgrade\n";
            return Change::UpgradedWeapon;
        }
    }
    //Default to null
    return Change::Null;
}

void write_id_and_slot(State& state, u32 item_id, void* id_ptr, u32 slot, void* slot_ptr){
    if(id_ptr && slot_ptr){
        if(!WriteProcessMemory(state.process.handle, id_ptr, &item_id, sizeof(item_id), nullptr)){
            std::cout << "Failed to write item id, item not equipped\n";
        }
        //Writing the slot is more a convenience than anything
        if(!WriteProcessMemory(state.process.handle, slot_ptr, &slot, sizeof(slot), nullptr)){
            std::cout << "Failed to write item slot(Not much of a problem)\n";
        }
    }
}

void write_rings_slots(State& state, RingSlots& rings){
    //@CAUTION: Trick to write both in only one pass assumes that left and right are contiguous in memory
    if(!WriteProcessMemory(state.process.handle, state.addrs.ring_id, &rings.left_id, sizeof(u32) * 2, nullptr)){
        std::cout << "Failed to write ring id, ring not equipped\n";
    }
    //Writing the slot is more a convenience than anything
    if(!WriteProcessMemory(state.process.handle, state.addrs.ring_slot, &rings.left_slot, sizeof(u32) * 2, nullptr)){
        std::cout << "Failed to write ring slot(Not much of a problem)\n";
    }
}

bool read_ring_slots(State& state, RingSlots& ring_slot){
    //@CAUTION: Trick to read both in only one pass assumes that left and right are contiguous in memory
    if(!ReadProcessMemory(state.process.handle, state.addrs.ring_id, &ring_slot.left_id, sizeof(u32) * 2u, nullptr)){
        return false;
    }
    if(!ReadProcessMemory(state.process.handle, state.addrs.ring_slot, &ring_slot.left_slot, sizeof(u32) * 2u, nullptr)){
        return false;
    }
    return true;
}

void print_equip_levels(State& state){
    std::cout << "Standard: " << state.upg_levels.standard[0] << " " << state.upg_levels.standard[1] << '\n';
    std::cout << "Crystal: " << state.upg_levels.crystal[0] << " " << state.upg_levels.crystal[1] << '\n';
    std::cout << "Lighting: " << state.upg_levels.lighting[0] << " " << state.upg_levels.lighting[1] << '\n';
    std::cout << "Raw: " << state.upg_levels.raw[0] << " " << state.upg_levels.raw[1] << '\n';
    std::cout << "Magic: " << state.upg_levels.magic[0] << " " << state.upg_levels.magic[1] << '\n';
    std::cout << "Enchanted: " << state.upg_levels.enchanted[0] << " " << state.upg_levels.enchanted[1] << '\n';
    std::cout << "Divine: " << state.upg_levels.divine[0] << " " << state.upg_levels.divine[1] << '\n';
    std::cout << "Occult: " << state.upg_levels.occult[0] << " " << state.upg_levels.occult[1] << '\n';
    std::cout << "Fire: " << state.upg_levels.fire[0] << " " << state.upg_levels.fire[1] << '\n';
    std::cout << "Chaos: " << state.upg_levels.chaos[0] << " " << state.upg_levels.chaos[1] << '\n';
    std::cout << "Twinkling: " << state.upg_levels.twinkling[0] << " " << state.upg_levels.twinkling[1] << '\n';
    std::cout << "Dragon: " << state.upg_levels.dragon[0] << " " << state.upg_levels.dragon[1] << '\n';
    std::cout << "Demon: " << state.upg_levels.demon[0] << " " << state.upg_levels.demon[1] << '\n';
    std::cout << "Pyromancy: " << state.upg_levels.pyro[0] << " " << state.upg_levels.pyro[1] << '\n';

    std::cout << "Standard armor : ";
    for(int i = 0; i < 4; i++) std::cout << state.upg_levels.armor_standard[i] <<  ' ';
    std::cout << '\n';
    std::cout << "Special armor : ";
    for(int i = 0; i < 4; i++) std::cout << state.upg_levels.armor_special[i] <<  ' ';
    std::cout << '\n';
}

void update_weapon_level(State& state, u32 weapon_id){
    u32 hand_offset = 0;
    WeaponType weapon_type = weapon_type_from_id(weapon_id);
    if(weapon_type == WeaponType::RightHand) hand_offset = 0;
    else if(weapon_type == WeaponType::LeftHand) hand_offset = 1;
    else return;

    u32 weapon_level = get_weapon_level_from_id(weapon_id);
    if(weapon_level > 0){
        UpgradePath path = get_weapon_path_from_id(weapon_id);
        switch(path){
            case UpgradePath::Unknown:
            case UpgradePath::NoUpgrade:
                break;
            case UpgradePath::Standard:
                make_max(state.upg_levels.standard[hand_offset], weapon_level);
                break;
            case UpgradePath::Raw:
                make_max(state.upg_levels.raw[hand_offset], weapon_level);
                break;
            case UpgradePath::Divine:
                make_max(state.upg_levels.divine[hand_offset], weapon_level);
                break;
            case UpgradePath::Magic:
                make_max(state.upg_levels.magic[hand_offset], weapon_level);
                break;
            case UpgradePath::Fire:
                make_max(state.upg_levels.fire[hand_offset], weapon_level);
                break;
            case UpgradePath::Crystal: 
                make_max(state.upg_levels.crystal[hand_offset], weapon_level);
                break;
            case UpgradePath::Lightning:
                make_max(state.upg_levels.lighting[hand_offset], weapon_level);
                break;
            case UpgradePath::Occult:
                make_max(state.upg_levels.occult[hand_offset], weapon_level);
                break;
            case UpgradePath::Chaos:
                make_max(state.upg_levels.chaos[hand_offset], weapon_level);
                break;
            case UpgradePath::Enchanted:
                make_max(state.upg_levels.enchanted[hand_offset], weapon_level);
                break;
            case UpgradePath::Twinkling:
                make_max(state.upg_levels.twinkling[hand_offset], weapon_level);
                break;
            case UpgradePath::Dragon:
                make_max(state.upg_levels.dragon[hand_offset], weapon_level);
                break;
            case UpgradePath::Pyromancy:
                make_max(state.upg_levels.pyro[hand_offset], weapon_level);
                break;
            case UpgradePath::Demon:
                make_max(state.upg_levels.demon[hand_offset], weapon_level);
            default:
                break;
        }
    }
}

void update_armor_level(State& state, u32 armor_id){
    ArmorType type = armor_type_from_id(armor_id);
    if(type == ArmorType::Unknown) return;
    u32 lvl = get_armor_level_from_id(armor_id);
    UpgradePath path = get_armor_path_from_id(armor_id);
    switch(path){
        case UpgradePath::ArmorLight:
        case UpgradePath::ArmorHeavy:
            make_max(state.upg_levels.armor_standard[(u32)type], lvl);
            break;
        case UpgradePath::ArmorSpecial:
            make_max(state.upg_levels.armor_special[(u32)type], lvl);
            break;
        default:
            break;
    }
}

u32 upgrade_weapon(State& state, u32 weapon_id){
    u32 hand_offset = 0;
    WeaponType weapon_type = weapon_type_from_id(weapon_id);
    if(weapon_type == WeaponType::RightHand) hand_offset = 0;
    else if(weapon_type == WeaponType::LeftHand) hand_offset = 1;
    else return weapon_id;

    if(state.config.auto_upgrades == 1){
        // System 1 keeps all the paths at their own level
        // So we grab the specific one
        std::cout << "System 1 autoupgrade. ";
        UpgradePath path = get_weapon_path_from_id(weapon_id);
        u32* path_level = nullptr;
        switch(path){
            case UpgradePath::Standard:
                path_level = state.upg_levels.standard;
                break;
            case UpgradePath::Raw:
                path_level = state.upg_levels.raw;
                break;
            case UpgradePath::Divine:
                path_level = state.upg_levels.divine;
                break;
            case UpgradePath::Magic:
                path_level = state.upg_levels.magic;
                break;
            case UpgradePath::Fire:
                path_level = state.upg_levels.fire;
                break;
            case UpgradePath::Crystal: 
                path_level = state.upg_levels.crystal;
                break;
            case UpgradePath::Lightning:
                path_level = state.upg_levels.lighting;
                break;
            case UpgradePath::Occult:
                path_level = state.upg_levels.occult;
                break;
            case UpgradePath::Chaos:
                path_level = state.upg_levels.chaos;
                break;
            case UpgradePath::Enchanted:
                path_level = state.upg_levels.enchanted;
                break;
            case UpgradePath::Twinkling:
                path_level = state.upg_levels.twinkling;
                break;
            case UpgradePath::Dragon:
                path_level = state.upg_levels.dragon;
                break;
            case UpgradePath::Pyromancy:
                path_level = state.upg_levels.pyro;
                break;
            case UpgradePath::Demon:
                path_level = state.upg_levels.demon;
                break;
            default:
                break;
        }

        u32 upgrades = 0;
        if(path_level){
            upgrades = path_level[hand_offset];
        }
        weapon_id = get_weapon_id_from_level(weapon_id, upgrades);
        std::cout << "Level set to to +" << get_equipment_reinforcement_from_id(weapon_upgrade_paths[weapon_id], weapon_id) << '\n';

    }else if(state.config.auto_upgrades == 2){
        // System 2 keeps all the paths at the "same" level
        // So we can just grab the highest path
        std::cout << "System 2 autoupgrade. ";
        u32 upgrades = 0;
        make_max(upgrades, state.upg_levels.standard[hand_offset]);
        make_max(upgrades, state.upg_levels.crystal[hand_offset]);
        make_max(upgrades, state.upg_levels.lighting[hand_offset]);
        make_max(upgrades, state.upg_levels.raw[hand_offset]);
        make_max(upgrades, state.upg_levels.magic[hand_offset]);
        make_max(upgrades, state.upg_levels.enchanted[hand_offset]);
        make_max(upgrades, state.upg_levels.divine[hand_offset]);
        make_max(upgrades, state.upg_levels.occult[hand_offset]);
        make_max(upgrades, state.upg_levels.fire[hand_offset]);
        make_max(upgrades, state.upg_levels.chaos[hand_offset]);
        make_max(upgrades, state.upg_levels.dragon[hand_offset]);
        make_max(upgrades, state.upg_levels.twinkling[hand_offset]);
        make_max(upgrades, state.upg_levels.demon[hand_offset]);
        make_max(upgrades, state.upg_levels.pyro[hand_offset]);
        weapon_id = get_weapon_id_from_level(weapon_id, upgrades);
        std::cout << "Level set to to +" << get_equipment_reinforcement_from_id(weapon_upgrade_paths[weapon_id], weapon_id) << '\n';
    }

    return weapon_id;
}

u32 upgrade_armor(State& state, u32 armor_id){
    u32 bodypart_offset = 0;
    ArmorType armor_type = armor_type_from_id(armor_id);
    if(armor_type != ArmorType::Unknown) bodypart_offset = (u32)armor_type;
    else return armor_id;

    if(state.config.auto_upgrades == 1){
        // System 1 keeps all the paths at their own level
        // So we grab the specific one
        std::cout << "System 1 autoupgrade. ";
        UpgradePath path = get_armor_path_from_id(armor_id);
        u32* path_level = nullptr;
        switch(path){
            case UpgradePath::ArmorLight:
            case UpgradePath::ArmorHeavy:
                path_level = state.upg_levels.armor_standard;
                break;
            case UpgradePath::ArmorSpecial:
                path_level = state.upg_levels.armor_special;
                break;
            default:
                break;
        }

        u32 upgrades = 0;
        if(path_level){
            upgrades = path_level[bodypart_offset];
        }
        armor_id = get_armor_id_from_level(armor_id, upgrades);
        std::cout << "Level set to to +" << armor_id % 100 << '\n';

    }else if(state.config.auto_upgrades == 2){
        // System 2 keeps all the paths at the "same" level
        // So we can just grab the highest path
        std::cout << "System 2 autoupgrade. ";
        u32 upgrades = 0;
        make_max(upgrades, state.upg_levels.armor_standard[bodypart_offset]);
        make_max(upgrades, state.upg_levels.armor_special[bodypart_offset]);

        armor_id = get_weapon_id_from_level(armor_id, upgrades);
        std::cout << "Level set to to +" << armor_id % 100 << '\n';
    }
    return armor_id;
}

void execute_change(Change change, State& state, u32 inv_index){
    if(change == Change::Null) return;

    u32& item_id = state.inventory_copy[inv_index].id;
    Addresses& addrs = state.addrs;
    void* id_ptr = nullptr;
    void* slot_ptr = nullptr;
    if(change == Change::EquipArmor){
        ArmorType armor_type = armor_type_from_id(item_id);
        if(armor_type == ArmorType::Unknown){
            std::cout << "Unknown armor type, no action executed\n";
            return;
        }

        bool execute = true;
        if(armor_type == ArmorType::Head){
            std::cout << "Equip helmet\n";
            execute = state.config.equip_head;
        }else if(armor_type == ArmorType::Hands){
            std::cout << "Equip gloves\n";
            execute = state.config.equip_glove;
        }else if(armor_type == ArmorType::Chest){
            std::cout << "Equip chest\n";
            execute = state.config.equip_chest;
        }else if(armor_type == ArmorType::Legs){
            std::cout << "Equip legs\n";
            execute = state.config.equip_pants;
        }

        if(execute){
            item_id = upgrade_armor(state, item_id);
            // Update the item in the inventory
            state.inventory_copy[inv_index].id = item_id;
            write_inv_slot(state, state.inventory_copy[inv_index], inv_index);
            update_armor_level(state, item_id);

            // Check if an active SpEffect is disabling armor equip
            bool can_equip = false;
            std::vector<u32> active_sp_effects;
            if(get_active_speffects(state, active_sp_effects)){                    
                can_equip = is_equip_enabled_for_armor_type(active_sp_effects, armor_type);
            }

            if(can_equip){
                s32 offset = 4 * (s32)armor_type;
                id_ptr   = offset_address(addrs.armor_id,   offset);
                slot_ptr = offset_address(addrs.armor_slot, offset);
                write_id_and_slot(state, item_id, id_ptr, inv_index, slot_ptr);
            }
        }
        
    }else if(change == Change::EquipWeapon && state.config.equip_weapons){
        WeaponType weapon_type = weapon_type_from_id(item_id);
        if(weapon_type == WeaponType::Unknown){
            std::cout << "Unknown weapon type, no action executed\n";
            return;
        }
        s32 offset = 0;
        bool check_for_upgrades = false;
        if(weapon_type == WeaponType::Arrow){
            std::cout << "Equip arrows\n";
            offset = 16;
        }else if(weapon_type == WeaponType::Bolt){
            std::cout << "Equip bolts\n";
            offset = 20;
        }else if(weapon_type == WeaponType::LeftHand){
            std::cout << "Equip left hand weapon\n";
            offset = 0;
            check_for_upgrades = true;
        }else if(weapon_type == WeaponType::RightHand){
            offset = 4;
            check_for_upgrades = true;
            std::cout << "Equip right hand weapon\n";
        }

        if(check_for_upgrades){
            item_id = upgrade_weapon(state, item_id);
            // Update the item in the inventory
            state.inventory_copy[inv_index].id = item_id;
            write_inv_slot(state, state.inventory_copy[inv_index], inv_index);
            update_weapon_level(state, item_id);
        }

        id_ptr   = offset_address(addrs.weapon_id,   offset);
        slot_ptr = offset_address(addrs.weapon_slot, offset);
        write_id_and_slot(state, item_id, id_ptr, inv_index, slot_ptr);
    
    }else if(change==Change::EquipRing && state.config.equip_ring){
        //V0.3 change
        //Now rings equip as a FIFO queue
        //New rings go to the left slot and the previous ring gets pushed into right slot
        //Also now avoids equiping repeated rings
        //No need to know ring slot and let us know the last ring equipped
        //even between sessions!!
        RingSlots ring_slots;
        if(!read_ring_slots(state,ring_slots)){
            std::cout << "Failed to read ring slots\n";
            return;
        }
        if(ring_slots.left_id == item_id){
            // Dont equip if the leftmost ring is the same one
            // Would end up with 2 of the same ring
            std::cout << "Ring duplicate detected, ring not equipped\n";
            return;
        }
        std::cout << "Equip ring\n";
        //If left slot is empty and right is not, only no need to push first ring
        if(!    ((ring_slots.left_id == 0xFFFFFFFF)   &&   (ring_slots.right_id != 0xFFFFFFFF))    ){
            ring_slots.right_id   = ring_slots.left_id;
            ring_slots.right_slot = ring_slots.left_slot;
        }
        ring_slots.left_id   = item_id;
        ring_slots.left_slot = inv_index;
        write_rings_slots(state, ring_slots); 
    }else if(change == Change::UpgradedWeapon){
        update_weapon_level(state, item_id);
    }
}

bool initial_inv_read(State& state){

    if(read_inventory(state.process, state.addrs.inv, state.inventory)){
        //Important to reset the levels between sessions/characters
        state.upg_levels = {};
        if(state.config.auto_upgrades){
            for(size_t i = 0; i < state.inventory.size(); i++){
                InvSlot& slot = state.inventory[i];
                if(!slot.valid) continue;
                if(slot.type == ItemType::Weapon){
                    update_weapon_level(state, slot.id);                   
                }else if(slot.type == ItemType::Armor){
                    update_armor_level(state, slot.id);
                }
            }
        }
        print_equip_levels(state);
        return true;
    }
    return false;
}

bool wait_for_process_init(HANDLE process_handle, ULONGLONG ms_delay){
    ULONGLONG diff = 0;
    do{
        FILETIME system_time;
        FILETIME process_time;
        FILETIME temp_time;
        GetSystemTimeAsFileTime(&system_time);
        if(!GetProcessTimes(process_handle, &process_time, &temp_time, &temp_time, &temp_time)){
            std::cout << "Failed to get process time: " << GetLastError() << '\n';
            return false;
        }

        // As per FILETIME windows documentation remark section
        // to compare is recommended to first copy to ULARGE_INTEGER
        // and compare the quadparts
        ULARGE_INTEGER system_ularge;
        system_ularge.HighPart = system_time.dwHighDateTime;
        system_ularge.LowPart = system_time.dwLowDateTime;

        ULARGE_INTEGER process_ularge;
        process_ularge.HighPart = process_time.dwHighDateTime;
        process_ularge.LowPart = process_time.dwLowDateTime;

        diff = system_ularge.QuadPart - process_ularge.QuadPart;
        // Each unit is 100 nanoseconds, we want ms
        diff /= 10'000;
        // std::cout << "System time: " << system_ularge.QuadPart << '\n';
        // std::cout << "Process time: " << process_ularge.QuadPart << '\n';
        // std::cout << "Time difference: " << diff << '\n';
        if(diff < ms_delay){
            Sleep((DWORD)(ms_delay - diff));
        }
    }while(diff < ms_delay);
    return true;
}

void parse_confing_file(std::string& buffer, ConfigOptions& config){
    std::string buffer_copy;
    buffer_copy.reserve(buffer.size());
    //Increase if need to fit larger variable names
    char var_name[32] = {};
    s32 var_value = -1;
    std::cout << "Reading config file\n";
    for(u64 i = 0; i < buffer.size(); i++){
        
        char c = buffer[i];
        buffer_copy.push_back(c);

        if(c == '\n' || i + 1 == buffer.size()){
            //@CAUTION: scanf takes the size of the buffer, minus null at the end
            static_assert(sizeof(var_name) == 32);
            std::sscanf(buffer_copy.data(), "%31s %i", var_name, &var_value);

            std::cout << "\"" << var_name << "\" " << var_value << '\n';
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
            if(std::strcmp(var_name, "keep_upgrades") == 0){
                config.auto_upgrades = var_value;
            }        
            if(std::strcmp(var_name, "boss_defeated_count") == 0){
                config.count_bosses_defeated = var_value;
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
        std::cout << "Configuration file not loaded, using defaults\n";

        //Default configuration file
        ///////////////////////////////////////////
        file_contents += "weapon 1\n";
        file_contents += "head 1\n";
        file_contents += "chest 1\n";
        file_contents += "gloves 1\n";
        file_contents += "pants 1\n";
        file_contents += "ring 1\n";
        file_contents += "keep_upgrades 0\n";
        file_contents += "boss_defeated_count 0\n";
        ///////////////////////////////////////////
        if(!std::filesystem::exists(config_file_path)){
            std::cout << "Writing configuration file\n";
            write_file_contents_binary(config_file_path, file_contents);
        }
    }

    parse_confing_file(file_contents, state.config);
    return true;
}


void autoupgrade_testbench(){
    State s;

    // No autoupgrades keep all at the level it was picked up
    s.config.auto_upgrades = 0;
    s.upg_levels = {};
    u32 dagger = 100000; // Dagger
    u32 crystal_halberd = 1100100; // Halberd [Crystal]
    u32 chaos_blade = 503000; // Chaos Blade [Uchigatana]
    u32 pyro_hand = 1330000; // Pyromancy Hand
    u32 no_upg_sword = 299000; // [Ghost] Straight Sword
    u32 fire_claymore = 301800; // Claymore [Fire]
    assert(upgrade_weapon(s, dagger) == dagger);

    // Should ignore the upgrade levels
    s.upg_levels.standard[0] = 6;
    assert(upgrade_weapon(s, dagger) == dagger);

    // Infused with greatness
    for(u32 i = 0; i < 15; i++){
        assert(upgrade_weapon(s, 100000 + i) == 100000 + i); // Dagger
    }
    for(u32 i = 0; i < 10; i++){
        assert(upgrade_weapon(s, 100400 + i) == 100400 + i); // Dagger [Magic]
        assert(upgrade_weapon(s, 100600 + i) == 100600 + i); // Dagger [Divine]
        assert(upgrade_weapon(s, 100800 + i) == 100800 + i); // Dagger [Fire]
    }
    for(u32 i = 0; i < 5; i++){
        assert(upgrade_weapon(s, 100100 + i) == 100100 + i); // Dagger [Crystal]
        assert(upgrade_weapon(s, 100200 + i) == 100200 + i); // Dagger [Lightning]
        assert(upgrade_weapon(s, 100300 + i) == 100300 + i); // Dagger [Raw]
        assert(upgrade_weapon(s, 100500 + i) == 100500 + i); // Dagger [Enchanted]
        assert(upgrade_weapon(s, 100700 + i) == 100700 + i); // Dagger [Occult]
        assert(upgrade_weapon(s, 100900 + i) == 100900 + i); // Dagger [Chaos]
        assert(upgrade_weapon(s, 102000 + i) == 102000 + i); // Ghost Blade
        assert(upgrade_weapon(s, 311000 + i) == 311000 + i); // Greatsword of Artorias [Dagger]
    }

    assert(upgrade_weapon(s, 1330000) == 1330000); // Pyromancy Flame
    assert(upgrade_weapon(s, 1330100) == 1330100); // Pyromancy Flame +1
    assert(upgrade_weapon(s, 1330200) == 1330200); // Pyromancy Flame +2
    assert(upgrade_weapon(s, 1330300) == 1330300); // Pyromancy Flame +3
    assert(upgrade_weapon(s, 1330400) == 1330400); // Pyromancy Flame +4
    assert(upgrade_weapon(s, 1330500) == 1330500); // Pyromancy Flame +5
    assert(upgrade_weapon(s, 1330600) == 1330600); // Pyromancy Flame +6
    assert(upgrade_weapon(s, 1330700) == 1330700); // Pyromancy Flame +7
    assert(upgrade_weapon(s, 1330800) == 1330800); // Pyromancy Flame +8
    assert(upgrade_weapon(s, 1330900) == 1330900); // Pyromancy Flame +9
    assert(upgrade_weapon(s, 1331000) == 1331000); // Pyromancy Flame +10
    assert(upgrade_weapon(s, 1331100) == 1331100); // Pyromancy Flame +11
    assert(upgrade_weapon(s, 1331200) == 1331200); // Pyromancy Flame +12
    assert(upgrade_weapon(s, 1331300) == 1331300); // Pyromancy Flame +13
    assert(upgrade_weapon(s, 1331400) == 1331400); // Pyromancy Flame +14
    assert(upgrade_weapon(s, 1331500) == 1331500); // Pyromancy Flame +15
    assert(upgrade_weapon(s, 1332000) == 1332000); // Ascended Pyromancy Flame
    assert(upgrade_weapon(s, 1332100) == 1332100); // Ascended Pyromancy Flame +1
    assert(upgrade_weapon(s, 1332200) == 1332200); // Ascended Pyromancy Flame +2
    assert(upgrade_weapon(s, 1332300) == 1332300); // Ascended Pyromancy Flame +3
    assert(upgrade_weapon(s, 1332400) == 1332400); // Ascended Pyromancy Flame +4
    assert(upgrade_weapon(s, 1332500) == 1332500); // Ascended Pyromancy Flame +5
    
    // id_for_level and level_from_id produces corresponding outputs
    for(auto x: weapon_upgrade_paths){
        UpgradePath path = x.second;
        u32 level_limit = get_path_reinforcement_limit(path);
        u32 weapon_id = x.first;
        if(path == UpgradePath::Pyromancy){
            assert(weapon_id == get_weapon_id_from_level(weapon_id, get_weapon_level_from_id(weapon_id)));
        }else{
            for(u32 i = 0; i <= level_limit; i++){
                u32 upgraded_id = x.first + i;
                assert(upgraded_id == get_weapon_id_from_level(weapon_id, get_weapon_level_from_id(upgraded_id)));
            }
        }
    }
    for(auto x: armor_upgrade_paths){
        UpgradePath path = x.second;
        u32 level_limit = get_path_reinforcement_limit(path);
        u32 equip_id = x.first;
        for(u32 i = 0; i <= level_limit; i++){
            u32 upgraded_id = x.first + i;
            assert(upgraded_id == get_armor_id_from_level(equip_id, get_armor_level_from_id(upgraded_id)));
        }
    }

    // Upgrades should keep the value across paths
    s.config.auto_upgrades = 2;
    s.upg_levels = {};
    
    // In depth testing would require to just duplicate the functions
    // so instead we are going by known good handmade tests
    update_weapon_level(s, dagger + 4);
    assert(s.upg_levels.standard[0] == 4 * 14);
    s.upg_levels.standard[1] = s.upg_levels.standard[0];

    // +4 standard
    assert(upgrade_weapon(s, dagger) == dagger + 4);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 1);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade + 1);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore + 2);
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand + 500);
    
    // +4 crystal
    update_weapon_level(s, crystal_halberd + 4);
    assert(s.upg_levels.crystal[0] == 4 * 42);
    
    // Correct hand offset
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand + 500);
    
    s.upg_levels.crystal[1] = s.upg_levels.crystal[0];
    assert(upgrade_weapon(s, dagger) == dagger + 12);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade + 4);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore + 8);
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand + 2000);

    // +13 standard and + 4 crystal
    update_weapon_level(s, dagger + 13);
    assert(upgrade_weapon(s, dagger) == dagger + 13);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade + 4);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore + 8);

    // +20 pyro hand
    update_weapon_level(s, pyro_hand + 2400);
    s.upg_levels.pyro[0] = s.upg_levels.pyro[1];

    assert(upgrade_weapon(s, dagger) == dagger + 14);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade + 4);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore + 9);

    // +21 pyro hand
    update_weapon_level(s, pyro_hand + 2500);
    assert(s.upg_levels.pyro[1] == EQUIPMENT_MAX_LEVEL);
    s.upg_levels.pyro[0] = s.upg_levels.pyro[1];

    assert(upgrade_weapon(s, dagger) == dagger + 15);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 5);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade + 5);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore + 10);

    // Upgrades should keep individual value between paths
    s.config.auto_upgrades = 1;
    s.upg_levels = {};
    
    // In depth testing would require to just duplicate the functions
    // so instead we are going by known good handmade tests
    update_weapon_level(s, dagger + 4);
    s.upg_levels.standard[1] = s.upg_levels.standard[0];

    // +4 standard
    assert(upgrade_weapon(s, dagger) == dagger + 4);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore);
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand);
    
    // +4 crystal
    update_weapon_level(s, crystal_halberd + 4);
    assert(s.upg_levels.crystal[0] == 4 * 42);
    
    // Correct hand offset
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand);
    
    s.upg_levels.crystal[1] = s.upg_levels.crystal[0];
    assert(upgrade_weapon(s, dagger) == dagger + 4);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore);
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand);

    // +13 standard and + 4 crystal
    update_weapon_level(s, dagger + 13);
    assert(upgrade_weapon(s, dagger) == dagger + 13);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore);

    // +20 pyro hand
    update_weapon_level(s, pyro_hand + 2400);
    s.upg_levels.pyro[0] = s.upg_levels.pyro[1];

    assert(upgrade_weapon(s, dagger) == dagger + 13);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore);
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand + 2400);

    // +21 pyro hand
    update_weapon_level(s, pyro_hand + 2500);
    assert(s.upg_levels.pyro[1] == EQUIPMENT_MAX_LEVEL);
    s.upg_levels.pyro[0] = s.upg_levels.pyro[1];

    assert(upgrade_weapon(s, dagger) == dagger + 13);
    assert(upgrade_weapon(s, crystal_halberd) == crystal_halberd + 4);
    assert(upgrade_weapon(s, chaos_blade + 4) == chaos_blade);
    assert(upgrade_weapon(s, no_upg_sword) == no_upg_sword);
    assert(upgrade_weapon(s, fire_claymore) == fire_claymore);
    assert(upgrade_weapon(s, pyro_hand) == pyro_hand + 2500);


    std::cout << "All autoupgrade tests passed\n";
}

// Program logic
void update_loop(State& state){
    u64 search_fails = 0;
    u64 main_menu_stares = 0;
    Stopwatch run_time = time_start_watch();
    Stopwatch boss_count_watch;
    u64 boss_count_cooldown_us = 5'000'000;
    Stopwatch timing;
    char spinner[2] = {'<', ' '};
    while(true){
        if(state.state==AppState::FindingGame){
            

            if(try_find_process(state.process)){
                std::cout << "\rTrying to find Dark Souls Remastered process ";
                state.state = AppState::FindingInv;
                std::cout << '\n';
                std::cout << "Found Dark Souls Remastered process\n";
                // 3 seconds should be fine
                wait_for_process_init(state.process.handle, 3000);
            }else{
                search_fails += 1;
                // Print in one call
                // the cursor moving annoys me
                printf("\rTrying to find Dark Souls Remastered process %c", spinner[search_fails % sizeof(spinner)]);
                Sleep(1000);
            }
        }else{//Check if application closes
            //No clue if this is the correct way
            //Read online that will be active until I close my handle
            //But works so IDK Windows is weird
            DWORD statuscode;
            GetExitCodeProcess(state.process.handle,&statuscode);
            if(statuscode != STILL_ACTIVE){
                std::cout << "\nGame closed, going back to search for it\n";
                std::cout << "---------------->Close the terminal if you are done<-----------------\n";
                state.state = AppState::FindingGame;
                CloseHandle(state.process.handle);
            }
        }
        if(state.state==AppState::FindingInv){
            std::cout << "Scanning game to find signatures...\n";

            bool search_result = find_addresses(state);
            if(search_result){
                std::cout << "Unique signature found! Setting everything up\n";
                state.state = AppState::MainMenu;
                state.inventory = {};
                state.inventory_copy = {};
                boss_count_watch = time_start_watch();
                // while(1){
                //     get_active_speffects(state);
                // }
            }else{
                std::cout << "Try restarting the game or wait for another scan\n";
                Sleep(5000);
            }

        }else if(state.state==AppState::InvStart){
            bool good = initial_inv_read(state);
            if(good){
                state.state = AppState::InvUpdate;
                std::cout << "Initial inventory read successful\n";
            }else{
                std::cout << "Initial inventory read failed, trying again\n";
                Sleep(1000);
            }
        }else if(state.state==AppState::MainMenu){
            auto main_menu = in_main_menu(state);
            if(!main_menu){
                std::cout << "\nGoing into the game          \n";
                main_menu_stares = 0;
                state.state = AppState::InvStart;
            }else{
                main_menu_stares += 1;
                printf("\rStaring at the main menu %c", spinner[main_menu_stares % sizeof(spinner)]);
                Sleep(5000);
            }
        }else if(state.state==AppState::InvUpdate){
            if(in_main_menu(state)){
                std::cout << "Going back to main menu\n";
                state.state = AppState::MainMenu;
            }else{

                bool good = read_inventory(state.process, state.addrs.inv, state.inventory_copy);
                if(!good){
                    std::cout << "Inventory update failed, trying again\n";
                }else{
                    // Optimization to reduce time for 99.9% of the process lifetime
                    // a single memcmp takes ~half of the individual memcps
                    // Also helps to only make the copy if neccessary
                    bool diff = false;
                    if(std::memcmp(state.inventory.data(), state.inventory_copy.data(), sizeof(state.inventory)) != 0){
                        diff = true;
                    }

                    if(diff){
                        s32 free_slots = 0;
                        for(u32 i = 0; i < state.inventory.size(); i++){
                            if(state.inventory[i] != state.inventory_copy[i]){
                                Change change = identify_change(state.inventory[i], state.inventory_copy[i]);
                                execute_change(change, state, i);
                            }
                            if(!state.inventory[i].valid) free_slots += 1;
                        }
                        state.inventory = state.inventory_copy;
                    }
                }
                
                if(state.config.count_bosses_defeated){

                    if(time_watch_elapsed(&boss_count_watch) > boss_count_cooldown_us){
                        time_watch_reset(&boss_count_watch);
                        // Stopwatch a = time_start_watch();
                        u64 count = get_defeated_boss_count(state.process, state.addrs.flags_base);
                        // microsecond_t b = time_watch_elapsed(&a);
                        // std::cout << "Time for boss count: " << b << "Us\n";
                        // std::cout << "Boss count: " << count << '\n';
                        write_file_contents_binary("boss_count.txt", std::to_string(count));
                    }
                }
            }
            Sleep(333);
        }
    }
}

int exit_with_error(std::string error_message){
        std::cout << error_message;
        std::cout << "This console will close in 5 seconds\n";
        Sleep(5000);
        return EXIT_FAILURE;
}

int main(){

    #ifdef DEBUG
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
    pattern_tests();
    autoupgrade_testbench();
    #endif


    std::string logo = "AutoEquip for Dark Souls Remastered by chainsboyo\n";
    std::cout << logo;

    HANDLE handle = CreateMutexW(NULL, TRUE, L"chainsboyo_AutoEquip_DSR");
    if(!handle){
        return exit_with_error("Failed to created instance mutex\n");
    }
    if(GetLastError() == ERROR_ALREADY_EXISTS){
        return exit_with_error("Another instance of AutoEquip_DSR is already running\n");
    }
    if(!set_path()){
        return exit_with_error("Error setting path\n");
    }

    State state;
    read_config_file(state);
    update_loop(state);
    //Will never reach this point but Windows should take of it
    ReleaseMutex(handle); 
    CloseHandle(handle);
    return 0;
}