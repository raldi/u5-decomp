/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/

#define CURRENT_DAY  0x587e
#define CURRENT_HOUR 0x587f

#define INV_GLASS_SWORDS 0x57e7
#define INV_KEYS 0x57ac

#define INV_REAGENTS 0x5850

#define HARVEST_FLAGS 0x5858

#define PARTY_LOCATION 0x5893
#define PARTY_Z 0x5895

#define IS_FRIGATE(x) (x & 0xf8 == 0x20)
#define MODE_OF_TRANSPORTATION 0x587c

#define LORD_BRITISH_IN_MIRROR 0x3c

#define EXIT_DIRECTION_FROM_COMBAT 0x58a0

#define ED_NONE  0
#define ED_WEST  1
#define ED_EAST  2
#define ED_NORTH 3
#define ED_SOUTH 4
#define ED_UP    5
#define ED_DOWN  6
#define ED_MIRROR 'M' 

#define DUNGEON_HEADING 0x6603

#define COMBAT_TYPE_FLAGS 0x58a1

#define CTF_DUNGEON 0x80

#define RETICLE_VISIBLE 0x589f
#define ACTIVE_PLAYER 0x587b

#define NON_REGENERATING_OBJECT_FLAGS 0x585c

#define MOONSTONE_X_COORDS 0x582f
#define MOONSTONE_Y_COORDS 0x5837
#define MOONSTONE_Z_COORDS 0x5847
#define INV_MOONSTONE 0x583f

#define MOONSTONE 0x19

#define HIDDEN_ITEM_LOCATIONS 0x3f5c
#define HIDDEN_ITEM_X_COORDS 0x4040
#define HIDDEN_ITEM_Y_COORDS 0x40b2
#define HIDDEN_ITEM_Z_COORDS 0x3fce

#define MINOC_SKULL_KEY_ID 14
#define MINOC_SKULL_KEY_DATE 0x57b2

#define CASTLE_BLACKTHORN_DUNGEON_KEY_ID 13

#define GLASS_SWORD_ID 15

#define IS_NONMYSTIC(n) (n > 0xc)

#define REMAINING_LIGHT_SPELL_DURATION 0x58a6
#define REMAINING_TORCH_DURATION 0x58a7

#define SPRITE_FLAGS 0xba16

void FUN_0000_002a(undefined2 param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5876 = param_2;
  *(undefined2 *)0x5878 = param_1;
  if (param_3 == 0) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
  }
  else if (param_3 == 1) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_3 == 2) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_3 == 3) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
  }
  return;
}



undefined2 FUN_0000_006c(int param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  
  func_0x000058d0(0x84e6);
  while (((cVar1 = func_0x000066ec(), cVar1 != ' ' && (cVar1 != '\x03')) && (cVar1 != '\x04'))) {
    if ((cVar1 == '\x02') || (cVar1 == '\x01')) break;
  }
  if (cVar1 == '\x01') {
    func_0x000058d0(0x8508);
    param_1 = param_1 + 3;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
          func_0x000058d0(0x84fa);
          *(uint *)0x5876 = (uint)*(byte *)0x5896;
          *(uint *)0x5878 = (uint)*(byte *)0x5897;
          return 1;
        }
        if (cVar1 != ' ') {
          return 1;
        }
        func_0x000058d0(0x84ec);
        return 0;
      }
      func_0x000058d0(0x84f2);
      goto LAB_0000_00d2;
    }
    func_0x000058d0(0x8500);
    param_1 = param_1 + 1;
  }
  param_1 = param_1 % 4;
LAB_0000_00d2:
  FUN_0000_002a(*(undefined *)0x5897,*(undefined *)0x5896,param_1);
  return 1;
}



void FUN_0000_012a(int param_1)

{
  if (param_1 - 1U < 0x1f) {
                    // WARNING: Could not emulate address calculation at 0x0000013b
                    // WARNING: Treating indirect jump as call
    (**(code **)((param_1 - 1U) * 2 + -0x3ed0))();
    return;
  }
  func_0x000058d0(0x85f4);
  return;
}



void FUN_0000_01f2(int param_1,int param_2)

{
  byte *pbVar1;
  undefined uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  iVar3 = func_0x00006112(7,0);
  if (iVar3 == 0) {
    iVar3 = func_0x00006112(3,0);
    if (iVar3 == 0) {
      func_0x000058d0(0x863a);
      uVar2 = 0xf;
    }
    else {
      func_0x000058d0(0x8642);
      uVar2 = 2;
    }
    *(undefined *)(param_2 * 8 + 0x5c5b) = uVar2;
    *(undefined *)(param_2 * 8 + 0x5c5a) = uVar2;
    uVar2 = func_0x00006112(3,1);
    *(undefined *)(param_2 * 8 + 0x5c5f) = uVar2;
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    func_0x00009990();
  }
  else {
    func_0x00007af4(param_2,0,0,0,0,0,0);
    iVar3 = func_0x00006112(0x1f,0);
    if (iVar3 == 0x13) {
      func_0x000058d0(0x8606);
      func_0x000062bc(500,3000,0x28);
      *(undefined *)(param_1 * 0x20 + 0x55b3) = 0x50;
      *(undefined *)0xa9fa = 1;
    }
    else {
      uVar4 = func_0x00006112(3,0,0);
      iVar3 = func_0x00006112(uVar4);
      if (iVar3 == 0) {
        uVar4 = 0x8610;
      }
      else if (iVar3 == 1) {
        uVar4 = 0x861a;
      }
      else if (iVar3 == 2) {
        uVar4 = 0x8622;
      }
      else {
        if (iVar3 != 3) {
          return;
        }
        uVar4 = 0x862a;
      }
      func_0x000058d0(uVar4);
    }
  }
  return;
}



void FUN_0000_02ea(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)(param_2 * 8 + 0x5c5f);
  if ((bVar1 & 0x80) == 0) {
    uVar3 = -(*(byte *)(param_1 * 0x20 + 0x55b6) - 0x1e);
  }
  else {
    uVar3 = ((bVar1 & 0x7f) - (uint)*(byte *)(param_1 * 0x20 + 0x55b6)) + 0x1e;
  }
  iVar4 = func_0x00006112(0x1e,1);
  bVar2 = (int)(uVar3 >> 1) <= iVar4;
  if (((bVar2) && ((bVar1 & 0x80) == 0)) || ((!bVar2 && ((bVar1 & 0x80) != 0)))) {
    uVar5 = 0x864a;
  }
  else {
    uVar3 = bVar1 & 0x7f;
    if ((bVar2) && (uVar3 < 10)) {
      uVar5 = 0x8654;
    }
    else if ((bVar2) && (0x14 < uVar3)) {
      uVar5 = 0x8664;
    }
    else {
      uVar5 = 0x8676;
    }
  }
  func_0x000058d0(uVar5);
  return;
}



undefined2 FUN_0000_03a8(uint z, uint y, uint x) {
  byte *pbVar1;
  uint moonstone_b_id;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  bool bVar6;
  undefined2 unaff_DS;
  uint moonstone_a_id;
  
  moonstone_b_id = 8;
  do {
    do {
      moonstone_a_id = moonstone_b_id;
      moonstone_b_id = moonstone_a_id - 1;
      if (moonstone_b_id < 0) {
        return 0;
      }
    } while (MOONSTONE_X_COORDS[moonstone_a_id] != x
          || MOONSTONE_Y_COORDS[moonstone_a_id] != y
          || MOONSTONE_Z_COORDS[moonstone_a_id] != z
          || INV_MOONSTONE[moonstone_a_id] != *PARTY_LOCATION);
    bVar6 = false;
    for (iVar5 = 0x20, iVar5 >= 0; iVar5--) { 
      iVar3 = func_0x0000770e(z, y, x);
      if ((iVar3 == MOONSTONE) && (*(*0x5876 * 8 + 0x5c5f) == moonstone_b_id)) {
        bVar6 = true;
      }
    }
  } while (bVar6);
  uVar4 = func_0x00007964();
  func_0x00007af4(uVar4,moonstone_b_id, z, y, x,0x19,0x19);
  func_0x000058d0(0x8680);
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return 1;
}


// Related to harvesting mandrake and nightshade at midnight
bool harvested(uint party_y, uint party_x)

{
  char *reagent_qty_p;
  char current_day;
  uint reagent_id;
  undefined2 uVar4;
  int harvest_id;
  undefined2 unaff_DS;
  undefined2 *local_a;
  
  harvest_id = 0;
  local_a = (undefined2 *)0x3e72;
  while ((((*(harvest_id + 0x3e66) != party_x || (*(harvest_id + 0x3e6a) != party_y)) ||
          (*CURRENT_HOUR != 0)) ||
         (current_day = *CURRENT_DAY, HARVEST_FLAGS[harvest_id] == current_day))) {
    local_a++;
    if (++harvest_id > 2) {
      return 0;
    }
  }
  HARVEST_FLAGS[harvest_id] = current_day;
  reagent_id = (uint)*(byte *)(harvest_id + 0x3e6e);
  int harvested_qty = func_0x00006112(0xf,2);
  reagent_qty_p = &INV_REAGENTS[reagent_id];
  *reagent_qty_p += harvested_qty;
  if (INV_REAGENTS[reagent_id] > 99) {
    INV_REAGENTS[reagent_id] = 99;
  }
  if (harvested_qty < 10) {
    uVar4 = 1;
  } else {
    uVar4 = 2;
  }
  print_number(0x20,uVar4, harvested_qty);
  func_0x000058d0(0x86be);
  func_0x000058d0(*local_a);
  func_0x000058d0(0x86ca);
  return 1;
}



void FUN_0000_0514(uint param_1,uint param_2)

{
  byte *pbVar1;
  undefined uVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  int hidden_item_id;
  uint uVar7;
  undefined2 unaff_DS;
  
  bVar3 = false;
  hidden_item_id = 0;
  while (HIDDEN_ITEM_LOCATIONS[hidden_item_id] != *PARTY_LOCATION ||
         HIDDEN_ITEM_Z_COORDS[hidden_item_id] != *PARTY_Z ||
         HIDDEN_ITEM_X_COORDS[hidden_item_id] != param_2 || 
         HIDDEN_ITEM_Y_COORDS[hidden_item_id] != param_1) {
LAB_0000_062a:
    hidden_item_id++;
    if (hidden_item_id > 0x70) {
LAB_0000_05a6:
      if (hidden_item_id == MINOC_SKULL_KEY_ID) {
        *MINOC_SKULL_KEY_DATE = *CURRENT_DAY;
      }
      if (bVar3) {
        uVar5 = func_0x00007964();
        uVar2 = *(undefined *)(hidden_item_id + 0x3e78);
        func_0x00007af4(uVar5,*(hidden_item_id + 0x3eea),
                        HIDDEN_ITEM_Z_COORDS[hidden_item_id],
                        HIDDEN_ITEM_Y_COORDS[hidden_item_id],
                        HIDDEN_ITEM_X_COORDS[hidden_item_id],uVar2,uVar2);
        pbVar1 = 0x24e6;
        *pbVar1 = *pbVar1 | 2;
        FUN_0000_012a(uVar2);
      }
      else {
        func_0x000058d0(0x86cc);
      }
      return;
    }
  }
  if (((((hidden_item_id != CASTLE_BLACKTHORN_DUNGEON_KEY_ID) || (*INV_KEYS != 0)) ||
       (iVar4 = func_0x0000770e(*PARTY_Z,param_1,param_2), iVar4 != 0)) &&
      ((hidden_item_id != MINOC_SKULL_KEY_ID || (*CURRENT_DAY == *MINOC_SKULL_KEY_DATE)))) &&
     ((hidden_item_id != GLASS_SWORD_ID || ((INV_GLASS_SWORDS != 0 ||
       (iVar4 = func_0x0000770e(PARTY_Z,param_1,param_2), iVar4 != 0)))))) {
    uVar7 = 1 << ((byte)hidden_item_id & 7);
    if (((uVar7 & *((hidden_item_id >> 3) + NON_REGENERATING_OBJECT_FLAGS)) != 0) || 
       ((IS_NONMYSTIC(hidden_item_id) && (hidden_item_id < 0x10))))
    goto LAB_0000_062a;
    pbVar1 = ((hidden_item_id >> 3) + NON_REGENERATING_OBJECT_FLAGS);
    *pbVar1 = *pbVar1 | (byte)uVar7;
  }
  bVar3 = true;
  goto LAB_0000_05a6;
}

void __cdecl16near FUN_0000_0646(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 unaff_DS;
  
  iVar6 = func_0x00008a08();
  if (iVar6 == -1) {
    return;
  }
  if ((*REMAINING_TORCH_DURATION == 0) && (*REMAINING_LIGHT_SPELL_DURATION == 0)) {
    uVar7 = 0x86de;
  }
  else {
    iVar8 = FUN_0000_006c(*DUNGEON_HEADING);
    if (iVar8 == 0) {
      return;
    }
    uVar10 = *(uint *)0x5876;
    uVar2 = *(uint *)0x5878;
    uVar9 = *PARTY_Z;
    bVar3 = *(byte *)(uVar9 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7) + 0x595a);
    uVar9 = (uVar9 * 2 - (uint)*(byte *)(iVar6 * 0x20 + 0x55b5)) + 0x1e >> 1;
    func_0x000058d0(0x86f4);
    bVar4 = bVar3 & 0xf0;
    if (bVar4 == 0x70) {
      uVar7 = 0x87ca;
    }
    else if (bVar4 < 0x71) {
      if (bVar4 != 0x20) {
        if (bVar4 < 0x21) {
          if ((bVar3 & 0xf0) == 0) {
            uVar7 = 0x8700;
            goto LAB_0000_066b;
          }
          if (bVar4 != 0x10) {
            return;
          }
        }
        else if (bVar4 != 0x30) {
          if (bVar4 == 0x40) {
            iVar6 = func_0x00006112(0x1e,1);
            if ((int)uVar9 < iVar6) {
              if (bVar3 == 0x40) {
                uVar7 = 0x8732;
                goto LAB_0000_066b;
              }
              uVar10 = *PARTY_Z;
            }
            else {
              uVar10 = func_0x00006112(8,1);
            }
            if ((int)uVar10 < 4) {
              uVar7 = 0x873c;
            }
            else if ((int)uVar10 < 7) {
              uVar7 = 0x875c;
            }
            else {
              uVar7 = 0x874c;
            }
            goto LAB_0000_066b;
          }
          if (bVar4 == 0x50) {
            uVar7 = 0x8764;
            goto LAB_0000_066b;
          }
          if (bVar4 != 0x60) {
            return;
          }
          if (bVar3 == 0x60) {
            uVar7 = 0x8786;
            goto LAB_0000_066b;
          }
          if (bVar3 != 0x61) {
            if (bVar3 != 0x62) {
              return;
            }
            iVar6 = func_0x00006112(0x1e,1);
            if ((int)uVar9 < iVar6) {
              func_0x000058d0(0x87aa);
              pbVar1 = (byte *)(*PARTY_Z * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7) +
                               0x595a);
              *pbVar1 = *pbVar1 & 8;
              return;
            }
            uVar7 = 0x87b8;
            goto LAB_0000_066b;
          }
          func_0x000058d0(0x87a2);
          iVar6 = *PARTY_Z * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7);
          *(undefined *)(iVar6 + 0x595a) = 0x60;
          if (*PARTY_Z < 7) {
            pbVar1 = (byte *)(iVar6 + 0x599a);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_0000_089e;
        }
      }
      uVar7 = 0x8712;
    }
    else if (bVar4 == 0xb0) {
      uVar7 = 0x886c;
    }
    else {
      if (0xb0 < bVar4) {
        if (bVar4 == 0xc0) {
          bVar4 = *(byte *)0x6604 & 0xf;
          if (bVar4 == 1) {
            uVar7 = 0x88ac;
            goto LAB_0000_066b;
          }
          if (bVar4 == 2) {
            uVar7 = 0x888a;
            goto LAB_0000_066b;
          }
          func_0x000058d0(0x88c8);
          func_0x000058d0(0x88ea);
          iVar6 = (uVar2 & 7) * 8 + (uVar10 & 7);
          bVar4 = *PARTY_Z;
          cVar5 = (bVar3 & 8) + 0xb0;
        }
        else {
          if (bVar4 != 0xd0) {
            if ((bVar4 != 0xe0) && (bVar4 != 0xf0)) {
              return;
            }
            uVar7 = 0x890e;
            goto LAB_0000_066b;
          }
          func_0x000058d0(0x88fe);
          iVar6 = (uVar2 & 7) * 8 + (uVar10 & 7);
          bVar4 = *PARTY_Z;
          cVar5 = (bVar3 & 8) - 0x20;
        }
        *(char *)((uint)bVar4 * 0x40 + iVar6 + 0x595a) = cVar5;
LAB_0000_089e:
        func_0x0000bcd6(1);
        func_0x00004fc6(0xb7,0xb7,8,8);
        return;
      }
      if (bVar4 == 0x80) {
        if (bVar3 == 0x80) {
          uVar7 = 0x87d6;
        }
        else if (bVar3 == 0x81) {
          uVar7 = 0x87e6;
        }
        else if (bVar3 == 0x82) {
          uVar7 = 0x87fc;
        }
        else if (bVar3 == 0x83) {
          uVar7 = 0x880e;
        }
        else {
          uVar7 = 0x8822;
        }
      }
      else if (bVar4 == 0x90) {
        uVar7 = 0x8834;
      }
      else {
        if (bVar4 != 0xa0) {
          return;
        }
        uVar7 = 0x884e;
      }
    }
  }
LAB_0000_066b:
  func_0x000058d0(uVar7);
  return;
}



void __cdecl16near FUN_0000_095c(void)

{
  byte *pbVar1;
  int iVar2;
  uint party_x;
  uint party_y;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined2 unaff_DS;
  char *local_16;
  byte *local_14;
  
  if ((0x20 < *PARTY_LOCATION && (*PARTY_LOCATION < 0x29)) {
    FUN_0000_0646();
    return;
  }
  iVar2 = func_0x0000766c();
  if (iVar2 == 0) {
    return;
  }
  party_x = (uint)*(byte *)0x5896 + *(int *)0x5876;
  party_y = (uint)*(byte *)0x5897 + *(int *)0x5878;
  iVar2 = func_0x00008a08();
  if (iVar2 == -1) {
    return;
  }
  pbVar5 = (byte *)func_0x00008482(party_y,party_x);
  uVar6 = (uint)*pbVar5;
  pbVar5 = (byte *)0x5c64;
  local_14 = (byte *)0x5c65;
  local_16 = (char *)0x5c66;
  pcVar10 = (char *)0x5c62;
  iVar7 = 1;
  do {
    if ((((*pbVar5 == party_x) && (*local_14 == party_y)) &&
        ((0x7f < *PARTY_LOCATION || (*local_16 == *PARTY_Z)))) && (*pcVar10 == '\x01'))
    break;
    pbVar5 = pbVar5 + 8;
    local_14 = local_14 + 8;
    local_16 = local_16 + 8;
    pcVar10 = pcVar10 + 8;
    iVar7 = iVar7 + 1;
  } while (pcVar10 < (char *)0x5d5a);
  if (iVar7 < 0x20) {
    func_0x000058d0(0x892c);
    FUN_0000_02ea(iVar2,iVar7);
    return;
  }
  iVar7 = func_0x00007782(*PARTY_Z,party_y,party_x);
  if (iVar7 == 0x1f) {
    func_0x000058d0(0x893e);
    FUN_0000_01f2(iVar2,*(undefined2 *)0x5876);
    return;
  }
  if (uVar6 == 0xa5) {
    uVar8 = 0x8996;
    goto LAB_0000_0a83;
  }
  if (uVar6 < 0xa6) {
    if (uVar6 == 0x4f) {
      uVar8 = 0x8a24;
      goto LAB_0000_0a83;
    }
    if (uVar6 < 0x50) {
      if (uVar6 == 0x2b) {
        uVar8 = 0x8950;
        goto LAB_0000_0a83;
      }
    }
    else {
      if (uVar6 == 0x5a) {
        uVar8 = 0x8960;
        goto LAB_0000_0a83;
      }
      if (0x5b < uVar6) {
        if (uVar6 < 0x5e) {
          uVar8 = 0x8970;
          goto LAB_0000_0a83;
        }
        if (uVar6 == 0xa1) {
          uVar8 = 0x8984;
          goto LAB_0000_0a83;
        }
      }
    }
  }
  else if (uVar6 - 0xa6 < 0x17) {
                    // WARNING: Could not emulate address calculation at 0x00000af9
                    // WARNING: Treating indirect jump as call
    (**(code **)((uVar6 - 0xa6) * 2 + -0x3582))();
    return;
  }
  uVar8 = 0x8a34;
LAB_0000_0a83:
  func_0x000058d0(uVar8);
  func_0x000058d0(0x8a38);
  if (uVar6 == 0x4e) {
    func_0x000058d0(0x8a48);
    if (*PARTY_Z < 0x80) {
      puVar9 = (undefined *)func_0x00008482(party_y,party_x);
      *puVar9 = 0xb9;
    }
    else {
      puVar9 = (undefined *)func_0x00008482(party_y,party_x);
      *puVar9 = 0xb8;
    }
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
  }
  else if (((uVar6 == 0xdc) || (iVar2 = FUN_0000_03a8(*PARTY_Z,party_y,party_x), iVar2 == 0)
           ) && (iVar2 = harvested(party_y,party_x), iVar2 == 0)) {
    FUN_0000_0514(party_y, party_x);
  }
  return;
}



void FUN_0000_0baa(int param_1)

{
  byte *pbVar1;
  char *keys_in_inventory;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined2 unaff_DS;
  
  iVar5 = func_0x00008a08();
  if (iVar5 != -1) {
    bVar3 = *(byte *)(param_1 * 8 + 0x5c5f);
    if (bVar3 < 0x80) {
      uVar6 = 0x8a58;
    }
    else {
      bVar4 = *(byte *)(iVar5 * 0x20 + 0x55b5);
      uVar7 = func_0x00006112(0x1e,1);
      if ((((bVar3 & 0x7f) - (uint)bVar4) + 0x1e >> 1 & 0xff) < uVar7) {
        func_0x000058d0(0x8a64);
        pbVar1 = (byte *)(param_1 * 8 + 0x5c5f);
        *pbVar1 = *pbVar1 & 0x7f;
        return;
      }
      uVar6 = 0x8a6e;
    }
    func_0x000058d0(uVar6);
    func_0x0000842e(0x32,1,2000,800);
    keys_in_inventory = INV_KEYS;
    *keys_in_inventory--;
  }
  return;
}



void __cdecl16near FUN_0000_0c3e(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  
  func_0x000058d0(0x8a7a);
  iVar4 = func_0x00008a08();
  if (iVar4 == -1) {
    return;
  }
  uVar5 = (uint)*(byte *)0x5896;
  uVar6 = (uint)*(byte *)0x5897;
  uVar7 = *PARTY_Z;
  bVar2 = *(byte *)(uVar7 * 0x40 + (uVar6 & 7) * 8 + (uVar5 & 7) + 0x595a);
  bVar3 = *(byte *)(iVar4 * 0x20 + 0x55b5);
  if ((bVar2 & 0xf7) == 0x40) {
    if (*(char *)0x57ac != '\0') {
      uVar8 = 0x8a86;
LAB_0000_0cc5:
      func_0x000058d0(uVar8);
      pcVar1 = (char *)0x57ac;
      *pcVar1 = *pcVar1 + -1;
      return;
    }
    uVar8 = 0x8a7c;
  }
  else if ((bVar2 & 0xf0) == 0x40) {
    if (*(char *)0x57ac != '\0') {
      iVar4 = func_0x00006112(0x1e,1);
      if ((int)((uVar7 * 2 - (uint)bVar3) + 0x1e >> 1) < iVar4) {
        func_0x000058d0(0x8a9c);
        *(char *)(*PARTY_Z * 0x40 + (uVar6 & 7) * 8 + (uVar5 & 7) + 0x595a) =
             (bVar2 & 8) + 0x40;
        return;
      }
      uVar8 = 0x8aac;
      goto LAB_0000_0cc5;
    }
    uVar8 = 0x8a92;
  }
  else if ((bVar2 & 0xf0) == 0x70) {
    uVar8 = 0x8ab8;
  }
  else {
    uVar8 = 0x8ac8;
  }
  func_0x000058d0(uVar8);
  return;
}



void __cdecl16near FUN_0000_0d4a(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  undefined2 unaff_DS;
  char *local_12;
  byte *local_10;
  
  if ((0x20 < *PARTY_LOCATION && (*PARTY_LOCATION < 0x29)) {
    FUN_0000_0c3e();
    return;
  }
  if (*(char *)0x57ac == '\0') {
    uVar4 = 0x8ad0;
  }
  else {
    iVar5 = func_0x0000766c();
    if (iVar5 == 0) {
      return;
    }
    uVar6 = (uint)*(byte *)0x5896 + *(int *)0x5876;
    uVar7 = (uint)*(byte *)0x5897 + *(int *)0x5878;
    pbVar8 = (byte *)func_0x00008482(uVar7,uVar6);
    bVar3 = *pbVar8;
    if (bVar3 < 0x99) {
      if (0x96 < bVar3) {
        uVar4 = 0x8af2;
LAB_0000_0df2:
        func_0x000058d0(uVar4);
        pcVar1 = (char *)0x57ac;
        *pcVar1 = *pcVar1 + -1;
        return;
      }
      if ((0x83 < bVar3) && (bVar3 < 0x86)) {
        if ((*PARTY_LOCATION < 0x80) &&
           (iVar5 = func_0x0000770e(*PARTY_Z,uVar7,uVar6), iVar5 == 0)) {
          uVar4 = 0x8afe;
        }
        else {
          uVar4 = *(undefined2 *)0x5876;
          iVar5 = func_0x00008a08();
          if (iVar5 == -1) {
            return;
          }
          uVar9 = func_0x00006112(0x1d,0);
          if (*(byte *)(iVar5 * 0x20 + 0x55b5) <= uVar9) {
            uVar4 = 0x8b10;
            goto LAB_0000_0df2;
          }
          if (*PARTY_LOCATION < 0x7f) {
            iVar5 = func_0x0000bb9e(uVar4);
            if (iVar5 != -1) {
              piVar13 = (int *)(iVar5 * 0x10 + 0x5f68);
              if (*piVar13 != 0) {
                *piVar13 = 0;
              }
              iVar11 = func_0x0000bb7a(iVar5);
              if (iVar11 == 0) {
                iVar11 = iVar5 * 0x10;
                *(undefined *)(iVar11 + 0x5d5e) = 5;
                *(undefined *)(iVar11 + 0x5d5f) = 5;
                *(undefined *)(iVar11 + 0x5d60) = 5;
                func_0x000058d0(0x8b36);
                func_0x00007f70(99,2,0x5888);
              }
              func_0x0000bb86(iVar5);
              return;
            }
            uVar4 = 0x8b1c;
          }
          else {
            puVar12 = (undefined *)func_0x00008482(uVar7,uVar6);
            *puVar12 = 0x44;
            pbVar2 = (byte *)0x24e6;
            *pbVar2 = *pbVar2 | 2;
            uVar4 = 0x8b48;
          }
        }
        goto LAB_0000_0d70;
      }
    }
    else if ((bVar3 == 0xb9) || (bVar3 == 0xbb)) {
      iVar5 = func_0x00008a08();
      if (iVar5 == -1) {
        return;
      }
      uVar9 = func_0x00006112(0x1d,0);
      if (*(byte *)(iVar5 * 0x20 + 0x55b5) <= uVar9) {
        uVar4 = 0x8ada;
        goto LAB_0000_0df2;
      }
      pcVar10 = (char *)func_0x00008482(uVar7,uVar6);
      *pcVar10 = bVar3 - 1;
      pbVar2 = (byte *)0x24e6;
      *pbVar2 = *pbVar2 | 2;
      uVar4 = 0x8ae6;
      goto LAB_0000_0d70;
    }
    iVar5 = 1;
    pbVar8 = (byte *)0x5c64;
    local_10 = (byte *)0x5c65;
    local_12 = (char *)0x5c66;
    pcVar10 = (char *)0x5c62;
    do {
      if ((((*pbVar8 == uVar6) && (*local_10 == uVar7)) &&
          ((0x7f < *PARTY_LOCATION || (*local_12 == *PARTY_Z)))) && (*pcVar10 == '\x01'))
      break;
      pbVar8 = pbVar8 + 8;
      local_10 = local_10 + 8;
      local_12 = local_12 + 8;
      pcVar10 = pcVar10 + 8;
      iVar5 = iVar5 + 1;
    } while (pcVar10 < (char *)0x5d5a);
    if (iVar5 < 0x20) {
      FUN_0000_0baa(iVar5,*PARTY_Z,uVar7,uVar6);
      return;
    }
    uVar4 = 0x8b52;
  }
LAB_0000_0d70:
  func_0x000058d0(uVar4);
  return;
}



void FUN_0000_0f88(int *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
                  ,int param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((param_7 == 3) || (param_7 == 4)) {
    param_6 = param_6 + -1;
  }
  if (param_7 != 1) {
    if (param_7 != 2) goto LAB_0000_0fc9;
    param_2 = param_2 * 3;
  }
  param_6 = func_0x00006112(param_2,1);
LAB_0000_0fc9:
  iVar2 = FUN_0000_0000();
  if (iVar2 != 0) {
    func_0x00007af4(iVar2,param_6,param_3,param_4,param_5,param_7,param_7);
    if (*PARTY_LOCATION < 0x80) {
      *(undefined *)(iVar2 * 8 + 0x5c61) = 0;
      *(undefined *)(iVar2 * 8 + 0x5c5e) = (undefined)param_3;
    }
    else {
      *(undefined *)(iVar2 * 8 + 0x5c61) = 0x20;
    }
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    func_0x00009990();
    if (*param_1 == 0) {
      func_0x000058d0(0x8b5c);
      *param_1 = 1;
    }
    FUN_0000_012a(param_7);
  }
  return;
}



void FUN_0000_1040(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar3;
  
  iVar2 = 8;
  while (iVar3 = iVar2, iVar2 = iVar3 + -1, -1 < iVar2) {
    if (*(byte *)(iVar3 + 0x412b) <= param_5) {
      uVar1 = func_0x00006112(0x1e,1);
      if (*(byte *)(iVar3 + 0x412b) <= uVar1) {
        if (*(char *)(iVar3 + 0x4133) == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = func_0x00006112(*(undefined *)(iVar3 + 0x4133),1);
        }
        FUN_0000_0f88(param_1,param_5,param_2,param_3,param_4,uVar4,*(undefined *)(iVar3 + 0x4123));
      }
    }
  }
  return;
}



void FUN_0000_10b8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = (int)param_5 / 2;
  while (iVar1 = local_4 + -1, -1 < local_4) {
    iVar2 = func_0x00006112(0x2f,0);
    local_4 = iVar1;
    if (*(byte *)(iVar2 + 0x416c) <= param_5) {
      uVar3 = func_0x00006112(0x1e,1);
      if (*(byte *)(iVar2 + 0x416c) <= uVar3) {
        FUN_0000_0f88(param_1,param_5,param_2,param_3,param_4,iVar2,*(undefined *)(iVar2 + 0x413c));
      }
    }
  }
  return;
}



void FUN_0000_112c(uint param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  undefined2 unaff_DS;
  char *local_14;
  byte *local_12;
  byte *local_10;
  int local_a;
  byte local_8;
  int local_6;
  uint local_4;
  
  local_a = 0;
  local_6 = 1;
  pbVar8 = (byte *)0x5c64;
  local_10 = (byte *)0x5c65;
  local_12 = (byte *)0x5c66;
  local_14 = (char *)0x5c62;
  pcVar7 = (char *)0x5c62;
  do {
    if (((*pbVar8 == param_3) && (*local_10 == param_2)) &&
       ((0x7f < *PARTY_LOCATION || ((*PARTY_LOCATION < 0x80 && (*local_12 == param_1)))))) {
      if (*local_14 == '\x01') break;
      if (*pcVar7 == '\x0e') {
        uVar5 = 0x8b64;
        goto LAB_0000_12c8;
      }
    }
    pbVar8 = pbVar8 + 8;
    local_10 = local_10 + 8;
    local_12 = local_12 + 8;
    local_14 = local_14 + 8;
    pcVar7 = pcVar7 + 8;
    local_6 = local_6 + 1;
  } while (pcVar7 < (char *)0x5d5a);
  if (local_6 == 0x20) {
    uVar5 = 0x8b6c;
  }
  else {
    uVar6 = func_0x00008a08();
    if (uVar6 == 0xffff) {
      return;
    }
    local_8 = *(byte *)(local_6 * 8 + 0x5c5f);
    func_0x00007af4(local_6,0,0,0,0,0,0);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    if ((*PARTY_LOCATION != '\0') && (*PARTY_LOCATION < 0x21)) {
      if (*(byte *)0x5888 < 3) {
        *(undefined *)0x5888 = 0;
      }
      else {
        pcVar2 = (char *)0x5888;
        *pcVar2 = *pcVar2 + -2;
      }
    }
    if (0x7f < local_8) {
      local_8 = local_8 & 0x7f;
      func_0x000058d0(0x8b7e);
      func_0x00007050(uVar6);
      if ((0x7f < *PARTY_LOCATION && (*(char *)(uVar6 * 0x20 + 0x55b3) == 'D')) {
        local_6 = 0;
        uVar4 = 0xba14;
        do {
          local_4 = uVar4;
          if (((*(byte *)(local_4 + 2) & 0x80) != 0) && (*(byte *)(local_4 + 3) == uVar6)) {
            pbVar1 = (byte *)(local_4 + 2);
            *pbVar1 = *pbVar1 | 0x20;
            iVar9 = (uint)*(byte *)(local_4 + 4) * 8;
            *(undefined *)(iVar9 + 0x5c5b) = 0x1e;
            *(undefined *)(iVar9 + 0x5c5a) = 0x1e;
            break;
          }
          local_6 = local_6 + 1;
          uVar4 = local_4 + 8;
        } while (local_4 + 8 < 0xbb14);
        if (uVar6 == *ACTIVE_PLAYER) {
          *ACTIVE_PLAYER = 0xff;
        }
        func_0x00009990();
      }
    }
    bVar3 = local_8;
    FUN_0000_1040(&local_a,param_1,param_2,param_3,local_8);
    FUN_0000_10b8(&local_a,param_1,param_2,param_3,bVar3);
    if (local_a != 0) {
      return;
    }
    uVar5 = 0x8b88;
  }
LAB_0000_12c8:
  func_0x000058d0(uVar5);
  return;
}



void __cdecl16near FUN_0000_12d4(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)(*PARTY_Z * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7)
                   + 0x595a);
  if ((bVar1 & 0xf0) == 0x40) {
    iVar2 = func_0x00008a08();
    if (iVar2 == -1) {
      return;
    }
    if ((bVar1 & 7) != 0) {
      func_0x00007050(iVar2);
    }
    *(char *)(*PARTY_Z * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7) +
             0x595a) = (bVar1 & 8) + 0x70;
    uVar3 = 0x8b96;
  }
  else if ((bVar1 & 0xf0) == 0x70) {
    uVar3 = 0x8ba6;
  }
  else {
    uVar3 = 0x8bb6;
  }
  func_0x000058d0(uVar3);
  return;
}



void __cdecl16near FUN_0000_1374(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined2 unaff_DS;
  undefined local_8;
  undefined local_6;
  
  if ((0x20 < *PARTY_LOCATION) && (*PARTY_LOCATION < 0x29)) {
    FUN_0000_12d4();
    return;
  }
  func_0x00007a4c(*(undefined *)0x5951,*(undefined *)0x5950,*(undefined *)0x594f);
  iVar2 = func_0x0000766c();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (uint)*(byte *)0x5896 + *(int *)0x5876;
  iVar3 = (uint)*(byte *)0x5897 + *(int *)0x5878;
  pbVar4 = (byte *)func_0x00008482(iVar3,iVar2);
  bVar1 = *pbVar4;
  if (bVar1 == 0xaf) {
    uVar5 = 0x8bbe;
    goto LAB_0000_13ed;
  }
  if (bVar1 < 0xb0) {
    if (bVar1 < 0x97) {
LAB_0000_1444:
      FUN_0000_112c(*PARTY_Z,iVar3,iVar2);
      return;
    }
    if (0x98 < bVar1) {
      if (bVar1 == 0x99) {
        uVar5 = 0x8bca;
        goto LAB_0000_13ed;
      }
      goto LAB_0000_1444;
    }
  }
  else {
    if (bVar1 == 0xb8) {
LAB_0000_1400:
      *(byte *)0x594f = bVar1;
      *(undefined *)0x5952 = 4;
      local_6 = (undefined)iVar2;
      *(undefined *)0x5950 = local_6;
      local_8 = (undefined)iVar3;
      *(undefined *)0x5951 = local_8;
      puVar6 = (undefined *)func_0x00008482(iVar3,iVar2);
      *puVar6 = 0x44;
      *(undefined *)0x24e6 = 1;
      uVar5 = 0x8be0;
      goto LAB_0000_13ed;
    }
    if (bVar1 != 0xb9) {
      if (bVar1 == 0xba) goto LAB_0000_1400;
      if (bVar1 != 0xbb) goto LAB_0000_1444;
    }
  }
  uVar5 = 0x8bd6;
LAB_0000_13ed:
  func_0x000058d0(uVar5);
  return;
}



void FUN_0000_1458(int param_1,uint param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (param_3 < 0xd) {
    if (param_3 < 9) {
      if (param_3 - 1U < 8) {
                    // WARNING: Could not emulate address calculation at 0x0000147d
                    // WARNING: Treating indirect jump as call
        (**(code **)((param_3 - 1U) * 2 + -0x2962))();
        return;
      }
LAB_0000_1485:
      func_0x000058d0(0x8d92);
      return;
    }
    if ((param_2 == 0x1b) || (param_2 == 0x1d)) {
      func_0x00007f70(99,5,param_2 + 0x57c0);
    }
    else {
      pcVar1 = (char *)(param_2 + 0x57c0);
      *pcVar1 = *pcVar1 + '\x01';
      if (*(char *)(param_2 + 0x57c0) == 'd') {
        *(undefined *)(param_2 + 0x57c0) = 99;
      }
    }
    func_0x000058d0(*(undefined2 *)(param_2 * 2 + 0x17f6));
    uVar3 = 0x8d06;
    goto LAB_0000_15bf;
  }
  if (param_3 == 0x19) {
    func_0x000058d0(0x8c4e);
    *(undefined *)(param_2 + 0x5840) = 0xff;
    goto LAB_0000_177a;
  }
  if (param_3 < 0x1a) {
    if (param_3 == 0xd) {
      print_number(0x20,1,param_2);
      func_0x000058d0(0x8c8a);
      if (param_2 == 1) {
        uVar3 = 0x8c92;
      }
      else {
        uVar3 = 0x8c96;
      }
      func_0x000058d0(uVar3);
      func_0x00007f70(99,param_2,0x57ae);
    }
    else if (param_3 == 0xe) {
      func_0x000058d0(0x8c76);
      *(undefined *)0x57bf = 0xff;
      pbVar2 = (byte *)0x5b9d;
      *pbVar2 = *pbVar2 | 0x80;
    }
    else {
      if (param_3 != 0xf) goto LAB_0000_1485;
      print_number(0x20,1,param_2);
      func_0x000058d0(0x8c6e);
      func_0x00007f94(9999,param_2,0x57a8);
    }
    goto LAB_0000_177a;
  }
  if (param_3 == 0x1b) {
    func_0x000058d0(0x8c5c);
    pcVar1 = (char *)0x57b0;
    *pcVar1 = *pcVar1 + '\x01';
    if (*(char *)0x57b0 == 'd') {
      *(undefined *)0x57b0 = 99;
    }
    if (*PARTY_LOCATION != '\x11') goto LAB_0000_177a;
    uVar3 = 0x16;
LAB_0000_14c2:
    func_0x0000bb92(uVar3);
  }
  else {
    if (param_3 == 0xb4) {
      param_2 = param_2 & 3;
      *(undefined *)(param_2 + 0x57b6) = 0xff;
      func_0x000058d0(0x8d0a);
      if (param_2 == 0) {
        uVar3 = 0x8d18;
      }
      else if (param_2 == 1) {
        uVar3 = 0x8d24;
      }
      else {
        uVar3 = 0x8d2e;
      }
    }
    else {
      if (param_3 == 0xb5) {
        *(undefined *)0x57b4 = 0xff;
        func_0x000058d0(0x8d3a);
        uVar3 = func_0x0000bb9e(param_1);
        func_0x0000bb86(uVar3);
        uVar3 = func_0x0000bb9e(param_1);
        goto LAB_0000_14c2;
      }
      if (param_3 == 0xb6) {
        *(undefined *)0x57b5 = 0xff;
        uVar3 = 0x8d56;
      }
      else {
        if (param_3 != 0xb7) goto LAB_0000_1485;
        *(undefined *)0x57b3 = 0xff;
        uVar3 = 0x8d74;
      }
    }
LAB_0000_15bf:
    func_0x000058d0(uVar3);
  }
LAB_0000_177a:
  if (param_1 < 0x20) {
    func_0x00007af4(param_1,0,0,0,0,0,0);
  }
  pbVar2 = (byte *)0x24e6;
  *pbVar2 = *pbVar2 | 2;
  *(undefined *)0xa9fa = 1;
  return;
}



void __cdecl16near FUN_0000_179e(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined uVar6;
  
  func_0x000058d0(0x8da4);
  bVar2 = *(byte *)(*PARTY_Z * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7)
                   + 0x595a);
  if ((bVar2 & 0xf0) == 0x40) {
    uVar3 = 0x8daa;
  }
  else {
    if ((bVar2 & 0xf0) == 0x70) {
      pbVar1 = (byte *)(*PARTY_Z * 0x40 +
                        (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7) + 0x595a);
      *pbVar1 = *pbVar1 & 8;
      func_0x000058d0(0x8dbc);
      iVar5 = 0;
      do {
        uVar4 = func_0x00006112(*PARTY_Z * 4 + 4,1);
        if (*(byte *)(iVar5 + 0x41bc) <= uVar4) {
          if (iVar5 == 5) {
            uVar3 = func_0x00006112(7,0);
            uVar6 = 3;
          }
          else if (iVar5 == 6) {
            uVar3 = func_0x00006112(7,0);
            uVar6 = 4;
          }
          else {
            if (iVar5 == 1) {
              uVar4 = *PARTY_Z << 3;
            }
            else {
              uVar4 = (uint)*(byte *)(iVar5 + 0x41c4);
            }
            uVar3 = func_0x00006112(uVar4,1);
            uVar6 = *(undefined *)(iVar5 + 0x41cc);
          }
          FUN_0000_1458(0x20,uVar3,uVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 7);
      return;
    }
    uVar3 = 0x8dda;
  }
  func_0x000058d0(uVar3);
  return;
}



void __cdecl16near FUN_0000_18ce(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined2 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 unaff_DS;
  char *local_16;
  byte *local_14;
  uint local_8;
  int local_6;
  
  if ((0x20 < *PARTY_LOCATION) && (*PARTY_LOCATION < 0x29)) {
    FUN_0000_179e();
    return;
  }
  iVar6 = func_0x0000766c();
  if (iVar6 == 0) {
    return;
  }
  iVar6 = *(int *)0x5876;
  iVar3 = *(int *)0x5878;
  uVar7 = iVar6 + (uint)*(byte *)0x5896;
  uVar8 = iVar3 + (uint)*(byte *)0x5897;
  func_0x000058d0(0x8de6);
  local_6 = 1;
  pbVar12 = (byte *)0x5c64;
  local_14 = (byte *)0x5c65;
  local_16 = (char *)0x5c66;
  pbVar11 = (byte *)0x5c62;
  bVar4 = *PARTY_LOCATION;
  do {
    if (((*pbVar12 == uVar7) && (*local_14 == uVar8)) &&
       ((0x7f < bVar4 || ((bVar4 < 0x80 && (*local_16 == *PARTY_Z)))))) {
      bVar5 = *pbVar11;
      local_8 = (uint)bVar5;
      if ((bVar5 < 0x10) || (((local_8 == 0x19 || (local_8 == 0x1b)) || ((bVar5 & 0xfc) == 0xb4))))
      break;
    }
    pbVar12 = pbVar12 + 8;
    local_14 = local_14 + 8;
    local_16 = local_16 + 8;
    pbVar11 = pbVar11 + 8;
    local_6 = local_6 + 1;
  } while (pbVar11 < (byte *)0x5d5a);
  if (local_6 < 0x20) {
    FUN_0000_1458(local_6,*(undefined *)(local_6 * 8 + 0x5c5f),local_8);
    return;
  }
  pbVar11 = (byte *)func_0x00008482(uVar8,uVar7);
  bVar4 = *pbVar11;
  if (bVar4 == 0x9a) {
    if (iVar3 != 1) {
      uVar10 = 0x8e10;
      goto LAB_0000_1a8b;
    }
    puVar9 = (undefined *)func_0x00008482(uVar8,uVar7);
    *puVar9 = 0x95;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    uVar10 = 0x8e04;
  }
  else {
    if (0x9a < bVar4) {
      if (bVar4 == 0x9b) {
        if (iVar3 != -1) {
          uVar10 = 0x8e30;
          goto LAB_0000_1a8b;
        }
        puVar9 = (undefined *)func_0x00008482(uVar8,uVar7);
        *puVar9 = 0x95;
        pbVar2 = (byte *)0x24e6;
        *pbVar2 = *pbVar2 | 2;
        uVar10 = 0x8e24;
      }
      else {
        if (bVar4 != 0x9c) {
          if ((0xaf < bVar4) && (bVar4 < 0xb2)) {
            puVar9 = (undefined *)func_0x00008482(uVar8,uVar7);
            *puVar9 = 0x44;
            *(undefined *)0x24e6 = 1;
            if (*PARTY_LOCATION < 0x80) {
              func_0x00009eca();
            }
            *REMAINING_TORCH_DURATION = 100;
            func_0x000058d0(0x8de8);
            func_0x0000842e(0x32,1,2000,800);
            func_0x00009990();
            return;
          }
          goto LAB_0000_1b28;
        }
        if ((iVar6 == 1) || (iVar6 == -1)) {
          uVar10 = 0x8e44;
          goto LAB_0000_1a8b;
        }
        if (iVar3 == 1) {
          puVar9 = (undefined *)func_0x00008482(uVar8,uVar7);
          *puVar9 = 0x9b;
        }
        if (iVar3 == -1) {
          puVar9 = (undefined *)func_0x00008482(uVar8,uVar7);
          *puVar9 = 0x9a;
        }
        pbVar2 = (byte *)0x24e6;
        *pbVar2 = *pbVar2 | 2;
        uVar10 = 0x8e58;
      }
      func_0x000058d0(uVar10);
      func_0x00007f94(9999,1,0x57a8);
      goto LAB_0000_1a58;
    }
    if (bVar4 != 0x2d) {
LAB_0000_1b28:
      uVar10 = 0x8e64;
LAB_0000_1a8b:
      func_0x000058d0(uVar10);
      return;
    }
    puVar9 = (undefined *)func_0x00008482(uVar8,uVar7);
    *puVar9 = 0x2c;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    uVar10 = 0x8df4;
  }
  func_0x000058d0(uVar10);
  func_0x00007f94(9999,1,0x57a8);
  *(undefined *)0xa9fa = 1;
LAB_0000_1a58:
  if (*(char *)0x5888 != '\0') {
    pcVar1 = (char *)0x5888;
    *pcVar1 = *pcVar1 + -1;
  }
  return;
}



int FUN_0000_1b34(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (uVar2 = 0; uVar2 < *(byte *)0x585b; uVar2 = uVar2 + 1) {
    iVar1 = func_0x0000aee0(param_1,uVar2);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



void __cdecl16near FUN_0000_1b6c(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5878 = 0;
  *(undefined2 *)0x5876 = 0;
  iVar4 = 0;
  pbVar3 = (byte *)0xba16;
  do {
    if ((*pbVar3 != 0) && ((*pbVar3 & 0x20) == 0)) {
      iVar2 = func_0x000096c6(iVar4);
      if (iVar2 == 0) {
        piVar1 = (int *)0x5878;
        *piVar1 = *piVar1 + 1;
      }
      else {
        piVar1 = (int *)0x5876;
        *piVar1 = *piVar1 + 1;
      }
    }
    pbVar3 = pbVar3 + 8;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  return;
}


undefined2 attempt_to_exit(uint exit_direction,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (IS_FRIGATE(*MODE_OF_TRANSPORTATION) {
    func_0x000058d0(0x8e76);
LAB_0000_1bc5:
    uVar1 = 0;
  }
  else {
    if ((SPRITE_FLAGS[param_2 * 8] & 0x80) != 0) {
      // Is a PC, not a monster
      if (*EXIT_DIRECTION_FROM_COMBAT == ED_NONE) {
        // First PC to exit
        *EXIT_DIRECTION_FROM_COMBAT = exit_direction;
      } else if ((exit_direction != *EXIT_DIRECTION_FROM_COMBAT) &&
                ((*COMBAT_TYPE_FLAGS & CTF_DUNGEON) != 0)) {
        // Attempt to exit after another PC has left in a different direction
        func_0x000058d0(0x8e88);
        func_0x00006340(200,0xa5);
        goto LAB_0000_1bc5;
      }
    }
    *RETICLE_VISIBLE = 1;
    FUN_0000_1b6c();
    if (*(int *)0x5876 == 0) {
      uVar1 = 0x8ea6;
    } else {
      uVar1 = 0x8eae;
    }
    func_0x000058d0(uVar1);
    func_0x0000842e(0x28,1,2000,0x4b0);
    *ACTIVE_PLAYER = 0xff;
    func_0x0000be02(-1 - param_2);
    func_0x00006980();
    func_0x00009990();
    uVar1 = 1;
  }
  return uVar1;
}



undefined2 FUN_0000_1c56(int move_direction, int pc_number)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int dy;
  int dx;
  
  dy = 0;
  dx = 0;
  bVar1 = *(pc_number * 8 + -0x45e8);
  if (move_direction == ED_WEST) {
    dx = -1;
    uVar2 = 0x8ece;
  }
  else if (move_direction == ED_EAST) {
    dx = 1;
    uVar2 = 0x8ec8;
  }
  else if (move_direction == ED_NORTH) {
    dy = -1;
    uVar2 = 0x8eb8;
  }
  else {
    if (move_direction != ED_SOUTH) goto LAB_0000_1c9c;
    dy = 1;
    uVar2 = 0x8ec0;
  }
  func_0x000058d0(uVar2);
LAB_0000_1c9c:
  dx += *(pc_number * 8 + -0x45e6);
  dy += *(pc_number * 8 + -0x45e5);
  if ((((dx < 0xb) && (dy < 0xb)) && (-1 < dx)) && (-1 < dy)) {
    // Moving around within the bounds of the arena
    iVar4 = (uint)bVar1 * 8;
    iVar3 = func_0x0000bdf6(dy,dx,*(iVar4 + 0x5c5a));
    if (iVar3 == 0) {
      func_0x000058d0(0x8ed4);
      func_0x00006340(200,0xa5);
      func_0x00005b96();
      uVar2 = 0;
    } else {
      *(pc_number * 8 + -0x45e6) = dx;
      *(iVar4 + 0x5c5c) = dx;
      *(pc_number * 8 + -0x45e5) = dy;
      *(iVar4 + 0x5c5d) = dy;
      func_0x000083be();
      if ((*COMBAT_TYPE_FLAGS & (CTF_DUNGEON | 2)) != 0) {
        func_0x0000bf3a(dy,dx);
      }
      uVar2 = 1;
    }
  } else {
    // Attempting to move out of the combat arena
    uVar2 = attempt_to_exit(move_direction, pc_number);
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_0000_1d6a(void)

{
  undefined uVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined2 unaff_DS;
  undefined local_a;
  undefined local_8;
  
  func_0x000058d0(0x8ede);
  pcVar2 = (char *)func_0x00008482(*(undefined *)0x5897,*(undefined *)0x5896);
  cVar8 = *pcVar2;
  if ((((*COMBAT_TYPE_FLAGS & 2) != 0) && (cVar8 == -0x38)) && (*(char *)0xbb16 != '\0')) {
    func_0x000058d0(0x8ee6);
    do {
      iVar3 = func_0x000066ec();
      if (iVar3 != 3) {
        if ((iVar3 == 4) || (iVar3 == 0x44)) {
          cVar8 = -0x37;
        }
        else if (iVar3 != 0x55) {
          iVar3 = 0;
        }
      }
    } while (iVar3 == 0);
  }
  if (cVar8 == -0x38) {
    func_0x000058d0(0x8eec);
    uVar1 = *(undefined *)0x589e;
    uVar4 = 5;
  }
  else {
    if (((cVar8 != -0x7a) || ((*COMBAT_TYPE_FLAGS & CTF_DUNGEON) == 0)) && (cVar8 != -0x37)) {
      iVar3 = func_0x0000766c();
      if (iVar3 != 0) {
        iVar3 = (uint)*(byte *)0x5896 + *(int *)0x5876;
        iVar5 = (uint)*(byte *)0x5897 + *(int *)0x5878;
        pcVar2 = (char *)func_0x00008482(iVar5,iVar3);
        if ((*pcVar2 != 'L') || (iVar6 = func_0x00007782(0,iVar5,iVar3), iVar6 != 0)) {
          func_0x000058d0(0x8efa);
          return 0;
        }
        iVar7 = (uint)*(byte *)0x589e * 8;
        iVar6 = (uint)*(byte *)(iVar7 + -0x45e8) * 8;
        local_8 = (undefined)iVar3;
        *(undefined *)(iVar7 + -0x45e6) = local_8;
        *(undefined *)(iVar6 + 0x5c5c) = local_8;
        local_a = (undefined)iVar5;
        *(undefined *)(iVar7 + -0x45e5) = local_a;
        *(undefined *)(iVar6 + 0x5c5d) = local_a;
        func_0x0000bf3a(iVar5,iVar3);
      }
      return 1;
    }
    func_0x000058d0(0x8ef2);
    uVar1 = *(undefined *)0x589e;
    uVar4 = 6;
  }
  uVar4 = attempt_to_exit(uVar4,uVar1);
  return uVar4;
}


// FUN_0000_1ea4
void __cdecl16near check_for_lb_mirror(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = *0x589e * 8;
  if (SPRITE_FLAGS[iVar1] != 0 &&
     (SPRITE_FLAGS[iVar1] & 0x20) == 0) &&
     (*(iVar1 + -0x45e5) == 2)) &&
     ((MKIND(*(*(iVar1 + -0x45e6) + 0xac74)) == LORD_BRITISH_IN_MIRROR)) {
    *EXIT_DIRECTION_FROM_COMBAT = ED_MIRROR;
    func_0x0000573a(10,iVar1 + -0x45ec);
    func_0x0000be1a(*(undefined *)0x589e);
    func_0x000058d0(0x8f02);
    func_0x0000842e(0x28,1,2000,0x4b0);
    *ACTIVE_PLAYER = 0xff;
    func_0x00006980();
    func_0x0000be02(-1 - *0x589e);
    func_0x00009990();
  }
  return;
}



undefined2 FUN_0000_1f26(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  func_0x000058d0(param_2);
  if (param_1 == 1) {
    uVar1 = 0x8f12;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8f1a;
  }
  else {
    if (param_1 != 3) goto LAB_0000_1f4b;
    uVar1 = 0x8f24;
  }
  func_0x000058d0(uVar1);
LAB_0000_1f4b:
  func_0x0000573a(10);
  func_0x00006340(0x96,0xdc);
  func_0x00006340(0x96,0x96);
  return 1;
}



int FUN_0000_1f7a(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  byte *local_c;
  byte *local_a;
  int local_8;
  
  local_8 = 0;
  func_0x000058d0(0x8f3a);
  iVar3 = 0;
  local_a = (byte *)0xba16;
  local_c = (byte *)0xba17;
  while (((bVar1 = *local_a, (bVar1 & 0x80) == 0 || (iVar2 = func_0x000096c6(iVar3), iVar2 != 0)) ||
         (*local_c != param_1))) {
    local_a = local_a + 8;
    local_c = local_c + 8;
    iVar3 = iVar3 + 1;
    if (0x1f < iVar3) {
LAB_0000_1fcd:
      if (local_8 == 0) {
        func_0x000058d0(0x8f4c);
      }
      else {
        *ACTIVE_PLAYER = (undefined)param_1;
        func_0x0000be1a(iVar3);
        func_0x0000573a(10);
        func_0x00006980();
      }
      return local_8;
    }
  }
  if ((bVar1 & 0x2c) == 0) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  goto LAB_0000_1fcd;
}



void FUN_0000_203e(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  if (*EXIT_DIRECTION_FROM_COMBAT == ED_MIRROR) {
    func_0x0000bcca();
  }
  puVar5 = (undefined2 *)0x5c5a;
  puVar4 = (undefined2 *)0xa9fc;
  do {
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    puVar5[3] = puVar4[3];
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar4 < (undefined2 *)0xaafc);
  if ((*COMBAT_TYPE_FLAGS & (CTF_DUNGEON | 2)) == 0) {
    if (param_1 < 0x20) {
      param_1 = param_1 * 8;
      pbVar3 = (byte *)(param_1 + 0x5c5a);
      if ((*(char *)0x58a3 == '\0') || ((*pbVar3 & 0xfc) != 0x2c)) {
        *(undefined *)(param_1 + 0x5c5e) = 0;
        *(undefined *)(param_1 + 0x5c5d) = 0;
        *(undefined *)(param_1 + 0x5c5c) = 0;
        *(undefined *)(param_1 + 0x5c5b) = 0;
        *pbVar3 = 0;
      }
      else {
        pbVar1 = pbVar3;
        *pbVar1 = *pbVar1 - 8;
        pcVar2 = (char *)(param_1 + 0x5c5b);
        *pcVar2 = *pcVar2 + -8;
        *(undefined *)(param_1 + 0x5c5f) = 99;
        *(undefined *)(param_1 + 0x5c61) = 2;
      }
    }
    func_0x0000573a(10);
    *PARTY_LOCATION = *(undefined *)0x5894;
  }
  return;
}



int FUN_0000_20d8(int pc_num, uint y, uint x)

{
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = 1;
  if (x < 0xb && y < 0xb) {
    local_6 = func_0x0000bdf6(y, x, *(pc_num * 8 + -0x45e8) * 8 + 0x5c5a));
    local_6 = 1 - local_6;
  } else if (SPRITE_FLAGS[pc_num * 8] & 2) != 0) {
    local_6 = 0;
  }
  return local_6;
}



bool FUN_0000_2148(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_6;
  
  local_6 = 0;
  uVar2 = (uint)*(byte *)(param_1 * 8 + -0x45e6);
  uVar3 = (uint)*(byte *)(param_1 * 8 + -0x45e5);
  local_c = 0;
  do {
    if (local_c == 0) {
      uVar3++;
    }
    else if (local_c == 1) {
LAB_0000_21ae:
      uVar3--;
      uVar2++;
    }
    else if (local_c == 2) {
      uVar2 -= 2;
    }
    else if (local_c == 3) goto LAB_0000_21ae;
    iVar1 = FUN_0000_20d8(param_1,uVar3,uVar2);
    if (iVar1 != 0) {
      local_6++;
    }
    local_c++;
    if (local_c > 3) {
      return local_6 == 4;
    }
  } while( true );
}



int __cdecl16near FUN_0000_21ce(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  pbVar2 = (byte *)0xba16;
  pbVar3 = (byte *)0xba17;
  while (((*pbVar2 & 1) == 0 || ((*pbVar2 & 0x80) == 0))) {
    pbVar2 = pbVar2 + 8;
    pbVar3 = pbVar3 + 8;
    local_4 = local_4 + 1;
    if (5 < local_4) {
LAB_0000_222d:
      if (local_4 == 6) {
        local_4 = -1;
      }
      return local_4;
    }
  }
  pbVar1 = pbVar2;
  *pbVar1 = *pbVar1 & 0xfe;
  func_0x000058d0((uint)*pbVar3 * 0x20 + 0x55a8);
  func_0x000058d0(0x8f56);
  func_0x00006212(2,1000,30000,1,0xc1c);
  func_0x0000aee0(0x23,*pbVar3);
  func_0x0000a92e(local_4);
  goto LAB_0000_222d;
}


