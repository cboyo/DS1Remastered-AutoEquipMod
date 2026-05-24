
enum class WeaponUpgradePath{
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
    DemonSif = 1300, 
    DemonGwyn = 1400, 
    DemonQuelaag = 1500,
    DemonOrnstein = 1600,
    DemonButterfly = 1700,
    DemonGolem = 1800,
    DemonSmough = 1900,
    DemonPriscilla = 2000,
    DemonGwyndolin = 2100,
    DragonGolem = 2200,
    DemonNonBoss = 2300,
    DemonArtorias = 2400,
    DemonManus = 2500,
};

std::unordered_map<WeaponUpgradePath, std::string> upgrade_path_names = {
    {WeaponUpgradePath::NoUpgrade,  "NoUpgrade"},
    {WeaponUpgradePath::Standard,  "Standard"},
    {WeaponUpgradePath::Crystal,  "Crystal"},
    {WeaponUpgradePath::Lightning,  "Lightning"},
    {WeaponUpgradePath::Raw,  "Raw"},
    {WeaponUpgradePath::Magic,  "Magic"},
    {WeaponUpgradePath::Enchanted,  "Enchanted"},
    {WeaponUpgradePath::Divine,  "Divine"},
    {WeaponUpgradePath::Occult,  "Occult"},
    {WeaponUpgradePath::Fire,  "Fire"},
    {WeaponUpgradePath::Chaos,  "Chaos"},
    {WeaponUpgradePath::Dragon,  "Dragon"},
    {WeaponUpgradePath::Twinkling,  "Twinkling"},
    {WeaponUpgradePath::DemonSif,  " DemonSif"},
    {WeaponUpgradePath::DemonGwyn,  "DemonGwyn"},
    {WeaponUpgradePath::DemonQuelaag,  "DemonQuelaag"},
    {WeaponUpgradePath::DemonOrnstein,  "DemonOrnstein"},
    {WeaponUpgradePath::DemonButterfly,  "DemonButterfly"},
    {WeaponUpgradePath::DemonGolem,  "DemonGolem"},
    {WeaponUpgradePath::DemonSmough,  "DemonSmough"},
    {WeaponUpgradePath::DemonPriscilla,  "DemonPriscilla"},
    {WeaponUpgradePath::DemonGwyndolin,  "DemonGwyndolin"},
    {WeaponUpgradePath::DragonGolem,  "DragonGolem"},
    {WeaponUpgradePath::DemonNonBoss,  "DemonNonBoss"},
    {WeaponUpgradePath::DemonArtorias,  "DemonArtorias"},
    {WeaponUpgradePath::DemonManus,  " DemonManus"},
};


std::unordered_map<uint64_t, WeaponUpgradePath> weapon_ids = {
{  100000 ,         WeaponUpgradePath::Standard }, // Dagger
{  100100 ,          WeaponUpgradePath::Crystal }, // Dagger [Crystal]
{  100200 ,        WeaponUpgradePath::Lightning }, // Dagger [Lightning]
{  100300 ,              WeaponUpgradePath::Raw }, // Dagger [Raw]
{  100400 ,            WeaponUpgradePath::Magic }, // Dagger [Magic]
{  100500 ,        WeaponUpgradePath::Enchanted }, // Dagger [Enchanted]
{  100600 ,           WeaponUpgradePath::Divine }, // Dagger [Divine]
{  100700 ,           WeaponUpgradePath::Occult }, // Dagger [Occult]
{  100800 ,             WeaponUpgradePath::Fire }, // Dagger [Fire]
{  100900 ,            WeaponUpgradePath::Chaos }, // Dagger [Chaos]
{  101000 ,         WeaponUpgradePath::Standard }, // Parrying Dagger
{  101100 ,          WeaponUpgradePath::Crystal }, // Parrying Dagger [Crystal]
{  101200 ,        WeaponUpgradePath::Lightning }, // Parrying Dagger [Lightning]
{  101300 ,              WeaponUpgradePath::Raw }, // Parrying Dagger [Raw]
{  101400 ,            WeaponUpgradePath::Magic }, // Parrying Dagger [Magic]
{  101500 ,        WeaponUpgradePath::Enchanted }, // Parrying Dagger [Enchanted]
{  101600 ,           WeaponUpgradePath::Divine }, // Parrying Dagger [Divine]
{  101700 ,           WeaponUpgradePath::Occult }, // Parrying Dagger [Occult]
{  101800 ,             WeaponUpgradePath::Fire }, // Parrying Dagger [Fire]
{  101900 ,            WeaponUpgradePath::Chaos }, // Parrying Dagger [Chaos]
{  102000 ,        WeaponUpgradePath::Twinkling }, // Ghost Blade
{  103000 ,         WeaponUpgradePath::Standard }, // Bandit's Knife
{  103100 ,          WeaponUpgradePath::Crystal }, // Bandit's Knife [Crystal]
{  103200 ,        WeaponUpgradePath::Lightning }, // Bandit's Knife [Lightning]
{  103300 ,              WeaponUpgradePath::Raw }, // Bandit's Knife [Raw]
{  103400 ,            WeaponUpgradePath::Magic }, // Bandit's Knife [Magic]
{  103500 ,        WeaponUpgradePath::Enchanted }, // Bandit's Knife [Enchanted]
{  103600 ,           WeaponUpgradePath::Divine }, // Bandit's Knife [Divine]
{  103700 ,           WeaponUpgradePath::Occult }, // Bandit's Knife [Occult]
{  103800 ,             WeaponUpgradePath::Fire }, // Bandit's Knife [Fire]
{  103900 ,            WeaponUpgradePath::Chaos }, // Bandit's Knife [Chaos]
{  104000 ,           WeaponUpgradePath::Dragon }, // Priscilla's Dagger
{  199000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Dagger
{  200000 ,         WeaponUpgradePath::Standard }, // Shortsword
{  200100 ,          WeaponUpgradePath::Crystal }, // Shortsword [Crystal]
{  200200 ,        WeaponUpgradePath::Lightning }, // Shortsword [Lightning]
{  200300 ,              WeaponUpgradePath::Raw }, // Shortsword [Raw]
{  200400 ,            WeaponUpgradePath::Magic }, // Shortsword [Magic]
{  200500 ,        WeaponUpgradePath::Enchanted }, // Shortsword [Enchanted]
{  200600 ,           WeaponUpgradePath::Divine }, // Shortsword [Divine]
{  200700 ,           WeaponUpgradePath::Occult }, // Shortsword [Occult]
{  200800 ,             WeaponUpgradePath::Fire }, // Shortsword [Fire]
{  200900 ,            WeaponUpgradePath::Chaos }, // Shortsword [Chaos]
{  201000 ,         WeaponUpgradePath::Standard }, // Longsword
{  201100 ,          WeaponUpgradePath::Crystal }, // Longsword [Crystal]
{  201200 ,        WeaponUpgradePath::Lightning }, // Longsword [Lightning]
{  201300 ,              WeaponUpgradePath::Raw }, // Longsword [Raw]
{  201400 ,            WeaponUpgradePath::Magic }, // Longsword [Magic]
{  201500 ,        WeaponUpgradePath::Enchanted }, // Longsword [Enchanted]
{  201600 ,           WeaponUpgradePath::Divine }, // Longsword [Divine]
{  201700 ,           WeaponUpgradePath::Occult }, // Longsword [Occult]
{  201800 ,             WeaponUpgradePath::Fire }, // Longsword [Fire]
{  201900 ,            WeaponUpgradePath::Chaos }, // Longsword [Chaos]
{  202000 ,         WeaponUpgradePath::Standard }, // Broadsword
{  202100 ,          WeaponUpgradePath::Crystal }, // Broadsword [Crystal]
{  202200 ,        WeaponUpgradePath::Lightning }, // Broadsword [Lightning]
{  202300 ,              WeaponUpgradePath::Raw }, // Broadsword [Raw]
{  202400 ,            WeaponUpgradePath::Magic }, // Broadsword [Magic]
{  202500 ,        WeaponUpgradePath::Enchanted }, // Broadsword [Enchanted]
{  202600 ,           WeaponUpgradePath::Divine }, // Broadsword [Divine]
{  202700 ,           WeaponUpgradePath::Occult }, // Broadsword [Occult]
{  202800 ,             WeaponUpgradePath::Fire }, // Broadsword [Fire]
{  202900 ,            WeaponUpgradePath::Chaos }, // Broadsword [Chaos]
{  203000 ,         WeaponUpgradePath::Standard }, // Broken Straight Sword
{  203100 ,          WeaponUpgradePath::Crystal }, // Broken Straight Sword [Crystal]
{  203200 ,        WeaponUpgradePath::Lightning }, // Broken Straight Sword [Lightning]
{  203300 ,              WeaponUpgradePath::Raw }, // Broken Straight Sword [Raw]
{  203400 ,            WeaponUpgradePath::Magic }, // Broken Straight Sword [Magic]
{  203500 ,        WeaponUpgradePath::Enchanted }, // Broken Straight Sword [Enchanted]
{  203600 ,           WeaponUpgradePath::Divine }, // Broken Straight Sword [Divine]
{  203700 ,           WeaponUpgradePath::Occult }, // Broken Straight Sword [Occult]
{  203800 ,             WeaponUpgradePath::Fire }, // Broken Straight Sword [Fire]
{  203900 ,            WeaponUpgradePath::Chaos }, // Broken Straight Sword [Chaos]
{  204000 ,         WeaponUpgradePath::Standard }, // Balder Side Sword
{  204100 ,          WeaponUpgradePath::Crystal }, // Balder Side Sword [Crystal]
{  204200 ,        WeaponUpgradePath::Lightning }, // Balder Side Sword [Lightning]
{  204300 ,              WeaponUpgradePath::Raw }, // Balder Side Sword [Raw]
{  204400 ,            WeaponUpgradePath::Magic }, // Balder Side Sword [Magic]
{  204500 ,        WeaponUpgradePath::Enchanted }, // Balder Side Sword [Enchanted]
{  204600 ,           WeaponUpgradePath::Divine }, // Balder Side Sword [Divine]
{  204700 ,           WeaponUpgradePath::Occult }, // Balder Side Sword [Occult]
{  204800 ,             WeaponUpgradePath::Fire }, // Balder Side Sword [Fire]
{  204900 ,            WeaponUpgradePath::Chaos }, // Balder Side Sword [Chaos]
{  205000 ,        WeaponUpgradePath::NoUpgrade }, // Crystal Straight Sword
{  206000 ,         WeaponUpgradePath::Standard }, // Sunlight Straight Sword
{  206100 ,          WeaponUpgradePath::Crystal }, // Sunlight Straight Sword [Crystal]
{  206200 ,        WeaponUpgradePath::Lightning }, // Sunlight Straight Sword [Lightning]
{  206300 ,              WeaponUpgradePath::Raw }, // Sunlight Straight Sword [Raw]
{  206400 ,            WeaponUpgradePath::Magic }, // Sunlight Straight Sword [Magic]
{  206500 ,        WeaponUpgradePath::Enchanted }, // Sunlight Straight Sword [Enchanted]
{  206600 ,           WeaponUpgradePath::Divine }, // Sunlight Straight Sword [Divine]
{  206700 ,           WeaponUpgradePath::Occult }, // Sunlight Straight Sword [Occult]
{  206800 ,             WeaponUpgradePath::Fire }, // Sunlight Straight Sword [Fire]
{  206900 ,            WeaponUpgradePath::Chaos }, // Sunlight Straight Sword [Chaos]
{  207000 ,         WeaponUpgradePath::Standard }, // Barbed Straight Sword
{  207100 ,          WeaponUpgradePath::Crystal }, // Barbed Straight Sword [Crystal]
{  207200 ,        WeaponUpgradePath::Lightning }, // Barbed Straight Sword [Lightning]
{  207300 ,              WeaponUpgradePath::Raw }, // Barbed Straight Sword [Raw]
{  207400 ,            WeaponUpgradePath::Magic }, // Barbed Straight Sword [Magic]
{  207500 ,        WeaponUpgradePath::Enchanted }, // Barbed Straight Sword [Enchanted]
{  207600 ,           WeaponUpgradePath::Divine }, // Barbed Straight Sword [Divine]
{  207700 ,           WeaponUpgradePath::Occult }, // Barbed Straight Sword [Occult]
{  207800 ,             WeaponUpgradePath::Fire }, // Barbed Straight Sword [Fire]
{  207900 ,            WeaponUpgradePath::Chaos }, // Barbed Straight Sword [Chaos]
{  208000 ,        WeaponUpgradePath::Twinkling }, // Silv. Knight Str. Sword
{  209000 ,        WeaponUpgradePath::Twinkling }, // Astora's Straight Sword
{  210000 ,         WeaponUpgradePath::Standard }, // Darksword
{  210100 ,          WeaponUpgradePath::Crystal }, // Darksword [Crystal]
{  210200 ,        WeaponUpgradePath::Lightning }, // Darksword [Lightning]
{  210300 ,              WeaponUpgradePath::Raw }, // Darksword [Raw]
{  210400 ,            WeaponUpgradePath::Magic }, // Darksword [Magic]
{  210500 ,        WeaponUpgradePath::Enchanted }, // Darksword [Enchanted]
{  210600 ,           WeaponUpgradePath::Divine }, // Darksword [Divine]
{  210700 ,           WeaponUpgradePath::Occult }, // Darksword [Occult]
{  210800 ,             WeaponUpgradePath::Fire }, // Darksword [Fire]
{  210900 ,            WeaponUpgradePath::Chaos }, // Darksword [Chaos]
{  211000 ,           WeaponUpgradePath::Dragon }, // Drake Sword
{  212000 ,         WeaponUpgradePath::Standard }, // Straight Sword Hilt
{  212100 ,          WeaponUpgradePath::Crystal }, // Straight Sword Hilt [Crystal]
{  212200 ,        WeaponUpgradePath::Lightning }, // Straight Sword Hilt [Lightning]
{  212300 ,              WeaponUpgradePath::Raw }, // Straight Sword Hilt [Raw]
{  212400 ,            WeaponUpgradePath::Magic }, // Straight Sword Hilt [Magic]
{  212500 ,        WeaponUpgradePath::Enchanted }, // Straight Sword Hilt [Enchanted]
{  212600 ,           WeaponUpgradePath::Divine }, // Straight Sword Hilt [Divine]
{  212700 ,           WeaponUpgradePath::Occult }, // Straight Sword Hilt [Occult]
{  212800 ,             WeaponUpgradePath::Fire }, // Straight Sword Hilt [Fire]
{  212900 ,            WeaponUpgradePath::Chaos }, // Straight Sword Hilt [Chaos]
{  299000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Straight Sword
{  300000 ,         WeaponUpgradePath::Standard }, // Bastard Sword
{  300100 ,          WeaponUpgradePath::Crystal }, // Bastard Sword [Crystal]
{  300200 ,        WeaponUpgradePath::Lightning }, // Bastard Sword [Lightning]
{  300300 ,              WeaponUpgradePath::Raw }, // Bastard Sword [Raw]
{  300400 ,            WeaponUpgradePath::Magic }, // Bastard Sword [Magic]
{  300500 ,        WeaponUpgradePath::Enchanted }, // Bastard Sword [Enchanted]
{  300600 ,           WeaponUpgradePath::Divine }, // Bastard Sword [Divine]
{  300700 ,           WeaponUpgradePath::Occult }, // Bastard Sword [Occult]
{  300800 ,             WeaponUpgradePath::Fire }, // Bastard Sword [Fire]
{  300900 ,            WeaponUpgradePath::Chaos }, // Bastard Sword [Chaos]
{  301000 ,         WeaponUpgradePath::Standard }, // Claymore
{  301100 ,          WeaponUpgradePath::Crystal }, // Claymore [Crystal]
{  301200 ,        WeaponUpgradePath::Lightning }, // Claymore [Lightning]
{  301300 ,              WeaponUpgradePath::Raw }, // Claymore [Raw]
{  301400 ,            WeaponUpgradePath::Magic }, // Claymore [Magic]
{  301500 ,        WeaponUpgradePath::Enchanted }, // Claymore [Enchanted]
{  301600 ,           WeaponUpgradePath::Divine }, // Claymore [Divine]
{  301700 ,           WeaponUpgradePath::Occult }, // Claymore [Occult]
{  301800 ,             WeaponUpgradePath::Fire }, // Claymore [Fire]
{  301900 ,            WeaponUpgradePath::Chaos }, // Claymore [Chaos]
{  302000 ,         WeaponUpgradePath::Standard }, // Man-serpent Greatsword
{  302100 ,          WeaponUpgradePath::Crystal }, // Man-serpent Greatsword [Crystal]
{  302200 ,        WeaponUpgradePath::Lightning }, // Man-serpent Greatsword [Lightning]
{  302300 ,              WeaponUpgradePath::Raw }, // Man-serpent Greatsword [Raw]
{  302400 ,            WeaponUpgradePath::Magic }, // Man-serpent Greatsword [Magic]
{  302500 ,        WeaponUpgradePath::Enchanted }, // Man-serpent Greatsword [Enchanted]
{  302600 ,           WeaponUpgradePath::Divine }, // Man-serpent Greatsword [Divine]
{  302700 ,           WeaponUpgradePath::Occult }, // Man-serpent Greatsword [Occult]
{  302800 ,             WeaponUpgradePath::Fire }, // Man-serpent Greatsword [Fire]
{  302900 ,            WeaponUpgradePath::Chaos }, // Man-serpent Greatsword [Chaos]
{  303000 ,         WeaponUpgradePath::Standard }, // Flamberge
{  303100 ,          WeaponUpgradePath::Crystal }, // Flamberge [Crystal]
{  303200 ,        WeaponUpgradePath::Lightning }, // Flamberge [Lightning]
{  303300 ,              WeaponUpgradePath::Raw }, // Flamberge [Raw]
{  303400 ,            WeaponUpgradePath::Magic }, // Flamberge [Magic]
{  303500 ,        WeaponUpgradePath::Enchanted }, // Flamberge [Enchanted]
{  303600 ,           WeaponUpgradePath::Divine }, // Flamberge [Divine]
{  303700 ,           WeaponUpgradePath::Occult }, // Flamberge [Occult]
{  303800 ,             WeaponUpgradePath::Fire }, // Flamberge [Fire]
{  303900 ,            WeaponUpgradePath::Chaos }, // Flamberge [Chaos]
{  304000 ,        WeaponUpgradePath::NoUpgrade }, // Crystal Greatsword
{  306000 ,        WeaponUpgradePath::Twinkling }, // Stone Greatsword
{  307000 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Broken Straight Sword]
{  307100 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Straight Sword Hilt]
{  309000 ,           WeaponUpgradePath::Dragon }, // Moonlight Greatsword
{  310000 ,        WeaponUpgradePath::Twinkling }, // Black Knight Sword
{  311000 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Dagger]
{  311100 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Parrying Dagger]
{  311200 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Bandit's Knife]
{  311300 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Shortsword]
{  311400 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Longsword]
{  311500 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Broadsword]
{  311600 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Balder Side Sword]
{  311700 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Sunlight Straight Sword]
{  311800 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Barbed Straight Sword]
{  311900 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Astora's Straight Sword]
{  312000 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Darksword]
{  312100 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Bastard Sword]
{  312200 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Claymore]
{  312300 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Man-serpent Greatsword]
{  312400 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Flamberge]
{  312500 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Zweihander]
{  312600 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Greatsword]
{  312700 ,         WeaponUpgradePath::DemonSif }, // Greatsword of Artorias [Demon Great Machete]
{  314000 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Dagger]
{  314100 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Parrying Dagger]
{  314200 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Bandit's Knife]
{  314300 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Shortsword]
{  314400 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Longsword]
{  314500 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Broadsword]
{  314600 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Balder Side Sword]
{  314700 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Sunlight Straight Sword]
{  314800 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Barbed Straight Sword]
{  314900 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Astora's Straight Sword]
{  315000 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Darksword]
{  315100 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Bastard Sword]
{  315200 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Claymore]
{  315300 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Man-serpent Greatsword]
{  315400 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Flamberge]
{  315500 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Zweihander]
{  315600 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Greatsword]
{  315700 ,        WeaponUpgradePath::DemonGwyn }, // Great Lord Greatsword [Demon Great Machete]
{  350000 ,         WeaponUpgradePath::Standard }, // Zweihander
{  350100 ,          WeaponUpgradePath::Crystal }, // Zweihander [Crystal]
{  350200 ,        WeaponUpgradePath::Lightning }, // Zweihander [Lightning]
{  350300 ,              WeaponUpgradePath::Raw }, // Zweihander [Raw]
{  350400 ,            WeaponUpgradePath::Magic }, // Zweihander [Magic]
{  350500 ,        WeaponUpgradePath::Enchanted }, // Zweihander [Enchanted]
{  350600 ,           WeaponUpgradePath::Divine }, // Zweihander [Divine]
{  350700 ,           WeaponUpgradePath::Occult }, // Zweihander [Occult]
{  350800 ,             WeaponUpgradePath::Fire }, // Zweihander [Fire]
{  350900 ,            WeaponUpgradePath::Chaos }, // Zweihander [Chaos]
{  351000 ,         WeaponUpgradePath::Standard }, // Greatsword
{  351100 ,          WeaponUpgradePath::Crystal }, // Greatsword [Crystal]
{  351200 ,        WeaponUpgradePath::Lightning }, // Greatsword [Lightning]
{  351300 ,              WeaponUpgradePath::Raw }, // Greatsword [Raw]
{  351400 ,            WeaponUpgradePath::Magic }, // Greatsword [Magic]
{  351500 ,        WeaponUpgradePath::Enchanted }, // Greatsword [Enchanted]
{  351600 ,           WeaponUpgradePath::Divine }, // Greatsword [Divine]
{  351700 ,           WeaponUpgradePath::Occult }, // Greatsword [Occult]
{  351800 ,             WeaponUpgradePath::Fire }, // Greatsword [Fire]
{  351900 ,            WeaponUpgradePath::Chaos }, // Greatsword [Chaos]
{  352000 ,         WeaponUpgradePath::Standard }, // Demon Great Machete
{  352100 ,          WeaponUpgradePath::Crystal }, // Demon Great Machete [Crystal]
{  352200 ,        WeaponUpgradePath::Lightning }, // Demon Great Machete [Lightning]
{  352300 ,              WeaponUpgradePath::Raw }, // Demon Great Machete [Raw]
{  352400 ,            WeaponUpgradePath::Magic }, // Demon Great Machete [Magic]
{  352500 ,        WeaponUpgradePath::Enchanted }, // Demon Great Machete [Enchanted]
{  352600 ,           WeaponUpgradePath::Divine }, // Demon Great Machete [Divine]
{  352700 ,           WeaponUpgradePath::Occult }, // Demon Great Machete [Occult]
{  352800 ,             WeaponUpgradePath::Fire }, // Demon Great Machete [Fire]
{  352900 ,            WeaponUpgradePath::Chaos }, // Demon Great Machete [Chaos]
{  354000 ,           WeaponUpgradePath::Dragon }, // Dragon Greatsword
{  355000 ,        WeaponUpgradePath::Twinkling }, // Black Knight Greatsword
{  398000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Greatsword
{  399000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Ultra Greatsword
{  400000 ,         WeaponUpgradePath::Standard }, // Scimitar
{  400100 ,          WeaponUpgradePath::Crystal }, // Scimitar [Crystal]
{  400200 ,        WeaponUpgradePath::Lightning }, // Scimitar [Lightning]
{  400300 ,              WeaponUpgradePath::Raw }, // Scimitar [Raw]
{  400400 ,            WeaponUpgradePath::Magic }, // Scimitar [Magic]
{  400500 ,        WeaponUpgradePath::Enchanted }, // Scimitar [Enchanted]
{  400600 ,           WeaponUpgradePath::Divine }, // Scimitar [Divine]
{  400700 ,           WeaponUpgradePath::Occult }, // Scimitar [Occult]
{  400800 ,             WeaponUpgradePath::Fire }, // Scimitar [Fire]
{  400900 ,            WeaponUpgradePath::Chaos }, // Scimitar [Chaos]
{  401000 ,         WeaponUpgradePath::Standard }, // Falchion
{  401100 ,          WeaponUpgradePath::Crystal }, // Falchion [Crystal]
{  401200 ,        WeaponUpgradePath::Lightning }, // Falchion [Lightning]
{  401300 ,              WeaponUpgradePath::Raw }, // Falchion [Raw]
{  401400 ,            WeaponUpgradePath::Magic }, // Falchion [Magic]
{  401500 ,        WeaponUpgradePath::Enchanted }, // Falchion [Enchanted]
{  401600 ,           WeaponUpgradePath::Divine }, // Falchion [Divine]
{  401700 ,           WeaponUpgradePath::Occult }, // Falchion [Occult]
{  401800 ,             WeaponUpgradePath::Fire }, // Falchion [Fire]
{  401900 ,            WeaponUpgradePath::Chaos }, // Falchion [Chaos]
{  402000 ,         WeaponUpgradePath::Standard }, // Shotel
{  402100 ,          WeaponUpgradePath::Crystal }, // Shotel [Crystal]
{  402200 ,        WeaponUpgradePath::Lightning }, // Shotel [Lightning]
{  402300 ,              WeaponUpgradePath::Raw }, // Shotel [Raw]
{  402400 ,            WeaponUpgradePath::Magic }, // Shotel [Magic]
{  402500 ,        WeaponUpgradePath::Enchanted }, // Shotel [Enchanted]
{  402600 ,           WeaponUpgradePath::Divine }, // Shotel [Divine]
{  402700 ,           WeaponUpgradePath::Occult }, // Shotel [Occult]
{  402800 ,             WeaponUpgradePath::Fire }, // Shotel [Fire]
{  402900 ,            WeaponUpgradePath::Chaos }, // Shotel [Chaos]
{  403000 ,        WeaponUpgradePath::Twinkling }, // Jagged Ghost Blade
{  405000 ,         WeaponUpgradePath::Standard }, // Painting Guardian Sword
{  405100 ,          WeaponUpgradePath::Crystal }, // Painting Guardian Sword [Crystal]
{  405200 ,        WeaponUpgradePath::Lightning }, // Painting Guardian Sword [Lightning]
{  405300 ,              WeaponUpgradePath::Raw }, // Painting Guardian Sword [Raw]
{  405400 ,            WeaponUpgradePath::Magic }, // Painting Guardian Sword [Magic]
{  405500 ,        WeaponUpgradePath::Enchanted }, // Painting Guardian Sword [Enchanted]
{  405600 ,           WeaponUpgradePath::Divine }, // Painting Guardian Sword [Divine]
{  405700 ,           WeaponUpgradePath::Occult }, // Painting Guardian Sword [Occult]
{  405800 ,             WeaponUpgradePath::Fire }, // Painting Guardian Sword [Fire]
{  405900 ,            WeaponUpgradePath::Chaos }, // Painting Guardian Sword [Chaos]
{  406000 ,     WeaponUpgradePath::DemonQuelaag }, // Quelaag's Furysword [Scimitar]
{  406100 ,     WeaponUpgradePath::DemonQuelaag }, // Quelaag's Furysword [Falchion
{  406200 ,     WeaponUpgradePath::DemonQuelaag }, // Quelaag's Furysword [Shotel]
{  406300 ,     WeaponUpgradePath::DemonQuelaag }, // Quelaag's Furysword [Painting Guardian Sword]
{  406400 ,     WeaponUpgradePath::DemonQuelaag }, // Quelaag's Furysword [Server]
{  406500 ,     WeaponUpgradePath::DemonQuelaag }, // Quelaag's Furysword [Murakumo]
{  450000 ,         WeaponUpgradePath::Standard }, // Server
{  450100 ,          WeaponUpgradePath::Crystal }, // Server [Crystal]
{  450200 ,        WeaponUpgradePath::Lightning }, // Server [Lightning]
{  450300 ,              WeaponUpgradePath::Raw }, // Server [Raw]
{  450400 ,            WeaponUpgradePath::Magic }, // Server [Magic]
{  450500 ,        WeaponUpgradePath::Enchanted }, // Server [Enchanted]
{  450600 ,           WeaponUpgradePath::Divine }, // Server [Divine]
{  450700 ,           WeaponUpgradePath::Occult }, // Server [Occult]
{  450800 ,             WeaponUpgradePath::Fire }, // Server [Fire]
{  450900 ,            WeaponUpgradePath::Chaos }, // Server [Chaos]
{  451000 ,         WeaponUpgradePath::Standard }, // Murakumo
{  451100 ,          WeaponUpgradePath::Crystal }, // Murakumo [Crystal]
{  451200 ,        WeaponUpgradePath::Lightning }, // Murakumo [Lightning]
{  451300 ,              WeaponUpgradePath::Raw }, // Murakumo [Raw]
{  451400 ,            WeaponUpgradePath::Magic }, // Murakumo [Magic]
{  451500 ,        WeaponUpgradePath::Enchanted }, // Murakumo [Enchanted]
{  451600 ,           WeaponUpgradePath::Divine }, // Murakumo [Divine]
{  451700 ,           WeaponUpgradePath::Occult }, // Murakumo [Occult]
{  451800 ,             WeaponUpgradePath::Fire }, // Murakumo [Fire]
{  451900 ,            WeaponUpgradePath::Chaos }, // Murakumo [Chaos]
{  453000 ,     WeaponUpgradePath::DemonNonBoss }, // Gravelord Sword
{  498000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Curved Sword
{  499000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Curved Greatsword
{  500000 ,         WeaponUpgradePath::Standard }, // Uchigatana
{  500100 ,          WeaponUpgradePath::Crystal }, // Uchigatana [Crystal]
{  500200 ,        WeaponUpgradePath::Lightning }, // Uchigatana [Lightning]
{  500300 ,              WeaponUpgradePath::Raw }, // Uchigatana [Raw]
{  500400 ,            WeaponUpgradePath::Magic }, // Uchigatana [Magic]
{  500500 ,        WeaponUpgradePath::Enchanted }, // Uchigatana [Enchanted]
{  500600 ,           WeaponUpgradePath::Divine }, // Uchigatana [Divine]
{  500700 ,           WeaponUpgradePath::Occult }, // Uchigatana [Occult]
{  500800 ,             WeaponUpgradePath::Fire }, // Uchigatana [Fire]
{  500900 ,            WeaponUpgradePath::Chaos }, // Uchigatana [Chaos]
{  501000 ,         WeaponUpgradePath::Standard }, // Washing Pole
{  501100 ,          WeaponUpgradePath::Crystal }, // Washing Pole [Crystal]
{  501200 ,        WeaponUpgradePath::Lightning }, // Washing Pole [Lightning]
{  501300 ,              WeaponUpgradePath::Raw }, // Washing Pole [Raw]
{  501400 ,            WeaponUpgradePath::Magic }, // Washing Pole [Magic]
{  501500 ,        WeaponUpgradePath::Enchanted }, // Washing Pole [Enchanted]
{  501600 ,           WeaponUpgradePath::Divine }, // Washing Pole [Divine]
{  501700 ,           WeaponUpgradePath::Occult }, // Washing Pole [Occult]
{  501800 ,             WeaponUpgradePath::Fire }, // Washing Pole [Fire]
{  501900 ,            WeaponUpgradePath::Chaos }, // Washing Pole [Chaos]
{  502000 ,         WeaponUpgradePath::Standard }, // Iaito
{  502100 ,          WeaponUpgradePath::Crystal }, // Iaito [Crystal]
{  502200 ,        WeaponUpgradePath::Lightning }, // Iaito [Lightning]
{  502300 ,              WeaponUpgradePath::Raw }, // Iaito [Raw]
{  502400 ,            WeaponUpgradePath::Magic }, // Iaito [Magic]
{  502500 ,        WeaponUpgradePath::Enchanted }, // Iaito [Enchanted]
{  502600 ,           WeaponUpgradePath::Divine }, // Iaito [Divine]
{  502700 ,           WeaponUpgradePath::Occult }, // Iaito [Occult]
{  502800 ,             WeaponUpgradePath::Fire }, // Iaito [Fire]
{  502900 ,            WeaponUpgradePath::Chaos }, // Iaito [Chaos]
{  503000 ,     WeaponUpgradePath::DemonQuelaag }, // Chaos Blade [Uchigatana]
{  503100 ,     WeaponUpgradePath::DemonQuelaag }, // Chaos Blade [Washing Pole]
{  503200 ,     WeaponUpgradePath::DemonQuelaag }, // Chaos Blade [Iaito]
{  599000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Katana
{  600000 ,         WeaponUpgradePath::Standard }, // Mail Breaker
{  600100 ,          WeaponUpgradePath::Crystal }, // Mail Breaker [Crystal]
{  600200 ,        WeaponUpgradePath::Lightning }, // Mail Breaker [Lightning]
{  600300 ,              WeaponUpgradePath::Raw }, // Mail Breaker [Raw]
{  600400 ,            WeaponUpgradePath::Magic }, // Mail Breaker [Magic]
{  600500 ,        WeaponUpgradePath::Enchanted }, // Mail Breaker [Enchanted]
{  600600 ,           WeaponUpgradePath::Divine }, // Mail Breaker [Divine]
{  600700 ,           WeaponUpgradePath::Occult }, // Mail Breaker [Occult]
{  600800 ,             WeaponUpgradePath::Fire }, // Mail Breaker [Fire]
{  600900 ,            WeaponUpgradePath::Chaos }, // Mail Breaker [Chaos]
{  601000 ,         WeaponUpgradePath::Standard }, // Rapier
{  601100 ,          WeaponUpgradePath::Crystal }, // Rapier [Crystal]
{  601200 ,        WeaponUpgradePath::Lightning }, // Rapier [Lightning]
{  601300 ,              WeaponUpgradePath::Raw }, // Rapier [Raw]
{  601400 ,            WeaponUpgradePath::Magic }, // Rapier [Magic]
{  601500 ,        WeaponUpgradePath::Enchanted }, // Rapier [Enchanted]
{  601600 ,           WeaponUpgradePath::Divine }, // Rapier [Divine]
{  601700 ,           WeaponUpgradePath::Occult }, // Rapier [Occult]
{  601800 ,             WeaponUpgradePath::Fire }, // Rapier [Fire]
{  601900 ,            WeaponUpgradePath::Chaos }, // Rapier [Chaos]
{  602000 ,         WeaponUpgradePath::Standard }, // Estoc
{  602100 ,          WeaponUpgradePath::Crystal }, // Estoc [Crystal]
{  602200 ,        WeaponUpgradePath::Lightning }, // Estoc [Lightning]
{  602300 ,              WeaponUpgradePath::Raw }, // Estoc [Raw]
{  602400 ,            WeaponUpgradePath::Magic }, // Estoc [Magic]
{  602500 ,        WeaponUpgradePath::Enchanted }, // Estoc [Enchanted]
{  602600 ,           WeaponUpgradePath::Divine }, // Estoc [Divine]
{  602700 ,           WeaponUpgradePath::Occult }, // Estoc [Occult]
{  602800 ,             WeaponUpgradePath::Fire }, // Estoc [Fire]
{  602900 ,            WeaponUpgradePath::Chaos }, // Estoc [Chaos]
{  603000 ,        WeaponUpgradePath::Twinkling }, // Velka's Rapier
{  604000 ,         WeaponUpgradePath::Standard }, // Ricard's Rapier
{  604100 ,          WeaponUpgradePath::Crystal }, // Ricard's Rapier [Crystal]
{  604200 ,        WeaponUpgradePath::Lightning }, // Ricard's Rapier [Lightning]
{  604300 ,              WeaponUpgradePath::Raw }, // Ricard's Rapier [Raw]
{  604400 ,            WeaponUpgradePath::Magic }, // Ricard's Rapier [Magic]
{  604500 ,        WeaponUpgradePath::Enchanted }, // Ricard's Rapier [Enchanted]
{  604600 ,           WeaponUpgradePath::Divine }, // Ricard's Rapier [Divine]
{  604700 ,           WeaponUpgradePath::Occult }, // Ricard's Rapier [Occult]
{  604800 ,             WeaponUpgradePath::Fire }, // Ricard's Rapier [Fire]
{  604900 ,            WeaponUpgradePath::Chaos }, // Ricard's Rapier [Chaos]
{  699000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Thrusting Sword
{  700000 ,         WeaponUpgradePath::Standard }, // Hand Axe
{  700100 ,          WeaponUpgradePath::Crystal }, // Hand Axe [Crystal]
{  700200 ,        WeaponUpgradePath::Lightning }, // Hand Axe [Lightning]
{  700300 ,              WeaponUpgradePath::Raw }, // Hand Axe [Raw]
{  700400 ,            WeaponUpgradePath::Magic }, // Hand Axe [Magic]
{  700500 ,        WeaponUpgradePath::Enchanted }, // Hand Axe [Enchanted]
{  700600 ,           WeaponUpgradePath::Divine }, // Hand Axe [Divine]
{  700700 ,           WeaponUpgradePath::Occult }, // Hand Axe [Occult]
{  700800 ,             WeaponUpgradePath::Fire }, // Hand Axe [Fire]
{  700900 ,            WeaponUpgradePath::Chaos }, // Hand Axe [Chaos]
{  701000 ,         WeaponUpgradePath::Standard }, // Battle Axe
{  701100 ,          WeaponUpgradePath::Crystal }, // Battle Axe [Crystal]
{  701200 ,        WeaponUpgradePath::Lightning }, // Battle Axe [Lightning]
{  701300 ,              WeaponUpgradePath::Raw }, // Battle Axe [Raw]
{  701400 ,            WeaponUpgradePath::Magic }, // Battle Axe [Magic]
{  701500 ,        WeaponUpgradePath::Enchanted }, // Battle Axe [Enchanted]
{  701600 ,           WeaponUpgradePath::Divine }, // Battle Axe [Divine]
{  701700 ,           WeaponUpgradePath::Occult }, // Battle Axe [Occult]
{  701800 ,             WeaponUpgradePath::Fire }, // Battle Axe [Fire]
{  701900 ,            WeaponUpgradePath::Chaos }, // Battle Axe [Chaos]
{  702000 ,        WeaponUpgradePath::Twinkling }, // Crescent Axe
{  703000 ,         WeaponUpgradePath::Standard }, // Butcher Knife
{  703100 ,          WeaponUpgradePath::Crystal }, // Butcher Knife [Crystal]
{  703200 ,        WeaponUpgradePath::Lightning }, // Butcher Knife [Lightning]
{  703300 ,              WeaponUpgradePath::Raw }, // Butcher Knife [Raw]
{  703400 ,            WeaponUpgradePath::Magic }, // Butcher Knife [Magic]
{  703500 ,        WeaponUpgradePath::Enchanted }, // Butcher Knife [Enchanted]
{  703600 ,           WeaponUpgradePath::Divine }, // Butcher Knife [Divine]
{  703700 ,           WeaponUpgradePath::Occult }, // Butcher Knife [Occult]
{  703800 ,             WeaponUpgradePath::Fire }, // Butcher Knife [Fire]
{  703900 ,            WeaponUpgradePath::Chaos }, // Butcher Knife [Chaos]
{  704000 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Hand Axe]
{  704100 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Battle Axe]
{  704200 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Crescent Axe]
{  704300 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Butcher Knife]
{  704400 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Gargoyle Tail Axe]
{  704500 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Greataxe
{  704600 ,       WeaponUpgradePath::DemonGolem }, // Golem Axe [Demon's Greataxe
{  705000 ,         WeaponUpgradePath::Standard }, // Gargoyle Tail Axe
{  705100 ,          WeaponUpgradePath::Crystal }, // Gargoyle Tail Axe [Crystal]
{  705200 ,        WeaponUpgradePath::Lightning }, // Gargoyle Tail Axe [Lightning]
{  705300 ,              WeaponUpgradePath::Raw }, // Gargoyle Tail Axe [Raw]
{  705400 ,            WeaponUpgradePath::Magic }, // Gargoyle Tail Axe [Magic]
{  705500 ,        WeaponUpgradePath::Enchanted }, // Gargoyle Tail Axe [Enchanted]
{  705600 ,           WeaponUpgradePath::Divine }, // Gargoyle Tail Axe [Divine]
{  705700 ,           WeaponUpgradePath::Occult }, // Gargoyle Tail Axe [Occult]
{  705800 ,             WeaponUpgradePath::Fire }, // Gargoyle Tail Axe [Fire]
{  705900 ,            WeaponUpgradePath::Chaos }, // Gargoyle Tail Axe [Chaos]
{  750000 ,         WeaponUpgradePath::Standard }, // Greataxe
{  750100 ,          WeaponUpgradePath::Crystal }, // Greataxe [Crystal]
{  750200 ,        WeaponUpgradePath::Lightning }, // Greataxe [Lightning]
{  750300 ,              WeaponUpgradePath::Raw }, // Greataxe [Raw]
{  750400 ,            WeaponUpgradePath::Magic }, // Greataxe [Magic]
{  750500 ,        WeaponUpgradePath::Enchanted }, // Greataxe [Enchanted]
{  750600 ,           WeaponUpgradePath::Divine }, // Greataxe [Divine]
{  750700 ,           WeaponUpgradePath::Occult }, // Greataxe [Occult]
{  750800 ,             WeaponUpgradePath::Fire }, // Greataxe [Fire]
{  750900 ,            WeaponUpgradePath::Chaos }, // Greataxe [Chaos]
{  751000 ,         WeaponUpgradePath::Standard }, // Demon's Greataxe
{  751100 ,          WeaponUpgradePath::Crystal }, // Demon's Greataxe [Crystal]
{  751200 ,        WeaponUpgradePath::Lightning }, // Demon's Greataxe [Lightning]
{  751300 ,              WeaponUpgradePath::Raw }, // Demon's Greataxe [Raw]
{  751400 ,            WeaponUpgradePath::Magic }, // Demon's Greataxe [Magic]
{  751500 ,        WeaponUpgradePath::Enchanted }, // Demon's Greataxe [Enchanted]
{  751600 ,           WeaponUpgradePath::Divine }, // Demon's Greataxe [Divine]
{  751700 ,           WeaponUpgradePath::Occult }, // Demon's Greataxe [Occult]
{  751800 ,             WeaponUpgradePath::Fire }, // Demon's Greataxe [Fire]
{  751900 ,            WeaponUpgradePath::Chaos }, // Demon's Greataxe [Chaos]
{  752000 ,           WeaponUpgradePath::Dragon }, // Dragon King Greataxe
{  753000 ,        WeaponUpgradePath::Twinkling }, // Black Knight Greataxe
{  798000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Axe
{  799000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Greataxe
{  800000 ,         WeaponUpgradePath::Standard }, // Club
{  800100 ,          WeaponUpgradePath::Crystal }, // Club [Crystal]
{  800200 ,        WeaponUpgradePath::Lightning }, // Club [Lightning]
{  800300 ,              WeaponUpgradePath::Raw }, // Club [Raw]
{  800400 ,            WeaponUpgradePath::Magic }, // Club [Magic]
{  800500 ,        WeaponUpgradePath::Enchanted }, // Club [Enchanted]
{  800600 ,           WeaponUpgradePath::Divine }, // Club [Divine]
{  800700 ,           WeaponUpgradePath::Occult }, // Club [Occult]
{  800800 ,             WeaponUpgradePath::Fire }, // Club [Fire]
{  800900 ,            WeaponUpgradePath::Chaos }, // Club [Chaos]
{  801000 ,         WeaponUpgradePath::Standard }, // Mace
{  801100 ,          WeaponUpgradePath::Crystal }, // Mace [Crystal]
{  801200 ,        WeaponUpgradePath::Lightning }, // Mace [Lightning]
{  801300 ,              WeaponUpgradePath::Raw }, // Mace [Raw]
{  801400 ,            WeaponUpgradePath::Magic }, // Mace [Magic]
{  801500 ,        WeaponUpgradePath::Enchanted }, // Mace [Enchanted]
{  801600 ,           WeaponUpgradePath::Divine }, // Mace [Divine]
{  801700 ,           WeaponUpgradePath::Occult }, // Mace [Occult]
{  801800 ,             WeaponUpgradePath::Fire }, // Mace [Fire]
{  801900 ,            WeaponUpgradePath::Chaos }, // Mace [Chaos]
{  802000 ,         WeaponUpgradePath::Standard }, // Morning Star
{  802100 ,          WeaponUpgradePath::Crystal }, // Morning Star [Crystal]
{  802200 ,        WeaponUpgradePath::Lightning }, // Morning Star [Lightning]
{  802300 ,              WeaponUpgradePath::Raw }, // Morning Star [Raw]
{  802400 ,            WeaponUpgradePath::Magic }, // Morning Star [Magic]
{  802500 ,        WeaponUpgradePath::Enchanted }, // Morning Star [Enchanted]
{  802600 ,           WeaponUpgradePath::Divine }, // Morning Star [Divine]
{  802700 ,           WeaponUpgradePath::Occult }, // Morning Star [Occult]
{  802800 ,             WeaponUpgradePath::Fire }, // Morning Star [Fire]
{  802900 ,            WeaponUpgradePath::Chaos }, // Morning Star [Chaos]
{  803000 ,         WeaponUpgradePath::Standard }, // Warpick
{  803100 ,          WeaponUpgradePath::Crystal }, // Warpick [Crystal]
{  803200 ,        WeaponUpgradePath::Lightning }, // Warpick [Lightning]
{  803300 ,              WeaponUpgradePath::Raw }, // Warpick [Raw]
{  803400 ,            WeaponUpgradePath::Magic }, // Warpick [Magic]
{  803500 ,        WeaponUpgradePath::Enchanted }, // Warpick [Enchanted]
{  803600 ,           WeaponUpgradePath::Divine }, // Warpick [Divine]
{  803700 ,           WeaponUpgradePath::Occult }, // Warpick [Occult]
{  803800 ,             WeaponUpgradePath::Fire }, // Warpick [Fire]
{  803900 ,            WeaponUpgradePath::Chaos }, // Warpick [Chaos]
{  804000 ,         WeaponUpgradePath::Standard }, // Pickaxe
{  804100 ,          WeaponUpgradePath::Crystal }, // Pickaxe [Crystal]
{  804200 ,        WeaponUpgradePath::Lightning }, // Pickaxe [Lightning]
{  804300 ,              WeaponUpgradePath::Raw }, // Pickaxe [Raw]
{  804400 ,            WeaponUpgradePath::Magic }, // Pickaxe [Magic]
{  804500 ,        WeaponUpgradePath::Enchanted }, // Pickaxe [Enchanted]
{  804600 ,           WeaponUpgradePath::Divine }, // Pickaxe [Divine]
{  804700 ,           WeaponUpgradePath::Occult }, // Pickaxe [Occult]
{  804800 ,             WeaponUpgradePath::Fire }, // Pickaxe [Fire]
{  804900 ,            WeaponUpgradePath::Chaos }, // Pickaxe [Chaos]
{  809000 ,         WeaponUpgradePath::Standard }, // Reinforced Club
{  809100 ,          WeaponUpgradePath::Crystal }, // Reinforced Club [Crystal]
{  809200 ,        WeaponUpgradePath::Lightning }, // Reinforced Club [Lightning]
{  809300 ,              WeaponUpgradePath::Raw }, // Reinforced Club [Raw]
{  809400 ,            WeaponUpgradePath::Magic }, // Reinforced Club [Magic]
{  809500 ,        WeaponUpgradePath::Enchanted }, // Reinforced Club [Enchanted]
{  809600 ,           WeaponUpgradePath::Divine }, // Reinforced Club [Divine]
{  809700 ,           WeaponUpgradePath::Occult }, // Reinforced Club [Occult]
{  809800 ,             WeaponUpgradePath::Fire }, // Reinforced Club [Fire]
{  809900 ,            WeaponUpgradePath::Chaos }, // Reinforced Club [Chaos]
{  810000 ,         WeaponUpgradePath::Standard }, // Blacksmith Hammer
{  810100 ,          WeaponUpgradePath::Crystal }, // Blacksmith Hammer [Crystal]
{  810200 ,        WeaponUpgradePath::Lightning }, // Blacksmith Hammer [Lightning]
{  810300 ,              WeaponUpgradePath::Raw }, // Blacksmith Hammer [Raw]
{  810400 ,            WeaponUpgradePath::Magic }, // Blacksmith Hammer [Magic]
{  810500 ,        WeaponUpgradePath::Enchanted }, // Blacksmith Hammer [Enchanted]
{  810600 ,           WeaponUpgradePath::Divine }, // Blacksmith Hammer [Divine]
{  810700 ,           WeaponUpgradePath::Occult }, // Blacksmith Hammer [Occult]
{  810800 ,             WeaponUpgradePath::Fire }, // Blacksmith Hammer [Fire]
{  810900 ,            WeaponUpgradePath::Chaos }, // Blacksmith Hammer [Chaos]
{  811000 ,        WeaponUpgradePath::Twinkling }, // Blacksmith Giant Hammer
{  812000 ,        WeaponUpgradePath::Twinkling }, // Hammer of Vamos
{  850000 ,         WeaponUpgradePath::Standard }, // Great Club
{  850100 ,          WeaponUpgradePath::Crystal }, // Great Club [Crystal]
{  850200 ,        WeaponUpgradePath::Lightning }, // Great Club [Lightning]
{  850300 ,              WeaponUpgradePath::Raw }, // Great Club [Raw]
{  850400 ,            WeaponUpgradePath::Magic }, // Great Club [Magic]
{  850500 ,        WeaponUpgradePath::Enchanted }, // Great Club [Enchanted]
{  850600 ,           WeaponUpgradePath::Divine }, // Great Club [Divine]
{  850700 ,           WeaponUpgradePath::Occult }, // Great Club [Occult]
{  850800 ,             WeaponUpgradePath::Fire }, // Great Club [Fire]
{  850900 ,            WeaponUpgradePath::Chaos }, // Great Club [Chaos]
{  851000 ,        WeaponUpgradePath::Twinkling }, // Grant
{  852000 ,         WeaponUpgradePath::Standard }, // Demon's Great Hammer
{  852100 ,          WeaponUpgradePath::Crystal }, // Demon's Great Hammer [Crystal]
{  852200 ,        WeaponUpgradePath::Lightning }, // Demon's Great Hammer [Lightning]
{  852300 ,              WeaponUpgradePath::Raw }, // Demon's Great Hammer [Raw]
{  852400 ,            WeaponUpgradePath::Magic }, // Demon's Great Hammer [Magic]
{  852500 ,        WeaponUpgradePath::Enchanted }, // Demon's Great Hammer [Enchanted]
{  852600 ,           WeaponUpgradePath::Divine }, // Demon's Great Hammer [Divine]
{  852700 ,           WeaponUpgradePath::Occult }, // Demon's Great Hammer [Occult]
{  852800 ,             WeaponUpgradePath::Fire }, // Demon's Great Hammer [Fire]
{  852900 ,            WeaponUpgradePath::Chaos }, // Demon's Great Hammer [Chaos]
{  854000 ,           WeaponUpgradePath::Dragon }, // Dragon Tooth
{  855000 ,         WeaponUpgradePath::Standard }, // Large Club
{  855100 ,          WeaponUpgradePath::Crystal }, // Large Club [Crystal]
{  855200 ,        WeaponUpgradePath::Lightning }, // Large Club [Lightning]
{  855300 ,              WeaponUpgradePath::Raw }, // Large Club [Raw]
{  855400 ,            WeaponUpgradePath::Magic }, // Large Club [Magic]
{  855500 ,        WeaponUpgradePath::Enchanted }, // Large Club [Enchanted]
{  855600 ,           WeaponUpgradePath::Divine }, // Large Club [Divine]
{  855700 ,           WeaponUpgradePath::Occult }, // Large Club [Occult]
{  855800 ,             WeaponUpgradePath::Fire }, // Large Club [Fire]
{  855900 ,            WeaponUpgradePath::Chaos }, // Large Club [Chaos]
{  856000 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Club]
{  856100 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Mace]
{  856200 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Morning Star]
{  856300 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Warpick]
{  856400 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Pickaxe]
{  856500 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Reinforced Club]
{  856600 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Blacksmith Hammer]
{  856700 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Blacksmith Giant Hammer
{  856800 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Hammer of Vamos]
{  856900 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Great Club]
{  857000 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Demon's Great Hammer]
{  857100 ,      WeaponUpgradePath::DemonSmough }, // Smough's Hammer [Large Club]
{  898000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Hammer
{  899000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Mallet
{  900000 ,        WeaponUpgradePath::NoUpgrade }, // Fists
{  901000 ,         WeaponUpgradePath::Standard }, // Caestus
{  901100 ,          WeaponUpgradePath::Crystal }, // Caestus [Crystal]
{  901200 ,        WeaponUpgradePath::Lightning }, // Caestus [Lightning]
{  901300 ,              WeaponUpgradePath::Raw }, // Caestus [Raw]
{  901400 ,            WeaponUpgradePath::Magic }, // Caestus [Magic]
{  901500 ,        WeaponUpgradePath::Enchanted }, // Caestus [Enchanted]
{  901600 ,           WeaponUpgradePath::Divine }, // Caestus [Divine]
{  901700 ,           WeaponUpgradePath::Occult }, // Caestus [Occult]
{  901800 ,             WeaponUpgradePath::Fire }, // Caestus [Fire]
{  901900 ,            WeaponUpgradePath::Chaos }, // Caestus [Chaos]
{  902000 ,         WeaponUpgradePath::Standard }, // Claw
{  902100 ,          WeaponUpgradePath::Crystal }, // Claw [Crystal]
{  902200 ,        WeaponUpgradePath::Lightning }, // Claw [Lightning]
{  902300 ,              WeaponUpgradePath::Raw }, // Claw [Raw]
{  902400 ,            WeaponUpgradePath::Magic }, // Claw [Magic]
{  902500 ,        WeaponUpgradePath::Enchanted }, // Claw [Enchanted]
{  902600 ,           WeaponUpgradePath::Divine }, // Claw [Divine]
{  902700 ,           WeaponUpgradePath::Occult }, // Claw [Occult]
{  902800 ,             WeaponUpgradePath::Fire }, // Claw [Fire]
{  902900 ,            WeaponUpgradePath::Chaos }, // Claw [Chaos]
{  903000 ,      WeaponUpgradePath::DragonGolem }, // Dragon Bone Fist [Caestus]
{  903100 ,      WeaponUpgradePath::DragonGolem }, // Dragon Bone Fist [Claw]
{  904000 ,        WeaponUpgradePath::NoUpgrade }, // Dark Hand
{  999000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Fist
{ 1000000 ,         WeaponUpgradePath::Standard }, // Spear
{ 1000100 ,          WeaponUpgradePath::Crystal }, // Spear [Crystal]
{ 1000200 ,        WeaponUpgradePath::Lightning }, // Spear [Lightning]
{ 1000300 ,              WeaponUpgradePath::Raw }, // Spear [Raw]
{ 1000400 ,            WeaponUpgradePath::Magic }, // Spear [Magic]
{ 1000500 ,        WeaponUpgradePath::Enchanted }, // Spear [Enchanted]
{ 1000600 ,           WeaponUpgradePath::Divine }, // Spear [Divine]
{ 1000700 ,           WeaponUpgradePath::Occult }, // Spear [Occult]
{ 1000800 ,             WeaponUpgradePath::Fire }, // Spear [Fire]
{ 1000900 ,            WeaponUpgradePath::Chaos }, // Spear [Chaos]
{ 1001000 ,         WeaponUpgradePath::Standard }, // Winged Spear
{ 1001100 ,          WeaponUpgradePath::Crystal }, // Winged Spear [Crystal]
{ 1001200 ,        WeaponUpgradePath::Lightning }, // Winged Spear [Lightning]
{ 1001300 ,              WeaponUpgradePath::Raw }, // Winged Spear [Raw]
{ 1001400 ,            WeaponUpgradePath::Magic }, // Winged Spear [Magic]
{ 1001500 ,        WeaponUpgradePath::Enchanted }, // Winged Spear [Enchanted]
{ 1001600 ,           WeaponUpgradePath::Divine }, // Winged Spear [Divine]
{ 1001700 ,           WeaponUpgradePath::Occult }, // Winged Spear [Occult]
{ 1001800 ,             WeaponUpgradePath::Fire }, // Winged Spear [Fire]
{ 1001900 ,            WeaponUpgradePath::Chaos }, // Winged Spear [Chaos]
{ 1002000 ,         WeaponUpgradePath::Standard }, // Partizan
{ 1002100 ,          WeaponUpgradePath::Crystal }, // Partizan [Crystal]
{ 1002200 ,        WeaponUpgradePath::Lightning }, // Partizan [Lightning]
{ 1002300 ,              WeaponUpgradePath::Raw }, // Partizan [Raw]
{ 1002400 ,            WeaponUpgradePath::Magic }, // Partizan [Magic]
{ 1002500 ,        WeaponUpgradePath::Enchanted }, // Partizan [Enchanted]
{ 1002600 ,           WeaponUpgradePath::Divine }, // Partizan [Divine]
{ 1002700 ,           WeaponUpgradePath::Occult }, // Partizan [Occult]
{ 1002800 ,             WeaponUpgradePath::Fire }, // Partizan [Fire]
{ 1002900 ,            WeaponUpgradePath::Chaos }, // Partizan [Chaos]
{ 1003000 ,     WeaponUpgradePath::DemonNonBoss }, // Demon's Spear
{ 1004000 ,        WeaponUpgradePath::Twinkling }, // Channeler's Trident
{ 1006000 ,        WeaponUpgradePath::Twinkling }, // Silver Knight Spear
{ 1050000 ,         WeaponUpgradePath::Standard }, // Pike
{ 1050100 ,          WeaponUpgradePath::Crystal }, // Pike [Crystal]
{ 1050200 ,        WeaponUpgradePath::Lightning }, // Pike [Lightning]
{ 1050300 ,              WeaponUpgradePath::Raw }, // Pike [Raw]
{ 1050400 ,            WeaponUpgradePath::Magic }, // Pike [Magic]
{ 1050500 ,        WeaponUpgradePath::Enchanted }, // Pike [Enchanted]
{ 1050600 ,           WeaponUpgradePath::Divine }, // Pike [Divine]
{ 1050700 ,           WeaponUpgradePath::Occult }, // Pike [Occult]
{ 1050800 ,             WeaponUpgradePath::Fire }, // Pike [Fire]
{ 1050900 ,            WeaponUpgradePath::Chaos }, // Pike [Chaos]
{ 1051000 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Mail Breaker]
{ 1051100 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Rapier]
{ 1051200 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Estoc]
{ 1051300 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Spear]
{ 1051400 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Winged Spear]
{ 1051500 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Partizan]
{ 1051600 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Demon's Spear
{ 1051700 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Channeler's Trident]
{ 1051800 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Pike]
{ 1051900 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Ricard's Rapier]
{ 1052000 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Mail Breaker]
{ 1052100 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Rapier]
{ 1052200 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Estoc]
{ 1052300 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Spear]
{ 1052400 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Winged Spear]
{ 1052500 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Partizan]
{ 1052600 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Demon's Spear]
{ 1052700 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Channeler's Trident]
{ 1052800 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Pike]
{ 1052900 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Ricard's Rapier]
{ 1053000 ,   WeaponUpgradePath::DemonButterfly }, // Moonlight Butterfly Horn [Four-pronged Plow]
{ 1054000 ,    WeaponUpgradePath::DemonOrnstein }, // Dragonslayer Spear [Four-pronged Plow]
{ 1099000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Spear
{ 1100000 ,         WeaponUpgradePath::Standard }, // Halberd
{ 1100100 ,          WeaponUpgradePath::Crystal }, // Halberd [Crystal]
{ 1100200 ,        WeaponUpgradePath::Lightning }, // Halberd [Lightning]
{ 1100300 ,              WeaponUpgradePath::Raw }, // Halberd [Raw]
{ 1100400 ,            WeaponUpgradePath::Magic }, // Halberd [Magic]
{ 1100500 ,        WeaponUpgradePath::Enchanted }, // Halberd [Enchanted]
{ 1100600 ,           WeaponUpgradePath::Divine }, // Halberd [Divine]
{ 1100700 ,           WeaponUpgradePath::Occult }, // Halberd [Occult]
{ 1100800 ,             WeaponUpgradePath::Fire }, // Halberd [Fire]
{ 1100900 ,            WeaponUpgradePath::Chaos }, // Halberd [Chaos]
{ 1101000 ,        WeaponUpgradePath::Twinkling }, // Giant's Halberd
{ 1102000 ,        WeaponUpgradePath::Twinkling }, // Titanite Catch Pole
{ 1103000 ,         WeaponUpgradePath::Standard }, // Gargoyle's Halberd
{ 1103100 ,          WeaponUpgradePath::Crystal }, // Gargoyle's Halberd [Crystal]
{ 1103200 ,        WeaponUpgradePath::Lightning }, // Gargoyle's Halberd [Lightning]
{ 1103300 ,              WeaponUpgradePath::Raw }, // Gargoyle's Halberd [Raw]
{ 1103400 ,            WeaponUpgradePath::Magic }, // Gargoyle's Halberd [Magic]
{ 1103500 ,        WeaponUpgradePath::Enchanted }, // Gargoyle's Halberd [Enchanted]
{ 1103600 ,           WeaponUpgradePath::Divine }, // Gargoyle's Halberd [Divine]
{ 1103700 ,           WeaponUpgradePath::Occult }, // Gargoyle's Halberd [Occult]
{ 1103800 ,             WeaponUpgradePath::Fire }, // Gargoyle's Halberd [Fire]
{ 1103900 ,            WeaponUpgradePath::Chaos }, // Gargoyle's Halberd [Chaos]
{ 1105000 ,        WeaponUpgradePath::Twinkling }, // Black Knight Halberd
{ 1106000 ,         WeaponUpgradePath::Standard }, // Lucerne
{ 1106100 ,          WeaponUpgradePath::Crystal }, // Lucerne [Crystal]
{ 1106200 ,        WeaponUpgradePath::Lightning }, // Lucerne [Lightning]
{ 1106300 ,              WeaponUpgradePath::Raw }, // Lucerne [Raw]
{ 1106400 ,            WeaponUpgradePath::Magic }, // Lucerne [Magic]
{ 1106500 ,        WeaponUpgradePath::Enchanted }, // Lucerne [Enchanted]
{ 1106600 ,           WeaponUpgradePath::Divine }, // Lucerne [Divine]
{ 1106700 ,           WeaponUpgradePath::Occult }, // Lucerne [Occult]
{ 1106800 ,             WeaponUpgradePath::Fire }, // Lucerne [Fire]
{ 1106900 ,            WeaponUpgradePath::Chaos }, // Lucerne [Chaos]
{ 1107000 ,         WeaponUpgradePath::Standard }, // Scythe
{ 1107100 ,          WeaponUpgradePath::Crystal }, // Scythe [Crystal]
{ 1107200 ,        WeaponUpgradePath::Lightning }, // Scythe [Lightning]
{ 1107300 ,              WeaponUpgradePath::Raw }, // Scythe [Raw]
{ 1107400 ,            WeaponUpgradePath::Magic }, // Scythe [Magic]
{ 1107500 ,        WeaponUpgradePath::Enchanted }, // Scythe [Enchanted]
{ 1107600 ,           WeaponUpgradePath::Divine }, // Scythe [Divine]
{ 1107700 ,           WeaponUpgradePath::Occult }, // Scythe [Occult]
{ 1107800 ,             WeaponUpgradePath::Fire }, // Scythe [Fire]
{ 1107900 ,            WeaponUpgradePath::Chaos }, // Scythe [Chaos]
{ 1150000 ,         WeaponUpgradePath::Standard }, // Great Scythe
{ 1150100 ,          WeaponUpgradePath::Crystal }, // Great Scythe [Crystal]
{ 1150200 ,        WeaponUpgradePath::Lightning }, // Great Scythe [Lightning]
{ 1150300 ,              WeaponUpgradePath::Raw }, // Great Scythe [Raw]
{ 1150400 ,            WeaponUpgradePath::Magic }, // Great Scythe [Magic]
{ 1150500 ,        WeaponUpgradePath::Enchanted }, // Great Scythe [Enchanted]
{ 1150600 ,           WeaponUpgradePath::Divine }, // Great Scythe [Divine]
{ 1150700 ,           WeaponUpgradePath::Occult }, // Great Scythe [Occult]
{ 1150800 ,             WeaponUpgradePath::Fire }, // Great Scythe [Fire]
{ 1150900 ,            WeaponUpgradePath::Chaos }, // Great Scythe [Chaos]
{ 1151000 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Halberd]
{ 1151100 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Lucerne]
{ 1151200 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Scythe]
{ 1151300 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Giant's Halberd]
{ 1151400 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Gargoyle's Halberd]
{ 1151500 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Great Scythe]
{ 1151600 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Whip]
{ 1151700 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Notched Whip]
{ 1151800 ,   WeaponUpgradePath::DemonPriscilla }, // Lifehunt Scythe [Guardian Tail]
{ 1199000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Scythe
{ 1200000 ,         WeaponUpgradePath::Standard }, // Short Bow
{ 1200100 ,          WeaponUpgradePath::Crystal }, // Short Bow [Crystal]
{ 1200200 ,        WeaponUpgradePath::Lightning }, // Short Bow [Lightning]
{ 1200300 ,              WeaponUpgradePath::Raw }, // Short Bow [Raw]
{ 1200400 ,            WeaponUpgradePath::Magic }, // Short Bow [Magic]
{ 1200500 ,        WeaponUpgradePath::Enchanted }, // Short Bow [Enchanted]
{ 1200600 ,           WeaponUpgradePath::Divine }, // Short Bow [Divine]
{ 1200700 ,           WeaponUpgradePath::Occult }, // Short Bow [Occult]
{ 1200800 ,             WeaponUpgradePath::Fire }, // Short Bow [Fire]
{ 1200900 ,            WeaponUpgradePath::Chaos }, // Short Bow [Chaos]
{ 1201000 ,         WeaponUpgradePath::Standard }, // Longbow
{ 1201100 ,          WeaponUpgradePath::Crystal }, // Longbow [Crystal]
{ 1201200 ,        WeaponUpgradePath::Lightning }, // Longbow [Lightning]
{ 1201300 ,              WeaponUpgradePath::Raw }, // Longbow [Raw]
{ 1201400 ,            WeaponUpgradePath::Magic }, // Longbow [Magic]
{ 1201500 ,        WeaponUpgradePath::Enchanted }, // Longbow [Enchanted]
{ 1201600 ,           WeaponUpgradePath::Divine }, // Longbow [Divine]
{ 1201700 ,           WeaponUpgradePath::Occult }, // Longbow [Occult]
{ 1201800 ,             WeaponUpgradePath::Fire }, // Longbow [Fire]
{ 1201900 ,            WeaponUpgradePath::Chaos }, // Longbow [Chaos]
{ 1202000 ,         WeaponUpgradePath::Standard }, // Black Bow of Pharis
{ 1202100 ,          WeaponUpgradePath::Crystal }, // Black Bow of Pharis [Crystal]
{ 1202200 ,        WeaponUpgradePath::Lightning }, // Black Bow of Pharis [Lightning]
{ 1202300 ,              WeaponUpgradePath::Raw }, // Black Bow of Pharis [Raw]
{ 1202400 ,            WeaponUpgradePath::Magic }, // Black Bow of Pharis [Magic]
{ 1202500 ,        WeaponUpgradePath::Enchanted }, // Black Bow of Pharis [Enchanted]
{ 1202600 ,           WeaponUpgradePath::Divine }, // Black Bow of Pharis [Divine]
{ 1202700 ,           WeaponUpgradePath::Occult }, // Black Bow of Pharis [Occult]
{ 1202800 ,             WeaponUpgradePath::Fire }, // Black Bow of Pharis [Fire]
{ 1202900 ,            WeaponUpgradePath::Chaos }, // Black Bow of Pharis [Chaos]
{ 1203000 ,        WeaponUpgradePath::Twinkling }, // Dragonslayer Greatbow
{ 1204000 ,         WeaponUpgradePath::Standard }, // Composite Bow
{ 1204100 ,          WeaponUpgradePath::Crystal }, // Composite Bow [Crystal]
{ 1204200 ,        WeaponUpgradePath::Lightning }, // Composite Bow [Lightning]
{ 1204300 ,              WeaponUpgradePath::Raw }, // Composite Bow [Raw]
{ 1204400 ,            WeaponUpgradePath::Magic }, // Composite Bow [Magic]
{ 1204500 ,        WeaponUpgradePath::Enchanted }, // Composite Bow [Enchanted]
{ 1204600 ,           WeaponUpgradePath::Divine }, // Composite Bow [Divine]
{ 1204700 ,           WeaponUpgradePath::Occult }, // Composite Bow [Occult]
{ 1204800 ,             WeaponUpgradePath::Fire }, // Composite Bow [Fire]
{ 1204900 ,            WeaponUpgradePath::Chaos }, // Composite Bow [Chaos]
{ 1205000 ,   WeaponUpgradePath::DemonGwyndolin }, // Darkmoon Bow [Short Bow]
{ 1205100 ,   WeaponUpgradePath::DemonGwyndolin }, // Darkmoon Bow [Composite Bow]
{ 1205200 ,   WeaponUpgradePath::DemonGwyndolin }, // Darkmoon Bow [Longbow]
{ 1205300 ,   WeaponUpgradePath::DemonGwyndolin }, // Darkmoon Bow [Black Bow of Pharis]
{ 1250000 ,         WeaponUpgradePath::Standard }, // Light Crossbow
{ 1250100 ,          WeaponUpgradePath::Crystal }, // Light Crossbow [Crystal]
{ 1250200 ,        WeaponUpgradePath::Lightning }, // Light Crossbow [Lightning]
{ 1250400 ,            WeaponUpgradePath::Magic }, // Light Crossbow [Magic]
{ 1250600 ,           WeaponUpgradePath::Divine }, // Light Crossbow [Divine]
{ 1250800 ,             WeaponUpgradePath::Fire }, // Light Crossbow [Fire]
{ 1251000 ,         WeaponUpgradePath::Standard }, // Heavy Crossbow
{ 1251100 ,          WeaponUpgradePath::Crystal }, // Heavy Crossbow [Crystal]
{ 1251200 ,        WeaponUpgradePath::Lightning }, // Heavy Crossbow [Lightning]
{ 1251400 ,            WeaponUpgradePath::Magic }, // Heavy Crossbow [Magic]
{ 1251600 ,           WeaponUpgradePath::Divine }, // Heavy Crossbow [Divine]
{ 1251800 ,             WeaponUpgradePath::Fire }, // Heavy Crossbow [Fire]
{ 1252000 ,         WeaponUpgradePath::Standard }, // Avelyn
{ 1252100 ,          WeaponUpgradePath::Crystal }, // Avelyn [Crystal]
{ 1252200 ,        WeaponUpgradePath::Lightning }, // Avelyn [Lightning]
{ 1252400 ,            WeaponUpgradePath::Magic }, // Avelyn [Magic]
{ 1252600 ,           WeaponUpgradePath::Divine }, // Avelyn [Divine]
{ 1252800 ,             WeaponUpgradePath::Fire }, // Avelyn [Fire]
{ 1253000 ,         WeaponUpgradePath::Standard }, // Sniper Crossbow
{ 1253100 ,          WeaponUpgradePath::Crystal }, // Sniper Crossbow [Crystal]
{ 1253200 ,        WeaponUpgradePath::Lightning }, // Sniper Crossbow [Lightning]
{ 1253400 ,            WeaponUpgradePath::Magic }, // Sniper Crossbow [Magic]
{ 1253600 ,           WeaponUpgradePath::Divine }, // Sniper Crossbow [Divine]
{ 1253800 ,             WeaponUpgradePath::Fire }, // Sniper Crossbow [Fire]
{ 1298000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Bow
{ 1299000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Crossbow
{ 1300000 ,         WeaponUpgradePath::Standard }, // Sorcerer's Catalyst
{ 1301000 ,         WeaponUpgradePath::Standard }, // Beatrice's Catalyst
{ 1302000 ,         WeaponUpgradePath::Standard }, // Tin Banishment Catalyst
{ 1303000 ,         WeaponUpgradePath::Standard }, // Logan's Catalyst
{ 1304000 ,   WeaponUpgradePath::DemonGwyndolin }, // Tin Darkmoon Catalyst [Sorcerer's Catalyst]
{ 1304100 ,   WeaponUpgradePath::DemonGwyndolin }, // Tin Darkmoon Catalyst [Beatrice's Catalyst]
{ 1304200 ,   WeaponUpgradePath::DemonGwyndolin }, // Tin Darkmoon Catalyst [Tin Banishment Catalyst]
{ 1304300 ,   WeaponUpgradePath::DemonGwyndolin }, // Tin Darkmoon Catalyst [Logan's Catalyst]
{ 1304400 ,   WeaponUpgradePath::DemonGwyndolin }, // Tin Darkmoon Catalyst [Oolacile Ivory Catalyst]
{ 1304500 ,   WeaponUpgradePath::DemonGwyndolin }, // Tin Darkmoon Catalyst [Oolacile Catalyst]
{ 1305000 ,         WeaponUpgradePath::Standard }, // Oolacile Ivory Catalyst
{ 1306000 ,        WeaponUpgradePath::NoUpgrade }, // Tin Crystallization Ctlyst.
{ 1307000 ,        WeaponUpgradePath::NoUpgrade }, // Demon's Catalyst
{ 1308000 ,        WeaponUpgradePath::NoUpgrade }, // Izalith Catalyst
{ 1330000 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame
{ 1330100 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +1
{ 1330200 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +2
{ 1330300 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +3
{ 1330400 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +4
{ 1330500 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +5
{ 1330600 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +6
{ 1330700 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +7
{ 1330800 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +8
{ 1330900 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +9
{ 1331000 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +10
{ 1331100 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +11
{ 1331200 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +12
{ 1331300 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +13
{ 1331400 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +14
{ 1331500 ,         WeaponUpgradePath::Standard }, // Pyromancy Flame +15
{ 1332000 ,         WeaponUpgradePath::Standard }, // Ascended Pyromancy Flame
{ 1332100 ,         WeaponUpgradePath::Standard }, // Ascended Pyromancy Flame +1
{ 1332200 ,         WeaponUpgradePath::Standard }, // Ascended Pyromancy Flame +2
{ 1332300 ,         WeaponUpgradePath::Standard }, // Ascended Pyromancy Flame +3
{ 1332400 ,         WeaponUpgradePath::Standard }, // Ascended Pyromancy Flame +4
{ 1332500 ,         WeaponUpgradePath::Standard }, // Ascended Pyromancy Flame +5
{ 1360000 ,        WeaponUpgradePath::NoUpgrade }, // Talisman
{ 1361000 ,        WeaponUpgradePath::NoUpgrade }, // Canvas Talisman
{ 1362000 ,        WeaponUpgradePath::NoUpgrade }, // Thorolund Talisman
{ 1363000 ,        WeaponUpgradePath::NoUpgrade }, // Ivory Talisman
{ 1365000 ,        WeaponUpgradePath::NoUpgrade }, // Sunlight Talisman
{ 1366000 ,        WeaponUpgradePath::NoUpgrade }, // Darkmoon Talisman
{ 1367000 ,        WeaponUpgradePath::NoUpgrade }, // Velka's Talisman
{ 1396000 ,        WeaponUpgradePath::NoUpgrade }, // Skull Lantern
{ 1397000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Staff
{ 1398000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Pyromancy Flame
{ 1399000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Talisman
{ 1400000 ,         WeaponUpgradePath::Standard }, // East-West Shield
{ 1400100 ,          WeaponUpgradePath::Crystal }, // East-West Shield [Crystal]
{ 1400200 ,        WeaponUpgradePath::Lightning }, // East-West Shield [Lightning]
{ 1400400 ,            WeaponUpgradePath::Magic }, // East-West Shield [Magic]
{ 1400600 ,           WeaponUpgradePath::Divine }, // East-West Shield [Divine]
{ 1400800 ,             WeaponUpgradePath::Fire }, // East-West Shield [Fire]
{ 1401000 ,         WeaponUpgradePath::Standard }, // Wooden Shield
{ 1401100 ,          WeaponUpgradePath::Crystal }, // Wooden Shield [Crystal]
{ 1401200 ,        WeaponUpgradePath::Lightning }, // Wooden Shield [Lightning]
{ 1401400 ,            WeaponUpgradePath::Magic }, // Wooden Shield [Magic]
{ 1401600 ,           WeaponUpgradePath::Divine }, // Wooden Shield [Divine]
{ 1401800 ,             WeaponUpgradePath::Fire }, // Wooden Shield [Fire]
{ 1402000 ,         WeaponUpgradePath::Standard }, // Large Leather Shield
{ 1402100 ,          WeaponUpgradePath::Crystal }, // Large Leather Shield [Crystal]
{ 1402200 ,        WeaponUpgradePath::Lightning }, // Large Leather Shield [Lightning]
{ 1402400 ,            WeaponUpgradePath::Magic }, // Large Leather Shield [Magic]
{ 1402600 ,           WeaponUpgradePath::Divine }, // Large Leather Shield [Divine]
{ 1402800 ,             WeaponUpgradePath::Fire }, // Large Leather Shield [Fire]
{ 1403000 ,         WeaponUpgradePath::Standard }, // Small Leather Shield
{ 1403100 ,          WeaponUpgradePath::Crystal }, // Small Leather Shield [Crystal]
{ 1403200 ,        WeaponUpgradePath::Lightning }, // Small Leather Shield [Lightning]
{ 1403400 ,            WeaponUpgradePath::Magic }, // Small Leather Shield [Magic]
{ 1403600 ,           WeaponUpgradePath::Divine }, // Small Leather Shield [Divine]
{ 1403800 ,             WeaponUpgradePath::Fire }, // Small Leather Shield [Fire]
{ 1404000 ,         WeaponUpgradePath::Standard }, // Target Shield
{ 1404100 ,          WeaponUpgradePath::Crystal }, // Target Shield [Crystal]
{ 1404200 ,        WeaponUpgradePath::Lightning }, // Target Shield [Lightning]
{ 1404400 ,            WeaponUpgradePath::Magic }, // Target Shield [Magic]
{ 1404600 ,           WeaponUpgradePath::Divine }, // Target Shield [Divine]
{ 1404800 ,             WeaponUpgradePath::Fire }, // Target Shield [Fire]
{ 1405000 ,         WeaponUpgradePath::Standard }, // Buckler
{ 1405100 ,          WeaponUpgradePath::Crystal }, // Buckler [Crystal]
{ 1405200 ,        WeaponUpgradePath::Lightning }, // Buckler [Lightning]
{ 1405400 ,            WeaponUpgradePath::Magic }, // Buckler [Magic]
{ 1405600 ,           WeaponUpgradePath::Divine }, // Buckler [Divine]
{ 1405800 ,             WeaponUpgradePath::Fire }, // Buckler [Fire]
{ 1406000 ,         WeaponUpgradePath::Standard }, // Cracked Round Shield
{ 1406100 ,          WeaponUpgradePath::Crystal }, // Cracked Round Shield [Crystal]
{ 1406200 ,        WeaponUpgradePath::Lightning }, // Cracked Round Shield [Lightning]
{ 1406400 ,            WeaponUpgradePath::Magic }, // Cracked Round Shield [Magic]
{ 1406600 ,           WeaponUpgradePath::Divine }, // Cracked Round Shield [Divine]
{ 1406800 ,             WeaponUpgradePath::Fire }, // Cracked Round Shield [Fire]
{ 1408000 ,         WeaponUpgradePath::Standard }, // Leather Shield
{ 1408100 ,          WeaponUpgradePath::Crystal }, // Leather Shield [Crystal]
{ 1408200 ,        WeaponUpgradePath::Lightning }, // Leather Shield [Lightning]
{ 1408400 ,            WeaponUpgradePath::Magic }, // Leather Shield [Magic]
{ 1408600 ,           WeaponUpgradePath::Divine }, // Leather Shield [Divine]
{ 1408800 ,             WeaponUpgradePath::Fire }, // Leather Shield [Fire]
{ 1409000 ,         WeaponUpgradePath::Standard }, // Plank Shield
{ 1409100 ,          WeaponUpgradePath::Crystal }, // Plank Shield [Crystal]
{ 1409200 ,        WeaponUpgradePath::Lightning }, // Plank Shield [Lightning]
{ 1409400 ,            WeaponUpgradePath::Magic }, // Plank Shield [Magic]
{ 1409600 ,           WeaponUpgradePath::Divine }, // Plank Shield [Divine]
{ 1409800 ,             WeaponUpgradePath::Fire }, // Plank Shield [Fire]
{ 1410000 ,         WeaponUpgradePath::Standard }, // Caduceus Round Shield
{ 1410100 ,          WeaponUpgradePath::Crystal }, // Caduceus Round Shield [Crystal]
{ 1410200 ,        WeaponUpgradePath::Lightning }, // Caduceus Round Shield [Lightning]
{ 1410400 ,            WeaponUpgradePath::Magic }, // Caduceus Round Shield [Magic]
{ 1410600 ,           WeaponUpgradePath::Divine }, // Caduceus Round Shield [Divine]
{ 1410800 ,             WeaponUpgradePath::Fire }, // Caduceus Round Shield [Fire]
{ 1411000 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [East-West Shield]
{ 1411100 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Wooden Shield]
{ 1411200 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Plank Shield]
{ 1411300 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Large Leather Shield]
{ 1411400 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Small Leather Shield]
{ 1411500 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Leather Shield
{ 1411600 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Target Shield]
{ 1411700 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Buckler]
{ 1411800 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Cracked Round Shield]
{ 1411900 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Caduceus Round Shield]
{ 1412000 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Heater Shield]
{ 1412100 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Knight Shield]
{ 1412200 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Tower Kite Shield]
{ 1412300 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Grass Crest Shield]
{ 1412400 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Hollow Soldier Shield]
{ 1412500 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Balder Shield]
{ 1412600 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Warrior's Round Shield]
{ 1412700 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Iron Round Shield]
{ 1412800 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Spider Shield]
{ 1412900 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Spiked Shield]
{ 1413000 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Pierce Shield]
{ 1413100 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Sunlight Shield]
{ 1413200 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Red and White Round Shield]
{ 1413300 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Caduceus Kite Shield]
{ 1413400 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Gargoyle's Shield]
{ 1413500 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Eagle Shield]
{ 1413600 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Tower Shield]
{ 1413700 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Giant Shield]
{ 1413800 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Bonewheel Shield]
{ 1413900 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Effigy Shield]
{ 1414000 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Sanctus]
{ 1414100 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Bloodshield]
{ 1414200 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield [Black Iron Greatshield]
{ 1414300 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield
{ 1414400 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield
{ 1414500 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield
{ 1414600 ,   WeaponUpgradePath::DemonButterfly }, // Crystal Ring Shield
{ 1450000 ,         WeaponUpgradePath::Standard }, // Heater Shield
{ 1450100 ,          WeaponUpgradePath::Crystal }, // Heater Shield [Crystal]
{ 1450200 ,        WeaponUpgradePath::Lightning }, // Heater Shield [Lightning]
{ 1450400 ,            WeaponUpgradePath::Magic }, // Heater Shield [Magic]
{ 1450600 ,           WeaponUpgradePath::Divine }, // Heater Shield [Divine]
{ 1450800 ,             WeaponUpgradePath::Fire }, // Heater Shield [Fire]
{ 1451000 ,         WeaponUpgradePath::Standard }, // Knight Shield
{ 1451100 ,          WeaponUpgradePath::Crystal }, // Knight Shield [Crystal]
{ 1451200 ,        WeaponUpgradePath::Lightning }, // Knight Shield [Lightning]
{ 1451400 ,            WeaponUpgradePath::Magic }, // Knight Shield [Magic]
{ 1451600 ,           WeaponUpgradePath::Divine }, // Knight Shield [Divine]
{ 1451800 ,             WeaponUpgradePath::Fire }, // Knight Shield [Fire]
{ 1452000 ,         WeaponUpgradePath::Standard }, // Tower Kite Shield
{ 1452100 ,          WeaponUpgradePath::Crystal }, // Tower Kite Shield [Crystal]
{ 1452200 ,        WeaponUpgradePath::Lightning }, // Tower Kite Shield [Lightning]
{ 1452400 ,            WeaponUpgradePath::Magic }, // Tower Kite Shield [Magic]
{ 1452600 ,           WeaponUpgradePath::Divine }, // Tower Kite Shield [Divine]
{ 1452800 ,             WeaponUpgradePath::Fire }, // Tower Kite Shield [Fire]
{ 1453000 ,         WeaponUpgradePath::Standard }, // Grass Crest Shield
{ 1453100 ,          WeaponUpgradePath::Crystal }, // Grass Crest Shield [Crystal]
{ 1453200 ,        WeaponUpgradePath::Lightning }, // Grass Crest Shield [Lightning]
{ 1453400 ,            WeaponUpgradePath::Magic }, // Grass Crest Shield [Magic]
{ 1453600 ,           WeaponUpgradePath::Divine }, // Grass Crest Shield [Divine]
{ 1453800 ,             WeaponUpgradePath::Fire }, // Grass Crest Shield [Fire]
{ 1454000 ,         WeaponUpgradePath::Standard }, // Hollow Soldier Shield
{ 1454100 ,          WeaponUpgradePath::Crystal }, // Hollow Soldier Shield [Crystal]
{ 1454200 ,        WeaponUpgradePath::Lightning }, // Hollow Soldier Shield [Lightning]
{ 1454400 ,            WeaponUpgradePath::Magic }, // Hollow Soldier Shield [Magic]
{ 1454600 ,           WeaponUpgradePath::Divine }, // Hollow Soldier Shield [Divine]
{ 1454800 ,             WeaponUpgradePath::Fire }, // Hollow Soldier Shield [Fire]
{ 1455000 ,         WeaponUpgradePath::Standard }, // Balder Shield
{ 1455100 ,          WeaponUpgradePath::Crystal }, // Balder Shield [Crystal]
{ 1455200 ,        WeaponUpgradePath::Lightning }, // Balder Shield [Lightning]
{ 1455400 ,            WeaponUpgradePath::Magic }, // Balder Shield [Magic]
{ 1455600 ,           WeaponUpgradePath::Divine }, // Balder Shield [Divine]
{ 1455800 ,             WeaponUpgradePath::Fire }, // Balder Shield [Fire]
{ 1456000 ,        WeaponUpgradePath::Twinkling }, // Crest Shield
{ 1457000 ,        WeaponUpgradePath::Twinkling }, // Dragon Crest Shield
{ 1460000 ,         WeaponUpgradePath::Standard }, // Warrior's Round Shield
{ 1460100 ,          WeaponUpgradePath::Crystal }, // Warrior's Round Shield [Crystal]
{ 1460200 ,        WeaponUpgradePath::Lightning }, // Warrior's Round Shield [Lightning]
{ 1460400 ,            WeaponUpgradePath::Magic }, // Warrior's Round Shield [Magic]
{ 1460600 ,           WeaponUpgradePath::Divine }, // Warrior's Round Shield [Divine]
{ 1460800 ,             WeaponUpgradePath::Fire }, // Warrior's Round Shield [Fire]
{ 1461000 ,         WeaponUpgradePath::Standard }, // Iron Round Shield
{ 1461100 ,          WeaponUpgradePath::Crystal }, // Iron Round Shield [Crystal]
{ 1461200 ,        WeaponUpgradePath::Lightning }, // Iron Round Shield [Lightning]
{ 1461400 ,            WeaponUpgradePath::Magic }, // Iron Round Shield [Magic]
{ 1461600 ,           WeaponUpgradePath::Divine }, // Iron Round Shield [Divine]
{ 1461800 ,             WeaponUpgradePath::Fire }, // Iron Round Shield [Fire]
{ 1462000 ,         WeaponUpgradePath::Standard }, // Spider Shield
{ 1462100 ,          WeaponUpgradePath::Crystal }, // Spider Shield [Crystal]
{ 1462200 ,        WeaponUpgradePath::Lightning }, // Spider Shield [Lightning]
{ 1462400 ,            WeaponUpgradePath::Magic }, // Spider Shield [Magic]
{ 1462600 ,           WeaponUpgradePath::Divine }, // Spider Shield [Divine]
{ 1462800 ,             WeaponUpgradePath::Fire }, // Spider Shield [Fire]
{ 1470000 ,         WeaponUpgradePath::Standard }, // Spiked Shield
{ 1470100 ,          WeaponUpgradePath::Crystal }, // Spiked Shield [Crystal]
{ 1470200 ,        WeaponUpgradePath::Lightning }, // Spiked Shield [Lightning]
{ 1470400 ,            WeaponUpgradePath::Magic }, // Spiked Shield [Magic]
{ 1470600 ,           WeaponUpgradePath::Divine }, // Spiked Shield [Divine]
{ 1470800 ,             WeaponUpgradePath::Fire }, // Spiked Shield [Fire]
{ 1471000 ,        WeaponUpgradePath::NoUpgrade }, // Crystal Shield
{ 1472000 ,         WeaponUpgradePath::Standard }, // Sunlight Shield
{ 1472100 ,          WeaponUpgradePath::Crystal }, // Sunlight Shield [Crystal]
{ 1472200 ,        WeaponUpgradePath::Lightning }, // Sunlight Shield [Lightning]
{ 1472400 ,            WeaponUpgradePath::Magic }, // Sunlight Shield [Magic]
{ 1472600 ,           WeaponUpgradePath::Divine }, // Sunlight Shield [Divine]
{ 1472800 ,             WeaponUpgradePath::Fire }, // Sunlight Shield [Fire]
{ 1473000 ,        WeaponUpgradePath::Twinkling }, // Silver Knight Shield
{ 1474000 ,        WeaponUpgradePath::Twinkling }, // Black Knight Shield
{ 1475000 ,         WeaponUpgradePath::Standard }, // Pierce Shield
{ 1475100 ,          WeaponUpgradePath::Crystal }, // Pierce Shield [Crystal]
{ 1475200 ,        WeaponUpgradePath::Lightning }, // Pierce Shield [Lightning]
{ 1475400 ,            WeaponUpgradePath::Magic }, // Pierce Shield [Magic]
{ 1475600 ,           WeaponUpgradePath::Divine }, // Pierce Shield [Divine]
{ 1475800 ,             WeaponUpgradePath::Fire }, // Pierce Shield [Fire]
{ 1476000 ,         WeaponUpgradePath::Standard }, // Red and White Round Shield
{ 1476100 ,          WeaponUpgradePath::Crystal }, // Red and White Round Shield [Crystal]
{ 1476200 ,        WeaponUpgradePath::Lightning }, // Red and White Round Shield [Lightning]
{ 1476400 ,            WeaponUpgradePath::Magic }, // Red and White Round Shield [Magic]
{ 1476600 ,           WeaponUpgradePath::Divine }, // Red and White Round Shield [Divine]
{ 1476800 ,             WeaponUpgradePath::Fire }, // Red and White Round Shield [Fire]
{ 1477000 ,         WeaponUpgradePath::Standard }, // Caduceus Kite Shield
{ 1477100 ,          WeaponUpgradePath::Crystal }, // Caduceus Kite Shield [Crystal]
{ 1477200 ,        WeaponUpgradePath::Lightning }, // Caduceus Kite Shield [Lightning]
{ 1477400 ,            WeaponUpgradePath::Magic }, // Caduceus Kite Shield [Magic]
{ 1477600 ,           WeaponUpgradePath::Divine }, // Caduceus Kite Shield [Divine]
{ 1477800 ,             WeaponUpgradePath::Fire }, // Caduceus Kite Shield [Fire]
{ 1478000 ,         WeaponUpgradePath::Standard }, // Gargoyle's Shield
{ 1478100 ,          WeaponUpgradePath::Crystal }, // Gargoyle's Shield [Crystal]
{ 1478200 ,        WeaponUpgradePath::Lightning }, // Gargoyle's Shield [Lightning]
{ 1478400 ,            WeaponUpgradePath::Magic }, // Gargoyle's Shield [Magic]
{ 1478600 ,           WeaponUpgradePath::Divine }, // Gargoyle's Shield [Divine]
{ 1478800 ,             WeaponUpgradePath::Fire }, // Gargoyle's Shield [Fire]
{ 1498000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Small Shield
{ 1499000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Medium Shield
{ 1500000 ,         WeaponUpgradePath::Standard }, // Eagle Shield
{ 1500100 ,          WeaponUpgradePath::Crystal }, // Eagle Shield [Crystal]
{ 1500200 ,        WeaponUpgradePath::Lightning }, // Eagle Shield [Lightning]
{ 1500400 ,            WeaponUpgradePath::Magic }, // Eagle Shield [Magic]
{ 1500600 ,           WeaponUpgradePath::Divine }, // Eagle Shield [Divine]
{ 1500800 ,             WeaponUpgradePath::Fire }, // Eagle Shield [Fire]
{ 1501000 ,         WeaponUpgradePath::Standard }, // Tower Shield
{ 1501100 ,          WeaponUpgradePath::Crystal }, // Tower Shield [Crystal]
{ 1501200 ,        WeaponUpgradePath::Lightning }, // Tower Shield [Lightning]
{ 1501400 ,            WeaponUpgradePath::Magic }, // Tower Shield [Magic]
{ 1501600 ,           WeaponUpgradePath::Divine }, // Tower Shield [Divine]
{ 1501800 ,             WeaponUpgradePath::Fire }, // Tower Shield [Fire]
{ 1502000 ,         WeaponUpgradePath::Standard }, // Giant Shield
{ 1502100 ,          WeaponUpgradePath::Crystal }, // Giant Shield [Crystal]
{ 1502200 ,        WeaponUpgradePath::Lightning }, // Giant Shield [Lightning]
{ 1502400 ,            WeaponUpgradePath::Magic }, // Giant Shield [Magic]
{ 1502600 ,           WeaponUpgradePath::Divine }, // Giant Shield [Divine]
{ 1502800 ,             WeaponUpgradePath::Fire }, // Giant Shield [Fire]
{ 1503000 ,        WeaponUpgradePath::Twinkling }, // Stone Greatshield
{ 1505000 ,        WeaponUpgradePath::Twinkling }, // Havel's Greatshield
{ 1506000 ,         WeaponUpgradePath::Standard }, // Bonewheel Shield
{ 1506100 ,          WeaponUpgradePath::Crystal }, // Bonewheel Shield [Crystal]
{ 1506200 ,        WeaponUpgradePath::Lightning }, // Bonewheel Shield [Lightning]
{ 1506400 ,            WeaponUpgradePath::Magic }, // Bonewheel Shield [Magic]
{ 1506600 ,           WeaponUpgradePath::Divine }, // Bonewheel Shield [Divine]
{ 1506800 ,             WeaponUpgradePath::Fire }, // Bonewheel Shield [Fire]
{ 1507000 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [East-West Shield]
{ 1507100 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Wooden Shield]
{ 1507200 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Plank Shield]
{ 1507300 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Large Leather Shield]
{ 1507400 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Small Leather Shield]
{ 1507500 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Leather Shield]
{ 1507600 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Target Shield]
{ 1507700 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Buckler]
{ 1507800 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Cracked Round Shield]
{ 1507900 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Caduceus Round Shield]
{ 1508000 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Heater Shield]
{ 1508100 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Knight Shield]
{ 1508200 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Tower Kite Shield]
{ 1508300 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Grass Crest Shield]
{ 1508400 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Hollow Soldier Shield]
{ 1508500 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Balder Shield]
{ 1508600 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Warrior's Round Shield]
{ 1508700 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Iron Round Shield]
{ 1508800 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Spider Shield]
{ 1508900 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Spiked Shield]
{ 1509000 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Pierce Shield]
{ 1509100 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Sunlight Shield]
{ 1509200 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Red and White Round Shield
{ 1509300 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Caduceus Kite Shield
{ 1509400 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Gargoyle's Shield]
{ 1509500 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Eagle Shield]
{ 1509600 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Tower Shield]
{ 1509700 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Giant Shield]
{ 1509800 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Bonewheel Shield]
{ 1509900 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Effigy Shield]
{ 1510000 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Sanctus]
{ 1510100 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Bloodshield]
{ 1510200 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias [Black Iron Greatshield]
{ 1510300 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias
{ 1510400 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias
{ 1510500 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias
{ 1510600 ,         WeaponUpgradePath::DemonSif }, // Greatshield of Artorias
{ 1599000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Greatshield
{ 1600000 ,         WeaponUpgradePath::Standard }, // Whip
{ 1600100 ,          WeaponUpgradePath::Crystal }, // Whip [Crystal]
{ 1600200 ,        WeaponUpgradePath::Lightning }, // Whip [Lightning]
{ 1600300 ,              WeaponUpgradePath::Raw }, // Whip [Raw]
{ 1600400 ,            WeaponUpgradePath::Magic }, // Whip [Magic]
{ 1600500 ,        WeaponUpgradePath::Enchanted }, // Whip [Enchanted]
{ 1600600 ,           WeaponUpgradePath::Divine }, // Whip [Divine]
{ 1600700 ,           WeaponUpgradePath::Occult }, // Whip [Occult]
{ 1600800 ,             WeaponUpgradePath::Fire }, // Whip [Fire]
{ 1600900 ,            WeaponUpgradePath::Chaos }, // Whip [Chaos]
{ 1601000 ,         WeaponUpgradePath::Standard }, // Notched Whip
{ 1601100 ,          WeaponUpgradePath::Crystal }, // Notched Whip [Crystal]
{ 1601200 ,        WeaponUpgradePath::Lightning }, // Notched Whip [Lightning]
{ 1601300 ,              WeaponUpgradePath::Raw }, // Notched Whip [Raw]
{ 1601400 ,            WeaponUpgradePath::Magic }, // Notched Whip [Magic]
{ 1601500 ,        WeaponUpgradePath::Enchanted }, // Notched Whip [Enchanted]
{ 1601600 ,           WeaponUpgradePath::Divine }, // Notched Whip [Divine]
{ 1601700 ,           WeaponUpgradePath::Occult }, // Notched Whip [Occult]
{ 1601800 ,             WeaponUpgradePath::Fire }, // Notched Whip [Fire]
{ 1601900 ,            WeaponUpgradePath::Chaos }, // Notched Whip [Chaos]
{ 1699000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Whip
{ 2000000 ,        WeaponUpgradePath::NoUpgrade }, // Standard Arrow
{ 2001000 ,        WeaponUpgradePath::NoUpgrade }, // Large Arrow
{ 2002000 ,        WeaponUpgradePath::NoUpgrade }, // Feather Arrow
{ 2003000 ,        WeaponUpgradePath::NoUpgrade }, // Fire Arrow
{ 2004000 ,        WeaponUpgradePath::NoUpgrade }, // Poison Arrow
{ 2005000 ,        WeaponUpgradePath::NoUpgrade }, // Moonlight Arrow
{ 2006000 ,        WeaponUpgradePath::NoUpgrade }, // Wooden Arrow
{ 2007000 ,        WeaponUpgradePath::NoUpgrade }, // Dragonslayer Arrow
{ 2008000 ,        WeaponUpgradePath::NoUpgrade }, // Gough's Great Arrow
{ 2099000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Arrow
{ 2100000 ,        WeaponUpgradePath::NoUpgrade }, // Standard Bolt
{ 2101000 ,        WeaponUpgradePath::NoUpgrade }, // Heavy Bolt
{ 2102000 ,        WeaponUpgradePath::NoUpgrade }, // Sniper Bolt
{ 2103000 ,        WeaponUpgradePath::NoUpgrade }, // Wood Bolt
{ 2104000 ,        WeaponUpgradePath::NoUpgrade }, // Lightning Bolt
{ 2199000 ,        WeaponUpgradePath::NoUpgrade }, // [Ghost] Bolt
{ 9000000 ,         WeaponUpgradePath::Standard }, // Effigy Shield
{ 9000100 ,          WeaponUpgradePath::Crystal }, // Effigy Shield [Crystal]
{ 9000200 ,        WeaponUpgradePath::Lightning }, // Effigy Shield [Lightning]
{ 9000400 ,            WeaponUpgradePath::Magic }, // Effigy Shield [Magic]
{ 9000600 ,           WeaponUpgradePath::Divine }, // Effigy Shield [Divine]
{ 9000800 ,             WeaponUpgradePath::Fire }, // Effigy Shield [Fire]
{ 9001000 ,         WeaponUpgradePath::Standard }, // Sanctus
{ 9001100 ,          WeaponUpgradePath::Crystal }, // Sanctus [Crystal]
{ 9001200 ,        WeaponUpgradePath::Lightning }, // Sanctus [Lightning]
{ 9001400 ,            WeaponUpgradePath::Magic }, // Sanctus [Magic]
{ 9001600 ,           WeaponUpgradePath::Divine }, // Sanctus [Divine]
{ 9001800 ,             WeaponUpgradePath::Fire }, // Sanctus [Fire]
{ 9002000 ,         WeaponUpgradePath::Standard }, // Bloodshield
{ 9002100 ,          WeaponUpgradePath::Crystal }, // Bloodshield [Crystal]
{ 9002200 ,        WeaponUpgradePath::Lightning }, // Bloodshield [Lightning]
{ 9002400 ,            WeaponUpgradePath::Magic }, // Bloodshield [Magic]
{ 9002600 ,           WeaponUpgradePath::Divine }, // Bloodshield [Divine]
{ 9002800 ,             WeaponUpgradePath::Fire }, // Bloodshield [Fire]
{ 9003000 ,         WeaponUpgradePath::Standard }, // Black Iron Greatshield
{ 9003100 ,          WeaponUpgradePath::Crystal }, // Black Iron Greatshield [Crystal]
{ 9003200 ,        WeaponUpgradePath::Lightning }, // Black Iron Greatshield [Lightning]
{ 9003400 ,            WeaponUpgradePath::Magic }, // Black Iron Greatshield [Magic]
{ 9003600 ,           WeaponUpgradePath::Divine }, // Black Iron Greatshield [Divine]
{ 9003800 ,             WeaponUpgradePath::Fire }, // Black Iron Greatshield [Fire]
{ 9004000 ,         WeaponUpgradePath::Standard }, // Unused - Design Content Shield E
{ 9004100 ,          WeaponUpgradePath::Crystal }, // Unused - Design Content Shield E [Crystal]
{ 9004200 ,        WeaponUpgradePath::Lightning }, // Unused - Design Content Shield E [Lightning]
{ 9004400 ,            WeaponUpgradePath::Magic }, // Unused - Design Content Shield E [Magic]
{ 9004600 ,           WeaponUpgradePath::Divine }, // Unused - Design Content Shield E [Divine]
{ 9004800 ,             WeaponUpgradePath::Fire }, // Unused - Design Content Shield E [Fire]
{ 9005000 ,         WeaponUpgradePath::Standard }, // Unused - Design Content Shield F
{ 9005100 ,          WeaponUpgradePath::Crystal }, // Unused - Design Content Shield F [Crystal]
{ 9005200 ,        WeaponUpgradePath::Lightning }, // Unused - Design Content Shield F [Lightning]
{ 9005400 ,            WeaponUpgradePath::Magic }, // Unused - Design Content Shield F [Magic]
{ 9005600 ,           WeaponUpgradePath::Divine }, // Unused - Design Content Shield F [Divine]
{ 9005800 ,             WeaponUpgradePath::Fire }, // Unused - Design Content Shield F [Fire]
{ 9006000 ,         WeaponUpgradePath::Standard }, // Unused - Design Content Shield G
{ 9006100 ,          WeaponUpgradePath::Crystal }, // Unused - Design Content Shield G [Crystal]
{ 9006200 ,        WeaponUpgradePath::Lightning }, // Unused - Design Content Shield G [Lightning]
{ 9006400 ,            WeaponUpgradePath::Magic }, // Unused - Design Content Shield G [Magic]
{ 9006600 ,           WeaponUpgradePath::Divine }, // Unused - Design Content Shield G [Divine]
{ 9006800 ,             WeaponUpgradePath::Fire }, // Unused - Design Content Shield G [Fire]
{ 9007000 ,         WeaponUpgradePath::Standard }, // Unused - Design Content Shield H
{ 9007100 ,          WeaponUpgradePath::Crystal }, // Unused - Design Content Shield H [Crystal]
{ 9007200 ,        WeaponUpgradePath::Lightning }, // Unused - Design Content Shield H [Lightning]
{ 9007400 ,            WeaponUpgradePath::Magic }, // Unused - Design Content Shield H [Magic]
{ 9007600 ,           WeaponUpgradePath::Divine }, // Unused - Design Content Shield H [Divine]
{ 9007800 ,             WeaponUpgradePath::Fire }, // Unused - Design Content Shield H [Fire]
{ 9010000 ,        WeaponUpgradePath::Twinkling }, // Gold Tracer
{ 9011000 ,        WeaponUpgradePath::Twinkling }, // Dark Silver Tracer
{ 9012000 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Dagger]
{ 9012100 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Parrying Dagger]
{ 9012200 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Bandit's Knife]
{ 9012300 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Shortsword]
{ 9012400 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Longsword]
{ 9012500 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Broadsword]
{ 9012600 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Balder Side Sword]
{ 9012700 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Sunlight Straight Sword]
{ 9012800 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Barbed Straight Sword]
{ 9013000 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Darksword]
{ 9013100 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Bastard Sword]
{ 9013200 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Claymore]
{ 9013300 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Man-serpent Greatsword]
{ 9013400 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Flamberge]
{ 9013500 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Zweihander]
{ 9013600 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Greatsword]
{ 9013700 ,    WeaponUpgradePath::DemonArtorias }, // Abyss Greatsword [Demon Great Machete]
{ 9014000 ,        WeaponUpgradePath::Twinkling }, // Cleansing Greatshield
{ 9015000 ,        WeaponUpgradePath::Twinkling }, // Stone Greataxe
{ 9016000 ,         WeaponUpgradePath::Standard }, // Four-pronged Plow
{ 9016100 ,          WeaponUpgradePath::Crystal }, // Four-pronged Plow [Crystal]
{ 9016200 ,        WeaponUpgradePath::Lightning }, // Four-pronged Plow [Lightning]
{ 9016300 ,              WeaponUpgradePath::Raw }, // Four-pronged Plow [Raw]
{ 9016400 ,            WeaponUpgradePath::Magic }, // Four-pronged Plow [Magic]
{ 9016500 ,        WeaponUpgradePath::Enchanted }, // Four-pronged Plow [Enchanted]
{ 9016600 ,           WeaponUpgradePath::Divine }, // Four-pronged Plow [Divine]
{ 9016700 ,           WeaponUpgradePath::Occult }, // Four-pronged Plow [Occult]
{ 9016800 ,             WeaponUpgradePath::Fire }, // Four-pronged Plow [Fire]
{ 9016900 ,            WeaponUpgradePath::Chaos }, // Four-pronged Plow [Chaos]
{ 9017000 ,       WeaponUpgradePath::DemonManus }, // Manus Catalyst [Sorcerer's Catalyst]
{ 9017100 ,       WeaponUpgradePath::DemonManus }, // Manus Catalyst [Beatrice's Catalyst]
{ 9017200 ,       WeaponUpgradePath::DemonManus }, // Manus Catalyst [Tin Banishment Catalyst]
{ 9017300 ,       WeaponUpgradePath::DemonManus }, // Manus Catalyst [Logan's Catalyst]
{ 9017400 ,       WeaponUpgradePath::DemonManus }, // Manus Catalyst [Oolacile Ivory Catalyst]
{ 9017500 ,       WeaponUpgradePath::DemonManus }, // Manus Catalyst [Izalith Catalyst]
{ 9018000 ,         WeaponUpgradePath::Standard }, // Oolacile Catalyst
{ 9019000 ,         WeaponUpgradePath::Standard }, // Guardian Tail
{ 9019100 ,          WeaponUpgradePath::Crystal }, // Guardian Tail [Crystal]
{ 9019200 ,        WeaponUpgradePath::Lightning }, // Guardian Tail [Lightning]
{ 9019300 ,              WeaponUpgradePath::Raw }, // Guardian Tail [Raw]
{ 9019400 ,            WeaponUpgradePath::Magic }, // Guardian Tail [Magic]
{ 9019500 ,        WeaponUpgradePath::Enchanted }, // Guardian Tail [Enchanted]
{ 9019600 ,           WeaponUpgradePath::Divine }, // Guardian Tail [Divine]
{ 9019700 ,           WeaponUpgradePath::Occult }, // Guardian Tail [Occult]
{ 9019800 ,             WeaponUpgradePath::Fire }, // Guardian Tail [Fire]
{ 9019900 ,            WeaponUpgradePath::Chaos }, // Guardian Tail [Chaos]
{ 9020000 ,           WeaponUpgradePath::Dragon }, // Obsidian Greatsword
{ 9021000 ,        WeaponUpgradePath::Twinkling }, // Gough's Greatbow
};