typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


undefined2 __cdecl16near FUN_0000_009e(void)

{
  int iVar1;
  undefined2 uVar2;
  
  func_0x00003670(0x94f4);
  iVar1 = func_0x00004cae();
  if (iVar1 < 0) {
    iVar1 = -0x6b02;
  }
  else {
    iVar1 = iVar1 * 0x20 + 0x55a8;
  }
  func_0x00003670(iVar1);
  uVar2 = 0xcb;
  iVar1 = func_0x00003d32();
  if (iVar1 != 0) {
    uVar2 = 0xd6;
    func_0x000034da(10);
  }
  return uVar2;
}



int __cdecl16near FUN_0000_00de(void)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int *local_28;
  int *local_26;
  undefined2 local_12;
  byte local_10 [4];
  int local_c;
  undefined2 local_a;
  undefined local_8 [4];
  int local_4;
  
  iVar7 = 0;
  local_4 = -1;
  local_c = 0;
  do {
    uVar4 = func_0x0000448c();
    bVar2 = func_0x00003e52(uVar4);
    if ((bVar2 != 0x4a) && (bVar2 != 0x4f)) {
      if ((bVar2 < 0x41) || ((0x5a < bVar2 || (3 < iVar7)))) {
        if (bVar2 == 8) {
          if (iVar7 != 0) {
            iVar6 = func_0x00003d32();
            if (iVar6 == 0) {
              iVar6 = func_0x00003b0e(local_8[iVar7 + -1]);
              iVar6 = iVar6 + -1;
            }
            else {
              iVar6 = func_0x00003b0e(local_8[iVar7 + -1]);
            }
            func_0x00003a12(iVar6);
            iVar5 = func_0x00003f8c(*(undefined2 *)((uint)local_10[iVar7 + -1] * 2 + 0x1b7a));
            local_12 = 0;
            iVar6 = iVar5;
            if (0 < iVar5) {
              do {
                local_12 = iVar6;
                func_0x000034da(0x20);
                iVar5 = iVar5 + -1;
                iVar6 = local_12;
              } while (iVar5 != 0);
            }
            uVar4 = func_0x00003b0e(local_8[iVar7 + -1]);
            func_0x00003a12(uVar4);
            iVar7 = iVar7 + -1;
          }
        }
        else {
          if (bVar2 != 0xd) {
            if (bVar2 == 0x1b) {
              iVar7 = 0;
            }
            else if (bVar2 != 0x20) goto LAB_0000_01cf;
          }
          local_c = 1;
        }
      }
      else {
        local_10[iVar7] = bVar2;
        iVar6 = func_0x00003f8c(*(undefined2 *)((uint)bVar2 * 2 + 0x1b7a));
        iVar5 = func_0x00003d32();
        if (0xd < iVar5 + iVar6) {
          func_0x000034da(10);
        }
        uVar3 = func_0x00003d32();
        local_8[iVar7] = uVar3;
        func_0x00003670(*(undefined2 *)((uint)bVar2 * 2 + 0x1b7a));
        uVar4 = 0x154;
        func_0x000034da(0x20);
        iVar7 = iVar7 + 1;
      }
    }
LAB_0000_01cf:
  } while (local_c == 0);
  local_a = iVar7;
  do {
    local_c = 1;
    iVar6 = 0;
    if (1 < local_a) {
      do {
        if (local_10[iVar6 + 1] < local_10[iVar6]) {
          bVar2 = local_10[iVar6];
          local_10[iVar6] = local_10[iVar6 + 1];
          local_10[iVar6 + 1] = bVar2;
          local_c = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar7 + -1);
    }
  } while (local_c == 0);
  local_12 = 0;
  local_26 = (int *)0x1c30;
  local_28 = (int *)0x1c30;
  do {
    bVar1 = true;
    iVar7 = 0;
    if (0 < local_a) {
      iVar6 = 0;
      do {
        if (*(byte *)(*local_26 + iVar7) != local_10[iVar6]) {
          bVar1 = false;
          break;
        }
        for (; (iVar6 < local_a + -1 && (local_10[iVar6 + 1] == local_10[iVar6])); iVar6 = iVar6 + 1
            ) {
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar6 < local_a);
    }
    if ((bVar1) && (*(char *)(*local_28 + iVar7) != '\0')) {
      bVar1 = false;
    }
    if (bVar1) {
      local_4 = local_12;
      goto LAB_0000_02a1;
    }
    local_26 = local_26 + 1;
    local_28 = local_28 + 1;
    local_12 = local_12 + 1;
    if (0x2f < local_12) {
LAB_0000_02a1:
      if (local_a == 0) {
        local_4 = -1;
      }
      else {
        func_0x000034da(10,uVar4);
        if (local_4 < 0) {
          local_4 = -2;
        }
      }
      return local_4;
    }
  } while( true );
}



int __cdecl16near FUN_0000_0306(void)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  if (*(byte *)0x5893 < 0x80) {
    *(uint *)0x5876 = (uint)*(byte *)0x5896;
    bVar3 = *(byte *)0x5897;
  }
  else {
    iVar4 = (uint)*(byte *)0x589e * 8;
    *(uint *)0x5876 = (uint)*(byte *)(iVar4 + -0x45e6);
    bVar3 = *(byte *)(iVar4 + -0x45e5);
  }
  *(uint *)0x5878 = (uint)bVar3;
  func_0x00003670(0x9504);
  do {
    iVar4 = func_0x0000448c();
    bVar2 = true;
    if (iVar4 == 1) {
      func_0x00003670(0x9526);
      piVar1 = (int *)0x5876;
      *piVar1 = *piVar1 + -1;
    }
    else if (iVar4 == 2) {
      func_0x00003670(0x9518);
      piVar1 = (int *)0x5876;
      *piVar1 = *piVar1 + 1;
    }
    else if (iVar4 == 3) {
      func_0x00003670(0x9510);
      piVar1 = (int *)0x5878;
      *piVar1 = *piVar1 + -1;
    }
    else if (iVar4 == 4) {
      func_0x00003670(0x951e);
      piVar1 = (int *)0x5878;
      *piVar1 = *piVar1 + 1;
    }
    else if (iVar4 == 0x20) {
      func_0x00003670(0x952c);
      iVar4 = 0;
    }
    else {
      bVar2 = false;
    }
  } while (!bVar2);
  return iVar4;
}



bool FUN_0000_03c2(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 * 0x20 + 0x55b3) != 'D';
  if (bVar2) {
    uVar1 = func_0x000058de(param_1 * 0x20 + 0x55b8);
    func_0x00005d34(*(undefined2 *)(param_1 * 0x20 + 0x55ba),uVar1);
    *(undefined *)0xa9fa = 1;
  }
  return bVar2;
}



void FUN_0000_040a(int param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((param_2 != 0) || (param_1 != 0)) {
    if (param_1 == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
    }
    FUN_0000_0000(uVar1);
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else if (param_2 == 1) {
      uVar1 = 4;
    }
    else if (param_2 == 2) {
      uVar1 = 3;
    }
    else if (param_2 == 3) {
      uVar1 = 1;
    }
    else {
      if (param_2 != 4) {
        return;
      }
      uVar1 = 2;
    }
    func_0x00004cb6(uVar1);
  }
  return;
}



void __cdecl16near FUN_0000_046c(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = (uint)*(byte *)0x5897 - (uint)*(byte *)0x589c;
  func_0x00007b2a(0x20,iVar1,(uint)*(byte *)0x5896 - (uint)*(byte *)0x589b,0xffff);
  iVar2 = 0x14;
  do {
    if (*(char *)0x587a != 'T') {
      func_0x00006372(iVar1);
    }
    func_0x000071b4();
    func_0x000074cc();
    iVar1 = 0x4b7;
    func_0x00003f1a(1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x00007730();
  return;
}



undefined2 FUN_0000_04c2(int param_1)

{
  byte *pbVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  int local_8;
  
  if (param_1 == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = 5;
  }
  FUN_0000_0000(uVar2);
  local_8 = 0;
  while (((iVar3 = func_0x00009cb6(), iVar3 == 0 ||
          (iVar3 = func_0x00009b96(*(undefined2 *)0x5878,*(undefined2 *)0x5876,0xd8), iVar3 == 0))
         || (pcVar4 = (char *)func_0x00006222(*(undefined2 *)0x5878,*(undefined2 *)0x5876),
            *pcVar4 == -1))) {
    local_8 = local_8 + 1;
    if (7 < local_8) {
      return 0;
    }
  }
  iVar3 = func_0x00008326(*(undefined *)0x5895,*(undefined2 *)0x5878,*(undefined2 *)0x5876,0,0x26);
  if (-1 < iVar3) {
    func_0x00003fb2(5,500,12000,1,0xac8);
    iVar6 = (uint)*(byte *)(iVar3 * 8 + -0x45e8) * 8;
    *(undefined *)(iVar6 + 0x5c5b) = 0x16;
    *(undefined *)(iVar6 + 0x5c5a) = 0x16;
    func_0x00002e88(*(undefined2 *)0x5878,*(undefined2 *)0x5876,0x1d8);
    *(undefined *)(iVar6 + 0x5c5b) = 0xd8;
    *(undefined *)(iVar6 + 0x5c5a) = 0xd8;
    if (param_1 == 0) {
      iVar6 = func_0x00009ce6(0xffff,*(undefined *)0x589e);
      iVar5 = func_0x000058de();
      if (iVar6 <= iVar5) {
        func_0x00003670(0x9532);
        return 0xffff;
      }
    }
    pbVar1 = (byte *)(iVar3 * 8 + -0x45ea);
    *pbVar1 = *pbVar1 | 1;
    return 1;
  }
  return 0;
}



undefined2 FUN_0000_05e0(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined local_a;
  
  if (param_2 < 0) {
    return 0xffff;
  }
  if (*(char *)(param_2 * 0x20 + 0x55b3) != 'D') {
    if (param_1 != 0) {
      func_0x00003670(0x953c);
    }
    return 0;
  }
  param_2 = param_2 * 0x20;
  *(undefined *)(param_2 + 0x55b3) = 0x47;
  *(undefined2 *)(param_2 + 0x55b8) = 1;
  cVar1 = *(char *)(param_2 + 0x55b2);
  if (cVar1 == 'A') {
LAB_0000_0646:
    bVar2 = *(byte *)(param_2 + 0x55b6);
LAB_0000_064b:
    *(byte *)(param_2 + 0x55b7) = bVar2;
  }
  else {
    if (cVar1 == 'B') {
      bVar2 = *(byte *)(param_2 + 0x55b6) >> 1;
      goto LAB_0000_064b;
    }
    if (cVar1 == 'M') goto LAB_0000_0646;
  }
  if (*(byte *)0x5888 < 0x62) {
    iVar5 = *(int *)(param_2 + 0x55bc);
    uVar6 = func_0x00002262(iVar5,iVar5 >> 0xf,*(undefined *)0x5888,0,100,0);
    uVar3 = func_0x000022b6(uVar6);
    *(undefined2 *)(param_2 + 0x55bc) = uVar3;
  }
  iVar5 = 1;
  for (iVar4 = *(int *)(param_2 + 0x55bc) / 100; 0 < iVar4; iVar4 = iVar4 >> 1) {
    iVar5 = iVar5 + 1;
  }
  local_a = (undefined)iVar5;
  *(undefined *)(param_2 + 0x55be) = local_a;
  *(int *)(param_2 + 0x55ba) = iVar5 * 0x1e;
  if (param_1 == 1) {
    uVar3 = 6;
  }
  else {
    if (param_1 != 0) goto LAB_0000_06d7;
    uVar3 = 8;
  }
  FUN_0000_0000(uVar3);
LAB_0000_06d7:
  *(undefined *)0xa9fa = 1;
  return 1;
}



undefined2 __cdecl16near FUN_0000_0768(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  iVar3 = FUN_0000_0306();
  if (iVar3 == 0) {
    local_6 = 0xffff;
  }
  else {
    pcVar4 = (char *)func_0x00006222(*(undefined2 *)0x5878,*(undefined2 *)0x5876);
    cVar2 = *pcVar4;
    if (cVar2 == -0x69) {
      *pcVar4 = -0x48;
    }
    else {
      if (cVar2 != -0x68) {
        return 0;
      }
      *pcVar4 = -0x46;
    }
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    local_6 = 1;
  }
  return local_6;
}



undefined2 FUN_0000_07bc(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  byte *local_14;
  byte *local_12;
  undefined2 local_8;
  byte *local_4;
  
  if (*(byte *)0x5893 < 0x80) {
    if (param_1 != 0) {
      FUN_0000_0000(4);
    }
    iVar5 = (uint)*(byte *)0x6603 * 2;
    uVar2 = (uint)*(byte *)0x5896;
    uVar3 = (uint)*(byte *)0x5897;
    iVar4 = (uint)*(byte *)0x5895 * 0x40;
    local_4 = (byte *)(iVar4 + uVar3 * 8 + uVar2 + 0x595a);
    if ((*local_4 & 0xf0) != 0x80) {
      local_4 = (byte *)((*(int *)(iVar5 + 0x24de) + uVar3 & 7) * 8 +
                         (*(int *)(iVar5 + 0x24d6) + uVar2 & 7) + iVar4 + 0x595a);
    }
    if ((*local_4 & 0xf0) == 0x80) {
      pbVar1 = local_4;
      *pbVar1 = *pbVar1 & 8;
      func_0x00003670(0x954c);
      local_8 = 0xffff;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    iVar4 = FUN_0000_0306();
    if (iVar4 == 0) {
      local_8 = 0xffff;
    }
    else {
      if (param_1 != 0) {
        FUN_0000_0000(4);
      }
      local_8 = 0;
      iVar4 = 0;
      pbVar6 = (byte *)0x5c5a;
      local_12 = (byte *)0x5c5c;
      local_14 = (byte *)0x5c5d;
      do {
        if ((((*pbVar6 & 0xfc) == 0xe8) && ((uint)*local_12 == *(uint *)0x5876)) &&
           ((uint)*local_14 == *(uint *)0x5878)) {
          func_0x00005894(iVar4,0,0,0,0,0,0);
          return 1;
        }
        pbVar6 = pbVar6 + 8;
        local_12 = local_12 + 8;
        local_14 = local_14 + 8;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x20);
    }
  }
  return local_8;
}



void FUN_0000_08ea(undefined param_1)

{
  undefined2 unaff_DS;
  
  *(undefined *)0x58a6 = param_1;
  return;
}



void FUN_0000_08f8(undefined2 param_1,undefined param_2,undefined param_3)

{
  undefined2 unaff_DS;
  
  *(undefined *)0x587a = param_3;
  *(undefined *)0x588e = param_2;
  FUN_0000_0000(param_1);
  func_0x00004720();
  return;
}



void FUN_0000_0914(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x4b95);
  if (0 < param_1) {
    for (iVar2 = 0; iVar2 != param_1; iVar2 = iVar2 + 1) {
      func_0x00005894(iVar2 + 1,0,*(undefined *)0x5895,*(undefined *)(uVar1 + 0x4bc2),
                      *(undefined *)(uVar1 + 0x4b9e),3,3);
      uVar1 = uVar1 + 1;
    }
  }
  return;
}



void __cdecl16near FUN_0000_0966(void)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  bool bVar10;
  undefined2 *local_12;
  undefined2 *local_10;
  int local_a;
  int local_4;
  
  bVar4 = false;
  local_a = 0;
  do {
    if ((*(char *)(local_a + 0x1f6e) == *(char *)0x5896) &&
       (*(char *)(local_a + 0x1f76) == *(char *)0x5897)) break;
    local_a = local_a + 1;
  } while (local_a < 8);
  if (local_a == 8) {
    local_a = 6;
  }
  *(undefined *)0x5c5b = 0x6c;
  *(undefined *)0x5c5a = 0x6c;
  func_0x00007730();
  func_0x00003670(0xb58b);
  func_0x00005906(10);
  func_0x00003670(0xb5b6);
  func_0x0000593c(0xc,0xbd08);
  if (*(char *)0xbd08 != '\0') {
    iVar5 = func_0x00008d3e(0xbd08,*(undefined2 *)(local_a * 2 + 0x4b3e));
    bVar10 = iVar5 != -1;
    func_0x00005906(6);
    func_0x000034da(10);
    iVar5 = 0;
    do {
      func_0x00003670(0x958e);
      func_0x0000593c(0xc,0xbd08);
      if (*(char *)0xbd08 == '\0') {
        return;
      }
      iVar6 = func_0x00008d3e(0xbd08,*(undefined2 *)(local_a * 2 + 0x1f5e));
      if (iVar6 == -1) {
        bVar10 = false;
      }
      func_0x00005906(0xc);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if (bVar10) {
      if (((uint)*(byte *)0x58ce & 1 << ((byte)local_a & 0x1f)) == 0) {
        pbVar2 = (byte *)0x58cc;
        *pbVar2 = *pbVar2 | '\x01' << ((byte)local_a & 0x1f);
        func_0x00003670(0xb5ff);
        *(undefined *)0x5c5b = 0x1c;
        *(undefined *)0x5c5a = 0x1c;
        func_0x0000448c();
        func_0x00003670(0xb62c);
        func_0x00003670(*(int *)(local_a * 2 + 0x4b5e) + -0x4de2);
        func_0x00003670(0x9598);
        func_0x0000448c();
        func_0x00003670(0xb669);
        puVar9 = (undefined2 *)0x4be6;
        local_10 = (undefined2 *)0x4bf4;
        local_12 = (undefined2 *)0x4c02;
        puVar8 = (undefined2 *)0x4c10;
        do {
          func_0x00003fb2(*puVar8,*local_12,*local_10,1,*puVar9);
          puVar9 = puVar9 + 1;
          local_10 = local_10 + 1;
          local_12 = local_12 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar8 < (undefined2 *)0x4c1e);
      }
      else if (((uint)*(byte *)0x58cc & 1 << ((byte)local_a & 0x1f)) == 0) {
        while (!bVar4) {
          func_0x00003670(0xb692);
          do {
            do {
              uVar7 = func_0x0000448c();
            } while (uVar7 < 0x30);
          } while (0x39 < uVar7);
          func_0x000034da(uVar7);
          local_4 = uVar7 - 0x30;
          if (local_4 == 0) {
            func_0x00003670(0x959c);
            return;
          }
          func_0x00003670(0x95a2);
          iVar5 = *(int *)0x57aa;
          if (local_4 * 100 - iVar5 == 0 || local_4 * 100 < iVar5) {
            bVar4 = true;
          }
          else {
            func_0x00003670(0xb6b9);
          }
        }
        piVar1 = (int *)0x57aa;
        *piVar1 = *piVar1 + local_4 * -100;
        func_0x00004720();
        pcVar3 = (char *)0x5888;
        *pcVar3 = *pcVar3 + (char)local_4;
        if (99 < *(byte *)0x5888) {
          *(undefined *)0x5888 = 99;
        }
        func_0x00003abe(1);
        func_0x00003670(0x95aa);
        func_0x00003abe(0);
        func_0x00003670(0x95b4);
        func_0x00002890(*(undefined2 *)0x13b0);
        func_0x000029a6(0xb7,0xb7,8,8);
        iVar5 = 2000;
        do {
          func_0x00003fb2(0,iVar5,200,1,0xa8c);
          iVar5 = iVar5 + 0x32;
        } while (iVar5 < 25000);
        iVar5 = 25000;
        do {
          func_0x00003fb2(0,iVar5,200,1,0xa8c);
          iVar5 = iVar5 + -0x32;
        } while (2000 < iVar5);
      }
      else {
        pbVar2 = (byte *)0x58cc;
        *pbVar2 = *pbVar2 & ('\x01' << ((byte)local_a & 0x1f) & *(byte *)0x58cc ^ 0xff);
        func_0x00003670(0xb6d7);
        func_0x00002890(*(undefined2 *)0x13b0);
        func_0x000029a6(0xb7,0xb7,8,8);
        iVar5 = 2000;
        do {
          func_0x00003fb2(0,iVar5,0x96,1,0xc1c);
          iVar5 = iVar5 + 0x32;
        } while (iVar5 < 25000);
        iVar5 = 25000;
        do {
          func_0x00003fb2(0,iVar5,0x96,1,0xc1c);
          iVar5 = iVar5 + -0x32;
        } while (2000 < iVar5);
        func_0x00004e92();
        pcVar3 = (char *)0x5888;
        *pcVar3 = *pcVar3 + '\x03';
        if (99 < *(byte *)0x5888) {
          *(undefined *)0x5888 = 99;
        }
        if (*(char *)(local_a + 0x4b7e) != '\0') {
          pcVar3 = (char *)0x55b4;
          *pcVar3 = *pcVar3 + '\x01';
          if (0x1e < *(byte *)0x55b4) {
            *(undefined *)0x55b4 = 0x1e;
          }
          func_0x00003670(0x95b8);
        }
        if (*(char *)(local_a + 0x4b86) != '\0') {
          pcVar3 = (char *)0x55b5;
          *pcVar3 = *pcVar3 + '\x01';
          if (0x1e < *(byte *)0x55b5) {
            *(undefined *)0x55b5 = 0x1e;
          }
          func_0x00003670(0x95c6);
        }
        if (*(char *)(local_a + 0x4b8e) != '\0') {
          pcVar3 = (char *)0x55b6;
          *pcVar3 = *pcVar3 + '\x01';
          if (0x1e < *(byte *)0x55b6) {
            *(undefined *)0x55b6 = 0x1e;
          }
          func_0x00003670(0x95d4);
        }
        if ((local_a == 7) &&
           (pcVar3 = (char *)0x5888, *pcVar3 = *pcVar3 + '\x03', 99 < *(byte *)0x5888)) {
          *(undefined *)0x5888 = 99;
        }
      }
      func_0x00005906(10);
    }
    else {
      func_0x00003670(0xb5de);
    }
  }
  return;
}



void __cdecl16near FUN_0000_0d24(void)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  int iVar2;
  
  func_0x0000448c();
  func_0x00003670(0xb703);
  func_0x0000448c();
  func_0x00003670(0xb733);
  func_0x0000448c();
  iVar2 = 0;
  do {
    if (((uint)*(byte *)0x58cc & 1 << ((byte)iVar2 & 0x1f)) != 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 == 8) {
    func_0x00003670(0xb75c);
  }
  else {
    pbVar1 = (byte *)0x58ce;
    *pbVar1 = *pbVar1 | '\x01' << ((byte)iVar2 & 0x1f);
    iVar2 = 0x22;
    func_0x000034da();
    func_0x00003670(*(int *)(iVar2 * 2 + 0x4b6e) + -0x4de2);
    func_0x00003670(0x95e6);
    func_0x0000448c();
    if (*(char *)0x58ce == -1) {
      func_0x00002890(*(undefined2 *)0x13ae);
      func_0x000029a6(0xb7,0xb7,8,8);
      func_0x00004e92();
      func_0x00002890(*(undefined2 *)0x13b0);
      func_0x000029a6(0xb7,0xb7,8,8);
      func_0x00004e92();
      func_0x00002890(*(undefined2 *)0x13ae);
      func_0x000029a6(0xb7,0xb7,8,8);
      func_0x00004e92();
      func_0x00003670(0xb773);
      func_0x0000448c();
      func_0x00003670(0x95ea);
      func_0x00003abe(1);
      func_0x00003670(0xb79d);
      func_0x00003abe(0);
      func_0x0000448c();
      func_0x00003abe(1);
      func_0x00003670(0xb7ef);
      func_0x00003abe(0);
      func_0x0000448c();
      func_0x00003abe(1);
      func_0x00003670(0xb82a);
      func_0x00003abe(0);
      func_0x0000448c();
      func_0x00003abe(1);
      func_0x00003670(0xb89e);
      func_0x00003abe(0);
      func_0x0000448c();
    }
  }
  return;
}



void __cdecl16near FUN_0000_0e64(void)

{
  func_0x00005906(1);
  func_0x0000615e();
  func_0x00005906();
  return;
}



void __cdecl16near FUN_0000_0e76(void)

{
  char *pcVar1;
  byte bVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined2 unaff_DS;
  undefined2 uVar14;
  int local_16;
  char *local_14;
  char *local_e;
  
  pcVar7 = (char *)func_0x00006222(*(undefined *)0x5897,*(undefined *)0x5896);
  cVar5 = *pcVar7;
  *(undefined *)0x24e6 = 1;
  *(undefined *)0xbd15 = *(undefined *)0x5893;
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x589e = 0xff;
  puVar12 = (undefined2 *)0xa9fc;
  puVar10 = (undefined2 *)0x5c5a;
  do {
    *puVar12 = *puVar10;
    puVar12[1] = puVar10[1];
    puVar12[2] = puVar10[2];
    puVar12[3] = puVar10[3];
    *(undefined *)puVar10 = 0;
    puVar12 = puVar12 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar10 < (undefined2 *)0x5d5a);
  if (cVar5 == '\x11') {
    uVar14 = 0x960a;
    uVar8 = 0x160;
  }
  else {
    uVar14 = 0x95fc;
    uVar8 = 0xb0;
  }
  func_0x0000438e(uVar8,0xb0,0xac64,uVar14);
  func_0x0000438e(0x3ab,2000,0xb21e,0x9618);
  iVar13 = 0;
  iVar11 = 0;
  do {
    puVar10 = (undefined2 *)(iVar11 + -0x52ec);
    puVar12 = (undefined2 *)(iVar13 + -0x539c);
    for (iVar9 = 5; iVar9 != 0; iVar9 = iVar9 + -1) {
      puVar4 = puVar10;
      puVar10 = puVar10 + 1;
      puVar3 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar4 = *puVar3;
    }
    *(undefined *)puVar10 = *(undefined *)puVar12;
    iVar13 = iVar13 + 0x10;
    iVar11 = iVar11 + 0x20;
  } while (iVar11 < 0x160);
  func_0x00007730();
  pcVar7 = (char *)0x55e7;
  iVar11 = 0;
  do {
    if (*pcVar7 == '\x7f') {
      iVar11 = iVar11 + 1;
    }
    pcVar7 = pcVar7 + 0x20;
  } while (pcVar7 < (char *)0x57c7);
  if (0 < iVar11) {
    FUN_0000_0914(iVar11);
  }
  if (cVar5 == '\x11') {
    uVar8 = 0xb8f9;
  }
  else {
    uVar8 = 0xb8cc;
  }
  func_0x00003670(uVar8);
  iVar13 = 4;
  do {
    FUN_0000_0e64();
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  *(undefined *)0x5c5b = 0x1c;
  *(undefined *)0x5c5a = 0x1c;
  *(undefined *)0x5c5c = 5;
  *(undefined *)0x5c5d = 10;
  *(undefined *)0x5c5e = *(undefined *)0x5895;
  FUN_0000_0e64();
  if ((cVar5 == '\x11') && (0 < iVar11)) {
    func_0x00003670(0x9624);
    if (iVar11 == 1) {
      uVar8 = 0x9636;
    }
    else {
      uVar8 = 0x9648;
    }
    func_0x00003670(uVar8);
    local_e = (char *)0x55e7;
    local_14 = (char *)0x55c8;
    local_16 = 0x20;
    do {
      if (*local_e == '\x7f') {
        cVar6 = *local_14;
        iVar11 = 0;
        while (cVar6 != '\0') {
          uVar8 = func_0x00003e52(*(undefined *)(local_16 + iVar11 + 0x55a8));
          func_0x000034da(uVar8);
          cVar6 = *(char *)(local_16 + iVar11 + 1 + 0x55a8);
          iVar11 = iVar11 + 1;
        }
        func_0x000034da(10);
      }
      local_e = local_e + 0x20;
      local_14 = local_14 + 0x20;
      local_16 = local_16 + 0x20;
    } while (local_16 < 0x200);
  }
  if (cVar5 == '\x11') {
    iVar11 = 7;
  }
  else {
    iVar11 = 4;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar1 = (char *)0x5c5d;
    *pcVar1 = *pcVar1 + -1;
    FUN_0000_0e64();
  }
  if (cVar5 == '\x11') {
    FUN_0000_0d24();
  }
  else {
    FUN_0000_0966();
  }
  *(undefined *)0x5c5b = 0x1c;
  *(undefined *)0x5c5a = 0x1c;
  func_0x00005906(1);
  bVar2 = *(byte *)0x5c5d;
  if (bVar2 < 10) {
    iVar11 = 10 - (uint)bVar2;
    do {
      pcVar1 = (char *)0x5c5d;
      *pcVar1 = *pcVar1 + '\x01';
      FUN_0000_0e64();
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(undefined *)0x5c5d = 0;
  *(undefined *)0x5c5c = 0;
  *(undefined *)0x5c5a = 0;
  iVar11 = 4;
  do {
    FUN_0000_0e64();
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  func_0x00005906(10);
  puVar12 = (undefined2 *)0x5c5a;
  puVar10 = (undefined2 *)0xa9fc;
  do {
    *puVar12 = *puVar10;
    puVar12[1] = puVar10[1];
    puVar12[2] = puVar10[2];
    puVar12[3] = puVar10[3];
    puVar12 = puVar12 + 4;
    puVar10 = puVar10 + 4;
  } while (puVar10 < (undefined2 *)0xaafc);
  *(undefined *)0x5893 = *(undefined *)0xbd15;
  func_0x00006d9c(0x10);
  func_0x00007c6a();
  return;
}



void __cdecl16near FUN_0000_10fe(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00003670(0x9658);
  do {
    cVar1 = func_0x0000448c();
    if (cVar1 == 'Y') break;
  } while (cVar1 != 'N');
  if (cVar1 == 'N') {
    uVar2 = 0x9666;
  }
  else {
    func_0x00003670(0x966a);
    cVar1 = *(char *)0xa9bd;
    if (cVar1 != '\x05') {
      func_0x0000433e(1);
    }
    func_0x0000438e(0,0x100,0xb31e,0x967a);
    func_0x0000433e(1);
    func_0x0000438e(0,0x100,0xb21e,0x9684);
    if (cVar1 != '\x01') {
      func_0x000043f8(0x100,0xb31e,0x968e);
    }
    func_0x0000433e(3);
    func_0x000043f8(0x1060,0x55a6,0x9698);
    func_0x000043f8(0x200,0xb21e,0x96a2);
    func_0x0000433e(cVar1);
    uVar2 = 0x96ac;
  }
  func_0x00003670(uVar2);
  return;
}


