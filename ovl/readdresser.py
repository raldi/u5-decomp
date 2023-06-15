import sys

# Per-file offsets, using file segment and adjustment parameter
#
# Determined the magic extra adjustment bumps to the segment offsets by
# eyeballing Ghidra-parsed DosBox mem dump assembly with the loaded OVLs.
offsets = {
    "town.c":     0x10400 - 0x81d0,
    "mainout.c":  0x10400 - 0x81d0,
    "dungeon.c":  0x10400 - 0x81d0,
    "intro.c":    0x10400 - 0x81d0,
    #
    "npc.c":      0x124c0 - 0xa290,
    "combat.c":   0x124c0 - 0xa290,
    "blckthrn.c": 0x124c0 - 0xa290,
    "lookobj.c":  0x124c0 - 0xa290,
    "dnglook.c":  0x124c0 - 0xa290,
    "outsubs.c":  0x124c0 - 0xa290,
    "shoppes.c":  0x124c0 - 0xa290,
    "endgame.c":  0x124c0 - 0xa290,
    #
    "sjog.c":     0x141b0 - 0xbf80,
    "cmds.c":     0x141b0 - 0xbf80,
    "cast.c":     0x141b0 - 0xbf80,
    "talk.c":     0x141b0 - 0xbf80,
    #
    "cast2.c":    0x16410 - 0xe1e0,
    "zstats.c":   0x16410 - 0xe1e0,
    "comsubs.c":  0x16410 - 0xe1e0,
    "shoppes2.c": 0x16410 - 0xe1e0,
    "shoppes3.c": 0x16410 - 0xe1e0,
    "font.c":     0x16410 - 0xe1e0,
}

# 'func_0x0001c56e'
external_calls = {
    "blckthrn.c": [
        0x00010126,
        0x00010132,
        0x000185D0,
        0x00018CA0,
        0x00018CD6,
        0x00018E52,
        0x00019176,
        0x00019298,
        0x00019310,
        0x000198A4,
        0x000198EA,
        0x00019A80,
        0x0001A262,
        0x0001A32A,
        0x0001A39C,
        0x0001A3C2,
        0x0001A74E,
        0x0001A79E,
        0x0001A89C,
        0x0001AB30,
        0x0001B0C6,
        0x0001B2A2,
        0x0001B752,
        0x0001BCA4,
        0x0001BD16,
        0x0001BD4C,
        0x0001C166,
        0x0001C56E,
        0x0001CCB4,
        0x0001CFA6,
        0x0001D1AC,
        0x0001DB40,
        0x0001FC76,
    ],
    "cast2.c": [
        0x000100C6,
        0x000100F6,
        0x00018672,
        0x000186C6,
        0x00018CA0,
        0x00018DB6,
        0x00019298,
        0x000198EA,
        0x00019A80,
        0x00019E22,
        0x00019ECE,
        0x00019F1E,
        0x0001A142,
        0x0001A262,
        0x0001A32A,
        0x0001A39C,
        0x0001A3C2,
        0x0001A46C,
        0x0001A74E,
        0x0001A79E,
        0x0001A808,
        0x0001A89C,
        0x0001AB30,
        0x0001B0BE,
        0x0001B0C6,
        0x0001B2A2,
        0x0001BCA4,
        0x0001BCEE,
        0x0001BD16,
        0x0001BD4C,
        0x0001C144,
        0x0001C56E,
        0x0001C632,
        0x0001C782,
        0x0001D1AC,
        0x0001D5C4,
        0x0001D8DC,
        0x0001DB40,
        0x0001DF3A,
        0x0001E07A,
        0x0001E736,
        0x0001F14E,
        0x0001FFA6,
    ],
    "cast.c": [
        0x000100C6,
        0x000100F6,
        0x0001011A,
        0x000101C2,
        0x000102BE,
        0x000102FA,
        0x00010306,
        0x00010312,
        0x00010336,
        0x0001034E,
        0x0001035A,
        0x00010372,
        0x0001037E,
        0x0001038A,
        0x00010396,
        0x000103A2,
        0x00018CA0,
        0x00018E94,
        0x00019298,
        0x000198EA,
        0x00019A80,
        0x00019DC4,
        0x0001A2C2,
        0x0001A3C2,
        0x0001A46C,
        0x0001A512,
        0x0001A53E,
        0x0001A89C,
        0x0001AB30,
        0x0001B2A2,
        0x0001B752,
        0x0001B794,
        0x0001B8BE,
        0x0001BCDE,
        0x0001BCEE,
        0x0001BD16,
        0x0001C144,
        0x0001C19E,
        0x0001C1E4,
        0x0001C598,
        0x0001C5DE,
        0x0001C632,
        0x0001CA24,
        0x0001CBB8,
        0x0001CFDA,
        0x0001D050,
        0x0001D080,
        0x0001D12C,
        0x0001D16C,
        0x0001D5C4,
        0x0001D876,
        0x0001D8DC,
        0x0001DB40,
        0x0001E736,
        0x0001EA30,
        0x0001EADE,
        0x0001FD42,
        0x0001FD4E,
        0x0001FDAE,
        0x0001FF5E,
        0x0001FFA6,
        0x0001FFB2,
        0x0001FFCA,
        0x0001FFE2,
    ],
    "cmds.c": [
        0x000100EA,
        0x000102BE,
        0x00018CA0,
        0x00018CD6,
        0x00019298,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019DC4,
        0x00019E22,
        0x00019E52,
        0x0001A2C2,
        0x0001A32A,
        0x0001A3C2,
        0x0001A89C,
        0x0001AB30,
        0x0001AC58,
        0x0001AC82,
        0x0001ACD8,
        0x0001AD18,
        0x0001AE7C,
        0x0001B0BE,
        0x0001B200,
        0x0001B2A2,
        0x0001B752,
        0x0001B81C,
        0x0001B8BE,
        0x0001B932,
        0x0001BB14,
        0x0001BBFC,
        0x0001BC2C,
        0x0001BCA4,
        0x0001BD16,
        0x0001BD4C,
        0x0001BDCE,
        0x0001C5DE,
        0x0001C632,
        0x0001CCB4,
        0x0001D050,
        0x0001D080,
        0x0001D12C,
        0x0001D16C,
        0x0001D1AC,
        0x0001DB40,
        0x0001F14E,
        0x0001FCBE,
        0x0001FCCA,
        0x0001FCE2,
        0x0001FD06,
        0x0001FD36,
        0x0001FD42,
        0x0001FD4E,
        0x0001FDF6,
        0x0001FE0E,
        0x0001FE1A,
        0x0001FFB2,
    ],
    "combat.c": [
        0x00010006,
        0x0001001E,
        0x0001002A,
        0x00010036,
        0x00010042,
        0x0001004E,
        0x0001005A,
        0x00010066,
        0x00010072,
        0x0001007E,
        0x00010096,
        0x000100AE,
        0x000100BA,
        0x000100D2,
        0x000100DE,
        0x00010102,
        0x0001010E,
        0x00019298,
        0x000198EA,
        0x00019A80,
        0x00019D46,
        0x0001A2C2,
        0x0001A46C,
        0x0001A89C,
        0x0001AB30,
        0x0001AC58,
        0x0001AE7C,
        0x0001B794,
        0x0001BCDE,
        0x0001BCEE,
        0x0001C144,
        0x0001C184,
        0x0001C598,
        0x0001C5DE,
        0x0001C632,
        0x0001CE5A,
        0x0001D1AC,
        0x0001D876,
        0x0001DB40,
        0x0001E736,
        0x0001EA30,
        0x0001EADE,
        0x0001EFB2,
        0x0001EFD8,
        0x0001F090,
        0x0001FF46,
        0x0001FF6A,
        0x0001FF76,
        0x0001FF9A,
        0x0001FFBE,
        0x0001FFCA,
        0x0001FFD6,
        0x0001FFE2,
        0x0001FFEE,
        0x0001FFFA,
    ],
    "comsubs.c": [
        0x000100C6,
        0x000100EA,
        0x000100F6,
        0x0001023A,
        0x00018CA0,
        0x00018CFE,
        0x0001919E,
        0x00019298,
        0x000198EA,
        0x00019A80,
        0x00019E22,
        0x00019F1E,
        0x0001A2C2,
        0x0001A2F8,
        0x0001A3C2,
        0x0001A46C,
        0x0001A89C,
        0x0001AB30,
        0x0001B794,
        0x0001BCEE,
        0x0001BD16,
        0x0001C19E,
        0x0001C1E4,
        0x0001C5DE,
        0x0001D876,
        0x0001DB40,
        0x0001E736,
        0x0001F090,
        0x0001FF52,
        0x0001FF82,
        0x0001FF8E,
        0x0001FFA6,
        0x0001FFB2,
    ],
    "dnglook.c": [
        0x00018CA0,
        0x00018CD6,
        0x00018D40,
        0x00018DDE,
        0x00018E52,
        0x0001925E,
        0x000198EA,
        0x00019DC4,
        0x00019E22,
        0x00019ECE,
        0x00019EFA,
        0x0001A00A,
        0x0001A2C2,
        0x0001E736,
        0x0001EB66,
        0x0001F1EC,
        0x0001FE26,
    ],
    "dungeon.c": [
        0x00018524,
        0x00018AA8,
        0x00018CA0,
        0x00018CD6,
        0x00018CFE,
        0x00018D40,
        0x00018DB6,
        0x00018DDE,
        0x00018E14,
        0x00018E2C,
        0x00018E52,
        0x00018E6C,
        0x00018E94,
        0x00018ECC,
        0x00018F22,
        0x00018F7C,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019D46,
        0x00019D68,
        0x00019DC4,
        0x00019E22,
        0x00019E52,
        0x00019ECE,
        0x0001A262,
        0x0001A2C2,
        0x0001A32A,
        0x0001A46C,
        0x0001A79E,
        0x0001A89C,
        0x0001AB30,
        0x0001AC58,
        0x0001ACD8,
        0x0001AD18,
        0x0001B3A8,
        0x0001BC2C,
        0x0001C166,
        0x0001C2B0,
        0x0001C5DE,
        0x0001CE5A,
        0x0001CEFE,
        0x0001D1AC,
        0x0001DB40,
        0x0001E1B6,
        0x0001FC8E,
        0x0001FE32,
        0x0001FE3E,
        0x0001FE4A,
        0x0001FE56,
        0x0001FE62,
        0x0001FE6E,
        0x0001FE7A,
        0x0001FE92,
        0x0001FE9E,
        0x0001FEE6,
    ],
    "endgame.c": [
        0x00018656,
        0x00018CA0,
        0x00018CD6,
        0x00018DB6,
        0x00018DDE,
        0x00018E14,
        0x00018E52,
        0x00018F7C,
        0x00019176,
        0x0001919E,
        0x000191DE,
        0x0001920C,
        0x0001925E,
        0x00019310,
        0x000198EA,
        0x00019A80,
        0x00019DC4,
        0x00019E22,
        0x00019ECE,
        0x00019F8E,
        0x0001A2C2,
        0x0001A3C2,
        0x0001A74E,
        0x0001A79E,
        0x0001A89C,
        0x0001AB30,
        0x0001BD16,
        0x0001C56E,
        0x0001CFA6,
        0x0001F1CE,
        0x0001FF16,
    ],
    "font.c": [
        0x00018CA0,
        0x00018CD6,
        0x00018D40,
        0x00018DDE,
        0x00018E14,
        0x00018E52,
        0x00018F7C,
        0x0001919E,
        0x000191DE,
        0x0001920C,
        0x00019224,
        0x0001925E,
        0x00019274,
        0x00019310,
        0x000198EA,
        0x00019A80,
        0x00019E22,
        0x00019F8E,
        0x0001A00A,
        0x0001A068,
        0x0001A262,
        0x0001A2C2,
        0x0001A32A,
        0x0001A46C,
        0x0001A4F0,
        0x0001A74E,
        0x0001A79E,
        0x0001A808,
        0x0001C782,
        0x0001FEF2,
        0x0001FF22,
        0x0001FF2E,
    ],
    "intro.c": [
        0x00018534,
        0x00018AB8,
        0x00018AD2,
        0x00018CB0,
        0x00018CE6,
        0x00018D0E,
        0x00018D50,
        0x00018DEE,
        0x00018E24,
        0x00018E62,
        0x00018EA4,
        0x00018F8C,
        0x00018FB2,
        0x00019020,
        0x000190D4,
        0x0001916A,
        0x00019186,
        0x000191AE,
        0x000191D0,
        0x000191EE,
        0x0001921C,
        0x00019234,
        0x0001926E,
        0x00019284,
        0x00019398,
        0x000198B4,
        0x000198E6,
        0x000198FA,
        0x00019A90,
        0x00019C7E,
        0x00019D56,
        0x00019D78,
        0x00019DD4,
        0x00019E32,
        0x00019E62,
        0x00019EDE,
        0x00019F0A,
        0x00019F2E,
        0x00019F42,
        0x00019F9E,
        0x0001A01A,
        0x0001A078,
        0x0001A0EC,
        0x0001A272,
        0x0001A296,
        0x0001A2BE,
        0x0001A33A,
        0x0001A3AC,
        0x0001A75E,
        0x0001A7AE,
        0x0001A818,
        0x0001B0D6,
        0x0001CE6A,
        0x0001CF0E,
        0x0001E5BE,
        0x0001FF0E,
        0x0001FF1A,
        0x0001FF26,
    ],
    "lookobj.c": [
        0x00018CA0,
        0x00018CD6,
        0x00018CFE,
        0x00018D40,
        0x00018DB6,
        0x00018E52,
        0x00018E94,
        0x00018F22,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019D68,
        0x00019E22,
        0x00019ECE,
        0x00019F1E,
        0x0001A142,
        0x0001A2C2,
        0x0001A39C,
        0x0001A46C,
        0x0001A79E,
        0x0001A89C,
        0x0001AB30,
        0x0001AC82,
        0x0001B0BE,
        0x0001B81C,
        0x0001B8BE,
        0x0001BB14,
        0x0001BC2C,
        0x0001BCA4,
        0x0001BD4C,
        0x0001C632,
        0x0001CBB8,
        0x0001D8DC,
        0x0001DB40,
        0x0001F14E,
    ],
    "mainout.c": [
        0x000198A4,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019D46,
        0x00019D68,
        0x0001A262,
        0x0001A2C2,
        0x0001A46C,
        0x0001A4F0,
        0x0001A74E,
        0x0001A79E,
        0x0001A808,
        0x0001A89C,
        0x0001AB30,
        0x0001ACD8,
        0x0001AD18,
        0x0001AE7C,
        0x0001B0C6,
        0x0001B2A2,
        0x0001B3A8,
        0x0001B752,
        0x0001B81C,
        0x0001B8BE,
        0x0001B932,
        0x0001BB14,
        0x0001BC2C,
        0x0001BCA4,
        0x0001BD16,
        0x0001C2B0,
        0x0001C56E,
        0x0001C5DE,
        0x0001C632,
        0x0001CAD8,
        0x0001CCB4,
        0x0001CE18,
        0x0001CE5A,
        0x0001D1AC,
        0x0001DB40,
        0x0001E07A,
        0x0001E380,
        0x0001FC52,
        0x0001FC8E,
        0x0001FC9A,
        0x0001FD72,
        0x0001FD7E,
        0x0001FD8A,
        0x0001FDBA,
        0x0001FDC6,
        0x0001FDEA,
        0x0001FE02,
        0x0001FE1A,
    ],
    "npc.c": [
        0x0001A2C2,
        0x0001B932,
        0x0001BCDE,
        0x0001C632,
        0x0001FD5A,
    ],
    "outsubs.c": [
        0x00018632,
        0x00018CA0,
        0x00018DB6,
        0x00019298,
        0x000198A4,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x0001A2C2,
        0x0001A3C2,
        0x0001A74E,
        0x0001A79E,
        0x0001A808,
        0x0001A89C,
        0x0001AB30,
        0x0001AC82,
        0x0001BCEE,
        0x0001BD16,
        0x0001C120,
        0x0001C5DE,
        0x0001C632,
        0x0001CFA6,
        0x0001D1AC,
        0x0001FDAE,
        0x0001FDF6,
    ],
    "shoppes2.c": [
        0x0001019E,
        0x000101E6,
        0x0001020A,
        0x00010216,
        0x00010222,
        0x000185D0,
        0x00018672,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x0001A142,
        0x0001A2C2,
        0x0001A89C,
        0x0001AB30,
        0x0001BD4C,
        0x0001BDCE,
        0x0001C144,
        0x0001C166,
        0x0001C184,
        0x0001C632,
        0x0001DB40,
        0x0001F14E,
    ],
    "shoppes3.c": [
        0x00010192,
        0x0001019E,
        0x000101E6,
        0x0001020A,
        0x00010216,
        0x00010222,
        0x00018672,
        0x000186C6,
        0x00018CA0,
        0x00018DB6,
        0x000198EA,
        0x00019A80,
        0x00019DC4,
        0x00019E22,
        0x00019E52,
        0x00019F1E,
        0x0001A89C,
        0x0001AB30,
        0x0001B0BE,
        0x0001BBFC,
        0x0001BD16,
        0x0001C23C,
        0x0001D12C,
        0x0001D16C,
        0x0001D1AC,
        0x0001DB40,
        0x0001FCBE,
        0x0001FCCA,
        0x0001FD06,
    ],
    "shoppes.c": [
        0x00010126,
        0x000101B6,
        0x000101C2,
        0x000101CE,
        0x000185D0,
        0x00018656,
        0x00018672,
        0x00018CA0,
        0x00018DB6,
        0x000198EA,
        0x00019A80,
        0x00019DC4,
        0x00019E22,
        0x00019E52,
        0x00019F1E,
        0x0001A142,
        0x0001A2C2,
        0x0001A39C,
        0x0001A3C2,
        0x0001A79E,
        0x0001A89C,
        0x0001AAB4,
        0x0001AB30,
        0x0001B0BE,
        0x0001B8BE,
        0x0001C120,
        0x0001C144,
        0x0001C166,
        0x0001C184,
        0x0001C632,
        0x0001CE5A,
        0x0001CEFE,
        0x0001D050,
        0x0001D080,
        0x0001D16C,
        0x0001DB40,
    ],
    "sjog.c": [
        0x000100EA,
        0x00019176,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019D46,
        0x0001A2C2,
        0x0001A3C2,
        0x0001A46C,
        0x0001A4F0,
        0x0001A89C,
        0x0001AB30,
        0x0001B200,
        0x0001B81C,
        0x0001B8BE,
        0x0001B932,
        0x0001BB14,
        0x0001BBFC,
        0x0001BCA4,
        0x0001C120,
        0x0001C144,
        0x0001C56E,
        0x0001C5DE,
        0x0001C632,
        0x0001CBB8,
        0x0001D876,
        0x0001DB40,
        0x0001E07A,
        0x0001EADE,
        0x0001F090,
        0x0001FD2A,
        0x0001FD36,
        0x0001FD42,
        0x0001FD4E,
        0x0001FE7A,
        0x0001FE86,
        0x0001FFA6,
        0x0001FFB2,
        0x0001FFCA,
    ],
    "talk.c": [
        0x000186A6,
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019D46,
        0x00019ECE,
        0x00019F8E,
        0x0001A142,
        0x0001A262,
        0x0001A286,
        0x0001A2AE,
        0x0001A2C2,
        0x0001A32A,
        0x0001A79E,
        0x0001A89C,
        0x0001AB30,
        0x0001B81C,
        0x0001B8BE,
        0x0001BC2C,
        0x0001BD4C,
        0x0001C120,
        0x0001C166,
        0x0001C184,
        0x0001C5DE,
        0x0001C632,
        0x0001DB40,
        0x0001F14E,
        0x0001FCB2,
        0x0001FD06,
        0x0001FD36,
        0x0001FD42,
        0x0001FD4E,
        0x0001FD66,
    ],
    "town.c": [
        0x0000FC8E,
        0x0000FC9A,
        0x0000FCA6,
        0x0000FCD6,
        0x0000FCE2,
        0x0000FCEE,
        0x0000FD12,
        0x0000FD66,
        0x00018CA0,
        0x00018CD6,
        0x000198EA,
        0x00019A80,
        0x00019D46,
        0x0001A286,
        0x0001A2AE,
        0x0001A2C2,
        0x0001A2F8,
        0x0001A3C2,
        0x0001A46C,
        0x0001A4F0,
        0x0001A512,
        0x0001A53E,
        0x0001A79E,
        0x0001A89C,
        0x0001AB30,
        0x0001ACD8,
        0x0001AD18,
        0x0001AE7C,
        0x0001B0C6,
        0x0001B2A2,
        0x0001B3A8,
        0x0001B752,
        0x0001B81C,
        0x0001B8BE,
        0x0001B932,
        0x0001BB14,
        0x0001BBFC,
        0x0001BC2C,
        0x0001BCA4,
        0x0001C166,
        0x0001C2B0,
        0x0001C56E,
        0x0001C632,
        0x0001CAD8,
        0x0001CCB4,
        0x0001CE18,
        0x0001CE5A,
        0x0001D1AC,
        0x0001DB40,
        0x0001E07A,
        0x0001E380,
    ],
    "zstats.c": [
        0x000198EA,
        0x00019A80,
        0x00019C6E,
        0x00019DC4,
        0x00019E22,
        0x00019E52,
        0x00019ECE,
        0x00019F1E,
        0x0001A142,
        0x0001A2C2,
        0x0001A89C,
        0x0001AB30,
        0x0001AFAA,
        0x0001C5DE,
        0x0001CFA6,
        0x0001CFDA,
        0x0001D01A,
        0x0001D050,
        0x0001D080,
        0x0001D12C,
        0x0001D16C,
        0x0001F090,
    ],
}

# 'ultima_1000_02f4'
targets = {
    (0x1000, 0x02F4),
    (0x1000, 0x0350),
    (0x1000, 0x037D),
    (0x1000, 0x038C),
    (0x1000, 0x0402),
    (0x1000, 0x0426),
    (0x1000, 0x0476),
    (0x1000, 0x0532),
    (0x1000, 0x055D),
    (0x1000, 0x0586),
    (0x1000, 0x07A2),
    (0x1000, 0x07D6),
    (0x1000, 0x082A),
    (0x1000, 0x0892),
    (0x1000, 0x08CA),
    (0x1000, 0x08E6),
    (0x1000, 0x0935),
    (0x1000, 0x0991),
    (0x1000, 0x0A22),
    (0x1000, 0x0A70),
    (0x1000, 0x0AA6),
    (0x1000, 0x0ACE),
    (0x1000, 0x0B10),
    (0x1000, 0x0B2D),
    (0x1000, 0x0B86),
    (0x1000, 0x0BFC),
    (0x1000, 0x0C22),
    (0x1000, 0x0C3C),
    (0x1000, 0x0C64),
    (0x1000, 0x0C9C),
    (0x1000, 0x0CCD),
    (0x1000, 0x0CF2),
    (0x1000, 0x0D2B),
    (0x1000, 0x0D4C),
    (0x1000, 0x0D72),
    (0x1000, 0x0DE0),
    (0x1000, 0x0F6E),
    (0x1000, 0x0F90),
    (0x1000, 0x0FAE),
    (0x1000, 0x0FF4),
    (0x1000, 0x1044),
    (0x1000, 0x1068),
    (0x1000, 0x10E0),
    (0x1000, 0x1112),
    (0x1000, 0x1140),
    (0x1000, 0x1158),
    (0x1000, 0x1184),
    (0x1000, 0x11B4),
    (0x1000, 0x1226),
    (0x1000, 0x125D),
    (0x1000, 0x135A),
    (0x1000, 0x1588),
    (0x1000, 0x15C6),
    (0x1000, 0x160E),
    (0x1000, 0x1649),
    (0x1000, 0x1654),
    (0x1000, 0x1674),
    (0x1000, 0x16A6),
    (0x1000, 0x16BA),
    (0x1000, 0x17F4),
    (0x1000, 0x1850),
    (0x1000, 0x1A3E),
    (0x1000, 0x1B16),
    (0x1000, 0x1B24),
    (0x1000, 0x1B38),
    (0x1000, 0x1B94),
    (0x1000, 0x1BF2),
    (0x1000, 0x1C22),
    (0x1000, 0x1C5B),
    (0x1000, 0x1C9E),
    (0x1000, 0x1CCA),
    (0x1000, 0x1CEE),
    (0x1000, 0x1D02),
    (0x1000, 0x1D5E),
    (0x1000, 0x1DDA),
    (0x1000, 0x1E38),
    (0x1000, 0x1EAC),
    (0x1000, 0x1EF7),
    (0x1000, 0x1F12),
    (0x1000, 0x1F26),
    (0x1000, 0x1F4E),
    (0x1000, 0x1F77),
    (0x1000, 0x1FA0),
    (0x1000, 0x2032),
    (0x1000, 0x2056),
    (0x1000, 0x2092),
    (0x1000, 0x20C8),
    (0x1000, 0x20FA),
    (0x1000, 0x216C),
    (0x1000, 0x2192),
    (0x1000, 0x223C),
    (0x1000, 0x22C0),
    (0x1000, 0x22E2),
    (0x1000, 0x230E),
    (0x1000, 0x2322),
    (0x1000, 0x251E),
    (0x1000, 0x256E),
    (0x1000, 0x266C),
    (0x1000, 0x2726),
    (0x1000, 0x2884),
    (0x1000, 0x2900),
    (0x1000, 0x2A28),
    (0x1000, 0x2A52),
    (0x1000, 0x2AA8),
    (0x1000, 0x2AE8),
    (0x1000, 0x2BD4),
    (0x1000, 0x2C2E),
    (0x1000, 0x2C4C),
    (0x1000, 0x2D7A),
    (0x1000, 0x2E8E),
    (0x1000, 0x2E96),
    (0x1000, 0x2F62),
    (0x1000, 0x2FA6),
    (0x1000, 0x2FD0),
    (0x1000, 0x3072),
    (0x1000, 0x3178),
    (0x1000, 0x3522),
    (0x1000, 0x3564),
    (0x1000, 0x35EC),
    (0x1000, 0x368E),
    (0x1000, 0x3702),
    (0x1000, 0x3776),
    (0x1000, 0x3868),
    (0x1000, 0x38E4),
    (0x1000, 0x39CC),
    (0x1000, 0x39FC),
    (0x1000, 0x3A74),
    (0x1000, 0x3AAE),
    (0x1000, 0x3ABE),
    (0x1000, 0x3AE6),
    (0x1000, 0x3B1C),
    (0x1000, 0x3B9E),
    (0x1000, 0x3C9A),
    (0x1000, 0x3EF0),
    (0x1000, 0x3F14),
    (0x1000, 0x3F36),
    (0x1000, 0x3F54),
    (0x1000, 0x3F6E),
    (0x1000, 0x3FB4),
    (0x1000, 0x400C),
    (0x1000, 0x4080),
    (0x1000, 0x4102),
    (0x1000, 0x4368),
    (0x1000, 0x43AE),
    (0x1000, 0x4402),
    (0x1000, 0x44B8),
    (0x1000, 0x4552),
    (0x1000, 0x4702),
    (0x1000, 0x475A),
    (0x1000, 0x47F4),
    (0x1000, 0x48A8),
    (0x1000, 0x4988),
    (0x1000, 0x4A84),
    (0x1000, 0x4BE8),
    (0x1000, 0x4C2A),
    (0x1000, 0x4CCE),
    (0x1000, 0x4D76),
    (0x1000, 0x4DEA),
    (0x1000, 0x4E20),
    (0x1000, 0x4E50),
    (0x1000, 0x4F3C),
    (0x1000, 0x4F7C),
    (0x1000, 0x51A0),
    (0x1000, 0x51B8),
    (0x1000, 0x5394),
    (0x1000, 0x5646),
    (0x1000, 0x56AC),
    (0x1000, 0x5910),
    (0x1000, 0x5A28),
    (0x1000, 0x5D0A),
    (0x1000, 0x5DFE),
    (0x1000, 0x5E4A),
    (0x1000, 0x5F86),
    (0x1000, 0x60EC),
    (0x1000, 0x6150),
    (0x1000, 0x6360),
    (0x1000, 0x637E),
    (0x1000, 0x6506),
    (0x1000, 0x6794),
    (0x1000, 0x6800),
    (0x1000, 0x6880),
    (0x1000, 0x68AE),
    (0x1000, 0x6936),
    (0x1000, 0x6BC2),
    (0x1000, 0x6D82),
    (0x1000, 0x6DA8),
    (0x1000, 0x6E60),
    (0x1000, 0x6F1E),
    (0x1000, 0x6F90),
    (0x1000, 0x6FBC),
    (0x1000, 0x6FD6),
    (0x1000, 0x6FF0),
    (0x1000, 0x7040),
    (0x1000, 0x70A6),
    (0x1000, 0x71AA),
    (0x1000, 0x71CA),
    (0x1000, 0x7200),
    (0x1000, 0x7234),
    (0x1000, 0x7296),
    (0x172E, 0x0010),
    (0x172E, 0x0015),
    (0x172E, 0x001A),
    (0x172E, 0x0035),
    (0x172E, 0x007B),
    (0x172E, 0x009F),
    (0x172E, 0x00FA),
    (0x172E, 0x0123),
    (0x172E, 0x01C1),
    (0x172E, 0x0246),
    (0x172E, 0x0297),
    (0x172E, 0x02EC),
    (0x172E, 0x03B0),
    (0x172E, 0x03CC),
    (0x172E, 0x03D4),
}

# Apply the segmentation used in ULTIMA.EXE
def to_pair(addr):
    if addr >= 0x172E0:
        return (0x172E, addr - 0x172E0)
    else:
        return (0x1000, addr - 0x10000)

for file in external_calls:
    offset = offsets[file]
    for addr in external_calls[file]:
        pair = to_pair(addr - offset)
        # Debug print matches.
        # print("%s: %s -> %s:%s " % (file, hex(addr), hex(pair[0]), hex(pair[1])), end="")
        # if pair in targets:
        #     print("\x1b[1;32mmatch\x1b[0m")
        # else:
        #     print("\x1b[1;31mn/a\x1b[0m")
        if pair in targets:
            print("sed -i 's/\<func_0x%s\>/ultima_%s_%s/g' %s" % (
                hex(addr)[2:].zfill(8),
                hex(pair[0])[2:].zfill(4),
                hex(pair[1])[2:].zfill(4),
                file))
