typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


undefined2 FUN_0000_0054(undefined2 param_1,undefined2 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  bool bVar3;
  bool bVar4;
  
  pbVar2 = (byte *)func_0x00008482(param_1,param_2);
  bVar1 = *pbVar2;
  if (bVar1 != 0xa5) {
    if (bVar1 < 0xa6) {
      if (bVar1 == 0x29) {
        return 1;
      }
      if (bVar1 < 0x94) {
        return 0;
      }
      bVar3 = bVar1 < 0x9c;
      bVar4 = bVar1 == 0x9c;
    }
    else {
      if (bVar1 < 0xbc) {
        if (0xb9 < bVar1) {
          return 1;
        }
        if (bVar1 != 0xae) {
          return 0;
        }
        return 1;
      }
      if (bVar1 == 0xbe) {
        return 1;
      }
      if (bVar1 < 0xca) {
        return 0;
      }
      bVar3 = bVar1 < 0xcb;
      bVar4 = bVar1 == 0xcb;
    }
    if (!bVar3 && !bVar4) {
      return 0;
    }
  }
  return 1;
}



undefined2 __cdecl16near FUN_0000_00ac(void)

{
  char cVar1;
  undefined2 uVar2;
  
  func_0x000058d0(0x9052);
  do {
    uVar2 = func_0x000066ec();
    cVar1 = func_0x000060b2(uVar2);
    if (cVar1 == 'Y') {
      func_0x000058d0(0x9066);
      return 0;
    }
  } while (cVar1 != 'N');
  func_0x000058d0(0x906c);
  return 1;
}



void FUN_0000_00e6(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (((*(byte *)0x587c & 0xfe) == 0x12) && (param_1 != 0x83)) {
    func_0x000058d0(0x9072);
  }
  else {
    if (*(char *)0x587b == -1) {
      func_0x00007a7c();
    }
    *(int *)0xb116 = param_1 + -0x81;
    *(undefined2 *)0xb114 = 0;
    cVar1 = *(char *)0x5893;
    if (*(char *)((param_1 + -0x81) * 0x10 + 0x23ca) != cVar1) {
      iVar3 = *(int *)0xb114;
      do {
        if (0xf < iVar3) break;
        iVar3 = iVar3 + 1;
      } while (*(char *)(*(int *)0xb116 * 0x10 + iVar3 + 0x23ca) != cVar1);
      *(int *)0xb114 = iVar3;
    }
    iVar3 = *(int *)0xb116 * 0x20 + *(int *)0xb114 * 2;
    *(undefined2 *)0xaafc = *(undefined2 *)(iVar3 + 0x21ca);
    *(undefined2 *)0xaafe = *(undefined2 *)(iVar3 + 0x22ca);
    uVar2 = *(uint *)0xb116;
    if (uVar2 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00000185
                    // WARNING: Treating indirect jump as call
      (**(code **)(uVar2 * 2 + -0x3eb6))();
      return;
    }
  }
  return;
}



undefined2 __cdecl16near FUN_0000_01e2(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  uint local_16;
  undefined local_12 [4];
  undefined local_e;
  
  if (*(char *)0x5893 == '\x12') {
    if (*(char *)0x587a == '\x1d') {
      func_0x0000573a(0x22);
      func_0x000058d0(0x90fc);
      func_0x0000573a(0x22);
      func_0x000058d0(0x9128);
      func_0x00007b9c(0xe,local_12);
      func_0x0000573a(10);
      local_e = 0;
      iVar3 = FUN_0000_0000(local_12,0x4a9a);
      if (iVar3 != 0) {
        func_0x0000573a(10);
        func_0x0000573a(0x22);
        func_0x000058d0(0x913a);
        func_0x0000573a(0x22);
        func_0x0000573a(10);
        return 0;
      }
    }
    return 1;
  }
  if (*(char *)0x5893 == '\x05') {
    func_0x0000573a(0x22);
    func_0x000058d0(0x90a2);
    func_0x0000573a(0x22);
    iVar3 = FUN_0000_00ac();
    if (iVar3 != 0) {
      return 1;
    }
    *(int *)0x57aa = *(int *)0x57aa / 2;
  }
  else {
    local_16 = 0;
    uVar2 = (uint)*(byte *)0x585b;
    if (uVar2 != 0) {
      pcVar4 = (char *)0x55b3;
      local_16 = 0;
      do {
        if (*pcVar4 != 'D') {
          local_16 = local_16 + 10;
        }
        pcVar4 = pcVar4 + 0x20;
      } while (pcVar4 != (char *)(uVar2 * 0x20 + 0x55b3));
    }
    func_0x000058d0(0x90cc);
    func_0x00005abe(0x20,2,local_16);
    func_0x000058d0(0x90e0);
    iVar3 = FUN_0000_00ac();
    if (iVar3 != 0) {
      return 1;
    }
    if (*(uint *)0x57aa < local_16) {
      return 1;
    }
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 - local_16;
  }
  func_0x00006980();
  return 0;
}



undefined2 FUN_0000_031e(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  
  func_0x0000573a(10);
  *(int *)0xbcdc = param_1;
  param_1 = param_1 * 0x10;
  pcVar4 = (char *)(*(int *)(param_1 + 0x5f6c) + param_1 + 0x5d5e);
  if (*pcVar4 == '\x04') {
    *pcVar4 = '\x01';
  }
  else if ((*(char *)(*(int *)(param_1 + 0x5f6a) * 8 + 0x5c5a) == 'p') &&
          (((*(byte *)(param_1 + 0x5f6c) & 1) == 0 || (*(int *)(param_1 + 0x5f68) == 0)))) {
    uVar2 = 0x9148;
    goto LAB_0000_038a;
  }
  iVar1 = *(int *)(param_1 + 0x5f68);
  if (iVar1 == 0) {
    uVar2 = 0x9168;
  }
  else {
    if (iVar1 < 0x80) {
      FUN_0000_127e(iVar1);
      return 0;
    }
    if (iVar1 == 0xfd) {
      func_0x0000573a(0x22);
      func_0x000058d0(0x9176);
      func_0x0000573a(0x22);
      func_0x0000573a(10);
      return 0;
    }
    if (iVar1 == 0xfe) {
      func_0x0000bb02();
      return 0;
    }
    if (iVar1 == 0xff) {
      uVar2 = FUN_0000_01e2();
      return uVar2;
    }
    if (((*(byte *)(param_1 + 0x5f6c) & 1) != 0) &&
       (uVar3 = func_0x0000bbb6(*(undefined *)0x587f,*(undefined2 *)0xbcdc), (uVar3 & 1) != 0)) {
      FUN_0000_00e6(iVar1);
      return 0;
    }
    func_0x000058d0(0x9196);
    uVar2 = 0x91c4;
  }
LAB_0000_038a:
  func_0x000058d0(uVar2);
  return 0;
}



undefined2 __cdecl16near FUN_0000_041c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  int iVar7;
  int local_6;
  
  iVar2 = func_0x0000766c();
  if (iVar2 != 0) {
    iVar4 = *(int *)0x5876;
    local_6 = iVar4 + (uint)*(byte *)0x5896;
    iVar2 = *(int *)0x5878 + (uint)*(byte *)0x5897;
    iVar7 = local_6;
    iVar3 = func_0x0000770e(*(undefined *)0x5895,iVar2,local_6,iVar2);
    if ((iVar3 == 0) && (iVar3 = FUN_0000_0054(iVar2,local_6), iVar3 != 0)) {
      local_6 = local_6 + iVar4;
      iVar2 = iVar2 + iVar7;
    }
    iVar4 = func_0x0000770e(*(undefined *)0x5895,iVar2,local_6);
    if (iVar4 == 0) {
      uVar5 = 0x91d6;
    }
    else {
      uVar5 = func_0x0000bb9e(*(undefined2 *)0x5876);
      pcVar6 = (char *)func_0x00008482(iVar2,local_6);
      cVar1 = *pcVar6;
      if (cVar1 == -99) {
        uVar5 = 0x91f6;
      }
      else {
        if (cVar1 != -0x55) {
          uVar5 = FUN_0000_031e(uVar5);
          return uVar5;
        }
        uVar5 = 0x91e8;
      }
    }
    func_0x000058d0(uVar5);
  }
  return 0;
}



void __cdecl16near FUN_0000_04d2(void)

{
  FUN_0000_0f32(0x8d);
  return;
}



void __cdecl16near FUN_0000_04da(void)

{
  FUN_0000_0f32(0xa2);
  return;
}



void __cdecl16near FUN_0000_04e2(void)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  if (*(char *)0x4af1 != '\0') {
    uVar4 = 0;
    while (uVar4 < *(byte *)0x4af1) {
      func_0x00005d1e((*(byte *)(uVar4 + 0xbce4) & 0x80) == 0);
      bVar1 = *(byte *)(uVar4 + 0xbce4) & 0x7f;
      uVar4 = uVar4 + 1;
      iVar3 = func_0x00005f92();
      if ((iVar3 != 0) || (bVar1 != 0x20)) {
        if ((*(byte *)0x4af3 < 0xf) || (bVar1 != 10)) {
          if (bVar1 != 10) {
            uVar2 = func_0x00005f92();
            *(undefined *)0x4af3 = uVar2;
          }
          func_0x0000573a(bVar1);
        }
        else {
          *(undefined *)0x4af3 = 0;
        }
      }
    }
    *(undefined *)0x4af1 = 0;
    func_0x00005d1e(0);
  }
  return;
}



void FUN_0000_0574(char param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (*(char *)0x4af1 != '\x10') {
    bVar2 = *(byte *)0x4af1;
    piVar1 = (int *)0x4af1;
    *piVar1 = *piVar1 + 1;
    *(char *)(bVar2 + 0xbce4) = param_1;
    if ((param_1 != -0x76) && (param_1 != -0x60)) {
      return;
    }
    iVar3 = func_0x00005f92();
    if (0x11 < iVar3 + (uint)*(byte *)0x4af1) {
      func_0x0000573a(10);
    }
  }
  FUN_0000_04e2();
  return;
}



undefined2 __cdecl16near FUN_0000_05b6(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  iVar2 = (*(byte *)0xbce0 & 0x7f) * 100 + (*(byte *)0xbce1 & 0x7f) * 10 + (*(byte *)0xbce2 & 0x7f)
          + -0x14d0;
  if (*(int *)0x57aa < iVar2) {
    *(undefined *)0x4af1 = 0;
    func_0x0000573a(0x22);
    func_0x000058d0(0x9328);
    func_0x0000573a(0x22);
    func_0x000058d0(0x9344);
    *(undefined *)0x4aee = 0;
    *(undefined *)0x4aef = 0;
    uVar3 = FUN_0000_0b04();
  }
  else {
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 - iVar2;
    func_0x00006980();
    if (((*(byte *)(*(int *)(*(int *)0xbcdc * 0x10 + 0x5f6a) * 8 + 0x5c5a) & 0xfc) == 0x6c) &&
       (99 < *(byte *)0x588b)) {
      *(undefined *)0x588b = 0;
      func_0x00007f70(99,1,0x5888);
      if (*(int *)0x57aa == 0) {
        func_0x00007f70(99,2,0x5888);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0000_0682(byte param_1)

{
  if (param_1 < 0x40) {
    func_0x00007f70(99,1,param_1 + 0x57c0);
  }
  else if (param_1 - 0x41 < 0xb) {
                    // WARNING: Could not emulate address calculation at 0x000006b2
                    // WARNING: Treating indirect jump as call
    (**(code **)((param_1 - 0x41) * 2 + -0x3972))();
    return;
  }
  return;
}



undefined2 FUN_0000_0728(char param_1,char param_2)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = *(char **)0xbcde;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == param_2) {
      uVar2 = 1;
      goto LAB_0000_0741;
    }
  } while (cVar1 != param_1);
  uVar2 = 0;
LAB_0000_0741:
  *(char **)0xbcde = pcVar3;
  return uVar2;
}



void FUN_0000_075a(int param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbcde = 0xb21e;
  if ((param_1 != 0) && (param_1 != 0)) {
    do {
      FUN_0000_0728(0x90,0);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



undefined2 __cdecl16near FUN_0000_0788(void)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  do {
    pcVar2 = *(char **)0xbcde;
    if (*pcVar2 == '\0') {
      return 0;
    }
    piVar1 = (int *)0xbcde;
    *piVar1 = *piVar1 + 1;
    iVar3 = FUN_0000_0f32(*pcVar2);
  } while (iVar3 == 0);
  return 1;
}



void FUN_0000_07aa(undefined param_1)

{
  FUN_0000_075a(param_1);
  FUN_0000_0788();
  return;
}



void __cdecl16near FUN_0000_07e4(void)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  for (pbVar1 = (byte *)0x55a8; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
    FUN_0000_0f32(*pbVar1 | 0x80);
  }
  return;
}



undefined2 __cdecl16near FUN_0000_080a(void)

{
  int *piVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_2c;
  undefined local_29;
  undefined2 local_28 [16];
  undefined2 local_8;
  undefined local_5;
  int local_4;
  
  uVar5 = *(undefined2 *)0xbcde;
  local_4 = 0xf;
  if (*(char *)0x585b == '\x06') {
    func_0x000066ec();
    func_0x000058d0(0x9348);
    func_0x000058d0(0x9372);
    uVar5 = 0;
  }
  else {
    FUN_0000_075a(0);
    puVar8 = (undefined2 *)*(undefined2 *)0xbcde;
    puVar9 = &local_8;
    for (iVar6 = 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar4 = puVar9;
      puVar9 = puVar9 + 1;
      puVar3 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar4 = *puVar3;
    }
    *(undefined *)puVar9 = *(undefined *)puVar8;
    piVar1 = (int *)0xbcde;
    *piVar1 = *piVar1 + 3;
    local_5 = 0;
    local_29 = 0;
    iVar6 = local_4 << 5;
    do {
      puVar9 = &local_2c;
      puVar8 = (undefined2 *)(iVar6 + 0x55a8);
      for (iVar7 = 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar4 = puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar4 = *puVar3;
      }
      *(undefined *)puVar9 = *(undefined *)puVar8;
      iVar7 = FUN_0000_0000(&local_2c,&local_8);
      if (iVar7 != 0) {
        iVar7 = local_4 * 0x20;
        *(undefined *)(iVar7 + 0x55c7) = 0;
        puVar9 = local_28;
        puVar8 = (undefined2 *)(iVar7 + 0x55a8);
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar9;
          puVar9 = puVar9 + 1;
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar3;
        }
        puVar10 = (undefined2 *)((uint)*(byte *)0x585b * 0x20 + 0x55a8);
        puVar9 = (undefined2 *)(iVar7 + 0x55a8);
        puVar8 = puVar10;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar9;
          puVar9 = puVar9 + 1;
          puVar3 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar4 = *puVar3;
        }
        puVar9 = local_28;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar4 = puVar10;
          puVar10 = puVar10 + 1;
          puVar3 = puVar9;
          puVar9 = puVar9 + 1;
          *puVar4 = *puVar3;
        }
        pcVar2 = (char *)0x585b;
        *pcVar2 = *pcVar2 + '\x01';
        func_0x0000bb86(*(undefined2 *)0xbcdc);
        func_0x0000bb92(*(undefined2 *)0xbcdc);
        func_0x00006980();
        FUN_0000_04e2();
        *(undefined2 *)0xbcde = uVar5;
        return 1;
      }
      iVar6 = iVar6 + -0x20;
      local_4 = local_4 + -1;
    } while (iVar6 != 0);
    FUN_0000_0574(0x22);
    FUN_0000_0574(10);
    func_0x000058d0(0x93a8);
    *(undefined2 *)0xbcde = uVar5;
    uVar5 = 1;
  }
  return uVar5;
}



void __cdecl16near FUN_0000_093a(void)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbcde = 0xb21e;
  while (**(char **)0xbcde != *(char *)0xbcf4) {
    FUN_0000_0728(0x9f,0x90);
  }
  piVar1 = (int *)0xbcde;
  *piVar1 = *piVar1 + 1;
  FUN_0000_0788();
  return;
}



void __cdecl16near FUN_0000_0960(void)

{
  FUN_0000_0728(0x90,0);
  FUN_0000_0788();
  return;
}



void __cdecl16near FUN_0000_096e(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbcde = 0xb21e;
  while (**(char **)0xbcde != *(char *)0xbcf4) {
    FUN_0000_0728(0x9f,0x90);
  }
  FUN_0000_0728(0x9f,0);
  FUN_0000_0788();
  return;
}



undefined2 FUN_0000_099a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbcde = 0xb21e;
  iVar1 = param_1 * 2 + 5;
  while( true ) {
    if (iVar1 == 0) {
      return 1;
    }
    iVar2 = FUN_0000_0728(0x90,0);
    if (iVar2 == 0) break;
    iVar1 = iVar1 + -1;
  }
  return 0;
}



undefined2 __cdecl16near FUN_0000_09d8(void)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbcf6 = 0;
  while( true ) {
    iVar2 = FUN_0000_099a(*(undefined2 *)0xbcf6);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x0000af9e(0xbcf8,*(undefined2 *)0xbcde);
    if ((iVar2 != -1) && ((iVar2 == 0 || (*(char *)(iVar2 + -0x4309) == ' ')))) break;
    piVar1 = (int *)0xbcde;
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)0xbcf6;
    *piVar1 = *piVar1 + 1;
  }
  return 1;
}



void __cdecl16near FUN_0000_0a2c(void)

{
  FUN_0000_04e2();
  func_0x00007b9c(0xf,0xbcf8);
  return;
}



undefined2 __cdecl16near FUN_0000_0a3c(void)

{
  int iVar1;
  
  FUN_0000_04da();
  iVar1 = FUN_0000_07aa(4);
  if (iVar1 == 0) {
    FUN_0000_04da();
    FUN_0000_04d2();
  }
  return 1;
}



undefined2 FUN_0000_0a54(byte param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  
  if (param_1 == 0) {
    if (*(char *)0x4af2 != '\0') {
      return 2;
    }
    func_0x000058d0(0x93c2);
    iVar2 = FUN_0000_07aa(0);
joined_r0x00000ab7:
    if (iVar2 != 0) {
      return 1;
    }
    FUN_0000_04da();
    FUN_0000_04d2();
    FUN_0000_04d2();
  }
  else {
    if (param_1 != 0) {
      if (param_1 < 3) {
        if (*(char *)0x4af2 != '\0') {
          return 2;
        }
        FUN_0000_04da();
        iVar2 = FUN_0000_07aa(3);
        goto joined_r0x00000ab7;
      }
      if ((2 < param_1) && (param_1 < 5)) {
        if (*(char *)0x4af2 != '\0') {
          return 2;
        }
        uVar3 = FUN_0000_0a3c();
        return uVar3;
      }
    }
    func_0x000058d0(0x93d0);
    FUN_0000_04da();
    FUN_0000_04d2();
    FUN_0000_04d2();
    iVar2 = 0;
    do {
      func_0x00009990();
      uVar3 = 0xa90;
      iVar1 = func_0x00005dde();
      if (iVar1 != 0) break;
      func_0x0000617a(1,uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1c);
    func_0x00005b96(uVar3,iVar2);
  }
  return 0;
}



undefined2 __cdecl16near FUN_0000_0b04(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 *local_a;
  byte local_4;
  
  do {
    *(undefined *)0x4af2 = 0;
    func_0x000058d0(0x9408);
    FUN_0000_0a2c();
    if (*(char *)0xbcf8 == '\0') {
      func_0x000058d0(0x941a);
      uVar1 = FUN_0000_0a3c();
      return uVar1;
    }
    FUN_0000_04d2();
    FUN_0000_04d2();
    local_4 = 0;
    iVar3 = -1;
    local_a = (undefined2 *)0x4aa8;
    do {
      iVar2 = func_0x0000af9e(0xbcf8,*local_a);
      if ((iVar2 != -1) && ((iVar2 == 0 || (*(char *)(iVar2 + -0x4309) == ' ')))) {
        iVar3 = FUN_0000_0a54(local_4);
        if (iVar3 == 0) break;
        if (iVar3 == 1) {
          return 1;
        }
      }
      local_a = local_a + 1;
      local_4 = local_4 + 1;
    } while (local_4 < 0x22);
    if (iVar3 != 0) {
      iVar3 = FUN_0000_09d8();
      if (iVar3 == 0) {
        func_0x000058d0(0x9420);
      }
      else {
        FUN_0000_04da();
        iVar3 = FUN_0000_07aa(*(int *)0xbcf6 * 2 + 6);
        if (iVar3 != 0) {
          return 1;
        }
      }
      FUN_0000_04da();
      FUN_0000_04d2();
      FUN_0000_04d2();
    }
  } while( true );
}



undefined2 __cdecl16near FUN_0000_0bd4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xbcde = 0xb21e;
  while (**(char **)0xbcde != *(char *)0xbcf4) {
    FUN_0000_0728(0x9f,0x90);
  }
  FUN_0000_0728(0x9f,0);
  FUN_0000_0728(0x9f,0);
  do {
    iVar1 = func_0x0000af9e(0xbcf8,*(undefined2 *)0xbcde);
    if ((iVar1 != -1) && ((iVar1 == 0 || (*(char *)(iVar1 + -0x4309) == ' ')))) {
      return 1;
    }
    iVar1 = FUN_0000_0728(0x90,0);
  } while ((iVar1 != 0) && (iVar1 = FUN_0000_0728(0x90,0), iVar1 != 0));
  return 0;
}



undefined2 __cdecl16near FUN_0000_0c5c(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 *local_a;
  byte local_4;
  
  do {
    FUN_0000_04da();
    iVar1 = FUN_0000_093a();
    if (iVar1 != 0) goto LAB_0000_0c71;
    FUN_0000_04da();
    do {
      FUN_0000_04d2();
      FUN_0000_04d2();
      *(undefined *)0x4af2 = 0xff;
      func_0x000058d0(0x9440);
      FUN_0000_0a2c();
      if (*(char *)0xbcf8 == '\0') {
        func_0x000058d0(0x9450);
      }
    } while (*(char *)0xbcf8 == '\0');
    FUN_0000_04d2();
    FUN_0000_04d2();
    local_4 = 0;
    iVar1 = -1;
    local_a = (undefined2 *)0x4aa8;
    do {
      iVar3 = func_0x0000af9e(0xbcf8,*local_a);
      if ((iVar3 != -1) && ((iVar3 == 0 || (*(char *)(iVar3 + -0x4309) == ' ')))) {
        iVar1 = FUN_0000_0a54(local_4);
        if (iVar1 == 0) break;
        if (iVar1 == 1) {
          return 1;
        }
      }
      local_a = local_a + 1;
      local_4 = local_4 + 1;
    } while (local_4 < 0x22);
  } while (iVar1 == 0);
  iVar1 = FUN_0000_0bd4();
  if (iVar1 == 0) {
    FUN_0000_04da();
    iVar1 = FUN_0000_096e();
  }
  else {
    FUN_0000_04da();
    iVar1 = FUN_0000_0960();
  }
  if (iVar1 == 0) {
    FUN_0000_04da();
    FUN_0000_04d2();
    FUN_0000_04d2();
    uVar2 = FUN_0000_0b04();
  }
  else {
LAB_0000_0c71:
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_0000_0d42(undefined2 param_1)

{
  uint *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  uint local_6;
  uint local_4;
  
  local_6 = 1;
  local_4 = 0;
  func_0x000044f6(&local_6,param_1);
  iVar2 = (uint)*(byte *)0x5893 * 4;
  puVar1 = (uint *)(iVar2 + 0x5bd6);
  *puVar1 = *puVar1 | local_6;
  puVar1 = (uint *)(iVar2 + 0x5bd8);
  *puVar1 = *puVar1 | local_4;
  return;
}



bool FUN_0000_0d7a(undefined2 param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  uint local_6;
  uint local_4;
  
  local_6 = 1;
  local_4 = 0;
  func_0x000044f6(&local_6,param_1);
  iVar1 = (uint)*(byte *)0x5893 * 4;
  return (*(uint *)(iVar1 + 0x5bd8) & local_4 | *(uint *)(iVar1 + 0x5bd6) & local_6) != 0;
}



undefined2 FUN_0000_0dbe(byte param_1)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  cVar3 = *(char *)0x4aee;
  if (cVar3 == -0x7b) {
    bVar4 = *(byte *)0x4aef;
    piVar1 = (int *)0x4aef;
    *piVar1 = *piVar1 + 1;
    *(byte *)(bVar4 + 0xbce0) = param_1;
    if (*(char *)0x4aef != '\x03') {
      return 0;
    }
    iVar5 = FUN_0000_05b6();
    if (iVar5 != 0) {
      return 1;
    }
  }
  else {
    if (cVar3 != -0x7a) {
      if (cVar3 == -0x74) {
        *(undefined *)0x4aee = 0;
        *(undefined *)0x4aef = 0;
        iVar5 = FUN_0000_0d7a(*(undefined2 *)0xbcdc);
        if (iVar5 == 0) {
          return 0;
        }
        if (param_1 == 0xff) {
          uVar6 = FUN_0000_0b04();
          return uVar6;
        }
      }
      else {
        if (cVar3 != -2) goto LAB_0000_0dda;
        bVar4 = *(byte *)0x4aef;
        piVar1 = (int *)0x4aef;
        *piVar1 = *piVar1 + 1;
        *(byte *)(bVar4 + 0xbce0) = param_1;
        if (*(char *)0x4aef != '\x02') {
          return 0;
        }
        *(undefined *)0x4aee = 0;
        *(undefined *)0x4aef = 0;
        bVar4 = *(byte *)0x5888;
        pbVar2 = (byte *)0xbce0;
        if (bVar4 <= *pbVar2 && *pbVar2 != bVar4) {
          return 0;
        }
        param_1 = *(byte *)0xbce1;
      }
      *(byte *)0xbcf4 = param_1;
      uVar6 = FUN_0000_0c5c();
      return uVar6;
    }
    FUN_0000_0682(param_1 & 0x7f);
  }
LAB_0000_0dda:
  *(undefined *)0x4aee = 0;
  *(undefined *)0x4aef = 0;
  return 0;
}



void __cdecl16near FUN_0000_0e78(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_a;
  undefined2 local_8 [2];
  undefined local_4;
  
  local_a = 0;
  FUN_0000_04da();
  FUN_0000_04e2();
  func_0x000058d0(0x9468);
  func_0x000058d0(0x947c);
  FUN_0000_0a2c();
  *(undefined *)0x4aef = 0;
  *(undefined *)0x4aee = 0;
  if (*(char *)0xbcf8 == '\0') {
    uVar3 = 0x948c;
  }
  else {
    if (*(char *)0x585b != '\0') {
      iVar6 = 0;
      do {
        puVar5 = (undefined2 *)(iVar6 + 0x55a8);
        puVar7 = local_8;
        for (iVar4 = 2; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar1;
        }
        local_4 = 0;
        iVar4 = func_0x0000af9e(0xbcf8,local_8);
        if ((iVar4 != -1) && ((iVar4 == 0 || (*(char *)(iVar4 + -0x4309) == ' ')))) {
          FUN_0000_0d42(*(undefined2 *)0xbcdc);
          func_0x000058d0(0x94a0);
          return;
        }
        iVar6 = iVar6 + 0x20;
        local_a = local_a + 1;
      } while (local_a < *(byte *)0x585b);
    }
    uVar3 = 0x94b0;
  }
  func_0x000058d0(uVar3);
  return;
}



undefined2 FUN_0000_0f32(byte param_1)

{
  byte *pbVar1;
  undefined2 uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined2 unaff_DS;
  
  if (*(char *)0x4aee != '\0') {
    uVar2 = FUN_0000_0dbe(param_1);
    return uVar2;
  }
  *(undefined *)0x4aef = 0;
  if ((param_1 == 0xa2) && (*(char *)0x4af4 == -0x5e)) {
    return 0;
  }
  uVar3 = (uint)param_1;
  if (uVar3 == 0x89) {
    func_0x00007f70(99,1,0x5888);
    return 0;
  }
  if (uVar3 < 0x8a) {
    if (uVar3 - 0x81 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00000f81
                    // WARNING: Treating indirect jump as call
      uVar2 = (**(code **)((uVar3 - 0x81) * 2 + -0x2fe4))();
      return uVar2;
    }
  }
  else {
    if (uVar3 == 0x8e) {
      pbVar1 = (byte *)0x4af0;
      *pbVar1 = *pbVar1 ^ 0x80;
      return 0;
    }
    if (uVar3 < 0x8f) {
      if (uVar3 == 0x8a) {
        func_0x00007fb6(1,0x5888);
        return 0;
      }
      if (uVar3 == 0x8b) {
        func_0x0000bb56();
        return 0;
      }
      if (uVar3 == 0x8c) {
LAB_0000_1016:
        *(byte *)0x4aee = param_1;
        return 0;
      }
    }
    else if (uVar3 < 0xa0) {
      if (0x90 < uVar3) {
        *(byte *)0xbcf4 = param_1;
        uVar2 = FUN_0000_0c5c();
        return uVar2;
      }
      if (uVar3 == 0x8f) {
        func_0x000066ec();
        return 0;
      }
    }
    else {
      if (uVar3 == 0xfe) goto LAB_0000_1016;
      if (uVar3 == 0xff) {
        FUN_0000_04e2();
        uVar2 = FUN_0000_0b04();
        return uVar2;
      }
    }
  }
  if (param_1 < 0x81) {
    FUN_0000_0574(0xa0);
    for (pbVar4 = *(byte **)((uint)param_1 * 2 + 0x24e8); *pbVar4 != 0; pbVar4 = pbVar4 + 1) {
      FUN_0000_0574(*pbVar4 | 0x80);
    }
    if (**(char **)((uint)param_1 * 2 + 0x24e8) == '\0') {
      FUN_0000_0574((uint)param_1);
    }
    else {
      *(undefined *)0x4af5 = 1;
    }
  }
  else {
    param_1 = param_1 | 0x80;
    if (param_1 == 0x8d) {
      param_1 = 0x8a;
    }
    param_1 = param_1 & *(byte *)0x4af0;
    *(byte *)0x4af4 = param_1;
    if (*(char *)0x4af5 != '\0') {
      FUN_0000_0574(0xa0);
    }
    FUN_0000_0574(param_1);
    *(undefined *)0x4af5 = 0;
  }
  return 0;
}



undefined2 __cdecl16near FUN_0000_111c(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x000058d0(0x94c4);
  iVar1 = FUN_0000_07aa(1);
  if (iVar1 == 0) {
    FUN_0000_04d2();
    FUN_0000_04d2();
    iVar1 = FUN_0000_0d7a(*(undefined2 *)0xbcdc);
    if (iVar1 == 0) {
      func_0x000060d6();
      func_0x000060fe();
      iVar1 = func_0x00006112(1);
      if (iVar1 != 0) {
        func_0x000058d0(0x94ce);
        uVar2 = 0;
        goto LAB_0000_116c;
      }
    }
    else {
      FUN_0000_04da();
      uVar2 = 2;
LAB_0000_116c:
      iVar1 = FUN_0000_07aa(uVar2);
      if (iVar1 != 0) goto LAB_0000_112e;
      FUN_0000_04da();
      FUN_0000_04d2();
      FUN_0000_04d2();
    }
    uVar2 = 0;
  }
  else {
LAB_0000_112e:
    uVar2 = 1;
  }
  return uVar2;
}



void __cdecl16near FUN_0000_1180(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x5958 == '\0') {
    func_0x000058d0(0x94dc);
    func_0x0000842e(0x32,1,2000,800);
    uVar1 = func_0x000060d6();
    func_0x000060fe(uVar1);
    if ((byte)(*(byte *)0x57ac | *(byte *)0x57ad | *(byte *)0x57ae) == 0) {
      iVar2 = 0x2f;
      do {
        if (*(char *)(iVar2 + 0x57c0) != '\0') {
          iVar2 = iVar2 + 0x57c0;
          goto LAB_0000_121f;
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      iVar2 = 7;
      do {
        if (*(char *)(iVar2 + 0x5828) != '\0') {
          iVar2 = iVar2 + 0x5828;
          goto LAB_0000_121f;
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      iVar2 = 7;
      do {
        if (*(char *)(iVar2 + 0x5820) != '\0') {
          iVar2 = iVar2 + 0x5820;
LAB_0000_121f:
          func_0x00007fb6(1,iVar2);
          return;
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      uVar1 = func_0x00006112(0xf,1,0x57aa);
      func_0x00007fd4(uVar1);
      func_0x00006980();
    }
    else {
      do {
        while( true ) {
          while (iVar2 = func_0x00006112(2,0), iVar2 == 0) {
            if (*(char *)0x57ac != '\0') {
              uVar1 = 0x57ac;
              goto LAB_0000_11ec;
            }
          }
          if (iVar2 == 1) break;
          if (iVar2 != 2) {
            return;
          }
          if (*(char *)0x57ae != '\0') {
            uVar1 = 0x57ae;
            goto LAB_0000_11ec;
          }
        }
      } while (*(char *)0x57ad == '\0');
      uVar1 = 0x57ad;
LAB_0000_11ec:
      func_0x00007fb6(1,uVar1);
    }
  }
  return;
}



void FUN_0000_127e(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  
  uVar1 = *(byte *)0x5893 - 1 >> 3;
  func_0x000065ee(0,0x200,0xb21e,*(undefined2 *)(uVar1 * 2 + 0x4aa0));
  piVar3 = (int *)0xb220;
  for (iVar2 = 1; (*piVar3 != param_1 && (iVar2 <= *(int *)0xb21e)); iVar2 = iVar2 + 1) {
    piVar3 = piVar3 + 2;
  }
  func_0x000065ee(piVar3[1],0x400,0xb21e,*(undefined2 *)(uVar1 * 2 + 0x4aa0));
  iVar2 = FUN_0000_111c();
  if (iVar2 == 0) {
    iVar2 = FUN_0000_0b04();
    if (iVar2 == 0) {
      FUN_0000_0a3c();
    }
  }
  FUN_0000_1180();
  return;
}


