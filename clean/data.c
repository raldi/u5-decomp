#include <stdint.h>

// Symbols for primary data structures from DATA.OVL.
//
// This is a data-only file, but it's still nice to build it with a C
// compiler. Linker trickery is needed to make this compile exactly to the
// original form, so this uses GCC, not the ancient MS compiler.

// The secondary hex addresses are the first address minus 0x5b36. These are
// the values that show up in sources decompiled by Ghidra.

// Reference: https://wiki.ultimacodex.com/wiki/Ultima_V_internal_formats

enum MONSTER_FLAG_BIT {
    NoDrop =   0x0001, // Leaves no guts or items
    Thief =    0x0002, // Steals food
    Poisonga = 0x0004, // Attacks always poison
    Immune =   0x0008, // Immune to glass sword

    Divides =  0x0010, // Can divide
    Undead =   0x0020, // Responds to Repel Undead
    Poss =     0x0040, // Can possess
    Brute =    0x0080, // Melee attacks use strength stat

    Unk1 =     0x0100, // Unused?
    Poison =   0x0200, // Attacks sometimes poison
    Summ =     0x0400, // Can gate daemons
    Invis =    0x0800, // Can become invisible

    Vanish =   0x1000, // Vanishes instead of dying
    Tele =     0x2000, // Can teleport
    Unk2 =     0x4000, // Unused?
    Mage =     0x8000, // In An or Crown disables projectiles
};

// 0x154c  -0x45ea
const uint16_t MON_FLAG[] = {
Mage,                                                   // Mage
Unk2,                                                   // Bard
0,                                                      // Fighter
0,                                                      // ?
0,                                                      // Villager
0,                                                      // Merchant
0,                                                      // Jester
0,                                                      // Bard
0,                                                      // Pirate
0,                                                      // ?
0,                                                      // Child
0,                                                      // Beggar
0,                                                      // Guards
Immune|Vanish|Tele|Mage,                                // ?
Immune|Poss|Summ|Invis|Vanish|Tele|Mage,                // Blackthorn
Immune|Vanish|Tele,                                     // Lord British
NoDrop|Unk2|Mage,                                       // Sea Horse
NoDrop|Poisonga|Unk2,                                   // Squid
NoDrop|Unk2,                                            // Sea Serpent
NoDrop,                                                 // Shark
Unk1|Poison,                                            // Giant Rat
NoDrop,                                                 // Bat
Poisonga|Poison,                                        // Giant Spider
NoDrop|Undead|Invis,                                    // Ghost
NoDrop|Divides,                                         // Slime
Thief,                                                  // Gremlin
Brute|Poison,                                           // Mimic
Brute|Mage,                                             // Reaper
Poss|Mage,                                              // Gazer
0,                                                      // Crawler
Divides|Brute,                                          // Gargoyle
NoDrop,                                                 // Insect Swarm
Brute,                                                  // Orc
Undead,                                                 // Skeleton
Poisonga,                                               // Python
Brute|Unk2,                                             // Ettin
Brute,                                                  // Headless
NoDrop|Poss|Tele,                                       // Wisp
NoDrop|Undead|Poss|Summ|Mage,                           // Daemon
Summ,                                                   // Dragon
0,                                                      // Sand Trap
Unk2,                                                   // Troll
0,                                                      // ?
0,                                                      // ?
0,                                                      // Mongbat
0,                                                      // Corpser
Unk1|Poison,                                            // Rot Worm
NoDrop|Undead|Poss|Unk1|Poison|Invis|Vanish|Tele|Mage,  // Shadow Lord
};

// 0x160c  -0x452a
const uint8_t ITEM_ATTACK[] = {
    0x00,  // Leather helm
    0x00,  // Chain coif
    0x00,  // Iron helm
    0x04,  // Spiked helm
    0x00,  // Small shield
    0x00,  // Large shield
    0x06,  // Spiked shield
    0x00,  // Magic shield
    0x00,  // Jewel shield
    0x00,  // Cloth armour
    0x00,  // Leather armour
    0x00,  // Ringmail
    0x00,  // Scale mail
    0x00,  // Chain mail
    0x00,  // Plate mail
    0x00,  // Mystic armour
    0x06,  // Dagger
    0x06,  // Sling
    0x08,  // Club
    0x08,  // Flaming oil
    0x08,  // Main gauche
    0x0a,  // Spear
    0x0a,  // Throwing axe
    0x0c,  // Short sword
    0x0f,  // Mace
    0x0f,  // Morning star
    0x0a,  // Bow
    0x01,  // Arrows
    0x0c,  // Crossbow
    0x01,  // Quarrels
    0x0f,  // Long sword
    0x14,  // 2-H hammer
    0x14,  // 2-H axe
    0x14,  // 2-H sword
    0x1e,  // Halberd
    0x63,  // Sword of Chaos
    0x0f,  // Magic bow
    0x0c,  // Silver sword
    0x14,  // Magic axe
    0x63,  // Glass sword
    0x01,  // Jeweled sword
    0x1e,  // Mystic sword
    0x00,  // Ring of Invisibility
    0x00,  // Ring of Protection
    0x00,  // Ring of Regeneration
    0x00,  // Amulet of Turning
    0x00,  // Spiked collar
    0x00,  // Ankh
    0x10,  // Flam Por
    0x1e,  // Vas Flam
    0x63,  // In Corp
    0x12,  // Uus Nox
    0x00,  // Uus Zu
    0x15,  // Uus Flam
    0x00,  // Uus Sanct
    0x00,
};

// 0x1644  -0x44f2
const uint8_t ITEM_DEFENSE[] = {
    0x01,  // Leather helm
    0x02,  // Chain coif
    0x03,  // Iron helm
    0x03,  // Spiked helm
    0x02,  // Small shield
    0x03,  // Large shield
    0x03,  // Spiked shield
    0x05,  // Magic shield
    0x00,  // Jewel shield
    0x01,  // Cloth armour
    0x02,  // Leather armour
    0x03,  // Ringmail
    0x04,  // Scale mail
    0x05,  // Chain mail
    0x07,  // Plate mail
    0x0a,  // Mystic armour
    0x00,  // Dagger
    0x00,  // Sling
    0x00,  // Club
    0x00,  // Flaming oil
    0x01,  // Main gauche
    0x00,  // Spear
    0x00,  // Throwing axe
    0x00,  // Short sword
    0x00,  // Mace
    0x00,  // Morning star
    0x00,  // Bow
    0x00,  // Arrows
    0x00,  // Crossbow
    0x00,  // Quarrels
    0x00,  // Long sword
    0x00,  // 2-H hammer
    0x00,  // 2-H axe
    0x00,  // 2-H sword
    0x00,  // Halberd
    0x00,  // Sword of Chaos
    0x00,  // Magic bow
    0x00,  // Silver sword
    0x00,  // Magic axe
    0x00,  // Glass sword
    0x00,  // Jeweled sword
    0x01,  // Mystic sword
    0x00,  // Ring of Invisibility
    0x02,  // Ring of Protection
    0x00,  // Ring of Regeneration
    0x00,  // Amulet of Turning
    0x02,  // Spiked collar
    0x00,  // Ankh
};

// 0x1674  -0x44c2
const uint8_t ITEM_RANGE[] = {
    0x00,  // Leather helm
    0x00,  // Chain coif
    0x00,  // Iron helm
    0x00,  // Spiked helm
    0x00,  // Small shield
    0x00,  // Large shield
    0x00,  // Spiked shield
    0x00,  // Magic shield
    0x00,  // Jewel shield
    0x00,  // Cloth armour
    0x00,  // Leather armour
    0x00,  // Ringmail
    0x00,  // Scale mail
    0x00,  // Chain mail
    0x00,  // Plate mail
    0x00,  // Mystic armour
    0x03,  // Dagger
    0x04,  // Sling
    0x00,  // Club
    0x04,  // Flaming oil
    0x00,  // Main gauche
    0x05,  // Spear
    0x04,  // Throwing axe
    0x00,  // Short sword
    0x00,  // Mace
    0x02,  // Morning star
    0x07,  // Bow
    0x00,  // Arrows
    0x08,  // Crossbow
    0x00,  // Quarrels
    0x00,  // Long sword
    0x00,  // 2-H hammer
    0x00,  // 2-H axe
    0x00,  // 2-H sword
    0x02,  // Halberd
    0x00,  // Sword of Chaos
    0x0f,  // Magic bow
    0x00,  // Silver sword
    0x0f,  // Magic axe
    0x00,  // Glass sword
    0x00,  // Jeweled sword
    0x00,  // Mystic sword
    0x00,  // Ring of Invisibility
    0x00,  // Ring of Protection
    0x00,  // Ring of Regeneration
    0x00,  // Amulet of Turning
    0x00,  // Spiked collar
    0x00,  // Ankh
    0x0f,  // Flam Por
    0x0f,  // Vas Flam
    0x0f,  // In Corp
    0x0f,  // Uus Nox
    0x0f,  // Uus Zu
    0x0f,  // Uus Flam
    0x0f,  // Uus Sanct
    0x00,
};
