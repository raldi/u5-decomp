#pragma once

#include <stdint.h>

typedef uint8_t bool;

// Gamestate/savefile struct.

typedef enum {
    Male = 0xb,   // '♂'
    Female = 0xc, // '♀'
} Gender;

typedef enum {
    Avatar = 'A',
    Bard = 'B',
    Fighter = 'F',
    Mage = 'M',
} Class;

// game.pc
typedef struct {
    // 0x0000  0x55a8
    char name[9];
    // 0x0009  0x55b1
    Gender gender;
    // 0x000a  0x55b2
    Class class;
    // TODO: These are the 'G', 'P' initials for statuses, what's the whole set?
    // 0x000b  0x55b3
    char status;
    // 0x000c  0x55b4
    uint8_t str;
    // 0x000d  0x55b5
    uint8_t dex;
    // 0x000e  0x55b6
    uint8_t intl;
    // 0x000f  0x55b7
    uint8_t mp;
    // 0x0010  0x55b8
    uint16_t hp;
    // 0x0012  0x55ba
    uint16_t max_hp;
    // 0x0014  0x55bc
    uint16_t xp;
    // 0x0016  0x55be
    uint8_t level;
    // 0x0017  0x55bf
    uint8_t months_at_inn;
    // 0x0018  0x55c0
    uint8_t unknown;
    // 0x0019  0x55c1
    uint8_t helmet;
    // 0x001a  0x55c2
    uint8_t armor;
    // 0x001b  0x55c3
    uint8_t left_hand;
    // 0x001c  0x55c4
    uint8_t right_hand;
    // 0x001d  0x55c5
    uint8_t ring;
    // 0x001e  0x55c6
    uint8_t amulet;
    // 0x001f  0x55c7
    uint8_t is_recruited;
} Hero;

// game.creatures
typedef struct {
    // 0x0000  0x5c5a
    uint8_t base_tile;
    // 0x0001  0x5c5b
    uint8_t current_frame_tile;
    // 0x0002  0x5c5c
    uint8_t x;
    // 0x0003  0x5c5d
    uint8_t y;
    // 0x0004  0x5c5e
    uint8_t z;
    // TODO: Figure out what these are
    // 0x0005  0x5c5f
    uint8_t value_1;
    // 0x0006  0x5c60
    uint8_t value_2;
    // 0x0007  0x5c61
    uint8_t value_3;
} Creature;

// XXX: How's this different from Creature?
// Are these used in town instead of combat?

// game.sprites
typedef struct {
    // 0x0000  0x5f5e
    uint16_t unknown00;
    // 0x0002  0x5f60
    uint16_t x;
    // 0x0004  0x5f62
    uint16_t y;
    // 0x0006  0x5f64
    uint16_t z;
    // 0x0008  0x5f66
    uint16_t tile;
    // 0x000a  0x5f68
    uint16_t unknown01;
    // 0x000c  0x5f6a
    uint16_t anim_state;
    // 0x000e  0x5f6c
    uint16_t is_active;
} Sprite;

// game
typedef struct {
    uint16_t unknown00;
    // 0x0002  0x55a8
    Hero pc[16];
    // 0x0202  0x57a8
    uint16_t food;
    // 0x0204  0x57aa
    uint16_t gold;
    // 0x0206  0x57ac
    uint8_t keys;
    // 0x0207  0x57ad
    uint8_t gems;
    // 0x0208  0x57ae
    uint8_t torches;
    // 0x0209  0x57af
    bool grapple;
    // 0x020a  0x57b0
    uint8_t magic_carpets;
    // 0x020b  0x57b1
    uint8_t skull_keys;
    // 0x020c  0x57b2
    uint8_t unknown01;
    // 0x020d  0x57b3
    bool amulet;
    // 0x020e  0x57b4
    bool crown;
    // 0x020f  0x57b5
    bool sceptre;
    // 0x0210  0x57b6
    // Falsehood, Hatred, Cowardice
    bool shards[3];
    // 0x0213  0x57b9
    uint8_t unknown02;
    // 0x0214  0x57ba
    uint8_t spyglasses;
    // 0x0215  0x57bb
    bool hms_cape_plan;
    // 0x0216  0x57bc
    uint8_t sextants;
    // 0x0217  0x57bd
    bool watch;
    // 0x0218  0x57be
    bool black_badge;
    // 0x0219  0x57bf
    bool sandalwood_box;
    // 0x021a  0x57c0
    uint8_t equipment[48];
    // 0x024a  0x57f0
    uint8_t spells[48];
    // 0x027a  0x5820
    uint8_t scrolls[8];
    // 0x282   0x5828
    uint8_t potions[8];
    // 0x028a  0x5830
    uint8_t moonstone_x[8];
    // 0x0292  0x5838
    uint8_t moonstone_y[8];
    // 0x02a2  0x5848
    // 0x00=Britannia, 0xff=Underworld
    bool moonstone_z[8];
    // 0x02aa  0x5850
    bool reagents[8];
    // 0x02b2  0x5858
    uint8_t reagent_harvested_day[3];
    // 0x02b5  0x585b
    uint8_t party_headcount;
    // 0x02b6  0x585c
    // Set bits to 1 when object is taken.
    uint8_t object_taken_flags[15];

    uint8_t unknown03[9];

    // 0x02ce  0x5874
    uint16_t year;
    // 0x02d0  0x5876
    // Active monsters and charmed PCs
    int16_t num_enemies;
    // 0x02d2  0x5878
    // Active PCs and charmed monsters
    int16_t num_allies;
    // 0x02d4  0x587a
    uint8_t ui_icon;
    // 0x02d5  0x587b
    uint8_t active_pc;
    // 0x02d6  0x587c
    uint8_t current_vehicle;
    // 0x02d7  0x587d
    uint8_t month;
    // 0x02d8  0x587e
    uint8_t day;
    // 0x02d9  0x587f
    uint8_t hour;
    // 0x02da  0x5880
    uint8_t unknown04;
    // 0x02db  0x5881
    uint8_t minute;
    // 0x02dc  0x5882
    uint8_t unknown05[3];
    // 0x02df  0x5885
    uint8_t moon_phase[2];
    // 0x02e1  0x5887
    uint8_t moongate_height;
    // 0x02e2  0x5888
    uint8_t karma;
    // 0x02e3  0x5889
    uint8_t unknown06[2];
    // 0x02e5  0x588b
    uint8_t turns_since_start;
    // 0x02e6  0x588c
    uint8_t hours_until_camping_heals;
    // 0x02e7  0x588d
    uint8_t unknown07;
    // 0x02e8  0x588e
    uint8_t prot_spell_duration;
    // 0x02e9  0x588f
    uint8_t unknown08;
    uint8_t unknown082;
    // 0x02eb  0x5891
    uint8_t animate_tiles_next_frame;
    // 0x02ec  0x5892
    // 0=calm 1=N 2=S 3=E 4=W
    uint8_t wind_direction;
    // 0x02ed  0x5893
    uint8_t party_location;
    // 0x02ee  0x5894
    uint8_t party_location_backup;
    // 0x02ef  0x5895
    uint8_t party_z;
    // 0x02f0  0x5896
    uint8_t party_x;
    // 0x02f1  0x5897
    uint8_t party_y;
    // 0x02f2  0x5898
    uint8_t crosshair_visible;
    // 0x02f3  0x5899
    uint8_t crosshair_x;
    // 0x02f4  0x589a
    uint8_t crosshair_y;
    // 0x02f5  0x589b
    uint8_t overworld_chunk_x;
    // 0x02f6  0x589c
    uint8_t overworld_chunk_y;
    // 0x02f7  0x589d
    uint8_t attacker_weapon;
    // 0x02f8  0x589e
    uint8_t unknown09;
    // 0x02f9  0x589f
    uint8_t focus_rectangle_visible;
    // 0x02fa  0x58a0
    // 0=none 1=W 2=E 3=N 4=S 5=U 6=D
    uint8_t combat_exit_dir;
    // 0x02fb  0x58a1
    uint8_t combat_type_flags;
    // 0x02fc  0x58a2
    uint8_t unknown10;
    // 0x02fd  0x58a3
    uint8_t all_enemies_cleared;
    // 0x02fe  0x58a4
    // Set to 1 when entering or leaving city.
    uint8_t update_2d_map;
    // 0x02ff  0x58a5
    uint8_t light_intesity;
    // 0x0300  0x58a6
    uint8_t spell_duration_turns;
    // 0x0301  0x58a7
    uint8_t torch_duration_turns;
    // 0x0302  0x58a8
    uint8_t monster_interferes[20];
    // 0x0322  0x58c8
    // Falsehood, Hatred, Cowardice
    uint8_t shadowlord_locations[3];
    // 0x0325  0x58cb
    uint8_t unknown11;
    // 0x0326  0x58cc
    // bitset
    uint8_t shrine_quest_given;
    // 0x0327  0x58cd
    uint8_t unknown12;
    // 0x0328  0x58ce
    // bitset
    uint8_t shrine_quest_completed;
    // 0x0329  0x58cf
    uint8_t unknown13;
    // 0x032a  0x58d0
    uint8_t dungeon_unsealed[8];
    // 0x0332  0x58d8
    uint8_t shrine_destroyed[8];
    // 0x033a  0x58e0
    // 16-bit bitsets for 8 dungeons
    uint16_t dungeon_room_cleared[7];
    // 0x0348  0x58ee
    // Drawbridge states etc.
    uint8_t annotations_x[32];
    // 0x0368  0x590e
    uint8_t annotations_y[32];
    // 0x0388  0x592e
    uint8_t annotation_tiles[32];
    // 0x03a8  0x594e
    uint8_t annotation_count;
    // 0x03a9  0x594f
    uint8_t opened_door_tile;
    // 0x03aa  0x5950
    uint8_t open_door_x;
    // 0x03ab  0x5951
    uint8_t open_door_y;
    // 0x03ac  0x5952
    uint8_t door_open_counter;
    // 0x03ad  0x5953
    uint8_t ship_x;
    // 0x03ae  0x5954
    uint8_t ship_y;
    // 0x03af  0x5955
    // 0=none 1=W 2=E 3=N 4=S
    uint8_t ship_sailing_dir;
    // 0x03b0  0x5956
    uint8_t show_prompt_at_turn_end;
    // 0x03b1  0x5957
    uint8_t drunk_counter;
    // 0x03b2  0x5958
    uint8_t unknown14[2];
    // 0x03b4  0x595a
    uint8_t current_dungeon_map[512];
    // 0x05b4  0x5b5a
    // bitmask per settlement
    uint32_t npc_killed[32];
    // 0x0634  0x5bda
    // bitmask per settlement
    uint32_t npc_met[32];
    // 0x06b4  0x5c5a
    Creature creatures[32];
    // 0x07b4  0x5d5a
    uint8_t unknown15[4];
    // 0x07b8  0x5d5e
    uint8_t npc_schedules[512];
    // 0x09b8  0x5f5e
    Sprite sprites[32];
    // 0x0bb8  0x615e
    uint8_t movement_list[1024];
    // 0x0fb8  0x655e
    uint8_t movement_ptr[64];
    // 0x0ff8  0x659e
    uint8_t npc_sprites[32];
    // 0x1018  0x65be
    uint8_t unknown16[68];
    // 0x105c  0x6602
    uint8_t unknown17;
    // 0x105d  0x6603
    // 0=north 1=east 2=south 3=west
    uint8_t dungeon_facing;
    // 0x105e  0x6604
    // 1=cave 2=mine 3=dungeon
    uint8_t dungeon_type;
    // 0x105f  0x6605
    uint8_t ship_state;
    // 0x1060  0x6606
    uint8_t unknown18[2];
    // 0x1062  0x6608
    uint8_t town_map[32][32];
} Gamestate;

// Global gamestate variable.
// Rewrite references to gamestate addresses to access game.

extern Gamestate game;
