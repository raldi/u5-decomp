typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void npc_124c_00d6(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 *local_14;
  undefined *local_12;
  undefined2 *local_10;
  uint *local_c;
  undefined2 *local_a;
  undefined2 *local_8;
  
  iVar5 = 1;
  local_8 = (undefined2 *)0x5f6e;
  local_a = (undefined2 *)0x5f6e;
  local_c = (uint *)0x5f70;
  iVar4 = 0x10;
  local_10 = (undefined2 *)0x6560;
  local_12 = (undefined *)0x617e;
  local_14 = (undefined2 *)0x65c4;
  do {
    puVar3 = local_8;
    if (*(char *)(iVar5 + 0x659e) != '\0') {
      iVar1 = npc_124c_12e0(param_1,iVar5);
      *local_a = 1;
      iVar2 = iVar4 + iVar1;
      *local_c = (uint)*(byte *)(iVar2 + 0x5d61);
      *(uint *)(iVar4 + 0x5f62) = (uint)*(byte *)(iVar2 + 0x5d64);
      *(uint *)(iVar4 + 0x5f64) = (uint)*(byte *)(iVar2 + 0x5d67);
      *(uint *)(iVar4 + 0x5f66) = (uint)*(byte *)(iVar5 + 0x659e);
      *(int *)(iVar4 + 0x5f6c) = iVar1;
      *(undefined2 *)(iVar4 + 0x5f6a) = 0;
      *local_10 = 0xffff;
      *local_12 = 0;
      puVar3 = local_14;
    }
    *puVar3 = 0;
    local_8 = local_8 + 8;
    local_a = local_a + 8;
    local_c = local_c + 8;
    iVar4 = iVar4 + 0x10;
    local_10 = local_10 + 1;
    local_12 = local_12 + 0x20;
    local_14 = local_14 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  return;
}



void npc_124c_01a0(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 local_4;
  
  if (param_2 == 0) {
    local_4 = 0xfffe;
  }
  else {
    local_4 = 0xffff;
  }
  npc_124c_032c(param_1,local_4,0,0,param_3,param_4);
  return;
}



void npc_124c_01d2(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  int local_16;
  char local_e;
  int local_6;
  
  if (param_2 == 0xffff) {
    local_e = -0x38;
  }
  if (param_2 == 0xfffe) {
    local_e = -0x37;
  }
  uVar1 = npc_124c_12e0(*(undefined *)0x587f,param_1);
  local_6 = 0;
  local_16 = 0;
  do {
    iVar5 = 0;
    do {
      iVar2 = npc_124c_0adc(uVar1,param_1,*(undefined *)0x5895,local_6,iVar5);
      if (iVar2 == 0) {
        *(undefined *)(local_16 + *(int *)0xb11c + iVar5) = 0x90;
      }
      else {
        *(undefined *)(local_16 + *(int *)0xb11c + iVar5) = 0;
      }
      if (((int)param_2 < 0) && (*(char *)(local_16 + iVar5 + 0x6608) == local_e)) {
        *(undefined *)(*(int *)0xb11c + local_16 + iVar5) = 5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    local_16 = local_16 + 0x20;
    local_6 = local_6 + 1;
  } while (local_6 < 0x20);
  param_1 = param_1 * 0x10;
  pbVar6 = (byte *)0x5d52;
  do {
    if (0x3f < *pbVar6) {
      iVar5 = npc_124c_06a0(*(undefined2 *)(param_1 + 0x5f62),*(undefined2 *)(param_1 + 0x5f60),
                            pbVar6[3],pbVar6[2]);
      if (iVar5 < 4) {
        *(undefined *)((uint)pbVar6[3] * 0x20 + (uint)pbVar6[2] + *(int *)0xb11c) = 0x90;
      }
    }
    pbVar6 = pbVar6 + -8;
  } while ((byte *)0x5c5a < pbVar6);
  uVar3 = (uint)*(byte *)0x5c5d;
  uVar4 = (uint)*(byte *)0x5c5c;
  iVar5 = npc_124c_06a0(*(undefined2 *)(param_1 + 0x5f62),*(undefined2 *)(param_1 + 0x5f60),uVar3,
                        uVar4);
  if (iVar5 < 4) {
    *(undefined *)(uVar3 * 0x20 + *(int *)0xb11c + uVar4) = 0x90;
  }
  if (param_2 < 0x8000) {
    *(undefined *)(param_3 * 0x20 + param_4 + *(int *)0xb11c) = 5;
  }
  *(undefined *)(param_5 * 0x20 + param_6 + *(int *)0xb11c) = 0x46;
  return;
}



bool npc_124c_032c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6)

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
  npc_124c_01d2(param_1,param_2,param_3,param_4,param_5,param_6);
  local_2e[0] = (byte)param_6;
  local_50[0] = (byte)param_5;
  do {
    if (local_e != 0) break;
    local_a = (uint)local_2e[local_c];
    local_8 = (uint)local_50[local_c];
    local_30 = (uint)(*(byte *)(local_8 * 0x20 + *(int *)0xb11c + local_a) >> 4);
    local_6 = 0;
    do {
      bVar3 = false;
      if (local_30 == 1) {
        local_a = local_a - 1;
        uVar6 = local_a;
LAB_1000_2877:
        uVar5 = local_8;
        if ((int)uVar6 < 0) goto LAB_1000_2879;
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
              goto LAB_1000_2877;
            }
            goto LAB_1000_287c;
          }
          uVar6 = local_a + 1;
          iVar2 = local_a - 0x1f;
          bVar7 = iVar2 == 0;
          uVar5 = local_8;
          local_a = uVar6;
        }
        local_8 = uVar5;
        if (!bVar7 && SBORROW2(uVar6,0x20) == iVar2 < 0) {
LAB_1000_2879:
          bVar3 = true;
          local_8 = uVar5;
        }
      }
LAB_1000_287c:
      if ((!bVar3) && (*(byte *)(local_8 * 0x20 + *(int *)0xb11c + local_a) < 0x10)) {
        pbVar4 = (byte *)(local_8 * 0x20 + *(int *)0xb11c + local_a);
        bVar1 = *pbVar4;
        *pbVar4 = (char)local_30 << 4;
        if ((bVar1 & 0xf) == 5) {
          local_e = 1;
          *(uint *)0x5876 = local_a;
          *(uint *)0x5878 = local_8;
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



int npc_124c_04ac(int param_1,int param_2,undefined2 param_3_00,int param_3)

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
  *(undefined2 *)(param_3 * 2 + 0x655e) = 0;
  bVar12 = *(byte *)(param_1 * 0x20 + param_2 + *(int *)0xb11c);
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
      *(char *)(param_3 * 0x20 + iVar9 + 0x615e) = cVar2;
      *(byte *)(param_3 * 0x20 + iVar9 + 0x615f) = bVar3;
      iVar9 = iVar9 + 2;
      if (bVar12 == 6) break;
      cVar2 = '\x01';
      bVar3 = bVar11;
    }
    bVar12 = *(byte *)(param_1 * 0x20 + param_2 + *(int *)0xb11c);
    bVar11 = bVar12 >> 4;
  } while (iVar9 < 0x20);
  iVar4 = iVar9 + -2;
  if (-1 < iVar4) {
    param_3 = param_3 * 0x20;
    iVar10 = 0;
    do {
      puVar5 = (undefined *)(param_3 + iVar10 + 0x615e);
      uVar1 = *puVar5;
      puVar6 = (undefined *)(param_3 + iVar4 + 0x615e);
      *puVar5 = *puVar6;
      *puVar6 = uVar1;
      pcVar7 = (char *)(param_3 + iVar10 + 0x615f);
      cVar2 = *pcVar7;
      pcVar8 = (char *)(param_3 + iVar4 + 0x615f);
      *pcVar7 = (*pcVar8 + 1U & 3) + 1;
      *pcVar8 = (cVar2 + 1U & 3) + 1;
      iVar10 = iVar10 + 2;
      iVar4 = iVar4 + -2;
    } while (iVar10 <= iVar4);
  }
  return iVar9;
}



void npc_124c_0632(int param_1)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 1) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
    if (0x20 < *(int *)0x5878) {
      *(undefined2 *)0x5876 = 0x20;
    }
  }
  else if (param_1 == 2) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
    if (*(int *)0x5876 < 0) {
      *(undefined2 *)0x5878 = 0;
    }
  }
  else if (param_1 == 3) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
    if (*(int *)0x5878 < 0) {
      *(undefined2 *)0x5876 = 0;
    }
  }
  else if ((param_1 == 4) && (piVar1 = (int *)0x5878, *piVar1 = *piVar1 + 1, 0x20 < *(int *)0x5876))
  {
    *(undefined2 *)0x5878 = 0x20;
  }
  return;
}



int npc_124c_06a0(int param_1,int param_2,int param_3,int param_4)

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



void npc_124c_06e4(int param_1,int param_2)

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
  
  local_18 = 0x5c5a;
  iVar6 = param_2 * 0x10;
  local_8 = iVar6 + 0x5f5e;
  local_4 = (uint)*(byte *)(param_1 + iVar6 + 0x5d5e);
  local_6 = npc_124c_06a0(*(undefined2 *)(iVar6 + 0x5f62),*(undefined2 *)(iVar6 + 0x5f60),
                          *(undefined *)0x5c5d,*(undefined *)0x5c5c);
  if ((local_6 == 1) && (3 < (int)local_4)) {
    if ((local_4 == 4) || (local_4 == 5)) {
      if (*(int *)(local_8 + 10) == 0) goto LAB_124c_075a;
      *(undefined *)0x65be = 0x74;
    }
    else {
      *(undefined *)0x65be = 0x61;
    }
    *(undefined *)0x65bf = (undefined)param_2;
  }
  else {
LAB_124c_075a:
    local_16 = 1;
    uVar4 = *(undefined *)(local_18 + 3);
    uVar5 = *(undefined *)(local_18 + 2);
    piVar9 = local_10;
    local_24 = local_10;
    do {
      *(undefined2 *)0x5876 = *(undefined2 *)(local_8 + 2);
      *(undefined2 *)0x5878 = *(undefined2 *)(local_8 + 4);
      npc_124c_0632(local_16);
      local_12 = *(undefined2 *)0x5876;
      local_14 = *(undefined2 *)0x5878;
      iVar6 = npc_124c_0b9e(0xffff,param_2,local_14,*(undefined2 *)0x5876);
      if (iVar6 == 0) {
        *local_24 = 99;
      }
      else {
        iVar6 = npc_124c_06a0(local_14,local_12,uVar4,uVar5);
        *piVar9 = iVar6;
      }
      piVar9 = piVar9 + 1;
      local_24 = local_24 + 1;
      local_16 = local_16 + 1;
    } while ((int)local_16 < 5);
    uVar8 = 0xffff;
    local_6 = npc_124c_06a0(*(undefined2 *)(local_8 + 4),*(undefined2 *)(local_8 + 2),
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
            if ((uVar8 == 0xffff) || (iVar6 = ultima_1000_2092(1,0), iVar6 != 0)) {
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
    if (((local_4 == 5) || (local_4 == 7)) && (iVar6 = ultima_1000_2092(0x3f,0), iVar6 < 0x10)) {
      uVar8 = 1;
      piVar9 = local_10;
      local_1c = local_1a;
      do {
        if (((uVar8 != local_1a) && (*piVar9 != 99)) &&
           ((local_1c == local_1a || (iVar6 = ultima_1000_2092(0x3f,0), iVar6 < 0x10)))) {
          local_1c = uVar8;
        }
        piVar9 = piVar9 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 5);
      local_1a = local_1c;
      local_16 = uVar8;
    }
    if (local_1a < 0x8000) {
      *(undefined2 *)0x5876 = *(undefined2 *)(local_8 + 2);
      *(undefined2 *)0x5878 = *(undefined2 *)(local_8 + 4);
      npc_124c_0632(local_1a);
      iVar6 = *(int *)(local_8 + 0xc) * 8;
      uVar3 = *(undefined2 *)0x5876;
      *(undefined2 *)(local_8 + 2) = uVar3;
      *(undefined *)(iVar6 + 0x5c5c) = (char)uVar3;
      uVar3 = *(undefined2 *)0x5878;
      *(undefined2 *)(local_8 + 4) = uVar3;
      *(undefined *)(iVar6 + 0x5c5d) = (char)uVar3;
      pbVar2 = (byte *)0x24e6;
      *pbVar2 = *pbVar2 | 2;
    }
  }
  return;
}



int npc_124c_0938(uint param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 unaff_DS;
  int local_a;
  int local_6;
  
  local_a = -1;
  iVar4 = param_2 * 0x10;
  puVar5 = (undefined2 *)(iVar4 + 0x5f5e);
  iVar6 = iVar4 + 0x5d5e;
  local_6 = 0;
  do {
    if (*(byte *)(local_6 + iVar6 + 0xc) == param_1) {
      local_a = npc_124c_12e0(param_1,param_2);
      if (*(int *)(iVar4 + 0x5f6c) == local_a) {
        *puVar5 = 1;
      }
      else {
        bVar2 = *(byte *)0x5895;
        if ((*(uint *)(iVar4 + 0x5f64) == (uint)bVar2) || (*(byte *)(iVar6 + local_a + 9) == bVar2))
        {
          bVar2 = *(byte *)0x5895;
          if (*(uint *)(iVar4 + 0x5f64) == (uint)bVar2) {
            if (*(byte *)(iVar6 + local_a + 9) == bVar2) {
              *puVar5 = 2;
            }
            else {
              cVar3 = *(char *)0x5895;
              pcVar1 = (char *)(iVar6 + local_a + 9);
              if (*pcVar1 == cVar3 || *pcVar1 < cVar3) {
                *puVar5 = 7;
              }
              else {
                *puVar5 = 6;
              }
            }
          }
          else {
            cVar3 = *(char *)0x5895;
            pcVar1 = (char *)(iVar4 + 0x5f64);
            if (*pcVar1 == cVar3 || *pcVar1 < cVar3) {
              *puVar5 = 5;
            }
            else {
              *puVar5 = 4;
            }
          }
        }
        else {
          *puVar5 = 8;
        }
      }
      break;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  if ((((-1 < local_a) &&
       (iVar6 = local_a + iVar6, *(uint *)(iVar4 + 0x5f60) == (uint)*(byte *)(iVar6 + 3))) &&
      (*(uint *)(iVar4 + 0x5f62) == (uint)*(byte *)(iVar6 + 6))) &&
     (*(uint *)(iVar4 + 0x5f64) == (uint)*(byte *)(iVar6 + 9))) {
    local_a = 0;
    *puVar5 = 1;
  }
  if (local_a == -1) {
    local_a = 0;
  }
  else {
    local_a = local_a + 1;
  }
  return local_a;
}



undefined2 npc_124c_0a4a(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  param_2 = param_2 * 0x10;
  iVar3 = *(int *)(param_2 + 0x5f6a) * 8;
  pbVar2 = (byte *)ultima_1000_4402(*(undefined *)(iVar3 + 0x5c5d),*(undefined *)(iVar3 + 0x5c5c));
  bVar1 = *pbVar2;
  if (*(char *)(param_1 + param_2 + 0x5d67) < *(char *)0x5895) {
    if (bVar1 == 0xc9) {
      return 1;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x5f6a) * 8;
    pbVar2 = (byte *)ultima_1000_4402(*(undefined *)(iVar3 + 0x5c5d),*(undefined *)(iVar3 + 0x5c5c));
    bVar1 = *pbVar2;
    if (bVar1 == 200) {
      return 1;
    }
  }
  if ((bVar1 & 0xf4) == 0xc4) {
    return 1;
  }
  return 0;
}



undefined npc_124c_0adc(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined uVar3;
  
  if ((((param_1 < 0x8000) &&
       (iVar2 = param_1 + param_2 * 0x10 + 0x5d5e, *(byte *)(iVar2 + 3) == param_5)) &&
      (*(byte *)(iVar2 + 6) == param_4)) && (*(byte *)(iVar2 + 9) == param_3)) {
    uVar3 = 2;
  }
  else {
    if ((((int)param_5 < 0) || ((int)param_4 < 0)) ||
       ((0x1f < (int)param_5 || (0x1f < (int)param_4)))) {
      bVar1 = *(byte *)0x6a07;
    }
    else {
      bVar1 = *(byte *)(param_5 + param_4 * 0x20 + 0x6608);
    }
    if ((*(int *)(param_2 * 0x10 + 0x5f5e) == 3) && ((bVar1 == 200 || (bVar1 == 0xc9)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = ((uint)*(byte *)((bVar1 >> 3) + 0x367e) & 0x80 >> (bVar1 & 7)) == 0;
    }
  }
  return uVar3;
}



int npc_124c_0b9e(undefined2 param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  int local_4;
  
  uVar4 = 0;
  if ((((param_4 < 0) || (0x1f < param_4)) || (param_3 < 0)) || (0x1f < param_3)) {
    local_4 = 0;
  }
  else {
    iVar3 = param_4;
    pbVar1 = (byte *)ultima_1000_4402(param_3,param_4);
    uVar2 = *pbVar1 & 0xfc;
    if ((*(char *)(param_2 + 0x659e) == -4) || (uVar2 == 0x30)) {
      local_4 = 1;
    }
    else if ((uVar2 == 0x90) && (*(int *)(param_2 * 0x10 + 0x5f5e) != 2)) {
      local_4 = 0;
    }
    else {
      local_4 = npc_124c_0adc(param_1,param_2,*(undefined *)0x5895,param_3,param_4);
    }
    iVar3 = ultima_1000_3702(*(undefined *)0x5895,param_3,param_4,iVar3,uVar2,uVar4);
    if ((local_4 == 0) || (iVar3 != 0)) {
      local_4 = 0;
    }
  }
  return local_4;
}



void npc_124c_0c50(int param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  uVar4 = ultima_1000_2092(0xff,0);
  if ((uVar4 & 8) != 0) {
    uVar4 = ultima_1000_3aae(0x40);
    *(undefined2 *)0x5876 = *(undefined2 *)(param_5 + 2);
    *(undefined2 *)0x5878 = *(undefined2 *)(param_5 + 4);
    npc_124c_0632((uVar4 & 3) + 1);
    uVar2 = *(undefined2 *)0x5876;
    uVar3 = *(undefined2 *)0x5878;
    if (((param_4 == 0) ||
        (iVar5 = npc_124c_06a0(*(undefined2 *)0x5878,*(undefined2 *)0x5876,
                               *(undefined *)(param_3 + param_1 + 6),
                               *(undefined *)(param_3 + param_1 + 3)), iVar5 <= param_4)) &&
       (iVar5 = npc_124c_0b9e(param_3,param_2,*(undefined2 *)0x5878,*(undefined2 *)0x5876),
       iVar5 != 0)) {
      iVar5 = *(int *)(param_5 + 0xc) * 8;
      *(undefined2 *)(param_5 + 2) = uVar2;
      *(undefined *)(iVar5 + 0x5c5c) = (char)uVar2;
      *(undefined2 *)(param_5 + 4) = uVar3;
      *(undefined *)(iVar5 + 0x5c5d) = (char)uVar3;
      pbVar1 = (byte *)0x24e6;
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return;
}



void npc_124c_0d00(int param_1,int param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_1 + param_2 * 0x10 + 0x5d5e);
  if (uVar1 < 8) {
                    // WARNING: Could not emulate address calculation at 0x000131f0
                    // WARNING: Treating indirect jump as call
    (**(code **)(uVar1 * 2 + -0x4fd4))();
    return;
  }
  return;
}



void npc_124c_0db4(undefined2 param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined2 unaff_DS;
  int local_14;
  int local_10;
  uint local_c;
  uint local_a;
  int local_6;
  int local_4;
  
  local_14 = 0;
  *(undefined *)0x65be = 0;
  *(undefined *)0x65bf = 0;
  local_4 = 1;
  do {
    if (0x1f < local_4) {
      return;
    }
    if (*(char *)(local_4 + 0x659e) != '\0') {
      iVar9 = npc_124c_12e0(param_1,local_4);
      iVar10 = local_4 * 0x10;
      piVar11 = (int *)(iVar10 + 0x5f5e);
      if ((*piVar11 < 2) && (iVar12 = npc_124c_0938(param_1,local_4), iVar12 == 0)) {
        if (*(uint *)(iVar10 + 0x5f64) == (uint)*(byte *)0x5895) {
LAB_124c_1261:
          npc_124c_0d00(iVar9,local_4);
        }
      }
      else {
        iVar12 = *piVar11;
        if (iVar12 < 4) {
          iVar12 = local_4 * 2;
          if ((*(uint *)(iVar12 + 0x655e) < 0x8000) &&
             (iVar13 = local_4 * 0x20,
             *(char *)(*(int *)(iVar12 + 0x655e) + iVar13 + 0x615e) != '\0')) {
            *(undefined2 *)0x5876 = *(undefined2 *)(iVar10 + 0x5f60);
            *(undefined2 *)0x5878 = *(undefined2 *)(iVar10 + 0x5f62);
            npc_124c_0632(*(undefined *)(*(int *)(iVar12 + 0x655e) + iVar13 + 0x615f));
            local_a = *(uint *)0x5876;
            local_c = *(uint *)0x5878;
            iVar6 = npc_124c_0b9e(iVar9,local_4,local_c,*(undefined2 *)0x5876);
            if (iVar6 == 0) {
              iVar10 = local_4 * 2;
              piVar3 = (int *)(iVar10 + 0x65c2);
              *piVar3 = *piVar3 + 1;
              npc_124c_0c50(local_4 * 0x10 + 0x5d5e,local_4,iVar9,0,local_4 * 0x10 + 0x5f5e);
              if (3 < *(int *)(iVar10 + 0x65c2)) {
                *(undefined2 *)(iVar10 + 0x655e) = 0xffff;
LAB_124c_10d6:
                *(undefined2 *)(local_4 * 2 + 0x65c2) = 0;
              }
            }
            else {
              iVar7 = *(int *)(iVar10 + 0x5f6a) * 8;
              *(undefined *)(iVar7 + 0x5c5c) = (undefined)local_a;
              *(uint *)(iVar10 + 0x5f60) = local_a & 0xff;
              *(undefined *)(iVar7 + 0x5c5d) = (undefined)local_c;
              *(uint *)(iVar10 + 0x5f62) = local_c & 0xff;
              pbVar1 = (byte *)0x24e6;
              *pbVar1 = *pbVar1 | 2;
              pcVar8 = (char *)(*(int *)(iVar12 + 0x655e) + iVar13 + 0x615e);
              pcVar2 = pcVar8;
              *pcVar2 = *pcVar2 + -1;
              *(undefined2 *)(iVar12 + 0x65c2) = 0;
              if (*pcVar8 == '\0') {
                piVar3 = (int *)(iVar12 + 0x655e);
                *piVar3 = *piVar3 + 1;
                iVar7 = *(int *)(iVar12 + 0x655e);
                piVar3 = (int *)(iVar12 + 0x655e);
                *piVar3 = *piVar3 + 1;
                *(undefined *)(iVar7 + iVar13 + 0x615e) = 0;
                if ((0x1f < *(int *)(iVar12 + 0x655e)) ||
                   (*(char *)(*(int *)(iVar12 + 0x655e) + iVar13 + 0x615e) == '\0')) {
                  *(undefined2 *)(local_4 * 2 + 0x655e) = 0xffff;
                }
                if (iVar6 == 2) {
                  *(int *)(iVar10 + 0x5f6c) = iVar9;
                  *piVar11 = 1;
                  *(undefined2 *)(local_4 * 2 + 0x655e) = 0xffff;
                }
              }
            }
          }
          else {
            if ((*(int *)(local_4 * 2 + 0x655e) == -1) && (*piVar11 == 3)) {
              iVar9 = npc_124c_12e0(param_1,local_4);
              cVar4 = *(char *)0x5895;
              pcVar2 = (char *)(iVar9 + local_4 * 0x10 + 0x5d67);
              if (*pcVar2 != cVar4 && cVar4 <= *pcVar2) {
                *piVar11 = 6;
                return;
              }
              *piVar11 = 7;
              return;
            }
            if (local_14 < 1) {
              if (*piVar11 != 1) {
                iVar12 = *(int *)(local_4 * 2 + 0x65c2);
                if ((iVar12 < 200) &&
                   ((iVar12 == 0 || (iVar12 = ultima_1000_2092(2,0), iVar12 == 1)))) {
                  if (*(int *)(local_4 * 2 + 0x655e) == -1) {
                    local_14 = local_14 + 1;
                    iVar12 = local_4 * 0x10 + iVar9;
                    iVar10 = npc_124c_032c(local_4,0,*(undefined *)(iVar12 + 0x5d64),
                                           *(undefined *)(iVar12 + 0x5d61),
                                           *(undefined2 *)(iVar10 + 0x5f62),
                                           *(undefined2 *)(iVar10 + 0x5f60));
                    if (iVar10 != 0) {
                      npc_124c_04ac(*(undefined *)(iVar12 + 0x5d64),*(undefined *)(iVar12 + 0x5d61),
                                    0,local_4);
                      goto LAB_124c_10d6;
                    }
                    *(undefined2 *)(local_4 * 2 + 0x65c2) = 200;
                  }
                  npc_124c_0c50(local_4 * 0x10 + 0x5d5e,local_4,iVar9,0,local_4 * 0x10 + 0x5f5e);
                }
                else {
                  piVar11 = (int *)(local_4 * 2 + 0x65c2);
                  if (199 < *piVar11) {
                    piVar3 = piVar11;
                    *piVar3 = *piVar3 + 1;
                  }
                  piVar11 = (int *)(local_4 * 2 + 0x65c2);
                  if (0xcc < *piVar11) {
                    *piVar11 = 0;
                  }
                }
              }
            }
            else if (*(uint *)(iVar10 + 0x5f64) == (uint)*(byte *)0x5895) {
              iVar9 = *(int *)(iVar10 + 0x5f6c);
              goto LAB_124c_1261;
            }
          }
        }
        else if ((iVar12 == 4) || (iVar12 == 5)) {
          if (local_14 != 1) {
            local_14 = 1;
            if (*piVar11 == 4) {
              local_6 = 3;
            }
            else {
              local_6 = 4;
            }
            iVar10 = local_4 * 0x10 + iVar9;
            local_10 = npc_124c_01a0(local_4,local_6 == 3,*(undefined *)(iVar10 + 0x5d64),
                                     *(undefined *)(iVar10 + 0x5d61));
            if (local_10 != 0) {
              local_a = *(uint *)0x5876;
              local_c = *(uint *)0x5878;
              local_10 = npc_124c_032c(local_4,local_6,*(undefined *)(iVar10 + 0x5d64),
                                       *(undefined *)(iVar10 + 0x5d61),local_c,local_a);
            }
            if (local_10 != 0) {
              iVar9 = local_4 * 0x10 + iVar9;
              npc_124c_04ac(*(undefined *)(iVar9 + 0x5d64),*(undefined *)(iVar9 + 0x5d61),local_6,
                            local_4);
              bVar5 = *(byte *)(local_a + local_c * 0x20 + 0x6608);
              if ((((local_6 == 3) && (bVar5 == 200)) || ((local_6 == 4 && (bVar5 == 0xc9)))) ||
                 ((bVar5 & 0xfc) == 0xc4)) {
                func_0x0001fd5a(*(undefined *)0x5895,local_c,local_a,local_4);
              }
              *piVar11 = 2;
            }
          }
        }
        else {
          iVar12 = *piVar11;
          if (((iVar12 == 6) || (iVar12 == 7)) &&
             (iVar12 = npc_124c_0a4a(iVar9,local_4), iVar12 == 0)) {
            iVar9 = *piVar11;
            if ((iVar9 != 2) && (local_14 != 1)) {
              local_14 = 1;
              if (iVar9 == 6) {
                local_6 = 1;
              }
              else {
                local_6 = 2;
              }
              local_10 = npc_124c_01a0(local_4,local_6 == 1,*(undefined2 *)(iVar10 + 0x5f62),
                                       *(undefined2 *)(iVar10 + 0x5f60));
              if (local_10 != 0) {
                local_a = *(uint *)0x5876;
                local_c = *(uint *)0x5878;
                local_10 = npc_124c_032c(local_4,local_6,local_c,local_a,
                                         *(undefined2 *)(iVar10 + 0x5f62),
                                         *(undefined2 *)(iVar10 + 0x5f60));
              }
              if (local_10 != 0) {
                npc_124c_04ac(local_c,local_a,local_6,local_4);
                *piVar11 = 3;
              }
            }
          }
          else {
            iVar12 = local_4 * 0x10 + iVar9;
            func_0x0001fd5a(*(undefined *)(iVar12 + 0x5d67),*(undefined *)(iVar12 + 0x5d64),
                            *(undefined *)(iVar12 + 0x5d61),local_4);
            *(int *)(iVar10 + 0x5f6c) = iVar9;
            *(undefined2 *)(local_4 * 2 + 0x655e) = 0xffff;
            *piVar11 = 1;
          }
        }
      }
    }
    local_4 = local_4 + 1;
  } while( true );
}



undefined npc_124c_12e0(char param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  byte bVar4;
  undefined2 unaff_DS;
  
  param_2 = param_2 * 0x10;
  bVar1 = param_1 - *(char *)(param_2 + 0x5d6a);
  bVar2 = param_1 - *(char *)(param_2 + 0x5d6b);
  bVar4 = param_1 - *(char *)(param_2 + 0x5d6c);
  uVar3 = bVar2 < bVar1;
  if ((bool)uVar3) {
    bVar1 = bVar2;
  }
  if (bVar4 < bVar1) {
    uVar3 = 2;
    bVar1 = bVar4;
  }
  if ((byte)(param_1 - *(char *)(param_2 + 0x5d6d)) < bVar1) {
    uVar3 = 1;
  }
  return uVar3;
}


