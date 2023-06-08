#define MAX_NPCS 32

#define NPC_TYPES SAVED_GAM(0x0ff8)
#define SPRITE_ACTIVE SAVED_GAM(0x09c6)
#define SPRITE_TILES SAVED_GAM(0x09c0)
#define SPRITE_ANIM SAVED_GAM(0x09c4)
#define SPRITE_X_COORDS SAVED_GAM(0x09ba)
#define SPRITE_Y_COORDS SAVED_GAM(0x09bc)
#define SPRITE_Z_COORDS SAVED_GAM(0x09be)

#define OTHER_X_COORDS SAVED_GAM(0x06b6)
#define OTHER_Y_COORDS SAVED_GAM(0x06b7)

#define SPRITE_STATES SAVED_GAM(0x09b8)

#define SS_CONTINUE 0
#define SS_START_ACTIVITY 1
#define SS_WALK_TO_TARGET 2
// This one's a guess:
#define SS_FLEE 3
#define SS_WARP_DOWN 4
#define SS_WARP_UP 5
#define SS_GOING_UP 6
#define SS_GOING_DOWN 7
#define SS_WARP_TO_TARGET 8

#define PARTY_Z_COORD SAVED_GAM(0x02ef)

#define MOVEMENT_LIST_PTRS SAVED_GAM(0x0fb8)
#define MOVEMENT_LIST_TABLE SAVED_GAM(0x0bb8)

#define NPC_SCHEDULES SAVED_GAM(0x07b8)
#define NPC_SCHED_X_COORDS SAVED_GAM(0x07bb)
#define NPC_SCHED_Y_COORDS SAVED_GAM(0x07be)
#define NPC_SCHED_Z_COORDS SAVED_GAM(0x07c1)
#define NPC_SCHED_PERIOD_0 SAVED_GAM(0x07c4)
#define NPC_SCHED_PERIOD_1 SAVED_GAM(0x07c5)
#define NPC_SCHED_PERIOD_2 SAVED_GAM(0x07c6)
#define NPC_SCHED_PERIOD_3 SAVED_GAM(0x07c7)

#define NPC_BEHAVIOR_JUMP_TABLE DATA_OVL(0x0b62)

#define SEEKING_LADDER_UP MEM(0xffff)
#define SEEKING_LADDER_DOWN MEM(0xfffe)

#define LADDER_UP 200
#define LADDER_DOWN 201

#define IS_STAIRS(n) ((n&0xf4) == 0xc4)

#define RAT 144
#define SHADOWLORD 252

#define NPC_WALKABLE_BITMAP DATA_OVL(0x368e)

#define GROUND_TILES MEM(0x6608)

void init_npcs_upon_party_arrival(int hour) {
  int period_id;
  int index;
  int offset;
  int npc_slot;
  undefined2 unaff_DS;
  undefined2 *local_14;
  undefined *local_12;
  undefined2 *local_10;
  undefined2 *local_8;
  
  sprite_state_p = &SPRITE_STATES[1];
  int last_sprite_state_p;
  offset = 0x10;
  local_10 = (undefined2 *)SAVED_GAM(0x0fba);
  local_12 = (undefined *)SAVED_GAM(0x0bd8);
  local_14 = (undefined2 *)SAVED_GAM(0x101e);
  for (npc_slot = 1; npc_slot < 0x20; npc_slot++) {
    last_sprite_state_p = sprite_state_p;
    if (NPC_TYPES[npc_slot] != 0) {
      // Any NPC that actually exists
      period_id = get_period_id(hour, npc_slot);
      *sprite_state_p = SS_START_ACTIVITY;
      index = offset + period_id;
      SPRITE_X_COORDS[offset] = NPC_SCHED_X_COORDS[index];
      SPRITE_Y_COORDS[offset] = NPC_SCHED_Y_COORDS[index];
      SPRITE_Z_COORDS[offset] = NPC_SCHED_Z_COORDS[index];
      SPRITE_TILES[offset] = NPC_TYPES[npc_slot];
      SPRITE_ACTIVE[offset] = period_id;
      SPRITE_ANIM[offset] = 0;
      *local_10 = MEM(0xffff);
      *local_12 = 0;
      last_sprite_state_p = local_14;
    }
    *last_sprite_state_p = 0;
    sprite_state_p += 8;
    offset += 0x10;
    local_10++;
    local_12 += 0x20;
    local_14++;
    npc_slot++;
  }
}



int FUN_0000_01a0(npc_slot, sprite_state_bool, y, x) {
  undefined2 local_4;
  
  if (sprite_state_bool == 0) {
    local_4 = SEEKING_LADDER_DOWN;
  } else {
    local_4 = SEEKING_LADDER_UP;
  }
  return FUN_0000_032c(npc_slot, local_4, 0, 0, y, x);
}


// Seek ladder. But is this called in dungeon.c and shoppes2.c, or are those just
// different overlays that get put at the same memory address?
void FUN_0000_01d2(int npc_slot,uint param_2,int param_3,int param_4,int y,int x)

{
  int period_id;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int x;
  byte *pbVar6;
  undefined2 unaff_DS;
  int local_16;
  char ladder_sought;
  int y;
  
  if (param_2 == SEEKING_LADDER_UP) {
    ladder_sought = LADDER_UP;
  }
  if (param_2 == SEEKING_LADDER_DOWN) {
    ladder_sought = LADDER_DOWN;
  }
  period_id = get_period_id(*(undefined *)SAVED_GAM(0x02d9),npc_slot);
  y = 0;
  local_16 = 0;
  do {
    x = 0;
    do {
      iVar2 = score_potential_move(period_id,npc_slot,*PARTY_Z_COORD,y,x);
      if (iVar2 == 0) {
        *(undefined *)(local_16 + *(int *)DATA_OVL(0x0c52) + x) = 0x90;
      }
      else {
        *(undefined *)(local_16 + *(int *)DATA_OVL(0x0c52) + x) = 0;
      }
      if (((int)param_2 < 0) && (*(char *)(local_16 + x + GROUND_TILES) == ladder_sought)) {
        *(undefined *)(*(int *)DATA_OVL(0x0c52) + local_16 + x) = 5;
      }
      x = x + 1;
    } while (x < 0x20);
    local_16 = local_16 + 0x20;
    y = y + 1;
  } while (y < 0x20);
  npc_slot = npc_slot * 0x10;
  pbVar6 = (byte *)SAVED_GAM(0x07ac);
  do {
    if (0x3f < *pbVar6) {
      x = FUN_0000_06a0(*(undefined2 *)(npc_slot + SPRITE_Y_COORDS),*(undefined2 *)(npc_slot + SPRITE_X_COORDS),
                            pbVar6[3],pbVar6[2]);
      if (x < 4) {
        *(undefined *)((uint)pbVar6[3] * 0x20 + (uint)pbVar6[2] + *(int *)DATA_OVL(0x0c52)) = 0x90;
      }
    }
    pbVar6 = pbVar6 + -8;
  } while ((byte *)SAVED_GAM(0x06b4) < pbVar6);
  uVar3 = (uint)*(byte *)OTHER_Y_COORDS;
  uVar4 = (uint)*(byte *)OTHER_X_COORDS;
  x = FUN_0000_06a0(*(undefined2 *)(npc_slot + SPRITE_Y_COORDS),*(undefined2 *)(npc_slot + SPRITE_X_COORDS),uVar3,
                        uVar4);
  if (x < 4) {
    *(undefined *)(uVar3 * 0x20 + *(int *)DATA_OVL(0x0c52) + uVar4) = 0x90;
  }
  if (param_2 < MEM(0x8000)) {
    *(undefined *)(param_3 * 0x20 + param_4 + *(int *)DATA_OVL(0x0c52)) = 5;
  }
  *(undefined *)(y * 0x20 + x + *(int *)DATA_OVL(0x0c52)) = 0x46;
  return;
}


bool FUN_0000_032c(undefined2 npc_slot,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 y,undefined2 x)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  byte local_50 [32];
  uint local_30;
  byte local_2e [32];
  int local_e;
  int local_c;
  uint local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  local_e = 0;
  local_c = 0;
  local_4 = 1;
  FUN_0000_01d2(npc_slot,param_2,param_3,param_4,y,x);
  local_2e[0] = (byte)x;
  local_50[0] = (byte)y;
  do {
    if (local_e != 0) break;
    local_a = (uint)local_2e[local_c];
    local_8 = (uint)local_50[local_c];
    local_30 = (uint)(*(byte *)(local_8 * 0x20 + *(int *)DATA_OVL(0x0c52) + local_a) >> 4);
    local_6 = 0;
    do {
      bVar3 = false;
      if (local_30 == 1) {
        local_a = local_a - 1;
        uVar6 = local_a;
LAB_0000_03b7:
        uVar5 = local_8;
        if ((int)uVar6 < 0) goto LAB_0000_03b9;
      }
      else {
        if (local_30 == 2) {
          uVar5 = local_8 + 1;
          iVar2 = local_8 - 0x1f;
          bVar7 = uVar5 == 0x20;
          uVar6 = uVar5;
        }
        else {
          if (local_30 != 3) {
            if (local_30 == 4) {
              local_8 = local_8 - 1;
              uVar6 = local_8;
              goto LAB_0000_03b7;
            }
            goto LAB_0000_03bc;
          }
          uVar6 = local_a + 1;
          iVar2 = local_a - 0x1f;
          bVar7 = iVar2 == 0;
          uVar5 = local_8;
          local_a = uVar6;
        }
        local_8 = uVar5;
        if (!bVar7 && SBORROW2(uVar6,0x20) == iVar2 < 0) {
LAB_0000_03b9:
          bVar3 = true;
          local_8 = uVar5;
        }
      }
LAB_0000_03bc:
      if ((!bVar3) && (*(byte *)(local_8 * 0x20 + *(int *)DATA_OVL(0x0c52) + local_a) < 0x10)) {
        pbVar4 = (byte *)(local_8 * 0x20 + *(int *)DATA_OVL(0x0c52) + local_a);
        bVar1 = *pbVar4;
        *pbVar4 = (char)local_30 << 4;
        if ((bVar1 & 0xf) == 5) {
          local_e = 1;
          *(uint *)SAVED_GAM(0x02d0) = local_a;
          *(uint *)SAVED_GAM(0x02d2) = local_8;
          break;
        }
        if (local_4 != local_c) {
          local_2e[local_4] = (byte)local_a;
          local_50[local_4] = (byte)local_8;
          local_4 = local_4 + 1;
        }
        if (0x1f < local_4) {
          local_4 = 0;
        }
      }
      local_e = 0;
      local_30 = (local_30 & 3) + 1;
      local_a = (uint)local_2e[local_c];
      local_8 = (uint)local_50[local_c];
      local_6 = local_6 + 1;
    } while (local_6 < 4);
    if (local_e == 1) break;
    local_c = local_c + 1;
    if (local_c == 0x20) {
      local_c = 0;
    }
  } while (local_c != local_4);
  return local_e != 0;
}



int FUN_0000_04ac(int param_1,int param_2,undefined2 param_3_00,int param_3)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  undefined2 unaff_DS;
  
  cVar2 = '\0';
  iVar9 = 0;
  *(undefined2 *)(param_3 * 2 + MOVEMENT_LIST_PTRS) = 0;
  bVar12 = *(byte *)(param_1 * 0x20 + param_2 + *(int *)DATA_OVL(0x0c52));
  bVar11 = bVar12 >> 4;
  bVar3 = bVar11;
  do {
    bVar12 = bVar12 & 0xf;
    if (bVar11 == 1) {
      param_2 = param_2 + 1;
    }
    else if (bVar11 == 2) {
      param_1 = param_1 + -1;
    }
    else if (bVar11 == 3) {
      param_2 = param_2 + -1;
    }
    else if (bVar11 == 4) {
      param_1 = param_1 + 1;
    }
    if ((bVar3 == bVar11) && (bVar12 != 6)) {
      cVar2 = cVar2 + '\x01';
    }
    if ((bVar3 != bVar11) || (bVar12 == 6)) {
      *(char *)(param_3 * 0x20 + iVar9 + MOVEMENT_LIST_TABLE) = cVar2;
      *(byte *)(param_3 * 0x20 + iVar9 + SAVED_GAM(0x0bb9)) = bVar3;
      iVar9 = iVar9 + 2;
      if (bVar12 == 6) break;
      cVar2 = '\x01';
      bVar3 = bVar11;
    }
    bVar12 = *(byte *)(param_1 * 0x20 + param_2 + *(int *)DATA_OVL(0x0c52));
    bVar11 = bVar12 >> 4;
  } while (iVar9 < 0x20);
  iVar4 = iVar9 + -2;
  if (-1 < iVar4) {
    param_3 = param_3 * 0x20;
    iVar10 = 0;
    do {
      puVar5 = (undefined *)(param_3 + iVar10 + MOVEMENT_LIST_TABLE);
      uVar1 = *puVar5;
      puVar6 = (undefined *)(param_3 + iVar4 + MOVEMENT_LIST_TABLE);
      *puVar5 = *puVar6;
      *puVar6 = uVar1;
      pcVar7 = (char *)(param_3 + iVar10 + SAVED_GAM(0x0bb9));
      cVar2 = *pcVar7;
      pcVar8 = (char *)(param_3 + iVar4 + SAVED_GAM(0x0bb9));
      *pcVar7 = (*pcVar8 + 1U & 3) + 1;
      *pcVar8 = (cVar2 + 1U & 3) + 1;
      iVar10 = iVar10 + 2;
      iVar4 = iVar4 + -2;
    } while (iVar10 <= iVar4);
  }
  return iVar9;
}



void FUN_0000_0632(int param_1)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 1) {
    piVar1 = (int *)SAVED_GAM(0x02d0);
    *piVar1 = *piVar1 + 1;
    if (0x20 < *(int *)SAVED_GAM(0x02d2)) {
      *(undefined2 *)SAVED_GAM(0x02d0) = 0x20;
    }
  }
  else if (param_1 == 2) {
    piVar1 = (int *)SAVED_GAM(0x02d2);
    *piVar1 = *piVar1 + -1;
    if (*(int *)SAVED_GAM(0x02d0) < 0) {
      *(undefined2 *)SAVED_GAM(0x02d2) = 0;
    }
  }
  else if (param_1 == 3) {
    piVar1 = (int *)SAVED_GAM(0x02d0);
    *piVar1 = *piVar1 + -1;
    if (*(int *)SAVED_GAM(0x02d2) < 0) {
      *(undefined2 *)SAVED_GAM(0x02d0) = 0;
    }
  }
  else if ((param_1 == 4) && (piVar1 = (int *)SAVED_GAM(0x02d2), *piVar1 = *piVar1 + 1, 0x20 < *(int *)SAVED_GAM(0x02d0)))
  {
    *(undefined2 *)SAVED_GAM(0x02d2) = 0x20;
  }
  return;
}



int FUN_0000_06a0(int param_1,int param_2,int param_3,int param_4)

{
  int local_6;
  int local_4;
  
  local_4 = param_4 - param_2;
  local_6 = param_3 - param_1;
  if (local_4 < 0) {
    local_4 = -local_4;
  }
  if (local_6 < 0) {
    local_6 = -local_6;
  }
  return local_4 + local_6;
}


// Possible jump table target
void FUN_0000_06e4(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined uVar4;
  undefined uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined2 unaff_DS;
  int *local_24;
  int *local_22;
  int *local_20;
  int *local_1e;
  uint local_1c;
  uint local_1a;
  int local_18;
  uint local_16;
  undefined2 local_14;
  undefined2 local_12;
  int local_10 [4];
  int local_8;
  int local_6;
  uint local_4;
  
  local_18 = SAVED_GAM(0x06b4);
  iVar6 = param_2 * 0x10;
  local_8 = iVar6 + SPRITE_STATES;
  local_4 = (uint)*(byte *)(param_1 + iVar6 + NPC_SCHEDULES);
  local_6 = FUN_0000_06a0(*(undefined2 *)(iVar6 + SPRITE_Y_COORDS),*(undefined2 *)(iVar6 + SPRITE_X_COORDS),
                          *(undefined *)OTHER_Y_COORDS,*(undefined *)OTHER_X_COORDS);
  if ((local_6 == 1) && (3 < (int)local_4)) {
    if ((local_4 == 4) || (local_4 == 5)) {
      if (*(int *)(local_8 + 10) == 0) goto LAB_0000_075a;
      *(undefined *)SAVED_GAM(0x1018) = 0x74;
    }
    else {
      *(undefined *)SAVED_GAM(0x1018) = 0x61;
    }
    *(undefined *)SAVED_GAM(0x1019) = (undefined)param_2;
  }
  else {
LAB_0000_075a:
    local_16 = 1;
    uVar4 = *(undefined *)(local_18 + 3);
    uVar5 = *(undefined *)(local_18 + 2);
    piVar9 = local_10;
    local_24 = local_10;
    do {
      *(undefined2 *)SAVED_GAM(0x02d0) = *(undefined2 *)(local_8 + 2);
      *(undefined2 *)SAVED_GAM(0x02d2) = *(undefined2 *)(local_8 + 4);
      FUN_0000_0632(local_16);
      local_12 = *(undefined2 *)SAVED_GAM(0x02d0);
      local_14 = *(undefined2 *)SAVED_GAM(0x02d2);
      iVar6 = metascore_move(MEM(0xffff),param_2,local_14,*(undefined2 *)SAVED_GAM(0x02d0));
      if (iVar6 == 0) {
        *local_24 = 99;
      }
      else {
        iVar6 = FUN_0000_06a0(local_14,local_12,uVar4,uVar5);
        *piVar9 = iVar6;
      }
      piVar9 = piVar9 + 1;
      local_24 = local_24 + 1;
      local_16 = local_16 + 1;
    } while ((int)local_16 < 5);
    uVar8 = MEM(0xffff);
    local_6 = FUN_0000_06a0(*(undefined2 *)(local_8 + 4),*(undefined2 *)(local_8 + 2),
                            *(undefined *)(local_18 + 3),*(undefined *)(local_18 + 2));
    uVar7 = 1;
    local_24 = local_10;
    local_22 = local_10;
    local_20 = local_10;
    local_1e = &local_18;
    do {
      if (((int)uVar7 < 5) && (*local_24 != 99)) {
        if (local_4 == 3) {
          piVar1 = local_24;
          if (*piVar1 != local_6 && local_6 <= *piVar1) {
            if ((uVar8 == MEM(0xffff)) || (iVar6 = func_0x00007e02(1,0), iVar6 != 0)) {
              uVar8 = uVar7;
            }
            local_1a = uVar8;
            if (uVar7 == 4) break;
          }
        }
        else {
          local_1a = uVar7;
          if (*local_22 < local_6) break;
        }
      }
      if (((4 < (int)uVar7) && (*local_20 != 99)) && (local_1a = uVar7, *local_1e == local_6))
      break;
      local_24 = local_24 + 1;
      local_22 = local_22 + 1;
      local_20 = local_20 + 1;
      local_1e = local_1e + 1;
      uVar7 = uVar7 + 1;
      local_1a = uVar8;
    } while ((int)uVar7 < 8);
    local_16 = uVar7;
    if (((local_4 == 5) || (local_4 == 7)) && (iVar6 = func_0x00007e02(0x3f,0), iVar6 < 0x10)) {
      uVar8 = 1;
      piVar9 = local_10;
      local_1c = local_1a;
      do {
        if (((uVar8 != local_1a) && (*piVar9 != 99)) &&
           ((local_1c == local_1a || (iVar6 = func_0x00007e02(0x3f,0), iVar6 < 0x10)))) {
          local_1c = uVar8;
        }
        piVar9 = piVar9 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 5);
      local_1a = local_1c;
      local_16 = uVar8;
    }
    if (local_1a < MEM(0x8000)) {
      *(undefined2 *)SAVED_GAM(0x02d0) = *(undefined2 *)(local_8 + 2);
      *(undefined2 *)SAVED_GAM(0x02d2) = *(undefined2 *)(local_8 + 4);
      FUN_0000_0632(local_1a);
      iVar6 = *(int *)(local_8 + 0xc) * 8;
      uVar3 = *(undefined2 *)SAVED_GAM(0x02d0);
      *(undefined2 *)(local_8 + 2) = uVar3;
      *(undefined *)(iVar6 + OTHER_X_COORDS) = (char)uVar3;
      uVar3 = *(undefined2 *)SAVED_GAM(0x02d2);
      *(undefined2 *)(local_8 + 4) = uVar3;
      *(undefined *)(iVar6 + OTHER_Y_COORDS) = (char)uVar3;
      pbVar2 = (byte *)MEM(0x24e6);
      *pbVar2 = *pbVar2 | 2;
    }
  }
  return;
}


bool update_sprite_state(uint hour,int npc_slot) {
  byte npc_target_z;
  byte party_z;
  int npc_offset;
  undefined2 *sprite_state_p;
  int npc_schedule;
  undefined2 unaff_DS;
  int local_6;

  int period_id = -1;
  npc_offset = npc_slot * 0x10;
  sprite_state_p = &SPRITE_STATES[npc_offset];
  npc_schedule = NPC_SCHEDULES[npc_offset];

  // Check each of the four schedule slots
  for (local_6 = 0; local_6 < 4; local_6++) {
    if (npc_schedule[local_6 + 0xc] != hour) continue;

    period_id = get_period_id(hour,npc_slot);

    if (SPRITE_ACTIVE[npc_offset] == period_id) {
      *sprite_state_p = SS_START_ACTIVITY;
      break;
    }

    party_z = *PARTY_Z_COORD;

    npc_target_z = npc_schedule[period_id + 9];
    bool on_party_floor = SPRITE_Z_COORDS[npc_offset] == party_z;
    bool scheduled_for_party_floor = npc_target_z == party_z;

    if (on_party_floor && scheduled_for_party_floor) {
      *sprite_state_p = SS_WALK_TO_TARGET;
    } else if (on_party_floor) { // but not scheduled
      if (*npc_target_z <= party_z) {
        *sprite_state_p = SS_GOING_DOWN;
      } else {
        *sprite_state_p = SS_GOING_UP;
      }
    } else if (scheduled_for_party_floor) { // but not on it
      if (*npc_target_z <= party_z) {
        *sprite_state_p = SS_WARP_UP;
      } else {
        *sprite_state_p = SS_WARP_DOWN;
      }
    } else { // Neither on_party_floor nor scheduled_for_party_floor
      *sprite_state_p = SS_WARP_TO_TARGET;
    }
    break;
  }

  if (period_id < 0) return false;

  npc_schedule += period_id;
  byte scheduled_x = npc_schedule[3];
  byte scheduled_y = npc_schedule[6];

  if (SPRITE_X_COORDS[npc_offset] == scheduled_x &&
      SPRITE_Y_COORDS[npc_offset] == scheduled_y &&
      on_party_floor) {
    *sprite_state_p = SS_START_ACTIVITY;
  }

  return true;
}


undefined2 is_desirable_vertical_route(int period_id,int npc_slot)

{
  int iVar3;
  npc_slot *= 0x10;
  iVar3 = SPRITE_ANIM[npc_slot] * 8;
  int sprite = *get_sprite_at_coords(OTHER_Y_COORDS[iVar3],OTHER_X_COORDS[iVar3]);
  int target_floor = *NPC_SCHED_Z_COORDS[period_id + npc_slot];
  if (target_floor < *PARTY_Z_COORD) {
    if (sprite == LADDER_DOWN) {
      return 1;
    }
  } else if (sprite == LADDER_UP) {
    return 1;
  }
  if (IS_STAIRS(sprite) {
    return 1;
  }
  return 0;
}

// Returns 0 if the potential move is impossible (like a solid wall)
//         1 if it's a valid move
//         2 if it's the target for their current schedule
int score_potential_move(uint period_id, int npc_slot, uint z, uint y, uint x)

{
  byte tile;
  int iVar2;

  if ((((period_id < MEM(0x8000)) &&
       (iVar2 = NPC_SCHEDULES[period_id + npc_slot * 0x10],
        iVar2[3] == x)) &&
        iVar2[6] == y)) &&
        iVar2[9] == z)) {
    return 2;
  }

  if (x < 0 || y < 0 || x > 0x1f || y > 0x1f) {
    // Off the map; this seems to use a stone column in that case
    tile = *MEM(0x6a07);
  } else {
    tile = GROUND_TILES[x + y * 0x20];
  }

  if (SPRITE_STATES[npc_slot * 0x10] == SS_FLEE) && ((tile == LADDER_DOWN || (tile == LADDER_UP)))) {
    // This check seems unnecessary, because these two tiles have the bit clear below and
    // would cause 1 to be returned anyway. Maybe at some point, wandering NPCs were supposed
    // to avoid ladders unless they intended to use them? Or maybe this 1 should've been a 2?
    return 1;
  } else {
    int bitmap_index = tile >> 3;
    int byte_bit = tile & 7;
    int mask = 0x80 >> byte_bit;
    int bitmap_byte = NPC_WALKABLE_BITMAP[bitmap_index];
    return (bitmap_byte & mask) == 0;
  }
}



// Returns 0 if the potential move is impossible (like a solid wall)
//         1 if it's a valid move
//         2 if it's the target for their current schedule
int metascore_move(undefined2 period_id,int npc_slot,int y,int x)

{
  byte *sprite_p;
  uint sprite;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  uVar4 = 0;
  if ((((x < 0) || (0x1f < x)) || (y < 0)) || (0x1f < y)) {
    return 0;
  }
  sprite_p = get_sprite_at_coords(y,x);
  sprite = *sprite_p & 0xfc;
  int rv;
  if (NPC_TYPES[npc_slot] == SHADOWLORD) || sprite == 0x30) {
    rv = 1;
  } else if (sprite == RAT && SPRITE_STATES[npc_slot * 0x10]) != SS_WALK_TO_TARGET)) {
    rv = 0;
  } else {
    rv = score_potential_move(period_id,npc_slot,*PARTY_Z_COORD,y,x);
  }
  int foo = func_0x00009472(*PARTY_Z_COORD, y, x, x, sprite, 0);
  if (foo != 0) {
    rv = 0;
  }
  return rv;
}



void FUN_0000_0c50(int param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  uVar4 = func_0x00007e02(0xff,0);
  if ((uVar4 & 8) != 0) {
    uVar4 = func_0x0000981e(0x40);
    *(undefined2 *)SAVED_GAM(0x02d0) = *(undefined2 *)(param_5 + 2);
    *(undefined2 *)SAVED_GAM(0x02d2) = *(undefined2 *)(param_5 + 4);
    FUN_0000_0632((uVar4 & 3) + 1);
    uVar2 = *(undefined2 *)SAVED_GAM(0x02d0);
    uVar3 = *(undefined2 *)SAVED_GAM(0x02d2);
    if (((param_4 == 0) ||
        (iVar5 = FUN_0000_06a0(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),
                               *(undefined *)(param_3 + param_1 + 6),
                               *(undefined *)(param_3 + param_1 + 3)), iVar5 <= param_4)) &&
       (iVar5 = metascore_move(param_3,param_2,*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0)),
       iVar5 != 0)) {
      iVar5 = *(int *)(param_5 + 0xc) * 8;
      *(undefined2 *)(param_5 + 2) = uVar2;
      *(undefined *)(iVar5 + OTHER_X_COORDS) = (char)uVar2;
      *(undefined2 *)(param_5 + 4) = uVar3;
      *(undefined *)(iVar5 + OTHER_Y_COORDS) = (char)uVar3;
      pbVar1 = (byte *)MEM(0x24e6);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return;
}



void run_behavior(int period_id, int npc_slot)

{
  uint behavior = NPC_SCHEDULES[period_id + npc_slot * 0x10];
  if (behavior < 8) {
    //   WARNING: Could not emulate address calculation at 0x00000d30
    //   WARNING: Treating indirect jump as call
    //   (**(code **)(uVar1 * 2 + DATA_OVL(0x0b62)))();
    // ...which I'm interpreting as follows.
    // Weirdly, DATA_OVL(0x0b62) (i.e., DATA_OVL(0x0b62)) is supposed to correspond to DATA.OVL
    // offset MEM(0x0b62), but that's smack in the middle of a bunch of location
    // name text strings.
    NPC_BEHAVIOR_JUMP_TABLE[behavior * 2]();
  }
}


void update_npcs_behaviors(int hour) {
  byte *pbVar1;
  char *target_z_p;
  int *piVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int period_id;
  int npc_offset;
  int *sprite_state_p;
  int sprite_state;
  int iVar13;
  undefined2 unaff_DS;
  int local_14;
  int local_10;
  uint local_c;
  uint local_a;
  int local_6;
  int npc_slot;
 
  local_14 = 0;
  *(undefined *)SAVED_GAM(0x1018) = 0;
  *(undefined *)SAVED_GAM(0x1019) = 0;

  for (npc_slot = 1; npc_slot < MAX_NPCS; npc_slot++) {
    if (NPC_TYPES[npc_slot] == 0) continue;

    period_id = get_period_id(hour,npc_slot);
    npc_offset = npc_slot * 0x10;
    sprite_state_p = &SPRITE_STATES[npc_offset];

    bool at_destination = *sprite_state_p < 2;
    bool active_this_hour = update_sprite_state(hour,npc_slot);

    if (at_destination && !active_this_hour)) {
      if (SPRITE_Z_COORDS[npc_offset] == *PARTY_Z_COORD) {
        run_behavior(period_id, npc_slot);
      }
      continue;
    }

    sprite_state = *sprite_state_p;
    if (sprite_state < 4) {
      sprite_state = npc_slot * 2;
      if (MOVEMENT_LIST_PTRS[sprite_state]) < MEM(0x8000)) &&
         (iVar13 = npc_slot * 0x20,
         *(MOVEMENT_LIST_PTRS[sprite_state] + iVar13 + MOVEMENT_LIST_TABLE) != 0)) {
        *SAVED_GAM(0x02d0) = *(npc_offset + SPRITE_X_COORDS);
        *SAVED_GAM(0x02d2) = *(npc_offset + SPRITE_Y_COORDS);
        FUN_0000_0632(*(*(sprite_state + MOVEMENT_LIST_PTRS) + iVar13 + SAVED_GAM(0x0bb9)));
        local_a = *SAVED_GAM(0x02d0);
        local_c = *SAVED_GAM(0x02d2);
        iVar6 = metascore_move(period_id,npc_slot,local_c,*(undefined2 *)SAVED_GAM(0x02d0));
        if (iVar6 == 0) {
          npc_offset = npc_slot * 2;
          piVar3 = (npc_offset + SAVED_GAM(0x101c));
          *piVar3 = *piVar3 + 1;
          FUN_0000_0c50(npc_slot * 0x10 + NPC_SCHEDULES,npc_slot,period_id,0,npc_slot * 0x10 + SPRITE_STATES);
          if (3 < *(int *)(npc_offset + SAVED_GAM(0x101c))) {
            *(npc_offset + MOVEMENT_LIST_PTRS) = MEM(0xffff);
LAB_0000_10d6:
            *(npc_slot * 2 + SAVED_GAM(0x101c)) = 0;
          }
        }
        else { // iVar6 != 0
          iVar7 = *(int *)(npc_offset + SPRITE_ANIM) * 8;
          *(undefined *)(iVar7 + OTHER_X_COORDS) = (undefined)local_a;
          *(uint *)(npc_offset + SPRITE_X_COORDS) = local_a & 0xff;
          *(undefined *)(iVar7 + OTHER_Y_COORDS) = (undefined)local_c;
          *(uint *)(npc_offset + SPRITE_Y_COORDS) = local_c & 0xff;
          pbVar1 = (byte *)MEM(0x24e6);
          *pbVar1 = *pbVar1 | 2;
          pcVar8 = (char *)(*(int *)(sprite_state + MOVEMENT_LIST_PTRS) + iVar13 + MOVEMENT_LIST_TABLE);
          target_z_p = pcVar8;
          *target_z_p = *target_z_p + -1;
          *(undefined2 *)(sprite_state + SAVED_GAM(0x101c)) = 0;
          if (*pcVar8 == '\0') {
            piVar3 = (int *)(sprite_state + MOVEMENT_LIST_PTRS);
            *piVar3 = *piVar3 + 1;
            iVar7 = *(int *)(sprite_state + MOVEMENT_LIST_PTRS);
            piVar3 = (int *)(sprite_state + MOVEMENT_LIST_PTRS);
            *piVar3 = *piVar3 + 1;
            *(undefined *)(iVar7 + iVar13 + MOVEMENT_LIST_TABLE) = 0;
            if ((0x1f < *(int *)(sprite_state + MOVEMENT_LIST_PTRS)) ||
               (*(char *)(*(int *)(sprite_state + MOVEMENT_LIST_PTRS) + iVar13 + MOVEMENT_LIST_TABLE) == '\0')) {
              *(undefined2 *)(npc_slot * 2 + MOVEMENT_LIST_PTRS) = MEM(0xffff);
            }
            if (iVar6 == 2) {
              *(int *)(npc_offset + SPRITE_ACTIVE) = period_id;
              *sprite_state_p = 1;
              *(undefined2 *)(npc_slot * 2 + MOVEMENT_LIST_PTRS) = MEM(0xffff);
            }
          }
        }
      }
      else {  // Nothing in the movement list pointers table?
        if ((*(int *)(npc_slot * 2 + MOVEMENT_LIST_PTRS) == -1) && (*sprite_state_p == 3)) {
          period_id = get_period_id(hour,npc_slot);
          cVar4 = *PARTY_Z_COORD;
          target_z_p = NPC_SCHED_Z_COORDS[period_id + npc_slot * 0x10];
          if (cVar4 < *target_z_p) {
            *sprite_state_p = SS_GOING_UP;
          } else {
            *sprite_state_p = SS_GOING_DOWN;
          }
          return;
        }
        if (local_14 < 1) {
          if (*sprite_state_p != 1) {
            int an_offset = *(int *)(npc_slot * 2 + SAVED_GAM(0x101c));
            if ((an_offset < 200) &&
               ((an_offset == 0 || func_0x00007e02(2,0) == 1))) {
              if (*(int *)(npc_slot * 2 + MOVEMENT_LIST_PTRS) == -1) {
                local_14 = local_14 + 1;
                int some_offset = npc_slot * 0x10 + period_id;
                npc_offset = FUN_0000_032c(npc_slot,0,*(some_offset + NPC_SCHED_Y_COORDS),
                                       *(undefined *)(some_offset + NPC_SCHED_X_COORDS),
                                       *(undefined2 *)(npc_offset + SPRITE_Y_COORDS),
                                       *(undefined2 *)(npc_offset + SPRITE_X_COORDS));
                if (npc_offset != 0) {
                  FUN_0000_04ac(*(some_offset + NPC_SCHED_Y_COORDS),*(some_offset + NPC_SCHED_X_COORDS), 0,npc_slot);
                  goto LAB_0000_10d6;
                }
                *(undefined2 *)(npc_slot * 2 + SAVED_GAM(0x101c)) = 200;
              }
              FUN_0000_0c50(npc_slot * 0x10 + NPC_SCHEDULES,npc_slot,period_id,0,npc_slot * 0x10 + SPRITE_STATES);
            }
            else {
              sprite_state_p = (int *)(npc_slot * 2 + SAVED_GAM(0x101c));
              if (199 < *sprite_state_p) {
                piVar3 = sprite_state_p;
                *piVar3 = *piVar3 + 1;
              }
              sprite_state_p = (int *)(npc_slot * 2 + SAVED_GAM(0x101c));
              if (0xcc < *sprite_state_p) {
                *sprite_state_p = 0;
              }
            }
          }
        }
        else if (SPRITE_Z_COORDS[npc_offset] == *PARTY_Z_COORD) {
          FUN_0000_0d00(SPRITE_ACTIVE[npc_offset], npc_slot);
        }
      }
    }
    else if ((sprite_state == 4) || (sprite_state == 5)) {
      if (local_14 != 1) {
        local_14 = 1;
        if (*sprite_state_p == 4) {
          local_6 = 3;
        }
        else {
          local_6 = 4;
        }
        npc_offset = npc_slot * 0x10 + period_id;
        local_10 = FUN_0000_01a0(npc_slot,local_6 == 3,*(undefined *)(npc_offset + NPC_SCHED_Y_COORDS),
                                 *(undefined *)(npc_offset + NPC_SCHED_X_COORDS));
        if (local_10 != 0) {
          local_a = *(uint *)SAVED_GAM(0x02d0);
          local_c = *(uint *)SAVED_GAM(0x02d2);
          local_10 = FUN_0000_032c(npc_slot,local_6,*(undefined *)(npc_offset + NPC_SCHED_Y_COORDS),
                                   *(undefined *)(npc_offset + NPC_SCHED_X_COORDS),local_c,local_a);
        }
        if (local_10 != 0) {
          period_id = npc_slot * 0x10 + period_id;
          FUN_0000_04ac(*(undefined *)(period_id + NPC_SCHED_Y_COORDS),*(undefined *)(period_id + NPC_SCHED_X_COORDS),local_6,
                        npc_slot);
          bVar5 = *(byte *)(local_a + local_c * 0x20 + GROUND_TILES);
          if ((((local_6 == 3) && (bVar5 == 200)) || ((local_6 == 4 && (bVar5 == 0xc9)))) ||
             ((bVar5 & 0xfc) == 0xc4)) {
            func_0x0000d89a(*(undefined *)PARTY_Z_COORD,local_c,local_a,npc_slot);
          }
          *sprite_state_p = 2;
        }
      }
    }
    else {
      sprite_state = *sprite_state_p;
      if ((sprite_state == SS_GOING_UP) || (sprite_state == SS_GOING_DOWN) &&
          is_desirable_vertical_route(period_id,npc_slot) == 0)) {
        period_id = *sprite_state_p;
        if ((period_id != 2) && (local_14 != 1)) {
          local_14 = 1;
          if (period_id == 6) {
            local_6 = 1;
          }
          else {
            local_6 = 2;
          }
          local_10 = FUN_0000_01a0(npc_slot,local_6 == 1,*(undefined2 *)(npc_offset + SPRITE_Y_COORDS),
                                   *(undefined2 *)(npc_offset + SPRITE_X_COORDS));
          if (local_10 != 0) {
            local_a = *(uint *)SAVED_GAM(0x02d0);
            local_c = *(uint *)SAVED_GAM(0x02d2);
            local_10 = FUN_0000_032c(npc_slot,local_6,local_c,local_a,
                                     *(undefined2 *)(npc_offset + SPRITE_Y_COORDS),
                                     *(undefined2 *)(npc_offset + SPRITE_X_COORDS));
          }
          if (local_10 != 0) {
            FUN_0000_04ac(local_c,local_a,local_6,npc_slot);
            *sprite_state_p = 3;
          }
        }
      } else {
        npc_offset = npc_slot * 0x10 + period_id;
        func_0x0000d89a(NPC_SCHED_Z_COORDS[npc_offset], NPC_SCHED_Y_COORDS[npc_offset],
                        NPC_SCHED_X_COORDS[npc_offset], npc_slot);
        SPRITE_ACTIVE[npc_offset] = period_id;
        MOVEMENT_LIST_PTRS[npc_slot * 2] = MEM(0xffff);
        *sprite_state_p = 1;
      }
    }
  }
}

// NPC life goes: period 0, period 1, period 2, period 1, repeat forever
int get_period_id(int hour, int npc_slot) {
  int hours_into_period_0;
  int hours_into_period_1;
  int hours_into_period_2;
  int hours_into_period_3;

  npc_slot *= 0x10;
  hours_into_period_0 = hour - NPC_SCHED_PERIOD_0[npc_slot];
  hours_into_period_1 = hour - NPC_SCHED_PERIOD_1[npc_slot];
  hours_into_period_2 = hour - NPC_SCHED_PERIOD_2[npc_slot];
  hours_into_period_3 = hour - NPC_SCHED_PERIOD_3[npc_slot];

  int period_id;
  int min_hours;

  if (hours_into_period_1 >= hours_into_period_0) {
    period_id = 0;
    min_hours = hours_into_period_0;
  } else {
    period_id = 1;
    min_hours = hours_into_period_1;
  }

  if (hours_into_period_2 < min_hours) {
    period_id = 2;
    min_hours = hours_into_period_2;
  }

  if (hours_into_period_3 < min_hours) {
    period_id = 1;
  }

  return period_id;
}


