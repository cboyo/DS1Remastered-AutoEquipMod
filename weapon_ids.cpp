#include <unordered_map>
#include <string>
#include "weapon_ids.h"

// TODO missing Cleansing Greatshield, Abyss Greatsword
// Guardian Tail, Four-Pronged Plow
std::unordered_map<uint64_t, WeaponInfusionType> weapon_ids = {
{ 0x000186A0, WeaponInfusionType::STANDARD }, // Dagger
{ 0x00018704, WeaponInfusionType::CRYSTAL }, // Crystal Dagger
{ 0x00018768, WeaponInfusionType::LIGHTNING }, // Lightning Dagger
{ 0x000187CC, WeaponInfusionType::RAW }, // Raw Dagger
{ 0x00018830, WeaponInfusionType::MAGIC }, // Magic Dagger
{ 0x00018894, WeaponInfusionType::ENCHANTED }, // Enchanted Dagger
{ 0x000188F8, WeaponInfusionType::DIVINE }, // Divine Dagger
{ 0x0001895C, WeaponInfusionType::OCCULT }, // Occult Dagger
{ 0x000189C0, WeaponInfusionType::FIRE }, // Fire Dagger
{ 0x00018A24, WeaponInfusionType::CHAOS }, // Chaos Dagger
{ 0x00018A88, WeaponInfusionType::STANDARD }, // Parrying Dagger
{ 0x00018AEC, WeaponInfusionType::CRYSTAL }, // Crystal Parrying Dagger
{ 0x00018B50, WeaponInfusionType::LIGHTNING }, // Lightning Parrying Dagger
{ 0x00018BB4, WeaponInfusionType::RAW }, // Raw Parrying Dagger
{ 0x00018C18, WeaponInfusionType::MAGIC }, // Magic Parrying Dagger
{ 0x00018C7C, WeaponInfusionType::ENCHANTED }, // Enchanted Parrying Dagger
{ 0x00018CE0, WeaponInfusionType::DIVINE }, // Divine Parrying Dagger
{ 0x00018D44, WeaponInfusionType::OCCULT }, // Occult Parrying Dagger
{ 0x00018DA8, WeaponInfusionType::FIRE }, // Fire Parrying Dagger
{ 0x00018E0C, WeaponInfusionType::CHAOS }, // Chaos Parrying Dagger
{ 0x00019258, WeaponInfusionType::STANDARD }, // Bandit's Knife
{ 0x000192BC, WeaponInfusionType::CRYSTAL }, // Crystal Knife
{ 0x00019320, WeaponInfusionType::LIGHTNING }, // Lightning Knife
{ 0x00019384, WeaponInfusionType::RAW }, // Raw Knife
{ 0x000193E8, WeaponInfusionType::MAGIC }, // Magic Knife
{ 0x0001944C, WeaponInfusionType::ENCHANTED }, // Enchanted Knife
{ 0x000194B0, WeaponInfusionType::DIVINE }, // Divine Knife
{ 0x00019514, WeaponInfusionType::OCCULT }, // Occult Knife
{ 0x00019578, WeaponInfusionType::FIRE }, // Fire Knife
{ 0x000195DC, WeaponInfusionType::CHAOS }, // Chaos Knife
{ 0x00030D40, WeaponInfusionType::STANDARD }, // Shortsword
{ 0x00030DA4, WeaponInfusionType::CRYSTAL }, // Crystal Shortsword
{ 0x00030E08, WeaponInfusionType::LIGHTNING }, // Lightning Shortsword
{ 0x00030E6C, WeaponInfusionType::RAW }, // Raw Shortsword
{ 0x00030ED0, WeaponInfusionType::MAGIC }, // Magic Shortsword
{ 0x00030F34, WeaponInfusionType::ENCHANTED }, // Enchanted Shortsword
{ 0x00030F98, WeaponInfusionType::DIVINE }, // Divine Shortsword
{ 0x00030FFC, WeaponInfusionType::OCCULT }, // Occult Shortsword
{ 0x00031060, WeaponInfusionType::FIRE }, // Fire Shortsword
{ 0x000310C4, WeaponInfusionType::CHAOS }, // Chaos Shortsword
{ 0x00031128, WeaponInfusionType::STANDARD }, // Longsword
{ 0x0003118C, WeaponInfusionType::CRYSTAL }, // Crystal Longsword
{ 0x000311F0, WeaponInfusionType::LIGHTNING }, // Lightning Longsword
{ 0x00031254, WeaponInfusionType::RAW }, // Raw Longsword
{ 0x000312B8, WeaponInfusionType::MAGIC }, // Magic Longsword
{ 0x0003131C, WeaponInfusionType::ENCHANTED }, // Enchanted Longsword
{ 0x00031380, WeaponInfusionType::DIVINE }, // Divine Longsword
{ 0x000313E4, WeaponInfusionType::OCCULT }, // Occult Longsword
{ 0x00031448, WeaponInfusionType::FIRE }, // Fire Longsword
{ 0x000314AC, WeaponInfusionType::CHAOS }, // Chaos Longsword
{ 0x00031510, WeaponInfusionType::STANDARD }, // Broadsword
{ 0x00031574, WeaponInfusionType::CRYSTAL }, // Crystal Broadsword
{ 0x000315D8, WeaponInfusionType::LIGHTNING }, // Lightning Broadsword
{ 0x0003163C, WeaponInfusionType::RAW }, // Raw Broadsword
{ 0x000316A0, WeaponInfusionType::MAGIC }, // Magic Broadsword
{ 0x00031704, WeaponInfusionType::ENCHANTED }, // Enchanted Broadsword
{ 0x00031768, WeaponInfusionType::DIVINE }, // Divine Broadsword
{ 0x000317CC, WeaponInfusionType::OCCULT }, // Occult Broadsword
{ 0x00031830, WeaponInfusionType::FIRE }, // Fire Broadsword
{ 0x00031894, WeaponInfusionType::CHAOS }, // Chaos Broadsword
{ 0x000318F8, WeaponInfusionType::STANDARD }, // Broken Straight Sword
{ 0x0003195C, WeaponInfusionType::CRYSTAL }, // Crystal Broken Straight Sword
{ 0x000319C0, WeaponInfusionType::LIGHTNING }, // Lightning Broken Straight Sword
{ 0x00031A24, WeaponInfusionType::RAW }, // Raw Broken Straight Sword
{ 0x00031A88, WeaponInfusionType::MAGIC }, // Magic Broken Straight Sword
{ 0x00031AEC, WeaponInfusionType::ENCHANTED }, // Enchanted Broken Straight Sword
{ 0x00031B50, WeaponInfusionType::DIVINE }, // Divine Broken Straight Sword
{ 0x00031BB4, WeaponInfusionType::OCCULT }, // Occult Broken Straight Sword
{ 0x00031C18, WeaponInfusionType::FIRE }, // Fire Broken Straight Sword
{ 0x00031C7C, WeaponInfusionType::CHAOS }, // Chaos Broken Straight Sword
{ 0x00031CE0, WeaponInfusionType::STANDARD }, // Balder Side Sword
{ 0x00031D44, WeaponInfusionType::CRYSTAL }, // Crystal Balder Side Sword
{ 0x00031DA8, WeaponInfusionType::LIGHTNING }, // Lightning Balder Side Sword
{ 0x00031E0C, WeaponInfusionType::RAW }, // Raw Balder Side Sword
{ 0x00031E70, WeaponInfusionType::MAGIC }, // Magic Balder Side Sword
{ 0x00031ED4, WeaponInfusionType::ENCHANTED }, // Enchanted Balder Side Sword
{ 0x00031F38, WeaponInfusionType::DIVINE }, // Divine Balder Side Sword
{ 0x00031F9C, WeaponInfusionType::OCCULT }, // Occult Balder Side Sword
{ 0x00032000, WeaponInfusionType::FIRE }, // Fire Balder Side Sword
{ 0x00032064, WeaponInfusionType::CHAOS }, // Chaos Balder Side Sword
{ 0x000320C8, WeaponInfusionType::CRYSTAL }, // Crystal Straight Sword
{ 0x000324B0, WeaponInfusionType::STANDARD }, // Sunlight Straight Sword
{ 0x00032514, WeaponInfusionType::CRYSTAL }, // Crystal Sunlight Straight Sword
{ 0x00032578, WeaponInfusionType::LIGHTNING }, // Lightning Sunlight Straight Sword
{ 0x000325DC, WeaponInfusionType::RAW }, // Raw Sunlight Straight Sword
{ 0x00032640, WeaponInfusionType::MAGIC }, // Magic Sunlight Straight Sword
{ 0x000326A4, WeaponInfusionType::ENCHANTED }, // Enchanted Sunlight Straight Sword
{ 0x00032708, WeaponInfusionType::DIVINE }, // Divine Sunlight Straight Sword
{ 0x0003276C, WeaponInfusionType::OCCULT }, // Occult Sunlight Straight Sword
{ 0x000327D0, WeaponInfusionType::FIRE }, // Fire Sunlight Straight Sword
{ 0x00032834, WeaponInfusionType::CHAOS }, // Chaos Sunlight Straight Sword
{ 0x00032898, WeaponInfusionType::STANDARD }, // Barbed Straight Sword
{ 0x000328FC, WeaponInfusionType::CRYSTAL }, // Crystal Barbed Straight Sword
{ 0x00032960, WeaponInfusionType::LIGHTNING }, // Lightning Barbed Straight Sword
{ 0x000329C4, WeaponInfusionType::RAW }, // Raw Barbed Straight Sword
{ 0x00032A28, WeaponInfusionType::MAGIC }, // Magic Barbed Straight Sword
{ 0x00032A8C, WeaponInfusionType::ENCHANTED }, // Enchanted Barbed Straight Sword
{ 0x00032AF0, WeaponInfusionType::DIVINE }, // Divine Barbed Straight Sword
{ 0x00032B54, WeaponInfusionType::OCCULT }, // Occult Barbed Straight Sword
{ 0x00032BB8, WeaponInfusionType::FIRE }, // Fire Barbed Straight Sword
{ 0x00032C1C, WeaponInfusionType::CHAOS }, // Chaos Barbed Straight Sword
{ 0x00033068, WeaponInfusionType::STANDARD }, // Astora's Straight Sword
{ 0x000330CC, WeaponInfusionType::CRYSTAL }, // Crystal Astora's Straight Sword
{ 0x00033130, WeaponInfusionType::LIGHTNING }, // Lightning Astora's Straight Sword
{ 0x00033194, WeaponInfusionType::RAW }, // Raw Astora's Straight Sword
{ 0x000331F8, WeaponInfusionType::MAGIC }, // Magic Astora's Straight Sword
{ 0x0003325C, WeaponInfusionType::ENCHANTED }, // Enchanted Astora's Straight Sword
{ 0x000332C0, WeaponInfusionType::DIVINE }, // Divine Astora's Straight Sword
{ 0x00033324, WeaponInfusionType::OCCULT }, // Occult Astora's Straight Sword
{ 0x00033388, WeaponInfusionType::FIRE }, // Fire Astora's Straight Sword
{ 0x000333EC, WeaponInfusionType::CHAOS }, // Chaos Astora's Straight Sword
{ 0x00033450, WeaponInfusionType::STANDARD }, // Darksword
{ 0x000334B4, WeaponInfusionType::CRYSTAL }, // Crystal Darksword
{ 0x00033518, WeaponInfusionType::LIGHTNING }, // Lightning Darksword
{ 0x0003357C, WeaponInfusionType::RAW }, // Raw Darksword
{ 0x000335E0, WeaponInfusionType::MAGIC }, // Magic Darksword
{ 0x00033644, WeaponInfusionType::ENCHANTED }, // Enchanted Darksword
{ 0x000336A8, WeaponInfusionType::DIVINE }, // Divine Darksword
{ 0x0003370C, WeaponInfusionType::OCCULT }, // Occult Darksword
{ 0x00033770, WeaponInfusionType::FIRE }, // Fire Darksword
{ 0x000337D4, WeaponInfusionType::CHAOS }, // Chaos Darksword
{ 0x00033838, WeaponInfusionType::STANDARD }, // Drake Sword
{ 0x00033C20, WeaponInfusionType::STANDARD }, // Straight Sword Hilt
{ 0x00033C84, WeaponInfusionType::CRYSTAL }, // Crystal Straight Sword Hilt
{ 0x00033CE8, WeaponInfusionType::LIGHTNING }, // Lightning Straight Sword Hilt
{ 0x00033D4C, WeaponInfusionType::RAW }, // Raw Straight Sword Hilt
{ 0x00033DB0, WeaponInfusionType::MAGIC }, // Magic Straight Sword Hilt
{ 0x00033E14, WeaponInfusionType::ENCHANTED }, // Enchanted Straight Sword Hilt
{ 0x00033E78, WeaponInfusionType::DIVINE }, // Divine Straight Sword Hilt
{ 0x00033EDC, WeaponInfusionType::OCCULT }, // Occult Straight Sword Hilt
{ 0x00033F40, WeaponInfusionType::FIRE }, // Fire Straight Sword Hilt
{ 0x00033FA4, WeaponInfusionType::CHAOS }, // Chaos Straight Sword Hilt
{ 0x000493E0, WeaponInfusionType::STANDARD }, // Bastard Sword
{ 0x00049444, WeaponInfusionType::CRYSTAL }, // Crystal Bastard Sword
{ 0x000494A8, WeaponInfusionType::LIGHTNING }, // Lightning Bastard Sword
{ 0x0004950C, WeaponInfusionType::RAW }, // Raw Bastard Sword
{ 0x00049570, WeaponInfusionType::MAGIC }, // Magic Bastard Sword
{ 0x000495D4, WeaponInfusionType::ENCHANTED }, // Enchanted Bastard Sword
{ 0x00049638, WeaponInfusionType::DIVINE }, // Divine Bastard Sword
{ 0x0004969C, WeaponInfusionType::OCCULT }, // Occult Bastard Sword
{ 0x00049700, WeaponInfusionType::FIRE }, // Fire Bastard Sword
{ 0x00049764, WeaponInfusionType::CHAOS }, // Chaos Bastard Sword
{ 0x000497C8, WeaponInfusionType::STANDARD }, // Claymore
{ 0x0004982C, WeaponInfusionType::CRYSTAL }, // Crystal Claymore
{ 0x00049890, WeaponInfusionType::LIGHTNING }, // Lightning Claymore
{ 0x000498F4, WeaponInfusionType::RAW }, // Raw Claymore
{ 0x00049958, WeaponInfusionType::MAGIC }, // Magic Claymore
{ 0x000499BC, WeaponInfusionType::ENCHANTED }, // Enchanted Claymore
{ 0x00049A20, WeaponInfusionType::DIVINE }, // Divine Claymore
{ 0x00049A84, WeaponInfusionType::OCCULT }, // Occult Claymore
{ 0x00049AE8, WeaponInfusionType::FIRE }, // Fire Claymore
{ 0x00049B4C, WeaponInfusionType::CHAOS }, // Chaos Claymore
{ 0x00049BB0, WeaponInfusionType::STANDARD }, // Man-serpent Greatsword
{ 0x00049C14, WeaponInfusionType::CRYSTAL }, // Crystal Man-serpent Greatsword
{ 0x00049C78, WeaponInfusionType::LIGHTNING }, // Lightning Man-serpent Greatsword
{ 0x00049CDC, WeaponInfusionType::RAW }, // Raw Man-serpent Greatsword
{ 0x00049D40, WeaponInfusionType::MAGIC }, // Magic Man-serpent Greatsword
{ 0x00049DA4, WeaponInfusionType::ENCHANTED }, // Enchanted Man-serpent Greatsword
{ 0x00049E08, WeaponInfusionType::DIVINE }, // Divine Man-serpent Greatsword
{ 0x00049E6C, WeaponInfusionType::OCCULT }, // Occult Man-serpent Greatsword
{ 0x00049ED0, WeaponInfusionType::FIRE }, // Fire Man-serpent Greatsword
{ 0x00049F34, WeaponInfusionType::CHAOS }, // Chaos Man-serpent Greatsword
{ 0x00049F98, WeaponInfusionType::STANDARD }, // Flamberge
{ 0x00049FFC, WeaponInfusionType::CRYSTAL }, // Crystal Flamberge
{ 0x0004A060, WeaponInfusionType::LIGHTNING }, // Lightning Flamberge
{ 0x0004A0C4, WeaponInfusionType::RAW }, // Raw Flamberge
{ 0x0004A128, WeaponInfusionType::MAGIC }, // Magic Flamberge
{ 0x0004A18C, WeaponInfusionType::ENCHANTED }, // Enchanted Flamberge
{ 0x0004A1F0, WeaponInfusionType::DIVINE }, // Divine Flamberge
{ 0x0004A254, WeaponInfusionType::OCCULT }, // Occult Flamberge
{ 0x0004A2B8, WeaponInfusionType::FIRE }, // Fire Flamberge
{ 0x0004A31C, WeaponInfusionType::CHAOS }, // Chaos Flamberge
{ 0x0004A380, WeaponInfusionType::CRYSTAL }, // Crystal Greatsword
{ 0x0004AB50, WeaponInfusionType::STANDARD }, // Stone Greatsword
{ 0x00055730, WeaponInfusionType::STANDARD }, // Zweihander
{ 0x00055794, WeaponInfusionType::CRYSTAL }, // Crystal Zweihander
{ 0x000557F8, WeaponInfusionType::LIGHTNING }, // Lightning Zweihander
{ 0x0005585C, WeaponInfusionType::RAW }, // Raw Zweihander
{ 0x000558C0, WeaponInfusionType::MAGIC }, // Magic Zweihander
{ 0x00055924, WeaponInfusionType::ENCHANTED }, // Enchanted Zweihander
{ 0x00055988, WeaponInfusionType::DIVINE }, // Divine Zweihander
{ 0x000559EC, WeaponInfusionType::OCCULT }, // Occult Zweihander
{ 0x00055A50, WeaponInfusionType::FIRE }, // Fire Zweihander
{ 0x00055AB4, WeaponInfusionType::CHAOS }, // Chaos Zweihander
{ 0x00055B18, WeaponInfusionType::STANDARD }, // Greatsword
{ 0x00055B7C, WeaponInfusionType::CRYSTAL }, // Crystal Greatsword
{ 0x00055BE0, WeaponInfusionType::LIGHTNING }, // Lightning Greatsword
{ 0x00055C44, WeaponInfusionType::RAW }, // Raw Greatsword
{ 0x00055CA8, WeaponInfusionType::MAGIC }, // Magic Greatsword
{ 0x00055D0C, WeaponInfusionType::ENCHANTED }, // Enchanted Greatsword
{ 0x00055D70, WeaponInfusionType::DIVINE }, // Divine Greatsword
{ 0x00055DD4, WeaponInfusionType::OCCULT }, // Occult Greatsword
{ 0x00055E38, WeaponInfusionType::FIRE }, // Fire Greatsword
{ 0x00055E9C, WeaponInfusionType::CHAOS }, // Chaos Greatsword
{ 0x00055F00, WeaponInfusionType::STANDARD }, // Demon Great Machete
{ 0x00055F64, WeaponInfusionType::CRYSTAL }, // Crystal Demon Great Machete
{ 0x00055FC8, WeaponInfusionType::LIGHTNING }, // Lightning Demon Great Machete
{ 0x0005602C, WeaponInfusionType::RAW }, // Raw Demon Great Machete
{ 0x00056090, WeaponInfusionType::MAGIC }, // Magic Demon Great Machete
{ 0x000560F4, WeaponInfusionType::ENCHANTED }, // Enchanted Demon Great Machete
{ 0x00056158, WeaponInfusionType::DIVINE }, // Divine Demon Great Machete
{ 0x000561BC, WeaponInfusionType::OCCULT }, // Occult Demon Great Machete
{ 0x00056220, WeaponInfusionType::FIRE }, // Fire Demon Great Machete
{ 0x00056284, WeaponInfusionType::CHAOS }, // Chaos Demon Great Machete
{ 0x00061A80, WeaponInfusionType::STANDARD }, // Scimitar
{ 0x00061AE4, WeaponInfusionType::CRYSTAL }, // Crystal Scimitar
{ 0x00061B48, WeaponInfusionType::LIGHTNING }, // Lightning Scimitar
{ 0x00061BAC, WeaponInfusionType::RAW }, // Raw Scimitar
{ 0x00061C10, WeaponInfusionType::MAGIC }, // Magic Scimitar
{ 0x00061C74, WeaponInfusionType::ENCHANTED }, // Enchanted Scimitar
{ 0x00061CD8, WeaponInfusionType::DIVINE }, // Divine Scimitar
{ 0x00061D3C, WeaponInfusionType::OCCULT }, // Occult Scimitar
{ 0x00061DA0, WeaponInfusionType::FIRE }, // Fire Scimitar
{ 0x00061E04, WeaponInfusionType::CHAOS }, // Chaos Scimitar
{ 0x00061E68, WeaponInfusionType::STANDARD }, // Falchion
{ 0x00061ECC, WeaponInfusionType::CRYSTAL }, // Crystal Falchion
{ 0x00061F30, WeaponInfusionType::LIGHTNING }, // Lightning Falchion
{ 0x00061F94, WeaponInfusionType::RAW }, // Raw Falchion
{ 0x00061FF8, WeaponInfusionType::MAGIC }, // Magic Falchion
{ 0x0006205C, WeaponInfusionType::ENCHANTED }, // Enchanted Falchion
{ 0x000620C0, WeaponInfusionType::DIVINE }, // Divine Falchion
{ 0x00062124, WeaponInfusionType::OCCULT }, // Occult Falchion
{ 0x00062188, WeaponInfusionType::FIRE }, // Fire Falchion
{ 0x000621EC, WeaponInfusionType::CHAOS }, // Chaos Falchion
{ 0x00062250, WeaponInfusionType::STANDARD }, // Shotel
{ 0x000622B4, WeaponInfusionType::CRYSTAL }, // Crystal Shotel
{ 0x00062318, WeaponInfusionType::LIGHTNING }, // Lightning Shotel
{ 0x0006237C, WeaponInfusionType::RAW }, // Raw Shotel
{ 0x000623E0, WeaponInfusionType::MAGIC }, // Magic Shotel
{ 0x00062444, WeaponInfusionType::ENCHANTED }, // Enchanted Shotel
{ 0x000624A8, WeaponInfusionType::DIVINE }, // Divine Shotel
{ 0x0006250C, WeaponInfusionType::OCCULT }, // Occult Shotel
{ 0x00062570, WeaponInfusionType::FIRE }, // Fire Shotel
{ 0x000625D4, WeaponInfusionType::CHAOS }, // Chaos Shotel
{ 0x00062E08, WeaponInfusionType::STANDARD }, // Painting Guardian Sword
{ 0x00062E6C, WeaponInfusionType::CRYSTAL }, // Crystal Painting Guardian Sword
{ 0x00062ED0, WeaponInfusionType::LIGHTNING }, // Lightning Painting Guardian Sword
{ 0x00062F34, WeaponInfusionType::RAW }, // Raw Painting Guardian Sword
{ 0x00062F98, WeaponInfusionType::MAGIC }, // Magic Painting Guardian Sword
{ 0x00062FFC, WeaponInfusionType::ENCHANTED }, // Enchanted Painting Guardian Sword
{ 0x00063060, WeaponInfusionType::DIVINE }, // Divine Painting Guardian Sword
{ 0x000630C4, WeaponInfusionType::OCCULT }, // Occult Painting Guardian Sword
{ 0x00063128, WeaponInfusionType::FIRE }, // Fire Painting Guardian Sword
{ 0x0006318C, WeaponInfusionType::CHAOS }, // Chaos Painting Guardian Sword
{ 0x0006DDD0, WeaponInfusionType::STANDARD }, // Server
{ 0x0006DE34, WeaponInfusionType::CRYSTAL }, // Crystal Server
{ 0x0006DE98, WeaponInfusionType::LIGHTNING }, // Lightning Server
{ 0x0006DEFC, WeaponInfusionType::RAW }, // Raw Server
{ 0x0006DF60, WeaponInfusionType::MAGIC }, // Magic Server
{ 0x0006DFC4, WeaponInfusionType::ENCHANTED }, // Enchanted Server
{ 0x0006E028, WeaponInfusionType::DIVINE }, // Divine Server
{ 0x0006E08C, WeaponInfusionType::OCCULT }, // Occult Server
{ 0x0006E0F0, WeaponInfusionType::FIRE }, // Fire Server
{ 0x0006E154, WeaponInfusionType::CHAOS }, // Chaos Server
{ 0x0006E1B8, WeaponInfusionType::STANDARD }, // Murakumo
{ 0x0006E21C, WeaponInfusionType::CRYSTAL }, // Crystal Murakumo
{ 0x0006E280, WeaponInfusionType::LIGHTNING }, // Lightning Murakumo
{ 0x0006E2E4, WeaponInfusionType::RAW }, // Raw Murakumo
{ 0x0006E348, WeaponInfusionType::MAGIC }, // Magic Murakumo
{ 0x0006E3AC, WeaponInfusionType::ENCHANTED }, // Enchanted Murakumo
{ 0x0006E410, WeaponInfusionType::DIVINE }, // Divine Murakumo
{ 0x0006E474, WeaponInfusionType::OCCULT }, // Occult Murakumo
{ 0x0006E4D8, WeaponInfusionType::FIRE }, // Fire Murakumo
{ 0x0006E53C, WeaponInfusionType::CHAOS }, // Chaos Murakumo
{ 0x0006E988, WeaponInfusionType::STANDARD }, // Gravelord Sword
{ 0x0007A120, WeaponInfusionType::STANDARD }, // Uchigatana
{ 0x0007A184, WeaponInfusionType::CRYSTAL }, // Crystal Uchigatana
{ 0x0007A1E8, WeaponInfusionType::LIGHTNING }, // Lightning Uchigatana
{ 0x0007A24C, WeaponInfusionType::RAW }, // Raw Uchigatana
{ 0x0007A2B0, WeaponInfusionType::MAGIC }, // Magic Uchigatana
{ 0x0007A314, WeaponInfusionType::ENCHANTED }, // Enchanted Uchigatana
{ 0x0007A378, WeaponInfusionType::DIVINE }, // Divine Uchigatana
{ 0x0007A3DC, WeaponInfusionType::OCCULT }, // Occult Uchigatana
{ 0x0007A440, WeaponInfusionType::FIRE }, // Fire Uchigatana
{ 0x0007A4A4, WeaponInfusionType::CHAOS }, // Chaos Uchigatana
{ 0x0007A508, WeaponInfusionType::STANDARD }, // Washing Pole
{ 0x0007A56C, WeaponInfusionType::CRYSTAL }, // Crystal Washing Pole
{ 0x0007A5D0, WeaponInfusionType::LIGHTNING }, // Lightning Washing Pole
{ 0x0007A634, WeaponInfusionType::RAW }, // Raw Washing Pole
{ 0x0007A698, WeaponInfusionType::MAGIC }, // Magic Washing Pole
{ 0x0007A6FC, WeaponInfusionType::ENCHANTED }, // Enchanted Washing Pole
{ 0x0007A760, WeaponInfusionType::DIVINE }, // Divine Washing Pole
{ 0x0007A7C4, WeaponInfusionType::OCCULT }, // Occult Washing Pole
{ 0x0007A828, WeaponInfusionType::FIRE }, // Fire Washing Pole
{ 0x0007A88C, WeaponInfusionType::CHAOS }, // Chaos Washing Pole
{ 0x0007A8F0, WeaponInfusionType::STANDARD }, // Iaito
{ 0x0007A954, WeaponInfusionType::CRYSTAL }, // Crystal Iaito
{ 0x0007A9B8, WeaponInfusionType::LIGHTNING }, // Lightning Iaito
{ 0x0007AA1C, WeaponInfusionType::RAW }, // Raw Iaito
{ 0x0007AA80, WeaponInfusionType::MAGIC }, // Magic Iaito
{ 0x0007AAE4, WeaponInfusionType::ENCHANTED }, // Enchanted Iaito
{ 0x0007AB48, WeaponInfusionType::DIVINE }, // Divine Iaito
{ 0x0007ABAC, WeaponInfusionType::OCCULT }, // Occult Iaito
{ 0x0007AC10, WeaponInfusionType::FIRE }, // Fire Iaito
{ 0x0007AC74, WeaponInfusionType::CHAOS }, // Chaos Iaito
{ 0x000927C0, WeaponInfusionType::STANDARD }, // Mail Breaker
{ 0x00092824, WeaponInfusionType::CRYSTAL }, // Crystal Mail Breaker
{ 0x00092888, WeaponInfusionType::LIGHTNING }, // Lightning Mail Breaker
{ 0x000928EC, WeaponInfusionType::RAW }, // Raw Mail Breaker
{ 0x00092950, WeaponInfusionType::MAGIC }, // Magic Mail Breaker
{ 0x000929B4, WeaponInfusionType::ENCHANTED }, // Enchanted Mail Breaker
{ 0x00092A18, WeaponInfusionType::DIVINE }, // Divine Mail Breaker
{ 0x00092A7C, WeaponInfusionType::OCCULT }, // Occult Mail Breaker
{ 0x00092AE0, WeaponInfusionType::FIRE }, // Fire Mail Breaker
{ 0x00092B44, WeaponInfusionType::CHAOS }, // Chaos Mail Breaker
{ 0x00092BA8, WeaponInfusionType::STANDARD }, // Rapier
{ 0x00092C0C, WeaponInfusionType::CRYSTAL }, // Crystal Rapier
{ 0x00092C70, WeaponInfusionType::LIGHTNING }, // Lightning Rapier
{ 0x00092CD4, WeaponInfusionType::RAW }, // Raw Rapier
{ 0x00092D38, WeaponInfusionType::MAGIC }, // Magic Rapier
{ 0x00092D9C, WeaponInfusionType::ENCHANTED }, // Enchanted Rapier
{ 0x00092E00, WeaponInfusionType::DIVINE }, // Divine Rapier
{ 0x00092E64, WeaponInfusionType::OCCULT }, // Occult Rapier
{ 0x00092EC8, WeaponInfusionType::FIRE }, // Fire Rapier
{ 0x00092F2C, WeaponInfusionType::CHAOS }, // Chaos Rapier
{ 0x00092F90, WeaponInfusionType::STANDARD }, // Estoc
{ 0x00092FF4, WeaponInfusionType::CRYSTAL }, // Crystal Estoc
{ 0x00093058, WeaponInfusionType::LIGHTNING }, // Lightning Estoc
{ 0x000930BC, WeaponInfusionType::RAW }, // Raw Estoc
{ 0x00093120, WeaponInfusionType::MAGIC }, // Magic Estoc
{ 0x00093184, WeaponInfusionType::ENCHANTED }, // Enchanted Estoc
{ 0x000931E8, WeaponInfusionType::DIVINE }, // Divine Estoc
{ 0x0009324C, WeaponInfusionType::OCCULT }, // Occult Estoc
{ 0x000932B0, WeaponInfusionType::FIRE }, // Fire Estoc
{ 0x00093314, WeaponInfusionType::CHAOS }, // Chaos Estoc
{ 0x00093378, WeaponInfusionType::STANDARD }, // Velka's Rapier
{ 0x00093760, WeaponInfusionType::STANDARD }, // Ricard's Rapier
{ 0x000937C4, WeaponInfusionType::CRYSTAL }, // Crystal Ricard's Rapier
{ 0x00093828, WeaponInfusionType::LIGHTNING }, // Lightning Ricard's Rapier
{ 0x0009388C, WeaponInfusionType::RAW }, // Raw Ricard's Rapier
{ 0x000938F0, WeaponInfusionType::MAGIC }, // Magic Ricard's Rapier
{ 0x00093954, WeaponInfusionType::ENCHANTED }, // Enchanted Ricard's Rapier
{ 0x000939B8, WeaponInfusionType::DIVINE }, // Divine Ricard's Rapier
{ 0x00093A1C, WeaponInfusionType::OCCULT }, // Occult Ricard's Rapier
{ 0x00093A80, WeaponInfusionType::FIRE }, // Fire Ricard's Rapier
{ 0x00093AE4, WeaponInfusionType::CHAOS }, // Chaos Ricard's Rapier
{ 0x000AAE60, WeaponInfusionType::STANDARD }, // Hand Axe
{ 0x000AAEC4, WeaponInfusionType::CRYSTAL }, // Crystal Hand Axe
{ 0x000AAF28, WeaponInfusionType::LIGHTNING }, // Lightning Hand Axe
{ 0x000AAF8C, WeaponInfusionType::RAW }, // Raw Hand Axe
{ 0x000AAFF0, WeaponInfusionType::MAGIC }, // Magic Hand Axe
{ 0x000AB054, WeaponInfusionType::ENCHANTED }, // Enchanted Hand Axe
{ 0x000AB0B8, WeaponInfusionType::DIVINE }, // Divine Hand Axe
{ 0x000AB11C, WeaponInfusionType::OCCULT }, // Occult Hand Axe
{ 0x000AB180, WeaponInfusionType::FIRE }, // Fire Hand Axe
{ 0x000AB1E4, WeaponInfusionType::CHAOS }, // Chaos Hand Axe
{ 0x000AB248, WeaponInfusionType::STANDARD }, // Battle Axe
{ 0x000AB2AC, WeaponInfusionType::CRYSTAL }, // Crystal Battle Axe
{ 0x000AB310, WeaponInfusionType::LIGHTNING }, // Lightning Battle Axe
{ 0x000AB374, WeaponInfusionType::RAW }, // Raw Battle Axe
{ 0x000AB3D8, WeaponInfusionType::MAGIC }, // Magic Battle Axe
{ 0x000AB43C, WeaponInfusionType::ENCHANTED }, // Enchanted Battle Axe
{ 0x000AB4A0, WeaponInfusionType::DIVINE }, // Divine Battle Axe
{ 0x000AB504, WeaponInfusionType::OCCULT }, // Occult Battle Axe
{ 0x000AB568, WeaponInfusionType::FIRE }, // Fire Battle Axe
{ 0x000AB5CC, WeaponInfusionType::CHAOS }, // Chaos Battle Axe
{ 0x000AB630, WeaponInfusionType::STANDARD }, // Crescent Axe
{ 0x000AB694, WeaponInfusionType::CRYSTAL }, // Crystal Crescent Axe
{ 0x000AB6F8, WeaponInfusionType::LIGHTNING }, // Lightning Crescent Axe
{ 0x000AB75C, WeaponInfusionType::RAW }, // Raw Crescent Axe
{ 0x000AB7C0, WeaponInfusionType::MAGIC }, // Magic Crescent Axe
{ 0x000AB824, WeaponInfusionType::ENCHANTED }, // Enchanted Crescent Axe
{ 0x000AB888, WeaponInfusionType::DIVINE }, // Divine Crescent Axe
{ 0x000AB8EC, WeaponInfusionType::OCCULT }, // Occult Crescent Axe
{ 0x000AB950, WeaponInfusionType::FIRE }, // Fire Crescent Axe
{ 0x000AB9B4, WeaponInfusionType::CHAOS }, // Chaos Crescent Axe
{ 0x000ABA18, WeaponInfusionType::STANDARD }, // Butcher Knife
{ 0x000ABA7C, WeaponInfusionType::CRYSTAL }, // Crystal Butcher Knife
{ 0x000ABAE0, WeaponInfusionType::LIGHTNING }, // Lightning Butcher Knife
{ 0x000ABB44, WeaponInfusionType::RAW }, // Raw Butcher Knife
{ 0x000ABBA8, WeaponInfusionType::MAGIC }, // Magic Butcher Knife
{ 0x000ABC0C, WeaponInfusionType::ENCHANTED }, // Enchanted Butcher Knife
{ 0x000ABC70, WeaponInfusionType::DIVINE }, // Divine Butcher Knife
{ 0x000ABCD4, WeaponInfusionType::OCCULT }, // Occult Butcher Knife
{ 0x000ABD38, WeaponInfusionType::FIRE }, // Fire Butcher Knife
{ 0x000ABD9C, WeaponInfusionType::CHAOS }, // Chaos Butcher Knife
{ 0x000AC1E8, WeaponInfusionType::STANDARD }, // Gargoyle Tail Axe
{ 0x000AC24C, WeaponInfusionType::CRYSTAL }, // Crystal Gargoyle Tail Axe
{ 0x000AC2B0, WeaponInfusionType::LIGHTNING }, // Lightning Gargoyle Tail Axe
{ 0x000AC314, WeaponInfusionType::RAW }, // Raw Gargoyle Tail Axe
{ 0x000AC378, WeaponInfusionType::MAGIC }, // Magic Gargoyle Tail Axe
{ 0x000AC3DC, WeaponInfusionType::ENCHANTED }, // Enchanted Gargoyle Tail Axe
{ 0x000AC440, WeaponInfusionType::DIVINE }, // Divine Gargoyle Tail Axe
{ 0x000AC4A4, WeaponInfusionType::OCCULT }, // Occult Gargoyle Tail Axe
{ 0x000AC508, WeaponInfusionType::FIRE }, // Fire Gargoyle Tail Axe
{ 0x000AC56C, WeaponInfusionType::CHAOS }, // Chaos Gargoyle Tail Axe
{ 0x000B71B0, WeaponInfusionType::STANDARD }, // Greataxe
{ 0x000B7214, WeaponInfusionType::CRYSTAL }, // Crystal Greataxe
{ 0x000B7278, WeaponInfusionType::LIGHTNING }, // Lightning Greataxe
{ 0x000B72DC, WeaponInfusionType::RAW }, // Raw Greataxe
{ 0x000B7340, WeaponInfusionType::MAGIC }, // Magic Greataxe
{ 0x000B73A4, WeaponInfusionType::ENCHANTED }, // Enchanted Greataxe
{ 0x000B7408, WeaponInfusionType::DIVINE }, // Divine Greataxe
{ 0x000B746C, WeaponInfusionType::OCCULT }, // Occult Greataxe
{ 0x000B74D0, WeaponInfusionType::FIRE }, // Fire Greataxe
{ 0x000B7534, WeaponInfusionType::CHAOS }, // Chaos Greataxe
{ 0x000B7598, WeaponInfusionType::STANDARD }, // Demon's Greataxe
{ 0x000B75FC, WeaponInfusionType::CRYSTAL }, // Crystal Demon's Greataxe
{ 0x000B7660, WeaponInfusionType::LIGHTNING }, // Lightning Demon's Greataxe
{ 0x000B76C4, WeaponInfusionType::RAW }, // Raw Demon's Greataxe
{ 0x000B7728, WeaponInfusionType::MAGIC }, // Magic Demon's Greataxe
{ 0x000B778C, WeaponInfusionType::ENCHANTED }, // Enchanted Demon's Greataxe
{ 0x000B77F0, WeaponInfusionType::DIVINE }, // Divine Demon's Greataxe
{ 0x000B7854, WeaponInfusionType::OCCULT }, // Occult Demon's Greataxe
{ 0x000B78B8, WeaponInfusionType::FIRE }, // Fire Demon's Greataxe
{ 0x000B791C, WeaponInfusionType::CHAOS }, // Chaos Demon's Greataxe
{ 0x000B7980, WeaponInfusionType::STANDARD }, // Dragon King Greataxe
{ 0x000B7D68, WeaponInfusionType::STANDARD }, // Black Knight Greataxe
{ 0x000C3500, WeaponInfusionType::STANDARD }, // Club
{ 0x000C3564, WeaponInfusionType::CRYSTAL }, // Crystal Club
{ 0x000C35C8, WeaponInfusionType::LIGHTNING }, // Lightning Club
{ 0x000C362C, WeaponInfusionType::RAW }, // Raw Club
{ 0x000C3690, WeaponInfusionType::MAGIC }, // Magic Club
{ 0x000C36F4, WeaponInfusionType::ENCHANTED }, // Enchanted Club
{ 0x000C3758, WeaponInfusionType::DIVINE }, // Divine Club
{ 0x000C37BC, WeaponInfusionType::OCCULT }, // Occult Club
{ 0x000C3820, WeaponInfusionType::FIRE }, // Fire Club
{ 0x000C3884, WeaponInfusionType::CHAOS }, // Chaos Club
{ 0x000C38E8, WeaponInfusionType::STANDARD }, // Mace
{ 0x000C394C, WeaponInfusionType::CRYSTAL }, // Crystal Mace
{ 0x000C39B0, WeaponInfusionType::LIGHTNING }, // Lightning Mace
{ 0x000C3A14, WeaponInfusionType::RAW }, // Raw Mace
{ 0x000C3A78, WeaponInfusionType::MAGIC }, // Magic Mace
{ 0x000C3ADC, WeaponInfusionType::ENCHANTED }, // Enchanted Mace
{ 0x000C3B40, WeaponInfusionType::DIVINE }, // Divine Mace
{ 0x000C3BA4, WeaponInfusionType::OCCULT }, // Occult Mace
{ 0x000C3C08, WeaponInfusionType::FIRE }, // Fire Mace
{ 0x000C3C6C, WeaponInfusionType::CHAOS }, // Chaos Mace
{ 0x000C3CD0, WeaponInfusionType::STANDARD }, // Morning Star
{ 0x000C3D34, WeaponInfusionType::CRYSTAL }, // Crystal Morning Star
{ 0x000C3D98, WeaponInfusionType::LIGHTNING }, // Lightning Morning Star
{ 0x000C3DFC, WeaponInfusionType::RAW }, // Raw Morning Star
{ 0x000C3E60, WeaponInfusionType::MAGIC }, // Magic Morning Star
{ 0x000C3EC4, WeaponInfusionType::ENCHANTED }, // Enchanted Morning Star
{ 0x000C3F28, WeaponInfusionType::DIVINE }, // Divine Morning Star
{ 0x000C3F8C, WeaponInfusionType::OCCULT }, // Occult Morning Star
{ 0x000C3FF0, WeaponInfusionType::FIRE }, // Fire Morning Star
{ 0x000C4054, WeaponInfusionType::CHAOS }, // Chaos Morning Star
{ 0x000C40B8, WeaponInfusionType::STANDARD }, // Warpick
{ 0x000C411C, WeaponInfusionType::CRYSTAL }, // Crystal Warpick
{ 0x000C4180, WeaponInfusionType::LIGHTNING }, // Lightning Warpick
{ 0x000C41E4, WeaponInfusionType::RAW }, // Raw Warpick
{ 0x000C4248, WeaponInfusionType::MAGIC }, // Magic Warpick
{ 0x000C42AC, WeaponInfusionType::ENCHANTED }, // Enchanted Warpick
{ 0x000C4310, WeaponInfusionType::DIVINE }, // Divine Warpick
{ 0x000C4374, WeaponInfusionType::OCCULT }, // Occult Warpick
{ 0x000C43D8, WeaponInfusionType::FIRE }, // Fire Warpick
{ 0x000C443C, WeaponInfusionType::CHAOS }, // Chaos Warpick
{ 0x000C44A0, WeaponInfusionType::STANDARD }, // Pickaxe
{ 0x000C4504, WeaponInfusionType::CRYSTAL }, // Crystal Pickaxe
{ 0x000C4568, WeaponInfusionType::LIGHTNING }, // Lightning Pickaxe
{ 0x000C45CC, WeaponInfusionType::RAW }, // Raw Pickaxe
{ 0x000C4630, WeaponInfusionType::MAGIC }, // Magic Pickaxe
{ 0x000C4694, WeaponInfusionType::ENCHANTED }, // Enchanted Pickaxe
{ 0x000C46F8, WeaponInfusionType::DIVINE }, // Divine Pickaxe
{ 0x000C475C, WeaponInfusionType::OCCULT }, // Occult Pickaxe
{ 0x000C47C0, WeaponInfusionType::FIRE }, // Fire Pickaxe
{ 0x000C4824, WeaponInfusionType::CHAOS }, // Chaos Pickaxe
{ 0x000C5828, WeaponInfusionType::STANDARD }, // Reinforced Club
{ 0x000C588C, WeaponInfusionType::CRYSTAL }, // Crystal Reinforced Club
{ 0x000C58F0, WeaponInfusionType::LIGHTNING }, // Lightning Reinforced Club
{ 0x000C5954, WeaponInfusionType::RAW }, // Raw Reinforced Club
{ 0x000C59B8, WeaponInfusionType::MAGIC }, // Magic Reinforced Club
{ 0x000C5A1C, WeaponInfusionType::ENCHANTED }, // Enchanted Reinforced Club
{ 0x000C5A80, WeaponInfusionType::DIVINE }, // Divine Reinforced Club
{ 0x000C5AE4, WeaponInfusionType::OCCULT }, // Occult Reinforced Club
{ 0x000C5B48, WeaponInfusionType::FIRE }, // Fire Reinforced Club
{ 0x000C5BAC, WeaponInfusionType::CHAOS }, // Chaos Reinforced Club
{ 0x000C5C10, WeaponInfusionType::STANDARD }, // Blacksmith Hammer
{ 0x000C5C74, WeaponInfusionType::CRYSTAL }, // Crystal Blacksmith Hammer
{ 0x000C5CD8, WeaponInfusionType::LIGHTNING }, // Lightning Blacksmith Hammer
{ 0x000C5D3C, WeaponInfusionType::RAW }, // Raw Blacksmith Hammer
{ 0x000C5DA0, WeaponInfusionType::MAGIC }, // Magic Blacksmith Hammer
{ 0x000C5E04, WeaponInfusionType::ENCHANTED }, // Enchanted Blacksmith Hammer
{ 0x000C5E68, WeaponInfusionType::DIVINE }, // Divine Blacksmith Hammer
{ 0x000C5ECC, WeaponInfusionType::OCCULT }, // Occult Blacksmith Hammer
{ 0x000C5F30, WeaponInfusionType::FIRE }, // Fire Blacksmith Hammer
{ 0x000C5F94, WeaponInfusionType::CHAOS }, // Chaos Blacksmith Hammer
{ 0x000C5FF8, WeaponInfusionType::STANDARD }, // Blacksmith Giant Hammer
{ 0x000C605C, WeaponInfusionType::CRYSTAL }, // Crystal Blacksmith Giant Hammer
{ 0x000C60C0, WeaponInfusionType::LIGHTNING }, // Lightning Blacksmith Giant Hammer
{ 0x000C6124, WeaponInfusionType::RAW }, // Raw Blacksmith Giant Hammer
{ 0x000C6188, WeaponInfusionType::MAGIC }, // Magic Blacksmith Giant Hammer
{ 0x000C61EC, WeaponInfusionType::ENCHANTED }, // Enchanted Blacksmith Giant Hammer
{ 0x000C6250, WeaponInfusionType::DIVINE }, // Divine Blacksmith Giant Hammer
{ 0x000C62B4, WeaponInfusionType::OCCULT }, // Occult Blacksmith Giant Hammer
{ 0x000C6318, WeaponInfusionType::FIRE }, // Fire Blacksmith Giant Hammer
{ 0x000C637C, WeaponInfusionType::CHAOS }, // Chaos Blacksmith Giant Hammer
{ 0x000C63E0, WeaponInfusionType::STANDARD }, // Hammer of Vamos
{ 0x000C6444, WeaponInfusionType::CRYSTAL }, // Crystal Hammer of Vamos
{ 0x000C64A8, WeaponInfusionType::LIGHTNING }, // Lightning Hammer of Vamos
{ 0x000C650C, WeaponInfusionType::RAW }, // Raw Hammer of Vamos
{ 0x000C6570, WeaponInfusionType::MAGIC }, // Magic Hammer of Vamos
{ 0x000C65D4, WeaponInfusionType::ENCHANTED }, // Enchanted Hammer of Vamos
{ 0x000C6638, WeaponInfusionType::DIVINE }, // Divine Hammer of Vamos
{ 0x000C669C, WeaponInfusionType::OCCULT }, // Occult Hammer of Vamos
{ 0x000C6700, WeaponInfusionType::FIRE }, // Fire Hammer of Vamos
{ 0x000C6764, WeaponInfusionType::CHAOS }, // Chaos Hammer of Vamos
{ 0x000CF850, WeaponInfusionType::STANDARD }, // Great Club
{ 0x000CF8B4, WeaponInfusionType::CRYSTAL }, // Crystal Great Club
{ 0x000CF918, WeaponInfusionType::LIGHTNING }, // Lightning Great Club
{ 0x000CF97C, WeaponInfusionType::RAW }, // Raw Great Club
{ 0x000CF9E0, WeaponInfusionType::MAGIC }, // Magic Great Club
{ 0x000CFA44, WeaponInfusionType::ENCHANTED }, // Enchanted Great Club
{ 0x000CFAA8, WeaponInfusionType::DIVINE }, // Divine Great Club
{ 0x000CFB0C, WeaponInfusionType::OCCULT }, // Occult Great Club
{ 0x000CFB70, WeaponInfusionType::FIRE }, // Fire Great Club
{ 0x000CFBD4, WeaponInfusionType::CHAOS }, // Chaos Great Club
{ 0x000CFC38, WeaponInfusionType::STANDARD }, // Grant
{ 0x000D0020, WeaponInfusionType::STANDARD }, // Demon's Great Hammer
{ 0x000D0084, WeaponInfusionType::CRYSTAL }, // Crystal Demon's Great Hammer
{ 0x000D00E8, WeaponInfusionType::LIGHTNING }, // Lightning Demon's Great Hammer
{ 0x000D014C, WeaponInfusionType::RAW }, // Raw Demon's Great Hammer
{ 0x000D01B0, WeaponInfusionType::MAGIC }, // Magic Demon's Great Hammer
{ 0x000D0214, WeaponInfusionType::ENCHANTED }, // Enchanted Demon's Great Hammer
{ 0x000D0278, WeaponInfusionType::DIVINE }, // Divine Demon's Great Hammer
{ 0x000D02DC, WeaponInfusionType::OCCULT }, // Occult Demon's Great Hammer
{ 0x000D0340, WeaponInfusionType::FIRE }, // Fire Demon's Great Hammer
{ 0x000D03A4, WeaponInfusionType::CHAOS }, // Chaos Demon's Great Hammer
{ 0x000D07F0, WeaponInfusionType::STANDARD }, // Dragon Tooth
{ 0x000D0BD8, WeaponInfusionType::STANDARD }, // Large Club
{ 0x000D0C3C, WeaponInfusionType::CRYSTAL }, // Crystal Large Club
{ 0x000D0CA0, WeaponInfusionType::LIGHTNING }, // Lightning Large Club
{ 0x000D0D04, WeaponInfusionType::RAW }, // Raw Large Club
{ 0x000D0D68, WeaponInfusionType::MAGIC }, // Magic Large Club
{ 0x000D0DCC, WeaponInfusionType::ENCHANTED }, // Enchanted Large Club
{ 0x000D0E30, WeaponInfusionType::DIVINE }, // Divine Large Club
{ 0x000D0E94, WeaponInfusionType::OCCULT }, // Occult Large Club
{ 0x000D0EF8, WeaponInfusionType::FIRE }, // Fire Large Club
{ 0x000D0F5C, WeaponInfusionType::CHAOS }, // Chaos Large Club
{ 0x000DBBA0, WeaponInfusionType::STANDARD }, // Fists
{ 0x000DBF88, WeaponInfusionType::STANDARD }, // Caestus
{ 0x000DBFEC, WeaponInfusionType::CRYSTAL }, // Crystal Caestus
{ 0x000DC050, WeaponInfusionType::LIGHTNING }, // Lightning Caestus
{ 0x000DC0B4, WeaponInfusionType::RAW }, // Raw Caestus
{ 0x000DC118, WeaponInfusionType::MAGIC }, // Magic Caestus
{ 0x000DC17C, WeaponInfusionType::ENCHANTED }, // Enchanted Caestus
{ 0x000DC1E0, WeaponInfusionType::DIVINE }, // Divine Caestus
{ 0x000DC244, WeaponInfusionType::OCCULT }, // Occult Caestus
{ 0x000DC2A8, WeaponInfusionType::FIRE }, // Fire Caestus
{ 0x000DC30C, WeaponInfusionType::CHAOS }, // Chaos Caestus
{ 0x000DC370, WeaponInfusionType::STANDARD }, // Claw
{ 0x000DC3D4, WeaponInfusionType::CRYSTAL }, // Crystal Claw
{ 0x000DC438, WeaponInfusionType::LIGHTNING }, // Lightning Claw
{ 0x000DC49C, WeaponInfusionType::RAW }, // Raw Claw
{ 0x000DC500, WeaponInfusionType::MAGIC }, // Magic Claw
{ 0x000DC564, WeaponInfusionType::ENCHANTED }, // Enchanted Claw
{ 0x000DC5C8, WeaponInfusionType::DIVINE }, // Divine Claw
{ 0x000DC62C, WeaponInfusionType::OCCULT }, // Occult Claw
{ 0x000DC690, WeaponInfusionType::FIRE }, // Fire Claw
{ 0x000DC6F4, WeaponInfusionType::CHAOS }, // Chaos Claw
{ 0x000DCB40, WeaponInfusionType::STANDARD }, // Dark Hand
{ 0x000F4240, WeaponInfusionType::STANDARD }, // Spear
{ 0x000F42A4, WeaponInfusionType::CRYSTAL }, // Crystal Spear
{ 0x000F4308, WeaponInfusionType::LIGHTNING }, // Lightning Spear
{ 0x000F436C, WeaponInfusionType::RAW }, // Raw Spear
{ 0x000F43D0, WeaponInfusionType::MAGIC }, // Magic Spear
{ 0x000F4434, WeaponInfusionType::ENCHANTED }, // Enchanted Spear
{ 0x000F4498, WeaponInfusionType::DIVINE }, // Divine Spear
{ 0x000F44FC, WeaponInfusionType::OCCULT }, // Occult Spear
{ 0x000F4560, WeaponInfusionType::FIRE }, // Fire Spear
{ 0x000F45C4, WeaponInfusionType::CHAOS }, // Chaos Spear
{ 0x000F4628, WeaponInfusionType::STANDARD }, // Winged Spear
{ 0x000F468C, WeaponInfusionType::CRYSTAL }, // Crystal Winged Spear
{ 0x000F46F0, WeaponInfusionType::LIGHTNING }, // Lightning Winged Spear
{ 0x000F4754, WeaponInfusionType::RAW }, // Raw Winged Spear
{ 0x000F47B8, WeaponInfusionType::MAGIC }, // Magic Winged Spear
{ 0x000F481C, WeaponInfusionType::ENCHANTED }, // Enchanted Winged Spear
{ 0x000F4880, WeaponInfusionType::DIVINE }, // Divine Winged Spear
{ 0x000F48E4, WeaponInfusionType::OCCULT }, // Occult Winged Spear
{ 0x000F4948, WeaponInfusionType::FIRE }, // Fire Winged Spear
{ 0x000F49AC, WeaponInfusionType::CHAOS }, // Chaos Winged Spear
{ 0x000F4A10, WeaponInfusionType::STANDARD }, // Partizan
{ 0x000F4A74, WeaponInfusionType::CRYSTAL }, // Crystal Partizan
{ 0x000F4AD8, WeaponInfusionType::LIGHTNING }, // Lightning Partizan
{ 0x000F4B3C, WeaponInfusionType::RAW }, // Raw Partizan
{ 0x000F4BA0, WeaponInfusionType::MAGIC }, // Magic Partizan
{ 0x000F4C04, WeaponInfusionType::ENCHANTED }, // Enchanted Partizan
{ 0x000F4C68, WeaponInfusionType::DIVINE }, // Divine Partizan
{ 0x000F4CCC, WeaponInfusionType::OCCULT }, // Occult Partizan
{ 0x000F4D30, WeaponInfusionType::FIRE }, // Fire Partizan
{ 0x000F4D94, WeaponInfusionType::CHAOS }, // Chaos Partizan
{ 0x000F4DF8, WeaponInfusionType::STANDARD }, // Demon's Spear
{ 0x000F4E5C, WeaponInfusionType::CRYSTAL }, // Crystal Demon's Spear
{ 0x000F4EC0, WeaponInfusionType::LIGHTNING }, // Lightning Demon's Spear
{ 0x000F4F24, WeaponInfusionType::RAW }, // Raw Demon's Spear
{ 0x000F4F88, WeaponInfusionType::MAGIC }, // Magic Demon's Spear
{ 0x000F4FEC, WeaponInfusionType::ENCHANTED }, // Enchanted Demon's Spear
{ 0x000F5050, WeaponInfusionType::DIVINE }, // Divine Demon's Spear
{ 0x000F50B4, WeaponInfusionType::OCCULT }, // Occult Demon's Spear
{ 0x000F5118, WeaponInfusionType::FIRE }, // Fire Demon's Spear
{ 0x000F517C, WeaponInfusionType::CHAOS }, // Chaos Demon's Spear
{ 0x000F51E0, WeaponInfusionType::STANDARD }, // Channeler's Trident
{ 0x000F5244, WeaponInfusionType::CRYSTAL }, // Crystal Channeler's Trident
{ 0x000F52A8, WeaponInfusionType::LIGHTNING }, // Lightning Channeler's Trident
{ 0x000F530C, WeaponInfusionType::RAW }, // Raw Channeler's Trident
{ 0x000F5370, WeaponInfusionType::MAGIC }, // Magic Channeler's Trident
{ 0x000F53D4, WeaponInfusionType::ENCHANTED }, // Enchanted Channeler's Trident
{ 0x000F5438, WeaponInfusionType::DIVINE }, // Divine Channeler's Trident
{ 0x000F549C, WeaponInfusionType::OCCULT }, // Occult Channeler's Trident
{ 0x000F5500, WeaponInfusionType::FIRE }, // Fire Channeler's Trident
{ 0x000F5564, WeaponInfusionType::CHAOS }, // Chaos Channeler's Trident
{ 0x00100590, WeaponInfusionType::STANDARD }, // Pike
{ 0x001005F4, WeaponInfusionType::CRYSTAL }, // Crystal Pike
{ 0x00100658, WeaponInfusionType::LIGHTNING }, // Lightning Pike
{ 0x001006BC, WeaponInfusionType::RAW }, // Raw Pike
{ 0x00100720, WeaponInfusionType::MAGIC }, // Magic Pike
{ 0x00100784, WeaponInfusionType::ENCHANTED }, // Enchanted Pike
{ 0x001007E8, WeaponInfusionType::DIVINE }, // Divine Pike
{ 0x0010084C, WeaponInfusionType::OCCULT }, // Occult Pike
{ 0x001008B0, WeaponInfusionType::FIRE }, // Fire Pike
{ 0x00100914, WeaponInfusionType::CHAOS }, // Chaos Pike
{ 0x0010C8E0, WeaponInfusionType::STANDARD }, // Halberd
{ 0x0010C944, WeaponInfusionType::CRYSTAL }, // Crystal Halberd
{ 0x0010C9A8, WeaponInfusionType::LIGHTNING }, // Lightning Halberd
{ 0x0010CA0C, WeaponInfusionType::RAW }, // Raw Halberd
{ 0x0010CA70, WeaponInfusionType::MAGIC }, // Magic Halberd
{ 0x0010CAD4, WeaponInfusionType::ENCHANTED }, // Enchanted Halberd
{ 0x0010CB38, WeaponInfusionType::DIVINE }, // Divine Halberd
{ 0x0010CB9C, WeaponInfusionType::OCCULT }, // Occult Halberd
{ 0x0010CC00, WeaponInfusionType::FIRE }, // Fire Halberd
{ 0x0010CC64, WeaponInfusionType::CHAOS }, // Chaos Halberd
{ 0x0010CCC8, WeaponInfusionType::STANDARD }, // Giant's Halberd
{ 0x0010CD2C, WeaponInfusionType::CRYSTAL }, // Crystal Giant's Halberd
{ 0x0010CD90, WeaponInfusionType::LIGHTNING }, // Lightning Giant's Halberd
{ 0x0010CDF4, WeaponInfusionType::RAW }, // Raw Giant's Halberd
{ 0x0010CE58, WeaponInfusionType::MAGIC }, // Magic Giant's Halberd
{ 0x0010CEBC, WeaponInfusionType::ENCHANTED }, // Enchanted Giant's Halberd
{ 0x0010CF20, WeaponInfusionType::DIVINE }, // Divine Giant's Halberd
{ 0x0010CF84, WeaponInfusionType::OCCULT }, // Occult Giant's Halberd
{ 0x0010CFE8, WeaponInfusionType::FIRE }, // Fire Giant's Halberd
{ 0x0010D04C, WeaponInfusionType::CHAOS }, // Chaos Giant's Halberd
{ 0x0010D498, WeaponInfusionType::STANDARD }, // Gargoyle's Halberd
{ 0x0010D4FC, WeaponInfusionType::CRYSTAL }, // Crystal Gargoyle's Halberd
{ 0x0010D560, WeaponInfusionType::LIGHTNING }, // Lightning Gargoyle's Halberd
{ 0x0010D5C4, WeaponInfusionType::RAW }, // Raw Gargoyle's Halberd
{ 0x0010D628, WeaponInfusionType::MAGIC }, // Magic Gargoyle's Halberd
{ 0x0010D68C, WeaponInfusionType::ENCHANTED }, // Enchanted Gargoyle's Halberd
{ 0x0010D6F0, WeaponInfusionType::DIVINE }, // Divine Gargoyle's Halberd
{ 0x0010D754, WeaponInfusionType::OCCULT }, // Occult Gargoyle's Halberd
{ 0x0010D7B8, WeaponInfusionType::FIRE }, // Fire Gargoyle's Halberd
{ 0x0010D81C, WeaponInfusionType::CHAOS }, // Chaos Gargoyle's Halberd
{ 0x0010E050, WeaponInfusionType::STANDARD }, // Lucerne
{ 0x0010E0B4, WeaponInfusionType::CRYSTAL }, // Crystal Lucerne
{ 0x0010E118, WeaponInfusionType::LIGHTNING }, // Lightning Lucerne
{ 0x0010E17C, WeaponInfusionType::RAW }, // Raw Lucerne
{ 0x0010E1E0, WeaponInfusionType::MAGIC }, // Magic Lucerne
{ 0x0010E244, WeaponInfusionType::ENCHANTED }, // Enchanted Lucerne
{ 0x0010E2A8, WeaponInfusionType::DIVINE }, // Divine Lucerne
{ 0x0010E30C, WeaponInfusionType::OCCULT }, // Occult Lucerne
{ 0x0010E370, WeaponInfusionType::FIRE }, // Fire Lucerne
{ 0x0010E3D4, WeaponInfusionType::CHAOS }, // Chaos Lucerne
{ 0x0010E438, WeaponInfusionType::STANDARD }, // Scythe
{ 0x0010E49C, WeaponInfusionType::CRYSTAL }, // Crystal Scythe
{ 0x0010E500, WeaponInfusionType::LIGHTNING }, // Lightning Scythe
{ 0x0010E564, WeaponInfusionType::RAW }, // Raw Scythe
{ 0x0010E5C8, WeaponInfusionType::MAGIC }, // Magic Scythe
{ 0x0010E62C, WeaponInfusionType::ENCHANTED }, // Enchanted Scythe
{ 0x0010E690, WeaponInfusionType::DIVINE }, // Divine Scythe
{ 0x0010E6F4, WeaponInfusionType::OCCULT }, // Occult Scythe
{ 0x0010E758, WeaponInfusionType::FIRE }, // Fire Scythe
{ 0x0010E7BC, WeaponInfusionType::CHAOS }, // Chaos Scythe
{ 0x00118C30, WeaponInfusionType::STANDARD }, // Great Scythe
{ 0x00118C94, WeaponInfusionType::CRYSTAL }, // Crystal Great Scythe
{ 0x00118CF8, WeaponInfusionType::LIGHTNING }, // Lightning Great Scythe
{ 0x00118D5C, WeaponInfusionType::RAW }, // Raw Great Scythe
{ 0x00118DC0, WeaponInfusionType::MAGIC }, // Magic Great Scythe
{ 0x00118E24, WeaponInfusionType::ENCHANTED }, // Enchanted Great Scythe
{ 0x00118E88, WeaponInfusionType::DIVINE }, // Divine Great Scythe
{ 0x00118EEC, WeaponInfusionType::OCCULT }, // Occult Great Scythe
{ 0x00118F50, WeaponInfusionType::FIRE }, // Fire Great Scythe
{ 0x00118FB4, WeaponInfusionType::CHAOS }, // Chaos Great Scythe
{ 0x00124F80, WeaponInfusionType::STANDARD }, // Short Bow
{ 0x00124FE4, WeaponInfusionType::CRYSTAL }, // Crystal Short Bow
{ 0x00125048, WeaponInfusionType::LIGHTNING }, // Lightning Short Bow
{ 0x001250AC, WeaponInfusionType::RAW }, // Raw Short Bow
{ 0x00125110, WeaponInfusionType::MAGIC }, // Magic Short Bow
{ 0x00125174, WeaponInfusionType::ENCHANTED }, // Enchanted Short Bow
{ 0x001251D8, WeaponInfusionType::DIVINE }, // Divine Short Bow
{ 0x0012523C, WeaponInfusionType::OCCULT }, // Occult Short Bow
{ 0x001252A0, WeaponInfusionType::FIRE }, // Fire Short Bow
{ 0x00125304, WeaponInfusionType::CHAOS }, // Chaos Short Bow
{ 0x00125368, WeaponInfusionType::STANDARD }, // Longbow
{ 0x001253CC, WeaponInfusionType::CRYSTAL }, // Crystal Longbow
{ 0x00125430, WeaponInfusionType::LIGHTNING }, // Lightning Longbow
{ 0x00125494, WeaponInfusionType::RAW }, // Raw Longbow
{ 0x001254F8, WeaponInfusionType::MAGIC }, // Magic Longbow
{ 0x0012555C, WeaponInfusionType::ENCHANTED }, // Enchanted Longbow
{ 0x001255C0, WeaponInfusionType::DIVINE }, // Divine Longbow
{ 0x00125624, WeaponInfusionType::OCCULT }, // Occult Longbow
{ 0x00125688, WeaponInfusionType::FIRE }, // Fire Longbow
{ 0x001256EC, WeaponInfusionType::CHAOS }, // Chaos Longbow
{ 0x00125750, WeaponInfusionType::STANDARD }, // Black Bow of Pharis
{ 0x001257B4, WeaponInfusionType::CRYSTAL }, // Crystal Black Bow of Pharis
{ 0x00125818, WeaponInfusionType::LIGHTNING }, // Lightning Black Bow of Pharis
{ 0x0012587C, WeaponInfusionType::RAW }, // Raw Black Bow of Pharis
{ 0x001258E0, WeaponInfusionType::MAGIC }, // Magic Black Bow of Pharis
{ 0x00125944, WeaponInfusionType::ENCHANTED }, // Enchanted Black Bow of Pharis
{ 0x001259A8, WeaponInfusionType::DIVINE }, // Divine Black Bow of Pharis
{ 0x00125A0C, WeaponInfusionType::OCCULT }, // Occult Black Bow of Pharis
{ 0x00125A70, WeaponInfusionType::FIRE }, // Fire Black Bow of Pharis
{ 0x00125AD4, WeaponInfusionType::CHAOS }, // Chaos Black Bow of Pharis
{ 0x00125B38, WeaponInfusionType::STANDARD }, // Dragonslayer Greatbow
{ 0x00125F20, WeaponInfusionType::STANDARD }, // Composite Bow
{ 0x00125F84, WeaponInfusionType::CRYSTAL }, // Crystal Composite Bow
{ 0x00125FE8, WeaponInfusionType::LIGHTNING }, // Lightning Composite Bow
{ 0x0012604C, WeaponInfusionType::RAW }, // Raw Composite Bow
{ 0x001260B0, WeaponInfusionType::MAGIC }, // Magic Composite Bow
{ 0x00126114, WeaponInfusionType::ENCHANTED }, // Enchanted Composite Bow
{ 0x00126178, WeaponInfusionType::DIVINE }, // Divine Composite Bow
{ 0x001261DC, WeaponInfusionType::OCCULT }, // Occult Composite Bow
{ 0x00126240, WeaponInfusionType::FIRE }, // Fire Composite Bow
{ 0x001262A4, WeaponInfusionType::CHAOS }, // Chaos Composite Bow
{ 0x001312D0, WeaponInfusionType::STANDARD }, // Light Crossbow
{ 0x00131334, WeaponInfusionType::CRYSTAL }, // Crystal Light Crossbow
{ 0x00131398, WeaponInfusionType::LIGHTNING }, // Lightning Light Crossbow
{ 0x00131460, WeaponInfusionType::MAGIC }, // Magic Light Crossbow
{ 0x00131528, WeaponInfusionType::DIVINE }, // Divine Light Crossbow
{ 0x001315F0, WeaponInfusionType::FIRE }, // Fire Light Crossbow
{ 0x001316B8, WeaponInfusionType::STANDARD }, // Heavy Crossbow
{ 0x0013171C, WeaponInfusionType::CRYSTAL }, // Crystal Heavy Crossbow
{ 0x00131780, WeaponInfusionType::LIGHTNING }, // Lightning Heavy Crossbow
{ 0x00131848, WeaponInfusionType::MAGIC }, // Magic Heavy Crossbow
{ 0x00131910, WeaponInfusionType::DIVINE }, // Divine Heavy Crossbow
{ 0x001319D8, WeaponInfusionType::FIRE }, // Fire Heavy Crossbow
{ 0x00131AA0, WeaponInfusionType::STANDARD }, // Avelyn
{ 0x00131B04, WeaponInfusionType::CRYSTAL }, // Crystal Avelyn
{ 0x00131B68, WeaponInfusionType::LIGHTNING }, // Lightning Avelyn
{ 0x00131C30, WeaponInfusionType::MAGIC }, // Magic Avelyn
{ 0x00131CF8, WeaponInfusionType::DIVINE }, // Divine Avelyn
{ 0x00131DC0, WeaponInfusionType::FIRE }, // Fire Avelyn
{ 0x00131E88, WeaponInfusionType::STANDARD }, // Sniper Crossbow
{ 0x00131EEC, WeaponInfusionType::CRYSTAL }, // Crystal Sniper Crossbow
{ 0x00131F50, WeaponInfusionType::LIGHTNING }, // Lightning Sniper Crossbow
{ 0x00132018, WeaponInfusionType::MAGIC }, // Magic Sniper Crossbow
{ 0x001320E0, WeaponInfusionType::DIVINE }, // Divine Sniper Crossbow
{ 0x001321A8, WeaponInfusionType::FIRE }, // Fire Sniper Crossbow
{ 0x00144B50, WeaponInfusionType::STANDARD }, // Pyromancy Flame
{ 0x00145320, WeaponInfusionType::STANDARD }, // Pyromancy Flame
{ 0x00155CC0, WeaponInfusionType::STANDARD }, // East-West Shield
{ 0x00155D24, WeaponInfusionType::CRYSTAL }, // Crystal East-West Shield
{ 0x00155D88, WeaponInfusionType::LIGHTNING }, // Lightning East-West Shield
{ 0x00155E50, WeaponInfusionType::MAGIC }, // Magic East-West Shield
{ 0x00155F18, WeaponInfusionType::DIVINE }, // Divine East-West Shield
{ 0x00155FE0, WeaponInfusionType::FIRE }, // Fire East-West Shield
{ 0x001560A8, WeaponInfusionType::STANDARD }, // Wooden Shield
{ 0x0015610C, WeaponInfusionType::CRYSTAL }, // Crystal Wooden Shield
{ 0x00156170, WeaponInfusionType::LIGHTNING }, // Lightning Wooden Shield
{ 0x00156238, WeaponInfusionType::MAGIC }, // Magic Wooden Shield
{ 0x00156300, WeaponInfusionType::DIVINE }, // Divine Wooden Shield
{ 0x001563C8, WeaponInfusionType::FIRE }, // Fire Wooden Shield
{ 0x00156490, WeaponInfusionType::STANDARD }, // Large Leather Shield
{ 0x001564F4, WeaponInfusionType::CRYSTAL }, // Crystal Large Leather Shield
{ 0x00156558, WeaponInfusionType::LIGHTNING }, // Lightning Large Leather Shield
{ 0x00156620, WeaponInfusionType::MAGIC }, // Magic Large Leather Shield
{ 0x001566E8, WeaponInfusionType::DIVINE }, // Divine Large Leather Shield
{ 0x001567B0, WeaponInfusionType::FIRE }, // Fire Large Leather Shield
{ 0x00156878, WeaponInfusionType::STANDARD }, // Small Leather Shield
{ 0x001568DC, WeaponInfusionType::CRYSTAL }, // Crystal Small Leather Shield
{ 0x00156940, WeaponInfusionType::LIGHTNING }, // Lightning Small Leather Shield
{ 0x00156A08, WeaponInfusionType::MAGIC }, // Magic Small Leather Shield
{ 0x00156AD0, WeaponInfusionType::DIVINE }, // Divine Small Leather Shield
{ 0x00156B98, WeaponInfusionType::FIRE }, // Fire Small Leather Shield
{ 0x00156C60, WeaponInfusionType::STANDARD }, // Target Shield
{ 0x00156CC4, WeaponInfusionType::CRYSTAL }, // Crystal Target Shield
{ 0x00156D28, WeaponInfusionType::LIGHTNING }, // Lightning Target Shield
{ 0x00156DF0, WeaponInfusionType::MAGIC }, // Magic Target Shield
{ 0x00156EB8, WeaponInfusionType::DIVINE }, // Divine Target Shield
{ 0x00156F80, WeaponInfusionType::FIRE }, // Fire Target Shield
{ 0x00157048, WeaponInfusionType::STANDARD }, // Buckler
{ 0x001570AC, WeaponInfusionType::CRYSTAL }, // Crystal Buckler
{ 0x00157110, WeaponInfusionType::LIGHTNING }, // Lightning Buckler
{ 0x001571D8, WeaponInfusionType::MAGIC }, // Magic Buckler
{ 0x001572A0, WeaponInfusionType::DIVINE }, // Divine Buckler
{ 0x00157368, WeaponInfusionType::FIRE }, // Fire Buckler
{ 0x00157430, WeaponInfusionType::STANDARD }, // Cracked Round Shield
{ 0x00157494, WeaponInfusionType::CRYSTAL }, // Crystal Cracked Round Shield
{ 0x001574F8, WeaponInfusionType::LIGHTNING }, // Lightning Cracked Round Shield
{ 0x001575C0, WeaponInfusionType::MAGIC }, // Magic Cracked Round Shield
{ 0x00157688, WeaponInfusionType::DIVINE }, // Divine Cracked Round Shield
{ 0x00157750, WeaponInfusionType::FIRE }, // Fire Cracked Round Shield
{ 0x00157C00, WeaponInfusionType::STANDARD }, // Leather Shield
{ 0x00157C64, WeaponInfusionType::CRYSTAL }, // Crystal Leather Shield
{ 0x00157CC8, WeaponInfusionType::LIGHTNING }, // Lightning Leather Shield
{ 0x00157D90, WeaponInfusionType::MAGIC }, // Magic Leather Shield
{ 0x00157E58, WeaponInfusionType::DIVINE }, // Divine Leather Shield
{ 0x00157F20, WeaponInfusionType::FIRE }, // Fire Leather Shield
{ 0x00157FE8, WeaponInfusionType::STANDARD }, // Plank Shield
{ 0x0015804C, WeaponInfusionType::CRYSTAL }, // Crystal Plank Shield
{ 0x001580B0, WeaponInfusionType::LIGHTNING }, // Lightning Plank Shield
{ 0x00158178, WeaponInfusionType::MAGIC }, // Magic Plank Shield
{ 0x00158240, WeaponInfusionType::DIVINE }, // Divine Plank Shield
{ 0x00158308, WeaponInfusionType::FIRE }, // Fire Plank Shield
{ 0x001583D0, WeaponInfusionType::STANDARD }, // Caduceus Round Shield
{ 0x00158434, WeaponInfusionType::CRYSTAL }, // Crystal Caduceus Round Shield
{ 0x00158498, WeaponInfusionType::LIGHTNING }, // Lightning Caduceus Round Shield
{ 0x00158560, WeaponInfusionType::MAGIC }, // Magic Caduceus Round Shield
{ 0x00158628, WeaponInfusionType::DIVINE }, // Divine Caduceus Round Shield
{ 0x001586F0, WeaponInfusionType::FIRE }, // Fire Caduceus Round Shield
{ 0x00162010, WeaponInfusionType::STANDARD }, // Heater Shield
{ 0x00162074, WeaponInfusionType::CRYSTAL }, // Crystal Heater Shield
{ 0x001620D8, WeaponInfusionType::LIGHTNING }, // Lightning Heater Shield
{ 0x001621A0, WeaponInfusionType::MAGIC }, // Magic Heater Shield
{ 0x00162268, WeaponInfusionType::DIVINE }, // Divine Heater Shield
{ 0x00162330, WeaponInfusionType::FIRE }, // Fire Heater Shield
{ 0x001623F8, WeaponInfusionType::STANDARD }, // Knight Shield
{ 0x0016245C, WeaponInfusionType::CRYSTAL }, // Crystal Knight Shield
{ 0x001624C0, WeaponInfusionType::LIGHTNING }, // Lightning Knight Shield
{ 0x00162588, WeaponInfusionType::MAGIC }, // Magic Knight Shield
{ 0x00162650, WeaponInfusionType::DIVINE }, // Divine Knight Shield
{ 0x00162718, WeaponInfusionType::FIRE }, // Fire Knight Shield
{ 0x001627E0, WeaponInfusionType::STANDARD }, // Tower Kite Shield
{ 0x00162844, WeaponInfusionType::CRYSTAL }, // Crystal Tower Kite Shield
{ 0x001628A8, WeaponInfusionType::LIGHTNING }, // Lightning Tower Kite Shield
{ 0x00162970, WeaponInfusionType::MAGIC }, // Magic Tower Kite Shield
{ 0x00162A38, WeaponInfusionType::DIVINE }, // Divine Tower Kite Shield
{ 0x00162B00, WeaponInfusionType::FIRE }, // Fire Tower Kite Shield
{ 0x00162BC8, WeaponInfusionType::STANDARD }, // Grass Crest Shield
{ 0x00162C2C, WeaponInfusionType::CRYSTAL }, // Crystal Grass Crest Shield
{ 0x00162C90, WeaponInfusionType::LIGHTNING }, // Lightning Grass Crest Shield
{ 0x00162D58, WeaponInfusionType::MAGIC }, // Magic Grass Crest Shield
{ 0x00162E20, WeaponInfusionType::DIVINE }, // Divine Grass Crest Shield
{ 0x00162EE8, WeaponInfusionType::FIRE }, // Fire Grass Crest Shield
{ 0x00162FB0, WeaponInfusionType::STANDARD }, // Hollow Soldier Shield
{ 0x00163014, WeaponInfusionType::CRYSTAL }, // Crystal Hollow Soldier Shield
{ 0x00163078, WeaponInfusionType::LIGHTNING }, // Lightning Hollow Soldier Shield
{ 0x00163140, WeaponInfusionType::MAGIC }, // Magic Hollow Soldier Shield
{ 0x00163208, WeaponInfusionType::DIVINE }, // Divine Hollow Soldier Shield
{ 0x001632D0, WeaponInfusionType::FIRE }, // Fire Hollow Soldier Shield
{ 0x00163398, WeaponInfusionType::STANDARD }, // Balder Shield
{ 0x001633FC, WeaponInfusionType::CRYSTAL }, // Crystal Balder Shield
{ 0x00163460, WeaponInfusionType::LIGHTNING }, // Lightning Balder Shield
{ 0x00163528, WeaponInfusionType::MAGIC }, // Magic Balder Shield
{ 0x001635F0, WeaponInfusionType::DIVINE }, // Divine Balder Shield
{ 0x001636B8, WeaponInfusionType::FIRE }, // Fire Balder Shield
{ 0x00163780, WeaponInfusionType::STANDARD }, // Crest Shield
{ 0x00163B68, WeaponInfusionType::STANDARD }, // Dragon Crest Shield
{ 0x00164720, WeaponInfusionType::STANDARD }, // Warrior's Round Shield
{ 0x00164784, WeaponInfusionType::CRYSTAL }, // Crystal Warrior's Round Shield
{ 0x001647E8, WeaponInfusionType::LIGHTNING }, // Lightning Warrior's Round Shield
{ 0x001648B0, WeaponInfusionType::MAGIC }, // Magic Warrior's Round Shield
{ 0x00164978, WeaponInfusionType::DIVINE }, // Divine Warrior's Round Shield
{ 0x00164A40, WeaponInfusionType::FIRE }, // Fire Warrior's Round Shield
{ 0x00164B08, WeaponInfusionType::STANDARD }, // Iron Round Shield
{ 0x00164B6C, WeaponInfusionType::CRYSTAL }, // Crystal Iron Round Shield
{ 0x00164BD0, WeaponInfusionType::LIGHTNING }, // Lightning Iron Round Shield
{ 0x00164C98, WeaponInfusionType::MAGIC }, // Magic Iron Round Shield
{ 0x00164D60, WeaponInfusionType::DIVINE }, // Divine Iron Round Shield
{ 0x00164E28, WeaponInfusionType::FIRE }, // Fire Iron Round Shield
{ 0x00164EF0, WeaponInfusionType::STANDARD }, // Spider Shield
{ 0x00164F54, WeaponInfusionType::CRYSTAL }, // Crystal Spider Shield
{ 0x00164FB8, WeaponInfusionType::LIGHTNING }, // Lightning Spider Shield
{ 0x00165080, WeaponInfusionType::MAGIC }, // Magic Spider Shield
{ 0x00165148, WeaponInfusionType::DIVINE }, // Divine Spider Shield
{ 0x00165210, WeaponInfusionType::FIRE }, // Fire Spider Shield
{ 0x00166E30, WeaponInfusionType::STANDARD }, // Spiked Shield
{ 0x00166E94, WeaponInfusionType::CRYSTAL }, // Crystal Spiked Shield
{ 0x00166EF8, WeaponInfusionType::LIGHTNING }, // Lightning Spiked Shield
{ 0x00166FC0, WeaponInfusionType::MAGIC }, // Magic Spiked Shield
{ 0x00167088, WeaponInfusionType::DIVINE }, // Divine Spiked Shield
{ 0x00167150, WeaponInfusionType::FIRE }, // Fire Spiked Shield
{ 0x00167218, WeaponInfusionType::CRYSTAL }, // Crystal Shield
{ 0x00167600, WeaponInfusionType::STANDARD }, // Sunlight Shield
{ 0x00167664, WeaponInfusionType::CRYSTAL }, // Crystal Sunlight Shield
{ 0x001676C8, WeaponInfusionType::LIGHTNING }, // Lightning Sunlight Shield
{ 0x00167790, WeaponInfusionType::MAGIC }, // Magic Sunlight Shield
{ 0x00167858, WeaponInfusionType::DIVINE }, // Divine Sunlight Shield
{ 0x00167920, WeaponInfusionType::FIRE }, // Fire Sunlight Shield
{ 0x001679E8, WeaponInfusionType::STANDARD }, // Silver Knight Shield
{ 0x00167DD0, WeaponInfusionType::STANDARD }, // Black Knight Shield
{ 0x001681B8, WeaponInfusionType::STANDARD }, // Pierce Shield
{ 0x0016821C, WeaponInfusionType::CRYSTAL }, // Crystal Pierce Shield
{ 0x00168280, WeaponInfusionType::LIGHTNING }, // Lightning Pierce Shield
{ 0x00168348, WeaponInfusionType::MAGIC }, // Magic Pierce Shield
{ 0x00168410, WeaponInfusionType::DIVINE }, // Divine Pierce Shield
{ 0x001684D8, WeaponInfusionType::FIRE }, // Fire Pierce Shield
{ 0x001685A0, WeaponInfusionType::STANDARD }, // Red and White Round Shield
{ 0x00168604, WeaponInfusionType::CRYSTAL }, // Crystal R&amp;W Round Shield
{ 0x00168668, WeaponInfusionType::LIGHTNING }, // Lightning R&amp;W Round Shield
{ 0x00168730, WeaponInfusionType::MAGIC }, // Magic R&amp;W Round Shield
{ 0x001687F8, WeaponInfusionType::DIVINE }, // Divine R&amp;W Round Shield
{ 0x001688C0, WeaponInfusionType::FIRE }, // Fire R&amp;W Round Shield
{ 0x00168988, WeaponInfusionType::STANDARD }, // Caduceus Kite Shield
{ 0x001689EC, WeaponInfusionType::CRYSTAL }, // Crystal Caduceus Kite Shield
{ 0x00168A50, WeaponInfusionType::LIGHTNING }, // Lightning Caduceus Kite Shield
{ 0x00168B18, WeaponInfusionType::MAGIC }, // Magic Caduceus Kite Shield
{ 0x00168BE0, WeaponInfusionType::DIVINE }, // Divine Caduceus Kite Shield
{ 0x00168CA8, WeaponInfusionType::FIRE }, // Fire Caduceus Kite Shield
{ 0x00168D70, WeaponInfusionType::STANDARD }, // Gargoyle's Shield
{ 0x00168DD4, WeaponInfusionType::CRYSTAL }, // Crystal Gargoyle's Shield
{ 0x00168E38, WeaponInfusionType::LIGHTNING }, // Lightning Gargoyle's Shield
{ 0x00168F00, WeaponInfusionType::MAGIC }, // Magic Gargoyle's Shield
{ 0x00168FC8, WeaponInfusionType::DIVINE }, // Divine Gargoyle's Shield
{ 0x00169090, WeaponInfusionType::FIRE }, // Fire Gargoyle's Shield
{ 0x0016E360, WeaponInfusionType::STANDARD }, // Eagle Shield
{ 0x0016E3C4, WeaponInfusionType::CRYSTAL }, // Crystal Eagle Shield
{ 0x0016E428, WeaponInfusionType::LIGHTNING }, // Lightning Eagle Shield
{ 0x0016E4F0, WeaponInfusionType::MAGIC }, // Magic Eagle Shield
{ 0x0016E5B8, WeaponInfusionType::DIVINE }, // Divine Eagle Shield
{ 0x0016E680, WeaponInfusionType::FIRE }, // Fire Eagle Shield
{ 0x0016E748, WeaponInfusionType::STANDARD }, // Tower Shield
{ 0x0016E7AC, WeaponInfusionType::CRYSTAL }, // Crystal Tower Shield
{ 0x0016E810, WeaponInfusionType::LIGHTNING }, // Lightning Tower Shield
{ 0x0016E8D8, WeaponInfusionType::MAGIC }, // Magic Tower Shield
{ 0x0016E9A0, WeaponInfusionType::DIVINE }, // Divine Tower Shield
{ 0x0016EA68, WeaponInfusionType::FIRE }, // Fire Tower Shield
{ 0x0016EB30, WeaponInfusionType::STANDARD }, // Giant Shield
{ 0x0016EB94, WeaponInfusionType::CRYSTAL }, // Crystal Giant Shield
{ 0x0016EBF8, WeaponInfusionType::LIGHTNING }, // Lightning Giant Shield
{ 0x0016ECC0, WeaponInfusionType::MAGIC }, // Magic Giant Shield
{ 0x0016ED88, WeaponInfusionType::DIVINE }, // Divine Giant Shield
{ 0x0016EE50, WeaponInfusionType::FIRE }, // Fire Giant Shield
{ 0x0016EF18, WeaponInfusionType::STANDARD }, // Stone Greatshield
{ 0x0016F6E8, WeaponInfusionType::STANDARD }, // Havel's Greatshield
{ 0x0016FAD0, WeaponInfusionType::STANDARD }, // Bonewheel Shield
{ 0x0016FB34, WeaponInfusionType::CRYSTAL }, // Crystal Bonewheel Shield
{ 0x0016FB98, WeaponInfusionType::LIGHTNING }, // Lightning Bonewheel Shield
{ 0x0016FC60, WeaponInfusionType::MAGIC }, // Magic Bonewheel Shield
{ 0x0016FD28, WeaponInfusionType::DIVINE }, // Divine Bonewheel Shield
{ 0x0016FDF0, WeaponInfusionType::FIRE }, // Fire Bonewheel Shield
{ 0x00186A00, WeaponInfusionType::STANDARD }, // Whip
{ 0x00186A64, WeaponInfusionType::CRYSTAL }, // Crystal Whip
{ 0x00186AC8, WeaponInfusionType::LIGHTNING }, // Lightning Whip
{ 0x00186B2C, WeaponInfusionType::RAW }, // Raw Whip
{ 0x00186B90, WeaponInfusionType::MAGIC }, // Magic Whip
{ 0x00186BF4, WeaponInfusionType::ENCHANTED }, // Enchanted Whip
{ 0x00186C58, WeaponInfusionType::DIVINE }, // Divine Whip
{ 0x00186CBC, WeaponInfusionType::OCCULT }, // Occult Whip
{ 0x00186D20, WeaponInfusionType::FIRE }, // Fire Whip
{ 0x00186D84, WeaponInfusionType::CHAOS }, // Chaos Whip
{ 0x00186DE8, WeaponInfusionType::STANDARD }, // Notched Whip
{ 0x00186E4C, WeaponInfusionType::CRYSTAL }, // Crystal Notched Whip
{ 0x00186EB0, WeaponInfusionType::LIGHTNING }, // Lightning Notched Whip
{ 0x00186F14, WeaponInfusionType::RAW }, // Raw Notched Whip
{ 0x00186F78, WeaponInfusionType::MAGIC }, // Magic Notched Whip
{ 0x00186FDC, WeaponInfusionType::ENCHANTED }, // Enchanted Notched Whip
{ 0x00187040, WeaponInfusionType::DIVINE }, // Divine Notched Whip
{ 0x001870A4, WeaponInfusionType::OCCULT }, // Occult Notched Whip
{ 0x00187108, WeaponInfusionType::FIRE }, // Fire Notched Whip
{ 0x0018716C, WeaponInfusionType::CHAOS }, // Chaos Notched Whip
{ 0x00895440, WeaponInfusionType::STANDARD }, // Effigy Shield
{ 0x008954A4, WeaponInfusionType::CRYSTAL }, // Crystal Effigy Shield
{ 0x00895508, WeaponInfusionType::LIGHTNING }, // Lightning Effigy Shield
{ 0x008955D0, WeaponInfusionType::MAGIC }, // Magic Effigy Shield
{ 0x00895698, WeaponInfusionType::DIVINE }, // Divine Effigy Shield
{ 0x00895760, WeaponInfusionType::FIRE }, // Fire Effigy Shield
{ 0x00895828, WeaponInfusionType::STANDARD }, // Sanctus
{ 0x0089588C, WeaponInfusionType::CRYSTAL }, // Crystal Sanctus
{ 0x008958F0, WeaponInfusionType::LIGHTNING }, // Lightning Sanctus
{ 0x008959B8, WeaponInfusionType::MAGIC }, // Magic Sanctus
{ 0x00895A80, WeaponInfusionType::DIVINE }, // Divine Sanctus
{ 0x00895B48, WeaponInfusionType::FIRE }, // Fire Sanctus
{ 0x00895C10, WeaponInfusionType::STANDARD }, // Bloodshield
{ 0x00895C74, WeaponInfusionType::CRYSTAL }, // Crystal Bloodshield
{ 0x00895CD8, WeaponInfusionType::LIGHTNING }, // Lightning Bloodshield
{ 0x00895DA0, WeaponInfusionType::MAGIC }, // Magic Bloodshield
{ 0x00895E68, WeaponInfusionType::DIVINE }, // Divine Bloodshield
{ 0x00895F30, WeaponInfusionType::FIRE }, // Fire Bloodshield
{ 0x00895FF8, WeaponInfusionType::STANDARD }, // Black Iron Greatshield
{ 0x0089605C, WeaponInfusionType::CRYSTAL }, // Crystal Black Iron Greatshield
{ 0x008960C0, WeaponInfusionType::LIGHTNING }, // Lightning Black Iron Greatshield
{ 0x00896188, WeaponInfusionType::MAGIC }, // Magic Black Iron Greatshield
{ 0x00896250, WeaponInfusionType::DIVINE }, // Divine Black Iron Greatshield
{ 0x00896318, WeaponInfusionType::FIRE }, // Fire Black Iron Greatshield
{ 0x000DBBA0, WeaponInfusionType::NO_UPGRADE }, // Nothing
{ 0x0013D620, WeaponInfusionType::NO_UPGRADE }, // Sorcerer's Catalyst
{ 0x0013DA08, WeaponInfusionType::NO_UPGRADE }, // Beatrice's Catalyst
{ 0x0013DDF0, WeaponInfusionType::NO_UPGRADE }, // Tin Banishment Catalyst
{ 0x0013E1D8, WeaponInfusionType::NO_UPGRADE }, // Logan's Catalyst
{ 0x0013E5C0, WeaponInfusionType::NO_UPGRADE }, // Tin Darkmoon Catalyst
{ 0x0013E624, WeaponInfusionType::NO_UPGRADE }, // Tin Darkmoon Catalyst
{ 0x0013E688, WeaponInfusionType::NO_UPGRADE }, // Tin Darkmoon Catalyst
{ 0x0013E6EC, WeaponInfusionType::NO_UPGRADE }, // Tin Darkmoon Catalyst
{ 0x0013E750, WeaponInfusionType::NO_UPGRADE }, // Tin Darkmoon Catalyst
{ 0x0013E9A8, WeaponInfusionType::NO_UPGRADE }, // Oolacile Ivory Catalyst
{ 0x0013ED90, WeaponInfusionType::NO_UPGRADE }, // Tin Crystallization Catalyst
{ 0x0013F178, WeaponInfusionType::NO_UPGRADE }, // Demon's Catalyst
{ 0x0013F560, WeaponInfusionType::NO_UPGRADE }, // Izalith Catalyst
{ 0x0014C080, WeaponInfusionType::NO_UPGRADE }, // Talisman
{ 0x0014C468, WeaponInfusionType::NO_UPGRADE }, // Canvas Talisman
{ 0x0014C850, WeaponInfusionType::NO_UPGRADE }, // Thorolund Talisman
{ 0x0014CC38, WeaponInfusionType::NO_UPGRADE }, // Ivory Talisman
{ 0x0014D020, WeaponInfusionType::NO_UPGRADE }, // Gwynevere's Talisman
{ 0x0014D408, WeaponInfusionType::NO_UPGRADE }, // Sunlight Talisman
{ 0x0014D7F0, WeaponInfusionType::NO_UPGRADE }, // Darkmoon Talisman
{ 0x0014DBD8, WeaponInfusionType::NO_UPGRADE }, // Velka's Talisman
{ 0x00154D20, WeaponInfusionType::NO_UPGRADE }, // Skull Lantern
{ 0x0004BAF0, WeaponInfusionType::UNIQUE }, // Black Knight Sword
{ 0x0004BED8, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004BF3C, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004BFA0, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C004, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C068, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C0CC, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C130, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C194, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C1F8, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C25C, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C2C0, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C324, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C388, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C3EC, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C450, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C4B4, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C518, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004C57C, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004CA90, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CAF4, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CB58, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CBBC, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CC20, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CC84, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CCE8, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CD4C, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CDB0, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CE14, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CE78, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CEDC, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CF40, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004CFA4, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004D008, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004D06C, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004D0D0, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004D134, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0016FEB8, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x0016FF1C, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x0016FF80, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x0016FFE4, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170048, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001700AC, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170110, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170174, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001701D8, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x0017023C, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001702A0, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170304, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170368, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001703CC, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170430, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170494, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001704F8, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x0017055C, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001705C0, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170624, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170688, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001706EC, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170750, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001707B4, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170818, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x0017087C, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001708E0, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170944, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x001709A8, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170A0C, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170A70, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170AD4, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170B38, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170B9C, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170C00, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170C64, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00170CC8, WeaponInfusionType::UNIQUE }, // Greatshield of Artorias
{ 0x00032C80, WeaponInfusionType::UNIQUE }, // Silver Knight Straight Sword
{ 0x0004AF38, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004AF9C, WeaponInfusionType::UNIQUE }, // Greatsword of Artorias
{ 0x0004B320, WeaponInfusionType::UNIQUE }, // Great Lord Greatsword
{ 0x0004B708, WeaponInfusionType::UNIQUE }, // Moonlight Greatsword
{ 0x000631F0, WeaponInfusionType::UNIQUE }, // Quelaag's Furysword
{ 0x00063254, WeaponInfusionType::UNIQUE }, // Quelaag's Furysword
{ 0x000632B8, WeaponInfusionType::UNIQUE }, // Quelaag's Furysword
{ 0x0006331C, WeaponInfusionType::UNIQUE }, // Quelaag's Furysword
{ 0x00063380, WeaponInfusionType::UNIQUE }, // Quelaag's Furysword
{ 0x000633E4, WeaponInfusionType::UNIQUE }, // Quelaag's Furysword
{ 0x00897B50, WeaponInfusionType::UNIQUE }, // Gold Tracer
{ 0x0089A648, WeaponInfusionType::UNIQUE }, // Gough's Greatbow
{ 0x00898ED8, WeaponInfusionType::UNIQUE }, // Stone Greataxe
{ 0x0089A260, WeaponInfusionType::UNIQUE }, // Obsidian Greatsword
{ 0x00897F38, WeaponInfusionType::UNIQUE }, // Dark Silver Tracer
{ 0x000566D0, WeaponInfusionType::UNIQUE }, // Dragon Greatsword
{ 0x00056AB8, WeaponInfusionType::UNIQUE }, // Black Knight Greatsword,     
{ 0x00018E70, WeaponInfusionType::UNIQUE }, // Ghost Blade
{ 0x00019640, WeaponInfusionType::UNIQUE }, // Priscilla's Dagger
{ 0x000D0FC0, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D1024, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D1088, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D10EC, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D1150, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D11B4, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D1218, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D127C, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D12E0, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D1344, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D13A8, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x000D140C, WeaponInfusionType::UNIQUE }, // Smough's Hammer
{ 0x00062638, WeaponInfusionType::UNIQUE }, // Jagged Ghost Blade
{ 0x000ABE00, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x000ABE64, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x000ABEC8, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x000ABF2C, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x000ABF90, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x000ABFF4, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x000AC058, WeaponInfusionType::UNIQUE }, // Golem Axe
{ 0x0007ACD8, WeaponInfusionType::UNIQUE }, // Chaos Blade
{ 0x0007AD3C, WeaponInfusionType::UNIQUE }, // Chaos Blade
{ 0x0007ADA0, WeaponInfusionType::UNIQUE }, // Chaos Blade
{ 0x0010D0B0, WeaponInfusionType::UNIQUE }, // Titanite Catch Pole
{ 0x001587B8, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x0015881C, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158880, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001588E4, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158948, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001589AC, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158A10, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158A74, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158AD8, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158B3C, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158BA0, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158C04, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158C68, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158CCC, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158D30, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158D94, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158DF8, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158E5C, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158EC0, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158F24, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158F88, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00158FEC, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159050, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001590B4, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159118, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x0015917C, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001591E0, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159244, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001592A8, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x0015930C, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159370, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001593D4, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159438, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x0015949C, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159500, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x00159564, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x001595C8, WeaponInfusionType::UNIQUE }, // C. Ring Shield
{ 0x000DC758, WeaponInfusionType::UNIQUE }, // Dragon Bone Fist
{ 0x000DC7BC, WeaponInfusionType::UNIQUE }, // Dragon Bone Fist
{ 0x000F59B0, WeaponInfusionType::UNIQUE }, // Silver Knight Spear
{ 0x00100978, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x001009DC, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100A40, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100AA4, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100B08, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100B6C, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100BD0, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100C34, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100C98, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100CFC, WeaponInfusionType::UNIQUE }, // Dragonslayer Spear
{ 0x00100D60, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00100DC4, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00100E28, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00100E8C, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00100EF0, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00100F54, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00100FB8, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x0010101C, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x00101080, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x001010E4, WeaponInfusionType::UNIQUE }, // Moonlight Butterfly Horn
{ 0x0010DC68, WeaponInfusionType::UNIQUE }, // Black Knight Halberd
{ 0x00119018, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x0011907C, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x001190E0, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x00119144, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x001191A8, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x0011920C, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x00119270, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x001192D4, WeaponInfusionType::UNIQUE }, // Lifehunt Scythe
{ 0x00126308, WeaponInfusionType::UNIQUE }, // Darkmoon Bow
{ 0x0012636C, WeaponInfusionType::UNIQUE }, // Darkmoon Bow
{ 0x001263D0, WeaponInfusionType::UNIQUE }, // Darkmoon Bow
{ 0x00126434, WeaponInfusionType::UNIQUE }, // Darkmoon Bow
};