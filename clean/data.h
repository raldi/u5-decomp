#pragma once

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

// 0x154c  0x153c
extern const uint16_t MON_FLAG[];
// 0x160c  0x15fc
extern const uint8_t ITEM_ATTACK[];
// 0x1644  0x1634
extern const uint8_t ITEM_DEFENSE[];
// 0x1674  0x1664
extern const uint8_t ITEM_RANGE[];
