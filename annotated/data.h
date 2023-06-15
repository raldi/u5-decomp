#pragma once

enum MONSTER_FLAG_BIT {
    NO_DROP =  0x0001, // Leaves no guts or items
    THIEF =    0x0002, // Steals food
    POISONGA = 0x0004, // Attacks always poison
    IMMUNE =   0x0008, // Immune to glass sword

    DIVIDES =  0x0010, // Can divide
    UNDEAD =   0x0020, // Responds to Repel Undead
    POSS =     0x0040, // Can possess
    BRUTE =    0x0080, // Melee attacks use strength stat

    UNK1 =     0x0100, // Unused?
    POISON =   0x0200, // Attacks sometimes poison
    SUMM =     0x0400, // Can gate daemons
    INVIS =    0x0800, // Can become invisible

    VANISH =   0x1000, // Vanishes instead of dying
    TELE =     0x2000, // Can teleport
    UNK2 =     0x4000, // Unused?
    MAGE =     0x8000, // In An or Crown disables projectiles
};

// 0x154c  0x153c
extern const uint16_t MON_FLAG[];
// 0x160c  0x15fc
extern const uint8_t ITEM_ATTACK[];
// 0x1644  0x1634
extern const uint8_t ITEM_DEFENSE[];
// 0x1674  0x1664
extern const uint8_t ITEM_RANGE[];
