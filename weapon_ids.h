#ifndef WEAPON_IDS_H

#define WEAPON_IDS_H

#include <unordered_map>
#include <string>

enum class WeaponInfusionType{
    STANDARD,
    CRYSTAL,
    LIGHTNING,
    RAW,
    MAGIC,
    ENCHANTED,
    DIVINE,
    OCCULT,
    FIRE,
    CHAOS,
    UNIQUE,
    NO_UPGRADE
};

extern std::unordered_map<uint64_t, WeaponInfusionType> weapon_ids;

#endif