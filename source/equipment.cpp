
enum class UpgradePath : s32{
    Unknown = -2,
    NoUpgrade = -1,
    Standard = 0,
    Crystal = 100,
    Lightning = 200,
    Raw = 300,
    Magic = 400,
    Enchanted = 500,
    Divine = 600,
    Occult = 700,
    Fire = 800,
    Chaos = 900,
    Dragon = 1100,
    Twinkling = 1200,
    Demon = 1300,
    ArmorLight = 7000,
    ArmorSpecial = 7100,
    ArmorHeavy = 7200,
    Pyromancy = 9999,
};

std::unordered_map<UpgradePath, std::string> upgrade_path_names = {
    {UpgradePath::NoUpgrade,  "NoUpgrade"},
    {UpgradePath::Standard,  "Standard"},
    {UpgradePath::Crystal,  "Crystal"},
    {UpgradePath::Lightning,  "Lightning"},
    {UpgradePath::Raw,  "Raw"},
    {UpgradePath::Magic,  "Magic"},
    {UpgradePath::Enchanted,  "Enchanted"},
    {UpgradePath::Divine,  "Divine"},
    {UpgradePath::Occult,  "Occult"},
    {UpgradePath::Fire,  "Fire"},
    {UpgradePath::Chaos,  "Chaos"},
    {UpgradePath::Dragon,  "Dragon"},
    {UpgradePath::Twinkling,  "Twinkling"},
    {UpgradePath::Demon,  "Demon"},
};

std::unordered_map<u32, UpgradePath> armor_upgrade_paths = {
    {1000, UpgradePath::NoUpgrade}, //	Shaved
    {1100, UpgradePath::NoUpgrade}, //	Receding
    {1200, UpgradePath::NoUpgrade}, //	Short
    {1300, UpgradePath::NoUpgrade}, //	Swept Back
    {1400, UpgradePath::NoUpgrade}, //	Ponytail
    {1500, UpgradePath::NoUpgrade}, //	Wild
    {1600, UpgradePath::NoUpgrade}, //	Parted Center
    {1700, UpgradePath::NoUpgrade}, //	Semi-Long
    {1800, UpgradePath::NoUpgrade}, //	Curly
    {1900, UpgradePath::NoUpgrade}, //	Bobbed
    {2000, UpgradePath::NoUpgrade}, //	Male 11
    {2100, UpgradePath::NoUpgrade}, //	Male 12
    {2200, UpgradePath::NoUpgrade}, //	Male 13
    {2300, UpgradePath::NoUpgrade}, //	Male 14
    {2400, UpgradePath::NoUpgrade}, //	Male 15
    {2500, UpgradePath::NoUpgrade}, //	Male 16
    {2600, UpgradePath::NoUpgrade}, //	Male 17
    {2700, UpgradePath::NoUpgrade}, //	Male 18
    {2800, UpgradePath::NoUpgrade}, //	Male 19
    {2900, UpgradePath::NoUpgrade}, //	Male 20
    {3000, UpgradePath::NoUpgrade}, //	Shaved
    {3100, UpgradePath::NoUpgrade}, //	Very Short
    {3200, UpgradePath::NoUpgrade}, //	Wave
    {3300, UpgradePath::NoUpgrade}, //	Straight A
    {3400, UpgradePath::NoUpgrade}, //	Straight B
    {3500, UpgradePath::NoUpgrade}, //	Ponytail A
    {3600, UpgradePath::NoUpgrade}, //	Ponytail B
    {3700, UpgradePath::NoUpgrade}, //	Pigtails
    {3800, UpgradePath::NoUpgrade}, //	Bun
    {3900, UpgradePath::NoUpgrade}, //	Braided
    {4000, UpgradePath::NoUpgrade}, //	Female 11
    {4100, UpgradePath::NoUpgrade}, //	Female 12
    {4200, UpgradePath::NoUpgrade}, //	Female 13
    {4300, UpgradePath::NoUpgrade}, //	Female 14
    {4400, UpgradePath::NoUpgrade}, //	Female 15
    {4500, UpgradePath::NoUpgrade}, //	Female 16
    {4600, UpgradePath::NoUpgrade}, //	Female 17
    {4700, UpgradePath::NoUpgrade}, //	Female 18
    {4800, UpgradePath::NoUpgrade}, //	Female 19
    {4900, UpgradePath::NoUpgrade}, //	Female 20
    {5000, UpgradePath::NoUpgrade}, //	Travel Hairstyle
    {10000, UpgradePath::ArmorSpecial}, //	Catarina Helm
    {11000, UpgradePath::ArmorSpecial}, //	Catarina Armor
    {12000, UpgradePath::ArmorSpecial}, //	Catarina Gauntlets
    {13000, UpgradePath::ArmorSpecial}, //	Catarina Leggings
    {20000, UpgradePath::ArmorSpecial}, //	Paladin Helm
    {21000, UpgradePath::ArmorSpecial}, //	Paladin Armor
    {22000, UpgradePath::ArmorSpecial}, //	Paladin Gauntlets
    {23000, UpgradePath::ArmorSpecial}, //	Paladin Leggings
    {40000, UpgradePath::ArmorSpecial}, //	Dark Mask
    {41000, UpgradePath::ArmorSpecial}, //	Dark Armor
    {42000, UpgradePath::ArmorSpecial}, //	Dark Gauntlets
    {43000, UpgradePath::ArmorSpecial}, //	Dark Leggings
    {50000, UpgradePath::ArmorLight}, //	Brigand Hood
    {51000, UpgradePath::ArmorLight}, //	Brigand Armor
    {52000, UpgradePath::ArmorLight}, //	Brigand Gauntlets
    {53000, UpgradePath::ArmorLight}, //	Brigand Trousers
    {60000, UpgradePath::ArmorSpecial}, //	Shadow Mask
    {61000, UpgradePath::ArmorSpecial}, //	Shadow Garb
    {62000, UpgradePath::ArmorSpecial}, //	Shadow Gauntlets
    {63000, UpgradePath::ArmorSpecial}, //	Shadow Leggings
    {70000, UpgradePath::ArmorSpecial}, //	Black Iron Helm
    {71000, UpgradePath::ArmorSpecial}, //	Black Iron Armor
    {72000, UpgradePath::ArmorSpecial}, //	Black Iron Gauntlets
    {73000, UpgradePath::ArmorSpecial}, //	Black Iron Leggings
    {80000, UpgradePath::NoUpgrade}, //	Smough's Helm
    {81000, UpgradePath::NoUpgrade}, //	Smough's Armor
    {82000, UpgradePath::NoUpgrade}, //	Smough's Gauntlets
    {83000, UpgradePath::NoUpgrade}, //	Smough's Leggings
    {90000, UpgradePath::NoUpgrade}, //	Six-Eyed Helm of the Channelers
    {91000, UpgradePath::NoUpgrade}, //	Robe of the Channelers
    {92000, UpgradePath::NoUpgrade}, //	Gauntlets of the Channelers
    {93000, UpgradePath::NoUpgrade}, //	Waistcloth of the Channelers
    {100000, UpgradePath::ArmorSpecial}, //	Helm of Favor
    {101000, UpgradePath::ArmorSpecial}, //	Embraced Armor of Favor
    {102000, UpgradePath::ArmorSpecial}, //	Gauntlets of Favor
    {103000, UpgradePath::ArmorSpecial}, //	Leggings of Favor
    {110000, UpgradePath::NoUpgrade}, //	Helm of the Wise
    {111000, UpgradePath::NoUpgrade}, //	Armor of the Glorious
    {112000, UpgradePath::NoUpgrade}, //	Gauntlets of the Vanquisher
    {113000, UpgradePath::NoUpgrade}, //	Boots of the Explorer
    {120000, UpgradePath::NoUpgrade}, //	Stone Helm
    {121000, UpgradePath::NoUpgrade}, //	Stone Armor
    {122000, UpgradePath::NoUpgrade}, //	Stone Gauntlets
    {123000, UpgradePath::NoUpgrade}, //	Stone Leggings
    {130000, UpgradePath::NoUpgrade}, //	Crystalline Helm
    {131000, UpgradePath::NoUpgrade}, //	Crystalline Armor
    {132000, UpgradePath::NoUpgrade}, //	Crystalline Gauntlets
    {133000, UpgradePath::NoUpgrade}, //	Crystalline Leggings
    {140000, UpgradePath::ArmorSpecial}, //	Mask of the Sealer
    {141000, UpgradePath::ArmorSpecial}, //	Crimson Robe
    {142000, UpgradePath::ArmorSpecial}, //	Crimson Gloves
    {143000, UpgradePath::ArmorSpecial}, //	Crimson Waistcloth
    {150000, UpgradePath::ArmorSpecial}, //	Mask of Velka
    {151000, UpgradePath::ArmorSpecial}, //	Black Cleric Robe
    {152000, UpgradePath::ArmorSpecial}, //	Black Manchette
    {153000, UpgradePath::ArmorSpecial}, //	Black Tights
    {160000, UpgradePath::ArmorHeavy}, //	Iron Helm
    {161000, UpgradePath::ArmorHeavy}, //	Armor of the Sun
    {162000, UpgradePath::ArmorHeavy}, //	Iron Bracelet
    {163000, UpgradePath::ArmorHeavy}, //	Iron Leggings
    {170000, UpgradePath::ArmorHeavy}, //	Chain Helm
    {171000, UpgradePath::ArmorHeavy}, //	Chain Armor
    {172000, UpgradePath::ArmorHeavy}, //	Leather Gauntlets
    {173000, UpgradePath::ArmorHeavy}, //	Chain Leggings
    {180000, UpgradePath::ArmorHeavy}, //	Cleric Helm
    {181000, UpgradePath::ArmorHeavy}, //	Cleric Armor
    {182000, UpgradePath::ArmorHeavy}, //	Cleric Gauntlets
    {183000, UpgradePath::ArmorHeavy}, //	Cleric Leggings
    {190000, UpgradePath::NoUpgrade}, //	Sunlight Maggot
    {200000, UpgradePath::ArmorSpecial}, //	Helm of Thorns
    {201000, UpgradePath::ArmorSpecial}, //	Armor of Thorns
    {202000, UpgradePath::ArmorSpecial}, //	Gauntlets of Thorns
    {203000, UpgradePath::ArmorSpecial}, //	Leggings of Thorns
    {210000, UpgradePath::ArmorHeavy}, //	Standard Helm
    {211000, UpgradePath::ArmorLight}, //	Hard Leather Armor
    {212000, UpgradePath::ArmorLight}, //	Hard Leather Gauntlets
    {213000, UpgradePath::ArmorLight}, //	Hard Leather Boots
    {220000, UpgradePath::ArmorLight}, //	Sorcerer Hat
    {221000, UpgradePath::ArmorLight}, //	Sorcerer Cloak
    {222000, UpgradePath::ArmorLight}, //	Sorcerer Gauntlets
    {223000, UpgradePath::ArmorLight}, //	Sorcerer Boots
    {230000, UpgradePath::ArmorLight}, //	Tattered Cloth Hood
    {231000, UpgradePath::ArmorLight}, //	Tattered Cloth Robe
    {232000, UpgradePath::ArmorLight}, //	Tattered Cloth Manchette
    {233000, UpgradePath::ArmorLight}, //	Heavy Boots
    {240000, UpgradePath::ArmorLight}, //	Pharis's Hat
    {241000, UpgradePath::ArmorLight}, //	Leather Armor
    {242000, UpgradePath::ArmorLight}, //	Leather Gloves
    {243000, UpgradePath::ArmorLight}, //	Leather Boots
    {250000, UpgradePath::ArmorSpecial}, //	Painting Guardian Hood
    {251000, UpgradePath::ArmorSpecial}, //	Painting Guardian Robe
    {252000, UpgradePath::ArmorSpecial}, //	Painting Guardian Gloves
    {253000, UpgradePath::ArmorSpecial}, //	Painting Guardian Waistcloth
    {270000, UpgradePath::NoUpgrade}, //	Ornstein's Helm
    {271000, UpgradePath::NoUpgrade}, //	Ornstein's Armor
    {272000, UpgradePath::NoUpgrade}, //	Ornstein's Gauntlets
    {273000, UpgradePath::NoUpgrade}, //	Ornstein's Leggings
    {280000, UpgradePath::ArmorSpecial}, //	Eastern Helm
    {281000, UpgradePath::ArmorSpecial}, //	Eastern Armor
    {282000, UpgradePath::ArmorSpecial}, //	Eastern Gauntlets
    {283000, UpgradePath::ArmorSpecial}, //	Eastern Leggings
    {290000, UpgradePath::ArmorSpecial}, //	Xanthous Crown
    {291000, UpgradePath::ArmorSpecial}, //	Xanthous Overcoat
    {292000, UpgradePath::ArmorSpecial}, //	Xanthous Gloves
    {293000, UpgradePath::ArmorSpecial}, //	Xanthous Waistcloth
    {300000, UpgradePath::ArmorLight}, //	Thief Mask
    {301000, UpgradePath::ArmorLight}, //	Black Leather Armor
    {302000, UpgradePath::ArmorLight}, //	Black Leather Gloves
    {303000, UpgradePath::ArmorLight}, //	Black Leather Boots
    {310000, UpgradePath::ArmorLight}, //	Priest's Hat
    {311000, UpgradePath::ArmorLight}, //	Holy Robe
    {312000, UpgradePath::ArmorLight}, //	Traveling Gloves
    {313000, UpgradePath::ArmorLight}, //	Holy Trousers
    {320000, UpgradePath::ArmorSpecial}, //	Black Knight Helm
    {321000, UpgradePath::ArmorSpecial}, //	Black Knight Armor
    {322000, UpgradePath::ArmorSpecial}, //	Black Knight Gauntlets
    {323000, UpgradePath::ArmorSpecial}, //	Black Knight Leggings
    {330000, UpgradePath::NoUpgrade}, //	Crown of Dusk
    {331000, UpgradePath::ArmorSpecial}, //	Antiquated Dress
    {332000, UpgradePath::ArmorSpecial}, //	Antiquated Gloves
    {333000, UpgradePath::ArmorSpecial}, //	Antiquated Skirt
    {340000, UpgradePath::ArmorSpecial}, //	Witch Hat
    {341000, UpgradePath::ArmorSpecial}, //	Witch Cloak
    {342000, UpgradePath::ArmorSpecial}, //	Witch Gloves
    {343000, UpgradePath::ArmorSpecial}, //	Witch Skirt
    {350000, UpgradePath::ArmorHeavy}, //	Elite Knight Helm
    {351000, UpgradePath::ArmorHeavy}, //	Elite Knight Armor
    {352000, UpgradePath::ArmorHeavy}, //	Elite Knight Gauntlets
    {353000, UpgradePath::ArmorHeavy}, //	Elite Knight Leggings
    {360000, UpgradePath::ArmorLight}, //	Wanderer Hood
    {361000, UpgradePath::ArmorLight}, //	Wanderer Coat
    {362000, UpgradePath::ArmorLight}, //	Wanderer Manchette
    {363000, UpgradePath::ArmorLight}, //	Wanderer Boots
    {370000, UpgradePath::ArmorLight}, //	Mage Smith Hat
    {371000, UpgradePath::ArmorLight}, //	Mage Smith Coat
    {372000, UpgradePath::ArmorLight}, //	Mage Smith Gauntlets
    {373000, UpgradePath::ArmorLight}, //	Mage Smith Boots
    {380000, UpgradePath::ArmorSpecial}, //	Big Hat
    {381000, UpgradePath::ArmorSpecial}, //	Sage Robe
    {382000, UpgradePath::ArmorLight}, //	Traveling Gloves
    {383000, UpgradePath::ArmorLight}, //	Traveling Boots
    {390000, UpgradePath::ArmorHeavy}, //	Knight Helm
    {391000, UpgradePath::ArmorHeavy}, //	Knight Armor
    {392000, UpgradePath::ArmorHeavy}, //	Knight Gauntlets
    {393000, UpgradePath::ArmorHeavy}, //	Knight Leggings
    {400000, UpgradePath::ArmorLight}, //	Dingy Hood
    {401000, UpgradePath::ArmorLight}, //	Dingy Robe
    {402000, UpgradePath::ArmorLight}, //	Dingy Gloves
    {403000, UpgradePath::ArmorLight}, //	Blood-Stained Skirt
    {410000, UpgradePath::ArmorLight}, //	Maiden Hood
    {411000, UpgradePath::ArmorLight}, //	Maiden Robe
    {412000, UpgradePath::ArmorLight}, //	Maiden Gloves
    {413000, UpgradePath::ArmorLight}, //	Maiden Skirt
    {420000, UpgradePath::ArmorSpecial}, //	Silver Knight Helm
    {421000, UpgradePath::ArmorSpecial}, //	Silver Knight Armor
    {422000, UpgradePath::ArmorSpecial}, //	Silver Knight Gauntlets
    {423000, UpgradePath::ArmorSpecial}, //	Silver Knight Leggings
    {440000, UpgradePath::NoUpgrade}, //	Havel's Helm
    {441000, UpgradePath::NoUpgrade}, //	Havel's Armor
    {442000, UpgradePath::NoUpgrade}, //	Havel's Gauntlets
    {443000, UpgradePath::NoUpgrade}, //	Havel's Leggings
    {450000, UpgradePath::ArmorSpecial}, //	Brass Helm
    {451000, UpgradePath::ArmorSpecial}, //	Brass Armor
    {452000, UpgradePath::ArmorSpecial}, //	Brass Gauntlets
    {453000, UpgradePath::ArmorSpecial}, //	Brass Leggings
    {460000, UpgradePath::NoUpgrade}, //	Gold-Hemmed Black Hood
    {461000, UpgradePath::NoUpgrade}, //	Gold-Hemmed Black Cloak
    {462000, UpgradePath::NoUpgrade}, //	Gold-Hemmed Black Gloves
    {463000, UpgradePath::NoUpgrade}, //	Gold-Hemmed Black Skirt
    {470000, UpgradePath::NoUpgrade}, //	Golem Helm
    {471000, UpgradePath::NoUpgrade}, //	Golem Armor
    {472000, UpgradePath::NoUpgrade}, //	Golem Gauntlets
    {473000, UpgradePath::NoUpgrade}, //	Golem Leggings
    {480000, UpgradePath::ArmorHeavy}, //	Hollow Soldier Helm
    {481000, UpgradePath::ArmorHeavy}, //	Hollow Soldier Armor
    {483000, UpgradePath::ArmorHeavy}, //	Hollow Soldier Waistcloth
    {490000, UpgradePath::ArmorHeavy}, //	Steel Helm
    {491000, UpgradePath::ArmorHeavy}, //	Steel Armor
    {492000, UpgradePath::ArmorHeavy}, //	Steel Gauntlets
    {493000, UpgradePath::ArmorHeavy}, //	Steel Leggings
    {500000, UpgradePath::ArmorLight}, //	Hollow Thief's Hood
    {501000, UpgradePath::ArmorLight}, //	Hollow Thief's Leather Armor
    {503000, UpgradePath::ArmorLight}, //	Hollow Thief's Tights
    {510000, UpgradePath::ArmorHeavy}, //	Balder Helm
    {511000, UpgradePath::ArmorHeavy}, //	Balder Armor
    {512000, UpgradePath::ArmorHeavy}, //	Balder Gauntlets
    {513000, UpgradePath::ArmorHeavy}, //	Balder Leggings
    {520000, UpgradePath::ArmorLight}, //	Hollow Warrior Helm
    {521000, UpgradePath::ArmorLight}, //	Hollow Warrior Armor
    {523000, UpgradePath::ArmorLight}, //	Hollow Warrior Waistcloth
    {530000, UpgradePath::ArmorSpecial}, //	Giant Helm
    {531000, UpgradePath::ArmorSpecial}, //	Giant Armor
    {532000, UpgradePath::ArmorSpecial}, //	Giant Gauntlets
    {533000, UpgradePath::ArmorSpecial}, //	Giant Leggings
    {540000, UpgradePath::NoUpgrade}, //	Crown of the Dark Sun
    {541000, UpgradePath::NoUpgrade}, //	Moonlight Robe
    {542000, UpgradePath::NoUpgrade}, //	Moonlight Gloves
    {543000, UpgradePath::NoUpgrade}, //	Moonlight Waistcloth
    {550000, UpgradePath::NoUpgrade}, //	Crown of the Great Lord
    {551000, UpgradePath::NoUpgrade}, //	Robe of the Great Lord
    {552000, UpgradePath::NoUpgrade}, //	Bracelet of the Great Lord
    {553000, UpgradePath::NoUpgrade}, //	Anklet of the Great Lord
    {560000, UpgradePath::ArmorLight}, //	Sack
    {570000, UpgradePath::NoUpgrade}, //	Symbol of Avarice
    {580000, UpgradePath::ArmorHeavy}, //	Royal Helm
    {590000, UpgradePath::NoUpgrade}, //	Mask of the Father
    {600000, UpgradePath::NoUpgrade}, //	Mask of the Mother
    {610000, UpgradePath::NoUpgrade}, //	Mask of the Child
    {620000, UpgradePath::ArmorSpecial}, //	Fang Boar Helm
    {630000, UpgradePath::ArmorSpecial}, //	Gargoyle Helm
    {640000, UpgradePath::ArmorLight}, //	Black Sorcerer Hat
    {641000, UpgradePath::ArmorLight}, //	Black Sorcerer Cloak
    {642000, UpgradePath::ArmorLight}, //	Black Sorcerer Gauntlets
    {643000, UpgradePath::ArmorLight}, //	Black Sorcerer Boots
    {650000, UpgradePath::ArmorHeavy}, //	Elite Cleric Helm
    {651000, UpgradePath::ArmorHeavy}, //	Elite Cleric Armor
    {652000, UpgradePath::ArmorHeavy}, //	Elite Cleric Gauntlets
    {653000, UpgradePath::ArmorHeavy}, //	Elite Cleric Leggings
    {660000, UpgradePath::ArmorSpecial}, //	Helm of Artorias
    {661000, UpgradePath::ArmorSpecial}, //	Armor of Artorias
    {662000, UpgradePath::ArmorSpecial}, //	Gauntlets of Artorias
    {663000, UpgradePath::ArmorSpecial}, //	Leggings of Artorias
    {670000, UpgradePath::ArmorSpecial}, //	Porcelain Mask
    {671000, UpgradePath::ArmorSpecial}, //	Lord's Blade Robe
    {672000, UpgradePath::ArmorSpecial}, //	Lord's Blade Gloves
    {673000, UpgradePath::ArmorSpecial}, //	Lord's Blade Waistcloth
    {680000, UpgradePath::ArmorSpecial}, //	Gough's Helm
    {681000, UpgradePath::ArmorSpecial}, //	Gough's Armor
    {682000, UpgradePath::ArmorSpecial}, //	Gough's Gauntlets
    {683000, UpgradePath::ArmorSpecial}, //	Gough's Leggings
    {690000, UpgradePath::NoUpgrade}, //	Guardian Helm
    {691000, UpgradePath::NoUpgrade}, //	Guardian Armor
    {692000, UpgradePath::NoUpgrade}, //	Guardian Gauntlets
    {693000, UpgradePath::NoUpgrade}, //	Guardian Leggings
    {700000, UpgradePath::ArmorSpecial}, //	Snickering Top Hat
    {701000, UpgradePath::ArmorSpecial}, //	Chester's Long Coat
    {702000, UpgradePath::ArmorSpecial}, //	Chester's Gloves
    {703000, UpgradePath::ArmorSpecial}, //	Chester's Trousers
    {710000, UpgradePath::NoUpgrade}, //	Bloated Head
    {720000, UpgradePath::NoUpgrade}, //	Bloated Sorcerer Head
    {900000, UpgradePath::NoUpgrade}, //	Head
    {901000, UpgradePath::NoUpgrade}, //	Body
    {902000, UpgradePath::NoUpgrade}, //	Arms
    {903000, UpgradePath::NoUpgrade}, //	Legs
    {950000, UpgradePath::NoUpgrade}, //	No Travel Gear / Head
    {951000, UpgradePath::NoUpgrade}, //	No Travel Gear / Body
    {952000, UpgradePath::NoUpgrade}, //	No Travel Gear / Arms
    {953000, UpgradePath::NoUpgrade}, //	No Travel Gear / Legs
    {1000000, UpgradePath::NoUpgrade}, //	Dragon Head
    {1001000, UpgradePath::NoUpgrade}, //	Dragon Body
    {1002000, UpgradePath::NoUpgrade}, //	Dragon Arms
    {1003000, UpgradePath::NoUpgrade}, //	Dragon Legs
    {1010000, UpgradePath::NoUpgrade}, //	Egg
    {1020000, UpgradePath::NoUpgrade}, //	Egg - Final Stage
    {2160000, UpgradePath::NoUpgrade}, //	[Unused] Iron Helm
    {2161000, UpgradePath::NoUpgrade}, //	[Unused] Sun Sign Armor
    {2162000, UpgradePath::NoUpgrade}, //	[Unused] Iron bangles
    {2163000, UpgradePath::NoUpgrade}, //	[Unused] Iron Instep
    {2170000, UpgradePath::NoUpgrade}, //	[Unused] Chain Helm
    {2171000, UpgradePath::NoUpgrade}, //	[Unused] Chain Armor
    {2172000, UpgradePath::NoUpgrade}, //	[Unused] Leather Gauntlet
    {2173000, UpgradePath::NoUpgrade}, //	[Unused] chain leggings
    {2180000, UpgradePath::NoUpgrade}, //	[Unused] Priest Helm
    {2181000, UpgradePath::NoUpgrade}, //	[Unused] Priest's Armor
    {2182000, UpgradePath::NoUpgrade}, //	[Unused] Priest's Gloves
    {2183000, UpgradePath::NoUpgrade}, //	[Unused] Priest's Instep
    {2230000, UpgradePath::NoUpgrade}, //	[Unused] Tattered hood
    {2231000, UpgradePath::NoUpgrade}, //	[Unused] Tattered Cloth Robe
    {2232000, UpgradePath::NoUpgrade}, //	[Unused] Ragged manchette
    {2233000, UpgradePath::NoUpgrade}, //	[Unused] Thick boots
    {2350000, UpgradePath::NoUpgrade}, //	[Unused] Senior Knight Helm
    {2351000, UpgradePath::NoUpgrade}, //	[Unused] Senior Knight Armor
    {2352000, UpgradePath::NoUpgrade}, //	[Unused] Upper Knight Gloves
    {2353000, UpgradePath::NoUpgrade}, //	[Unused] Upper Knight Instep
    {2410000, UpgradePath::NoUpgrade}, //	[Unused] Saint's Hood
    {2411000, UpgradePath::NoUpgrade}, //	[Unused] Saint's Top
    {2412000, UpgradePath::NoUpgrade}, //	[Unused] Saint's Gloves
    {2413000, UpgradePath::NoUpgrade}, //	[Unused] Saint's Skirt
    {2640000, UpgradePath::NoUpgrade}, //	[Unused] Black magician hat
    {2641000, UpgradePath::NoUpgrade}, //	[Unused] Black magician coat
    {2642000, UpgradePath::NoUpgrade}, //	[Unused] Black magician gauntlet
    {2643000, UpgradePath::NoUpgrade}, //	[Unused] black magician boots
};

std::unordered_map<u32, UpgradePath> weapon_upgrade_paths = {
    { 100000, UpgradePath::Standard},   // Dagger
    { 100100, UpgradePath::Crystal},    // Dagger [Crystal]
    { 100200, UpgradePath::Lightning},  // Dagger [Lightning]
    { 100300, UpgradePath::Raw},        // Dagger [Raw]
    { 100400, UpgradePath::Magic},      // Dagger [Magic]
    { 100500, UpgradePath::Enchanted},  // Dagger [Enchanted]
    { 100600, UpgradePath::Divine},     // Dagger [Divine]
    { 100700, UpgradePath::Occult},     // Dagger [Occult]
    { 100800, UpgradePath::Fire},       // Dagger [Fire]
    { 100900, UpgradePath::Chaos},      // Dagger [Chaos]
    { 101000, UpgradePath::Standard},   // Parrying Dagger
    { 101100, UpgradePath::Crystal},    // Parrying Dagger [Crystal]
    { 101200, UpgradePath::Lightning},  // Parrying Dagger [Lightning]
    { 101300, UpgradePath::Raw},        // Parrying Dagger [Raw]
    { 101400, UpgradePath::Magic},      // Parrying Dagger [Magic]
    { 101500, UpgradePath::Enchanted},  // Parrying Dagger [Enchanted]
    { 101600, UpgradePath::Divine},     // Parrying Dagger [Divine]
    { 101700, UpgradePath::Occult},     // Parrying Dagger [Occult]
    { 101800, UpgradePath::Fire},       // Parrying Dagger [Fire]
    { 101900, UpgradePath::Chaos},      // Parrying Dagger [Chaos]
    { 102000, UpgradePath::Twinkling},  // Ghost Blade
    { 103000, UpgradePath::Standard},   // Bandit's Knife
    { 103100, UpgradePath::Crystal},    // Bandit's Knife [Crystal]
    { 103200, UpgradePath::Lightning},  // Bandit's Knife [Lightning]
    { 103300, UpgradePath::Raw},        // Bandit's Knife [Raw]
    { 103400, UpgradePath::Magic},      // Bandit's Knife [Magic]
    { 103500, UpgradePath::Enchanted},  // Bandit's Knife [Enchanted]
    { 103600, UpgradePath::Divine},     // Bandit's Knife [Divine]
    { 103700, UpgradePath::Occult},     // Bandit's Knife [Occult]
    { 103800, UpgradePath::Fire},       // Bandit's Knife [Fire]
    { 103900, UpgradePath::Chaos},      // Bandit's Knife [Chaos]
    { 104000, UpgradePath::Dragon},     // Priscilla's Dagger
    { 199000, UpgradePath::NoUpgrade},  // [Ghost] Dagger
    { 200000, UpgradePath::Standard},   // Shortsword
    { 200100, UpgradePath::Crystal},    // Shortsword [Crystal]
    { 200200, UpgradePath::Lightning},  // Shortsword [Lightning]
    { 200300, UpgradePath::Raw},        // Shortsword [Raw]
    { 200400, UpgradePath::Magic},      // Shortsword [Magic]
    { 200500, UpgradePath::Enchanted},  // Shortsword [Enchanted]
    { 200600, UpgradePath::Divine},     // Shortsword [Divine]
    { 200700, UpgradePath::Occult},     // Shortsword [Occult]
    { 200800, UpgradePath::Fire},       // Shortsword [Fire]
    { 200900, UpgradePath::Chaos},      // Shortsword [Chaos]
    { 201000, UpgradePath::Standard},   // Longsword
    { 201100, UpgradePath::Crystal},    // Longsword [Crystal]
    { 201200, UpgradePath::Lightning},  // Longsword [Lightning]
    { 201300, UpgradePath::Raw},        // Longsword [Raw]
    { 201400, UpgradePath::Magic},      // Longsword [Magic]
    { 201500, UpgradePath::Enchanted},  // Longsword [Enchanted]
    { 201600, UpgradePath::Divine},     // Longsword [Divine]
    { 201700, UpgradePath::Occult},     // Longsword [Occult]
    { 201800, UpgradePath::Fire},       // Longsword [Fire]
    { 201900, UpgradePath::Chaos},      // Longsword [Chaos]
    { 202000, UpgradePath::Standard},   // Broadsword
    { 202100, UpgradePath::Crystal},    // Broadsword [Crystal]
    { 202200, UpgradePath::Lightning},  // Broadsword [Lightning]
    { 202300, UpgradePath::Raw},        // Broadsword [Raw]
    { 202400, UpgradePath::Magic},      // Broadsword [Magic]
    { 202500, UpgradePath::Enchanted},  // Broadsword [Enchanted]
    { 202600, UpgradePath::Divine},     // Broadsword [Divine]
    { 202700, UpgradePath::Occult},     // Broadsword [Occult]
    { 202800, UpgradePath::Fire},       // Broadsword [Fire]
    { 202900, UpgradePath::Chaos},      // Broadsword [Chaos]
    { 203000, UpgradePath::Standard},   // Broken Straight Sword
    { 203100, UpgradePath::Crystal},    // Broken Straight Sword [Crystal]
    { 203200, UpgradePath::Lightning},  // Broken Straight Sword [Lightning]
    { 203300, UpgradePath::Raw},        // Broken Straight Sword [Raw]
    { 203400, UpgradePath::Magic},      // Broken Straight Sword [Magic]
    { 203500, UpgradePath::Enchanted},  // Broken Straight Sword [Enchanted]
    { 203600, UpgradePath::Divine},     // Broken Straight Sword [Divine]
    { 203700, UpgradePath::Occult},     // Broken Straight Sword [Occult]
    { 203800, UpgradePath::Fire},       // Broken Straight Sword [Fire]
    { 203900, UpgradePath::Chaos},      // Broken Straight Sword [Chaos]
    { 204000, UpgradePath::Standard},   // Balder Side Sword
    { 204100, UpgradePath::Crystal},    // Balder Side Sword [Crystal]
    { 204200, UpgradePath::Lightning},  // Balder Side Sword [Lightning]
    { 204300, UpgradePath::Raw},        // Balder Side Sword [Raw]
    { 204400, UpgradePath::Magic},      // Balder Side Sword [Magic]
    { 204500, UpgradePath::Enchanted},  // Balder Side Sword [Enchanted]
    { 204600, UpgradePath::Divine},     // Balder Side Sword [Divine]
    { 204700, UpgradePath::Occult},     // Balder Side Sword [Occult]
    { 204800, UpgradePath::Fire},       // Balder Side Sword [Fire]
    { 204900, UpgradePath::Chaos},      // Balder Side Sword [Chaos]
    { 205000, UpgradePath::NoUpgrade},  // Crystal Straight Sword
    { 206000, UpgradePath::Standard},   // Sunlight Straight Sword
    { 206100, UpgradePath::Crystal},    // Sunlight Straight Sword [Crystal]
    { 206200, UpgradePath::Lightning},  // Sunlight Straight Sword [Lightning]
    { 206300, UpgradePath::Raw},        // Sunlight Straight Sword [Raw]
    { 206400, UpgradePath::Magic},      // Sunlight Straight Sword [Magic]
    { 206500, UpgradePath::Enchanted},  // Sunlight Straight Sword [Enchanted]
    { 206600, UpgradePath::Divine},      // Sunlight Straight Sword [Divine]
    { 206700, UpgradePath::Occult},      // Sunlight Straight Sword [Occult]
    { 206800, UpgradePath::Fire},        // Sunlight Straight Sword [Fire]
    { 206900, UpgradePath::Chaos},       // Sunlight Straight Sword [Chaos]
    { 207000, UpgradePath::Standard},    // Barbed Straight Sword
    { 207100, UpgradePath::Crystal},     // Barbed Straight Sword [Crystal]
    { 207200, UpgradePath::Lightning},   // Barbed Straight Sword [Lightning]
    { 207300, UpgradePath::Raw},         // Barbed Straight Sword [Raw]
    { 207400, UpgradePath::Magic},       // Barbed Straight Sword [Magic]
    { 207500, UpgradePath::Enchanted},   // Barbed Straight Sword [Enchanted]
    { 207600, UpgradePath::Divine},      // Barbed Straight Sword [Divine]
    { 207700, UpgradePath::Occult},      // Barbed Straight Sword [Occult]
    { 207800, UpgradePath::Fire},        // Barbed Straight Sword [Fire]
    { 207900, UpgradePath::Chaos},       // Barbed Straight Sword [Chaos]
    { 208000, UpgradePath::Twinkling},   // Silv. Knight Str. Sword
    { 209000, UpgradePath::Twinkling},   // Astora's Straight Sword
    { 210000, UpgradePath::Standard},    // Darksword
    { 210100, UpgradePath::Crystal},     // Darksword [Crystal]
    { 210200, UpgradePath::Lightning},   // Darksword [Lightning]
    { 210300, UpgradePath::Raw},         // Darksword [Raw]
    { 210400, UpgradePath::Magic},       // Darksword [Magic]
    { 210500, UpgradePath::Enchanted},   // Darksword [Enchanted]
    { 210600, UpgradePath::Divine},      // Darksword [Divine]
    { 210700, UpgradePath::Occult},      // Darksword [Occult]
    { 210800, UpgradePath::Fire},        // Darksword [Fire]
    { 210900, UpgradePath::Chaos},       // Darksword [Chaos]
    { 211000, UpgradePath::Dragon},      // Drake Sword
    { 212000, UpgradePath::Standard},    // Straight Sword Hilt
    { 212100, UpgradePath::Crystal},     // Straight Sword Hilt [Crystal]
    { 212200, UpgradePath::Lightning},   // Straight Sword Hilt [Lightning]
    { 212300, UpgradePath::Raw},         // Straight Sword Hilt [Raw]
    { 212400, UpgradePath::Magic},       // Straight Sword Hilt [Magic]
    { 212500, UpgradePath::Enchanted},   // Straight Sword Hilt [Enchanted]
    { 212600, UpgradePath::Divine},      // Straight Sword Hilt [Divine]
    { 212700, UpgradePath::Occult},      // Straight Sword Hilt [Occult]
    { 212800, UpgradePath::Fire},        // Straight Sword Hilt [Fire]
    { 212900, UpgradePath::Chaos},       // Straight Sword Hilt [Chaos]
    { 299000, UpgradePath::NoUpgrade},   // [Ghost] Straight Sword
    { 300000, UpgradePath::Standard},    // Bastard Sword
    { 300100, UpgradePath::Crystal},     // Bastard Sword [Crystal]
    { 300200, UpgradePath::Lightning},   // Bastard Sword [Lightning]
    { 300300, UpgradePath::Raw},         // Bastard Sword [Raw]
    { 300400, UpgradePath::Magic},       // Bastard Sword [Magic]
    { 300500, UpgradePath::Enchanted},   // Bastard Sword [Enchanted]
    { 300600, UpgradePath::Divine},      // Bastard Sword [Divine]
    { 300700, UpgradePath::Occult},      // Bastard Sword [Occult]
    { 300800, UpgradePath::Fire},        // Bastard Sword [Fire]
    { 300900, UpgradePath::Chaos},       // Bastard Sword [Chaos]
    { 301000, UpgradePath::Standard},    // Claymore
    { 301100, UpgradePath::Crystal},     // Claymore [Crystal]
    { 301200, UpgradePath::Lightning},   // Claymore [Lightning]
    { 301300, UpgradePath::Raw},         // Claymore [Raw]
    { 301400, UpgradePath::Magic},       // Claymore [Magic]
    { 301500, UpgradePath::Enchanted},   // Claymore [Enchanted]
    { 301600, UpgradePath::Divine},      // Claymore [Divine]
    { 301700, UpgradePath::Occult},      // Claymore [Occult]
    { 301800, UpgradePath::Fire},        // Claymore [Fire]
    { 301900, UpgradePath::Chaos},       // Claymore [Chaos]
    { 302000, UpgradePath::Standard},    // Man-serpent Greatsword
    { 302100, UpgradePath::Crystal},     // Man-serpent Greatsword [Crystal]
    { 302200, UpgradePath::Lightning},   // Man-serpent Greatsword [Lightning]
    { 302300, UpgradePath::Raw},         // Man-serpent Greatsword [Raw]
    { 302400, UpgradePath::Magic},       // Man-serpent Greatsword [Magic]
    { 302500, UpgradePath::Enchanted},   // Man-serpent Greatsword [Enchanted]
    { 302600, UpgradePath::Divine},      // Man-serpent Greatsword [Divine]
    { 302700, UpgradePath::Occult},      // Man-serpent Greatsword [Occult]
    { 302800, UpgradePath::Fire},        // Man-serpent Greatsword [Fire]
    { 302900, UpgradePath::Chaos},       // Man-serpent Greatsword [Chaos]
    { 303000, UpgradePath::Standard},    // Flamberge
    { 303100, UpgradePath::Crystal},     // Flamberge [Crystal]
    { 303200, UpgradePath::Lightning},   // Flamberge [Lightning]
    { 303300, UpgradePath::Raw},         // Flamberge [Raw]
    { 303400, UpgradePath::Magic},       // Flamberge [Magic]
    { 303500, UpgradePath::Enchanted},   // Flamberge [Enchanted]
    { 303600, UpgradePath::Divine},      // Flamberge [Divine]
    { 303700, UpgradePath::Occult},      // Flamberge [Occult]
    { 303800, UpgradePath::Fire},        // Flamberge [Fire]
    { 303900, UpgradePath::Chaos},       // Flamberge [Chaos]
    { 304000, UpgradePath::NoUpgrade},   // Crystal Greatsword
    { 306000, UpgradePath::Twinkling},   // Stone Greatsword
    { 307000, UpgradePath::Demon},       // Greatsword of Artorias [Broken Straight Sword]
    { 307100, UpgradePath::Demon},       // Greatsword of Artorias [Straight Sword Hilt]
    { 309000, UpgradePath::Dragon},      // Moonlight Greatsword
    { 310000, UpgradePath::Twinkling},   // Black Knight Sword
    { 311000, UpgradePath::Demon},       // Greatsword of Artorias [Dagger]
    { 311100, UpgradePath::Demon},       // Greatsword of Artorias [Parrying Dagger]
    { 311200, UpgradePath::Demon},       // Greatsword of Artorias [Bandit's Knife]
    { 311300, UpgradePath::Demon},       // Greatsword of Artorias [Shortsword]
    { 311400, UpgradePath::Demon},       // Greatsword of Artorias [Longsword]
    { 311500, UpgradePath::Demon},       // Greatsword of Artorias [Broadsword]
    { 311600, UpgradePath::Demon},       // Greatsword of Artorias [Balder Side Sword]
    { 311700, UpgradePath::Demon},       // Greatsword of Artorias [Sunlight Straight Sword]
    { 311800, UpgradePath::Demon},       // Greatsword of Artorias [Barbed Straight Sword]
    { 311900, UpgradePath::Demon},       // Greatsword of Artorias [Astora's Straight Sword]
    { 312000, UpgradePath::Demon},       // Greatsword of Artorias [Darksword]
    { 312100, UpgradePath::Demon},       // Greatsword of Artorias [Bastard Sword]
    { 312200, UpgradePath::Demon},       // Greatsword of Artorias [Claymore]
    { 312300, UpgradePath::Demon},       // Greatsword of Artorias [Man-serpent Greatsword]
    { 312400, UpgradePath::Demon},       // Greatsword of Artorias [Flamberge]
    { 312500, UpgradePath::Demon},       // Greatsword of Artorias [Zweihander]
    { 312600, UpgradePath::Demon},       // Greatsword of Artorias [Greatsword]
    { 312700, UpgradePath::Demon},       // Greatsword of Artorias [Demon Great Machete]
    { 314000, UpgradePath::Demon},       // Great Lord Greatsword [Dagger]
    { 314100, UpgradePath::Demon},       // Great Lord Greatsword [Parrying Dagger]
    { 314200, UpgradePath::Demon},       // Great Lord Greatsword [Bandit's Knife]
    { 314300, UpgradePath::Demon},       // Great Lord Greatsword [Shortsword]
    { 314400, UpgradePath::Demon},       // Great Lord Greatsword [Longsword]
    { 314500, UpgradePath::Demon},       // Great Lord Greatsword [Broadsword]
    { 314600, UpgradePath::Demon},       // Great Lord Greatsword [Balder Side Sword]
    { 314700, UpgradePath::Demon},       // Great Lord Greatsword [Sunlight Straight Sword]
    { 314800, UpgradePath::Demon},       // Great Lord Greatsword [Barbed Straight Sword]
    { 314900, UpgradePath::Demon},       // Great Lord Greatsword [Astora's Straight Sword]
    { 315000, UpgradePath::Demon},       // Great Lord Greatsword [Darksword]
    { 315100, UpgradePath::Demon},       // Great Lord Greatsword [Bastard Sword]
    { 315200, UpgradePath::Demon},       // Great Lord Greatsword [Claymore]
    { 315300, UpgradePath::Demon},       // Great Lord Greatsword [Man-serpent Greatsword]
    { 315400, UpgradePath::Demon},       // Great Lord Greatsword [Flamberge]
    { 315500, UpgradePath::Demon},       // Great Lord Greatsword [Zweihander]
    { 315600, UpgradePath::Demon},       // Great Lord Greatsword [Greatsword]
    { 315700, UpgradePath::Demon},       // Great Lord Greatsword [Demon Great Machete]
    { 350000, UpgradePath::Standard},    // Zweihander
    { 350100, UpgradePath::Crystal},     // Zweihander [Crystal]
    { 350200, UpgradePath::Lightning},   // Zweihander [Lightning]
    { 350300, UpgradePath::Raw},         // Zweihander [Raw]
    { 350400, UpgradePath::Magic},       // Zweihander [Magic]
    { 350500, UpgradePath::Enchanted},   // Zweihander [Enchanted]
    { 350600, UpgradePath::Divine},      // Zweihander [Divine]
    { 350700, UpgradePath::Occult},      // Zweihander [Occult]
    { 350800, UpgradePath::Fire},        // Zweihander [Fire]
    { 350900, UpgradePath::Chaos},       // Zweihander [Chaos]
    { 351000, UpgradePath::Standard},    // Greatsword
    { 351100, UpgradePath::Crystal},     // Greatsword [Crystal]
    { 351200, UpgradePath::Lightning},   // Greatsword [Lightning]
    { 351300, UpgradePath::Raw},         // Greatsword [Raw]
    { 351400, UpgradePath::Magic},       // Greatsword [Magic]
    { 351500, UpgradePath::Enchanted},   // Greatsword [Enchanted]
    { 351600, UpgradePath::Divine},      // Greatsword [Divine]
    { 351700, UpgradePath::Occult},      // Greatsword [Occult]
    { 351800, UpgradePath::Fire},        // Greatsword [Fire]
    { 351900, UpgradePath::Chaos},       // Greatsword [Chaos]
    { 352000, UpgradePath::Standard},    // Demon Great Machete
    { 352100, UpgradePath::Crystal},     // Demon Great Machete [Crystal]
    { 352200, UpgradePath::Lightning},   // Demon Great Machete [Lightning]
    { 352300, UpgradePath::Raw},         // Demon Great Machete [Raw]
    { 352400, UpgradePath::Magic},       // Demon Great Machete [Magic]
    { 352500, UpgradePath::Enchanted},   // Demon Great Machete [Enchanted]
    { 352600, UpgradePath::Divine},      // Demon Great Machete [Divine]
    { 352700, UpgradePath::Occult},      // Demon Great Machete [Occult]
    { 352800, UpgradePath::Fire},        // Demon Great Machete [Fire]
    { 352900, UpgradePath::Chaos},       // Demon Great Machete [Chaos]
    { 354000, UpgradePath::Dragon},      // Dragon Greatsword
    { 355000, UpgradePath::Twinkling},   // Black Knight Greatsword
    { 398000, UpgradePath::NoUpgrade},   // [Ghost] Greatsword
    { 399000, UpgradePath::NoUpgrade},   // [Ghost] Ultra Greatsword
    { 400000, UpgradePath::Standard},    // Scimitar
    { 400100, UpgradePath::Crystal},     // Scimitar [Crystal]
    { 400200, UpgradePath::Lightning},   // Scimitar [Lightning]
    { 400300, UpgradePath::Raw},         // Scimitar [Raw]
    { 400400, UpgradePath::Magic},       // Scimitar [Magic]
    { 400500, UpgradePath::Enchanted},   // Scimitar [Enchanted]
    { 400600, UpgradePath::Divine},      // Scimitar [Divine]
    { 400700, UpgradePath::Occult},      // Scimitar [Occult]
    { 400800, UpgradePath::Fire},        // Scimitar [Fire]
    { 400900, UpgradePath::Chaos},       // Scimitar [Chaos]
    { 401000, UpgradePath::Standard},    // Falchion
    { 401100, UpgradePath::Crystal},     // Falchion [Crystal]
    { 401200, UpgradePath::Lightning},   // Falchion [Lightning]
    { 401300, UpgradePath::Raw},         // Falchion [Raw]
    { 401400, UpgradePath::Magic},       // Falchion [Magic]
    { 401500, UpgradePath::Enchanted},   // Falchion [Enchanted]
    { 401600, UpgradePath::Divine},      // Falchion [Divine]
    { 401700, UpgradePath::Occult},      // Falchion [Occult]
    { 401800, UpgradePath::Fire},        // Falchion [Fire]
    { 401900, UpgradePath::Chaos},       // Falchion [Chaos]
    { 402000, UpgradePath::Standard},    // Shotel
    { 402100, UpgradePath::Crystal},     // Shotel [Crystal]
    { 402200, UpgradePath::Lightning},   // Shotel [Lightning]
    { 402300, UpgradePath::Raw},         // Shotel [Raw]
    { 402400, UpgradePath::Magic},       // Shotel [Magic]
    { 402500, UpgradePath::Enchanted},   // Shotel [Enchanted]
    { 402600, UpgradePath::Divine},      // Shotel [Divine]
    { 402700, UpgradePath::Occult},      // Shotel [Occult]
    { 402800, UpgradePath::Fire},        // Shotel [Fire]
    { 402900, UpgradePath::Chaos},       // Shotel [Chaos]
    { 403000, UpgradePath::Twinkling},   // Jagged Ghost Blade
    { 405000, UpgradePath::Standard},    // Painting Guardian Sword
    { 405100, UpgradePath::Crystal},     // Painting Guardian Sword [Crystal]
    { 405200, UpgradePath::Lightning},   // Painting Guardian Sword [Lightning]
    { 405300, UpgradePath::Raw},         // Painting Guardian Sword [Raw]
    { 405400, UpgradePath::Magic},       // Painting Guardian Sword [Magic]
    { 405500, UpgradePath::Enchanted},   // Painting Guardian Sword [Enchanted]
    { 405600, UpgradePath::Divine},      // Painting Guardian Sword [Divine]
    { 405700, UpgradePath::Occult},      // Painting Guardian Sword [Occult]
    { 405800, UpgradePath::Fire},        // Painting Guardian Sword [Fire]
    { 405900, UpgradePath::Chaos},       // Painting Guardian Sword [Chaos]
    { 406000, UpgradePath::Demon},       // Quelaag's Furysword [Scimitar]
    { 406100, UpgradePath::Demon},       // Quelaag's Furysword [Falchion
    { 406200, UpgradePath::Demon},       // Quelaag's Furysword [Shotel]
    { 406300, UpgradePath::Demon},       // Quelaag's Furysword [Painting Guardian Sword]
    { 406400, UpgradePath::Demon},       // Quelaag's Furysword [Server]
    { 406500, UpgradePath::Demon},       // Quelaag's Furysword [Murakumo]
    { 450000, UpgradePath::Standard},    // Server
    { 450100, UpgradePath::Crystal},     // Server [Crystal]
    { 450200, UpgradePath::Lightning},   // Server [Lightning]
    { 450300, UpgradePath::Raw},         // Server [Raw]
    { 450400, UpgradePath::Magic},       // Server [Magic]
    { 450500, UpgradePath::Enchanted},   // Server [Enchanted]
    { 450600, UpgradePath::Divine},      // Server [Divine]
    { 450700, UpgradePath::Occult},      // Server [Occult]
    { 450800, UpgradePath::Fire},        // Server [Fire]
    { 450900, UpgradePath::Chaos},       // Server [Chaos]
    { 451000, UpgradePath::Standard},    // Murakumo
    { 451100, UpgradePath::Crystal},     // Murakumo [Crystal]
    { 451200, UpgradePath::Lightning},   // Murakumo [Lightning]
    { 451300, UpgradePath::Raw},         // Murakumo [Raw]
    { 451400, UpgradePath::Magic},       // Murakumo [Magic]
    { 451500, UpgradePath::Enchanted},   // Murakumo [Enchanted]
    { 451600, UpgradePath::Divine},      // Murakumo [Divine]
    { 451700, UpgradePath::Occult},      // Murakumo [Occult]
    { 451800, UpgradePath::Fire},        // Murakumo [Fire]
    { 451900, UpgradePath::Chaos},       // Murakumo [Chaos]
    { 453000, UpgradePath::Demon},       // Gravelord Sword
    { 498000, UpgradePath::NoUpgrade},   // [Ghost] Curved Sword
    { 499000, UpgradePath::NoUpgrade},   // [Ghost] Curved Greatsword
    { 500000, UpgradePath::Standard},    // Uchigatana
    { 500100, UpgradePath::Crystal},     // Uchigatana [Crystal]
    { 500200, UpgradePath::Lightning},   // Uchigatana [Lightning]
    { 500300, UpgradePath::Raw},         // Uchigatana [Raw]
    { 500400, UpgradePath::Magic},       // Uchigatana [Magic]
    { 500500, UpgradePath::Enchanted},   // Uchigatana [Enchanted]
    { 500600, UpgradePath::Divine},      // Uchigatana [Divine]
    { 500700, UpgradePath::Occult},      // Uchigatana [Occult]
    { 500800, UpgradePath::Fire},        // Uchigatana [Fire]
    { 500900, UpgradePath::Chaos},       // Uchigatana [Chaos]
    { 501000, UpgradePath::Standard},    // Washing Pole
    { 501100, UpgradePath::Crystal},     // Washing Pole [Crystal]
    { 501200, UpgradePath::Lightning},   // Washing Pole [Lightning]
    { 501300, UpgradePath::Raw},         // Washing Pole [Raw]
    { 501400, UpgradePath::Magic},       // Washing Pole [Magic]
    { 501500, UpgradePath::Enchanted},   // Washing Pole [Enchanted]
    { 501600, UpgradePath::Divine},      // Washing Pole [Divine]
    { 501700, UpgradePath::Occult},      // Washing Pole [Occult]
    { 501800, UpgradePath::Fire},        // Washing Pole [Fire]
    { 501900, UpgradePath::Chaos},       // Washing Pole [Chaos]
    { 502000, UpgradePath::Standard},    // Iaito
    { 502100, UpgradePath::Crystal},     // Iaito [Crystal]
    { 502200, UpgradePath::Lightning},   // Iaito [Lightning]
    { 502300, UpgradePath::Raw},         // Iaito [Raw]
    { 502400, UpgradePath::Magic},       // Iaito [Magic]
    { 502500, UpgradePath::Enchanted},   // Iaito [Enchanted]
    { 502600, UpgradePath::Divine},      // Iaito [Divine]
    { 502700, UpgradePath::Occult},      // Iaito [Occult]
    { 502800, UpgradePath::Fire},        // Iaito [Fire]
    { 502900, UpgradePath::Chaos},       // Iaito [Chaos]
    { 503000, UpgradePath::Demon},       // Chaos Blade [Uchigatana]
    { 503100, UpgradePath::Demon},       // Chaos Blade [Washing Pole]
    { 503200, UpgradePath::Demon},       // Chaos Blade [Iaito]
    { 599000, UpgradePath::NoUpgrade},   // [Ghost] Katana
    { 600000, UpgradePath::Standard},    // Mail Breaker
    { 600100, UpgradePath::Crystal},     // Mail Breaker [Crystal]
    { 600200, UpgradePath::Lightning},   // Mail Breaker [Lightning]
    { 600300, UpgradePath::Raw},         // Mail Breaker [Raw]
    { 600400, UpgradePath::Magic},       // Mail Breaker [Magic]
    { 600500, UpgradePath::Enchanted},   // Mail Breaker [Enchanted]
    { 600600, UpgradePath::Divine},      // Mail Breaker [Divine]
    { 600700, UpgradePath::Occult},      // Mail Breaker [Occult]
    { 600800, UpgradePath::Fire},        // Mail Breaker [Fire]
    { 600900, UpgradePath::Chaos},       // Mail Breaker [Chaos]
    { 601000, UpgradePath::Standard},    // Rapier
    { 601100, UpgradePath::Crystal},     // Rapier [Crystal]
    { 601200, UpgradePath::Lightning},   // Rapier [Lightning]
    { 601300, UpgradePath::Raw},         // Rapier [Raw]
    { 601400, UpgradePath::Magic},       // Rapier [Magic]
    { 601500, UpgradePath::Enchanted},   // Rapier [Enchanted]
    { 601600, UpgradePath::Divine},      // Rapier [Divine]
    { 601700, UpgradePath::Occult},      // Rapier [Occult]
    { 601800, UpgradePath::Fire},        // Rapier [Fire]
    { 601900, UpgradePath::Chaos},       // Rapier [Chaos]
    { 602000, UpgradePath::Standard},    // Estoc
    { 602100, UpgradePath::Crystal},     // Estoc [Crystal]
    { 602200, UpgradePath::Lightning},   // Estoc [Lightning]
    { 602300, UpgradePath::Raw},         // Estoc [Raw]
    { 602400, UpgradePath::Magic},       // Estoc [Magic]
    { 602500, UpgradePath::Enchanted},   // Estoc [Enchanted]
    { 602600, UpgradePath::Divine},      // Estoc [Divine]
    { 602700, UpgradePath::Occult},      // Estoc [Occult]
    { 602800, UpgradePath::Fire},        // Estoc [Fire]
    { 602900, UpgradePath::Chaos},       // Estoc [Chaos]
    { 603000, UpgradePath::Twinkling},   // Velka's Rapier
    { 604000, UpgradePath::Standard},    // Ricard's Rapier
    { 604100, UpgradePath::Crystal},     // Ricard's Rapier [Crystal]
    { 604200, UpgradePath::Lightning},   // Ricard's Rapier [Lightning]
    { 604300, UpgradePath::Raw},         // Ricard's Rapier [Raw]
    { 604400, UpgradePath::Magic},       // Ricard's Rapier [Magic]
    { 604500, UpgradePath::Enchanted},   // Ricard's Rapier [Enchanted]
    { 604600, UpgradePath::Divine},      // Ricard's Rapier [Divine]
    { 604700, UpgradePath::Occult},      // Ricard's Rapier [Occult]
    { 604800, UpgradePath::Fire},        // Ricard's Rapier [Fire]
    { 604900, UpgradePath::Chaos},       // Ricard's Rapier [Chaos]
    { 699000, UpgradePath::NoUpgrade},   // [Ghost] Thrusting Sword
    { 700000, UpgradePath::Standard},    // Hand Axe
    { 700100, UpgradePath::Crystal},     // Hand Axe [Crystal]
    { 700200, UpgradePath::Lightning},   // Hand Axe [Lightning]
    { 700300, UpgradePath::Raw},         // Hand Axe [Raw]
    { 700400, UpgradePath::Magic},       // Hand Axe [Magic]
    { 700500, UpgradePath::Enchanted},   // Hand Axe [Enchanted]
    { 700600, UpgradePath::Divine},      // Hand Axe [Divine]
    { 700700, UpgradePath::Occult},      // Hand Axe [Occult]
    { 700800, UpgradePath::Fire},        // Hand Axe [Fire]
    { 700900, UpgradePath::Chaos},       // Hand Axe [Chaos]
    { 701000, UpgradePath::Standard},    // Battle Axe
    { 701100, UpgradePath::Crystal},     // Battle Axe [Crystal]
    { 701200, UpgradePath::Lightning},   // Battle Axe [Lightning]
    { 701300, UpgradePath::Raw},         // Battle Axe [Raw]
    { 701400, UpgradePath::Magic},       // Battle Axe [Magic]
    { 701500, UpgradePath::Enchanted},   // Battle Axe [Enchanted]
    { 701600, UpgradePath::Divine},      // Battle Axe [Divine]
    { 701700, UpgradePath::Occult},      // Battle Axe [Occult]
    { 701800, UpgradePath::Fire},        // Battle Axe [Fire]
    { 701900, UpgradePath::Chaos},       // Battle Axe [Chaos]
    { 702000, UpgradePath::Twinkling},   // Crescent Axe
    { 703000, UpgradePath::Standard},    // Butcher Knife
    { 703100, UpgradePath::Crystal},     // Butcher Knife [Crystal]
    { 703200, UpgradePath::Lightning},   // Butcher Knife [Lightning]
    { 703300, UpgradePath::Raw},         // Butcher Knife [Raw]
    { 703400, UpgradePath::Magic},       // Butcher Knife [Magic]
    { 703500, UpgradePath::Enchanted},   // Butcher Knife [Enchanted]
    { 703600, UpgradePath::Divine},      // Butcher Knife [Divine]
    { 703700, UpgradePath::Occult},      // Butcher Knife [Occult]
    { 703800, UpgradePath::Fire},        // Butcher Knife [Fire]
    { 703900, UpgradePath::Chaos},       // Butcher Knife [Chaos]
    { 704000, UpgradePath::Demon},       // Golem Axe [Hand Axe]
    { 704100, UpgradePath::Demon},       // Golem Axe [Battle Axe]
    { 704200, UpgradePath::Demon},       // Golem Axe [Crescent Axe]
    { 704300, UpgradePath::Demon},       // Golem Axe [Butcher Knife]
    { 704400, UpgradePath::Demon},       // Golem Axe [Gargoyle Tail Axe]
    { 704500, UpgradePath::Demon},       // Golem Axe [Greataxe
    { 704600, UpgradePath::Demon},       // Golem Axe [Demon's Greataxe
    { 705000, UpgradePath::Standard},    // Gargoyle Tail Axe
    { 705100, UpgradePath::Crystal},     // Gargoyle Tail Axe [Crystal]
    { 705200, UpgradePath::Lightning},   // Gargoyle Tail Axe [Lightning]
    { 705300, UpgradePath::Raw},         // Gargoyle Tail Axe [Raw]
    { 705400, UpgradePath::Magic},       // Gargoyle Tail Axe [Magic]
    { 705500, UpgradePath::Enchanted},   // Gargoyle Tail Axe [Enchanted]
    { 705600, UpgradePath::Divine},      // Gargoyle Tail Axe [Divine]
    { 705700, UpgradePath::Occult},      // Gargoyle Tail Axe [Occult]
    { 705800, UpgradePath::Fire},        // Gargoyle Tail Axe [Fire]
    { 705900, UpgradePath::Chaos},       // Gargoyle Tail Axe [Chaos]
    { 750000, UpgradePath::Standard},    // Greataxe
    { 750100, UpgradePath::Crystal},     // Greataxe [Crystal]
    { 750200, UpgradePath::Lightning},   // Greataxe [Lightning]
    { 750300, UpgradePath::Raw},         // Greataxe [Raw]
    { 750400, UpgradePath::Magic},       // Greataxe [Magic]
    { 750500, UpgradePath::Enchanted},   // Greataxe [Enchanted]
    { 750600, UpgradePath::Divine},      // Greataxe [Divine]
    { 750700, UpgradePath::Occult},      // Greataxe [Occult]
    { 750800, UpgradePath::Fire},        // Greataxe [Fire]
    { 750900, UpgradePath::Chaos},       // Greataxe [Chaos]
    { 751000, UpgradePath::Standard},    // Demon's Greataxe
    { 751100, UpgradePath::Crystal},     // Demon's Greataxe [Crystal]
    { 751200, UpgradePath::Lightning},   // Demon's Greataxe [Lightning]
    { 751300, UpgradePath::Raw},         // Demon's Greataxe [Raw]
    { 751400, UpgradePath::Magic},       // Demon's Greataxe [Magic]
    { 751500, UpgradePath::Enchanted},   // Demon's Greataxe [Enchanted]
    { 751600, UpgradePath::Divine},      // Demon's Greataxe [Divine]
    { 751700, UpgradePath::Occult},      // Demon's Greataxe [Occult]
    { 751800, UpgradePath::Fire},        // Demon's Greataxe [Fire]
    { 751900, UpgradePath::Chaos},       // Demon's Greataxe [Chaos]
    { 752000, UpgradePath::Dragon},      // Dragon King Greataxe
    { 753000, UpgradePath::Twinkling},   // Black Knight Greataxe
    { 798000, UpgradePath::NoUpgrade},   // [Ghost] Axe
    { 799000, UpgradePath::NoUpgrade},   // [Ghost] Greataxe
    { 800000, UpgradePath::Standard},    // Club
    { 800100, UpgradePath::Crystal},     // Club [Crystal]
    { 800200, UpgradePath::Lightning},   // Club [Lightning]
    { 800300, UpgradePath::Raw},         // Club [Raw]
    { 800400, UpgradePath::Magic},       // Club [Magic]
    { 800500, UpgradePath::Enchanted},   // Club [Enchanted]
    { 800600, UpgradePath::Divine},      // Club [Divine]
    { 800700, UpgradePath::Occult},      // Club [Occult]
    { 800800, UpgradePath::Fire},        // Club [Fire]
    { 800900, UpgradePath::Chaos},       // Club [Chaos]
    { 801000, UpgradePath::Standard},    // Mace
    { 801100, UpgradePath::Crystal},     // Mace [Crystal]
    { 801200, UpgradePath::Lightning},   // Mace [Lightning]
    { 801300, UpgradePath::Raw},         // Mace [Raw]
    { 801400, UpgradePath::Magic},       // Mace [Magic]
    { 801500, UpgradePath::Enchanted},   // Mace [Enchanted]
    { 801600, UpgradePath::Divine},      // Mace [Divine]
    { 801700, UpgradePath::Occult},      // Mace [Occult]
    { 801800, UpgradePath::Fire},        // Mace [Fire]
    { 801900, UpgradePath::Chaos},       // Mace [Chaos]
    { 802000, UpgradePath::Standard},    // Morning Star
    { 802100, UpgradePath::Crystal},     // Morning Star [Crystal]
    { 802200, UpgradePath::Lightning},   // Morning Star [Lightning]
    { 802300, UpgradePath::Raw},         // Morning Star [Raw]
    { 802400, UpgradePath::Magic},       // Morning Star [Magic]
    { 802500, UpgradePath::Enchanted},   // Morning Star [Enchanted]
    { 802600, UpgradePath::Divine},      // Morning Star [Divine]
    { 802700, UpgradePath::Occult},      // Morning Star [Occult]
    { 802800, UpgradePath::Fire},        // Morning Star [Fire]
    { 802900, UpgradePath::Chaos},       // Morning Star [Chaos]
    { 803000, UpgradePath::Standard},    // Warpick
    { 803100, UpgradePath::Crystal},     // Warpick [Crystal]
    { 803200, UpgradePath::Lightning},   // Warpick [Lightning]
    { 803300, UpgradePath::Raw},         // Warpick [Raw]
    { 803400, UpgradePath::Magic},       // Warpick [Magic]
    { 803500, UpgradePath::Enchanted},   // Warpick [Enchanted]
    { 803600, UpgradePath::Divine},      // Warpick [Divine]
    { 803700, UpgradePath::Occult},      // Warpick [Occult]
    { 803800, UpgradePath::Fire},        // Warpick [Fire]
    { 803900, UpgradePath::Chaos},       // Warpick [Chaos]
    { 804000, UpgradePath::Standard},    // Pickaxe
    { 804100, UpgradePath::Crystal},     // Pickaxe [Crystal]
    { 804200, UpgradePath::Lightning},   // Pickaxe [Lightning]
    { 804300, UpgradePath::Raw},         // Pickaxe [Raw]
    { 804400, UpgradePath::Magic},       // Pickaxe [Magic]
    { 804500, UpgradePath::Enchanted},   // Pickaxe [Enchanted]
    { 804600, UpgradePath::Divine},      // Pickaxe [Divine]
    { 804700, UpgradePath::Occult},      // Pickaxe [Occult]
    { 804800, UpgradePath::Fire},        // Pickaxe [Fire]
    { 804900, UpgradePath::Chaos},       // Pickaxe [Chaos]
    { 809000, UpgradePath::Standard},    // Reinforced Club
    { 809100, UpgradePath::Crystal},     // Reinforced Club [Crystal]
    { 809200, UpgradePath::Lightning},   // Reinforced Club [Lightning]
    { 809300, UpgradePath::Raw},         // Reinforced Club [Raw]
    { 809400, UpgradePath::Magic},       // Reinforced Club [Magic]
    { 809500, UpgradePath::Enchanted},   // Reinforced Club [Enchanted]
    { 809600, UpgradePath::Divine},      // Reinforced Club [Divine]
    { 809700, UpgradePath::Occult},      // Reinforced Club [Occult]
    { 809800, UpgradePath::Fire},        // Reinforced Club [Fire]
    { 809900, UpgradePath::Chaos},       // Reinforced Club [Chaos]
    { 810000, UpgradePath::Standard},    // Blacksmith Hammer
    { 810100, UpgradePath::Crystal},     // Blacksmith Hammer [Crystal]
    { 810200, UpgradePath::Lightning},   // Blacksmith Hammer [Lightning]
    { 810300, UpgradePath::Raw},         // Blacksmith Hammer [Raw]
    { 810400, UpgradePath::Magic},       // Blacksmith Hammer [Magic]
    { 810500, UpgradePath::Enchanted},   // Blacksmith Hammer [Enchanted]
    { 810600, UpgradePath::Divine},      // Blacksmith Hammer [Divine]
    { 810700, UpgradePath::Occult},      // Blacksmith Hammer [Occult]
    { 810800, UpgradePath::Fire},        // Blacksmith Hammer [Fire]
    { 810900, UpgradePath::Chaos},       // Blacksmith Hammer [Chaos]
    { 811000, UpgradePath::Twinkling},   // Blacksmith Giant Hammer
    { 812000, UpgradePath::Twinkling},   // Hammer of Vamos
    { 850000, UpgradePath::Standard},    // Great Club
    { 850100, UpgradePath::Crystal},     // Great Club [Crystal]
    { 850200, UpgradePath::Lightning},   // Great Club [Lightning]
    { 850300, UpgradePath::Raw},         // Great Club [Raw]
    { 850400, UpgradePath::Magic},       // Great Club [Magic]
    { 850500, UpgradePath::Enchanted},   // Great Club [Enchanted]
    { 850600, UpgradePath::Divine},      // Great Club [Divine]
    { 850700, UpgradePath::Occult},      // Great Club [Occult]
    { 850800, UpgradePath::Fire},        // Great Club [Fire]
    { 850900, UpgradePath::Chaos},       // Great Club [Chaos]
    { 851000, UpgradePath::Twinkling},   // Grant
    { 852000, UpgradePath::Standard},    // Demon's Great Hammer
    { 852100, UpgradePath::Crystal},     // Demon's Great Hammer [Crystal]
    { 852200, UpgradePath::Lightning},   // Demon's Great Hammer [Lightning]
    { 852300, UpgradePath::Raw},         // Demon's Great Hammer [Raw]
    { 852400, UpgradePath::Magic},       // Demon's Great Hammer [Magic]
    { 852500, UpgradePath::Enchanted},   // Demon's Great Hammer [Enchanted]
    { 852600, UpgradePath::Divine},      // Demon's Great Hammer [Divine]
    { 852700, UpgradePath::Occult},      // Demon's Great Hammer [Occult]
    { 852800, UpgradePath::Fire},        // Demon's Great Hammer [Fire]
    { 852900, UpgradePath::Chaos},       // Demon's Great Hammer [Chaos]
    { 854000, UpgradePath::Dragon},      // Dragon Tooth
    { 855000, UpgradePath::Standard},    // Large Club
    { 855100, UpgradePath::Crystal},     // Large Club [Crystal]
    { 855200, UpgradePath::Lightning},   // Large Club [Lightning]
    { 855300, UpgradePath::Raw},         // Large Club [Raw]
    { 855400, UpgradePath::Magic},       // Large Club [Magic]
    { 855500, UpgradePath::Enchanted},   // Large Club [Enchanted]
    { 855600, UpgradePath::Divine},      // Large Club [Divine]
    { 855700, UpgradePath::Occult},      // Large Club [Occult]
    { 855800, UpgradePath::Fire},        // Large Club [Fire]
    { 855900, UpgradePath::Chaos},       // Large Club [Chaos]
    { 856000, UpgradePath::Demon},       // Smough's Hammer [Club]
    { 856100, UpgradePath::Demon},       // Smough's Hammer [Mace]
    { 856200, UpgradePath::Demon},       // Smough's Hammer [Morning Star]
    { 856300, UpgradePath::Demon},       // Smough's Hammer [Warpick]
    { 856400, UpgradePath::Demon},       // Smough's Hammer [Pickaxe]
    { 856500, UpgradePath::Demon},       // Smough's Hammer [Reinforced Club]
    { 856600, UpgradePath::Demon},       // Smough's Hammer [Blacksmith Hammer]
    { 856700, UpgradePath::Demon},       // Smough's Hammer [Blacksmith Giant Hammer
    { 856800, UpgradePath::Demon},       // Smough's Hammer [Hammer of Vamos]
    { 856900, UpgradePath::Demon},       // Smough's Hammer [Great Club]
    { 857000, UpgradePath::Demon},       // Smough's Hammer [Demon's Great Hammer]
    { 857100, UpgradePath::Demon},       // Smough's Hammer [Large Club]
    { 898000, UpgradePath::NoUpgrade},   // [Ghost] Hammer
    { 899000, UpgradePath::NoUpgrade},   // [Ghost] Mallet
    { 900000, UpgradePath::NoUpgrade},   // Fists
    { 901000, UpgradePath::Standard},    // Caestus
    { 901100, UpgradePath::Crystal},     // Caestus [Crystal]
    { 901200, UpgradePath::Lightning},   // Caestus [Lightning]
    { 901300, UpgradePath::Raw},         // Caestus [Raw]
    { 901400, UpgradePath::Magic},       // Caestus [Magic]
    { 901500, UpgradePath::Enchanted},   // Caestus [Enchanted]
    { 901600, UpgradePath::Divine},      // Caestus [Divine]
    { 901700, UpgradePath::Occult},      // Caestus [Occult]
    { 901800, UpgradePath::Fire},        // Caestus [Fire]
    { 901900, UpgradePath::Chaos},       // Caestus [Chaos]
    { 902000, UpgradePath::Standard},    // Claw
    { 902100, UpgradePath::Crystal},     // Claw [Crystal]
    { 902200, UpgradePath::Lightning},   // Claw [Lightning]
    { 902300, UpgradePath::Raw},         // Claw [Raw]
    { 902400, UpgradePath::Magic},       // Claw [Magic]
    { 902500, UpgradePath::Enchanted},   // Claw [Enchanted]
    { 902600, UpgradePath::Divine},      // Claw [Divine]
    { 902700, UpgradePath::Occult},      // Claw [Occult]
    { 902800, UpgradePath::Fire},        // Claw [Fire]
    { 902900, UpgradePath::Chaos},       // Claw [Chaos]
    { 903000, UpgradePath::Dragon},      // Dragon Bone Fist [Caestus]
    { 903100, UpgradePath::Dragon},      // Dragon Bone Fist [Claw]
    { 904000, UpgradePath::NoUpgrade},   // Dark Hand
    { 999000, UpgradePath::NoUpgrade},   // [Ghost] Fist
    {1000000, UpgradePath::Standard},    // Spear
    {1000100, UpgradePath::Crystal},     // Spear [Crystal]
    {1000200, UpgradePath::Lightning},   // Spear [Lightning]
    {1000300, UpgradePath::Raw},         // Spear [Raw]
    {1000400, UpgradePath::Magic},       // Spear [Magic]
    {1000500, UpgradePath::Enchanted},   // Spear [Enchanted]
    {1000600, UpgradePath::Divine},      // Spear [Divine]
    {1000700, UpgradePath::Occult},      // Spear [Occult]
    {1000800, UpgradePath::Fire},        // Spear [Fire]
    {1000900, UpgradePath::Chaos},       // Spear [Chaos]
    {1001000, UpgradePath::Standard},    // Winged Spear
    {1001100, UpgradePath::Crystal},     // Winged Spear [Crystal]
    {1001200, UpgradePath::Lightning},   // Winged Spear [Lightning]
    {1001300, UpgradePath::Raw},         // Winged Spear [Raw]
    {1001400, UpgradePath::Magic},       // Winged Spear [Magic]
    {1001500, UpgradePath::Enchanted},   // Winged Spear [Enchanted]
    {1001600, UpgradePath::Divine},      // Winged Spear [Divine]
    {1001700, UpgradePath::Occult},      // Winged Spear [Occult]
    {1001800, UpgradePath::Fire},        // Winged Spear [Fire]
    {1001900, UpgradePath::Chaos},       // Winged Spear [Chaos]
    {1002000, UpgradePath::Standard},    // Partizan
    {1002100, UpgradePath::Crystal},     // Partizan [Crystal]
    {1002200, UpgradePath::Lightning},   // Partizan [Lightning]
    {1002300, UpgradePath::Raw},         // Partizan [Raw]
    {1002400, UpgradePath::Magic},       // Partizan [Magic]
    {1002500, UpgradePath::Enchanted},   // Partizan [Enchanted]
    {1002600, UpgradePath::Divine},      // Partizan [Divine]
    {1002700, UpgradePath::Occult},      // Partizan [Occult]
    {1002800, UpgradePath::Fire},        // Partizan [Fire]
    {1002900, UpgradePath::Chaos},       // Partizan [Chaos]
    {1003000, UpgradePath::Demon},       // Demon's Spear
    {1004000, UpgradePath::Twinkling},   // Channeler's Trident
    {1006000, UpgradePath::Twinkling},   // Silver Knight Spear
    {1050000, UpgradePath::Standard},    // Pike
    {1050100, UpgradePath::Crystal},     // Pike [Crystal]
    {1050200, UpgradePath::Lightning},   // Pike [Lightning]
    {1050300, UpgradePath::Raw},         // Pike [Raw]
    {1050400, UpgradePath::Magic},       // Pike [Magic]
    {1050500, UpgradePath::Enchanted},   // Pike [Enchanted]
    {1050600, UpgradePath::Divine},      // Pike [Divine]
    {1050700, UpgradePath::Occult},      // Pike [Occult]
    {1050800, UpgradePath::Fire},        // Pike [Fire]
    {1050900, UpgradePath::Chaos},       // Pike [Chaos]
    {1051000, UpgradePath::Demon},       // Dragonslayer Spear [Mail Breaker]
    {1051100, UpgradePath::Demon},       // Dragonslayer Spear [Rapier]
    {1051200, UpgradePath::Demon},       // Dragonslayer Spear [Estoc]
    {1051300, UpgradePath::Demon},       // Dragonslayer Spear [Spear]
    {1051400, UpgradePath::Demon},       // Dragonslayer Spear [Winged Spear]
    {1051500, UpgradePath::Demon},       // Dragonslayer Spear [Partizan]
    {1051600, UpgradePath::Demon},       // Dragonslayer Spear [Demon's Spear
    {1051700, UpgradePath::Demon},       // Dragonslayer Spear [Channeler's Trident]
    {1051800, UpgradePath::Demon},       // Dragonslayer Spear [Pike]
    {1051900, UpgradePath::Demon},       // Dragonslayer Spear [Ricard's Rapier]
    {1052000, UpgradePath::Demon},       // Moonlight Butterfly Horn [Mail Breaker]
    {1052100, UpgradePath::Demon},       // Moonlight Butterfly Horn [Rapier]
    {1052200, UpgradePath::Demon},       // Moonlight Butterfly Horn [Estoc]
    {1052300, UpgradePath::Demon},       // Moonlight Butterfly Horn [Spear]
    {1052400, UpgradePath::Demon},       // Moonlight Butterfly Horn [Winged Spear]
    {1052500, UpgradePath::Demon},       // Moonlight Butterfly Horn [Partizan]
    {1052600, UpgradePath::Demon},       // Moonlight Butterfly Horn [Demon's Spear]
    {1052700, UpgradePath::Demon},       // Moonlight Butterfly Horn [Channeler's Trident]
    {1052800, UpgradePath::Demon},       // Moonlight Butterfly Horn [Pike]
    {1052900, UpgradePath::Demon},       // Moonlight Butterfly Horn [Ricard's Rapier]
    {1053000, UpgradePath::Demon},       // Moonlight Butterfly Horn [Four-pronged Plow]
    {1054000, UpgradePath::Demon},       // Dragonslayer Spear [Four-pronged Plow]
    {1099000, UpgradePath::NoUpgrade},   // [Ghost] Spear
    {1100000, UpgradePath::Standard},    // Halberd
    {1100100, UpgradePath::Crystal},     // Halberd [Crystal]
    {1100200, UpgradePath::Lightning},   // Halberd [Lightning]
    {1100300, UpgradePath::Raw},         // Halberd [Raw]
    {1100400, UpgradePath::Magic},       // Halberd [Magic]
    {1100500, UpgradePath::Enchanted},   // Halberd [Enchanted]
    {1100600, UpgradePath::Divine},      // Halberd [Divine]
    {1100700, UpgradePath::Occult},      // Halberd [Occult]
    {1100800, UpgradePath::Fire},        // Halberd [Fire]
    {1100900, UpgradePath::Chaos},       // Halberd [Chaos]
    {1101000, UpgradePath::Twinkling},   // Giant's Halberd
    {1102000, UpgradePath::Twinkling},   // Titanite Catch Pole
    {1103000, UpgradePath::Standard},    // Gargoyle's Halberd
    {1103100, UpgradePath::Crystal},     // Gargoyle's Halberd [Crystal]
    {1103200, UpgradePath::Lightning},   // Gargoyle's Halberd [Lightning]
    {1103300, UpgradePath::Raw},         // Gargoyle's Halberd [Raw]
    {1103400, UpgradePath::Magic},       // Gargoyle's Halberd [Magic]
    {1103500, UpgradePath::Enchanted},   // Gargoyle's Halberd [Enchanted]
    {1103600, UpgradePath::Divine},      // Gargoyle's Halberd [Divine]
    {1103700, UpgradePath::Occult},      // Gargoyle's Halberd [Occult]
    {1103800, UpgradePath::Fire},        // Gargoyle's Halberd [Fire]
    {1103900, UpgradePath::Chaos},       // Gargoyle's Halberd [Chaos]
    {1105000, UpgradePath::Twinkling},   // Black Knight Halberd
    {1106000, UpgradePath::Standard},    // Lucerne
    {1106100, UpgradePath::Crystal},     // Lucerne [Crystal]
    {1106200, UpgradePath::Lightning},   // Lucerne [Lightning]
    {1106300, UpgradePath::Raw},         // Lucerne [Raw]
    {1106400, UpgradePath::Magic},       // Lucerne [Magic]
    {1106500, UpgradePath::Enchanted},   // Lucerne [Enchanted]
    {1106600, UpgradePath::Divine},      // Lucerne [Divine]
    {1106700, UpgradePath::Occult},      // Lucerne [Occult]
    {1106800, UpgradePath::Fire},        // Lucerne [Fire]
    {1106900, UpgradePath::Chaos},       // Lucerne [Chaos]
    {1107000, UpgradePath::Standard},    // Scythe
    {1107100, UpgradePath::Crystal},     // Scythe [Crystal]
    {1107200, UpgradePath::Lightning},   // Scythe [Lightning]
    {1107300, UpgradePath::Raw},         // Scythe [Raw]
    {1107400, UpgradePath::Magic},       // Scythe [Magic]
    {1107500, UpgradePath::Enchanted},   // Scythe [Enchanted]
    {1107600, UpgradePath::Divine},      // Scythe [Divine]
    {1107700, UpgradePath::Occult},      // Scythe [Occult]
    {1107800, UpgradePath::Fire},        // Scythe [Fire]
    {1107900, UpgradePath::Chaos},       // Scythe [Chaos]
    {1150000, UpgradePath::Standard},    // Great Scythe
    {1150100, UpgradePath::Crystal},     // Great Scythe [Crystal]
    {1150200, UpgradePath::Lightning},   // Great Scythe [Lightning]
    {1150300, UpgradePath::Raw},         // Great Scythe [Raw]
    {1150400, UpgradePath::Magic},       // Great Scythe [Magic]
    {1150500, UpgradePath::Enchanted},   // Great Scythe [Enchanted]
    {1150600, UpgradePath::Divine},      // Great Scythe [Divine]
    {1150700, UpgradePath::Occult},      // Great Scythe [Occult]
    {1150800, UpgradePath::Fire},        // Great Scythe [Fire]
    {1150900, UpgradePath::Chaos},       // Great Scythe [Chaos]
    {1151000, UpgradePath::Demon},       // Lifehunt Scythe [Halberd]
    {1151100, UpgradePath::Demon},       // Lifehunt Scythe [Lucerne]
    {1151200, UpgradePath::Demon},       // Lifehunt Scythe [Scythe]
    {1151300, UpgradePath::Demon},       // Lifehunt Scythe [Giant's Halberd]
    {1151400, UpgradePath::Demon},       // Lifehunt Scythe [Gargoyle's Halberd]
    {1151500, UpgradePath::Demon},       // Lifehunt Scythe [Great Scythe]
    {1151600, UpgradePath::Demon},       // Lifehunt Scythe [Whip]
    {1151700, UpgradePath::Demon},       // Lifehunt Scythe [Notched Whip]
    {1151800, UpgradePath::Demon},       // Lifehunt Scythe [Guardian Tail]
    {1199000, UpgradePath::NoUpgrade},   // [Ghost] Scythe
    {1200000, UpgradePath::Standard},    // Short Bow
    {1200100, UpgradePath::Crystal},     // Short Bow [Crystal]
    {1200200, UpgradePath::Lightning},   // Short Bow [Lightning]
    {1200300, UpgradePath::Raw},         // Short Bow [Raw]
    {1200400, UpgradePath::Magic},       // Short Bow [Magic]
    {1200500, UpgradePath::Enchanted},   // Short Bow [Enchanted]
    {1200600, UpgradePath::Divine},      // Short Bow [Divine]
    {1200700, UpgradePath::Occult},      // Short Bow [Occult]
    {1200800, UpgradePath::Fire},        // Short Bow [Fire]
    {1200900, UpgradePath::Chaos},       // Short Bow [Chaos]
    {1201000, UpgradePath::Standard},    // Longbow
    {1201100, UpgradePath::Crystal},     // Longbow [Crystal]
    {1201200, UpgradePath::Lightning},   // Longbow [Lightning]
    {1201300, UpgradePath::Raw},         // Longbow [Raw]
    {1201400, UpgradePath::Magic},       // Longbow [Magic]
    {1201500, UpgradePath::Enchanted},   // Longbow [Enchanted]
    {1201600, UpgradePath::Divine},      // Longbow [Divine]
    {1201700, UpgradePath::Occult},      // Longbow [Occult]
    {1201800, UpgradePath::Fire},        // Longbow [Fire]
    {1201900, UpgradePath::Chaos},       // Longbow [Chaos]
    {1202000, UpgradePath::Standard},    // Black Bow of Pharis
    {1202100, UpgradePath::Crystal},     // Black Bow of Pharis [Crystal]
    {1202200, UpgradePath::Lightning},   // Black Bow of Pharis [Lightning]
    {1202300, UpgradePath::Raw},         // Black Bow of Pharis [Raw]
    {1202400, UpgradePath::Magic},       // Black Bow of Pharis [Magic]
    {1202500, UpgradePath::Enchanted},   // Black Bow of Pharis [Enchanted]
    {1202600, UpgradePath::Divine},      // Black Bow of Pharis [Divine]
    {1202700, UpgradePath::Occult},      // Black Bow of Pharis [Occult]
    {1202800, UpgradePath::Fire},        // Black Bow of Pharis [Fire]
    {1202900, UpgradePath::Chaos},       // Black Bow of Pharis [Chaos]
    {1203000, UpgradePath::Twinkling},   // Dragonslayer Greatbow
    {1204000, UpgradePath::Standard},    // Composite Bow
    {1204100, UpgradePath::Crystal},     // Composite Bow [Crystal]
    {1204200, UpgradePath::Lightning},   // Composite Bow [Lightning]
    {1204300, UpgradePath::Raw},         // Composite Bow [Raw]
    {1204400, UpgradePath::Magic},       // Composite Bow [Magic]
    {1204500, UpgradePath::Enchanted},   // Composite Bow [Enchanted]
    {1204600, UpgradePath::Divine},      // Composite Bow [Divine]
    {1204700, UpgradePath::Occult},      // Composite Bow [Occult]
    {1204800, UpgradePath::Fire},        // Composite Bow [Fire]
    {1204900, UpgradePath::Chaos},       // Composite Bow [Chaos]
    {1205000, UpgradePath::Demon},       // Darkmoon Bow [Short Bow]
    {1205100, UpgradePath::Demon},       // Darkmoon Bow [Composite Bow]
    {1205200, UpgradePath::Demon},       // Darkmoon Bow [Longbow]
    {1205300, UpgradePath::Demon},       // Darkmoon Bow [Black Bow of Pharis]
    {1250000, UpgradePath::Standard},    // Light Crossbow
    {1250100, UpgradePath::Crystal},     // Light Crossbow [Crystal]
    {1250200, UpgradePath::Lightning},   // Light Crossbow [Lightning]
    {1250400, UpgradePath::Magic},       // Light Crossbow [Magic]
    {1250600, UpgradePath::Divine},      // Light Crossbow [Divine]
    {1250800, UpgradePath::Fire},        // Light Crossbow [Fire]
    {1251000, UpgradePath::Standard},    // Heavy Crossbow
    {1251100, UpgradePath::Crystal},     // Heavy Crossbow [Crystal]
    {1251200, UpgradePath::Lightning},   // Heavy Crossbow [Lightning]
    {1251400, UpgradePath::Magic},       // Heavy Crossbow [Magic]
    {1251600, UpgradePath::Divine},      // Heavy Crossbow [Divine]
    {1251800, UpgradePath::Fire},        // Heavy Crossbow [Fire]
    {1252000, UpgradePath::Standard},    // Avelyn
    {1252100, UpgradePath::Crystal},     // Avelyn [Crystal]
    {1252200, UpgradePath::Lightning},   // Avelyn [Lightning]
    {1252400, UpgradePath::Magic},       // Avelyn [Magic]
    {1252600, UpgradePath::Divine},      // Avelyn [Divine]
    {1252800, UpgradePath::Fire},        // Avelyn [Fire]
    {1253000, UpgradePath::Standard},    // Sniper Crossbow
    {1253100, UpgradePath::Crystal},     // Sniper Crossbow [Crystal]
    {1253200, UpgradePath::Lightning},   // Sniper Crossbow [Lightning]
    {1253400, UpgradePath::Magic},       // Sniper Crossbow [Magic]
    {1253600, UpgradePath::Divine},      // Sniper Crossbow [Divine]
    {1253800, UpgradePath::Fire},        // Sniper Crossbow [Fire]
    {1298000, UpgradePath::NoUpgrade},   // [Ghost] Bow
    {1299000, UpgradePath::NoUpgrade},   // [Ghost] Crossbow
    {1300000, UpgradePath::NoUpgrade},   // Sorcerer's Catalyst
    {1301000, UpgradePath::NoUpgrade},   // Beatrice's Catalyst
    {1302000, UpgradePath::NoUpgrade},   // Tin Banishment Catalyst
    {1303000, UpgradePath::NoUpgrade},   // Logan's Catalyst
    {1304000, UpgradePath::NoUpgrade},   // Tin Darkmoon Catalyst [Sorcerer's Catalyst]
    {1304100, UpgradePath::NoUpgrade},   // Tin Darkmoon Catalyst [Beatrice's Catalyst]
    {1304200, UpgradePath::NoUpgrade},   // Tin Darkmoon Catalyst [Tin Banishment Catalyst]
    {1304300, UpgradePath::NoUpgrade},   // Tin Darkmoon Catalyst [Logan's Catalyst]
    {1304400, UpgradePath::NoUpgrade},   // Tin Darkmoon Catalyst [Oolacile Ivory Catalyst]
    {1304500, UpgradePath::NoUpgrade},   // Tin Darkmoon Catalyst [Oolacile Catalyst]
    {1305000, UpgradePath::NoUpgrade},   // Oolacile Ivory Catalyst
    {1306000, UpgradePath::NoUpgrade},   // Tin Crystallization Ctlyst.
    {1307000, UpgradePath::NoUpgrade},   // Demon's Catalyst
    {1308000, UpgradePath::NoUpgrade},   // Izalith Catalyst
    {1330000, UpgradePath::Pyromancy},   // Pyromancy Flame
    {1330100, UpgradePath::Pyromancy},   // Pyromancy Flame +1
    {1330200, UpgradePath::Pyromancy},   // Pyromancy Flame +2
    {1330300, UpgradePath::Pyromancy},   // Pyromancy Flame +3
    {1330400, UpgradePath::Pyromancy},   // Pyromancy Flame +4
    {1330500, UpgradePath::Pyromancy},   // Pyromancy Flame +5
    {1330600, UpgradePath::Pyromancy},   // Pyromancy Flame +6
    {1330700, UpgradePath::Pyromancy},   // Pyromancy Flame +7
    {1330800, UpgradePath::Pyromancy},   // Pyromancy Flame +8
    {1330900, UpgradePath::Pyromancy},   // Pyromancy Flame +9
    {1331000, UpgradePath::Pyromancy},   // Pyromancy Flame +10
    {1331100, UpgradePath::Pyromancy},   // Pyromancy Flame +11
    {1331200, UpgradePath::Pyromancy},   // Pyromancy Flame +12
    {1331300, UpgradePath::Pyromancy},   // Pyromancy Flame +13
    {1331400, UpgradePath::Pyromancy},   // Pyromancy Flame +14
    {1331500, UpgradePath::Pyromancy},   // Pyromancy Flame +15
    {1332000, UpgradePath::Pyromancy},   // Ascended Pyromancy Flame
    {1332100, UpgradePath::Pyromancy},   // Ascended Pyromancy Flame +1
    {1332200, UpgradePath::Pyromancy},   // Ascended Pyromancy Flame +2
    {1332300, UpgradePath::Pyromancy},   // Ascended Pyromancy Flame +3
    {1332400, UpgradePath::Pyromancy},   // Ascended Pyromancy Flame +4
    {1332500, UpgradePath::Pyromancy},   // Ascended Pyromancy Flame +5
    {1360000, UpgradePath::NoUpgrade},   // Talisman
    {1361000, UpgradePath::NoUpgrade},   // Canvas Talisman
    {1362000, UpgradePath::NoUpgrade},   // Thorolund Talisman
    {1363000, UpgradePath::NoUpgrade},   // Ivory Talisman
    {1365000, UpgradePath::NoUpgrade},   // Sunlight Talisman
    {1366000, UpgradePath::NoUpgrade},   // Darkmoon Talisman
    {1367000, UpgradePath::NoUpgrade},   // Velka's Talisman
    {1396000, UpgradePath::NoUpgrade},   // Skull Lantern
    {1397000, UpgradePath::NoUpgrade},   // [Ghost] Staff
    {1398000, UpgradePath::NoUpgrade},   // [Ghost] Pyromancy Flame
    {1399000, UpgradePath::NoUpgrade},   // [Ghost] Talisman
    {1400000, UpgradePath::Standard},    // East-West Shield
    {1400100, UpgradePath::Crystal},     // East-West Shield [Crystal]
    {1400200, UpgradePath::Lightning},   // East-West Shield [Lightning]
    {1400400, UpgradePath::Magic},       // East-West Shield [Magic]
    {1400600, UpgradePath::Divine},      // East-West Shield [Divine]
    {1400800, UpgradePath::Fire},        // East-West Shield [Fire]
    {1401000, UpgradePath::Standard},    // Wooden Shield
    {1401100, UpgradePath::Crystal},     // Wooden Shield [Crystal]
    {1401200, UpgradePath::Lightning},   // Wooden Shield [Lightning]
    {1401400, UpgradePath::Magic},       // Wooden Shield [Magic]
    {1401600, UpgradePath::Divine},      // Wooden Shield [Divine]
    {1401800, UpgradePath::Fire},        // Wooden Shield [Fire]
    {1402000, UpgradePath::Standard},    // Large Leather Shield
    {1402100, UpgradePath::Crystal},     // Large Leather Shield [Crystal]
    {1402200, UpgradePath::Lightning},   // Large Leather Shield [Lightning]
    {1402400, UpgradePath::Magic},       // Large Leather Shield [Magic]
    {1402600, UpgradePath::Divine},      // Large Leather Shield [Divine]
    {1402800, UpgradePath::Fire},        // Large Leather Shield [Fire]
    {1403000, UpgradePath::Standard},    // Small Leather Shield
    {1403100, UpgradePath::Crystal},     // Small Leather Shield [Crystal]
    {1403200, UpgradePath::Lightning},   // Small Leather Shield [Lightning]
    {1403400, UpgradePath::Magic},       // Small Leather Shield [Magic]
    {1403600, UpgradePath::Divine},      // Small Leather Shield [Divine]
    {1403800, UpgradePath::Fire},        // Small Leather Shield [Fire]
    {1404000, UpgradePath::Standard},    // Target Shield
    {1404100, UpgradePath::Crystal},     // Target Shield [Crystal]
    {1404200, UpgradePath::Lightning},   // Target Shield [Lightning]
    {1404400, UpgradePath::Magic},       // Target Shield [Magic]
    {1404600, UpgradePath::Divine},      // Target Shield [Divine]
    {1404800, UpgradePath::Fire},        // Target Shield [Fire]
    {1405000, UpgradePath::Standard},    // Buckler
    {1405100, UpgradePath::Crystal},     // Buckler [Crystal]
    {1405200, UpgradePath::Lightning},   // Buckler [Lightning]
    {1405400, UpgradePath::Magic},       // Buckler [Magic]
    {1405600, UpgradePath::Divine},      // Buckler [Divine]
    {1405800, UpgradePath::Fire},        // Buckler [Fire]
    {1406000, UpgradePath::Standard},    // Cracked Round Shield
    {1406100, UpgradePath::Crystal},     // Cracked Round Shield [Crystal]
    {1406200, UpgradePath::Lightning},   // Cracked Round Shield [Lightning]
    {1406400, UpgradePath::Magic},       // Cracked Round Shield [Magic]
    {1406600, UpgradePath::Divine},      // Cracked Round Shield [Divine]
    {1406800, UpgradePath::Fire},        // Cracked Round Shield [Fire]
    {1408000, UpgradePath::Standard},    // Leather Shield
    {1408100, UpgradePath::Crystal},     // Leather Shield [Crystal]
    {1408200, UpgradePath::Lightning},   // Leather Shield [Lightning]
    {1408400, UpgradePath::Magic},       // Leather Shield [Magic]
    {1408600, UpgradePath::Divine},      // Leather Shield [Divine]
    {1408800, UpgradePath::Fire},        // Leather Shield [Fire]
    {1409000, UpgradePath::Standard},    // Plank Shield
    {1409100, UpgradePath::Crystal},     // Plank Shield [Crystal]
    {1409200, UpgradePath::Lightning},   // Plank Shield [Lightning]
    {1409400, UpgradePath::Magic},       // Plank Shield [Magic]
    {1409600, UpgradePath::Divine},      // Plank Shield [Divine]
    {1409800, UpgradePath::Fire},        // Plank Shield [Fire]
    {1410000, UpgradePath::Standard},    // Caduceus Round Shield
    {1410100, UpgradePath::Crystal},     // Caduceus Round Shield [Crystal]
    {1410200, UpgradePath::Lightning},   // Caduceus Round Shield [Lightning]
    {1410400, UpgradePath::Magic},       // Caduceus Round Shield [Magic]
    {1410600, UpgradePath::Divine},      // Caduceus Round Shield [Divine]
    {1410800, UpgradePath::Fire},        // Caduceus Round Shield [Fire]
    {1411000, UpgradePath::Demon},       // Crystal Ring Shield [East-West Shield]
    {1411100, UpgradePath::Demon},       // Crystal Ring Shield [Wooden Shield]
    {1411200, UpgradePath::Demon},       // Crystal Ring Shield [Plank Shield]
    {1411300, UpgradePath::Demon},       // Crystal Ring Shield [Large Leather Shield]
    {1411400, UpgradePath::Demon},       // Crystal Ring Shield [Small Leather Shield]
    {1411500, UpgradePath::Demon},       // Crystal Ring Shield [Leather Shield
    {1411600, UpgradePath::Demon},       // Crystal Ring Shield [Target Shield]
    {1411700, UpgradePath::Demon},       // Crystal Ring Shield [Buckler]
    {1411800, UpgradePath::Demon},       // Crystal Ring Shield [Cracked Round Shield]
    {1411900, UpgradePath::Demon},       // Crystal Ring Shield [Caduceus Round Shield]
    {1412000, UpgradePath::Demon},       // Crystal Ring Shield [Heater Shield]
    {1412100, UpgradePath::Demon},       // Crystal Ring Shield [Knight Shield]
    {1412200, UpgradePath::Demon},       // Crystal Ring Shield [Tower Kite Shield]
    {1412300, UpgradePath::Demon},       // Crystal Ring Shield [Grass Crest Shield]
    {1412400, UpgradePath::Demon},       // Crystal Ring Shield [Hollow Soldier Shield]
    {1412500, UpgradePath::Demon},       // Crystal Ring Shield [Balder Shield]
    {1412600, UpgradePath::Demon},       // Crystal Ring Shield [Warrior's Round Shield]
    {1412700, UpgradePath::Demon},       // Crystal Ring Shield [Iron Round Shield]
    {1412800, UpgradePath::Demon},       // Crystal Ring Shield [Spider Shield]
    {1412900, UpgradePath::Demon},       // Crystal Ring Shield [Spiked Shield]
    {1413000, UpgradePath::Demon},       // Crystal Ring Shield [Pierce Shield]
    {1413100, UpgradePath::Demon},       // Crystal Ring Shield [Sunlight Shield]
    {1413200, UpgradePath::Demon},       // Crystal Ring Shield [Red and White Round Shield]
    {1413300, UpgradePath::Demon},       // Crystal Ring Shield [Caduceus Kite Shield]
    {1413400, UpgradePath::Demon},       // Crystal Ring Shield [Gargoyle's Shield]
    {1413500, UpgradePath::Demon},       // Crystal Ring Shield [Eagle Shield]
    {1413600, UpgradePath::Demon},       // Crystal Ring Shield [Tower Shield]
    {1413700, UpgradePath::Demon},       // Crystal Ring Shield [Giant Shield]
    {1413800, UpgradePath::Demon},       // Crystal Ring Shield [Bonewheel Shield]
    {1413900, UpgradePath::Demon},       // Crystal Ring Shield [Effigy Shield]
    {1414000, UpgradePath::Demon},       // Crystal Ring Shield [Sanctus]
    {1414100, UpgradePath::Demon},       // Crystal Ring Shield [Bloodshield]
    {1414200, UpgradePath::Demon},       // Crystal Ring Shield [Black Iron Greatshield]
    {1414300, UpgradePath::Demon},       // Crystal Ring Shield [Unused - Design Content Shield E]
    {1414400, UpgradePath::Demon},       // Crystal Ring Shield [Unused - Design Content Shield F]
    {1414500, UpgradePath::Demon},       // Crystal Ring Shield [Unused - Design Content Shield G]
    {1414600, UpgradePath::Demon},       // Crystal Ring Shield [Unused - Design Content Shield H]
    {1450000, UpgradePath::Standard},    // Heater Shield
    {1450100, UpgradePath::Crystal},     // Heater Shield [Crystal]
    {1450200, UpgradePath::Lightning},   // Heater Shield [Lightning]
    {1450400, UpgradePath::Magic},       // Heater Shield [Magic]
    {1450600, UpgradePath::Divine},      // Heater Shield [Divine]
    {1450800, UpgradePath::Fire},        // Heater Shield [Fire]
    {1451000, UpgradePath::Standard},    // Knight Shield
    {1451100, UpgradePath::Crystal},     // Knight Shield [Crystal]
    {1451200, UpgradePath::Lightning},   // Knight Shield [Lightning]
    {1451400, UpgradePath::Magic},       // Knight Shield [Magic]
    {1451600, UpgradePath::Divine},      // Knight Shield [Divine]
    {1451800, UpgradePath::Fire},        // Knight Shield [Fire]
    {1452000, UpgradePath::Standard},    // Tower Kite Shield
    {1452100, UpgradePath::Crystal},     // Tower Kite Shield [Crystal]
    {1452200, UpgradePath::Lightning},   // Tower Kite Shield [Lightning]
    {1452400, UpgradePath::Magic},       // Tower Kite Shield [Magic]
    {1452600, UpgradePath::Divine},      // Tower Kite Shield [Divine]
    {1452800, UpgradePath::Fire},        // Tower Kite Shield [Fire]
    {1453000, UpgradePath::Standard},    // Grass Crest Shield
    {1453100, UpgradePath::Crystal},     // Grass Crest Shield [Crystal]
    {1453200, UpgradePath::Lightning},   // Grass Crest Shield [Lightning]
    {1453400, UpgradePath::Magic},       // Grass Crest Shield [Magic]
    {1453600, UpgradePath::Divine},      // Grass Crest Shield [Divine]
    {1453800, UpgradePath::Fire},        // Grass Crest Shield [Fire]
    {1454000, UpgradePath::Standard},    // Hollow Soldier Shield
    {1454100, UpgradePath::Crystal},     // Hollow Soldier Shield [Crystal]
    {1454200, UpgradePath::Lightning},   // Hollow Soldier Shield [Lightning]
    {1454400, UpgradePath::Magic},       // Hollow Soldier Shield [Magic]
    {1454600, UpgradePath::Divine},      // Hollow Soldier Shield [Divine]
    {1454800, UpgradePath::Fire},        // Hollow Soldier Shield [Fire]
    {1455000, UpgradePath::Standard},    // Balder Shield
    {1455100, UpgradePath::Crystal},     // Balder Shield [Crystal]
    {1455200, UpgradePath::Lightning},   // Balder Shield [Lightning]
    {1455400, UpgradePath::Magic},       // Balder Shield [Magic]
    {1455600, UpgradePath::Divine},      // Balder Shield [Divine]
    {1455800, UpgradePath::Fire},        // Balder Shield [Fire]
    {1456000, UpgradePath::Twinkling},   // Crest Shield
    {1457000, UpgradePath::Twinkling},   // Dragon Crest Shield
    {1460000, UpgradePath::Standard},    // Warrior's Round Shield
    {1460100, UpgradePath::Crystal},     // Warrior's Round Shield [Crystal]
    {1460200, UpgradePath::Lightning},   // Warrior's Round Shield [Lightning]
    {1460400, UpgradePath::Magic},       // Warrior's Round Shield [Magic]
    {1460600, UpgradePath::Divine},      // Warrior's Round Shield [Divine]
    {1460800, UpgradePath::Fire},        // Warrior's Round Shield [Fire]
    {1461000, UpgradePath::Standard},    // Iron Round Shield
    {1461100, UpgradePath::Crystal},     // Iron Round Shield [Crystal]
    {1461200, UpgradePath::Lightning},   // Iron Round Shield [Lightning]
    {1461400, UpgradePath::Magic},       // Iron Round Shield [Magic]
    {1461600, UpgradePath::Divine},      // Iron Round Shield [Divine]
    {1461800, UpgradePath::Fire},        // Iron Round Shield [Fire]
    {1462000, UpgradePath::Standard},    // Spider Shield
    {1462100, UpgradePath::Crystal},     // Spider Shield [Crystal]
    {1462200, UpgradePath::Lightning},   // Spider Shield [Lightning]
    {1462400, UpgradePath::Magic},       // Spider Shield [Magic]
    {1462600, UpgradePath::Divine},      // Spider Shield [Divine]
    {1462800, UpgradePath::Fire},        // Spider Shield [Fire]
    {1470000, UpgradePath::Standard},    // Spiked Shield
    {1470100, UpgradePath::Crystal},     // Spiked Shield [Crystal]
    {1470200, UpgradePath::Lightning},   // Spiked Shield [Lightning]
    {1470400, UpgradePath::Magic},       // Spiked Shield [Magic]
    {1470600, UpgradePath::Divine},      // Spiked Shield [Divine]
    {1470800, UpgradePath::Fire},        // Spiked Shield [Fire]
    {1471000, UpgradePath::NoUpgrade},   // Crystal Shield
    {1472000, UpgradePath::Standard},    // Sunlight Shield
    {1472100, UpgradePath::Crystal},     // Sunlight Shield [Crystal]
    {1472200, UpgradePath::Lightning},   // Sunlight Shield [Lightning]
    {1472400, UpgradePath::Magic},       // Sunlight Shield [Magic]
    {1472600, UpgradePath::Divine},      // Sunlight Shield [Divine]
    {1472800, UpgradePath::Fire},        // Sunlight Shield [Fire]
    {1473000, UpgradePath::Twinkling},   // Silver Knight Shield
    {1474000, UpgradePath::Twinkling},   // Black Knight Shield
    {1475000, UpgradePath::Standard},    // Pierce Shield
    {1475100, UpgradePath::Crystal},     // Pierce Shield [Crystal]
    {1475200, UpgradePath::Lightning},   // Pierce Shield [Lightning]
    {1475400, UpgradePath::Magic},       // Pierce Shield [Magic]
    {1475600, UpgradePath::Divine},      // Pierce Shield [Divine]
    {1475800, UpgradePath::Fire},        // Pierce Shield [Fire]
    {1476000, UpgradePath::Standard},    // Red and White Round Shield
    {1476100, UpgradePath::Crystal},     // Red and White Round Shield [Crystal]
    {1476200, UpgradePath::Lightning},   // Red and White Round Shield [Lightning]
    {1476400, UpgradePath::Magic},       // Red and White Round Shield [Magic]
    {1476600, UpgradePath::Divine},      // Red and White Round Shield [Divine]
    {1476800, UpgradePath::Fire},        // Red and White Round Shield [Fire]
    {1477000, UpgradePath::Standard},    // Caduceus Kite Shield
    {1477100, UpgradePath::Crystal},     // Caduceus Kite Shield [Crystal]
    {1477200, UpgradePath::Lightning},   // Caduceus Kite Shield [Lightning]
    {1477400, UpgradePath::Magic},       // Caduceus Kite Shield [Magic]
    {1477600, UpgradePath::Divine},      // Caduceus Kite Shield [Divine]
    {1477800, UpgradePath::Fire},        // Caduceus Kite Shield [Fire]
    {1478000, UpgradePath::Standard},    // Gargoyle's Shield
    {1478100, UpgradePath::Crystal},     // Gargoyle's Shield [Crystal]
    {1478200, UpgradePath::Lightning},   // Gargoyle's Shield [Lightning]
    {1478400, UpgradePath::Magic},       // Gargoyle's Shield [Magic]
    {1478600, UpgradePath::Divine},      // Gargoyle's Shield [Divine]
    {1478800, UpgradePath::Fire},        // Gargoyle's Shield [Fire]
    {1498000, UpgradePath::NoUpgrade},   // [Ghost] Small Shield
    {1499000, UpgradePath::NoUpgrade},   // [Ghost] Medium Shield
    {1500000, UpgradePath::Standard},    // Eagle Shield
    {1500100, UpgradePath::Crystal},     // Eagle Shield [Crystal]
    {1500200, UpgradePath::Lightning},   // Eagle Shield [Lightning]
    {1500400, UpgradePath::Magic},       // Eagle Shield [Magic]
    {1500600, UpgradePath::Divine},      // Eagle Shield [Divine]
    {1500800, UpgradePath::Fire},        // Eagle Shield [Fire]
    {1501000, UpgradePath::Standard},    // Tower Shield
    {1501100, UpgradePath::Crystal},     // Tower Shield [Crystal]
    {1501200, UpgradePath::Lightning},   // Tower Shield [Lightning]
    {1501400, UpgradePath::Magic},       // Tower Shield [Magic]
    {1501600, UpgradePath::Divine},      // Tower Shield [Divine]
    {1501800, UpgradePath::Fire},        // Tower Shield [Fire]
    {1502000, UpgradePath::Standard},    // Giant Shield
    {1502100, UpgradePath::Crystal},     // Giant Shield [Crystal]
    {1502200, UpgradePath::Lightning},   // Giant Shield [Lightning]
    {1502400, UpgradePath::Magic},       // Giant Shield [Magic]
    {1502600, UpgradePath::Divine},      // Giant Shield [Divine]
    {1502800, UpgradePath::Fire},        // Giant Shield [Fire]
    {1503000, UpgradePath::Twinkling},   // Stone Greatshield
    {1505000, UpgradePath::Twinkling},   // Havel's Greatshield
    {1506000, UpgradePath::Standard},    // Bonewheel Shield
    {1506100, UpgradePath::Crystal},     // Bonewheel Shield [Crystal]
    {1506200, UpgradePath::Lightning},   // Bonewheel Shield [Lightning]
    {1506400, UpgradePath::Magic},       // Bonewheel Shield [Magic]
    {1506600, UpgradePath::Divine},      // Bonewheel Shield [Divine]
    {1506800, UpgradePath::Fire},        // Bonewheel Shield [Fire]
    {1507000, UpgradePath::Demon},       // Greatshield of Artorias [East-West Shield]
    {1507100, UpgradePath::Demon},       // Greatshield of Artorias [Wooden Shield]
    {1507200, UpgradePath::Demon},       // Greatshield of Artorias [Plank Shield]
    {1507300, UpgradePath::Demon},       // Greatshield of Artorias [Large Leather Shield]
    {1507400, UpgradePath::Demon},       // Greatshield of Artorias [Small Leather Shield]
    {1507500, UpgradePath::Demon},       // Greatshield of Artorias [Leather Shield]
    {1507600, UpgradePath::Demon},       // Greatshield of Artorias [Target Shield]
    {1507700, UpgradePath::Demon},       // Greatshield of Artorias [Buckler]
    {1507800, UpgradePath::Demon},       // Greatshield of Artorias [Cracked Round Shield]
    {1507900, UpgradePath::Demon},       // Greatshield of Artorias [Caduceus Round Shield]
    {1508000, UpgradePath::Demon},       // Greatshield of Artorias [Heater Shield]
    {1508100, UpgradePath::Demon},       // Greatshield of Artorias [Knight Shield]
    {1508200, UpgradePath::Demon},       // Greatshield of Artorias [Tower Kite Shield]
    {1508300, UpgradePath::Demon},       // Greatshield of Artorias [Grass Crest Shield]
    {1508400, UpgradePath::Demon},       // Greatshield of Artorias [Hollow Soldier Shield]
    {1508500, UpgradePath::Demon},       // Greatshield of Artorias [Balder Shield]
    {1508600, UpgradePath::Demon},       // Greatshield of Artorias [Warrior's Round Shield]
    {1508700, UpgradePath::Demon},       // Greatshield of Artorias [Iron Round Shield]
    {1508800, UpgradePath::Demon},       // Greatshield of Artorias [Spider Shield]
    {1508900, UpgradePath::Demon},       // Greatshield of Artorias [Spiked Shield]
    {1509000, UpgradePath::Demon},       // Greatshield of Artorias [Pierce Shield]
    {1509100, UpgradePath::Demon},       // Greatshield of Artorias [Sunlight Shield]
    {1509200, UpgradePath::Demon},       // Greatshield of Artorias [Red and White Round Shield
    {1509300, UpgradePath::Demon},       // Greatshield of Artorias [Caduceus Kite Shield
    {1509400, UpgradePath::Demon},       // Greatshield of Artorias [Gargoyle's Shield]
    {1509500, UpgradePath::Demon},       // Greatshield of Artorias [Eagle Shield]
    {1509600, UpgradePath::Demon},       // Greatshield of Artorias [Tower Shield]
    {1509700, UpgradePath::Demon},       // Greatshield of Artorias [Giant Shield]
    {1509800, UpgradePath::Demon},       // Greatshield of Artorias [Bonewheel Shield]
    {1509900, UpgradePath::Demon},       // Greatshield of Artorias [Effigy Shield]
    {1510000, UpgradePath::Demon},       // Greatshield of Artorias [Sanctus]
    {1510100, UpgradePath::Demon},       // Greatshield of Artorias [Bloodshield]
    {1510200, UpgradePath::Demon},       // Greatshield of Artorias [Black Iron Greatshield]
    {1510300, UpgradePath::Demon},       // Greatshield of Artorias [Unused - Design Content Shield E]
    {1510400, UpgradePath::Demon},       // Greatshield of Artorias [Unused - Design Content Shield F]
    {1510500, UpgradePath::Demon},       // Greatshield of Artorias [Unused - Design Content Shield G]
    {1510600, UpgradePath::Demon},       // Greatshield of Artorias [Unused - Design Content Shield H]
    {1599000, UpgradePath::NoUpgrade},   // [Ghost] Greatshield
    {1600000, UpgradePath::Standard},    // Whip
    {1600100, UpgradePath::Crystal},     // Whip [Crystal]
    {1600200, UpgradePath::Lightning},   // Whip [Lightning]
    {1600300, UpgradePath::Raw},         // Whip [Raw]
    {1600400, UpgradePath::Magic},       // Whip [Magic]
    {1600500, UpgradePath::Enchanted},   // Whip [Enchanted]
    {1600600, UpgradePath::Divine},      // Whip [Divine]
    {1600700, UpgradePath::Occult},      // Whip [Occult]
    {1600800, UpgradePath::Fire},        // Whip [Fire]
    {1600900, UpgradePath::Chaos},       // Whip [Chaos]
    {1601000, UpgradePath::Standard},    // Notched Whip
    {1601100, UpgradePath::Crystal},     // Notched Whip [Crystal]
    {1601200, UpgradePath::Lightning},   // Notched Whip [Lightning]
    {1601300, UpgradePath::Raw},         // Notched Whip [Raw]
    {1601400, UpgradePath::Magic},       // Notched Whip [Magic]
    {1601500, UpgradePath::Enchanted},   // Notched Whip [Enchanted]
    {1601600, UpgradePath::Divine},      // Notched Whip [Divine]
    {1601700, UpgradePath::Occult},      // Notched Whip [Occult]
    {1601800, UpgradePath::Fire},        // Notched Whip [Fire]
    {1601900, UpgradePath::Chaos},       // Notched Whip [Chaos]
    {1699000, UpgradePath::NoUpgrade},   // [Ghost] Whip
    {2000000, UpgradePath::NoUpgrade},   // Standard Arrow
    {2001000, UpgradePath::NoUpgrade},   // Large Arrow
    {2002000, UpgradePath::NoUpgrade},   // Feather Arrow
    {2003000, UpgradePath::NoUpgrade},   // Fire Arrow
    {2004000, UpgradePath::NoUpgrade},   // Poison Arrow
    {2005000, UpgradePath::NoUpgrade},   // Moonlight Arrow
    {2006000, UpgradePath::NoUpgrade},   // Wooden Arrow
    {2007000, UpgradePath::NoUpgrade},   // Dragonslayer Arrow
    {2008000, UpgradePath::NoUpgrade},   // Gough's Great Arrow
    {2099000, UpgradePath::NoUpgrade},   // [Ghost] Arrow
    {2100000, UpgradePath::NoUpgrade},   // Standard Bolt
    {2101000, UpgradePath::NoUpgrade},   // Heavy Bolt
    {2102000, UpgradePath::NoUpgrade},   // Sniper Bolt
    {2103000, UpgradePath::NoUpgrade},   // Wood Bolt
    {2104000, UpgradePath::NoUpgrade},   // Lightning Bolt
    {2199000, UpgradePath::NoUpgrade},   // [Ghost] Bolt
    {9000000, UpgradePath::Standard},    // Effigy Shield
    {9000100, UpgradePath::Crystal},     // Effigy Shield [Crystal]
    {9000200, UpgradePath::Lightning},   // Effigy Shield [Lightning]
    {9000400, UpgradePath::Magic},       // Effigy Shield [Magic]
    {9000600, UpgradePath::Divine},      // Effigy Shield [Divine]
    {9000800, UpgradePath::Fire},        // Effigy Shield [Fire]
    {9001000, UpgradePath::Standard},    // Sanctus
    {9001100, UpgradePath::Crystal},     // Sanctus [Crystal]
    {9001200, UpgradePath::Lightning},   // Sanctus [Lightning]
    {9001400, UpgradePath::Magic},       // Sanctus [Magic]
    {9001600, UpgradePath::Divine},      // Sanctus [Divine]
    {9001800, UpgradePath::Fire},        // Sanctus [Fire]
    {9002000, UpgradePath::Standard},    // Bloodshield
    {9002100, UpgradePath::Crystal},     // Bloodshield [Crystal]
    {9002200, UpgradePath::Lightning},   // Bloodshield [Lightning]
    {9002400, UpgradePath::Magic},       // Bloodshield [Magic]
    {9002600, UpgradePath::Divine},      // Bloodshield [Divine]
    {9002800, UpgradePath::Fire},        // Bloodshield [Fire]
    {9003000, UpgradePath::Standard},    // Black Iron Greatshield
    {9003100, UpgradePath::Crystal},     // Black Iron Greatshield [Crystal]
    {9003200, UpgradePath::Lightning},   // Black Iron Greatshield [Lightning]
    {9003400, UpgradePath::Magic},       // Black Iron Greatshield [Magic]
    {9003600, UpgradePath::Divine},      // Black Iron Greatshield [Divine]
    {9003800, UpgradePath::Fire},        // Black Iron Greatshield [Fire]
    {9004000, UpgradePath::Standard},    // Unused - Design Content Shield E
    {9004100, UpgradePath::Crystal},     // Unused - Design Content Shield E [Crystal]
    {9004200, UpgradePath::Lightning},   // Unused - Design Content Shield E [Lightning]
    {9004400, UpgradePath::Magic},       // Unused - Design Content Shield E [Magic]
    {9004600, UpgradePath::Divine},      // Unused - Design Content Shield E [Divine]
    {9004800, UpgradePath::Fire},        // Unused - Design Content Shield E [Fire]
    {9005000, UpgradePath::Standard},    // Unused - Design Content Shield F
    {9005100, UpgradePath::Crystal},     // Unused - Design Content Shield F [Crystal]
    {9005200, UpgradePath::Lightning},   // Unused - Design Content Shield F [Lightning]
    {9005400, UpgradePath::Magic},       // Unused - Design Content Shield F [Magic]
    {9005600, UpgradePath::Divine},      // Unused - Design Content Shield F [Divine]
    {9005800, UpgradePath::Fire},        // Unused - Design Content Shield F [Fire]
    {9006000, UpgradePath::Standard},    // Unused - Design Content Shield G
    {9006100, UpgradePath::Crystal},     // Unused - Design Content Shield G [Crystal]
    {9006200, UpgradePath::Lightning},   // Unused - Design Content Shield G [Lightning]
    {9006400, UpgradePath::Magic},       // Unused - Design Content Shield G [Magic]
    {9006600, UpgradePath::Divine},      // Unused - Design Content Shield G [Divine]
    {9006800, UpgradePath::Fire},        // Unused - Design Content Shield G [Fire]
    {9007000, UpgradePath::Standard},    // Unused - Design Content Shield H
    {9007100, UpgradePath::Crystal},     // Unused - Design Content Shield H [Crystal]
    {9007200, UpgradePath::Lightning},   // Unused - Design Content Shield H [Lightning]
    {9007400, UpgradePath::Magic},       // Unused - Design Content Shield H [Magic]
    {9007600, UpgradePath::Divine},      // Unused - Design Content Shield H [Divine]
    {9007800, UpgradePath::Fire},        // Unused - Design Content Shield H [Fire]
    {9010000, UpgradePath::Twinkling},   // Gold Tracer
    {9011000, UpgradePath::Twinkling},   // Dark Silver Tracer
    {9012000, UpgradePath::Demon},       // Abyss Greatsword [Dagger]
    {9012100, UpgradePath::Demon},       // Abyss Greatsword [Parrying Dagger]
    {9012200, UpgradePath::Demon},       // Abyss Greatsword [Bandit's Knife]
    {9012300, UpgradePath::Demon},       // Abyss Greatsword [Shortsword]
    {9012400, UpgradePath::Demon},       // Abyss Greatsword [Longsword]
    {9012500, UpgradePath::Demon},       // Abyss Greatsword [Broadsword]
    {9012600, UpgradePath::Demon},       // Abyss Greatsword [Balder Side Sword]
    {9012700, UpgradePath::Demon},       // Abyss Greatsword [Sunlight Straight Sword]
    {9012800, UpgradePath::Demon},       // Abyss Greatsword [Barbed Straight Sword]
    {9013000, UpgradePath::Demon},       // Abyss Greatsword [Darksword]
    {9013100, UpgradePath::Demon},       // Abyss Greatsword [Bastard Sword]
    {9013200, UpgradePath::Demon},       // Abyss Greatsword [Claymore]
    {9013300, UpgradePath::Demon},       // Abyss Greatsword [Man-serpent Greatsword]
    {9013400, UpgradePath::Demon},       // Abyss Greatsword [Flamberge]
    {9013500, UpgradePath::Demon},       // Abyss Greatsword [Zweihander]
    {9013600, UpgradePath::Demon},       // Abyss Greatsword [Greatsword]
    {9013700, UpgradePath::Demon},       // Abyss Greatsword [Demon Great Machete]
    {9014000, UpgradePath::Twinkling},   // Cleansing Greatshield
    {9015000, UpgradePath::Twinkling},   // Stone Greataxe
    {9016000, UpgradePath::Standard},    // Four-pronged Plow
    {9016100, UpgradePath::Crystal},     // Four-pronged Plow [Crystal]
    {9016200, UpgradePath::Lightning},   // Four-pronged Plow [Lightning]
    {9016300, UpgradePath::Raw},         // Four-pronged Plow [Raw]
    {9016400, UpgradePath::Magic},       // Four-pronged Plow [Magic]
    {9016500, UpgradePath::Enchanted},   // Four-pronged Plow [Enchanted]
    {9016600, UpgradePath::Divine},      // Four-pronged Plow [Divine]
    {9016700, UpgradePath::Occult},      // Four-pronged Plow [Occult]
    {9016800, UpgradePath::Fire},        // Four-pronged Plow [Fire]
    {9016900, UpgradePath::Chaos},       // Four-pronged Plow [Chaos]
    {9017000, UpgradePath::NoUpgrade},   // Manus Catalyst [Sorcerer's Catalyst]
    {9017100, UpgradePath::NoUpgrade},   // Manus Catalyst [Beatrice's Catalyst]
    {9017200, UpgradePath::NoUpgrade},   // Manus Catalyst [Tin Banishment Catalyst]
    {9017300, UpgradePath::NoUpgrade},   // Manus Catalyst [Logan's Catalyst]
    {9017400, UpgradePath::NoUpgrade},   // Manus Catalyst [Oolacile Ivory Catalyst]
    {9017500, UpgradePath::NoUpgrade},   // Manus Catalyst [Izalith Catalyst]
    {9018000, UpgradePath::NoUpgrade},   // Oolacile Catalyst
    {9019000, UpgradePath::Standard},    // Guardian Tail
    {9019100, UpgradePath::Crystal},     // Guardian Tail [Crystal]
    {9019200, UpgradePath::Lightning},   // Guardian Tail [Lightning]
    {9019300, UpgradePath::Raw},         // Guardian Tail [Raw]
    {9019400, UpgradePath::Magic},       // Guardian Tail [Magic]
    {9019500, UpgradePath::Enchanted},   // Guardian Tail [Enchanted]
    {9019600, UpgradePath::Divine},      // Guardian Tail [Divine]
    {9019700, UpgradePath::Occult},      // Guardian Tail [Occult]
    {9019800, UpgradePath::Fire},        // Guardian Tail [Fire]
    {9019900, UpgradePath::Chaos},       // Guardian Tail [Chaos]
    {9020000, UpgradePath::Dragon},      // Obsidian Greatsword
    {9021000, UpgradePath::Twinkling},   // Gough's Greatbow
};