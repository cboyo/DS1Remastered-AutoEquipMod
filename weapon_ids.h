#ifndef WEAPON_IDS_H

#define WEAPON_IDS_H

#include <unordered_map>
#include <string>
extern std::unordered_map<uint64_t, std::string> weapon_ids;
extern std::unordered_map<uint64_t, std::string> unupgradeable_weapons;
extern std::unordered_map<uint64_t, std::string> unique_weapons;

#endif