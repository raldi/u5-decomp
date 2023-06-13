#include <string.h>
#include <stdio.h>

// DATA.OVL recreation.
//
// This is a data-only file, but it's still nice to build it with a C
// compiler. Linker trickery is needed to make this compile exactly to the
// original form, so this uses GCC, not the ancient MS compiler.

// 0x0000
const char DATA_00[] = {
  0xd6, 0x51, 0x68, 0x0f, 0x6a, 0x52, 0x68, 0x0f, 0x56, 0x53, 0x68, 0x0f,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
// 0x0018
const char* MS_COPYRIGHT = "MS Run-Time Library - Copyright (c) 1988, Microsoft Corp\x11";
// 0x0052  -0x5ae4
const char* ARMORS[] = {
    "Leather Helm",
    "Spiked Helm",
    "Small Shield",
    "Large Shield",
    "Spiked Shield",
    "Magic Shield",
    "Jewel Shield",
    "Cloth Armour",
    "Leather Armour",
    "Scale Mail",
    "Chain Mail",
    "Plate Mail",
    "Mystic Armour",
};
// 0x00f8
const char* WEAPONS[] = {
};
// 0x0179
const char* TRINKETS[] = {
};
// 0x01d3
const char* MOB_NAMES[] = {
};
// ?
const char* ENCOUNTER_NAMES[] = {
};
// 0x0490
const void* DATA_01[] = {};
// 0x04c3
const char* ITEMS[] = {
};
// TODO More items?

// 0x0572
const char* SHORT_ITEM_NAMES[] = {
};
// 0x068c
const char* POTION_COLORS[] = {
};
// 0x06bc
const char* REAGENTS[] = {
};
// 0x01bb
const char* SPELL_NAMES[] = {
};
// 0x08c4
const char* CLASS_NAMES[] = {
};
// 0x0918
const char* DIAGNOSES[] = {
};
// 0x0941
const char* MAGIC_SYLLABLES[] = {
};
// 0x09a5
// const void* DATA_[] = {};
// 0x0a4d
const char* CITIES[] = {
};
// 0x0b5e
const char* DUNGEONS[] = {
};
// 0x0b98
const char* VIRTUES[] = {
};
// 0x0be0
const char* VIRTUE_MANTRAS[] = {
};
// 0x0bfe
const char* STORES[] = {
};
// 0x0efa
const char* SHOPKEEPERS[] = {
};
// 0x104c
const char* CONVERSATION_WORDS[] = {
};
// 0x129a
const char* FILENAMES[] = {
};
// 0x13b6
// TODO: Unknown data
// 0x160c
// TODO: Gear statistics.
// TODO: Name list has uneven zero padding, better make it one big buffer...
// 0x175c
// XXX: Uneven zero padding, need to do things manually.
const char GEAR_STRINGS[] =
    "Chain Coif\0\0"
    "Iron Helm\0"
    "Ring Mail\0"
    "Dagger\0\0"
    "Sling\0"
    "Club\0\0"
    "Spear\0"
    "Mace\0\0"
    "Bow\0"
    "Arrows\0\0"
    "Crossbow\0\0"
    "Quarrels\0\0"
    "Long Sword\0\0"
    "2H Hammer\0"
    "2H Axe\0\0"
    "2H Sword\0\0"
    "Halberd\0"
    "Magic Bow\0"
    "Magic Axe\0"
    "Ankh\0";
// 0x187a
const uint16_t TEXT_INDEX[] = {
    0x0200,
    0x0207,
    0x020d,
    0x0216,
    0x0221,
    0x022e,
    0x0238,
    0x023e,
    0x024a,
    0x0250,
    0x025a,
    0x025e,
    0x026b,
    0x0271,
    0x0277,
    0x027f,
    0x0285,
    0x028c,
    0x0292,
    0x029a,
    0x02a3,
    0x02b0,
    0x02b4,
    0x02bd,
    0x02c4,
    0x02ca,
    0x02d3,
    0x02d8,
    0x02df,
    0x02e6,
    0x02f0,
    0x0000,
    0x0000,
    0x02f6,
    0x02fe,
    0x0306,
    0x030f,
    0x031b,
    0x0323,
    0x0328,
    0x0330,
    0x0332,
    0x033b,
    0x0344,
    0x034b,
    0x0350,
    0x0358,
    0x035a,
    0x0360,
    0x0367,
    0x036e,
    0x0370,
    0x037b,
    0x0388,
    0x0393,
    0x039a,
    0x03a7,
    0x03ae,
    0x03b9,
    0x03be,
    0x03c6,
    0x03cd,
    0x03d3,
    0x03dc,
    0x03e3,
    0x03eb,
    0x03f2,
    0x03f4,
    0x03fd,
    0x0405,
    0x040a,
    0x0414,
    0x041b,
    0x0422,
    0x042d,
    0x0433,
    0x043b,
    0x0443,
    0x044e,
    0x0455,
    0x0457,
    0x0459,
    0x0462,
    0x046b,
    0x0474,
    0x0480,
    0x0484,
    0x0488,
    0x048c,
    0x0490,
    0x0495,
    0x049a,
    0x049f,
    0x04a3,
    0x04a5,
    0x04a7,
    0x04a9,
    0x04ab,
    0x04ad,
    0x04af,
    0x04b1,
    0x04b3,
    0x04be,
    0x04c9,
    0x04d0,
    0x04d6,
    0x04de,
    0x04e1,
    0x04e4,
    0x04e7,
    0x04ea,
    0x04ed,
    0x04f0,
    0x04f3,
    0x04f6,
    0x0504,
    0x0511,
    0x051f,
    0x0528,
    0x0536,
    0x053e,
    0x054b,
    0x0557,
    0x0562,
    0x174c,
    0x1758,
    0x056d,
    0x0578,
    0x0583,
    0x058e,
    0x0599,
    0x05a3,
    0x05ae,
    0x05b4,
    0x1762,
    0x05bc,
    0x05c2,
    0x05c8,
    0x05ce,
    0x176c,
    0x1774,
    0x177a,
    0x05d9,
    0x05e3,
    0x1780,
    0x05ee,
    0x05f9,
    0x1786,
    0x0604,
    0x178c,
    0x1790,
    0x1798,
    0x17a2,
    0x17ac,
    0x17b8,
    0x17c2,
    0x17ca,
    0x17d4,
    0x060f,
    0x17dc,
    0x061a,
    0x17e6,
    0x0625,
    0x0630,
    0x063b,
    0x0646,
    0x0650,
    0x065b,
    0x0666,
    0x0671,
    0x17f0,
    0x067c,
    0x0681,
    0x0688,
    0x068c,
    0x0692,
    0x0699,
    0x06a0,
    0x06a6,
    0x06ac,
    0x06b7,
    0x06bf,
    0x06c6,
    0x06cf,
    0x06da,
    0x06e5,
    0x06f0,
    0x06f9,
    0x0700,
    0x0709,
    0x070f,
    0x0716,
    0x071b,
    0x0723,
    0x072c,
    0x0737,
    0x073f,
    0x0746,
    0x074e,
    0x0759,
    0x0761,
    0x076a,
    0x0775,
    0x077f,
    0x078a,
    0x0791,
    0x0799,
    0x07a2,
    0x07ad,
    0x07b5,
    0x07bd,
    0x07c6,
    0x07d1,
    0x07db,
    0x07e5,
    0x07ee,
    0x07f4,
    0x07fc,
    0x0807,
    0x0812,
    0x0818,
    0x0823,
    0x082d,
    0x0838,
    0x0841,
    0x084a,
    0x0855,
    0x0860,
    0x086b,
    0x0876,
    0x0881,
    0x088c,
    0x0897,
    0x08a2,
    0x08ad,
    0x08b4,
    0x08ba,
    0x08c1,
    0x08c6,
    0x08cb,
    0x08d3,
    0x08d9,
    0x08e0,
    0x08e8,
    0x08ef,
    0x08f8,
};

// TODO: Unknown data

// 0x1e2a
// TODO: Map start coordinates

// 0x1e4a
// TODO: Name of cities index

// 0x1e9a
// TODO: City coordinates

// 0x1f5e
// TODO: Virtue and mantra index

// 0x22da
// TODO: Shopkeeper name index

// 0x24f8
// TODO: Dialog text index

// 0x2636
const char* DAT_FILES[] = {
    "TOWNE.DAT",
    "DWELLING.DAT",
    "CASTLE.DAT",
    "KEEP.DAT",
}

// 0x266a
// TODO: Misc strings that have newlines and spaces at end

// Write byte array to file.
#define bytes(f, data) do { \
    for (int i = 0; i < sizeof(data); i++) fputc(data[i], f); \
    } while (0)

// Write single string to file.
#define string(f, s) fwrite(s, 1, strlen(s) + 1, f)

// Write string array to file.
#define strings(f, data) do { \
    for (int i = 0; i < sizeof(data) / sizeof(size_t); i++) string(f, data[i]); \
    } while (0)

int main() {
    FILE* out = fopen("newdata.ovl", "wb");

    bytes(out, DATA_00);
    string(out, MS_COPYRIGHT);
    strings(out, ARMORS);

    fclose(out);
    printf("newdata.ovl written\n");

    return 0;
}
