#define HARPSICHORD 141

#define NPC_TYPE SAVED_GAM(0x0ff8)

#define DRUNKENNESS SAVED_GAM(0x03b1)

/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void FUN_0000_0052(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  bool bVar6;
  
  if (((-1 < param_1) && (param_1 < 0x20)) &&
     (((bVar2 = *(byte *)(param_1 + SAVED_GAM(0x0ff8)) & 0xfc, bVar2 != 0x70 && (bVar2 < 0x80)) ||
      (bVar2 == 0xb4)))) {
    iVar5 = (uint)*(byte *)SAVED_GAM(0x02ed) * 4;
    uVar3 = 1;
    uVar4 = 0;
    for (; (char)param_1 != '\0'; param_1._0_1_ = (char)param_1 + -1) {
      bVar6 = (int)uVar3 < 0;
      uVar3 = uVar3 << 1;
      uVar4 = uVar4 << 1 | (uint)bVar6;
    }
    puVar1 = (uint *)(iVar5 + SAVED_GAM(0x05b0));
    *puVar1 = *puVar1 | uVar3;
    puVar1 = (uint *)(iVar5 + SAVED_GAM(0x05b2));
    *puVar1 = *puVar1 | uVar4;
  }
  return;
}



void FUN_0000_00b0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = param_1 * 0x10;
  iVar2 = *(int *)(iVar3 + SAVED_GAM(0x09c4)) * 8;
  *(undefined2 *)(iVar3 + SAVED_GAM(0x09c2)) = 0;
  *(undefined2 *)(iVar3 + SAVED_GAM(0x09be)) = 0;
  *(undefined2 *)(iVar3 + SAVED_GAM(0x09bc)) = 0;
  *(undefined2 *)(iVar3 + SAVED_GAM(0x09ba)) = 0;
  *(undefined2 *)(iVar3 + SAVED_GAM(0x09b8)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06bb)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06ba)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06b8)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06b7)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06b6)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06b5)) = 0;
  *(undefined *)(iVar2 + SAVED_GAM(0x06b4)) = 0;
  *(undefined *)(iVar3 + SAVED_GAM(0x07ba)) = 0;
  *(undefined *)(iVar3 + SAVED_GAM(0x07b9)) = 0;
  *(undefined *)(iVar3 + SAVED_GAM(0x07b8)) = 0;
  *(undefined *)(param_1 + SAVED_GAM(0x0ff8)) = 0;
  pbVar1 = (byte *)MEM(0x24e6);
  *pbVar1 = *pbVar1 | 2;
  return;
}



int FUN_0000_011e(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  int *local_a;
  
  iVar1 = 0;
  piVar2 = (int *)SAVED_GAM(0x09c4);
  local_a = (int *)SAVED_GAM(0x09b8);
  while (((*piVar2 != param_1 || (*(char *)(iVar1 + SAVED_GAM(0x0ff8)) == '\0')) || (*local_a == 0))) {
    piVar2 = piVar2 + 8;
    local_a = local_a + 8;
    iVar1 = iVar1 + 1;
    if (0x1f < iVar1) {
      return -1;
    }
  }
  return iVar1;
}



void __cdecl16near FUN_0000_0170(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  iVar7 = 0;
  do {
    iVar5 = 0;
    do {
      pcVar2 = (char *)func_0x0000c232(iVar5,iVar7);
      if (*pcVar2 == -0x79) {
        pbVar3 = (byte *)func_0x0000c232(iVar5 + 1,iVar7);
        pbVar1 = pbVar3;
        *pbVar1 = *pbVar1 ^ 0xdd;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  pbVar3 = (byte *)func_0x0000c232(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
  if ((*pbVar3 & 0xfe) != 0x48) {
    for (uVar6 = 0; uVar6 < *(byte *)SAVED_GAM(0x03a8); uVar6 = uVar6 + 1) {
      if (*(char *)SAVED_GAM(0x02d9) == '\x05') {
        puVar4 = (undefined *)
                 func_0x0000c232(*(undefined *)(uVar6 + SAVED_GAM(0x0368)),*(undefined *)(uVar6 + SAVED_GAM(0x0348)));
        *puVar4 = *(undefined *)(uVar6 + SAVED_GAM(0x0388));
      }
      else {
        puVar4 = (undefined *)
                 func_0x0000c232(*(undefined *)(uVar6 + SAVED_GAM(0x0368)),*(undefined *)(uVar6 + SAVED_GAM(0x0348)));
        *puVar4 = 3;
      }
    }
  }
  pbVar1 = (byte *)MEM(0x24e6);
  *pbVar1 = *pbVar1 | 2;
  return;
}



void __cdecl16near FUN_0000_0212(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  int local_e;
  
  if (*(char *)SAVED_GAM(0x03b2) != -1) {
    func_0x00009eae(*(undefined *)SAVED_GAM(0x02d8));
    local_e = 0;
    do {
      iVar5 = 0;
      do {
        cVar2 = *(char *)(local_e + iVar5 + MEM(0x6608));
        if (cVar2 == '-') {
          iVar3 = RANDOM(7, false);
          if (iVar3 != 0) {
            *(undefined *)(local_e + iVar5 + MEM(0x6608)) = 0x2c;
          }
        }
        else if ((cVar2 == '.') && (iVar3 = RANDOM(7, false), iVar3 != 0)) {
          *(undefined *)(local_e + iVar5 + MEM(0x6608)) = 0x2b;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x20);
      local_e = local_e + 0x20;
    } while (local_e < MEM(0x0400));
    pbVar1 = (byte *)MEM(0x24e6);
    *pbVar1 = *pbVar1 | 2;
    uVar4 = func_0x00009e86();
    func_0x00009eae(uVar4);
  }
  return;
}



void __cdecl16near FUN_0000_02ae(void)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  
  *(undefined *)SAVED_GAM(0x03b2) = 0xff;
  if (*(char *)SAVED_GAM(0x02f1) != '\x04') {
    iVar7 = 0;
    uVar3 = *(undefined *)SAVED_GAM(0x03b2);
    do {
      if (*(char *)(iVar7 + SAVED_GAM(0x0322)) == *(char *)SAVED_GAM(0x02ed)) {
        uVar3 = (undefined)iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    *(undefined *)SAVED_GAM(0x03b2) = uVar3;
  }
  if (*(char *)SAVED_GAM(0x03b2) != -1) {
    FUN_0000_0212();
    pcVar8 = (char *)SAVED_GAM(0x06b4);
    iVar7 = 0;
    do {
      if (*pcVar8 == -4) {
        return;
      }
      pcVar8 = pcVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar4 = func_0x0000b714();
    iVar5 = iVar4 * 8;
    iVar7 = 0x1f;
    do {
      iVar6 = iVar7;
      if (*(char *)(iVar6 + SAVED_GAM(0x0ff8)) == '\0') break;
      iVar7 = iVar6 + -1;
      iVar6 = 0x1f;
    } while (-1 < iVar7);
    iVar7 = iVar6 * 0x10;
    *(undefined2 *)(iVar7 + SAVED_GAM(0x09b8)) = 1;
    *(int *)(iVar7 + SAVED_GAM(0x09c4)) = iVar4;
    *(undefined *)(iVar5 + SAVED_GAM(0x06b6)) = 0xf;
    *(undefined2 *)(iVar7 + SAVED_GAM(0x09ba)) = 0xf;
    bVar2 = *(byte *)((*(uint *)SAVED_GAM(0x02ed) & 0xff) + MEM(0x13a5));
    *(byte *)(iVar5 + SAVED_GAM(0x06b7)) = bVar2;
    *(uint *)(iVar7 + SAVED_GAM(0x09bc)) = (uint)bVar2;
    *(undefined *)(iVar5 + SAVED_GAM(0x06bb)) = 0;
    *(undefined *)(iVar5 + SAVED_GAM(0x06b8)) = 0;
    *(undefined *)(iVar5 + SAVED_GAM(0x06b9)) = 0;
    *(undefined *)(iVar5 + SAVED_GAM(0x06ba)) = 0;
    *(undefined2 *)(iVar7 + SAVED_GAM(0x09be)) = 0;
    *(undefined *)(iVar5 + SAVED_GAM(0x06b5)) = 0xfc;
    *(undefined *)(iVar5 + SAVED_GAM(0x06b4)) = 0xfc;
    puVar9 = (undefined2 *)(iVar7 + SAVED_GAM(0x07c4));
    for (iVar7 = 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar1 = 0;
    }
    iVar7 = 0;
    do {
      iVar4 = iVar6 * 0x10 + iVar7;
      *(undefined *)(iVar4 + SAVED_GAM(0x07b8)) = 6;
      *(undefined *)(iVar4 + SAVED_GAM(0x07bb)) = 0xf;
      *(undefined *)(iVar4 + SAVED_GAM(0x07be)) = *(undefined *)(iVar5 + SAVED_GAM(0x06b7));
      *(undefined *)(iVar4 + SAVED_GAM(0x07c1)) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    *(undefined *)(iVar6 + SAVED_GAM(0x0ff8)) = 0xfc;
  }
  return;
}



void FUN_0000_0408(int param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  int local_8;
  
  func_0x0000ca18();
  func_0x0000c8b4();
  func_0x0000acc6(MEM(0xffff));
  *(undefined *)SAVED_GAM(0x03a9) = 0;
  *(undefined *)SAVED_GAM(0x02f6) = 0;
  *(undefined *)SAVED_GAM(0x02f5) = 0;
  uVar3 = (uint)*(byte *)SAVED_GAM(0x02ed);
  bVar2 = *(byte *)SAVED_GAM(0x02ef);
  local_8 = (uint)*(byte *)(uVar3 + MEM(0x1e19)) + (uint)bVar2;
  if (0x7f < bVar2) {
    local_8 = local_8 + MEM(0xff00);
  }
  func_0x0000a39e(local_8 << 10,MEM(0x0400),MEM(0x6608),*(undefined2 *)((uVar3 - 1 >> 3) * 2 + MEM(0x2652)));
  *(undefined *)SAVED_GAM(0x03a8) = 0;
  *(undefined2 *)MEM(0x2184) = MEM(0xffff);
  *(undefined2 *)MEM(0x2182) = MEM(0xffff);
  *(undefined2 *)MEM(0x2180) = MEM(0xffff);
  *(undefined2 *)MEM(0x217e) = MEM(0xffff);
  iVar8 = 0;
  do {
    iVar7 = 0;
    do {
      pbVar4 = (byte *)func_0x0000c232(iVar7,iVar8);
      if ((*pbVar4 & 0xfe) == 0x48) {
        uVar3 = (uint)*(byte *)SAVED_GAM(0x03a8);
        *(undefined *)(uVar3 + SAVED_GAM(0x0348)) = (char)iVar8;
        *(undefined *)(uVar3 + SAVED_GAM(0x0368)) = (char)iVar7;
        puVar5 = (undefined *)func_0x0000c232(iVar7,iVar8);
        *(undefined *)(uVar3 + SAVED_GAM(0x0388)) = *puVar5;
        pcVar1 = (char *)SAVED_GAM(0x03a8);
        *pcVar1 = *pcVar1 + '\x01';
      }
      pcVar6 = (char *)func_0x0000c232(iVar7,iVar8);
      if (*pcVar6 == '*') {
        if (*(int *)MEM(0x217e) == -1) {
          *(int *)MEM(0x217e) = iVar8;
          *(int *)MEM(0x2180) = iVar7;
        }
        else {
          *(int *)MEM(0x2182) = iVar8;
          *(int *)MEM(0x2184) = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  if ((*(byte *)SAVED_GAM(0x02d9) < 5) || (0x13 < *(byte *)SAVED_GAM(0x02d9))) {
    FUN_0000_0170();
  }
  func_0x0000dc7a();
  func_0x0000cdac(0);
  FUN_0000_0212();
  if (param_1 != 0) {
    FUN_0000_1694();
  }
  *(undefined *)MEM(0x24e6) = 1;
  return;
}



void FUN_0000_052e(int param_1,uint param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  if (((byte)param_1 & 0xfc) == 0xc4) {
    func_0x0000d740();
    if (param_1 - 0xc4U == param_2) {
      pcVar1 = (char *)SAVED_GAM(0x02ef);
      *pcVar1 = *pcVar1 + '\x01';
      uVar2 = MEM(0x265a);
    }
    else {
      if (param_1 - 0xc4U != (param_2 ^ 2)) {
        return;
      }
      pcVar1 = (char *)SAVED_GAM(0x02ef);
      *pcVar1 = *pcVar1 + -1;
      uVar2 = MEM(0x265f);
    }
    func_0x00009680(uVar2);
    FUN_0000_0408(1);
  }
  return;
}



void FUN_0000_057c(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)SAVED_GAM(0x02d6) & 0xfc;
  if (bVar1 == 0x10) {
    func_0x00009680(MEM(0x2666));
    if (param_1 == 1) {
      *(undefined *)SAVED_GAM(0x02d6) = 0x12;
    }
    else if (param_1 == 3) {
      *(undefined *)SAVED_GAM(0x02d6) = 0x13;
    }
  }
  else if (bVar1 == 0x14) {
    func_0x00009680(MEM(0x266c));
    if (param_1 == 1) {
      *(undefined *)SAVED_GAM(0x02d6) = 0x14;
    }
    else if (param_1 == 3) {
      *(undefined *)SAVED_GAM(0x02d6) = 0x15;
    }
  }
  else {
    if ((bVar1 != 0x20) && (bVar1 != 0x24)) {
      if (bVar1 != 0x28) {
        return;
      }
      func_0x00009680(MEM(0x2671));
    }
    *(char *)SAVED_GAM(0x02d6) = (char)param_1 + (*(byte *)SAVED_GAM(0x02d6) & 0xfc);
  }
  return;
}



bool FUN_0000_0600(int param_1)

{
  char *pcVar1;
  undefined uVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  int local_e;
  int local_c;
  byte local_a;
  
  if ((*(char *)SAVED_GAM(0x02d6) == '\x1c') || ((*(byte *)SAVED_GAM(0x02d6) & 0xfe) == 0x12)) {
    func_0x0000c16e();
  }
  bVar7 = false;
  local_e = 0;
  local_c = 0;
  if (param_1 == 1) {
    local_c = -1;
    bVar7 = *(char *)SAVED_GAM(0x02f0) == '\0';
    param_1 = 3;
    FUN_0000_057c(3);
    uVar5 = MEM(0x268a);
LAB_0000_0665:
    func_0x00009680(uVar5);
  }
  else {
    if (param_1 == 2) {
      local_c = 1;
      bVar7 = 0x1e < *(byte *)SAVED_GAM(0x02f0);
      param_1 = 1;
      FUN_0000_057c(1);
      uVar5 = MEM(0x2684);
      goto LAB_0000_0665;
    }
    if (param_1 == 3) {
      local_e = -1;
      bVar7 = *(char *)SAVED_GAM(0x02f1) == '\0';
      param_1 = 0;
      FUN_0000_057c(0);
      uVar5 = MEM(0x2676);
      goto LAB_0000_0665;
    }
    if (param_1 == 4) {
      local_e = 1;
      bVar7 = 0x1e < *(byte *)SAVED_GAM(0x02f1);
      param_1 = 2;
      FUN_0000_057c(2);
      uVar5 = MEM(0x267d);
      goto LAB_0000_0665;
    }
  }
  bVar3 = true;
  uVar2 = *(undefined *)(local_c + local_e * 0x20 + MEM(0xaba7));
  iVar4 = func_0x0000b4be(*(undefined *)SAVED_GAM(0x02ef),local_e + (uint)*(byte *)SAVED_GAM(0x02f1),
                          local_c + (uint)*(byte *)SAVED_GAM(0x02f0));
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(byte *)SAVED_GAM(0x02d6) < 0x30) && (0x1f < *(byte *)SAVED_GAM(0x02d6))) {
      if (((*(byte *)SAVED_GAM(0x02d6) < 0x28) || (iVar4 < 0x24)) || (0x27 < iVar4)) goto LAB_0000_0776;
    }
    else if (((iVar4 < 0x24) || (0x2b < iVar4)) &&
            ((((iVar4 != 0x1b && (local_a = (byte)iVar4, (local_a & 0xfe) != 0x10)) &&
              (iVar4 != 0x1e)) && (iVar4 != 0x1f)))) goto LAB_0000_0776;
    bVar3 = true;
  }
LAB_0000_0776:
  if ((bVar3) && (iVar4 = func_0x0000aa7c(uVar2,*(undefined *)SAVED_GAM(0x02d6)), iVar4 != 0)) {
    if (bVar7 == false) {
      pcVar1 = (char *)SAVED_GAM(0x02f0);
      *pcVar1 = *pcVar1 + (char)local_c;
      pcVar1 = (char *)SAVED_GAM(0x02f1);
      *pcVar1 = *pcVar1 + (char)local_e;
      *(undefined *)MEM(0x24e6) = 1;
      if ((*(byte *)SAVED_GAM(0x02d6) & 0xfe) == 0x12) {
        func_0x0000c16e();
      }
      FUN_0000_052e(uVar2,param_1);
      return false;
    }
    func_0x00009680(MEM(0x2690));
    do {
      iVar4 = func_0x0000a49c();
      if ((iVar4 == 0x59) || (iVar4 == 0x4e)) break;
    } while (iVar4 != 0x1b);
    if (iVar4 == 0x59) {
      func_0x00009680(MEM(0x26ab));
      if (*(char *)SAVED_GAM(0x02ed) == '\x19') {
        func_0x00009680(MEM(0x26b9));
        *(undefined *)SAVED_GAM(0x02ef) = 0xff;
      }
      else {
        func_0x00009680(MEM(0x26c6));
        *(undefined *)SAVED_GAM(0x02ef) = 0;
      }
      *(undefined *)SAVED_GAM(0x03a9) = 0;
      uVar6 = (uint)*(byte *)SAVED_GAM(0x02ed);
      *(undefined *)SAVED_GAM(0x02f0) = *(undefined *)(uVar6 + MEM(0x1e89));
      *(undefined *)SAVED_GAM(0x02f1) = *(undefined *)(uVar6 + MEM(0x1eb1));
      *(undefined *)SAVED_GAM(0x02ed) = 0;
      return bVar7;
    }
    func_0x00009680(MEM(0x26d2));
  }
  else {
    func_0x00009680(MEM(0x26d6));
    func_0x0000a0f0(200,0xa5);
    func_0x00009946();
  }
  return false;
}


// Updates one NPC to reflect your new wanted status
void FUN_0000_085e(int npc_slot)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 unaff_DS;
  byte local_4;
  
  if (*(byte *)(npc_slot + SAVED_GAM(0x0ff8)) < 0x2f) {
    local_4 = 6; // If they're an inanimate object they attack you?
  }
  else {
    local_4 = 7; // And if they're alive, they chase you aggressively? Even non-guards?
  }

  // Clear their calendar; this is their life now
  puVar5 = (undefined2 *)(npc_slot * 0x10 + SAVED_GAM(0x07c4));
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0;
  }

  // Change their behavior somehow
  iVar3 = local_4 * (MEM(0x0100) + 1);
  piVar6 = npc_slot * 0x10 + SAVED_GAM(0x07b8));
  piVar2 = piVar6++;
  *piVar2 = iVar3;
  *(char *)piVar6 = (char)iVar3;
  return;
}



void FUN_0000_08d4(int param_1)

{
  undefined2 *puVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  bVar2 = false;
  iVar3 = 0;
  do {
    if (*(char *)(iVar3 + param_1 * 0x10 + SAVED_GAM(0x07c4)) != '\0') {
      bVar2 = true;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if (((*(byte *)(param_1 + SAVED_GAM(0x0ff8)) < 0x74) && (0x3f < *(byte *)(param_1 + SAVED_GAM(0x0ff8)))) &&
     ((*(int *)(param_1 * 0x10 + SAVED_GAM(0x09c2)) == 0xfe || (bVar2)))) {
    *(undefined2 *)(param_1 * 0x10 + SAVED_GAM(0x09c2)) = 0xfd;
    puVar4 = (undefined2 *)(param_1 * 0x10 + SAVED_GAM(0x07b8));
    for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = MEM(0x0303);
    }
    *(undefined *)puVar4 = 3;
  }
  return;
}



void become_wanted(void) {
  char npc_type;
  int iVar2;
  int npc_slot;
  undefined2 unaff_DS;
  int *npc_state_p;
  
  npc_slot = 0;
  npc_state_p = (int *)SAVED_GAM(0x09b8);
  do {
    if (*npc_state_p != 0) {
      npc_type = NPC_TYPE[npc_slot];
      if (npc_type == SHADOWLORD || npc_type == DAEMON || npc_type == GUARD) {
        FUN_0000_085e(iVar3);
      } else {
        iVar2 = RANDOM(255, false);
        if (iVar2 < 0x80) {
          // There's a 50/50 chance this is called
          FUN_0000_08d4(iVar3);
        }
      }
    }
    npc_state_p += 8;
    npc_slot++;
  } while (iVar3 < 0x20);
  return;
}



void FUN_0000_09bc(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_0000_0052(param_1);
  func_0x0000df80(*(undefined2 *)(param_1 * 0x10 + SAVED_GAM(0x09c4)));
  FUN_0000_00b0(param_1);
  FUN_0000_0408(0);
  FUN_0000_02ae();
  return;
}



undefined2 __cdecl16near FUN_0000_09e6(void)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_DS;
  byte local_12;
  int local_4;
  
  func_0x00009680(MEM(0x26e0));
  pbVar4 = (byte *)func_0x0000c232(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
  if ((*pbVar4 < 4) && (*(char *)SAVED_GAM(0x02d6) != '\x1c')) {
    func_0x00009680(MEM(0x26e8));
    return 0;
  }
  iVar5 = func_0x0000b41c();
  if (iVar5 == 0) {
    return 1;
  }
  iVar5 = (uint)*(byte *)SAVED_GAM(0x02f0) + *(int *)SAVED_GAM(0x02d0);
  iVar6 = (uint)*(byte *)SAVED_GAM(0x02f1) + *(int *)SAVED_GAM(0x02d2);
  pcVar7 = (char *)func_0x0000c232(iVar6,iVar5);
  if (*pcVar7 == -99) {
    puVar8 = (undefined *)func_0x0000c232(iVar6,iVar5);
    *puVar8 = 0x9f;
    func_0x00009680(MEM(0x26f2));
    iVar5 = 2000;
    do {
      func_0x0000a06c(iVar5,0x78,0x28);
      iVar5 = iVar5 + 1000;
    } while (iVar5 < 20000);
    pbVar1 = (byte *)MEM(0x24e6);
    *pbVar1 = *pbVar1 | 2;
    return 1;
  }
  iVar9 = func_0x0000b4be(*(undefined *)SAVED_GAM(0x02ef),iVar6,iVar5);
  bVar3 = true;
  local_12 = (byte)iVar9;
  if ((((iVar9 != 0) && (local_4 = FUN_0000_011e(*(undefined2 *)SAVED_GAM(0x02d0)), 0x3f < iVar9)) &&
      ((iVar9 < 0xe8 || (0xef < iVar9)))) && ((local_12 & 0xfc) != 0xb4)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar10 = MEM(0x26fb);
    goto LAB_0000_0ae1;
  }
  if (iVar9 < 0x80) {
    func_0x0000bd66(5,SAVED_GAM(0x02e2));
LAB_0000_0b05:
    become_wanted();
  }
  else if ((local_12 & 0xfc) == 0xd8) goto LAB_0000_0b05;
  pbVar4 = (byte *)func_0x0000c232(iVar6,iVar5);
  bVar2 = *pbVar4;
  if ((bVar2 < 0x84) || (((0x85 < bVar2 && (bVar2 != 0x9f)) && (bVar2 != 0xab)))) {
    if (local_4 < 0) {
      return 1;
    }
    FUN_0000_0052(local_4);
    FUN_0000_09bc(local_4);
    return 1;
  }
  if (iVar9 != 0x78) {
    func_0x00009680(MEM(0x2718));
    func_0x0000bd66(5,SAVED_GAM(0x02e2));
    func_0x0000b352(iVar6,iVar5);
    if (local_4 < 0) {
      return 1;
    }
    FUN_0000_0052(local_4);
    FUN_0000_00b0(local_4);
    return 1;
  }
  uVar10 = 9999;
LAB_0000_0ae1:
  func_0x00009680(uVar10);
  return 1;
}



int __cdecl16near FUN_0000_0b82(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  func_0x00009680(MEM(0x2723));
  if ((*(byte *)SAVED_GAM(0x02d6) & 0xfe) == 0x12) {
    uVar3 = MEM(0x272a);
LAB_0000_0ba0:
    func_0x00009680(uVar3);
  }
  else {
    pcVar4 = (char *)func_0x0000c232(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
    cVar2 = *pcVar4;
    if (cVar2 == -0x7a) {
LAB_0000_0c32:
      uVar3 = 2;
LAB_0000_0bd0:
      FUN_0000_052e(0xc4,uVar3);
      local_4 = 1;
    }
    else {
      if (cVar2 == -0x38) {
        uVar3 = 0;
        goto LAB_0000_0bd0;
      }
      if (cVar2 == -0x37) goto LAB_0000_0c32;
    }
    if (local_4 != 0) {
      return local_4;
    }
    iVar5 = func_0x0000b41c();
    if (iVar5 != 0) {
      pcVar4 = (char *)func_0x0000c232((uint)*(byte *)SAVED_GAM(0x02f1) + *(int *)SAVED_GAM(0x02d2),
                                       (uint)*(byte *)SAVED_GAM(0x02f0) + *(int *)SAVED_GAM(0x02d0));
      cVar2 = *pcVar4;
      if (((cVar2 != 'L') && (cVar2 != -0x36)) && (cVar2 != -0x35)) {
        uVar3 = MEM(0x2735);
        goto LAB_0000_0ba0;
      }
      pcVar1 = (char *)SAVED_GAM(0x02f0);
      *pcVar1 = *pcVar1 + *(char *)SAVED_GAM(0x02d0);
      pcVar1 = (char *)SAVED_GAM(0x02f1);
      *pcVar1 = *pcVar1 + *(char *)SAVED_GAM(0x02d2);
      *(undefined *)MEM(0x24e6) = 1;
      func_0x0000d740(cVar2);
    }
    local_4 = 1;
  }
  return local_4;
}



undefined2 FUN_0000_0c4a(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)func_0x0000c232(param_1,param_2);
  if ((*pcVar1 != -0x5e) && (pcVar1 = (char *)func_0x0000c232(param_1,param_2), *pcVar1 != 'C')) {
    return 0;
  }
  return 1;
}



void __cdecl16near FUN_0000_0c78(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  byte *local_10;
  int local_a;
  
  local_a = 0;
  local_10 = (byte *)SAVED_GAM(0x06b4);
  do {
    bVar2 = *local_10;
    if ((((bVar2 & 0xfe) == 0x10) && (local_10[4] == *(byte *)SAVED_GAM(0x02ef))) &&
       (iVar3 = RANDOM(1, false), iVar3 == 0)) {
      uVar6 = (uint)local_10[2];
      uVar5 = (uint)local_10[3];
      iVar3 = FUN_0000_0c4a(uVar5 + 1,uVar6);
      if (((iVar3 == 0) && (iVar3 = FUN_0000_0c4a(uVar5,uVar6 + 1), iVar3 == 0)) &&
         ((iVar3 = FUN_0000_0c4a(uVar5 - 1,uVar6), iVar3 == 0 &&
          (iVar3 = FUN_0000_0c4a(uVar5,uVar6 - 1), iVar3 == 0)))) {
        iVar3 = RANDOM(1, false);
        if (iVar3 == 0) {
          iVar3 = RANDOM(1, false);
          uVar5 = uVar5 + iVar3 * 2 + -1;
        }
        else {
          iVar3 = RANDOM(1, false);
          iVar3 = iVar3 * 2 + -1;
          uVar6 = uVar6 + iVar3;
          if (iVar3 < 1) {
            bVar2 = 0x11;
          }
          else {
            bVar2 = 0x10;
          }
        }
        if ((((int)uVar6 < 0x20) && ((int)uVar5 < 0x20)) && ((-1 < (int)uVar6 && (-1 < (int)uVar5)))
           ) {
          puVar4 = (undefined *)func_0x0000c232(uVar5,uVar6,0x10);
          iVar3 = func_0x0000aa7c(*puVar4);
          if ((iVar3 != 0) &&
             (iVar3 = func_0x0000b532(*(undefined *)SAVED_GAM(0x02ef),uVar5,uVar6), iVar3 == 0)) {
            local_10[1] = bVar2;
            *local_10 = bVar2;
            local_10[2] = (byte)uVar6;
            local_10[3] = (byte)uVar5;
            pbVar1 = (byte *)MEM(0x24e6);
            *pbVar1 = *pbVar1 | 2;
          }
        }
      }
    }
    local_10 = local_10 + 8;
    local_a = local_a + 1;
  } while (local_a < 0x20);
  return;
}



uint FUN_0000_0dc4(int param_1)

{
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    func_0x0000d740();
    if (*(char *)MEM(0xa9fa) != '\0') {
      func_0x0000a730();
      *(undefined *)MEM(0xa9fa) = 0;
    }
    func_0x000094ea(10);
    func_0x0000ca5a();
  }
  uVar2 = func_0x0000a49c();
  if (*DRUNKENNESS != 0) {
    uVar2 = 0; // Half the time you don't move? In actuality, half the time you move where you asked
    iVar3 = RANDOM(1,0);
    if (iVar3 != 0) { // And half the time you move randomly?
      become_wanted();
      (*DRUNKENNESS)--;
      func_0x00009680(MEM(0x273c)); // Print "Hic!"
      iVar3 = RANDOM(3, false);
      uVar2 = (uint)*(byte *)(iVar3 + MEM(0x2742)); // Move in random direction
    }
  }
  return uVar2;
}



undefined2 FUN_0000_0e34(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 3;
  if (*(char *)MEM(0xabc7) == HARPSICHORD) {
    uVar3 = param_1 - 0x30;
    if (*(char *)MEM(0xa9ce) != '\0') {
      func_0x00009fc2(MEM(0xfffc),20000,4000,1,*(undefined2 *)(uVar3 * 2 + MEM(0x2746)));
    }
    if (*(byte *)(*(byte *)MEM(0x2767) + MEM(0x275a)) == uVar3) {
      pcVar1 = (char *)MEM(0x2767);
      *pcVar1 = *pcVar1 + '\x01';
      if (((*(char *)MEM(0x2767) == '\r') && (*(undefined *)MEM(0x2767) = 0, *(char *)SAVED_GAM(0x02ed) == '\x11')) &&
         (*(char *)SAVED_GAM(0x02ef) == '\x02')) {
        pbVar2 = (byte *)MEM(0x67b9);
        *pbVar2 = *pbVar2 ^ 0xb;
        func_0x0000aea2();
        *(undefined *)MEM(0x24e6) = 1;
      }
    }
    else if ((*(char *)MEM(0x2767) == '\n') && (uVar3 == 8)) {
      *(undefined *)MEM(0x2767) = 3;
    }
    else if ((*(char *)MEM(0x2767) == '\v') && (uVar3 == 7)) {
      *(undefined *)MEM(0x2767) = 2;
    }
    else if (uVar3 == *(byte *)MEM(0x275a)) {
      *(undefined *)MEM(0x2767) = 1;
    }
    else {
      *(undefined *)MEM(0x2767) = 0;
    }
  }
  else {
    local_4 = func_0x0000beb0(param_1);
  }
  return local_4;
}



void __cdecl16near FUN_0000_0f02(void)

{
  char *pcVar1;
  undefined uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined2 unaff_DS;
  undefined2 uVar11;
  uint local_6;
  
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    pcVar7 = (char *)SAVED_GAM(0x000d);
    uVar9 = 0;
    do {
      if ((*pcVar7 == 'S') && (iVar6 = RANDOM(15, false), iVar6 == 0xf)) {
        *pcVar7 = 'G';
      }
      pcVar7 = pcVar7 + 0x20;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)SAVED_GAM(0x02b5));
  }
  do {
    bVar5 = false;
    pcVar7 = (char *)func_0x0000c232(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
    cVar4 = *pcVar7;
    if ((cVar4 == -0x74) && ((*(byte *)SAVED_GAM(0x02d6) & 0xfe) != 0x14)) {
      func_0x00009680(MEM(0x2768));
      uVar2 = *(undefined *)SAVED_GAM(0x02d6);
      *(undefined *)SAVED_GAM(0x02d6) = 0;
      func_0x0000d740();
      uVar11 = MEM(0x0f90);
      func_0x0000a8d8();
      *(undefined *)SAVED_GAM(0x02d6) = uVar2;
      if (*(char *)SAVED_GAM(0x02ed) == '\x1d') {
        func_0x000088a0(0,uVar11);
        func_0x000088d6(0xb7,0xb7,8,8);
        local_6 = 1000;
        do {
          func_0x0000a112(local_6);
          func_0x00009ef8(0x28,1);
          local_6 = local_6 + -1;
        } while (0xfa < (int)local_6);
        func_0x0000a13e();
        puVar10 = (undefined *)MEM(0x6608);
        for (iVar6 = MEM(0x0400); iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = 0x8f;
        }
        *(undefined *)MEM(0x24e6) = 1;
        puVar10 = (undefined *)SAVED_GAM(0x06b4);
        for (iVar6 = MEM(0x0100); iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = 0;
        }
        local_6 = 0;
        if (*(char *)SAVED_GAM(0x02b5) != '\0') {
          puVar8 = (undefined2 *)SAVED_GAM(0x0012);
          puVar10 = (undefined *)SAVED_GAM(0x000d);
          do {
            *puVar8 = 0;
            *puVar10 = 0x44;
            func_0x0000a06c(500,3000,0x28);
            func_0x0000a730();
            puVar8 = puVar8 + 0x10;
            puVar10 = puVar10 + 0x20;
            local_6 = local_6 + 1;
          } while (local_6 < *(byte *)SAVED_GAM(0x02b5));
        }
      }
      else {
        pcVar1 = (char *)SAVED_GAM(0x02ef);
        *pcVar1 = *pcVar1 + -1;
        FUN_0000_0408(1);
        bVar5 = true;
      }
    }
    else if ((cVar4 == '\x04') && (*(char *)SAVED_GAM(0x02d6) == '\x1c')) {
      for (local_6 = 0; local_6 < *(byte *)SAVED_GAM(0x02b5); local_6 = local_6 + 1) {
        iVar6 = local_6 * 0x20;
        if (((*(char *)(iVar6 + SAVED_GAM(0x000d)) != 'D') && (*(char *)(iVar6 + SAVED_GAM(0x000d)) != 'P')) &&
           (uVar9 = RANDOM(29, false), *(byte *)(iVar6 + SAVED_GAM(0x000f)) < uVar9)) {
          func_0x00009680(MEM(0x2775));
          *(undefined *)(iVar6 + SAVED_GAM(0x000d)) = 0x50;
          func_0x0000a730();
        }
      }
    }
    else if ((cVar4 == -0x44) || (cVar4 == -0x71)) {
      func_0x0000d740();
      func_0x00009680(MEM(0x2780));
      func_0x0000a8d8();
    }
  } while (bVar5);
  func_0x0000a918();
  return;
}



void FUN_0000_10da(undefined2 param_1)

{
  func_0x00009680(MEM(0x278a));
  func_0x0000a8d8();
  FUN_0000_08d4(param_1);
  return;
}



undefined2 FUN_0000_10f2(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (*(char *)(iVar3 + param_1 * 0x10 + SAVED_GAM(0x07c4)) != '\0') {
      local_4 = 1;
    }
    iVar2 = iVar3 + 1;
  } while (iVar3 + 1 < 4);
  bVar1 = *(byte *)(iVar3 + SAVED_GAM(0x0ff9));
  if ((bVar1 < 0x40) || (0x73 < bVar1)) {
    local_4 = 0;
  }
  iVar2 = RANDOM(1, false);
  if (iVar2 != 0) {
    local_4 = 0;
  }
  return local_4;
}



void __cdecl16near FUN_0000_1156(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)SAVED_GAM(0x03b2);
  if (cVar1 == '\x01') {
    iVar3 = 0;
    puVar4 = (undefined2 *)SAVED_GAM(0x09c2);
    do {
      iVar2 = FUN_0000_10f2(iVar3);
      if (iVar2 != 0) {
        FUN_0000_085e(iVar3);
        *puVar4 = 0xfe;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  else if (cVar1 == '\x02') {
    iVar3 = 0;
    puVar4 = (undefined2 *)SAVED_GAM(0x09c2);
    do {
      iVar2 = FUN_0000_10f2(iVar3);
      if (iVar2 != 0) {
        FUN_0000_08d4(iVar3);
        *puVar4 = 0xfd;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}



void FUN_0000_11b8(int param_1)

{
  undefined2 unaff_DS;
  
  func_0x00009680(MEM(0x27b8));
  func_0x00009680(*(undefined2 *)(param_1 * 2 + MEM(0x27dc)));
  func_0x00009680(MEM(0x27c4));
  func_0x00009fc2(1,2000,60000,1,MEM(0x19c8));
  return;
}



void FUN_0000_11f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  
  *(undefined *)MEM(0x24e6) = 1;
  *(undefined *)MEM(0xa9bc) = 1;
  if (param_1 != 0) {
    puVar3 = (undefined *)SAVED_GAM(0x06bc);
    iVar2 = 0x1f;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined *)DRUNKENNESS = 0;
    *(undefined *)SAVED_GAM(0x02fe) = 1;
    func_0x0000f8a6();
    func_0x0000f8d6(*(undefined *)SAVED_GAM(0x02d9));
  }
  *(undefined *)SAVED_GAM(0x03b2) = 0xff;
  FUN_0000_0408(param_1);
  FUN_0000_02ae();
  iVar2 = 0;
  do {
    iVar1 = FUN_0000_0000(iVar2);
    if (iVar1 != 0) {
      FUN_0000_00b0(iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if ((*(char *)SAVED_GAM(0x02ed) == '\x1d') && (*(char *)SAVED_GAM(0x020f) != '\0')) {
    FUN_0000_00b0(9);
  }
  func_0x0000a730();
  iVar1 = func_0x0000b82c();
  if (-1 < iVar1) {
    func_0x0000d740();
    if (*(char *)SAVED_GAM(0x02ed) == '\x1d') {
      iVar2 = 2;
      do {
        if (*(byte *)(iVar2 + SAVED_GAM(0x0322)) < 0x80) {
          FUN_0000_11b8(iVar2);
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else if (*(char *)SAVED_GAM(0x03b2) != -1) {
      FUN_0000_11b8(*(undefined *)SAVED_GAM(0x03b2),iVar2);
      FUN_0000_1156();
    }
  }
  return;
}



undefined2 __cdecl16near FUN_0000_12ae(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (*(char *)SAVED_GAM(0x02ed) == '\x12') {
    iVar2 = func_0x0000b82c();
    if (iVar2 < 0) {
      return 0;
    }
    func_0x0000f8ee();
  }
  else {
    func_0x00009680(MEM(0x27e2));
    func_0x00009680(MEM(0x27fe));
    do {
      cVar1 = func_0x0000a49c();
      if (cVar1 == 'N') break;
    } while (cVar1 != 'Y');
    if (cVar1 != 'Y') {
      func_0x00009680(MEM(0x285e));
      become_wanted();
      return 1;
    }
    func_0x00009680(MEM(0x281b));
    func_0x000088a0(0);
    func_0x00009680(MEM(0x2845));
    *(undefined *)SAVED_GAM(0x02ed) = 4;
    *(undefined *)SAVED_GAM(0x02f0) = 0x19;
    *(undefined *)SAVED_GAM(0x02f1) = 4;
    *(undefined *)MEM(0x24e6) = 1;
    while (*(char *)SAVED_GAM(0x02d9) != '\b') {
      func_0x0000cdac(0x14);
    }
    *(undefined *)SAVED_GAM(0x0206) = 0;
    *(undefined *)SAVED_GAM(0x02ef) = 0;
  }
  FUN_0000_11f0(1);
  return MEM(0x12d4);
}



void FUN_0000_1352(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  iVar2 = *(int *)((uint)*(byte *)SAVED_GAM(0x1019) * 0x10 + SAVED_GAM(0x09c4));
  func_0x0000d740();
  if (*(char *)SAVED_GAM(0x1018) == 'a') {
    if (*(int *)((uint)*(byte *)SAVED_GAM(0x1019) * 0x10 + SAVED_GAM(0x09c2)) == 0xfe) {
      func_0x000094ea(10);
      FUN_0000_10da(*(undefined *)SAVED_GAM(0x1019));
      goto LAB_0000_13dc;
    }
    if (*(char *)(iVar2 * 8 + SAVED_GAM(0x06b4)) != 'p') {
      local_4 = 1;
      goto LAB_0000_13dc;
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)SAVED_GAM(0x1019);
    if (*(int *)(uVar1 * 0x10 + SAVED_GAM(0x09c2)) == 0) goto LAB_0000_13dc;
    iVar2 = func_0x0000f912(uVar1);
    if (iVar2 == 0) goto LAB_0000_13dc;
  }
  local_4 = FUN_0000_12ae();
LAB_0000_13dc:
  if (local_4 != 0) {
    if (*(byte *)(*(int *)((uint)*(byte *)SAVED_GAM(0x1019) * 0x10 + SAVED_GAM(0x09c4)) * 8 + SAVED_GAM(0x06b4)) < 0x40) {
      FUN_0000_00b0(*(undefined *)SAVED_GAM(0x1019));
    }
    else {
      func_0x00009680(MEM(0x2881));
      FUN_0000_09bc(*(undefined *)SAVED_GAM(0x1019));
    }
  }
  return;
}



void __cdecl16near FUN_0000_141e(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined2 unaff_DS;
  int local_c;
  uint local_8;
  undefined2 local_4;
  
  bVar5 = false;
  bVar4 = false;
  do {
    bVar6 = false;
    local_c = 1;
    iVar7 = func_0x0000b82c();
    if (iVar7 == 1) {
      func_0x000094ea(10);
      func_0x0000ca5a();
      func_0x00009680(MEM(0x288d));
    }
    else if (iVar7 == -1) {
      func_0x0000f88e();
      local_c = 0;
    }
    else {
      if (*(char *)MEM(0xa9bc) == '\0') {
        iVar7 = func_0x0000c6d8();
        if (iVar7 != 0) {
          func_0x0000f89a();
        }
      }
      else {
        *(undefined *)MEM(0xa9bc) = 0;
      }
      if (*(char *)SAVED_GAM(0x02ed) == '\0') {
        return;
      }
      local_4 = 1;
      do {
        local_8 = FUN_0000_0dc4(local_4);
        local_4 = 0;
        if (local_8 < 0x20) {
          if (local_8 - 1 < 0x16) {
                    // WARNING: Could not emulate address calculation at 0x000014b3
                    // WARNING: Treating indirect jump as call
            (**(code **)((local_8 - 1) * 2 + MEM(0x9722)))();
            return;
          }
          func_0x00009680(MEM(0x28be));
          local_c = 0;
        }
        else if ((local_8 < 0x30) || (0x39 < local_8)) {
          local_c = func_0x0000afa8(local_8);
        }
        else {
          local_c = FUN_0000_0e34(local_8);
        }
      } while (local_c == 3);
    }
    if (*(char *)SAVED_GAM(0x02ed) == '\0') {
      bVar6 = true;
    }
    else if ((local_c != 0) && (iVar7 = func_0x0000b82c(), iVar7 != -1)) {
      cVar2 = *(char *)SAVED_GAM(0x02d9);
      func_0x0000cdac(1);
      cVar3 = *(char *)SAVED_GAM(0x02d9);
      if ((cVar2 != cVar3) && ((cVar3 == '\x14' || (cVar3 == '\x05')))) {
        FUN_0000_0170();
      }
      FUN_0000_0f02();
      if (*(char *)SAVED_GAM(0x03a9) != '\0') {
        pcVar1 = (char *)SAVED_GAM(0x03ac);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          func_0x0000b7fc(*(undefined *)SAVED_GAM(0x03ab),*(undefined *)SAVED_GAM(0x03aa),*(undefined *)SAVED_GAM(0x03a9));
        }
      }
      *(undefined *)SAVED_GAM(0x06b6) = *(undefined *)SAVED_GAM(0x02f0);
      *(undefined *)SAVED_GAM(0x06b7) = *(undefined *)SAVED_GAM(0x02f1);
      *(undefined *)SAVED_GAM(0x06b8) = *(undefined *)SAVED_GAM(0x02ef);
      if (((((*(byte *)SAVED_GAM(0x02d6) < 0x12) || (0x15 < *(byte *)SAVED_GAM(0x02d6))) || (local_8 == 0x20)) ||
          (bVar4 = !bVar4, !bVar4)) &&
         ((*(char *)SAVED_GAM(0x02d4) != 'T' && ((*(char *)SAVED_GAM(0x02d4) != 'Q' || (bVar5 = !bVar5, !bVar5)))))) {
        FUN_0000_0c78();
        if (local_c < 2) {
          func_0x0000f8e2(*(undefined *)SAVED_GAM(0x02d9));
        }
        if ((*(char *)SAVED_GAM(0x1019) != '\0') || (local_c == 2)) {
          FUN_0000_1352(local_c + -1);
        }
      }
    }
  } while (!bVar6);
  return;
}



void __cdecl16near FUN_0000_1694(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 *local_a;
  
  iVar3 = 1;
  puVar4 = (undefined2 *)SAVED_GAM(0x09d4);
  do {
    func_0x0000b8a4(iVar3,0,0,0,0,0,0);
    *puVar4 = 0;
    puVar4 = puVar4 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  iVar3 = 1;
  iVar5 = 0x10;
  local_a = (undefined2 *)SAVED_GAM(0x0fba);
  do {
    if (*(char *)(iVar3 + SAVED_GAM(0x0ff8)) != '\0') {
      iVar1 = func_0x0000f966(*(undefined *)SAVED_GAM(0x02d9),iVar3);
      iVar2 = iVar5 + iVar1;
      FUN_0000_1726(*(undefined *)(iVar2 + SAVED_GAM(0x07c1)),*(undefined *)(iVar2 + SAVED_GAM(0x07be)),
                    *(undefined *)(iVar2 + SAVED_GAM(0x07bb)),iVar3);
      *(undefined2 *)(iVar5 + SAVED_GAM(0x09b8)) = 1;
      *(int *)(iVar5 + SAVED_GAM(0x09c6)) = iVar1;
      *local_a = MEM(0xffff);
    }
    iVar5 = iVar5 + 0x10;
    local_a = local_a + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}



void FUN_0000_1726(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined2 local_8;
  
  if (*(char *)(param_4 + SAVED_GAM(0x0ff8)) != '\0') {
    iVar2 = param_4 * 0x10;
    if ((param_1 != *(byte *)SAVED_GAM(0x02ef)) && (*(int *)(iVar2 + SAVED_GAM(0x09c4)) != 0)) {
      *(undefined *)(*(int *)(iVar2 + SAVED_GAM(0x09c4)) * 8 + SAVED_GAM(0x06b4)) = 0;
      *(undefined2 *)(iVar2 + SAVED_GAM(0x09c4)) = 0;
    }
    if ((param_1 == *(byte *)SAVED_GAM(0x02ef)) && (*(int *)(iVar2 + SAVED_GAM(0x09c4)) == 0)) {
      iVar7 = func_0x0000b714();
      if (*(char *)(param_4 + SAVED_GAM(0x0ff8)) == '\x01') {
        local_8 = 0x1e;
      }
      else {
        iVar4 = (uint)*(byte *)SAVED_GAM(0x02ed) * 4;
        uVar5 = 0;
        uVar6 = 1;
        for (cVar3 = (char)param_4; cVar3 != '\0'; cVar3 = cVar3 + -1) {
          bVar8 = (int)uVar6 < 0;
          uVar6 = uVar6 << 1;
          uVar5 = uVar5 << 1 | (uint)bVar8;
        }
        if ((*(uint *)(iVar4 + MEM(0x28c4)) & uVar5 | *(uint *)(iVar4 + MEM(0x28c2)) & uVar6) == 0) {
          local_8 = 0;
        }
        else {
          local_8 = 0xff;
        }
      }
      uVar1 = *(undefined *)(param_4 + SAVED_GAM(0x0ff8));
      func_0x0000b8a4(iVar7,local_8,param_1,param_2,param_3,uVar1,uVar1);
      *(undefined *)(iVar7 * 8 + SAVED_GAM(0x06ba)) = 0;
      *(int *)(iVar2 + SAVED_GAM(0x09c4)) = iVar7;
    }
    if ((param_1 == *(byte *)SAVED_GAM(0x02ef)) && (*(int *)(iVar2 + SAVED_GAM(0x09c4)) != 0)) {
      iVar7 = *(int *)(iVar2 + SAVED_GAM(0x09c4)) * 8;
      *(undefined *)(iVar7 + SAVED_GAM(0x06b6)) = (undefined)param_3;
      *(undefined *)(iVar7 + SAVED_GAM(0x06b7)) = (undefined)param_2;
      *(undefined *)(iVar7 + SAVED_GAM(0x06b8)) = (undefined)param_1;
    }
    *(undefined2 *)(iVar2 + SAVED_GAM(0x09ba)) = param_3;
    *(undefined2 *)(iVar2 + SAVED_GAM(0x09bc)) = param_2;
    *(uint *)(iVar2 + SAVED_GAM(0x09be)) = param_1;
    *(undefined2 *)(iVar2 + SAVED_GAM(0x09b8)) = 1;
  }
  return;
}


