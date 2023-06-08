#define SPRITE_FLAGS DATA_OVL(0x154c)

/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void FUN_0000_0032(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined *)SAVED_GAM(0x02f7) = (undefined)param_1;
  func_0x0000c14a(param_1,*(undefined *)SAVED_GAM(0x02f8));
  return;
}



undefined2 FUN_0000_004c(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  if (*(byte *)SAVED_GAM(0x02ed) < 0x80) {
    if (param_1 == 3) {
      uVar2 = 4;
    }
    else {
      uVar2 = 3;
    }
    func_0x0000c186(uVar2);
    iVar5 = (uint)*(byte *)MEM(0x6603) * 2;
    uVar3 = *(int *)(iVar5 + MEM(0x24d6)) + (uint)*(byte *)SAVED_GAM(0x02f0) & 7;
    uVar4 = *(int *)(iVar5 + MEM(0x24de)) + (uint)*(byte *)SAVED_GAM(0x02f1) & 7;
    bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + uVar4 * 8 + uVar3 + SAVED_GAM(0x03b4));
    if ((bVar1 & 0xf7) != 0) {
      return 0;
    }
    *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + uVar4 * 8 + uVar3 + SAVED_GAM(0x03b4)) =
         bVar1 & 8 | *(byte *)(param_1 + DATA_OVL(0x45a6));
  }
  else {
    *(undefined *)SAVED_GAM(0x02f7) = *(undefined *)(param_1 + DATA_OVL(0x45a2));
    func_0x0000c14a(*(undefined *)SAVED_GAM(0x02f7),*(undefined *)SAVED_GAM(0x02f8));
  }
  return MEM(0xffff);
}



undefined2 __cdecl16near FUN_0000_0114(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  byte *local_c;
  undefined2 local_4;
  
  uVar1 = func_0x0000c1aa();
  if ((int)uVar1 < 0) {
    local_4 = MEM(0xffff);
  }
  // Is the PC sleeping?
  else if (*(char *)(uVar1 * 0x20 + SAVED_GAM(0x000d)) == 'S') {
    *(undefined *)(uVar1 * 0x20 + SAVED_GAM(0x000d)) = 'G';
    if (0x7f < *(byte *)SAVED_GAM(0x02ed)) {
      iVar2 = 0;
      pbVar3 = (byte *)DATA_OVL(0x154c);
      local_c = (byte *)DATA_OVL(0x154d);
      do {
        if (((*pbVar3 & 0xe8) == 0x88) && (*local_c == uVar1)) {
          func_0x0000a880(iVar2);
          break;
        }
        pbVar3 = pbVar3 + 8;
        local_c = local_c + 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x20);
    }
    func_0x0000c186(1);
    local_4 = MEM(0xffff);
    *(undefined *)MEM(0xa9fa) = 1;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



undefined2 __cdecl16near FUN_0000_01ae(void)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar1 = func_0x0000c1aa();
  if (iVar1 < 0) {
    local_4 = MEM(0xffff);
  }
  else {
    pcVar2 = (char *)(iVar1 * 0x20 + SAVED_GAM(0x000d));
    if (*pcVar2 == 'P') {
      *pcVar2 = 'G';
      func_0x0000c186(1);
      *(undefined *)MEM(0xa9fa) = 1;
      local_4 = 1;
    }
    else {
      local_4 = 0;
    }
  }
  return local_4;
}



int __cdecl16near FUN_0000_01fa(void)

{
  int iVar1;
  int local_4;
  
  iVar1 = func_0x0000c1aa();
  if (iVar1 < 0) {
    local_4 = -1;
  }
  else {
    local_4 = func_0x0000c156(iVar1);
  }
  if (local_4 != 0) {
    func_0x0000c186(1);
  }
  return local_4;
}



undefined2 __cdecl16near FUN_0000_0230(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  iVar3 = func_0x0000c162();
  if (iVar3 == 0) {
    return MEM(0xffff);
  }
  func_0x0000c186(1);
  pbVar4 = (byte *)func_0x00008482(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0));
  bVar2 = *pbVar4;
  if (bVar2 == 0x9d) {
LAB_0000_0275:
    *pbVar4 = 0x44;
    func_0x000058d0(DATA_OVL(0x45aa));
    pbVar1 = (byte *)MEM(0x24e6);
    *pbVar1 = *pbVar1 | 2;
    func_0x00009990();
    func_0x0000842e(0x28,1,2000,MEM(0x04b0));
    uVar5 = MEM(0xffff);
  }
  else {
    if (bVar2 < 0x9e) {
      if ((bVar2 == 0x5b) || ((0x8f < bVar2 && (bVar2 < 0x94)))) goto LAB_0000_0275;
    }
    else if ((0xa4 < bVar2) &&
            ((bVar2 < 0xa7 ||
             ((0xa7 < bVar2 && ((bVar2 < 0xaa || ((0xac < bVar2 && (bVar2 < 0xb0))))))))))
    goto LAB_0000_0275;
    uVar5 = 0;
  }
  return uVar5;
}



undefined2 __cdecl16near FUN_0000_02d2(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined2 unaff_DS;
  int local_a;
  undefined2 local_8;
  byte *local_4;
  
  if ((*(byte *)SAVED_GAM(0x02ed) < 0x21) || (0x7f < *(byte *)SAVED_GAM(0x02ed))) {
    iVar7 = func_0x0000c162();
    if (iVar7 == 0) {
      local_8 = MEM(0xffff);
    }
    else {
      local_8 = 0;
      pcVar8 = (char *)func_0x00008482(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0));
      cVar4 = *pcVar8;
      if ((cVar4 == -0x47) || (cVar4 == -0x45)) {
        pcVar1 = pcVar8;
        *pcVar1 = *pcVar1 + -1;
        pbVar2 = (byte *)MEM(0x24e6);
        *pbVar2 = *pbVar2 | 2;
        func_0x0000c186(2);
        local_8 = 1;
      }
      else {
        local_a = 0;
        pcVar8 = (char *)SAVED_GAM(0x06b4);
        do {
          if ((((*pcVar8 == '\x01') && ((uint)(byte)pcVar8[2] == *(uint *)SAVED_GAM(0x02d0))) &&
              ((uint)(byte)pcVar8[3] == *(uint *)SAVED_GAM(0x02d2))) &&
             ((0x7f < *(byte *)SAVED_GAM(0x02ed) || (pcVar8[4] == *(char *)SAVED_GAM(0x02ef))))) {
            pbVar2 = (byte *)(pcVar8 + 5);
            *pbVar2 = *pbVar2 & 0x7f;
            func_0x0000c186(2);
            return 1;
          }
          pcVar8 = pcVar8 + 8;
          local_a = local_a + 1;
        } while (local_a < 0x20);
      }
    }
  }
  else {
    func_0x0000c186(2);
    iVar9 = (uint)*(byte *)MEM(0x6603) * 2;
    uVar5 = (uint)*(byte *)SAVED_GAM(0x02f0);
    uVar6 = (uint)*(byte *)SAVED_GAM(0x02f1);
    iVar7 = (uint)*(byte *)SAVED_GAM(0x02ef) * 0x40;
    local_4 = (byte *)(iVar7 + uVar6 * 8 + uVar5 + SAVED_GAM(0x03b4));
    if ((*local_4 & 0xf0) != 0x40) {
      local_4 = (byte *)((*(int *)(iVar9 + MEM(0x24de)) + uVar6 & 7) * 8 +
                         (*(int *)(iVar9 + MEM(0x24d6)) + uVar5 & 7) + iVar7 + SAVED_GAM(0x03b4));
    }
    bVar3 = *local_4;
    if ((bVar3 & 0xf0) == 0x40) {
      if ((bVar3 & 1) != 0) {
        func_0x000058d0(DATA_OVL(0x45b1));
      }
      *local_4 = *local_4 & 8 | 0x70;
      func_0x000058d0(DATA_OVL(0x45bc));
      local_8 = MEM(0xffff);
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}



void __cdecl16near FUN_0000_043e(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined *local_8;
  
  func_0x0000c186(2);
  iVar3 = 0;
  local_8 = (undefined *)DATA_OVL(0x154a);
  do {
    iVar2 = FUN_0000_0000(iVar3);
    if (((iVar2 == 0) && ((local_8[2] & 0xc0) == 0x40)) &&
       ((*(byte *)((int)FUN_0000_153c + (uint)(byte)local_8[3] * 2) & 0x20) != 0)) {
      iVar2 = func_0x0000c19e(0,iVar3,*(undefined *)SAVED_GAM(0x02f8));
      if (iVar2 == 0) {
        *local_8 = 1;
        pbVar1 = local_8 + 2;
        *pbVar1 = *pbVar1 | 2;
      }
    }
    local_8 = local_8 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}



undefined2 __cdecl16near FUN_0000_04b0(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_c;
  int local_4;
  
  func_0x0000c186(2);
  iVar3 = func_0x00006112(0xf,0);
  if (iVar3 < 6) {
    local_4 = 0x14;
  }
  else if (iVar3 < 0xb) {
    local_4 = 0x16;
  }
  else if (iVar3 < 0xe) {
    local_4 = 0x15;
  }
  else {
    local_4 = 0x22;
  }
  local_c = 0;
  cVar2 = (char)local_4 * '\x04' + '@';
  while ((iVar3 = func_0x0000bf16(), iVar3 == 0 ||
         (iVar3 = func_0x0000bdf6(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),0x90), iVar3 == 0))) {
    local_c = local_c + 1;
    if (7 < local_c) {
      return 0;
    }
  }
  iVar3 = func_0x0000a586(*(undefined *)SAVED_GAM(0x02ef),*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),0,local_4
                         );
  if (iVar3 < 0) {
    return 0;
  }
  iVar4 = (uint)*(byte *)(iVar3 * 8 + DATA_OVL(0x154e)) * 8;
  *(char *)(iVar4 + SAVED_GAM(0x06b4)) = '\x16';
  *(undefined *)(iVar4 + SAVED_GAM(0x06b5)) = 0x16;
  func_0x000050e8(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),local_4 * 4 + MEM(0x0140));
  *(char *)(iVar4 + SAVED_GAM(0x06b4)) = cVar2;
  *(char *)(iVar4 + SAVED_GAM(0x06b5)) = cVar2;
  pbVar1 = SPRITE_FLAGS[iVar3 * 8] | 1;
  return 1;
}



int __cdecl16near FUN_0000_05dc(void)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined2 unaff_DS;
  uint local_10;
  uint local_e;
  int local_c;
  
  local_c = 0;
  if (*(byte *)SAVED_GAM(0x02ed) < 0x80) {
    iVar5 = func_0x0000c162();
    if (iVar5 == 0) {
      local_c = -1;
    }
    else {
      func_0x0000c186(3);
      iVar5 = *(int *)SAVED_GAM(0x02d0);
      bVar2 = *(byte *)SAVED_GAM(0x02f0);
      iVar8 = *(int *)SAVED_GAM(0x02d2);
      bVar3 = *(byte *)SAVED_GAM(0x02f1);
      local_e = *(byte *)SAVED_GAM(0x02f5) + 0x20;
      if (MEM(0x0100) < local_e) {
        local_e = MEM(0x0100);
      }
      local_10 = *(byte *)SAVED_GAM(0x02f6) + 0x20;
      if (MEM(0x0100) < local_10) {
        local_10 = MEM(0x0100);
      }
      local_c = 0;
      uVar7 = (uint)*(byte *)SAVED_GAM(0x02d0);
      for (uVar9 = (uint)*(byte *)SAVED_GAM(0x02d2);
          (((*(byte *)SAVED_GAM(0x02f5) <= uVar7 && ((int)uVar7 < (int)local_e)) && (*(byte *)SAVED_GAM(0x02f6) <= uVar9))
          && ((int)uVar9 < (int)local_10)); uVar9 = uVar9 + (iVar8 - (uint)bVar3)) {
        pcVar6 = (char *)func_0x00008482(uVar9,uVar7);
        if (*pcVar6 == '\x05') {
          local_c = -1;
          *(undefined *)SAVED_GAM(0x02f0) = (char)uVar7;
          *(undefined *)SAVED_GAM(0x02f1) = (char)uVar9;
          *(undefined *)MEM(0x24e6) = 1;
        }
        uVar7 = uVar7 + (iVar5 - (uint)bVar2);
      }
      if (local_c != 0) {
        func_0x0000bbfe();
      }
    }
  }
  else {
    iVar5 = (uint)*(byte *)((uint)*(byte *)SAVED_GAM(0x02f8) * 8 + DATA_OVL(0x154e)) * 8;
    if ((*(byte *)SAVED_GAM(0x02fb) & 2) == 0) {
      func_0x0000c186(3);
      iVar8 = 0;
      uVar1 = *(undefined *)(iVar5 + SAVED_GAM(0x06b4));
      do {
        iVar4 = func_0x0000bf16();
        if ((iVar4 != 0) &&
           (iVar4 = func_0x0000bdf6(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),uVar1), iVar4 != 0))
        {
          iVar8 = (uint)*(byte *)SAVED_GAM(0x02f8) * 8;
          uVar1 = *(undefined *)SAVED_GAM(0x02d0);
          *(undefined *)(iVar8 + DATA_OVL(0x1550)) = uVar1;
          *(undefined *)(iVar5 + SAVED_GAM(0x06b6)) = uVar1;
          uVar1 = *(undefined *)SAVED_GAM(0x02d2);
          *(undefined *)(iVar8 + DATA_OVL(0x1551)) = uVar1;
          *(undefined *)(iVar5 + SAVED_GAM(0x06b7)) = uVar1;
          return 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 7);
    }
    else {
      local_c = 0;
    }
  }
  return local_c;
}



void __cdecl16near FUN_0000_074c(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_c;
  byte *local_a;
  
  func_0x0000c186(4);
  pbVar2 = (byte *)DATA_OVL(0x154c);
  local_a = (byte *)DATA_OVL(0x154e);
  local_c = 0x20;
  do {
    if (((*pbVar2 != 0) && ((*pbVar2 & 0x80) == 0)) && ((*pbVar2 & 0x10) != 0)) {
      pbVar1 = pbVar2;
      *pbVar1 = *pbVar1 & 0xef;
      iVar3 = (uint)*local_a * 8;
      *(undefined *)(iVar3 + SAVED_GAM(0x06b5)) = *(undefined *)(iVar3 + SAVED_GAM(0x06b4));
      func_0x00009414();
      func_0x0000972c();
    }
    pbVar2 = pbVar2 + 8;
    local_a = local_a + 8;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}



int __cdecl16near FUN_0000_07b4(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_6;
  
  func_0x0000c186(5);
  local_6 = 0;
  iVar3 = 0;
  while ((iVar2 = func_0x0000bf16(), iVar2 == 0 ||
         (iVar2 = func_0x0000bdf6(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),0xbc), iVar2 == 0))) {
    iVar3 = iVar3 + 1;
    if (7 < iVar3) {
LAB_0000_07ed:
      if (local_6 != 0) {
        local_6 = 0;
        iVar3 = 0;
        do {
          iVar2 = func_0x0000a586(*(undefined *)SAVED_GAM(0x02ef),*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),0
                                  ,0x1f);
          if (iVar2 < 0) {
            return local_6;
          }
          pbVar1 = SPRITE_FLAGS[iVar2 * 8];
          *pbVar1 = *pbVar1 | 1;
          local_6 = 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
      }
      return local_6;
    }
  }
  local_6 = 1;
  goto LAB_0000_07ed;
}



undefined2 __cdecl16near FUN_0000_0846(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  iVar3 = func_0x0000c162();
  if (iVar3 == 0) {
    uVar4 = MEM(0xffff);
  }
  else {
    func_0x0000c186(5);
    pbVar5 = (byte *)func_0x00008482(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0));
    uVar4 = 0;
    bVar2 = *pbVar5;
    if (0xb7 < bVar2) {
      if (bVar2 < 0xba) {
        *pbVar5 = 0x97;
      }
      else {
        if (bVar2 < 0xba) {
          return 0;
        }
        if (0xbb < bVar2) {
          return 0;
        }
        *pbVar5 = 0x98;
      }
      uVar4 = 1;
      pbVar1 = (byte *)MEM(0x24e6);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return uVar4;
}



undefined2 __cdecl16near FUN_0000_08ac(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  iVar1 = func_0x0000c1aa();
  if (iVar1 < 0) {
    local_4 = MEM(0xffff);
  }
  else if (((*(char *)(iVar1 * 0x20 + SAVED_GAM(0x000d)) == 'D') ||
           ((0x7f < *(byte *)SAVED_GAM(0x02ed) && (*(char *)SAVED_GAM(0x02fd) == '\0')))) ||
          ((0x7f < *(byte *)SAVED_GAM(0x02ed) && (*(char *)SAVED_GAM(0x02fd) == '\0')))) {
    local_4 = 0;
  }
  else {
    *(undefined2 *)(iVar1 * 0x20 + SAVED_GAM(0x0012)) = *(undefined2 *)(iVar1 * 0x20 + SAVED_GAM(0x0014));
    func_0x0000c186(5);
    *(undefined *)MEM(0xa9fa) = 1;
    local_4 = 1;
  }
  return local_4;
}



void FUN_0000_091e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  
  func_0x0000c186(6);
  func_0x000070f2();
  iVar4 = 0;
  pcVar5 = (char *)DATA_OVL(0x154c);
  do {
    if (*pcVar5 != '\0') {
      iVar1 = func_0x000096c6(iVar4);
      if (iVar1 != 0) {
        iVar1 = func_0x00007b3e();
        iVar2 = func_0x0000bf46(MEM(0xfffe),iVar4);
        if (iVar2 <= iVar1) {
          func_0x000075e4(iVar4);
          uVar3 = func_0x00006112(0x14,1,iVar4,param_1 * 0x20 + SAVED_GAM(0x0016));
          uVar3 = func_0x0000bdae(uVar3);
          func_0x00007f94(9999,uVar3);
          func_0x0000be32(*(undefined *)SAVED_GAM(0x02f8),iVar4);
        }
      }
    }
    pcVar5 = pcVar5 + 8;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  return;
}



undefined2 __cdecl16near FUN_0000_09a0(void)

{
  byte *pbVar1;
  int iVar2;
  undefined2 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  func_0x000058d0(DATA_OVL(0x45cb));
  iVar2 = func_0x0000c1c2(0xf,*(undefined *)SAVED_GAM(0x02f8));
  if (iVar2 == 0) {
LAB_0000_09bf:
    uVar3 = MEM(0xffff);
  }
  else {
    func_0x0000c186(6);
    pbVar4 = (byte *)func_0x00008482(*(undefined *)SAVED_GAM(0x02f4),*(undefined *)SAVED_GAM(0x02f3));
    if ((*pbVar4 & 0xfe) != 0x84) {
      iVar2 = func_0x0000c1ce(*(undefined *)SAVED_GAM(0x02f4),*(undefined *)SAVED_GAM(0x02f3));
      if (-1 < iVar2) {
        iVar5 = FUN_0000_0000(iVar2);
        if (iVar5 == 0) {
          iVar5 = func_0x000096c6(iVar2);
          if (iVar5 != 0) {
            iVar5 = func_0x0000c19e(0,iVar2,*(undefined *)SAVED_GAM(0x02f8));
            if (iVar5 == 0) {
              iVar5 = iVar2 * 8;
              pbVar1 = SPRITE_FLAGS[iVar5];
              *pbVar1 ^= 1;
              if ((SPRITE_FLAGS[iVar5] & 0x80) != 0) {
                *(iVar5 + DATA_OVL(0x154d)) * 0x20 + SAVED_GAM(0x000d)) = 0x47;
                func_0x00006980();
              }
              func_0x0000be1a(iVar2);
              func_0x000058d0(DATA_OVL(0x45d6));
              goto LAB_0000_09bf;
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined2 __cdecl16near FUN_0000_0a5c(void)

{
  undefined uVar1;
  undefined uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  func_0x000058d0(DATA_OVL(0x45e1));
  iVar3 = func_0x0000c1c2(0xf,*(undefined *)SAVED_GAM(0x02f8));
  if (iVar3 == 0) {
    uVar4 = MEM(0xffff);
  }
  else {
    func_0x0000c186(6);
    iVar3 = func_0x0000c1ce(*(undefined *)SAVED_GAM(0x02f4),*(undefined *)SAVED_GAM(0x02f3));
    if (((-1 < iVar3) && (iVar5 = FUN_0000_0000(iVar3), iVar5 == 0)) &&
       (iVar5 = func_0x0000c19e(0,iVar3,*(undefined *)SAVED_GAM(0x02f8)), iVar5 == 0)) {
      uVar1 = *(undefined *)(iVar3 * 8 + DATA_OVL(0x1550));
      uVar2 = *(undefined *)(iVar3 * 8 + DATA_OVL(0x1551));
      func_0x0000be02(-1 - iVar3);
      func_0x0000a586(*(undefined *)SAVED_GAM(0x02ef),uVar2,uVar1,0,0x14);
      return 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}



int __cdecl16near FUN_0000_0b28(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  undefined local_c;
  int local_8;
  
  func_0x000058d0(DATA_OVL(0x45ec));
  iVar2 = func_0x0000c1c2(0xf,*(undefined *)SAVED_GAM(0x02f8));
  if (iVar2 == 0) {
    local_8 = -1;
  }
  else {
    func_0x0000c186(7);
    iVar2 = func_0x0000c1ce(*(undefined *)SAVED_GAM(0x02f4),*(undefined *)SAVED_GAM(0x02f3));
    if (iVar2 < 0) {
      local_8 = 0;
    }
    else {
      iVar5 = 0;
      pcVar6 = (char *)SAVED_GAM(0x06b4);
      do {
        iVar4 = iVar5;
        if (*pcVar6 == '\0') break;
        pcVar6 = pcVar6 + 8;
        iVar5 = iVar5 + 1;
        iVar4 = 0xff;
      } while (iVar5 < 0x20);
      if (iVar4 != 0xff) {
        pcVar6 = (char *)DATA_OVL(0x154c);
        iVar5 = 0;
        do {
          iVar3 = iVar5;
          if (*pcVar6 == '\0') break;
          pcVar6 = pcVar6 + 8;
          iVar5 = iVar3 + 1;
          iVar3 = 0xff;
        } while (iVar5 < 0x20);
        if (iVar3 != 0xff) {
          iVar3 = iVar3 * 8;
          iVar2 = iVar2 * 8;
          *(undefined2 *)(iVar3 + DATA_OVL(0x154a)) = *(undefined2 *)(iVar2 + DATA_OVL(0x154a));
          // Modify the monster flags table!?
          SPRITE_FLAGS[iVar3] = SPRITE_FLAGS[iVar2];
          *(undefined2 *)(iVar3 + DATA_OVL(0x154e)) = *(undefined2 *)(iVar2 + DATA_OVL(0x154e));
          *(undefined2 *)(iVar3 + DATA_OVL(0x1550)) = *(undefined2 *)(iVar2 + DATA_OVL(0x1550));
          local_c = (undefined)iVar4;
          *(undefined *)(iVar3 + DATA_OVL(0x154e)) = local_c;
          iVar4 = iVar4 * 8;
          iVar2 = (*(uint *)(iVar2 + DATA_OVL(0x154e)) & 0xff) * 8;
          *(undefined2 *)(iVar4 + SAVED_GAM(0x06b4)) = *(undefined2 *)(iVar2 + SAVED_GAM(0x06b4));
          *(undefined2 *)(iVar4 + SAVED_GAM(0x06b6)) = *(undefined2 *)(iVar2 + SAVED_GAM(0x06b6));
          *(undefined2 *)(iVar4 + SAVED_GAM(0x06b8)) = *(undefined2 *)(iVar2 + SAVED_GAM(0x06b8));
          *(undefined2 *)(iVar4 + SAVED_GAM(0x06ba)) = *(undefined2 *)(iVar2 + SAVED_GAM(0x06ba));
          do {
            iVar2 = func_0x0000bf16();
            if ((iVar2 == 0) ||
               (iVar2 = func_0x0000bdf6(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),0x1c),
               iVar2 == 0)) {
              local_8 = 0;
            }
            else {
              uVar1 = *(undefined *)SAVED_GAM(0x02d0);
              *(undefined *)(iVar3 + DATA_OVL(0x1550)) = uVar1;
              *(undefined *)(iVar4 + SAVED_GAM(0x06b6)) = uVar1;
              uVar1 = *(undefined *)SAVED_GAM(0x02d2);
              *(undefined *)(iVar3 + DATA_OVL(0x1551)) = uVar1;
              *(undefined *)(iVar4 + SAVED_GAM(0x06b7)) = uVar1;
              local_8 = 1;
            }
          } while (local_8 == 0);
        }
      }
    }
  }
  return local_8;
}



void __cdecl16near FUN_0000_0c98(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined *local_8;
  
  func_0x0000c186(7);
  iVar3 = 0;
  local_8 = (undefined *)DATA_OVL(0x154a);
  do {
    if ((local_8[2] & 0xc0) == 0x40) {
      iVar2 = FUN_0000_0000(iVar3);
      if (iVar2 == 0) {
        iVar2 = func_0x0000c19e(0,iVar3,*(undefined *)SAVED_GAM(0x02f8));
        if (iVar2 == 0) {
          *local_8 = 1;
          pbVar1 = local_8 + 2;
          *pbVar1 = *pbVar1 | 2;
        }
      }
    }
    local_8 = local_8 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}



undefined2 __cdecl16near FUN_0000_0cf0(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  uint uVar3;
  
  if ((*(byte *)SAVED_GAM(0x02d6) & 0xf0) != 0x20) {
    func_0x000058d0(DATA_OVL(0x45f7));
    bVar1 = func_0x000066ec();
    if (0x1f < bVar1) {
      func_0x0000573a(bVar1);
    }
    bVar1 = 10;
    func_0x0000573a();
    if ((0x30 < bVar1) && (bVar1 < 0x39)) {
      uVar3 = 8;
      func_0x0000c186(8);
      iVar2 = func_0x00008874(uVar3 & 0xff);
      if (iVar2 != 0) {
        return MEM(0xffff);
      }
    }
  }
  return 0;
}



int __cdecl16near FUN_0000_0d4c(void)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_6;
  
  func_0x0000c186(8);
  local_6 = -1;
  iVar2 = 0;
  pcVar1 = (char *)SAVED_GAM(0x06b4);
  do {
    if (*pcVar1 == -4) {
      func_0x000058d0(DATA_OVL(0x4602));
      func_0x00006212(2,1000,28000,1,MEM(0x2648));
      local_6 = 0;
      break;
    }
    pcVar1 = pcVar1 + 8;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if (local_6 != 0) {
    *(undefined *)SAVED_GAM(0x02d4) = 0x54;
    *(undefined *)SAVED_GAM(0x02e8) = 10;
    func_0x00006980();
  }
  return local_6;
}



int __cdecl16near FUN_0000_0dba(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  int iVar6;
  undefined2 uVar7;
  
  *(undefined *)SAVED_GAM(0x02e9) = 1;
  *(undefined *)SAVED_GAM(0x02ea) = 1;
  iVar6 = 1;
  uVar7 = 1;
  iVar2 = func_0x00008a08();
  if (iVar2 < 0) {
    return iVar2;
  }
  func_0x000058d0(DATA_OVL(0x4613),iVar6,uVar7);
  uVar3 = func_0x0000c10e();
  if (uVar3 == MEM(0xffff)) {
    uVar7 = DATA_OVL(0x4621);
LAB_0000_0df7:
    iVar2 = func_0x000058d0(uVar7);
    return iVar2;
  }
  if (uVar3 == MEM(0xfffe)) {
    uVar7 = DATA_OVL(0x4628);
    goto LAB_0000_0df7;
  }
  uVar4 = (int)uVar3 / 6 + 1;
  *(char *)SAVED_GAM(0x02e9) = (char)uVar4;
  if (*(char *)SAVED_GAM(0x02ed) == '\0') {
    bVar5 = (*(byte *)(uVar3 + MEM(0x1c90)) & 8) == 0;
  }
  else if (*(byte *)SAVED_GAM(0x02ed) < 0x80) {
    if (((*(char *)SAVED_GAM(0x02ed) == '\x12') && (*(char *)SAVED_GAM(0x020e) == '\0')) || (*(char *)SAVED_GAM(0x02ed) == '\x1d')) {
      func_0x000058d0(DATA_OVL(0x4634));
      iVar2 = func_0x00006212(2,1000,28000,1,MEM(0x2648));
      return iVar2;
    }
    if (*(byte *)SAVED_GAM(0x02ed) < 0x21) {
      bVar5 = (*(byte *)(uVar3 + MEM(0x1c90)) & 4) == 0;
    }
    else {
      bVar5 = (*(byte *)(uVar3 + MEM(0x1c90)) & 2) == 0;
    }
  }
  else {
    bVar5 = (*(byte *)(uVar3 + MEM(0x1c90)) & 1) == 0;
  }
  if (bVar5) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    func_0x000058d0(DATA_OVL(0x463f));
    iVar2 = func_0x0000842e(0x32,1,2000,800);
    return iVar2;
  }
  if (*(char *)(uVar3 + SAVED_GAM(0x024a)) == '\0') {
    uVar7 = DATA_OVL(0x464a);
    goto LAB_0000_0df7;
  }
  pcVar1 = (char *)(uVar3 + SAVED_GAM(0x024a));
  *pcVar1 = *pcVar1 + -1;
  if (*(byte *)(iVar2 * 0x20 + SAVED_GAM(0x0011)) < uVar4) {
    func_0x000058d0(DATA_OVL(0x4657));
  }
  else {
    pcVar1 = (char *)(iVar2 * 0x20 + SAVED_GAM(0x0011));
    *pcVar1 = *pcVar1 - (char)uVar4;
    iVar6 = -1;
    if (uVar4 <= *(byte *)(iVar2 * 0x20 + SAVED_GAM(0x0018))) {
      if (uVar3 < 0x30) {
                    // WARNING: Could not emulate address calculation at 0x00000f1a
                    // WARNING: Treating indirect jump as call
        iVar2 = (**(code **)(uVar3 * 2 + MEM(0xd0c6)))();
        return iVar2;
      }
      goto LAB_0000_11a6;
    }
  }
  iVar6 = 0;
LAB_0000_11a6:
  if (iVar6 == 1) {
    func_0x000058d0(DATA_OVL(0x4666));
    return 1;
  }
  if (iVar6 != 0) {
    return 1;
  }
  func_0x000058d0(DATA_OVL(0x4670));
  func_0x0000842e(0x32,1,2000,800);
  return 1;
}



undefined2 FUN_0000_11de(uint param_1)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)(param_1 + SAVED_GAM(0x027a));
  *pcVar1 = *pcVar1 + -1;
  func_0x000058d0(DATA_OVL(0x467a));
  if (7 < param_1) {
    return 1;
  }
                    // WARNING: Could not emulate address calculation at 0x00001205
                    // WARNING: Treating indirect jump as call
  uVar2 = (**(code **)(param_1 * 2 + MEM(0xd2c0)))();
  return uVar2;
}



uint FUN_0000_135a(uint param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)(param_1 + SAVED_GAM(0x0282));
  *pcVar1 = *pcVar1 + -1;
  func_0x000058d0(DATA_OVL(0x4716));
  if (*(byte *)SAVED_GAM(0x02ed) < 0x80) {
    uVar3 = func_0x0000c1aa();
  }
  else {
    uVar3 = (uint)*(byte *)((uint)*(byte *)SAVED_GAM(0x02f8) * 8 + DATA_OVL(0x154d));
  }
  if (-1 < (int)uVar3) {
    func_0x0000c186(param_1);
    iVar2 = func_0x00006112(0xf,0);
    if (iVar2 == 0) {
      param_1 = 4;
    }
    else if (iVar2 == 1) {
      param_1 = func_0x00006112(7,0);
    }
    if (param_1 < 8) {
                    // WARNING: Could not emulate address calculation at 0x000013db
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(param_1 * 2 + MEM(0xd4a0)))();
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}



void FUN_0000_153c(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  
  pbVar2 = (byte *)func_0x00008482(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
  bVar1 = *pbVar2;
  func_0x000058d0(DATA_OVL(0x4778));
  if ((*(byte *)SAVED_GAM(0x02ed) < 0x21) &&
     (((bVar1 == 0x2c || (bVar1 == 0x2d)) || ((3 < bVar1 && (bVar1 < 0xb)))))) {
    func_0x000058d0(DATA_OVL(0x4783));
    *(undefined *)(param_1 + SAVED_GAM(0x028a)) = *(undefined *)SAVED_GAM(0x02f0);
    *(undefined *)(param_1 + SAVED_GAM(0x0292)) = *(undefined *)SAVED_GAM(0x02f1);
    *(undefined *)(param_1 + SAVED_GAM(0x029a)) = *(undefined *)SAVED_GAM(0x02ed);
    *(undefined *)(param_1 + SAVED_GAM(0x02a2)) = *(undefined *)SAVED_GAM(0x02ef);
  }
  else {
    func_0x000058d0(DATA_OVL(0x478c));
  }
  return;
}



void FUN_0000_15b4(uint param_1)

{
  uint *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  func_0x000058d0(DATA_OVL(0x47a4));
  if (param_1 == 0) {
    uVar3 = DATA_OVL(0x47dc);
LAB_0000_15d9:
    func_0x000058d0(uVar3);
  }
  else {
    if (param_1 == 1) {
      uVar3 = DATA_OVL(0x47e9);
      goto LAB_0000_15d9;
    }
    if (param_1 == 2) {
      uVar3 = DATA_OVL(0x47f3);
      goto LAB_0000_15d9;
    }
  }
  iVar4 = 2000;
  do {
    func_0x00006212(0,iVar4,200,1,MEM(0x0a50));
    iVar4 = iVar4 + 0x32;
  } while (iVar4 < 25000);
  iVar4 = 25000;
  do {
    func_0x00006212(0,iVar4,200,1,MEM(0x0a50));
    iVar4 = iVar4 + -0x32;
  } while (2000 < iVar4);
  if ((((*(char *)(param_1 + DATA_OVL(0x4892)) != *(char *)SAVED_GAM(0x02f0)) ||
       (*(char *)(param_1 + DATA_OVL(0x4896)) != *(char *)SAVED_GAM(0x02f1))) ||
      (*(char *)(param_1 + DATA_OVL(0x489a)) != *(char *)SAVED_GAM(0x02ed))) ||
     (*(char *)(param_1 + DATA_OVL(0x489e)) != *(char *)SAVED_GAM(0x02ef))) {
    func_0x000058d0(DATA_OVL(0x4800));
    func_0x0000842e(0x32,1,2000,800);
    return;
  }
  func_0x00007b66(7);
  func_0x000058d0(DATA_OVL(0x480e));
  if (param_1 == 0) {
    uVar3 = DATA_OVL(0x4832);
LAB_0000_1699:
    func_0x000058d0(uVar3);
  }
  else {
    if (param_1 == 1) {
      uVar3 = DATA_OVL(0x483a);
      goto LAB_0000_1699;
    }
    if (param_1 == 2) {
      uVar3 = DATA_OVL(0x4841);
      goto LAB_0000_1699;
    }
  }
  func_0x000070f2();
  func_0x000070f2();
  func_0x000070f2();
  func_0x00007b66(3);
  iVar4 = *(byte *)SAVED_GAM(0x02f1) - 1;
  iVar2 = func_0x0000770e(*(undefined *)SAVED_GAM(0x02ef),iVar4,*(undefined *)SAVED_GAM(0x02f0));
  if (iVar2 != 0xfc) {
    return;
  }
  if (param_1 != *(byte *)SAVED_GAM(0x0325)) {
    return;
  }
  uVar3 = func_0x0000bb9e(*(undefined2 *)SAVED_GAM(0x02d0));
  func_0x0000bb92(uVar3);
  uVar3 = 7;
  iVar2 = 7;
  do {
    func_0x000075a2(*(byte *)SAVED_GAM(0x02f1) - 1,*(undefined *)SAVED_GAM(0x02f0),iVar4,uVar3);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined *)(param_1 + SAVED_GAM(0x0322)) = 0xff;
  *(undefined *)(param_1 + SAVED_GAM(0x0210)) = 0;
  puVar1 = (uint *)SAVED_GAM(0x0624);
  *puVar1 = *puVar1 | (uint)*(byte *)(param_1 + DATA_OVL(0x48a2));
  func_0x000058d0(DATA_OVL(0x484b));
  if (param_1 == 0) {
    uVar3 = DATA_OVL(0x4868);
  }
  else if (param_1 == 1) {
    uVar3 = DATA_OVL(0x4871);
  }
  else {
    if (param_1 != 2) goto LAB_0000_1752;
    uVar3 = DATA_OVL(0x487a);
  }
  func_0x000058d0(uVar3);
LAB_0000_1752:
  func_0x000058d0(DATA_OVL(0x4884));
  func_0x000083e8();
  return;
}



bool FUN_0000_1764(uint param_1)

{
  undefined2 unaff_DS;
  bool bVar1;
  
  bVar1 = param_1 != *(byte *)SAVED_GAM(0x02d4);
  if (!bVar1) {
    func_0x000058d0(DATA_OVL(0x48a5));
    *(undefined *)SAVED_GAM(0x02e8) = 0;
    *(undefined *)SAVED_GAM(0x02d4) = 0;
    *(undefined *)MEM(0xa9fa) = 1;
  }
  return bVar1;
}



void __cdecl16near FUN_0000_1792(void)

{
  int iVar1;
  int local_c;
  
  local_c = 1;
  func_0x0000c1e6();
  iVar1 = func_0x0000c012(0xff,DATA_OVL(0x1524),0x26,MEM(0xffff));
  if (iVar1 == -1) {
    func_0x000058d0(DATA_OVL(0x48af));
  }
  else {
    func_0x000058d0(DATA_OVL(0x48c1));
    func_0x00008f7c();
    func_0x00005c14(1);
    func_0x00008ed0(DATA_OVL(0x48c8));
    func_0x0000c1da(8);
    iVar1 = func_0x0000c1f2(0x55,0xff,iVar1);
    func_0x00008e2a();
    func_0x00008ea0();
    func_0x00008fbc();
    func_0x00006980();
    if (-1 < iVar1) {
      if (iVar1 < 8) {
        local_c = FUN_0000_11de(iVar1);
      }
      else if (iVar1 < 0x10) {
        local_c = FUN_0000_135a(iVar1 + -8);
      }
      else if ((iVar1 < 0x15) || (0x1c < iVar1)) {
        if (iVar1 - 0x10U < 0x16) {
                    // WARNING: Could not emulate address calculation at 0x0000185d
                    // WARNING: Treating indirect jump as call
          (**(code **)((iVar1 - 0x10U) * 2 + MEM(0xdade)))();
          return;
        }
      }
      else {
        FUN_0000_153c(iVar1 + -0x15);
      }
      if (local_c == 0) {
        func_0x000058d0(DATA_OVL(0x4a8b));
        func_0x0000842e(0x32,1,2000,800);
      }
    }
  }
  return;
}



undefined2 FUN_0000_1bb0(undefined2 param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((((param_3 < 8) || (0xb6 < param_3)) || ((int)param_2 < 8)) || (0xb6 < (int)param_2)) {
    *(undefined2 *)SAVED_GAM(0x02d2) = MEM(0xffff);
    *(undefined2 *)SAVED_GAM(0x02d0) = MEM(0xffff);
  }
  else {
    func_0x00004af0(param_1);
    func_0x00004ce4(param_2,param_3);
    func_0x00004ce4(param_2,param_3 + 1);
    uVar1 = func_0x00006112(10000,100);
    func_0x00006362(uVar1);
    if ((param_2 & 1) == 0) {
      return 1;
    }
    func_0x00008034(param_2,param_3);
    if ((-1 < *(int *)SAVED_GAM(0x02d0)) && (-1 < *(int *)SAVED_GAM(0x02d2))) {
      uVar1 = func_0x00007fee(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0));
      return uVar1;
    }
  }
  return 0;
}



int FUN_0000_1c36(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined2 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined2 *puVar11;
  int *piVar12;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_c0;
  int *local_be;
  int *local_bc;
  int local_ba;
  int local_b8;
  undefined2 *local_b2;
  int local_90;
  int local_8c [21];
  int local_62;
  int local_60;
  int local_5e;
  int local_5c;
  int local_5a [21];
  int local_30 [21];
  int local_6;
  int local_4;
  
  iVar4 = (uint)*(byte *)(param_2 * 8 + DATA_OVL(0x1550)) * 0x10;
  local_60 = iVar4 + 8;
  iVar5 = (uint)*(byte *)(param_2 * 8 + DATA_OVL(0x1551)) * 0x10;
  local_62 = iVar5 + 8;
  if (param_1 != 1) {
    if (param_1 != 2) {
      if (param_1 == 3) {
        local_60 = iVar4 + 0x10;
      }
      else if (param_1 == 4) {
        local_60 = iVar4 + 0x10;
        local_62 = iVar5 + 0x18;
      }
      goto LAB_0000_1c88;
    }
    local_60 = iVar4 + 0x18;
  }
  local_62 = iVar5 + 0x10;
LAB_0000_1c88:
  piVar6 = local_30;
  piVar9 = local_5a;
  piVar10 = local_8c;
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar10;
    piVar10 = piVar10 + 1;
    *piVar2 = 0;
  }
  puVar11 = (undefined2 *)MEM(0xa9d0);
  puVar8 = (undefined2 *)MEM(0x1cf0);
  for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar3 = puVar11;
    puVar11 = puVar11 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar1;
  }
  do {
    *piVar6 = local_60;
    *piVar9 = local_62;
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
  } while (piVar9 < local_30);
  local_90 = 0;
  local_c0 = 0;
  do {
    local_4 = 0;
    local_5c = 0;
    local_bc = local_8c;
    local_b8 = 0;
    local_ba = local_c0;
    local_be = local_8c;
    do {
      if (*local_bc == 0) {
        local_6 = func_0x00007b2e(0xf);
        local_5e = 0;
        if (0 < local_6) {
          piVar6 = (int *)(local_b8 + MEM(0xa9d0));
          piVar10 = (int *)((int)local_5a + local_b8);
          piVar9 = (int *)((int)local_30 + local_b8);
          local_b2 = (undefined2 *)(local_ba + param_5);
          piVar12 = (int *)(local_ba + param_4);
          do {
            iVar4 = FUN_0000_1bb0(param_3 + 8,*piVar10,*piVar9);
            if (iVar4 == 0) {
              *local_be = 1;
            }
            else if (((((piVar12 < (int *)(param_4 + 0x7e)) && (*(uint *)SAVED_GAM(0x02d0) < MEM(0x8000))) &&
                      (*(uint *)SAVED_GAM(0x02d2) < MEM(0x8000))) &&
                     ((*(int *)SAVED_GAM(0x02d0) < 0xb && (*(int *)SAVED_GAM(0x02d2) < 0xb)))) &&
                    (*(char *)(*(int *)SAVED_GAM(0x02d2) * 0x20 + *(int *)SAVED_GAM(0x02d0) + MEM(0xab02)) == '\0')) {
              local_b2 = local_b2 + 1;
              piVar12 = piVar12 + 1;
              local_ba = local_ba + 2;
              local_c0 = local_c0 + 2;
              local_90 = local_90 + 1;
              *local_b2 = *(undefined2 *)SAVED_GAM(0x02d0);
              iVar4 = *(int *)SAVED_GAM(0x02d2);
              *piVar12 = iVar4;
              *(undefined *)(iVar4 * 0x20 + *(int *)SAVED_GAM(0x02d0) + MEM(0xab02)) = 0xff;
            }
            if (*(int *)((int)local_8c + local_b8) == 0) {
              piVar2 = piVar6;
              *piVar2 = *piVar2 + -10;
              piVar7 = piVar9;
              if (param_1 == 1) {
LAB_0000_1e9e:
                piVar2 = piVar7;
                *piVar2 = *piVar2 + -1;
              }
              else if (param_1 == 2) {
LAB_0000_1eb8:
                piVar2 = piVar7;
                *piVar2 = *piVar2 + 1;
              }
              else {
                piVar7 = piVar10;
                if (param_1 == 3) goto LAB_0000_1e9e;
                if (param_1 == 4) goto LAB_0000_1eb8;
              }
              if (*piVar6 < 1) {
                if (local_5c < 10) {
                  iVar4 = -1;
                }
                else {
                  iVar4 = 1;
                }
                piVar7 = piVar10;
                if (param_1 == 1) {
LAB_0000_1f06:
                  piVar2 = piVar7;
                  *piVar2 = *piVar2 - iVar4;
                }
                else if ((param_1 == 2) || (piVar7 = piVar9, param_1 == 3)) {
                  piVar2 = piVar7;
                  *piVar2 = *piVar2 + iVar4;
                }
                else if (param_1 == 4) goto LAB_0000_1f06;
                piVar2 = piVar6;
                *piVar2 = *piVar2 + *(int *)(local_b8 + MEM(0x1cf0));
              }
            }
          } while ((*(int *)((int)local_8c + local_b8) == 0) &&
                  (local_5e = local_5e + 1, local_5e < local_6));
        }
      }
      else {
        local_4 = local_4 + 1;
      }
      local_bc = local_bc + 1;
      local_b8 = local_b8 + 2;
      local_be = local_be + 1;
      local_5c = local_5c + 1;
    } while (local_5c < 0x15);
    if (0x14 < local_4) {
      func_0x0000638e();
      return local_90;
    }
  } while( true );
}



void FUN_0000_1f60(undefined2 param_1,int param_2,int param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  int local_114;
  undefined2 local_10a;
  undefined local_102 [128];
  undefined local_82 [128];
  
  iVar3 = (uint)*(byte *)(param_3 * 8 + DATA_OVL(0x154d)) * 0x20;
  uVar4 = func_0x0000c162(param_3);
  if (param_2 == 1) {
    local_10a = 16000;
  }
  else if (param_2 == 2) {
    local_10a = DATA_OVL(0x4b10);
  }
  else {
    local_10a = SAVED_GAM(0x-0466);
  }
  func_0x000062bc(700,local_10a,800);
  iVar5 = FUN_0000_1c36(uVar4,param_3,param_1,local_102,local_82);
  if (1 < iVar5 + 1) {
    puVar2 = &stackMEM(0xfffe);
    do {
      iVar8 = 0x1f;
      local_114 = DATA_OVL(0x1642);
      do {
        if (((((uint)*(byte *)(local_114 + 6) == *(uint *)((int)register0x00000010 + -0x80)) &&
             ((uint)*(byte *)(local_114 + 7) == *(uint *)((int)register0x00000010 + MEM(0xff00)))) &&
            ((*(byte *)(local_114 + 5) & 0x80) == 0)) &&
           (((*(byte *)(local_114 + 2) & 0x20) == 0 && (*(char *)(local_114 + 2) != '\0')))) {
          pbVar1 = (byte *)(local_114 + 5);
          *pbVar1 = *pbVar1 | 0x80;
          if (param_2 == 1) {
            iVar6 = func_0x0000c19e(0,iVar8,param_3);
            if ((iVar6 != 0) || (iVar6 = FUN_0000_0000(iVar8), iVar6 != 0)) break;
            func_0x000075e4(iVar8);
            func_0x0000a92e(iVar8);
          }
          else if (param_2 == 2) {
            iVar6 = func_0x0000bf46(MEM(0xfffe),iVar8);
            iVar7 = func_0x00007b3e();
            if (iVar7 < iVar6) break;
            func_0x000075e4(iVar8);
            func_0x0000bf6a(param_3,iVar8);
          }
          else {
            iVar6 = iVar8;
            if (param_2 == 3) {
              func_0x000075e4(iVar8);
              iVar7 = iVar3 + SAVED_GAM(0x0016);
              uVar4 = func_0x00007b2e(0x1e,iVar8,iVar7);
            }
            else {
              if (((param_2 != 4) || (iVar7 = func_0x0000c19e(0,iVar8,param_3), iVar7 != 0)) ||
                 (iVar7 = FUN_0000_0000(iVar8), iVar7 != 0)) break;
              func_0x000075e4(iVar8);
              iVar7 = iVar3 + SAVED_GAM(0x0016);
              uVar4 = 99;
            }
            uVar4 = func_0x0000bdae(uVar4,iVar6,iVar7);
            func_0x00007f94(9999,uVar4);
          }
          func_0x0000be32(param_3,iVar8);
          break;
        }
        local_114 = local_114 + -8;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 2);
    } while ((undefined *)register0x00000010 != puVar2 + (iVar5 + 1) * 2);
  }
  pbVar9 = (byte *)DATA_OVL(0x1647);
  do {
    pbVar1 = pbVar9;
    *pbVar1 = *pbVar1 & 0x7f;
    pbVar9 = pbVar9 + -8;
  } while ((byte *)DATA_OVL(0x1547) < pbVar9);
  return;
}


