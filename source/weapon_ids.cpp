
enum class WeaponInfusionType{
    Standard,
    Crystal,
    Lightning,
    Raw,
    Magic,
    Enchanted,
    Divine,
    Occult,
    Fire,
    Chaos,
    Unique,
    NoUpgrade
};

std::unordered_map<uint64_t, WeaponInfusionType> weapon_ids = {
    { 0x00899E78, WeaponInfusionType::Standard }, // Standard Guardian Tail
    { 0x00899EDC, WeaponInfusionType::Crystal }, // Crystal Guardian Tail
    { 0x00899F40, WeaponInfusionType::Lightning }, // Lightning Guardian Tail
    { 0x00899FA4, WeaponInfusionType::Raw }, // Raw Guardian Tail
    { 0x0089A008, WeaponInfusionType::Magic }, // Magic Guardian Tail
    { 0x0089A06C, WeaponInfusionType::Enchanted }, // Enchanted Guardian Tail
    { 0x0089A0D0, WeaponInfusionType::Divine }, // Divine Guardian Tail
    { 0x0089A134, WeaponInfusionType::Occult }, // Occult Guardian Tail
    { 0x0089A198, WeaponInfusionType::Fire }, // Fire Guardian Tail
    { 0x0089A1FC, WeaponInfusionType::Chaos }, // Chaos Guardian Tail
    { 0x008992C0, WeaponInfusionType::Standard }, // Standard Four-Pronged Plow
    { 0x00899324, WeaponInfusionType::Crystal }, // Crystal Four-Pronged Plow
    { 0x00899388, WeaponInfusionType::Lightning }, // Lightning Four-Pronged Plow
    { 0x008993EC, WeaponInfusionType::Raw }, // Raw Four-Pronged Plow
    { 0x00899450, WeaponInfusionType::Magic }, // Magic Four-Pronged Plow
    { 0x008994B4, WeaponInfusionType::Enchanted }, // Enchanted Four-Pronged Plow
    { 0x00899518, WeaponInfusionType::Divine }, // Divine Four-Pronged Plow
    { 0x0089957C, WeaponInfusionType::Occult }, // Occult Four-Pronged Plow
    { 0x008995E0, WeaponInfusionType::Fire }, // Fire Four-Pronged Plow
    { 0x00899644, WeaponInfusionType::Chaos }, // Chaos Four-Pronged Plow
    { 0x000186A0, WeaponInfusionType::Standard }, // Dagger
    { 0x00018704, WeaponInfusionType::Crystal }, // Crystal Dagger
    { 0x00018768, WeaponInfusionType::Lightning }, // Lightning Dagger
    { 0x000187CC, WeaponInfusionType::Raw }, // Raw Dagger
    { 0x00018830, WeaponInfusionType::Magic }, // Magic Dagger
    { 0x00018894, WeaponInfusionType::Enchanted }, // Enchanted Dagger
    { 0x000188F8, WeaponInfusionType::Divine }, // Divine Dagger
    { 0x0001895C, WeaponInfusionType::Occult }, // Occult Dagger
    { 0x000189C0, WeaponInfusionType::Fire }, // Fire Dagger
    { 0x00018A24, WeaponInfusionType::Chaos }, // Chaos Dagger
    { 0x00018A88, WeaponInfusionType::Standard }, // Parrying Dagger
    { 0x00018AEC, WeaponInfusionType::Crystal }, // Crystal Parrying Dagger
    { 0x00018B50, WeaponInfusionType::Lightning }, // Lightning Parrying Dagger
    { 0x00018BB4, WeaponInfusionType::Raw }, // Raw Parrying Dagger
    { 0x00018C18, WeaponInfusionType::Magic }, // Magic Parrying Dagger
    { 0x00018C7C, WeaponInfusionType::Enchanted }, // Enchanted Parrying Dagger
    { 0x00018CE0, WeaponInfusionType::Divine }, // Divine Parrying Dagger
    { 0x00018D44, WeaponInfusionType::Occult }, // Occult Parrying Dagger
    { 0x00018DA8, WeaponInfusionType::Fire }, // Fire Parrying Dagger
    { 0x00018E0C, WeaponInfusionType::Chaos }, // Chaos Parrying Dagger
    { 0x00019258, WeaponInfusionType::Standard }, // Bandit's Knife
    { 0x000192BC, WeaponInfusionType::Crystal }, // Crystal Knife
    { 0x00019320, WeaponInfusionType::Lightning }, // Lightning Knife
    { 0x00019384, WeaponInfusionType::Raw }, // Raw Knife
    { 0x000193E8, WeaponInfusionType::Magic }, // Magic Knife
    { 0x0001944C, WeaponInfusionType::Enchanted }, // Enchanted Knife
    { 0x000194B0, WeaponInfusionType::Divine }, // Divine Knife
    { 0x00019514, WeaponInfusionType::Occult }, // Occult Knife
    { 0x00019578, WeaponInfusionType::Fire }, // Fire Knife
    { 0x000195DC, WeaponInfusionType::Chaos }, // Chaos Knife
    { 0x00030D40, WeaponInfusionType::Standard }, // Shortsword
    { 0x00030DA4, WeaponInfusionType::Crystal }, // Crystal Shortsword
    { 0x00030E08, WeaponInfusionType::Lightning }, // Lightning Shortsword
    { 0x00030E6C, WeaponInfusionType::Raw }, // Raw Shortsword
    { 0x00030ED0, WeaponInfusionType::Magic }, // Magic Shortsword
    { 0x00030F34, WeaponInfusionType::Enchanted }, // Enchanted Shortsword
    { 0x00030F98, WeaponInfusionType::Divine }, // Divine Shortsword
    { 0x00030FFC, WeaponInfusionType::Occult }, // Occult Shortsword
    { 0x00031060, WeaponInfusionType::Fire }, // Fire Shortsword
    { 0x000310C4, WeaponInfusionType::Chaos }, // Chaos Shortsword
    { 0x00031128, WeaponInfusionType::Standard }, // Longsword
    { 0x0003118C, WeaponInfusionType::Crystal }, // Crystal Longsword
    { 0x000311F0, WeaponInfusionType::Lightning }, // Lightning Longsword
    { 0x00031254, WeaponInfusionType::Raw }, // Raw Longsword
    { 0x000312B8, WeaponInfusionType::Magic }, // Magic Longsword
    { 0x0003131C, WeaponInfusionType::Enchanted }, // Enchanted Longsword
    { 0x00031380, WeaponInfusionType::Divine }, // Divine Longsword
    { 0x000313E4, WeaponInfusionType::Occult }, // Occult Longsword
    { 0x00031448, WeaponInfusionType::Fire }, // Fire Longsword
    { 0x000314AC, WeaponInfusionType::Chaos }, // Chaos Longsword
    { 0x00031510, WeaponInfusionType::Standard }, // Broadsword
    { 0x00031574, WeaponInfusionType::Crystal }, // Crystal Broadsword
    { 0x000315D8, WeaponInfusionType::Lightning }, // Lightning Broadsword
    { 0x0003163C, WeaponInfusionType::Raw }, // Raw Broadsword
    { 0x000316A0, WeaponInfusionType::Magic }, // Magic Broadsword
    { 0x00031704, WeaponInfusionType::Enchanted }, // Enchanted Broadsword
    { 0x00031768, WeaponInfusionType::Divine }, // Divine Broadsword
    { 0x000317CC, WeaponInfusionType::Occult }, // Occult Broadsword
    { 0x00031830, WeaponInfusionType::Fire }, // Fire Broadsword
    { 0x00031894, WeaponInfusionType::Chaos }, // Chaos Broadsword
    { 0x000318F8, WeaponInfusionType::Standard }, // Broken Straight Sword
    { 0x0003195C, WeaponInfusionType::Crystal }, // Crystal Broken Straight Sword
    { 0x000319C0, WeaponInfusionType::Lightning }, // Lightning Broken Straight Sword
    { 0x00031A24, WeaponInfusionType::Raw }, // Raw Broken Straight Sword
    { 0x00031A88, WeaponInfusionType::Magic }, // Magic Broken Straight Sword
    { 0x00031AEC, WeaponInfusionType::Enchanted }, // Enchanted Broken Straight Sword
    { 0x00031B50, WeaponInfusionType::Divine }, // Divine Broken Straight Sword
    { 0x00031BB4, WeaponInfusionType::Occult }, // Occult Broken Straight Sword
    { 0x00031C18, WeaponInfusionType::Fire }, // Fire Broken Straight Sword
    { 0x00031C7C, WeaponInfusionType::Chaos }, // Chaos Broken Straight Sword
    { 0x00031CE0, WeaponInfusionType::Standard }, // Balder Side Sword
    { 0x00031D44, WeaponInfusionType::Crystal }, // Crystal Balder Side Sword
    { 0x00031DA8, WeaponInfusionType::Lightning }, // Lightning Balder Side Sword
    { 0x00031E0C, WeaponInfusionType::Raw }, // Raw Balder Side Sword
    { 0x00031E70, WeaponInfusionType::Magic }, // Magic Balder Side Sword
    { 0x00031ED4, WeaponInfusionType::Enchanted }, // Enchanted Balder Side Sword
    { 0x00031F38, WeaponInfusionType::Divine }, // Divine Balder Side Sword
    { 0x00031F9C, WeaponInfusionType::Occult }, // Occult Balder Side Sword
    { 0x00032000, WeaponInfusionType::Fire }, // Fire Balder Side Sword
    { 0x00032064, WeaponInfusionType::Chaos }, // Chaos Balder Side Sword
    { 0x000320C8, WeaponInfusionType::Crystal }, // Crystal Straight Sword
    { 0x000324B0, WeaponInfusionType::Standard }, // Sunlight Straight Sword
    { 0x00032514, WeaponInfusionType::Crystal }, // Crystal Sunlight Straight Sword
    { 0x00032578, WeaponInfusionType::Lightning }, // Lightning Sunlight Straight Sword
    { 0x000325DC, WeaponInfusionType::Raw }, // Raw Sunlight Straight Sword
    { 0x00032640, WeaponInfusionType::Magic }, // Magic Sunlight Straight Sword
    { 0x000326A4, WeaponInfusionType::Enchanted }, // Enchanted Sunlight Straight Sword
    { 0x00032708, WeaponInfusionType::Divine }, // Divine Sunlight Straight Sword
    { 0x0003276C, WeaponInfusionType::Occult }, // Occult Sunlight Straight Sword
    { 0x000327D0, WeaponInfusionType::Fire }, // Fire Sunlight Straight Sword
    { 0x00032834, WeaponInfusionType::Chaos }, // Chaos Sunlight Straight Sword
    { 0x00032898, WeaponInfusionType::Standard }, // Barbed Straight Sword
    { 0x000328FC, WeaponInfusionType::Crystal }, // Crystal Barbed Straight Sword
    { 0x00032960, WeaponInfusionType::Lightning }, // Lightning Barbed Straight Sword
    { 0x000329C4, WeaponInfusionType::Raw }, // Raw Barbed Straight Sword
    { 0x00032A28, WeaponInfusionType::Magic }, // Magic Barbed Straight Sword
    { 0x00032A8C, WeaponInfusionType::Enchanted }, // Enchanted Barbed Straight Sword
    { 0x00032AF0, WeaponInfusionType::Divine }, // Divine Barbed Straight Sword
    { 0x00032B54, WeaponInfusionType::Occult }, // Occult Barbed Straight Sword
    { 0x00032BB8, WeaponInfusionType::Fire }, // Fire Barbed Straight Sword
    { 0x00032C1C, WeaponInfusionType::Chaos }, // Chaos Barbed Straight Sword
    { 0x00033068, WeaponInfusionType::Standard }, // Astora's Straight Sword
    { 0x000330CC, WeaponInfusionType::Crystal }, // Crystal Astora's Straight Sword
    { 0x00033130, WeaponInfusionType::Lightning }, // Lightning Astora's Straight Sword
    { 0x00033194, WeaponInfusionType::Raw }, // Raw Astora's Straight Sword
    { 0x000331F8, WeaponInfusionType::Magic }, // Magic Astora's Straight Sword
    { 0x0003325C, WeaponInfusionType::Enchanted }, // Enchanted Astora's Straight Sword
    { 0x000332C0, WeaponInfusionType::Divine }, // Divine Astora's Straight Sword
    { 0x00033324, WeaponInfusionType::Occult }, // Occult Astora's Straight Sword
    { 0x00033388, WeaponInfusionType::Fire }, // Fire Astora's Straight Sword
    { 0x000333EC, WeaponInfusionType::Chaos }, // Chaos Astora's Straight Sword
    { 0x00033450, WeaponInfusionType::Standard }, // Darksword
    { 0x000334B4, WeaponInfusionType::Crystal }, // Crystal Darksword
    { 0x00033518, WeaponInfusionType::Lightning }, // Lightning Darksword
    { 0x0003357C, WeaponInfusionType::Raw }, // Raw Darksword
    { 0x000335E0, WeaponInfusionType::Magic }, // Magic Darksword
    { 0x00033644, WeaponInfusionType::Enchanted }, // Enchanted Darksword
    { 0x000336A8, WeaponInfusionType::Divine }, // Divine Darksword
    { 0x0003370C, WeaponInfusionType::Occult }, // Occult Darksword
    { 0x00033770, WeaponInfusionType::Fire }, // Fire Darksword
    { 0x000337D4, WeaponInfusionType::Chaos }, // Chaos Darksword
    { 0x00033838, WeaponInfusionType::Standard }, // Drake Sword
    { 0x00033C20, WeaponInfusionType::Standard }, // Straight Sword Hilt
    { 0x00033C84, WeaponInfusionType::Crystal }, // Crystal Straight Sword Hilt
    { 0x00033CE8, WeaponInfusionType::Lightning }, // Lightning Straight Sword Hilt
    { 0x00033D4C, WeaponInfusionType::Raw }, // Raw Straight Sword Hilt
    { 0x00033DB0, WeaponInfusionType::Magic }, // Magic Straight Sword Hilt
    { 0x00033E14, WeaponInfusionType::Enchanted }, // Enchanted Straight Sword Hilt
    { 0x00033E78, WeaponInfusionType::Divine }, // Divine Straight Sword Hilt
    { 0x00033EDC, WeaponInfusionType::Occult }, // Occult Straight Sword Hilt
    { 0x00033F40, WeaponInfusionType::Fire }, // Fire Straight Sword Hilt
    { 0x00033FA4, WeaponInfusionType::Chaos }, // Chaos Straight Sword Hilt
    { 0x000493E0, WeaponInfusionType::Standard }, // Bastard Sword
    { 0x00049444, WeaponInfusionType::Crystal }, // Crystal Bastard Sword
    { 0x000494A8, WeaponInfusionType::Lightning }, // Lightning Bastard Sword
    { 0x0004950C, WeaponInfusionType::Raw }, // Raw Bastard Sword
    { 0x00049570, WeaponInfusionType::Magic }, // Magic Bastard Sword
    { 0x000495D4, WeaponInfusionType::Enchanted }, // Enchanted Bastard Sword
    { 0x00049638, WeaponInfusionType::Divine }, // Divine Bastard Sword
    { 0x0004969C, WeaponInfusionType::Occult }, // Occult Bastard Sword
    { 0x00049700, WeaponInfusionType::Fire }, // Fire Bastard Sword
    { 0x00049764, WeaponInfusionType::Chaos }, // Chaos Bastard Sword
    { 0x000497C8, WeaponInfusionType::Standard }, // Claymore
    { 0x0004982C, WeaponInfusionType::Crystal }, // Crystal Claymore
    { 0x00049890, WeaponInfusionType::Lightning }, // Lightning Claymore
    { 0x000498F4, WeaponInfusionType::Raw }, // Raw Claymore
    { 0x00049958, WeaponInfusionType::Magic }, // Magic Claymore
    { 0x000499BC, WeaponInfusionType::Enchanted }, // Enchanted Claymore
    { 0x00049A20, WeaponInfusionType::Divine }, // Divine Claymore
    { 0x00049A84, WeaponInfusionType::Occult }, // Occult Claymore
    { 0x00049AE8, WeaponInfusionType::Fire }, // Fire Claymore
    { 0x00049B4C, WeaponInfusionType::Chaos }, // Chaos Claymore
    { 0x00049BB0, WeaponInfusionType::Standard }, // Man-serpent Greatsword
    { 0x00049C14, WeaponInfusionType::Crystal }, // Crystal Man-serpent Greatsword
    { 0x00049C78, WeaponInfusionType::Lightning }, // Lightning Man-serpent Greatsword
    { 0x00049CDC, WeaponInfusionType::Raw }, // Raw Man-serpent Greatsword
    { 0x00049D40, WeaponInfusionType::Magic }, // Magic Man-serpent Greatsword
    { 0x00049DA4, WeaponInfusionType::Enchanted }, // Enchanted Man-serpent Greatsword
    { 0x00049E08, WeaponInfusionType::Divine }, // Divine Man-serpent Greatsword
    { 0x00049E6C, WeaponInfusionType::Occult }, // Occult Man-serpent Greatsword
    { 0x00049ED0, WeaponInfusionType::Fire }, // Fire Man-serpent Greatsword
    { 0x00049F34, WeaponInfusionType::Chaos }, // Chaos Man-serpent Greatsword
    { 0x00049F98, WeaponInfusionType::Standard }, // Flamberge
    { 0x00049FFC, WeaponInfusionType::Crystal }, // Crystal Flamberge
    { 0x0004A060, WeaponInfusionType::Lightning }, // Lightning Flamberge
    { 0x0004A0C4, WeaponInfusionType::Raw }, // Raw Flamberge
    { 0x0004A128, WeaponInfusionType::Magic }, // Magic Flamberge
    { 0x0004A18C, WeaponInfusionType::Enchanted }, // Enchanted Flamberge
    { 0x0004A1F0, WeaponInfusionType::Divine }, // Divine Flamberge
    { 0x0004A254, WeaponInfusionType::Occult }, // Occult Flamberge
    { 0x0004A2B8, WeaponInfusionType::Fire }, // Fire Flamberge
    { 0x0004A31C, WeaponInfusionType::Chaos }, // Chaos Flamberge
    { 0x0004A380, WeaponInfusionType::Crystal }, // Crystal Greatsword
    { 0x0004AB50, WeaponInfusionType::Standard }, // Stone Greatsword
    { 0x00055730, WeaponInfusionType::Standard }, // Zweihander
    { 0x00055794, WeaponInfusionType::Crystal }, // Crystal Zweihander
    { 0x000557F8, WeaponInfusionType::Lightning }, // Lightning Zweihander
    { 0x0005585C, WeaponInfusionType::Raw }, // Raw Zweihander
    { 0x000558C0, WeaponInfusionType::Magic }, // Magic Zweihander
    { 0x00055924, WeaponInfusionType::Enchanted }, // Enchanted Zweihander
    { 0x00055988, WeaponInfusionType::Divine }, // Divine Zweihander
    { 0x000559EC, WeaponInfusionType::Occult }, // Occult Zweihander
    { 0x00055A50, WeaponInfusionType::Fire }, // Fire Zweihander
    { 0x00055AB4, WeaponInfusionType::Chaos }, // Chaos Zweihander
    { 0x00055B18, WeaponInfusionType::Standard }, // Greatsword
    { 0x00055B7C, WeaponInfusionType::Crystal }, // Crystal Greatsword
    { 0x00055BE0, WeaponInfusionType::Lightning }, // Lightning Greatsword
    { 0x00055C44, WeaponInfusionType::Raw }, // Raw Greatsword
    { 0x00055CA8, WeaponInfusionType::Magic }, // Magic Greatsword
    { 0x00055D0C, WeaponInfusionType::Enchanted }, // Enchanted Greatsword
    { 0x00055D70, WeaponInfusionType::Divine }, // Divine Greatsword
    { 0x00055DD4, WeaponInfusionType::Occult }, // Occult Greatsword
    { 0x00055E38, WeaponInfusionType::Fire }, // Fire Greatsword
    { 0x00055E9C, WeaponInfusionType::Chaos }, // Chaos Greatsword
    { 0x00055F00, WeaponInfusionType::Standard }, // Demon Great Machete
    { 0x00055F64, WeaponInfusionType::Crystal }, // Crystal Demon Great Machete
    { 0x00055FC8, WeaponInfusionType::Lightning }, // Lightning Demon Great Machete
    { 0x0005602C, WeaponInfusionType::Raw }, // Raw Demon Great Machete
    { 0x00056090, WeaponInfusionType::Magic }, // Magic Demon Great Machete
    { 0x000560F4, WeaponInfusionType::Enchanted }, // Enchanted Demon Great Machete
    { 0x00056158, WeaponInfusionType::Divine }, // Divine Demon Great Machete
    { 0x000561BC, WeaponInfusionType::Occult }, // Occult Demon Great Machete
    { 0x00056220, WeaponInfusionType::Fire }, // Fire Demon Great Machete
    { 0x00056284, WeaponInfusionType::Chaos }, // Chaos Demon Great Machete
    { 0x00061A80, WeaponInfusionType::Standard }, // Scimitar
    { 0x00061AE4, WeaponInfusionType::Crystal }, // Crystal Scimitar
    { 0x00061B48, WeaponInfusionType::Lightning }, // Lightning Scimitar
    { 0x00061BAC, WeaponInfusionType::Raw }, // Raw Scimitar
    { 0x00061C10, WeaponInfusionType::Magic }, // Magic Scimitar
    { 0x00061C74, WeaponInfusionType::Enchanted }, // Enchanted Scimitar
    { 0x00061CD8, WeaponInfusionType::Divine }, // Divine Scimitar
    { 0x00061D3C, WeaponInfusionType::Occult }, // Occult Scimitar
    { 0x00061DA0, WeaponInfusionType::Fire }, // Fire Scimitar
    { 0x00061E04, WeaponInfusionType::Chaos }, // Chaos Scimitar
    { 0x00061E68, WeaponInfusionType::Standard }, // Falchion
    { 0x00061ECC, WeaponInfusionType::Crystal }, // Crystal Falchion
    { 0x00061F30, WeaponInfusionType::Lightning }, // Lightning Falchion
    { 0x00061F94, WeaponInfusionType::Raw }, // Raw Falchion
    { 0x00061FF8, WeaponInfusionType::Magic }, // Magic Falchion
    { 0x0006205C, WeaponInfusionType::Enchanted }, // Enchanted Falchion
    { 0x000620C0, WeaponInfusionType::Divine }, // Divine Falchion
    { 0x00062124, WeaponInfusionType::Occult }, // Occult Falchion
    { 0x00062188, WeaponInfusionType::Fire }, // Fire Falchion
    { 0x000621EC, WeaponInfusionType::Chaos }, // Chaos Falchion
    { 0x00062250, WeaponInfusionType::Standard }, // Shotel
    { 0x000622B4, WeaponInfusionType::Crystal }, // Crystal Shotel
    { 0x00062318, WeaponInfusionType::Lightning }, // Lightning Shotel
    { 0x0006237C, WeaponInfusionType::Raw }, // Raw Shotel
    { 0x000623E0, WeaponInfusionType::Magic }, // Magic Shotel
    { 0x00062444, WeaponInfusionType::Enchanted }, // Enchanted Shotel
    { 0x000624A8, WeaponInfusionType::Divine }, // Divine Shotel
    { 0x0006250C, WeaponInfusionType::Occult }, // Occult Shotel
    { 0x00062570, WeaponInfusionType::Fire }, // Fire Shotel
    { 0x000625D4, WeaponInfusionType::Chaos }, // Chaos Shotel
    { 0x00062E08, WeaponInfusionType::Standard }, // Painting Guardian Sword
    { 0x00062E6C, WeaponInfusionType::Crystal }, // Crystal Painting Guardian Sword
    { 0x00062ED0, WeaponInfusionType::Lightning }, // Lightning Painting Guardian Sword
    { 0x00062F34, WeaponInfusionType::Raw }, // Raw Painting Guardian Sword
    { 0x00062F98, WeaponInfusionType::Magic }, // Magic Painting Guardian Sword
    { 0x00062FFC, WeaponInfusionType::Enchanted }, // Enchanted Painting Guardian Sword
    { 0x00063060, WeaponInfusionType::Divine }, // Divine Painting Guardian Sword
    { 0x000630C4, WeaponInfusionType::Occult }, // Occult Painting Guardian Sword
    { 0x00063128, WeaponInfusionType::Fire }, // Fire Painting Guardian Sword
    { 0x0006318C, WeaponInfusionType::Chaos }, // Chaos Painting Guardian Sword
    { 0x0006DDD0, WeaponInfusionType::Standard }, // Server
    { 0x0006DE34, WeaponInfusionType::Crystal }, // Crystal Server
    { 0x0006DE98, WeaponInfusionType::Lightning }, // Lightning Server
    { 0x0006DEFC, WeaponInfusionType::Raw }, // Raw Server
    { 0x0006DF60, WeaponInfusionType::Magic }, // Magic Server
    { 0x0006DFC4, WeaponInfusionType::Enchanted }, // Enchanted Server
    { 0x0006E028, WeaponInfusionType::Divine }, // Divine Server
    { 0x0006E08C, WeaponInfusionType::Occult }, // Occult Server
    { 0x0006E0F0, WeaponInfusionType::Fire }, // Fire Server
    { 0x0006E154, WeaponInfusionType::Chaos }, // Chaos Server
    { 0x0006E1B8, WeaponInfusionType::Standard }, // Murakumo
    { 0x0006E21C, WeaponInfusionType::Crystal }, // Crystal Murakumo
    { 0x0006E280, WeaponInfusionType::Lightning }, // Lightning Murakumo
    { 0x0006E2E4, WeaponInfusionType::Raw }, // Raw Murakumo
    { 0x0006E348, WeaponInfusionType::Magic }, // Magic Murakumo
    { 0x0006E3AC, WeaponInfusionType::Enchanted }, // Enchanted Murakumo
    { 0x0006E410, WeaponInfusionType::Divine }, // Divine Murakumo
    { 0x0006E474, WeaponInfusionType::Occult }, // Occult Murakumo
    { 0x0006E4D8, WeaponInfusionType::Fire }, // Fire Murakumo
    { 0x0006E53C, WeaponInfusionType::Chaos }, // Chaos Murakumo
    { 0x0006E988, WeaponInfusionType::Standard }, // Gravelord Sword
    { 0x0007A120, WeaponInfusionType::Standard }, // Uchigatana
    { 0x0007A184, WeaponInfusionType::Crystal }, // Crystal Uchigatana
    { 0x0007A1E8, WeaponInfusionType::Lightning }, // Lightning Uchigatana
    { 0x0007A24C, WeaponInfusionType::Raw }, // Raw Uchigatana
    { 0x0007A2B0, WeaponInfusionType::Magic }, // Magic Uchigatana
    { 0x0007A314, WeaponInfusionType::Enchanted }, // Enchanted Uchigatana
    { 0x0007A378, WeaponInfusionType::Divine }, // Divine Uchigatana
    { 0x0007A3DC, WeaponInfusionType::Occult }, // Occult Uchigatana
    { 0x0007A440, WeaponInfusionType::Fire }, // Fire Uchigatana
    { 0x0007A4A4, WeaponInfusionType::Chaos }, // Chaos Uchigatana
    { 0x0007A508, WeaponInfusionType::Standard }, // Washing Pole
    { 0x0007A56C, WeaponInfusionType::Crystal }, // Crystal Washing Pole
    { 0x0007A5D0, WeaponInfusionType::Lightning }, // Lightning Washing Pole
    { 0x0007A634, WeaponInfusionType::Raw }, // Raw Washing Pole
    { 0x0007A698, WeaponInfusionType::Magic }, // Magic Washing Pole
    { 0x0007A6FC, WeaponInfusionType::Enchanted }, // Enchanted Washing Pole
    { 0x0007A760, WeaponInfusionType::Divine }, // Divine Washing Pole
    { 0x0007A7C4, WeaponInfusionType::Occult }, // Occult Washing Pole
    { 0x0007A828, WeaponInfusionType::Fire }, // Fire Washing Pole
    { 0x0007A88C, WeaponInfusionType::Chaos }, // Chaos Washing Pole
    { 0x0007A8F0, WeaponInfusionType::Standard }, // Iaito
    { 0x0007A954, WeaponInfusionType::Crystal }, // Crystal Iaito
    { 0x0007A9B8, WeaponInfusionType::Lightning }, // Lightning Iaito
    { 0x0007AA1C, WeaponInfusionType::Raw }, // Raw Iaito
    { 0x0007AA80, WeaponInfusionType::Magic }, // Magic Iaito
    { 0x0007AAE4, WeaponInfusionType::Enchanted }, // Enchanted Iaito
    { 0x0007AB48, WeaponInfusionType::Divine }, // Divine Iaito
    { 0x0007ABAC, WeaponInfusionType::Occult }, // Occult Iaito
    { 0x0007AC10, WeaponInfusionType::Fire }, // Fire Iaito
    { 0x0007AC74, WeaponInfusionType::Chaos }, // Chaos Iaito
    { 0x000927C0, WeaponInfusionType::Standard }, // Mail Breaker
    { 0x00092824, WeaponInfusionType::Crystal }, // Crystal Mail Breaker
    { 0x00092888, WeaponInfusionType::Lightning }, // Lightning Mail Breaker
    { 0x000928EC, WeaponInfusionType::Raw }, // Raw Mail Breaker
    { 0x00092950, WeaponInfusionType::Magic }, // Magic Mail Breaker
    { 0x000929B4, WeaponInfusionType::Enchanted }, // Enchanted Mail Breaker
    { 0x00092A18, WeaponInfusionType::Divine }, // Divine Mail Breaker
    { 0x00092A7C, WeaponInfusionType::Occult }, // Occult Mail Breaker
    { 0x00092AE0, WeaponInfusionType::Fire }, // Fire Mail Breaker
    { 0x00092B44, WeaponInfusionType::Chaos }, // Chaos Mail Breaker
    { 0x00092BA8, WeaponInfusionType::Standard }, // Rapier
    { 0x00092C0C, WeaponInfusionType::Crystal }, // Crystal Rapier
    { 0x00092C70, WeaponInfusionType::Lightning }, // Lightning Rapier
    { 0x00092CD4, WeaponInfusionType::Raw }, // Raw Rapier
    { 0x00092D38, WeaponInfusionType::Magic }, // Magic Rapier
    { 0x00092D9C, WeaponInfusionType::Enchanted }, // Enchanted Rapier
    { 0x00092E00, WeaponInfusionType::Divine }, // Divine Rapier
    { 0x00092E64, WeaponInfusionType::Occult }, // Occult Rapier
    { 0x00092EC8, WeaponInfusionType::Fire }, // Fire Rapier
    { 0x00092F2C, WeaponInfusionType::Chaos }, // Chaos Rapier
    { 0x00092F90, WeaponInfusionType::Standard }, // Estoc
    { 0x00092FF4, WeaponInfusionType::Crystal }, // Crystal Estoc
    { 0x00093058, WeaponInfusionType::Lightning }, // Lightning Estoc
    { 0x000930BC, WeaponInfusionType::Raw }, // Raw Estoc
    { 0x00093120, WeaponInfusionType::Magic }, // Magic Estoc
    { 0x00093184, WeaponInfusionType::Enchanted }, // Enchanted Estoc
    { 0x000931E8, WeaponInfusionType::Divine }, // Divine Estoc
    { 0x0009324C, WeaponInfusionType::Occult }, // Occult Estoc
    { 0x000932B0, WeaponInfusionType::Fire }, // Fire Estoc
    { 0x00093314, WeaponInfusionType::Chaos }, // Chaos Estoc
    { 0x00093378, WeaponInfusionType::Standard }, // Velka's Rapier
    { 0x00093760, WeaponInfusionType::Standard }, // Ricard's Rapier
    { 0x000937C4, WeaponInfusionType::Crystal }, // Crystal Ricard's Rapier
    { 0x00093828, WeaponInfusionType::Lightning }, // Lightning Ricard's Rapier
    { 0x0009388C, WeaponInfusionType::Raw }, // Raw Ricard's Rapier
    { 0x000938F0, WeaponInfusionType::Magic }, // Magic Ricard's Rapier
    { 0x00093954, WeaponInfusionType::Enchanted }, // Enchanted Ricard's Rapier
    { 0x000939B8, WeaponInfusionType::Divine }, // Divine Ricard's Rapier
    { 0x00093A1C, WeaponInfusionType::Occult }, // Occult Ricard's Rapier
    { 0x00093A80, WeaponInfusionType::Fire }, // Fire Ricard's Rapier
    { 0x00093AE4, WeaponInfusionType::Chaos }, // Chaos Ricard's Rapier
    { 0x000AAE60, WeaponInfusionType::Standard }, // Hand Axe
    { 0x000AAEC4, WeaponInfusionType::Crystal }, // Crystal Hand Axe
    { 0x000AAF28, WeaponInfusionType::Lightning }, // Lightning Hand Axe
    { 0x000AAF8C, WeaponInfusionType::Raw }, // Raw Hand Axe
    { 0x000AAFF0, WeaponInfusionType::Magic }, // Magic Hand Axe
    { 0x000AB054, WeaponInfusionType::Enchanted }, // Enchanted Hand Axe
    { 0x000AB0B8, WeaponInfusionType::Divine }, // Divine Hand Axe
    { 0x000AB11C, WeaponInfusionType::Occult }, // Occult Hand Axe
    { 0x000AB180, WeaponInfusionType::Fire }, // Fire Hand Axe
    { 0x000AB1E4, WeaponInfusionType::Chaos }, // Chaos Hand Axe
    { 0x000AB248, WeaponInfusionType::Standard }, // Battle Axe
    { 0x000AB2AC, WeaponInfusionType::Crystal }, // Crystal Battle Axe
    { 0x000AB310, WeaponInfusionType::Lightning }, // Lightning Battle Axe
    { 0x000AB374, WeaponInfusionType::Raw }, // Raw Battle Axe
    { 0x000AB3D8, WeaponInfusionType::Magic }, // Magic Battle Axe
    { 0x000AB43C, WeaponInfusionType::Enchanted }, // Enchanted Battle Axe
    { 0x000AB4A0, WeaponInfusionType::Divine }, // Divine Battle Axe
    { 0x000AB504, WeaponInfusionType::Occult }, // Occult Battle Axe
    { 0x000AB568, WeaponInfusionType::Fire }, // Fire Battle Axe
    { 0x000AB5CC, WeaponInfusionType::Chaos }, // Chaos Battle Axe
    { 0x000AB630, WeaponInfusionType::Standard }, // Crescent Axe
    { 0x000AB694, WeaponInfusionType::Crystal }, // Crystal Crescent Axe
    { 0x000AB6F8, WeaponInfusionType::Lightning }, // Lightning Crescent Axe
    { 0x000AB75C, WeaponInfusionType::Raw }, // Raw Crescent Axe
    { 0x000AB7C0, WeaponInfusionType::Magic }, // Magic Crescent Axe
    { 0x000AB824, WeaponInfusionType::Enchanted }, // Enchanted Crescent Axe
    { 0x000AB888, WeaponInfusionType::Divine }, // Divine Crescent Axe
    { 0x000AB8EC, WeaponInfusionType::Occult }, // Occult Crescent Axe
    { 0x000AB950, WeaponInfusionType::Fire }, // Fire Crescent Axe
    { 0x000AB9B4, WeaponInfusionType::Chaos }, // Chaos Crescent Axe
    { 0x000ABA18, WeaponInfusionType::Standard }, // Butcher Knife
    { 0x000ABA7C, WeaponInfusionType::Crystal }, // Crystal Butcher Knife
    { 0x000ABAE0, WeaponInfusionType::Lightning }, // Lightning Butcher Knife
    { 0x000ABB44, WeaponInfusionType::Raw }, // Raw Butcher Knife
    { 0x000ABBA8, WeaponInfusionType::Magic }, // Magic Butcher Knife
    { 0x000ABC0C, WeaponInfusionType::Enchanted }, // Enchanted Butcher Knife
    { 0x000ABC70, WeaponInfusionType::Divine }, // Divine Butcher Knife
    { 0x000ABCD4, WeaponInfusionType::Occult }, // Occult Butcher Knife
    { 0x000ABD38, WeaponInfusionType::Fire }, // Fire Butcher Knife
    { 0x000ABD9C, WeaponInfusionType::Chaos }, // Chaos Butcher Knife
    { 0x000AC1E8, WeaponInfusionType::Standard }, // Gargoyle Tail Axe
    { 0x000AC24C, WeaponInfusionType::Crystal }, // Crystal Gargoyle Tail Axe
    { 0x000AC2B0, WeaponInfusionType::Lightning }, // Lightning Gargoyle Tail Axe
    { 0x000AC314, WeaponInfusionType::Raw }, // Raw Gargoyle Tail Axe
    { 0x000AC378, WeaponInfusionType::Magic }, // Magic Gargoyle Tail Axe
    { 0x000AC3DC, WeaponInfusionType::Enchanted }, // Enchanted Gargoyle Tail Axe
    { 0x000AC440, WeaponInfusionType::Divine }, // Divine Gargoyle Tail Axe
    { 0x000AC4A4, WeaponInfusionType::Occult }, // Occult Gargoyle Tail Axe
    { 0x000AC508, WeaponInfusionType::Fire }, // Fire Gargoyle Tail Axe
    { 0x000AC56C, WeaponInfusionType::Chaos }, // Chaos Gargoyle Tail Axe
    { 0x000B71B0, WeaponInfusionType::Standard }, // Greataxe
    { 0x000B7214, WeaponInfusionType::Crystal }, // Crystal Greataxe
    { 0x000B7278, WeaponInfusionType::Lightning }, // Lightning Greataxe
    { 0x000B72DC, WeaponInfusionType::Raw }, // Raw Greataxe
    { 0x000B7340, WeaponInfusionType::Magic }, // Magic Greataxe
    { 0x000B73A4, WeaponInfusionType::Enchanted }, // Enchanted Greataxe
    { 0x000B7408, WeaponInfusionType::Divine }, // Divine Greataxe
    { 0x000B746C, WeaponInfusionType::Occult }, // Occult Greataxe
    { 0x000B74D0, WeaponInfusionType::Fire }, // Fire Greataxe
    { 0x000B7534, WeaponInfusionType::Chaos }, // Chaos Greataxe
    { 0x000B7598, WeaponInfusionType::Standard }, // Demon's Greataxe
    { 0x000B75FC, WeaponInfusionType::Crystal }, // Crystal Demon's Greataxe
    { 0x000B7660, WeaponInfusionType::Lightning }, // Lightning Demon's Greataxe
    { 0x000B76C4, WeaponInfusionType::Raw }, // Raw Demon's Greataxe
    { 0x000B7728, WeaponInfusionType::Magic }, // Magic Demon's Greataxe
    { 0x000B778C, WeaponInfusionType::Enchanted }, // Enchanted Demon's Greataxe
    { 0x000B77F0, WeaponInfusionType::Divine }, // Divine Demon's Greataxe
    { 0x000B7854, WeaponInfusionType::Occult }, // Occult Demon's Greataxe
    { 0x000B78B8, WeaponInfusionType::Fire }, // Fire Demon's Greataxe
    { 0x000B791C, WeaponInfusionType::Chaos }, // Chaos Demon's Greataxe
    { 0x000B7980, WeaponInfusionType::Standard }, // Dragon King Greataxe
    { 0x000B7D68, WeaponInfusionType::Standard }, // Black Knight Greataxe
    { 0x000C3500, WeaponInfusionType::Standard }, // Club
    { 0x000C3564, WeaponInfusionType::Crystal }, // Crystal Club
    { 0x000C35C8, WeaponInfusionType::Lightning }, // Lightning Club
    { 0x000C362C, WeaponInfusionType::Raw }, // Raw Club
    { 0x000C3690, WeaponInfusionType::Magic }, // Magic Club
    { 0x000C36F4, WeaponInfusionType::Enchanted }, // Enchanted Club
    { 0x000C3758, WeaponInfusionType::Divine }, // Divine Club
    { 0x000C37BC, WeaponInfusionType::Occult }, // Occult Club
    { 0x000C3820, WeaponInfusionType::Fire }, // Fire Club
    { 0x000C3884, WeaponInfusionType::Chaos }, // Chaos Club
    { 0x000C38E8, WeaponInfusionType::Standard }, // Mace
    { 0x000C394C, WeaponInfusionType::Crystal }, // Crystal Mace
    { 0x000C39B0, WeaponInfusionType::Lightning }, // Lightning Mace
    { 0x000C3A14, WeaponInfusionType::Raw }, // Raw Mace
    { 0x000C3A78, WeaponInfusionType::Magic }, // Magic Mace
    { 0x000C3ADC, WeaponInfusionType::Enchanted }, // Enchanted Mace
    { 0x000C3B40, WeaponInfusionType::Divine }, // Divine Mace
    { 0x000C3BA4, WeaponInfusionType::Occult }, // Occult Mace
    { 0x000C3C08, WeaponInfusionType::Fire }, // Fire Mace
    { 0x000C3C6C, WeaponInfusionType::Chaos }, // Chaos Mace
    { 0x000C3CD0, WeaponInfusionType::Standard }, // Morning Star
    { 0x000C3D34, WeaponInfusionType::Crystal }, // Crystal Morning Star
    { 0x000C3D98, WeaponInfusionType::Lightning }, // Lightning Morning Star
    { 0x000C3DFC, WeaponInfusionType::Raw }, // Raw Morning Star
    { 0x000C3E60, WeaponInfusionType::Magic }, // Magic Morning Star
    { 0x000C3EC4, WeaponInfusionType::Enchanted }, // Enchanted Morning Star
    { 0x000C3F28, WeaponInfusionType::Divine }, // Divine Morning Star
    { 0x000C3F8C, WeaponInfusionType::Occult }, // Occult Morning Star
    { 0x000C3FF0, WeaponInfusionType::Fire }, // Fire Morning Star
    { 0x000C4054, WeaponInfusionType::Chaos }, // Chaos Morning Star
    { 0x000C40B8, WeaponInfusionType::Standard }, // Warpick
    { 0x000C411C, WeaponInfusionType::Crystal }, // Crystal Warpick
    { 0x000C4180, WeaponInfusionType::Lightning }, // Lightning Warpick
    { 0x000C41E4, WeaponInfusionType::Raw }, // Raw Warpick
    { 0x000C4248, WeaponInfusionType::Magic }, // Magic Warpick
    { 0x000C42AC, WeaponInfusionType::Enchanted }, // Enchanted Warpick
    { 0x000C4310, WeaponInfusionType::Divine }, // Divine Warpick
    { 0x000C4374, WeaponInfusionType::Occult }, // Occult Warpick
    { 0x000C43D8, WeaponInfusionType::Fire }, // Fire Warpick
    { 0x000C443C, WeaponInfusionType::Chaos }, // Chaos Warpick
    { 0x000C44A0, WeaponInfusionType::Standard }, // Pickaxe
    { 0x000C4504, WeaponInfusionType::Crystal }, // Crystal Pickaxe
    { 0x000C4568, WeaponInfusionType::Lightning }, // Lightning Pickaxe
    { 0x000C45CC, WeaponInfusionType::Raw }, // Raw Pickaxe
    { 0x000C4630, WeaponInfusionType::Magic }, // Magic Pickaxe
    { 0x000C4694, WeaponInfusionType::Enchanted }, // Enchanted Pickaxe
    { 0x000C46F8, WeaponInfusionType::Divine }, // Divine Pickaxe
    { 0x000C475C, WeaponInfusionType::Occult }, // Occult Pickaxe
    { 0x000C47C0, WeaponInfusionType::Fire }, // Fire Pickaxe
    { 0x000C4824, WeaponInfusionType::Chaos }, // Chaos Pickaxe
    { 0x000C5828, WeaponInfusionType::Standard }, // Reinforced Club
    { 0x000C588C, WeaponInfusionType::Crystal }, // Crystal Reinforced Club
    { 0x000C58F0, WeaponInfusionType::Lightning }, // Lightning Reinforced Club
    { 0x000C5954, WeaponInfusionType::Raw }, // Raw Reinforced Club
    { 0x000C59B8, WeaponInfusionType::Magic }, // Magic Reinforced Club
    { 0x000C5A1C, WeaponInfusionType::Enchanted }, // Enchanted Reinforced Club
    { 0x000C5A80, WeaponInfusionType::Divine }, // Divine Reinforced Club
    { 0x000C5AE4, WeaponInfusionType::Occult }, // Occult Reinforced Club
    { 0x000C5B48, WeaponInfusionType::Fire }, // Fire Reinforced Club
    { 0x000C5BAC, WeaponInfusionType::Chaos }, // Chaos Reinforced Club
    { 0x000C5C10, WeaponInfusionType::Standard }, // Blacksmith Hammer
    { 0x000C5C74, WeaponInfusionType::Crystal }, // Crystal Blacksmith Hammer
    { 0x000C5CD8, WeaponInfusionType::Lightning }, // Lightning Blacksmith Hammer
    { 0x000C5D3C, WeaponInfusionType::Raw }, // Raw Blacksmith Hammer
    { 0x000C5DA0, WeaponInfusionType::Magic }, // Magic Blacksmith Hammer
    { 0x000C5E04, WeaponInfusionType::Enchanted }, // Enchanted Blacksmith Hammer
    { 0x000C5E68, WeaponInfusionType::Divine }, // Divine Blacksmith Hammer
    { 0x000C5ECC, WeaponInfusionType::Occult }, // Occult Blacksmith Hammer
    { 0x000C5F30, WeaponInfusionType::Fire }, // Fire Blacksmith Hammer
    { 0x000C5F94, WeaponInfusionType::Chaos }, // Chaos Blacksmith Hammer
    { 0x000C5FF8, WeaponInfusionType::Standard }, // Blacksmith Giant Hammer
    { 0x000C605C, WeaponInfusionType::Crystal }, // Crystal Blacksmith Giant Hammer
    { 0x000C60C0, WeaponInfusionType::Lightning }, // Lightning Blacksmith Giant Hammer
    { 0x000C6124, WeaponInfusionType::Raw }, // Raw Blacksmith Giant Hammer
    { 0x000C6188, WeaponInfusionType::Magic }, // Magic Blacksmith Giant Hammer
    { 0x000C61EC, WeaponInfusionType::Enchanted }, // Enchanted Blacksmith Giant Hammer
    { 0x000C6250, WeaponInfusionType::Divine }, // Divine Blacksmith Giant Hammer
    { 0x000C62B4, WeaponInfusionType::Occult }, // Occult Blacksmith Giant Hammer
    { 0x000C6318, WeaponInfusionType::Fire }, // Fire Blacksmith Giant Hammer
    { 0x000C637C, WeaponInfusionType::Chaos }, // Chaos Blacksmith Giant Hammer
    { 0x000C63E0, WeaponInfusionType::Standard }, // Hammer of Vamos
    { 0x000C6444, WeaponInfusionType::Crystal }, // Crystal Hammer of Vamos
    { 0x000C64A8, WeaponInfusionType::Lightning }, // Lightning Hammer of Vamos
    { 0x000C650C, WeaponInfusionType::Raw }, // Raw Hammer of Vamos
    { 0x000C6570, WeaponInfusionType::Magic }, // Magic Hammer of Vamos
    { 0x000C65D4, WeaponInfusionType::Enchanted }, // Enchanted Hammer of Vamos
    { 0x000C6638, WeaponInfusionType::Divine }, // Divine Hammer of Vamos
    { 0x000C669C, WeaponInfusionType::Occult }, // Occult Hammer of Vamos
    { 0x000C6700, WeaponInfusionType::Fire }, // Fire Hammer of Vamos
    { 0x000C6764, WeaponInfusionType::Chaos }, // Chaos Hammer of Vamos
    { 0x000CF850, WeaponInfusionType::Standard }, // Great Club
    { 0x000CF8B4, WeaponInfusionType::Crystal }, // Crystal Great Club
    { 0x000CF918, WeaponInfusionType::Lightning }, // Lightning Great Club
    { 0x000CF97C, WeaponInfusionType::Raw }, // Raw Great Club
    { 0x000CF9E0, WeaponInfusionType::Magic }, // Magic Great Club
    { 0x000CFA44, WeaponInfusionType::Enchanted }, // Enchanted Great Club
    { 0x000CFAA8, WeaponInfusionType::Divine }, // Divine Great Club
    { 0x000CFB0C, WeaponInfusionType::Occult }, // Occult Great Club
    { 0x000CFB70, WeaponInfusionType::Fire }, // Fire Great Club
    { 0x000CFBD4, WeaponInfusionType::Chaos }, // Chaos Great Club
    { 0x000CFC38, WeaponInfusionType::Standard }, // Grant
    { 0x000D0020, WeaponInfusionType::Standard }, // Demon's Great Hammer
    { 0x000D0084, WeaponInfusionType::Crystal }, // Crystal Demon's Great Hammer
    { 0x000D00E8, WeaponInfusionType::Lightning }, // Lightning Demon's Great Hammer
    { 0x000D014C, WeaponInfusionType::Raw }, // Raw Demon's Great Hammer
    { 0x000D01B0, WeaponInfusionType::Magic }, // Magic Demon's Great Hammer
    { 0x000D0214, WeaponInfusionType::Enchanted }, // Enchanted Demon's Great Hammer
    { 0x000D0278, WeaponInfusionType::Divine }, // Divine Demon's Great Hammer
    { 0x000D02DC, WeaponInfusionType::Occult }, // Occult Demon's Great Hammer
    { 0x000D0340, WeaponInfusionType::Fire }, // Fire Demon's Great Hammer
    { 0x000D03A4, WeaponInfusionType::Chaos }, // Chaos Demon's Great Hammer
    { 0x000D07F0, WeaponInfusionType::Standard }, // Dragon Tooth
    { 0x000D0BD8, WeaponInfusionType::Standard }, // Large Club
    { 0x000D0C3C, WeaponInfusionType::Crystal }, // Crystal Large Club
    { 0x000D0CA0, WeaponInfusionType::Lightning }, // Lightning Large Club
    { 0x000D0D04, WeaponInfusionType::Raw }, // Raw Large Club
    { 0x000D0D68, WeaponInfusionType::Magic }, // Magic Large Club
    { 0x000D0DCC, WeaponInfusionType::Enchanted }, // Enchanted Large Club
    { 0x000D0E30, WeaponInfusionType::Divine }, // Divine Large Club
    { 0x000D0E94, WeaponInfusionType::Occult }, // Occult Large Club
    { 0x000D0EF8, WeaponInfusionType::Fire }, // Fire Large Club
    { 0x000D0F5C, WeaponInfusionType::Chaos }, // Chaos Large Club
    { 0x000DBBA0, WeaponInfusionType::Standard }, // Fists
    { 0x000DBF88, WeaponInfusionType::Standard }, // Caestus
    { 0x000DBFEC, WeaponInfusionType::Crystal }, // Crystal Caestus
    { 0x000DC050, WeaponInfusionType::Lightning }, // Lightning Caestus
    { 0x000DC0B4, WeaponInfusionType::Raw }, // Raw Caestus
    { 0x000DC118, WeaponInfusionType::Magic }, // Magic Caestus
    { 0x000DC17C, WeaponInfusionType::Enchanted }, // Enchanted Caestus
    { 0x000DC1E0, WeaponInfusionType::Divine }, // Divine Caestus
    { 0x000DC244, WeaponInfusionType::Occult }, // Occult Caestus
    { 0x000DC2A8, WeaponInfusionType::Fire }, // Fire Caestus
    { 0x000DC30C, WeaponInfusionType::Chaos }, // Chaos Caestus
    { 0x000DC370, WeaponInfusionType::Standard }, // Claw
    { 0x000DC3D4, WeaponInfusionType::Crystal }, // Crystal Claw
    { 0x000DC438, WeaponInfusionType::Lightning }, // Lightning Claw
    { 0x000DC49C, WeaponInfusionType::Raw }, // Raw Claw
    { 0x000DC500, WeaponInfusionType::Magic }, // Magic Claw
    { 0x000DC564, WeaponInfusionType::Enchanted }, // Enchanted Claw
    { 0x000DC5C8, WeaponInfusionType::Divine }, // Divine Claw
    { 0x000DC62C, WeaponInfusionType::Occult }, // Occult Claw
    { 0x000DC690, WeaponInfusionType::Fire }, // Fire Claw
    { 0x000DC6F4, WeaponInfusionType::Chaos }, // Chaos Claw
    { 0x000DCB40, WeaponInfusionType::Standard }, // Dark Hand
    { 0x000F4240, WeaponInfusionType::Standard }, // Spear
    { 0x000F42A4, WeaponInfusionType::Crystal }, // Crystal Spear
    { 0x000F4308, WeaponInfusionType::Lightning }, // Lightning Spear
    { 0x000F436C, WeaponInfusionType::Raw }, // Raw Spear
    { 0x000F43D0, WeaponInfusionType::Magic }, // Magic Spear
    { 0x000F4434, WeaponInfusionType::Enchanted }, // Enchanted Spear
    { 0x000F4498, WeaponInfusionType::Divine }, // Divine Spear
    { 0x000F44FC, WeaponInfusionType::Occult }, // Occult Spear
    { 0x000F4560, WeaponInfusionType::Fire }, // Fire Spear
    { 0x000F45C4, WeaponInfusionType::Chaos }, // Chaos Spear
    { 0x000F4628, WeaponInfusionType::Standard }, // Winged Spear
    { 0x000F468C, WeaponInfusionType::Crystal }, // Crystal Winged Spear
    { 0x000F46F0, WeaponInfusionType::Lightning }, // Lightning Winged Spear
    { 0x000F4754, WeaponInfusionType::Raw }, // Raw Winged Spear
    { 0x000F47B8, WeaponInfusionType::Magic }, // Magic Winged Spear
    { 0x000F481C, WeaponInfusionType::Enchanted }, // Enchanted Winged Spear
    { 0x000F4880, WeaponInfusionType::Divine }, // Divine Winged Spear
    { 0x000F48E4, WeaponInfusionType::Occult }, // Occult Winged Spear
    { 0x000F4948, WeaponInfusionType::Fire }, // Fire Winged Spear
    { 0x000F49AC, WeaponInfusionType::Chaos }, // Chaos Winged Spear
    { 0x000F4A10, WeaponInfusionType::Standard }, // Partizan
    { 0x000F4A74, WeaponInfusionType::Crystal }, // Crystal Partizan
    { 0x000F4AD8, WeaponInfusionType::Lightning }, // Lightning Partizan
    { 0x000F4B3C, WeaponInfusionType::Raw }, // Raw Partizan
    { 0x000F4BA0, WeaponInfusionType::Magic }, // Magic Partizan
    { 0x000F4C04, WeaponInfusionType::Enchanted }, // Enchanted Partizan
    { 0x000F4C68, WeaponInfusionType::Divine }, // Divine Partizan
    { 0x000F4CCC, WeaponInfusionType::Occult }, // Occult Partizan
    { 0x000F4D30, WeaponInfusionType::Fire }, // Fire Partizan
    { 0x000F4D94, WeaponInfusionType::Chaos }, // Chaos Partizan
    { 0x000F4DF8, WeaponInfusionType::Standard }, // Demon's Spear
    { 0x000F4E5C, WeaponInfusionType::Crystal }, // Crystal Demon's Spear
    { 0x000F4EC0, WeaponInfusionType::Lightning }, // Lightning Demon's Spear
    { 0x000F4F24, WeaponInfusionType::Raw }, // Raw Demon's Spear
    { 0x000F4F88, WeaponInfusionType::Magic }, // Magic Demon's Spear
    { 0x000F4FEC, WeaponInfusionType::Enchanted }, // Enchanted Demon's Spear
    { 0x000F5050, WeaponInfusionType::Divine }, // Divine Demon's Spear
    { 0x000F50B4, WeaponInfusionType::Occult }, // Occult Demon's Spear
    { 0x000F5118, WeaponInfusionType::Fire }, // Fire Demon's Spear
    { 0x000F517C, WeaponInfusionType::Chaos }, // Chaos Demon's Spear
    { 0x000F51E0, WeaponInfusionType::Standard }, // Channeler's Trident
    { 0x000F5244, WeaponInfusionType::Crystal }, // Crystal Channeler's Trident
    { 0x000F52A8, WeaponInfusionType::Lightning }, // Lightning Channeler's Trident
    { 0x000F530C, WeaponInfusionType::Raw }, // Raw Channeler's Trident
    { 0x000F5370, WeaponInfusionType::Magic }, // Magic Channeler's Trident
    { 0x000F53D4, WeaponInfusionType::Enchanted }, // Enchanted Channeler's Trident
    { 0x000F5438, WeaponInfusionType::Divine }, // Divine Channeler's Trident
    { 0x000F549C, WeaponInfusionType::Occult }, // Occult Channeler's Trident
    { 0x000F5500, WeaponInfusionType::Fire }, // Fire Channeler's Trident
    { 0x000F5564, WeaponInfusionType::Chaos }, // Chaos Channeler's Trident
    { 0x00100590, WeaponInfusionType::Standard }, // Pike
    { 0x001005F4, WeaponInfusionType::Crystal }, // Crystal Pike
    { 0x00100658, WeaponInfusionType::Lightning }, // Lightning Pike
    { 0x001006BC, WeaponInfusionType::Raw }, // Raw Pike
    { 0x00100720, WeaponInfusionType::Magic }, // Magic Pike
    { 0x00100784, WeaponInfusionType::Enchanted }, // Enchanted Pike
    { 0x001007E8, WeaponInfusionType::Divine }, // Divine Pike
    { 0x0010084C, WeaponInfusionType::Occult }, // Occult Pike
    { 0x001008B0, WeaponInfusionType::Fire }, // Fire Pike
    { 0x00100914, WeaponInfusionType::Chaos }, // Chaos Pike
    { 0x0010C8E0, WeaponInfusionType::Standard }, // Halberd
    { 0x0010C944, WeaponInfusionType::Crystal }, // Crystal Halberd
    { 0x0010C9A8, WeaponInfusionType::Lightning }, // Lightning Halberd
    { 0x0010CA0C, WeaponInfusionType::Raw }, // Raw Halberd
    { 0x0010CA70, WeaponInfusionType::Magic }, // Magic Halberd
    { 0x0010CAD4, WeaponInfusionType::Enchanted }, // Enchanted Halberd
    { 0x0010CB38, WeaponInfusionType::Divine }, // Divine Halberd
    { 0x0010CB9C, WeaponInfusionType::Occult }, // Occult Halberd
    { 0x0010CC00, WeaponInfusionType::Fire }, // Fire Halberd
    { 0x0010CC64, WeaponInfusionType::Chaos }, // Chaos Halberd
    { 0x0010CCC8, WeaponInfusionType::Standard }, // Giant's Halberd
    { 0x0010CD2C, WeaponInfusionType::Crystal }, // Crystal Giant's Halberd
    { 0x0010CD90, WeaponInfusionType::Lightning }, // Lightning Giant's Halberd
    { 0x0010CDF4, WeaponInfusionType::Raw }, // Raw Giant's Halberd
    { 0x0010CE58, WeaponInfusionType::Magic }, // Magic Giant's Halberd
    { 0x0010CEBC, WeaponInfusionType::Enchanted }, // Enchanted Giant's Halberd
    { 0x0010CF20, WeaponInfusionType::Divine }, // Divine Giant's Halberd
    { 0x0010CF84, WeaponInfusionType::Occult }, // Occult Giant's Halberd
    { 0x0010CFE8, WeaponInfusionType::Fire }, // Fire Giant's Halberd
    { 0x0010D04C, WeaponInfusionType::Chaos }, // Chaos Giant's Halberd
    { 0x0010D498, WeaponInfusionType::Standard }, // Gargoyle's Halberd
    { 0x0010D4FC, WeaponInfusionType::Crystal }, // Crystal Gargoyle's Halberd
    { 0x0010D560, WeaponInfusionType::Lightning }, // Lightning Gargoyle's Halberd
    { 0x0010D5C4, WeaponInfusionType::Raw }, // Raw Gargoyle's Halberd
    { 0x0010D628, WeaponInfusionType::Magic }, // Magic Gargoyle's Halberd
    { 0x0010D68C, WeaponInfusionType::Enchanted }, // Enchanted Gargoyle's Halberd
    { 0x0010D6F0, WeaponInfusionType::Divine }, // Divine Gargoyle's Halberd
    { 0x0010D754, WeaponInfusionType::Occult }, // Occult Gargoyle's Halberd
    { 0x0010D7B8, WeaponInfusionType::Fire }, // Fire Gargoyle's Halberd
    { 0x0010D81C, WeaponInfusionType::Chaos }, // Chaos Gargoyle's Halberd
    { 0x0010E050, WeaponInfusionType::Standard }, // Lucerne
    { 0x0010E0B4, WeaponInfusionType::Crystal }, // Crystal Lucerne
    { 0x0010E118, WeaponInfusionType::Lightning }, // Lightning Lucerne
    { 0x0010E17C, WeaponInfusionType::Raw }, // Raw Lucerne
    { 0x0010E1E0, WeaponInfusionType::Magic }, // Magic Lucerne
    { 0x0010E244, WeaponInfusionType::Enchanted }, // Enchanted Lucerne
    { 0x0010E2A8, WeaponInfusionType::Divine }, // Divine Lucerne
    { 0x0010E30C, WeaponInfusionType::Occult }, // Occult Lucerne
    { 0x0010E370, WeaponInfusionType::Fire }, // Fire Lucerne
    { 0x0010E3D4, WeaponInfusionType::Chaos }, // Chaos Lucerne
    { 0x0010E438, WeaponInfusionType::Standard }, // Scythe
    { 0x0010E49C, WeaponInfusionType::Crystal }, // Crystal Scythe
    { 0x0010E500, WeaponInfusionType::Lightning }, // Lightning Scythe
    { 0x0010E564, WeaponInfusionType::Raw }, // Raw Scythe
    { 0x0010E5C8, WeaponInfusionType::Magic }, // Magic Scythe
    { 0x0010E62C, WeaponInfusionType::Enchanted }, // Enchanted Scythe
    { 0x0010E690, WeaponInfusionType::Divine }, // Divine Scythe
    { 0x0010E6F4, WeaponInfusionType::Occult }, // Occult Scythe
    { 0x0010E758, WeaponInfusionType::Fire }, // Fire Scythe
    { 0x0010E7BC, WeaponInfusionType::Chaos }, // Chaos Scythe
    { 0x00118C30, WeaponInfusionType::Standard }, // Great Scythe
    { 0x00118C94, WeaponInfusionType::Crystal }, // Crystal Great Scythe
    { 0x00118CF8, WeaponInfusionType::Lightning }, // Lightning Great Scythe
    { 0x00118D5C, WeaponInfusionType::Raw }, // Raw Great Scythe
    { 0x00118DC0, WeaponInfusionType::Magic }, // Magic Great Scythe
    { 0x00118E24, WeaponInfusionType::Enchanted }, // Enchanted Great Scythe
    { 0x00118E88, WeaponInfusionType::Divine }, // Divine Great Scythe
    { 0x00118EEC, WeaponInfusionType::Occult }, // Occult Great Scythe
    { 0x00118F50, WeaponInfusionType::Fire }, // Fire Great Scythe
    { 0x00118FB4, WeaponInfusionType::Chaos }, // Chaos Great Scythe
    { 0x00124F80, WeaponInfusionType::Standard }, // Short Bow
    { 0x00124FE4, WeaponInfusionType::Crystal }, // Crystal Short Bow
    { 0x00125048, WeaponInfusionType::Lightning }, // Lightning Short Bow
    { 0x001250AC, WeaponInfusionType::Raw }, // Raw Short Bow
    { 0x00125110, WeaponInfusionType::Magic }, // Magic Short Bow
    { 0x00125174, WeaponInfusionType::Enchanted }, // Enchanted Short Bow
    { 0x001251D8, WeaponInfusionType::Divine }, // Divine Short Bow
    { 0x0012523C, WeaponInfusionType::Occult }, // Occult Short Bow
    { 0x001252A0, WeaponInfusionType::Fire }, // Fire Short Bow
    { 0x00125304, WeaponInfusionType::Chaos }, // Chaos Short Bow
    { 0x00125368, WeaponInfusionType::Standard }, // Longbow
    { 0x001253CC, WeaponInfusionType::Crystal }, // Crystal Longbow
    { 0x00125430, WeaponInfusionType::Lightning }, // Lightning Longbow
    { 0x00125494, WeaponInfusionType::Raw }, // Raw Longbow
    { 0x001254F8, WeaponInfusionType::Magic }, // Magic Longbow
    { 0x0012555C, WeaponInfusionType::Enchanted }, // Enchanted Longbow
    { 0x001255C0, WeaponInfusionType::Divine }, // Divine Longbow
    { 0x00125624, WeaponInfusionType::Occult }, // Occult Longbow
    { 0x00125688, WeaponInfusionType::Fire }, // Fire Longbow
    { 0x001256EC, WeaponInfusionType::Chaos }, // Chaos Longbow
    { 0x00125750, WeaponInfusionType::Standard }, // Black Bow of Pharis
    { 0x001257B4, WeaponInfusionType::Crystal }, // Crystal Black Bow of Pharis
    { 0x00125818, WeaponInfusionType::Lightning }, // Lightning Black Bow of Pharis
    { 0x0012587C, WeaponInfusionType::Raw }, // Raw Black Bow of Pharis
    { 0x001258E0, WeaponInfusionType::Magic }, // Magic Black Bow of Pharis
    { 0x00125944, WeaponInfusionType::Enchanted }, // Enchanted Black Bow of Pharis
    { 0x001259A8, WeaponInfusionType::Divine }, // Divine Black Bow of Pharis
    { 0x00125A0C, WeaponInfusionType::Occult }, // Occult Black Bow of Pharis
    { 0x00125A70, WeaponInfusionType::Fire }, // Fire Black Bow of Pharis
    { 0x00125AD4, WeaponInfusionType::Chaos }, // Chaos Black Bow of Pharis
    { 0x00125B38, WeaponInfusionType::Standard }, // Dragonslayer Greatbow
    { 0x00125F20, WeaponInfusionType::Standard }, // Composite Bow
    { 0x00125F84, WeaponInfusionType::Crystal }, // Crystal Composite Bow
    { 0x00125FE8, WeaponInfusionType::Lightning }, // Lightning Composite Bow
    { 0x0012604C, WeaponInfusionType::Raw }, // Raw Composite Bow
    { 0x001260B0, WeaponInfusionType::Magic }, // Magic Composite Bow
    { 0x00126114, WeaponInfusionType::Enchanted }, // Enchanted Composite Bow
    { 0x00126178, WeaponInfusionType::Divine }, // Divine Composite Bow
    { 0x001261DC, WeaponInfusionType::Occult }, // Occult Composite Bow
    { 0x00126240, WeaponInfusionType::Fire }, // Fire Composite Bow
    { 0x001262A4, WeaponInfusionType::Chaos }, // Chaos Composite Bow
    { 0x001312D0, WeaponInfusionType::Standard }, // Light Crossbow
    { 0x00131334, WeaponInfusionType::Crystal }, // Crystal Light Crossbow
    { 0x00131398, WeaponInfusionType::Lightning }, // Lightning Light Crossbow
    { 0x00131460, WeaponInfusionType::Magic }, // Magic Light Crossbow
    { 0x00131528, WeaponInfusionType::Divine }, // Divine Light Crossbow
    { 0x001315F0, WeaponInfusionType::Fire }, // Fire Light Crossbow
    { 0x001316B8, WeaponInfusionType::Standard }, // Heavy Crossbow
    { 0x0013171C, WeaponInfusionType::Crystal }, // Crystal Heavy Crossbow
    { 0x00131780, WeaponInfusionType::Lightning }, // Lightning Heavy Crossbow
    { 0x00131848, WeaponInfusionType::Magic }, // Magic Heavy Crossbow
    { 0x00131910, WeaponInfusionType::Divine }, // Divine Heavy Crossbow
    { 0x001319D8, WeaponInfusionType::Fire }, // Fire Heavy Crossbow
    { 0x00131AA0, WeaponInfusionType::Standard }, // Avelyn
    { 0x00131B04, WeaponInfusionType::Crystal }, // Crystal Avelyn
    { 0x00131B68, WeaponInfusionType::Lightning }, // Lightning Avelyn
    { 0x00131C30, WeaponInfusionType::Magic }, // Magic Avelyn
    { 0x00131CF8, WeaponInfusionType::Divine }, // Divine Avelyn
    { 0x00131DC0, WeaponInfusionType::Fire }, // Fire Avelyn
    { 0x00131E88, WeaponInfusionType::Standard }, // Sniper Crossbow
    { 0x00131EEC, WeaponInfusionType::Crystal }, // Crystal Sniper Crossbow
    { 0x00131F50, WeaponInfusionType::Lightning }, // Lightning Sniper Crossbow
    { 0x00132018, WeaponInfusionType::Magic }, // Magic Sniper Crossbow
    { 0x001320E0, WeaponInfusionType::Divine }, // Divine Sniper Crossbow
    { 0x001321A8, WeaponInfusionType::Fire }, // Fire Sniper Crossbow
    { 0x00144B50, WeaponInfusionType::Standard }, // Pyromancy Flame
    { 0x00145320, WeaponInfusionType::Standard }, // Pyromancy Flame
    { 0x00155CC0, WeaponInfusionType::Standard }, // East-West Shield
    { 0x00155D24, WeaponInfusionType::Crystal }, // Crystal East-West Shield
    { 0x00155D88, WeaponInfusionType::Lightning }, // Lightning East-West Shield
    { 0x00155E50, WeaponInfusionType::Magic }, // Magic East-West Shield
    { 0x00155F18, WeaponInfusionType::Divine }, // Divine East-West Shield
    { 0x00155FE0, WeaponInfusionType::Fire }, // Fire East-West Shield
    { 0x001560A8, WeaponInfusionType::Standard }, // Wooden Shield
    { 0x0015610C, WeaponInfusionType::Crystal }, // Crystal Wooden Shield
    { 0x00156170, WeaponInfusionType::Lightning }, // Lightning Wooden Shield
    { 0x00156238, WeaponInfusionType::Magic }, // Magic Wooden Shield
    { 0x00156300, WeaponInfusionType::Divine }, // Divine Wooden Shield
    { 0x001563C8, WeaponInfusionType::Fire }, // Fire Wooden Shield
    { 0x00156490, WeaponInfusionType::Standard }, // Large Leather Shield
    { 0x001564F4, WeaponInfusionType::Crystal }, // Crystal Large Leather Shield
    { 0x00156558, WeaponInfusionType::Lightning }, // Lightning Large Leather Shield
    { 0x00156620, WeaponInfusionType::Magic }, // Magic Large Leather Shield
    { 0x001566E8, WeaponInfusionType::Divine }, // Divine Large Leather Shield
    { 0x001567B0, WeaponInfusionType::Fire }, // Fire Large Leather Shield
    { 0x00156878, WeaponInfusionType::Standard }, // Small Leather Shield
    { 0x001568DC, WeaponInfusionType::Crystal }, // Crystal Small Leather Shield
    { 0x00156940, WeaponInfusionType::Lightning }, // Lightning Small Leather Shield
    { 0x00156A08, WeaponInfusionType::Magic }, // Magic Small Leather Shield
    { 0x00156AD0, WeaponInfusionType::Divine }, // Divine Small Leather Shield
    { 0x00156B98, WeaponInfusionType::Fire }, // Fire Small Leather Shield
    { 0x00156C60, WeaponInfusionType::Standard }, // Target Shield
    { 0x00156CC4, WeaponInfusionType::Crystal }, // Crystal Target Shield
    { 0x00156D28, WeaponInfusionType::Lightning }, // Lightning Target Shield
    { 0x00156DF0, WeaponInfusionType::Magic }, // Magic Target Shield
    { 0x00156EB8, WeaponInfusionType::Divine }, // Divine Target Shield
    { 0x00156F80, WeaponInfusionType::Fire }, // Fire Target Shield
    { 0x00157048, WeaponInfusionType::Standard }, // Buckler
    { 0x001570AC, WeaponInfusionType::Crystal }, // Crystal Buckler
    { 0x00157110, WeaponInfusionType::Lightning }, // Lightning Buckler
    { 0x001571D8, WeaponInfusionType::Magic }, // Magic Buckler
    { 0x001572A0, WeaponInfusionType::Divine }, // Divine Buckler
    { 0x00157368, WeaponInfusionType::Fire }, // Fire Buckler
    { 0x00157430, WeaponInfusionType::Standard }, // Cracked Round Shield
    { 0x00157494, WeaponInfusionType::Crystal }, // Crystal Cracked Round Shield
    { 0x001574F8, WeaponInfusionType::Lightning }, // Lightning Cracked Round Shield
    { 0x001575C0, WeaponInfusionType::Magic }, // Magic Cracked Round Shield
    { 0x00157688, WeaponInfusionType::Divine }, // Divine Cracked Round Shield
    { 0x00157750, WeaponInfusionType::Fire }, // Fire Cracked Round Shield
    { 0x00157C00, WeaponInfusionType::Standard }, // Leather Shield
    { 0x00157C64, WeaponInfusionType::Crystal }, // Crystal Leather Shield
    { 0x00157CC8, WeaponInfusionType::Lightning }, // Lightning Leather Shield
    { 0x00157D90, WeaponInfusionType::Magic }, // Magic Leather Shield
    { 0x00157E58, WeaponInfusionType::Divine }, // Divine Leather Shield
    { 0x00157F20, WeaponInfusionType::Fire }, // Fire Leather Shield
    { 0x00157FE8, WeaponInfusionType::Standard }, // Plank Shield
    { 0x0015804C, WeaponInfusionType::Crystal }, // Crystal Plank Shield
    { 0x001580B0, WeaponInfusionType::Lightning }, // Lightning Plank Shield
    { 0x00158178, WeaponInfusionType::Magic }, // Magic Plank Shield
    { 0x00158240, WeaponInfusionType::Divine }, // Divine Plank Shield
    { 0x00158308, WeaponInfusionType::Fire }, // Fire Plank Shield
    { 0x001583D0, WeaponInfusionType::Standard }, // Caduceus Round Shield
    { 0x00158434, WeaponInfusionType::Crystal }, // Crystal Caduceus Round Shield
    { 0x00158498, WeaponInfusionType::Lightning }, // Lightning Caduceus Round Shield
    { 0x00158560, WeaponInfusionType::Magic }, // Magic Caduceus Round Shield
    { 0x00158628, WeaponInfusionType::Divine }, // Divine Caduceus Round Shield
    { 0x001586F0, WeaponInfusionType::Fire }, // Fire Caduceus Round Shield
    { 0x00162010, WeaponInfusionType::Standard }, // Heater Shield
    { 0x00162074, WeaponInfusionType::Crystal }, // Crystal Heater Shield
    { 0x001620D8, WeaponInfusionType::Lightning }, // Lightning Heater Shield
    { 0x001621A0, WeaponInfusionType::Magic }, // Magic Heater Shield
    { 0x00162268, WeaponInfusionType::Divine }, // Divine Heater Shield
    { 0x00162330, WeaponInfusionType::Fire }, // Fire Heater Shield
    { 0x001623F8, WeaponInfusionType::Standard }, // Knight Shield
    { 0x0016245C, WeaponInfusionType::Crystal }, // Crystal Knight Shield
    { 0x001624C0, WeaponInfusionType::Lightning }, // Lightning Knight Shield
    { 0x00162588, WeaponInfusionType::Magic }, // Magic Knight Shield
    { 0x00162650, WeaponInfusionType::Divine }, // Divine Knight Shield
    { 0x00162718, WeaponInfusionType::Fire }, // Fire Knight Shield
    { 0x001627E0, WeaponInfusionType::Standard }, // Tower Kite Shield
    { 0x00162844, WeaponInfusionType::Crystal }, // Crystal Tower Kite Shield
    { 0x001628A8, WeaponInfusionType::Lightning }, // Lightning Tower Kite Shield
    { 0x00162970, WeaponInfusionType::Magic }, // Magic Tower Kite Shield
    { 0x00162A38, WeaponInfusionType::Divine }, // Divine Tower Kite Shield
    { 0x00162B00, WeaponInfusionType::Fire }, // Fire Tower Kite Shield
    { 0x00162BC8, WeaponInfusionType::Standard }, // Grass Crest Shield
    { 0x00162C2C, WeaponInfusionType::Crystal }, // Crystal Grass Crest Shield
    { 0x00162C90, WeaponInfusionType::Lightning }, // Lightning Grass Crest Shield
    { 0x00162D58, WeaponInfusionType::Magic }, // Magic Grass Crest Shield
    { 0x00162E20, WeaponInfusionType::Divine }, // Divine Grass Crest Shield
    { 0x00162EE8, WeaponInfusionType::Fire }, // Fire Grass Crest Shield
    { 0x00162FB0, WeaponInfusionType::Standard }, // Hollow Soldier Shield
    { 0x00163014, WeaponInfusionType::Crystal }, // Crystal Hollow Soldier Shield
    { 0x00163078, WeaponInfusionType::Lightning }, // Lightning Hollow Soldier Shield
    { 0x00163140, WeaponInfusionType::Magic }, // Magic Hollow Soldier Shield
    { 0x00163208, WeaponInfusionType::Divine }, // Divine Hollow Soldier Shield
    { 0x001632D0, WeaponInfusionType::Fire }, // Fire Hollow Soldier Shield
    { 0x00163398, WeaponInfusionType::Standard }, // Balder Shield
    { 0x001633FC, WeaponInfusionType::Crystal }, // Crystal Balder Shield
    { 0x00163460, WeaponInfusionType::Lightning }, // Lightning Balder Shield
    { 0x00163528, WeaponInfusionType::Magic }, // Magic Balder Shield
    { 0x001635F0, WeaponInfusionType::Divine }, // Divine Balder Shield
    { 0x001636B8, WeaponInfusionType::Fire }, // Fire Balder Shield
    { 0x00163780, WeaponInfusionType::Standard }, // Crest Shield
    { 0x00163B68, WeaponInfusionType::Standard }, // Dragon Crest Shield
    { 0x00164720, WeaponInfusionType::Standard }, // Warrior's Round Shield
    { 0x00164784, WeaponInfusionType::Crystal }, // Crystal Warrior's Round Shield
    { 0x001647E8, WeaponInfusionType::Lightning }, // Lightning Warrior's Round Shield
    { 0x001648B0, WeaponInfusionType::Magic }, // Magic Warrior's Round Shield
    { 0x00164978, WeaponInfusionType::Divine }, // Divine Warrior's Round Shield
    { 0x00164A40, WeaponInfusionType::Fire }, // Fire Warrior's Round Shield
    { 0x00164B08, WeaponInfusionType::Standard }, // Iron Round Shield
    { 0x00164B6C, WeaponInfusionType::Crystal }, // Crystal Iron Round Shield
    { 0x00164BD0, WeaponInfusionType::Lightning }, // Lightning Iron Round Shield
    { 0x00164C98, WeaponInfusionType::Magic }, // Magic Iron Round Shield
    { 0x00164D60, WeaponInfusionType::Divine }, // Divine Iron Round Shield
    { 0x00164E28, WeaponInfusionType::Fire }, // Fire Iron Round Shield
    { 0x00164EF0, WeaponInfusionType::Standard }, // Spider Shield
    { 0x00164F54, WeaponInfusionType::Crystal }, // Crystal Spider Shield
    { 0x00164FB8, WeaponInfusionType::Lightning }, // Lightning Spider Shield
    { 0x00165080, WeaponInfusionType::Magic }, // Magic Spider Shield
    { 0x00165148, WeaponInfusionType::Divine }, // Divine Spider Shield
    { 0x00165210, WeaponInfusionType::Fire }, // Fire Spider Shield
    { 0x00166E30, WeaponInfusionType::Standard }, // Spiked Shield
    { 0x00166E94, WeaponInfusionType::Crystal }, // Crystal Spiked Shield
    { 0x00166EF8, WeaponInfusionType::Lightning }, // Lightning Spiked Shield
    { 0x00166FC0, WeaponInfusionType::Magic }, // Magic Spiked Shield
    { 0x00167088, WeaponInfusionType::Divine }, // Divine Spiked Shield
    { 0x00167150, WeaponInfusionType::Fire }, // Fire Spiked Shield
    { 0x00167218, WeaponInfusionType::Crystal }, // Crystal Shield
    { 0x00167600, WeaponInfusionType::Standard }, // Sunlight Shield
    { 0x00167664, WeaponInfusionType::Crystal }, // Crystal Sunlight Shield
    { 0x001676C8, WeaponInfusionType::Lightning }, // Lightning Sunlight Shield
    { 0x00167790, WeaponInfusionType::Magic }, // Magic Sunlight Shield
    { 0x00167858, WeaponInfusionType::Divine }, // Divine Sunlight Shield
    { 0x00167920, WeaponInfusionType::Fire }, // Fire Sunlight Shield
    { 0x001679E8, WeaponInfusionType::Standard }, // Silver Knight Shield
    { 0x00167DD0, WeaponInfusionType::Standard }, // Black Knight Shield
    { 0x001681B8, WeaponInfusionType::Standard }, // Pierce Shield
    { 0x0016821C, WeaponInfusionType::Crystal }, // Crystal Pierce Shield
    { 0x00168280, WeaponInfusionType::Lightning }, // Lightning Pierce Shield
    { 0x00168348, WeaponInfusionType::Magic }, // Magic Pierce Shield
    { 0x00168410, WeaponInfusionType::Divine }, // Divine Pierce Shield
    { 0x001684D8, WeaponInfusionType::Fire }, // Fire Pierce Shield
    { 0x001685A0, WeaponInfusionType::Standard }, // Red and White Round Shield
    { 0x00168604, WeaponInfusionType::Crystal }, // Crystal R&amp;W Round Shield
    { 0x00168668, WeaponInfusionType::Lightning }, // Lightning R&amp;W Round Shield
    { 0x00168730, WeaponInfusionType::Magic }, // Magic R&amp;W Round Shield
    { 0x001687F8, WeaponInfusionType::Divine }, // Divine R&amp;W Round Shield
    { 0x001688C0, WeaponInfusionType::Fire }, // Fire R&amp;W Round Shield
    { 0x00168988, WeaponInfusionType::Standard }, // Caduceus Kite Shield
    { 0x001689EC, WeaponInfusionType::Crystal }, // Crystal Caduceus Kite Shield
    { 0x00168A50, WeaponInfusionType::Lightning }, // Lightning Caduceus Kite Shield
    { 0x00168B18, WeaponInfusionType::Magic }, // Magic Caduceus Kite Shield
    { 0x00168BE0, WeaponInfusionType::Divine }, // Divine Caduceus Kite Shield
    { 0x00168CA8, WeaponInfusionType::Fire }, // Fire Caduceus Kite Shield
    { 0x00168D70, WeaponInfusionType::Standard }, // Gargoyle's Shield
    { 0x00168DD4, WeaponInfusionType::Crystal }, // Crystal Gargoyle's Shield
    { 0x00168E38, WeaponInfusionType::Lightning }, // Lightning Gargoyle's Shield
    { 0x00168F00, WeaponInfusionType::Magic }, // Magic Gargoyle's Shield
    { 0x00168FC8, WeaponInfusionType::Divine }, // Divine Gargoyle's Shield
    { 0x00169090, WeaponInfusionType::Fire }, // Fire Gargoyle's Shield
    { 0x0016E360, WeaponInfusionType::Standard }, // Eagle Shield
    { 0x0016E3C4, WeaponInfusionType::Crystal }, // Crystal Eagle Shield
    { 0x0016E428, WeaponInfusionType::Lightning }, // Lightning Eagle Shield
    { 0x0016E4F0, WeaponInfusionType::Magic }, // Magic Eagle Shield
    { 0x0016E5B8, WeaponInfusionType::Divine }, // Divine Eagle Shield
    { 0x0016E680, WeaponInfusionType::Fire }, // Fire Eagle Shield
    { 0x0016E748, WeaponInfusionType::Standard }, // Tower Shield
    { 0x0016E7AC, WeaponInfusionType::Crystal }, // Crystal Tower Shield
    { 0x0016E810, WeaponInfusionType::Lightning }, // Lightning Tower Shield
    { 0x0016E8D8, WeaponInfusionType::Magic }, // Magic Tower Shield
    { 0x0016E9A0, WeaponInfusionType::Divine }, // Divine Tower Shield
    { 0x0016EA68, WeaponInfusionType::Fire }, // Fire Tower Shield
    { 0x0016EB30, WeaponInfusionType::Standard }, // Giant Shield
    { 0x0016EB94, WeaponInfusionType::Crystal }, // Crystal Giant Shield
    { 0x0016EBF8, WeaponInfusionType::Lightning }, // Lightning Giant Shield
    { 0x0016ECC0, WeaponInfusionType::Magic }, // Magic Giant Shield
    { 0x0016ED88, WeaponInfusionType::Divine }, // Divine Giant Shield
    { 0x0016EE50, WeaponInfusionType::Fire }, // Fire Giant Shield
    { 0x0016EF18, WeaponInfusionType::Standard }, // Stone Greatshield
    { 0x0016F6E8, WeaponInfusionType::Standard }, // Havel's Greatshield
    { 0x0016FAD0, WeaponInfusionType::Standard }, // Bonewheel Shield
    { 0x0016FB34, WeaponInfusionType::Crystal }, // Crystal Bonewheel Shield
    { 0x0016FB98, WeaponInfusionType::Lightning }, // Lightning Bonewheel Shield
    { 0x0016FC60, WeaponInfusionType::Magic }, // Magic Bonewheel Shield
    { 0x0016FD28, WeaponInfusionType::Divine }, // Divine Bonewheel Shield
    { 0x0016FDF0, WeaponInfusionType::Fire }, // Fire Bonewheel Shield
    { 0x00186A00, WeaponInfusionType::Standard }, // Whip
    { 0x00186A64, WeaponInfusionType::Crystal }, // Crystal Whip
    { 0x00186AC8, WeaponInfusionType::Lightning }, // Lightning Whip
    { 0x00186B2C, WeaponInfusionType::Raw }, // Raw Whip
    { 0x00186B90, WeaponInfusionType::Magic }, // Magic Whip
    { 0x00186BF4, WeaponInfusionType::Enchanted }, // Enchanted Whip
    { 0x00186C58, WeaponInfusionType::Divine }, // Divine Whip
    { 0x00186CBC, WeaponInfusionType::Occult }, // Occult Whip
    { 0x00186D20, WeaponInfusionType::Fire }, // Fire Whip
    { 0x00186D84, WeaponInfusionType::Chaos }, // Chaos Whip
    { 0x00186DE8, WeaponInfusionType::Standard }, // Notched Whip
    { 0x00186E4C, WeaponInfusionType::Crystal }, // Crystal Notched Whip
    { 0x00186EB0, WeaponInfusionType::Lightning }, // Lightning Notched Whip
    { 0x00186F14, WeaponInfusionType::Raw }, // Raw Notched Whip
    { 0x00186F78, WeaponInfusionType::Magic }, // Magic Notched Whip
    { 0x00186FDC, WeaponInfusionType::Enchanted }, // Enchanted Notched Whip
    { 0x00187040, WeaponInfusionType::Divine }, // Divine Notched Whip
    { 0x001870A4, WeaponInfusionType::Occult }, // Occult Notched Whip
    { 0x00187108, WeaponInfusionType::Fire }, // Fire Notched Whip
    { 0x0018716C, WeaponInfusionType::Chaos }, // Chaos Notched Whip
    { 0x00895440, WeaponInfusionType::Standard }, // Effigy Shield
    { 0x008954A4, WeaponInfusionType::Crystal }, // Crystal Effigy Shield
    { 0x00895508, WeaponInfusionType::Lightning }, // Lightning Effigy Shield
    { 0x008955D0, WeaponInfusionType::Magic }, // Magic Effigy Shield
    { 0x00895698, WeaponInfusionType::Divine }, // Divine Effigy Shield
    { 0x00895760, WeaponInfusionType::Fire }, // Fire Effigy Shield
    { 0x00895828, WeaponInfusionType::Standard }, // Sanctus
    { 0x0089588C, WeaponInfusionType::Crystal }, // Crystal Sanctus
    { 0x008958F0, WeaponInfusionType::Lightning }, // Lightning Sanctus
    { 0x008959B8, WeaponInfusionType::Magic }, // Magic Sanctus
    { 0x00895A80, WeaponInfusionType::Divine }, // Divine Sanctus
    { 0x00895B48, WeaponInfusionType::Fire }, // Fire Sanctus
    { 0x00895C10, WeaponInfusionType::Standard }, // Bloodshield
    { 0x00895C74, WeaponInfusionType::Crystal }, // Crystal Bloodshield
    { 0x00895CD8, WeaponInfusionType::Lightning }, // Lightning Bloodshield
    { 0x00895DA0, WeaponInfusionType::Magic }, // Magic Bloodshield
    { 0x00895E68, WeaponInfusionType::Divine }, // Divine Bloodshield
    { 0x00895F30, WeaponInfusionType::Fire }, // Fire Bloodshield
    { 0x00895FF8, WeaponInfusionType::Standard }, // Black Iron Greatshield
    { 0x0089605C, WeaponInfusionType::Crystal }, // Crystal Black Iron Greatshield
    { 0x008960C0, WeaponInfusionType::Lightning }, // Lightning Black Iron Greatshield
    { 0x00896188, WeaponInfusionType::Magic }, // Magic Black Iron Greatshield
    { 0x00896250, WeaponInfusionType::Divine }, // Divine Black Iron Greatshield
    { 0x00896318, WeaponInfusionType::Fire }, // Fire Black Iron Greatshield
    { 0x000DBBA0, WeaponInfusionType::NoUpgrade }, // Nothing
    { 0x0013D620, WeaponInfusionType::NoUpgrade }, // Sorcerer's Catalyst
    { 0x0013DA08, WeaponInfusionType::NoUpgrade }, // Beatrice's Catalyst
    { 0x0013DDF0, WeaponInfusionType::NoUpgrade }, // Tin Banishment Catalyst
    { 0x0013E1D8, WeaponInfusionType::NoUpgrade }, // Logan's Catalyst
    { 0x0013E5C0, WeaponInfusionType::NoUpgrade }, // Tin Darkmoon Catalyst
    { 0x0013E624, WeaponInfusionType::NoUpgrade }, // Tin Darkmoon Catalyst
    { 0x0013E688, WeaponInfusionType::NoUpgrade }, // Tin Darkmoon Catalyst
    { 0x0013E6EC, WeaponInfusionType::NoUpgrade }, // Tin Darkmoon Catalyst
    { 0x0013E750, WeaponInfusionType::NoUpgrade }, // Tin Darkmoon Catalyst
    { 0x0013E9A8, WeaponInfusionType::NoUpgrade }, // Oolacile Ivory Catalyst
    { 0x0013ED90, WeaponInfusionType::NoUpgrade }, // Tin Crystallization Catalyst
    { 0x0013F178, WeaponInfusionType::NoUpgrade }, // Demon's Catalyst
    { 0x0013F560, WeaponInfusionType::NoUpgrade }, // Izalith Catalyst
    { 0x0014C080, WeaponInfusionType::NoUpgrade }, // Talisman
    { 0x0014C468, WeaponInfusionType::NoUpgrade }, // Canvas Talisman
    { 0x0014C850, WeaponInfusionType::NoUpgrade }, // Thorolund Talisman
    { 0x0014CC38, WeaponInfusionType::NoUpgrade }, // Ivory Talisman
    { 0x0014D020, WeaponInfusionType::NoUpgrade }, // Gwynevere's Talisman
    { 0x0014D408, WeaponInfusionType::NoUpgrade }, // Sunlight Talisman
    { 0x0014D7F0, WeaponInfusionType::NoUpgrade }, // Darkmoon Talisman
    { 0x0014DBD8, WeaponInfusionType::NoUpgrade }, // Velka's Talisman
    { 0x00154D20, WeaponInfusionType::NoUpgrade }, // Skull Lantern
    { 0x0004BAF0, WeaponInfusionType::Unique }, // Black Knight Sword
    { 0x0004BED8, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004BF3C, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004BFA0, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C004, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C068, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C0CC, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C130, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C194, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C1F8, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C25C, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C2C0, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C324, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C388, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C3EC, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C450, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C4B4, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C518, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004C57C, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004CA90, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CAF4, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CB58, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CBBC, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CC20, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CC84, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CCE8, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CD4C, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CDB0, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CE14, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CE78, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CEDC, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CF40, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004CFA4, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004D008, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004D06C, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004D0D0, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004D134, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0016FEB8, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x0016FF1C, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x0016FF80, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x0016FFE4, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170048, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001700AC, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170110, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170174, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001701D8, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x0017023C, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001702A0, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170304, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170368, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001703CC, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170430, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170494, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001704F8, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x0017055C, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001705C0, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170624, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170688, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001706EC, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170750, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001707B4, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170818, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x0017087C, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001708E0, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170944, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x001709A8, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170A0C, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170A70, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170AD4, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170B38, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170B9C, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170C00, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170C64, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00170CC8, WeaponInfusionType::Unique }, // Greatshield of Artorias
    { 0x00032C80, WeaponInfusionType::Unique }, // Silver Knight Straight Sword
    { 0x0004AF38, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004AF9C, WeaponInfusionType::Unique }, // Greatsword of Artorias
    { 0x0004B320, WeaponInfusionType::Unique }, // Great Lord Greatsword
    { 0x0004B708, WeaponInfusionType::Unique }, // Moonlight Greatsword
    { 0x000631F0, WeaponInfusionType::Unique }, // Quelaag's Furysword
    { 0x00063254, WeaponInfusionType::Unique }, // Quelaag's Furysword
    { 0x000632B8, WeaponInfusionType::Unique }, // Quelaag's Furysword
    { 0x0006331C, WeaponInfusionType::Unique }, // Quelaag's Furysword
    { 0x00063380, WeaponInfusionType::Unique }, // Quelaag's Furysword
    { 0x000633E4, WeaponInfusionType::Unique }, // Quelaag's Furysword
    { 0x00897B50, WeaponInfusionType::Unique }, // Gold Tracer
    { 0x0089A648, WeaponInfusionType::Unique }, // Gough's Greatbow
    { 0x00898ED8, WeaponInfusionType::Unique }, // Stone Greataxe
    { 0x0089A260, WeaponInfusionType::Unique }, // Obsidian Greatsword
    { 0x00897F38, WeaponInfusionType::Unique }, // Dark Silver Tracer
    { 0x000566D0, WeaponInfusionType::Unique }, // Dragon Greatsword
    { 0x00056AB8, WeaponInfusionType::Unique }, // Black Knight Greatsword,     
    { 0x00018E70, WeaponInfusionType::Unique }, // Ghost Blade
    { 0x00019640, WeaponInfusionType::Unique }, // Priscilla's Dagger
    { 0x000D0FC0, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D1024, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D1088, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D10EC, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D1150, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D11B4, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D1218, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D127C, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D12E0, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D1344, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D13A8, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x000D140C, WeaponInfusionType::Unique }, // Smough's Hammer
    { 0x00062638, WeaponInfusionType::Unique }, // Jagged Ghost Blade
    { 0x000ABE00, WeaponInfusionType::Unique }, // Golem Axe
    { 0x000ABE64, WeaponInfusionType::Unique }, // Golem Axe
    { 0x000ABEC8, WeaponInfusionType::Unique }, // Golem Axe
    { 0x000ABF2C, WeaponInfusionType::Unique }, // Golem Axe
    { 0x000ABF90, WeaponInfusionType::Unique }, // Golem Axe
    { 0x000ABFF4, WeaponInfusionType::Unique }, // Golem Axe
    { 0x000AC058, WeaponInfusionType::Unique }, // Golem Axe
    { 0x0007ACD8, WeaponInfusionType::Unique }, // Chaos Blade
    { 0x0007AD3C, WeaponInfusionType::Unique }, // Chaos Blade
    { 0x0007ADA0, WeaponInfusionType::Unique }, // Chaos Blade
    { 0x0010D0B0, WeaponInfusionType::Unique }, // Titanite Catch Pole
    { 0x001587B8, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x0015881C, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158880, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001588E4, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158948, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001589AC, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158A10, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158A74, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158AD8, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158B3C, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158BA0, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158C04, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158C68, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158CCC, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158D30, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158D94, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158DF8, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158E5C, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158EC0, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158F24, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158F88, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00158FEC, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159050, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001590B4, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159118, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x0015917C, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001591E0, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159244, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001592A8, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x0015930C, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159370, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001593D4, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159438, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x0015949C, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159500, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x00159564, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x001595C8, WeaponInfusionType::Unique }, // Crystal Ring Shield
    { 0x000DC758, WeaponInfusionType::Unique }, // Dragon Bone Fist
    { 0x000DC7BC, WeaponInfusionType::Unique }, // Dragon Bone Fist
    { 0x000F59B0, WeaponInfusionType::Unique }, // Silver Knight Spear
    { 0x00100978, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x001009DC, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100A40, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100AA4, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100B08, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100B6C, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100BD0, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100C34, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100C98, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100CFC, WeaponInfusionType::Unique }, // Dragonslayer Spear
    { 0x00100D60, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00100DC4, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00100E28, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00100E8C, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00100EF0, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00100F54, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00100FB8, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x0010101C, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x00101080, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x001010E4, WeaponInfusionType::Unique }, // Moonlight Butterfly Horn
    { 0x0010DC68, WeaponInfusionType::Unique }, // Black Knight Halberd
    { 0x00119018, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x0011907C, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x001190E0, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x00119144, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x001191A8, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x0011920C, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x00119270, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x001192D4, WeaponInfusionType::Unique }, // Lifehunt Scythe
    { 0x00126308, WeaponInfusionType::Unique }, // Darkmoon Bow
    { 0x0012636C, WeaponInfusionType::Unique }, // Darkmoon Bow
    { 0x001263D0, WeaponInfusionType::Unique }, // Darkmoon Bow
    { 0x00126434, WeaponInfusionType::Unique }, // Darkmoon Bow
    { 0x00898320, WeaponInfusionType::Unique }, // Abyss Greatsword
    { 0x00898AF0, WeaponInfusionType::Unique }, // Cleansing Greatshield
};