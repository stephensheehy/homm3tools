#include "creatures.h"

namespace h3::creatures
{
// Values taken from https://heroes.thelazy.net/index.php/List_of_creatures_(HotA)
const std::unordered_map<Creature, uint32_t> AIValues = {

    // Castle
    {Creature::Pikeman,               80},
    {Creature::Halberdier,           115},
    {Creature::Archer,               126},
    {Creature::Marksman,             184},
    {Creature::Griffin,              351},
    {Creature::RoyalGriffin,         448},
    {Creature::Swordsman,            445},
    {Creature::Crusader,             588},
    {Creature::Monk,                 582},
    {Creature::Zealot,               750},
    {Creature::Cavalier,            1946},
    {Creature::Champion,            2100},
    {Creature::Angel,               5019},
    {Creature::ArchAngel,           8776},

    // Rampart
    {Creature::Centaur,              100},
    {Creature::CentaurCaptain,       138},
    {Creature::Dwarf,                138},
    {Creature::BattleDwarf,          209},
    {Creature::WoodElf,              234},
    {Creature::GrandElf,             331},
    {Creature::Pegasus,              518},
    {Creature::SilverPegasus,        532},
    {Creature::DendroidGuard,        517},
    {Creature::DendroidSoldier,      803},
    {Creature::Unicorn,             1806},
    {Creature::WarUnicorn,          2030},
    {Creature::GreenDragon,         4872},
    {Creature::GoldDragon,          8613},

    // Tower
    {Creature::Gremlin,               44},
    {Creature::MasterGremlin,         66},
    {Creature::StoneGargoyle,        165},
    {Creature::ObsidianGargoyle,     201},
    {Creature::StoneGolem,           250},
    {Creature::IronGolem,            412},
    {Creature::Mage,                 570},
    {Creature::ArchMage,             680},
    {Creature::Genie,                884},
    {Creature::MasterGenie,          942},
    {Creature::Naga,                2016},
    {Creature::NagaQueen,           2840},
    {Creature::Giant,               3718},
    {Creature::Titan,               7500},

    // Inferno
    {Creature::Imp,                   50},
    {Creature::Familiar,              60},
    {Creature::Gog,                  159},
    {Creature::Magog,                240},
    {Creature::HellHound,            357},
    {Creature::Cerberus,             392},
    {Creature::Demon,                445},
    {Creature::HornedDemon,          480},
    {Creature::PitFiend,             765},
    {Creature::PitLord,             1224},
    {Creature::Efreeti,             1670},
    {Creature::EfreetSultan,        2343},
    {Creature::Devil,               5101},
    {Creature::ArchDevil,           7115},

    // Necropolis
    {Creature::Skeleton,               60},
    {Creature::SkeletonWarrior,        85},
    {Creature::WalkingDead,            98},
    {Creature::Zombie,                128},
    {Creature::Wight,                 252},
    {Creature::Wraith,                315},
    {Creature::Vampire,               555},
    {Creature::VampireLord,           783},
    {Creature::Lich,                  848},
    {Creature::PowerLich,            1079},
    {Creature::BlackKnight,          2087},
    {Creature::DreadKnight,          2382},
    {Creature::BoneDragon,           3388},
    {Creature::GhostDragon,          4696},

    // Dungeon
    {Creature::Troglodyte,             59},
    {Creature::InfernalTroglodyte,     84},
    {Creature::Harpy,                 154},
    {Creature::HarpyHag,              238},
    {Creature::Beholder,              336},
    {Creature::EvilEye,               367},
    {Creature::Medusa,                517},
    {Creature::MedusaQueen,           577},
    {Creature::Minotaur,              835},
    {Creature::MinotaurKing,         1068},
    {Creature::Manticore,            1547},
    {Creature::Scorpicore,           1589},
    {Creature::RedDragon,            4702},
    {Creature::BlackDragon,          8721},

    // Stronghold
    {Creature::Goblin,                 60},
    {Creature::Hobgoblin,              78},
    {Creature::WolfRider,             130},
    {Creature::WolfRaider,            203},
    {Creature::Orc,                   192},
    {Creature::OrcChieftain,          240},
    {Creature::Ogre,                  416},
    {Creature::OgreMage,              672},
    {Creature::Roc,                  1027},
    {Creature::Thunderbird,          1106},
    {Creature::Cyclops,              1266},
    {Creature::CyclopsKing,          1443},
    {Creature::Behemoth,             3162},
    {Creature::AncientBehemoth,      6168},

    // Fortress
    {Creature::Gnoll,                  56},
    {Creature::GnollMarauder,          90},
    {Creature::Lizardman,             126},
    {Creature::LizardWarrior,         156},
    {Creature::SerpentFly,            268},
    {Creature::DragonFly,             312},
    {Creature::Basilisk,              552},
    {Creature::GreaterBasilisk,       714},
    {Creature::Gorgon,                890},
    {Creature::MightyGorgon,         1028},
    {Creature::Wyvern,               1350},
    {Creature::WyvernMonarch,        1518},
    {Creature::Hydra,                4120},
    {Creature::ChaosHydra,           5931},

    // Conflux
    {Creature::Pixie,                  55},
    {Creature::Sprite,                 95},
    {Creature::AirElemental,          356},
    {Creature::StormElemental,        486},
    {Creature::WaterElemental,        315},
    {Creature::IceElemental,          380},
    {Creature::FireElemental,         345},
    {Creature::EnergyElemental,       470},
    {Creature::EarthElemental,        330},
    {Creature::MagmaElemental,        490},
    {Creature::PsychicElemental,     1669},
    {Creature::MagicElemental,       2012},
    {Creature::Firebird,             4336},
    {Creature::Phoenix,              6721},

    // Cove
    {Creature::Nymph,                  57},
    {Creature::Oceanid,                75},
    {Creature::CrewMate,              155},
    {Creature::Seaman,                174},
    {Creature::Pirate,                312},
    {Creature::Corsair,               407},
    {Creature::SeaDog,                602},
    {Creature::Stormbird,             502},
    {Creature::Ayssid,                645},
    {Creature::SeaWitch,              790},
    {Creature::Sorceress,             852},
    {Creature::Nix,                  1415},
    {Creature::NixWarrior,           2116},
    {Creature::SeaSerpent,           3953},
    {Creature::Haspid,               7220},

    // Neutrals
    {Creature::Peasant,                15},
    {Creature::Halfling,               75},
    {Creature::Boar,                  145},
    {Creature::Rogue,                 135},
    {Creature::Leprechaun,            208},
    {Creature::Mummy,                 270},
    {Creature::Nomad,                 345},
    {Creature::Sharpshooter,          585},
    {Creature::Satyr,                 518},
    {Creature::SteelGolem,            597},
    {Creature::Troll,                1024},
    {Creature::GoldGolem,             600},
    {Creature::Fangarm,               929},
    {Creature::DiamondGolem,          775},
    {Creature::Enchanter,            1210},
    {Creature::FaerieDragon,        30501},
    {Creature::RustDragon,          26433},
    {Creature::CrystalDragon,       39338},
    {Creature::AzureDragon,         78845},

    // AI value for empty slot is 0 for convenience.
    {Creature::Empty,                   0}
};
} // namespace h3::creatures