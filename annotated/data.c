#include <stdint.h>
#include "data.h"

// Symbols for primary data structures from DATA.OVL.
//
// This is a data-only file, but it's still nice to build it with a C
// compiler. Linker trickery is needed to make this compile exactly to the
// original form, so this uses GCC, not the ancient MS compiler.

// The secondary hex addresses are the guess for where the data shows up in
// Ghidra's decompiled C code.

// Reference: https://wiki.ultimacodex.com/wiki/Ultima_V_internal_formats

// 0x154c  0x153c
const uint16_t MON_FLAG[] = {
MAGE,                                                   // Mage
UNK2,                                                   // Bard
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
IMMUNE|VANISH|TELE|MAGE,                                // ?
IMMUNE|POSS|SUMM|INVIS|VANISH|TELE|MAGE,                // Blackthorn
IMMUNE|VANISH|TELE,                                     // Lord British
NO_DROP|UNK2|MAGE,                                       // Sea Horse
NO_DROP|POISONGA|UNK2,                                   // Squid
NO_DROP|UNK2,                                            // Sea Serpent
NO_DROP,                                                 // Shark
UNK1|POISON,                                            // Giant Rat
NO_DROP,                                                 // Bat
POISONGA|POISON,                                        // Giant Spider
NO_DROP|UNDEAD|INVIS,                                    // Ghost
NO_DROP|DIVIDES,                                         // Slime
THIEF,                                                  // Gremlin
BRUTE|POISON,                                           // Mimic
BRUTE|MAGE,                                             // Reaper
POSS|MAGE,                                              // Gazer
0,                                                      // Crawler
DIVIDES|BRUTE,                                          // Gargoyle
NO_DROP,                                                 // Insect Swarm
BRUTE,                                                  // Orc
UNDEAD,                                                 // Skeleton
POISONGA,                                               // Python
BRUTE|UNK2,                                             // Ettin
BRUTE,                                                  // Headless
NO_DROP|POSS|TELE,                                       // Wisp
NO_DROP|UNDEAD|POSS|SUMM|MAGE,                           // Daemon
SUMM,                                                   // Dragon
0,                                                      // Sand Trap
UNK2,                                                   // Troll
0,                                                      // ?
0,                                                      // ?
0,                                                      // Mongbat
0,                                                      // Corpser
UNK1|POISON,                                            // Rot Worm
NO_DROP|UNDEAD|POSS|UNK1|POISON|INVIS|VANISH|TELE|MAGE,  // Shadow Lord
};

// 0x160c  0x15fc
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
    0x10,  // Vas Lor
    0x1e,  // Rel Hur
    0x63,  // In Sanct
    0x12,  // In An
    0x00,  // In Quas Wis
    0x15,  // Kal Xen Corp
    0x00,  // In Mani Corp
    0x00,  // An Tym
};

// 0x1644  0x1634
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

// 0x1674  0x1664
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
    0x0f,  // Vas Lor
    0x0f,  // Rel Hur
    0x0f,  // In Sanct
    0x0f,  // In An
    0x0f,  // In Quas Wis
    0x0f,  // Kal Xen Corp
    0x0f,  // In Mani Corp
    0x00,  // An Tym
};
