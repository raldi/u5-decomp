#include "combat.h"

#define ARENA_WIDTH 0xb
#define ARENA_HEIGHT 0xb

// Addresses of the start of the monster table for some of its fields
#define MT_X  0x5c5c
#define MT_Y  0x5c5d
#define MT_ID 0x5c5a
#define MT_ANIM_FRAME 0x5c5b

#define PT_LEFT_HAND  0x55c3
#define PT_RIGHT_HAND 0x55c4

#define CAN_ESCAPE        0x58a3
#define CROSSHAIR_VISIBLE 0x5898

// Appears to be a bitmap
#define COMBAT_FLAG_2FC   0x58a2
#define COMBAT_FLAG_2E9   0x588f
#define COMBAT_FLAG_2EA   0x5890
#define ATTACKERS_WEAPON  0x589d
#define COMBAT_FLAG_2DC   0x5882

#define ACTIVE_EFFECT    0x587a
#define EFFECT_CROWN    28
#define EFFECT_IN_AN   'N'
#define EFFECT_AN_TYM  'T'
#define EFFECT_REL_RYM 'Q'
#define EFFECT_MASS_CHARM 'C'

#define WEAPON_DAMAGE_TABLE 0x15fc

// Ignoring animation frames and flavors (like the four different kinds of field),
// what kind of monster is this?
#define MKIND(id) (id & 0xfc)

#define CORPSE 0x1e
#define SPLAT 0x1f
#define ANY_FIELD 0xe8
#define POISON_FIELD 0xe8
#define ELECTRIC_FIELD 0xeb
#define SHADOWLORD 0xfc

#define CHAOS_SWORD 35
#define GLASS_SWORD 39
#define JEWELED_SWORD 40
#define BARE_HANDS 255

#define MONSTER_FLAGS 0x153c
#define MF_MAGIC_BOLTS   0x8000
#define MF_BARDLIKE      0x4000
#define MF_TELEPORT      0x2000
#define MF_VANISH        0x1000
#define MF_INVISIBLE     0x0800
#define MF_GATE_DAEMONS  0x0400
#define MF_MAYBE_POISON  0x0200
#define MF_GRUNGY        0x0100
#define MF_BLUDGEON      0x0080
#define MF_POSSESS       0x0040
#define MF_UNDEAD        0x0020
#define MF_DIVIDE        0x0010
#define MF_GLASS_IMMUNE  0x0008
#define MF_ALWAYS_POISON 0x0004
#define MF_STEAL_FOOD    0x0002
#define MF_NO_TRACE      0x0001

// This is called for each grid square of the combat arena. It draws whichever monsters
// are supposed to be there.
undefined2 draw_monsters_for_coords(uint arena_y, uint arena_x, undefined2 param_3)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 unaff_DS;
  byte *local_16;
  byte *local_14;
  byte *local_12;
  byte *cur_anim_frame_p;
  byte *monster_id_p;
  byte *monster_y_p;
  byte *monster_x_p;
  byte monster_id;
  
  // Ignore offscreen monsters
  if (arena_x < ARENA_WIDTH && arena_y < ARENA_HEIGHT && -1 < arena_x && -1 < arena_y) {
    puVar1 = get_sprite_at_coords(arena_y, arena_x, param_3);
    iVar2 = func_0x000089bc(*puVar1);
    if ((iVar2 == 0) || (pcVar3 = get_sprite_at_coords(arena_y, arena_x), *pcVar3 == -1)) {
      return 0;
    }
    monster_x_p = MT_X;
    monster_y_p = MT_Y;
    monster_id_p = MT_ID;
    cur_anim_frame_p = MT_ANIM_FRAME;
    local_12 = 0xba1a;
    local_14 = 0xba1b;
    local_16 = 0xba16;
    uVar4 = 0xba18;
    do {
      if ((*monster_x_p == arena_x) && (*monster_y_p == arena_y)) {
        // Found a monster that needs to be drawn at this location
        monster_id = *monster_id_p;
        if (monster_id == ELECTRIC_FIELD) {
          // Interestingly, this only checks for the blue electric field, not the other kinds.
          // Maybe used so that if you create an electric field on top of a monster, or some
          // other kind of field, it takes precedence?
          return 0;
        }

        // Animate animatable monsters        
        if (MKIND(monster_id) != ANY_FIELD
         && monster_id != CORPSE
         && monster_id != SPLAT &&
            monster_id != 0) {
          monster_id = *cur_anim_frame_p;

joined_r0x0000012b:
          if (monster_id != 0) {
            // End of monsters
            return 0;
          }
        }
      }
      else if ((*local_12 == arena_x) &&
              ((*local_14 == arena_y && (monster_id = *local_16, (monster_id & 0x24) == 0)))) {
        // No existing monster is at this location, but a new one needs to be spawned?
        goto joined_r0x0000012b;
      }

      // Advance all the pointers to the next monster
      monster_x_p = monster_x_p + 8;
      monster_y_p = monster_y_p + 8;
      monster_id_p = monster_id_p + 8;
      cur_anim_frame_p = cur_anim_frame_p + 8;
      local_12 = local_12 + 8;
      local_14 = local_14 + 8;
      local_16 = local_16 + 8;
      uVar4 = uVar4 + 8;
    } while (uVar4 < 0xbb18);
  }
  return 1;
}



undefined2 FUN_0000_014e(int param_1,int param_2,uint param_3)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_6;
  
  uVar2 = (uint)*(byte *)(param_3 * 8 + -0x45e9);
  uVar1 = *(undefined *)(uVar2 + 0x15cc);
  if (((uVar2 == 0x1a) || (iVar3 = func_0x00007e02(0xff,0), iVar3 < 0x80)) &&
     (((*MONSTER_FLAGS[uVar2 * 2] & MF_MAGIC_BOLTS) == 0 ||
      ((*ACTIVE_EFFECT != EFFECT_IN_AN && (*ACTIVE_EFFECT != EFFECT_CROWN)))))) {
    func_0x0000a11e(0x96,5,400,0x2ee);
    if (param_1 == 0) {
      local_6 = FUN_0000_14d6(0,-(uint)*COMBAT_FLAG_2E9 ,param_3,param_2);
    }
    else {
      local_6 = 0;
    }
    iVar3 = func_0x0000db46(uVar1,local_6,*(undefined *)(param_2 * 8 + -0x45e5),
                            *(undefined *)(param_2 * 8 + -0x45e6),param_3);
    if (-1 < iVar3) {
      func_0x000092d4(iVar3);
      func_0x0000742a(10);
      FUN_0000_194a(param_3,iVar3);
      func_0x0000db22(param_3,iVar3);
    }
    return 1;
  }
  return 0;
}



undefined2 FUN_0000_0226(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  uint local_c;
  
  local_c = 0;
  uVar1 = (uint)*(byte *)(param_1 * 8 + -0x45e9);
  uVar2 = (uint)*(byte *)(param_1 * 8 + -0x45e8);
  iVar3 = FUN_0000_0d30(param_1);
  if (-1 < iVar3) {
    if ((*(byte *)(param_1 * 8 + -0x45ea) & 1) == 0) {
      if ((((*(byte *)(iVar3 * 8 + -0x45ea) & 0x80) != 0) &&
          (*(char *)((uint)*(byte *)(iVar3 * 8 + -0x45e9) * 0x20 + 0x55c6) == '-')) &&
         ((*MONSTER_FLAGS[uVar1 * 2] & MF_MAGIC_BOLTS) != 0)) {
        iVar4 = func_0x00007e02(0xff,0);
        local_c = (uint)(iVar4 < 0x80);
      }
      uVar5 = func_0x0000db2e(iVar3,param_1);
      if (uVar5 <= *(byte *)(uVar1 + 0x159c)) {
        if (uVar1 == 0x1a) {
          *(undefined *)(uVar2 * 8 + 0x5c60) = 0x20;
        }
        iVar4 = func_0x0000db2e(iVar3,param_1);
        if (iVar4 == 1) {
          if (uVar1 == 0x2d) {
            *(undefined *)(uVar2 * 8 + 0x5c60) = 0x20;
          }
          func_0x0000a11e(0x96,5,400,0x2ee);
          *(undefined *)(iVar3 + 0x58a8) = (undefined)param_1;
          iVar4 = FUN_0000_14d6(0,-(uint)*COMBAT_FLAG_2E9 ,param_1,iVar3);
          if (iVar4 == 0) {
            return 1;
          }
          if ((((MONSTER_FLAGS[uVar1 * 2] & MF_STEAL_FOOD) != 0) &&
              (iVar4 = func_0x00007e02(3,0), iVar4 != 0)) && (*(int *)0x57a8 != 0)) {
            func_0x000075c0(0x6d74);
            func_0x0000db0a(param_1);
            func_0x000075c0(0x6d78);
            func_0x00009cc4(5,0x57a8);
            func_0x0000a11e(0x32,1,2000,800);
            func_0x00008670();
            return 1;
          }
          func_0x000092d4(iVar3);
          func_0x0000742a(10);
          FUN_0000_194a(param_1,iVar3);
          func_0x0000db22(param_1,iVar3);
          return 1;
        }
        uVar6 = FUN_0000_014e(local_c,iVar3,param_1);
        return uVar6;
      }
    }
    else {
      iVar4 = func_0x0000db2e(iVar3,param_1);
      if (iVar4 == 1) {
        *ATTACKERS_WEAPON = TWO_HANDED_SWORD;
        func_0x0000db5e(TWO_HANDED_SWORD, iVar3, param_1);
        return 1;
      }
    }
  }
  return 0;
}



void __cdecl16near FUN_0000_03f4(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar3 = (uint)*(byte *)0x589e * 8;
  *ATTACKERS_WEAPON = 0;
  bVar2 = *(byte *)(iVar3 + -0x45e8);
  if ((*ACTIVE_EFFECT != EFFECT_AN_TYM) &&
     (((*ACTIVE_EFFECT != EFFECT_REL_TYM || (iVar4 = func_0x00007e02(1,0), iVar4 != 0)) &&
      ((*(byte *)(iVar3 + -0x45ea) & 4) == 0)))) {
    if ((*(byte *)(iVar3 + -0x45ea) & 8) == 0) {
      if (*(char *)(iVar3 + -0x45e9) == '-') {
        *(undefined *)((uint)bVar2 * 8 + 0x5c60) = 0;
      }
      if ((*(byte *)(iVar3 + -0x45ea) & 2) == 0) {
        iVar4 = func_0x0000db16(*(undefined *)0x589e);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = FUN_0000_0226((uint)*(byte *)0x589e);
        if (iVar4 != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) && (iVar4 = func_0x00007e02(3,0), iVar4 == 3)
           ) {
          pcVar1 = (char *)(iVar3 + -0x45ec);
          *pcVar1 = *pcVar1 + '\x01';
        }
        FUN_0000_1a5c((uint)*(byte *)0x589e);
      }
      iVar4 = FUN_0000_0ee4((uint)*(byte *)0x589e);
      if (iVar4 == 0) {
        if ((*(byte *)(iVar3 + -0x45ea) & 2) != 0) {
          FUN_0000_0226((uint)*(byte *)0x589e);
        }
      }
      else {
        if ((*COMBAT_FLAG_2FC & 0x10) != 0) {
          func_0x0000742a(10);
          func_0x0000a11e(0x28,1,2000,0x4b0);
          func_0x0000db0a(*(undefined *)0x589e);
          func_0x000075c0(0x6d8c);
          FUN_0000_1236(-1 - (uint)*(byte *)0x589e);
          if (((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) && (*(char *)(iVar3 + -0x45e9) == '/')) {
            func_0x0000dbee();
          }
        }
        func_0x0000b680();
      }
    }
    else {
      iVar3 = func_0x00007e02(0x10,0);
      if (iVar3 == 0x10) {
        func_0x0000c570(*(undefined *)0x589e);
      }
    }
  }
  return;
}



undefined2 FUN_0000_0544(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x000075c0(param_2);
  if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) == 0) {
    func_0x000075c0(0x6d98);
    uVar1 = 1;
  }
  else {
    if (param_1 == 0) {
      func_0x0000db76();
    }
    else if (param_1 == 1) {
      func_0x0000db82();
    }
    else if (param_1 == 2) {
      func_0x0000db8e();
    }
    else if (param_1 == 3) {
      func_0x0000dbbe();
    }
    else if (param_1 == 4) {
      func_0x0000db9a();
    }
    else if (param_1 == 5) {
      func_0x0000dbb2();
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined2 FUN_0000_05b6(int param_1, int weapon)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *somethingHi;
  undefined2 unaff_DS;
  undefined2 *barHi;
  undefined2 *barLo;
  undefined2 *fooHi;
  undefined2 *fooLo;
  char *somethingLo;
  
  if ((weapon == BARE_HANDS) || (*(weapon + WEAPON_DAMAGE_TABLE) == 0)) {
    uVar1 = 0;
  }
  else {
    if (param_1 != 0) {
      somethingHi = (char *)0x6da0;
      uVar2 = 0xffff;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        somethingLo = somethingHi;
        somethingHi = somethingHi + 1;
      } while (*somethingLo != '\0');
      uVar2 = ~uVar2;
      barHi = (undefined2 *)(somethingHi + -uVar2);
      somethingHi = (char *)0xb21e;
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        somethingLo = somethingHi;
        somethingHi = somethingHi + 1;
      } while (*somethingLo != '\0');
      fooHi = (undefined2 *)(somethingHi + -1);
      for (uVar4 = uVar2 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        fooLo = fooHi;
        fooHi = fooHi + 1;
        barLo = barHi;
        barHi = barHi + 1;
        *fooLo = *barLo;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        fooLo = fooHi;
        fooHi = (undefined2 *)((int)fooHi + 1);
        barLo = barHi;
        barHi = (undefined2 *)((int)barHi + 1);
        *(undefined *)fooLo = *(undefined *)barLo;
      }
    }
    somethingHi = *(char **)(weapon * 2 + 0x17f6);
    uVar2 = 0xffff;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      somethingLo = somethingHi;
      somethingHi = somethingHi + 1;
    } while (*somethingLo != '\0');
    uVar2 = ~uVar2;
    barHi = (undefined2 *)(somethingHi + -uVar2);
    somethingHi = (char *)0xb21e;
    iVar3 = -1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      somethingLo = somethingHi;
      somethingHi = somethingHi + 1;
    } while (*somethingLo != '\0');
    fooHi = (undefined2 *)(somethingHi + -1);
    for (uVar4 = uVar2 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      fooLo = fooHi;
      fooHi = fooHi + 1;
      barLo = barHi;
      barHi = barHi + 1;
      *fooLo = *barLo;
    }
    for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
      fooLo = fooHi;
      fooHi = (undefined2 *)((int)fooHi + 1);
      barLo = barHi;
      barHi = (undefined2 *)((int)barHi + 1);
      *(undefined *)fooLo = *(undefined *)barLo;
    }
    uVar1 = 1;
  }
  return uVar1;
}



void __cdecl16near FUN_0000_063e(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  bool bVar5;
  uint pcNum;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 unaff_DS;
  undefined2 uVar15;
  int local_c;
  byte local_8;
  int local_4;
  
  iVar10 = (uint)*(byte *)0x589e * 8;
  *(undefined *)0x5896 = *(undefined *)(iVar10 + -0x45e6);
  *(undefined *)0x5897 = *(undefined *)(iVar10 + -0x45e5);
  pcNum = (uint)*(byte *)(iVar10 + -0x45e9);
  if ((*(char *)0x587b != -1) &&
     (((*(byte *)(iVar10 + -0x45ea) & 0x80) == 0 || (pcNum != *(byte *)0x587b)))) {
    func_0x0000da86();
    return;
  }
  if (((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) == 0) ||
     (*(pcNum * 0x20 + PT_LEFT_HAND) != CHAOS_SWORD
  && (*(pcNum * 0x20 + PT_LEFT_HAND) != CHAOS_SWORD))) {
    iVar10 = (uint)*(byte *)0x589e * 8;
    if ((*(byte *)(iVar10 + -0x45ea) & 0x80) != 0) {
      func_0x00008798(*(undefined *)(iVar10 + -0x45e9));
    }
    if (*(char *)0xa9fa != '\0') {
      func_0x00008670();
      *(undefined *)0xa9fa = 0;
    }
LAB_0000_06f1:
    func_0x0000742a(10);
    func_0x0000db0a(*(undefined *)0x589e);
    *(undefined *)0xb21e = 0;
    if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) != 0) {
      func_0x000075c0(0x6da4);
      iVar11 = pcNum * 0x20;
      iVar10 = FUN_0000_05b6(0,(uint)*(byte *)(iVar11 + 0x55c1));
      iVar6 = FUN_0000_05b6(iVar10,(uint)*(byte *)(iVar11 + 0x55c3));
      iVar11 = FUN_0000_05b6(iVar10 + iVar6,(uint)*(byte *)(iVar11 + 0x55c4));
      local_c = iVar10 + iVar6 + iVar11;
      if (local_c == 0) {
        pcVar12 = (char *)0x6db2;
        uVar8 = 0xffff;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar3 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar3 != '\0');
        uVar8 = ~uVar8;
        puVar13 = (undefined2 *)(pcVar12 + -uVar8);
        pcVar12 = (char *)0xb21e;
        iVar10 = -1;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar3 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar3 != '\0');
        puVar14 = (undefined2 *)(pcVar12 + -1);
        for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
          puVar4 = puVar14;
          puVar14 = puVar14 + 1;
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar4 = *puVar2;
        }
        for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
          puVar4 = puVar14;
          puVar14 = (undefined2 *)((int)puVar14 + 1);
          puVar2 = puVar13;
          puVar13 = (undefined2 *)((int)puVar13 + 1);
          *(undefined *)puVar4 = *(undefined *)puVar2;
        }
      }
    }
    pcVar12 = (char *)0x6dbe;
    uVar8 = 0xffff;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar3 != '\0');
    uVar8 = ~uVar8;
    puVar13 = (undefined2 *)(pcVar12 + -uVar8);
    pcVar12 = (char *)0xb21e;
    iVar10 = -1;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar3 != '\0');
    puVar14 = (undefined2 *)(pcVar12 + -1);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar4 = *puVar2;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = puVar14;
      puVar14 = (undefined2 *)((int)puVar14 + 1);
      puVar2 = puVar13;
      puVar13 = (undefined2 *)((int)puVar13 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar2;
    }
    func_0x000075c0(0xb21e);
    local_4 = 0;
    bVar5 = false;
LAB_0000_07ba:
    do {
      if (bVar5) goto LAB_0000_0b56;
      func_0x0000742a(10);
      func_0x0000a99a();
      if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 4) == 0) {
        if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 8) == 0) {
          uVar15 = 0x83b;
          local_8 = func_0x000083dc();
          bVar5 = true;
          local_4 = 0;
          uVar8 = (uint)local_8;
          if (uVar8 == 0x4a) {
            uVar15 = 0x6e1a;
            iVar10 = 1;
LAB_0000_0970:
            local_4 = FUN_0000_0544(iVar10,uVar15);
            goto LAB_0000_07ba;
          }
          if (uVar8 < 0x4b) {
            if (uVar8 == 0x41) {
              func_0x0000db6a(local_c,*(undefined *)0x589e);
              goto LAB_0000_07ba;
            }
            if (0x41 < uVar8) {
              if (uVar8 - 0x42 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00000ac9
                    // WARNING: Treating indirect jump as call
                (**(code **)((uVar8 - 0x42) * 2 + -0x52a2))();
                return;
              }
              goto LAB_0000_0ab7;
            }
            if (uVar8 == 0x1b) {
              local_4 = func_0x0000dafe();
              goto LAB_0000_07ba;
            }
            if (0x1b < uVar8) {
              if (uVar8 == 0x20) {
                func_0x000075c0(0x6e60,uVar15);
              }
              else if (uVar8 == 0x30) {
                *(undefined *)0x587b = 0xff;
                func_0x000075c0(0x6e66,uVar15);
                func_0x00008670();
              }
              else {
                if ((uVar8 < 0x31) || (0x36 < uVar8)) {
LAB_0000_0ab7:
                  uVar7 = 0x6ee6;
                  goto LAB_0000_08a9;
                }
                iVar10 = func_0x0000dab6(local_8 - 0x31);
                if (iVar10 == 0) goto LAB_0000_0a41;
              }
              goto LAB_0000_07ba;
            }
            if (uVar8 == 0) goto LAB_0000_0ab7;
            if (uVar8 < 5) {
              iVar10 = func_0x0000daaa(local_8,*(undefined *)0x589e);
              if (iVar10 != 0) goto LAB_0000_07ba;
            }
            else {
              if (uVar8 != 0x13) goto LAB_0000_0ab7;
              func_0x000075c0(0x6de4,uVar15);
              if (*(char *)0xa9ce == '\0') {
                uVar7 = 0x6df2;
              }
              else {
                uVar7 = 0x6dec;
              }
              func_0x000075c0(uVar7,uVar15);
              *(bool *)0xa9ce = *(char *)0xa9ce == '\0';
            }
          }
          else {
            if (uVar8 == 0x52) {
              uVar15 = 0x6e2e;
              iVar10 = 3;
              goto LAB_0000_0970;
            }
            if (uVar8 < 0x53) {
              if (uVar8 - 0x4b < 7) {
                    // WARNING: Could not emulate address calculation at 0x00000af3
                    // WARNING: Treating indirect jump as call
                (**(code **)((uVar8 - 0x4b) * 2 + -0x5278))();
                return;
              }
              goto LAB_0000_0ab7;
            }
            if (uVar8 == 0x56) {
              uVar7 = 0x6ed0;
              uVar15 = 2;
LAB_0000_0a33:
              local_4 = func_0x0000db3a(uVar15,uVar7);
              goto LAB_0000_07ba;
            }
            if (uVar8 < 0x57) {
              if (uVar8 == 0x53) {
                uVar15 = 0x6e3a;
                iVar10 = 4;
              }
              else {
                if (uVar8 == 0x54) {
                  uVar7 = 0x6eca;
                  uVar15 = 3;
                  goto LAB_0000_0a33;
                }
                if (uVar8 != 0x55) goto LAB_0000_0ab7;
                uVar15 = 0x6e42;
                iVar10 = 5;
              }
              goto LAB_0000_0970;
            }
            if (uVar8 == 0x57) {
              func_0x000075c0(0x6ed6,uVar15);
LAB_0000_0a41:
              local_4 = 1;
              goto LAB_0000_07ba;
            }
            if (uVar8 == 0x58) {
              uVar7 = 0x6ee0;
              uVar15 = 1;
              goto LAB_0000_0a33;
            }
            if (uVar8 == 0x59) {
              func_0x000075c0(0x6e4e,uVar15);
              func_0x0000dada();
              goto LAB_0000_07ba;
            }
            if (uVar8 == 0x5a) {
              func_0x000075c0(0x6e54,uVar15);
              func_0x0000dba6();
              goto LAB_0000_07ba;
            }
            if (uVar8 != 0xfc) goto LAB_0000_0ab7;
            func_0x000075c0(0x6dd2,uVar15);
            uVar8 = (uint)(*(int *)0x538c == 0);
            *(uint *)0x538c = uVar8;
            if (uVar8 == 0) {
              uVar7 = 0x6de0;
            }
            else {
              uVar7 = 0x6ddc;
            }
LAB_0000_08a9:
            func_0x000075c0(uVar7,uVar15);
          }
          bVar5 = false;
          goto LAB_0000_07ba;
        }
        iVar10 = func_0x00007e02(0xff,0);
        if (iVar10 < 0x10) {
          func_0x0000c570(*(undefined *)0x589e);
        }
        func_0x000075c0(0x6dc8);
      }
      else {
        func_0x000075c0(0x6dc0);
        func_0x00007fac(500,3000,0x28);
        FUN_0000_1c66((uint)*(byte *)0x589e);
      }
      bVar5 = true;
    } while( true );
  }
  pbVar1 = (byte *)((uint)*(byte *)0x589e * 8 + -0x45ea);
  *pbVar1 = *pbVar1 | 1;
  *(undefined *)0x587b = 0xff;
  *(undefined *)0xa9fa = 1;
  FUN_0000_03f4();
LAB_0000_0b79:
  if ((local_8 < 0x30) || (0x36 < local_8)) {
    func_0x0000da86();
    func_0x0000b680();
    func_0x0000dbd6();
  }
  return;
LAB_0000_0b56:
  if (local_4 == 0) goto LAB_0000_0b5f;
  goto LAB_0000_06f1;
LAB_0000_0b5f:
  iVar10 = (uint)*(byte *)0x589e * 8;
  if ((*(byte *)(iVar10 + -0x45ea) & 0x80) != 0) {
    func_0x00008798(*(undefined *)(iVar10 + -0x45e9));
  }
  goto LAB_0000_0b79;
}



undefined2 __cdecl16near FUN_0000_0b94(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  uint uVar6;
  undefined2 local_4;
  
  local_4 = 1;
  *(undefined *)0x58a0 = 0;
  func_0x0000b680();
  func_0x00008670();
  func_0x00007886();
  func_0x0000dbfa();
  if (*(int *)0x5876 == 0) {
    *CAN_ESCAPE = 1;
  }
  else {
    *CAN_ESCAPE = 0;
  }
  uVar6 = 0;
  do {
    *(undefined *)0x589e = 0;
    do {
      *(undefined *)0x594f = 0;
      iVar5 = (uint)*(byte *)0x589e * 8;
      bVar3 = *(byte *)(iVar5 + -0x45ea);
      if (((bVar3 & 0xc0) != 0) && ((bVar3 & 0x20) == 0)) {
        if (((bVar3 & 0x80) == 0) ||
           (*(char *)((uint)*(byte *)(iVar5 + -0x45e9) * 0x20 + 0x55b3) != 'D')) {
          if ((*(byte *)((uint)*(byte *)(iVar5 + -0x45e5) * 0x20 + (uint)*(byte *)(iVar5 + -0x45e6)
                        + -0x52ec) & 0xfe) != 0x84) {
            pcVar2 = (char *)(iVar5 + -0x45e7);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *(char *)(iVar5 + -0x45e7) = '$' - *(char *)(iVar5 + -0x45eb);
              *CROSSHAIR_VISIBLE = 0;
              *COMBAT_FLAG_2FC = 0;
              *COMBAT_FLAG_2E9 = 0;
              *COMBAT_FLAG_2EA = 0;
              *ATTACKERS_WEAPON = 0;
              pcVar2 = COMBAT_FLAG_2DC;
              *pcVar2 = *pcVar2 + '\x01';
              if (*COMBAT_FLAG_2DC == '\n') {
                *COMBAT_FLAG_2DC = 0;
                func_0x0000acec(1);
              }
              *(undefined *)0x589f = 1;
              iVar4 = func_0x0000b3b6(*(undefined *)0x589e);
              if (iVar4 == 0) {
                FUN_0000_063e();
              }
              else {
                FUN_0000_03f4();
              }
              uVar6 = (uint)*(byte *)0x589e;
              *(undefined *)(uVar6 + 0x58a8) = 0xff;
              FUN_0000_1b1e(uVar6);
              uVar6 = 0xca9;
              func_0x0000dbfa();
              if (*(int *)0x5878 == 0) {
                if (*(int *)0x5876 == 0) {
                  local_4 = 0;
                }
                else {
                  uVar6 = 0xccd;
                  iVar4 = func_0x0000dbee();
                  if (iVar4 != -1) goto LAB_0000_0d08;
                  func_0x0000b680();
                  if (*CAN_ESCAPE == 0) {
                    func_0x000075c0(0x6eee);
                    local_4 = 1;
                  }
                }
                uVar6 = 1;
                break;
              }
              if ((*(int *)0x5876 == 0) && (*CAN_ESCAPE == 0)) {
                func_0x000075c0(0x6f00);
                *CAN_ESCAPE = 1;
                uVar6 = 0xd05;
                func_0x0000a0d8();
                func_0x00007886();
              }
            }
          }
        }
        else {
          pbVar1 = (byte *)(iVar5 + -0x45ea);
          *pbVar1 = *pbVar1 | 0x20;
          func_0x000092d4(*(undefined *)0x589e);
          uVar6 = (uint)*(byte *)0x589e;
          FUN_0000_1574(99,uVar6);
        }
      }
LAB_0000_0d08:
      pcVar2 = (char *)0x589e;
      *pcVar2 = *pcVar2 + '\x01';
    } while (*(byte *)0x589e < 0x20);
    if (uVar6 != 0) {
      func_0x00007886(iVar5 + -0x45ec,bVar3);
      *(undefined *)0x2186 = 0xff;
      return local_4;
    }
  } while( true );
}



int FUN_0000_0d30(int param_1)

{
  byte *pbVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined2 unaff_DS;
  int local_1e;
  int local_16;
  uint local_12;
  int local_10;
  uint local_e;
  int local_8;
  int local_4;
  
  local_10 = -1;
  local_16 = -1;
  local_4 = 99;
  iVar4 = param_1 * 8;
  local_8 = func_0x0000b3b6(param_1);
  if (*ACTIVE_EFFECT == EFFECT_MASS_CHARM) {
    uVar5 = FUN_0000_13e2(-1,param_1);
    iVar6 = func_0x0000982e();
    if ((int)uVar5 < iVar6) {
      local_8 = 0;
    }
  }
  iVar6 = 0x1f;
  uVar2 = *(undefined *)(iVar4 + -0x45e5);
  uVar3 = *(undefined *)(iVar4 + -0x45e6);
  local_1e = -0x44f4;
  do {
    if (((((iVar6 != param_1) && (*(char *)(local_1e + 2) != '\0')) &&
         ((*(byte *)(local_1e + 2) & 0x20) == 0)) &&
        (iVar7 = func_0x0000b3b6(iVar6), local_8 != iVar7)) &&
       ((((*(char *)0x5894 == '(' || (*(char *)(iVar4 + -0x45e9) == '/')) ||
         ((*(byte *)(local_1e + 2) & 0x10) == 0)) && ((*(byte *)(local_1e + 2) & 4) == 0)))) {
      if (iVar6 < 5) {
        local_10 = local_10 + 1;
      }
      iVar7 = func_0x0000dc42(*(undefined *)(local_1e + 7),*(undefined *)(local_1e + 6),uVar2,uVar3)
      ;
      if (iVar7 < local_4) {
        local_e = (uint)*(byte *)(local_1e + 6);
        local_12 = (uint)*(byte *)(local_1e + 7);
        local_16 = iVar6;
        local_4 = iVar7;
      }
    }
    local_1e = local_1e + -8;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  if ((local_10 == -1) && (local_16 == -1)) {
    local_16 = func_0x0000dbee();
  }
  if (local_16 == -1) {
    pbVar8 = (byte *)0xbb0e;
    puVar9 = (undefined *)0xbb0c;
    do {
      if ((*pbVar8 & 0x40) != 0) {
        *puVar9 = 1;
        pbVar1 = pbVar8;
        *pbVar1 = *pbVar1 | 2;
      }
      pbVar8 = pbVar8 + -8;
      puVar9 = puVar9 + -8;
    } while ((undefined *)0xba3c < puVar9);
    local_e = 5;
    local_12 = 5;
  }
  *(undefined2 *)0x5878 = 0;
  *(undefined2 *)0x5876 = 0;
  if (local_e < *(byte *)(iVar4 + -0x45e6)) {
    *(undefined2 *)0x5876 = 0xffff;
  }
  if (*(byte *)(iVar4 + -0x45e6) < local_e) {
    *(undefined2 *)0x5876 = 1;
  }
  if (local_12 < *(byte *)(iVar4 + -0x45e5)) {
    *(undefined2 *)0x5878 = 0xffff;
  }
  if (*(byte *)(iVar4 + -0x45e5) < local_12) {
    *(undefined2 *)0x5878 = 1;
  }
  if ((*(byte *)(iVar4 + -0x45ea) & 2) != 0) {
    *(int *)0x5876 = -*(int *)0x5876;
    *(int *)0x5878 = -*(int *)0x5878;
  }
  if (local_16 == param_1) {
    local_16 = -1;
  }
  return local_16;
}



int FUN_0000_0ee4(int param_1)

{
  char *pcVar1;
  undefined uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  int local_8;
  uint local_6;
  
  local_8 = 0;
  local_6 = 0;
  iVar5 = param_1 * 8;
  if ((*(char *)(iVar5 + -0x45e9) != '\x1b') && (*(char *)(iVar5 + -0x45e9) != '\x1a')) {
    if ((((*(byte *)(iVar5 + -0x45ea) & 0x80) == 0) &&
        (((((*MONSTER_FLAGS[(iVar5 + -0x45e9) * 2] & MF_TELEPORT) != 0 &&
           (*ACTIVE_EFFECT != EFFECT_IN_AN)) && (*ACTIVE_EFFECT != EFFECT_CROWN)) &&
         ((iVar6 = func_0x0000dc1e(param_1), iVar6 != 0 || (iVar6 = func_0x0000981e(3), iVar6 != 3))
         )))) && (iVar6 = FUN_0000_120e(), iVar6 != 0)) {
      iVar7 = (uint)*(byte *)(iVar5 + -0x45e8) * 8;
      iVar6 = draw_monsters_for_coords
                        (*(uint *)0x5878,*(uint *)0x5876,(uint)*(byte *)(iVar7 + 0x5c5a));
      if (iVar6 != 0) {
        uVar2 = *(undefined *)0x5876;
        *(undefined *)(iVar5 + -0x45e6) = uVar2;
        *(undefined *)(iVar7 + 0x5c5c) = uVar2;
        uVar2 = *(undefined *)0x5878;
        *(undefined *)(iVar5 + -0x45e5) = uVar2;
        *(undefined *)(iVar7 + 0x5c5d) = uVar2;
        func_0x000075c0(*(undefined2 *)((uint)*(byte *)(iVar5 + -0x45e9) * 2 + 0x1856));
        func_0x000075c0(0x6f0c);
        local_8 = 1;
      }
    }
    if ((local_8 == 0) && (iVar6 = func_0x0000dc1e(param_1), iVar6 == 0)) {
      FUN_0000_0d30(param_1);
      iVar6 = func_0x0000981e(0xff);
      if ((iVar6 < 0x80) ||
         (iVar6 = func_0x0000dc12(param_1,*(undefined *)(iVar5 + -0x45e5),
                                  (uint)*(byte *)(iVar5 + -0x45e6) + *(int *)0x5876), iVar6 != 0)) {
        iVar6 = func_0x0000dc12(param_1,(uint)*(byte *)(iVar5 + -0x45e5) + *(int *)0x5878,
                                *(undefined *)(iVar5 + -0x45e6));
        if (iVar6 == 0) {
          *(undefined2 *)0x5876 = 0;
          local_6 = 0x3e6;
        }
      }
      else {
        *(undefined2 *)0x5878 = 0;
        local_6 = 999;
      }
      if (local_6 < 0x3de) {
        local_8 = 4;
        bVar3 = *(byte *)(iVar5 + -0x45e5);
        bVar4 = *(byte *)(iVar5 + -0x45e6);
        do {
          local_6 = func_0x0000981e(3);
          if (local_6 == 0) {
            *(undefined2 *)0x5878 = 1;
LAB_0000_106a:
            *(undefined2 *)0x5876 = 0;
          }
          else if (local_6 == 1) {
            *(undefined2 *)0x5876 = 1;
LAB_0000_109c:
            *(undefined2 *)0x5878 = 0;
          }
          else {
            if (local_6 == 2) {
              *(undefined2 *)0x5878 = 0xffff;
              goto LAB_0000_106a;
            }
            if (local_6 == 3) {
              *(undefined2 *)0x5876 = 0xffff;
              goto LAB_0000_109c;
            }
          }
          iVar6 = func_0x0000dc12(param_1,(uint)bVar3 + *(int *)0x5878,(uint)bVar4 + *(int *)0x5876)
          ;
          if (iVar6 == 0) {
            local_6 = 0x3df;
          }
          if (0x3de < (int)local_6) break;
          *(undefined2 *)0x5878 = 0;
          *(undefined2 *)0x5876 = 0;
          local_8 = local_8 + -1;
        } while (0 < local_8);
      }
      if (local_6 != 0) {
        iVar6 = (uint)*(byte *)(iVar5 + -0x45e8) * 8;
        pcVar1 = (char *)(iVar5 + -0x45e6);
        *pcVar1 = *pcVar1 + *(char *)0x5876;
        *(undefined *)(iVar6 + 0x5c5c) = *(undefined *)(iVar5 + -0x45e6);
        pcVar1 = (char *)(iVar5 + -0x45e5);
        *pcVar1 = *pcVar1 + *(char *)0x5878;
        *(undefined *)(iVar6 + 0x5c5d) = *(undefined *)(iVar5 + -0x45e5);
        local_8 = 1;
        iVar5 = func_0x0000caf2(*(undefined *)(iVar5 + -0x45e5),*(undefined *)(iVar5 + -0x45e6));
        if (iVar5 == 0) {
          *COMBAT_FLAG_2FC = 0x10;
        }
      }
    }
  }
  return local_8;
}



int FUN_0000_111a(uint param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  undefined *local_12;
  int local_10;
  byte *local_c;
  byte *local_a;
  byte *local_8;
  byte *local_6;
  
  local_10 = 0;
  if (((*(byte *)0x58a1 & 0x80) != 0) || ((*(byte *)0x58a1 & 2) != 0)) {
    pbVar2 = (byte *)0xae1f;
    pbVar3 = (byte *)0xae27;
    local_12 = (undefined *)0xad1f;
    local_6 = (byte *)0xae3f;
    local_a = (byte *)0xae47;
    local_8 = (byte *)0xae5f;
    local_c = (byte *)0xae67;
    iVar1 = 8;
    do {
      if ((*pbVar2 == param_2) && (*pbVar3 == param_1)) {
        *pbVar3 = 0xff;
        *pbVar2 = 0xff;
        if ((*local_6 < 0xb) && (*local_a < 0xb)) {
          *(undefined *)((uint)*local_a * 0x20 + (uint)*local_6 + -0x52ec) = *local_12;
        }
        if ((*local_8 < 0xb) && (*local_c < 0xb)) {
          *(undefined *)((uint)*local_c * 0x20 + (uint)*local_8 + -0x52ec) = *local_12;
        }
        local_10 = 1;
      }
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      local_12 = local_12 + 1;
      local_6 = local_6 + 1;
      local_a = local_a + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (local_10 != 0) {
      func_0x0000b680();
    }
  }
  return local_10;
}



undefined2 __cdecl16near FUN_0000_120e(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = func_0x0000981e(0xf);
  *(undefined2 *)0x5876 = uVar1;
  iVar2 = func_0x0000981e(0xf);
  *(int *)0x5878 = iVar2;
  if ((*(int *)0x5876 < 0xb) && (iVar2 < 0xb)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_0000_1236(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  uint local_6;
  
  if (param_1 < 0) {
    iVar1 = (-1 - param_1) * 8;
    local_6 = (uint)*(byte *)(iVar1 + -0x45e8);
    *(undefined *)(iVar1 + -0x45e8) = 0;
    *(undefined *)(iVar1 + -0x45eb) = 0;
    *(undefined *)(iVar1 + -0x45ec) = 0;
    *(undefined *)(iVar1 + -0x45e5) = 0;
    *(undefined *)(iVar1 + -0x45e6) = 0;
    *(undefined *)(iVar1 + -0x45e7) = 0;
    *(undefined *)(iVar1 + -0x45ea) = 0;
  }
  else {
    local_6 = param_1 - 1;
  }
  iVar1 = local_6 * 8;
  *(undefined *)(iVar1 + 0x5c5c) = 0;
  *(undefined *)(iVar1 + 0x5c5b) = 0;
  *(undefined *)(iVar1 + 0x5c5a) = 0;
  *(undefined *)(iVar1 + 0x5c5f) = 0;
  *(undefined *)(iVar1 + 0x5c5e) = 0;
  *(undefined *)(iVar1 + 0x5c5d) = 0;
  return;
}



uint FUN_0000_12b0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint weapon;
  int iVar4;
  undefined2 unaff_DS;
  uint damage;
  uint local_6;
  
  if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x40) == 0) {
    weapon = *ATTACKERS_WEAPON;
    if (weapon == GLASS_SWORD) {
      func_0x000075c0(0x6f1a);
      func_0x0000cbd0(GLASS_SWORD, param_2);
      damage = 99;
    }
    else if (weapon == JEWELED_SWORD) {
      damage = 0;
    }
    else if (weapon == BARE_HANDS) {
      damage = 1;
    }
    else {
      bVar1 = *(weapon + WEAPON_DAMAGE_TABLE);
      damage = bVar1;
      if ((1 < bVar1) && (damage != 99)) {
        damage = func_0x00007e02(damage,1);
      }
    }
  }
  else {
    damage = (uint)*(byte *)((uint)*(byte *)(param_2 * 8 + -0x45e9) * 8 + 0x13c0);
  }
  if (damage == 99) {
    local_6 = 99;
  }
  else {
    if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x40) == 0) {
      cVar2 = *(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55c0);
    }
    else {
      cVar2 = *(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 8 + 0x13bf);
    }
    local_6 = damage;
    if (cVar2 != '\0') {
      iVar4 = func_0x00007e02(cVar2,1);
      local_6 = damage - iVar4;
    }
  }
  return local_6;
}



undefined FUN_0000_139a(int param_1)

{
  undefined uVar1;
  undefined2 unaff_DS;
  
  if ((((*ACTIVE_EFFECT == EFFECT_AN_TYM) && ((*(byte *)(param_1 * 8 + -0x45ea) & 0x40) != 0)) ||
      (*(char *)(param_1 * 8 + -0x45e9) == '\x1a')) || ((*(byte *)(param_1 * 8 + -0x45ea) & 8) != 0)
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined *)(param_1 * 8 + -0x45eb);
  }
  return uVar1;
}



uint FUN_0000_13e2(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  uint local_6;
  
  iVar2 = param_2 * 8;
  if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
    if (param_1 < 1) goto LAB_0000_142d;
    if (*(char *)(param_1 + 0x169c) != '\b') goto LAB_0000_1428;
  }
  else {
    if (param_1 != 0) goto LAB_0000_142d;
    if ((MONSTER_FLAGS[(iVar2 + -0x45e9) * 2]) & MF_BLUDGEON) == 0) {
LAB_0000_1428:
      param_1 = -2;
      goto LAB_0000_142d;
    }
  }
  param_1 = -3;
LAB_0000_142d:
  if (param_1 == -4) {
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      uVar3 = func_0x0000cb18(*(undefined *)(iVar2 + -0x45e9));
      return uVar3;
    }
    bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13bf);
  }
  else if (param_1 == -3) {
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b4);
    }
    else {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13bc);
    }
  }
  else {
    if (param_1 == -2) {
      uVar3 = FUN_0000_139a(param_2);
      return uVar3;
    }
    if (param_1 != -1) {
      return local_6;
    }
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b6);
    }
    else {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13be);
    }
  }
  return (uint)bVar1;
}



int FUN_0000_14d6(int param_1,undefined2 param_2_00,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_a;
  int local_8;
  int local_6;
  
  local_a = -1;
  local_6 = 0;
  if (*COMBAT_FLAG_2E9 == '\0') {
    if (((param_1 != 0x27) && (param_1 != 0x23)) && (param_1 != 0x28)) {
      local_8 = -2;
      local_a = param_1;
      goto LAB_0000_152f;
    }
  }
  else if (((param_1 < 0x2a) || (0x31 < param_1)) && (param_1 != 0x33)) {
    local_a = -1;
    local_8 = -1;
    goto LAB_0000_152f;
  }
  local_6 = 1;
LAB_0000_152f:
  if (local_6 == 0) {
    uVar1 = FUN_0000_13e2(local_8,param_4);
    uVar2 = FUN_0000_13e2(local_a,param_3);
    iVar3 = func_0x0000982e();
    if ((int)((uVar1 - uVar2) + 0x1e) / 2 <= iVar3) {
      local_6 = 1;
    }
  }
  return local_6;
}



char FUN_0000_1574(uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined2 unaff_DS;
  int local_c;
  
  cVar5 = '\0';
  iVar6 = param_2 * 8;
  pbVar7 = (byte *)(iVar6 + -0x45ec);
  if ((int)param_1 < 1) {
    *COMBAT_FLAG_2FC = 0x20;
    param_1 = 0;
  }
  if ((*(byte *)(iVar6 + -0x45ea) & 0x80) == 0) {
    if ((MONSTER_FLAGS[(iVar6 + -0x45e9) * 2] & MF_UNDEAD) != 0) &&
       (*COMBAT_FLAG_2EA == 0)) {
      param_1 = (int)param_1 / 2;
    }
    if (MONSTER_FLAGS[(iVar6 + -0x45e9) * 2] & MF_GLASS_IMMUNE) != 0) {
      param_1 = 0;
    }
    if (*pbVar7 < param_1) {
      *pbVar7 = 0;
    }
    else {
      pbVar2 = pbVar7;
      *pbVar2 = *pbVar2 - (char)param_1;
    }
    if ((*pbVar7 == 0) || (param_1 == 99)) {
      uVar11 = (uint)*(byte *)(iVar6 + -0x45e9);
      iVar13 = uVar11 * 8;
      cVar5 = (*(byte *)(iVar13 + 0x13c1) >> 2) + 1;
      bVar3 = *(byte *)(iVar13 + 0x13c3);
      *(undefined *)(iVar6 + -0x45ea) = 0x20;
      *pbVar7 = 0;
      uVar8 = (uint)*(byte *)(iVar6 + -0x45e6);
      uVar9 = (uint)*(byte *)(iVar6 + -0x45e5);
      bVar4 = *(byte *)(uVar9 * 0x20 + uVar8 + -0x52ec);
      if (MONSTER_FLAGS[uVar11 * 2] & (MF_VANISH|MF_NO_TRACE) == 0) {
        if (*(char *)(iVar6 + -0x45e9) == '\x1c') {
          iVar6 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
          *(undefined *)(iVar6 + 0x5c5b) = 0x1f;
          *(undefined *)(iVar6 + 0x5c5a) = 0x1f;
          func_0x0000c276(*(undefined *)0x5895,uVar9,uVar8,0,0x1f);
          func_0x0000b680();
          return cVar5;
        }
        if (*(char *)(iVar6 + -0x45e9) == '\x1e') {
          puVar10 = (undefined *)get_sprite_at_coords(uVar9,uVar8);
          *puVar10 = 0x4c;
        }
        else if ((bVar4 != 0x87) && (3 < bVar4)) {
          iVar13 = func_0x0000982e();
          if ((int)(uint)bVar3 < iVar13) {
            iVar6 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
            *(undefined *)(iVar6 + 0x5c5b) = 0x1f;
            *(undefined *)(iVar6 + 0x5c5a) = 0x1f;
            return cVar5;
          }
          iVar13 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
          *(undefined *)(iVar13 + 0x5c5b) = 1;
          *(undefined *)(iVar13 + 0x5c5a) = 1;
          *(byte *)(iVar13 + 0x5c5f) = bVar3;
          iVar6 = func_0x0000982e();
          if ((int)(uint)bVar3 <= iVar6) {
            return cVar5;
          }
          pbVar2 = (byte *)(iVar13 + 0x5c5f);
          *pbVar2 = *pbVar2 | 0x80;
          return cVar5;
        }
        iVar6 = -1 - param_2;
      }
      else {
        iVar13 = (uint)*(byte *)(iVar6 + -0x45e9) * 2;
        if (MONSTER_FLAGS[iVar13] & MF_VANISH) != 0) {
          func_0x000075c0(*(undefined2 *)(iVar13 + 0x1856));
          func_0x000075c0(0x6f36);
          *COMBAT_FLAG_2FC = 2;
          iVar13 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
          *(undefined *)(iVar13 + 0x5c5b) = 0x16;
          *(undefined *)(iVar13 + 0x5c5a) = 0x16;
          uVar11 = (uint)*(byte *)(iVar6 + -0x45e6);
          uVar8 = (uint)*(byte *)(iVar6 + -0x45e5);
          func_0x00006dd8(uVar8,uVar11,*(undefined *)(uVar8 * 0x20 + uVar11 + -0x52ec));
          FUN_0000_1236(-(param_2 + 1));
          func_0x0000dbee();
          return cVar5;
        }
        iVar6 = -(param_2 + 1);
      }
      FUN_0000_1236(iVar6);
    }
    else if (MONSTER_FLAGS[(iVar6 + -0x45e9) * 2] & MF_DIVIDE) != 0) {
      local_c = 0;
      do {
        func_0x0000dc4e(*(undefined *)(iVar6 + -0x45e5),*(undefined *)(iVar6 + -0x45e6));
        uVar11 = *(uint *)0x5876;
        uVar8 = *(uint *)0x5878;
        iVar13 = draw_monsters_for_coords
                           (uVar8,uVar11,
                            (uint)*(byte *)((uint)*(byte *)(iVar6 + -0x45e8) * 8 + 0x5c5a));
        if ((iVar13 != 0) &&
           (iVar13 = func_0x0000c276(*(undefined *)0x5895,uVar8,uVar11,0,
                                     *(byte *)((uint)*(byte *)(iVar6 + -0x45e8) * 8 + 0x5c5a) - 0x40
                                     >> 2), -1 < iVar13)) {
          *(byte *)(iVar13 * 8 + -0x45ec) = *pbVar7;
          func_0x000075c0(*(undefined2 *)((uint)*(byte *)(iVar6 + -0x45e9) * 2 + 0x1856));
          func_0x000075c0(0x6f42);
          return '\0';
        }
        local_c = local_c + 1;
      } while (local_c < 8);
    }
  }
  else {
    piVar12 = (int *)((uint)*(byte *)(iVar6 + -0x45e9) * 0x20 + 0x55b8);
    piVar1 = piVar12;
    *piVar1 = *piVar1 - param_1;
    if ((*piVar12 < 1) || (param_1 == 99)) {
      iVar13 = (uint)*(byte *)(iVar6 + -0x45e9) * 0x20;
      *(undefined2 *)(iVar13 + 0x55b8) = 0;
      pbVar2 = (byte *)(iVar6 + -0x45ea);
      *pbVar2 = *pbVar2 | 0x20;
      *(undefined *)(iVar13 + 0x55b3) = 0x44;
      iVar13 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
      *(undefined *)(iVar13 + 0x5c5b) = 0x1e;
      *(undefined *)(iVar13 + 0x5c5a) = 0x1e;
      if (*(char *)(iVar6 + -0x45e9) == *(char *)0x587b) {
        *(undefined *)0x587b = 0xff;
      }
    }
    func_0x00008670();
  }
  return cVar5;
}



void FUN_0000_18ba(uint param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) == 0) ||
     (iVar3 = (uint)*(byte *)(param_2 * 8 + -0x45e9) * 0x20, *(char *)(iVar3 + 0x55b3) != 'G')) {
    uVar2 = func_0x0000981e(0x14);
    cVar1 = FUN_0000_1574(uVar2,param_2);
    if ((param_1 < 0x8000) && ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) != 0)) {
      func_0x00009c84(9999,cVar1,(uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55bc);
    }
  }
  else {
    *(undefined *)(iVar3 + 0x55b3) = 0x50;
    func_0x000075c0(iVar3 + 0x55a8);
    func_0x000075c0(0x6f4e);
    *COMBAT_FLAG_2FC = 8;
    *(undefined *)0xa9fa = 1;
  }
  return;
}



void FUN_0000_194a(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  
  bVar5 = (*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0;
  if (((!bVar5) || MONSTER_FLAGS[(param_1 * 8 + -0x45e9) * 2] & (MF_MAYBE_POISON|MF_ALWAYS_POISON)) == 0))
     || (iVar3 = func_0x00007e02(3,0), iVar3 == 0)) {
    bVar1 = false;
    if (((bVar5) && (*(char *)(param_1 * 8 + -0x45e9) == '\x1c')) &&
       ((*(byte *)(param_2 * 8 + -0x45ea) & 8) == 0)) {
      func_0x0000c61e(param_2);
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
    if ((*COMBAT_FLAG_2EA != 0) && (*ATTACKERS_WEAPON == '4')) {
      func_0x0000c61e(param_2);
      return;
    }
    if ((*COMBAT_FLAG_2EA == 0) || (*ATTACKERS_WEAPON != '3')) {
      uVar4 = FUN_0000_12b0(param_2,param_1);
      if (((int)uVar4 < 0) && ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) != 0)) {
        *COMBAT_FLAG_2FC = 0x20;
        return;
      }
      cVar2 = FUN_0000_1574(uVar4,param_2);
      if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) {
        return;
      }
      func_0x00009c84(9999,cVar2,(uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55bc);
      return;
    }
  }
  FUN_0000_18ba(param_1,param_2);
  return;
}



byte * FUN_0000_1a5c(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_DS;
  byte *local_6;
  
  bVar2 = false;
  iVar3 = param_1 * 8;
  pbVar4 = (byte *)(iVar3 + -0x45ec);
  if ((*(byte *)(iVar3 + -0x45ea) & 0x80) != 0) {
    return pbVar4;
  }
  uVar5 = (uint)(*(byte *)((uint)*(byte *)(iVar3 + -0x45e9) * 8 + 0x13c1) >> 2);
  if (*pbVar4 < uVar5) {
    local_6 = (byte *)((int)draw_monsters_for_coords + 1);
  }
  else {
    uVar5 = uVar5 << 1;
    if (uVar5 <= *pbVar4) {
      if ((uint)*pbVar4 < (uVar5 / 2) * 3) {
        local_6 = (byte *)0x3;
      }
      else {
        local_6 = (byte *)0x4;
      }
      goto LAB_0000_1aff;
    }
    local_6 = (byte *)0x2;
    iVar6 = func_0x0000981e(0x100);
    if (iVar6 < 0xfc) goto LAB_0000_1aff;
  }
  bVar2 = true;
LAB_0000_1aff:
  if (bVar2) {
    pbVar1 = (byte *)(iVar3 + -0x45ea);
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    pbVar1 = (byte *)(iVar3 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return local_6;
}



void FUN_0000_1b1e(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  char *local_16;
  char *local_14;
  char *local_12;
  int local_a;
  
  local_a = 0;
  iVar2 = param_1 * 8;
  cVar1 = *(char *)((uint)*(byte *)(iVar2 + -0x45e6) + (*(uint *)(iVar2 + -0x45e5) & 0xff) * 0x20 +
                   -0x52ec);
  if ((cVar1 == -0x71) || (cVar1 == -0x44)) {
    local_a = 100;
  }
  if (cVar1 == '\x04') {
    local_a = 0x32;
  }
  if (local_a == 0) {
    uVar3 = 0;
    pcVar4 = (char *)0x5c5c;
    pcVar5 = (char *)0x5c5d;
    local_12 = (char *)0x5c5a;
    local_14 = (char *)0x5c5a;
    local_16 = (char *)0x5c5a;
    do {
      if (((uVar3 != *(byte *)(iVar2 + -0x45e8)) && (*(char *)(iVar2 + -0x45e6) == *pcVar4)) &&
         (*(char *)(iVar2 + -0x45e5) == *pcVar5)) {
        if (*local_12 == -0x16) {
          local_a = 100;
        }
        if (*local_14 == -0x18) {
          local_a = 0x32;
        }
        if (*local_16 == -0x17) {
          local_a = 0x96;
        }
        if (local_a != 0) break;
      }
      pcVar4 = pcVar4 + 8;
      pcVar5 = pcVar5 + 8;
      local_12 = local_12 + 8;
      local_14 = local_14 + 8;
      local_16 = local_16 + 8;
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x20);
  }
  if (local_a == 0x32) {
    if (*(byte *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c5a) < 0x80) {
      FUN_0000_18ba(0xffff,param_1);
      func_0x000092d4(param_1);
    }
  }
  else if (local_a == 100) {
    func_0x000092d4(param_1);
    iVar2 = param_1;
    uVar3 = func_0x0000981e(10);
    FUN_0000_1574(uVar3,iVar2);
    func_0x0000db22(0xff,param_1);
    *(undefined *)0xa9fa = 1;
  }
  else if (local_a == 0x96) {
    func_0x0000c61e(param_1);
  }
  return;
}



void FUN_0000_1c66(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = param_1 * 8;
  uVar2 = func_0x0000982e();
  if (uVar2 < *(byte *)(iVar3 + -0x45eb)) {
    if ((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) {
      iVar3 = *(int *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 2 + 0x1856);
    }
    else {
      iVar3 = (uint)*(byte *)(iVar3 + -0x45e9) * 0x20 + 0x55a8;
    }
    func_0x000075c0(iVar3);
    func_0x000075c0(0x6f5e);
    func_0x00007fac(600,7000,1);
    pbVar1 = (byte *)(param_1 * 8 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xfb;
    iVar3 = (uint)*(byte *)(param_1 * 8 + -0x45e8) * 8;
    *(undefined *)(iVar3 + 0x5c5b) = *(undefined *)(iVar3 + 0x5c5a);
  }
  return;
}


