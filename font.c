typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void FUN_0000_02a2(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)(param_2 + param_1 * 0x20 + 0x6608);
  if (bVar1 == 0) {
    cVar2 = *(char *)(param_2 + param_1 * 0x20 + 0x6688);
    if (cVar2 == '\x16') {
      return;
    }
    uVar3 = CONCAT11(1,cVar2);
  }
  else {
    uVar3 = (uint)*(byte *)(bVar1 + 0xb11e);
  }
  func_0x00002f00(param_1 + 7,param_2,uVar3);
  return;
}



undefined2 FUN_0000_02fc(int param_1)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  int iVar5;
  undefined2 uVar6;
  uint local_6;
  
  do {
    func_0x00006372();
    iVar5 = 0x30a;
    func_0x00009b12();
    pcVar4 = (char *)0x5c5a;
    do {
      if (*pcVar4 != '\0') {
        iVar3 = (uint)(byte)pcVar4[3] * 0x20 + (uint)(byte)pcVar4[2];
        *(undefined *)(iVar3 + 0x6608) = 0;
        *(char *)(iVar3 + 0x6688) = pcVar4[1];
      }
      pcVar4 = pcVar4 + 8;
    } while (pcVar4 < (char *)0x5d5a);
    for (local_6 = (uint)*(byte *)0xbd26; local_6 <= *(byte *)0xbd27; local_6 = local_6 + 1) {
      iVar3 = 0;
      pcVar4 = (char *)(local_6 + 0x6608);
      do {
        if (*pcVar4 != -2) {
          iVar5 = iVar3;
          FUN_0000_02a2(iVar3,local_6);
        }
        pcVar4 = pcVar4 + 0x20;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
    if ((*(char *)0xbd26 != '\0') && (*(char *)0xbd28 != '\0')) {
      pcVar1 = (char *)0xbd26;
      *pcVar1 = *pcVar1 + -1;
      pcVar1 = (char *)0xbd27;
      *pcVar1 = *pcVar1 + '\x01';
    }
    *(bool *)0xbd28 = *(char *)0xbd28 == '\0';
    uVar6 = 0x3a1;
    iVar3 = func_0x00003b7e();
    if (iVar3 != 0) {
      return 1;
    }
    if (param_1 != 0) {
      func_0x00003f1a(1,iVar5,uVar6);
    }
    if (*(char *)0xbd29 == '\x02') {
      func_0x0000405c(10000,0x3c,0x14);
    }
    else if (*(char *)0xbd29 == '\x03') {
      piVar2 = (int *)0x515a;
      *piVar2 = *piVar2 + 1;
      if (7 < *(int *)0x515a) {
        *(undefined2 *)0x515a = 0;
      }
      if (*(int *)0x515a == 0) {
        uVar6 = 3000;
      }
      else {
        if (*(int *)0x515a != 4) goto LAB_0000_0406;
        uVar6 = 2000;
      }
      func_0x000040e0(3,uVar6);
    }
LAB_0000_0406:
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



void FUN_0000_0418(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 unaff_DS;
  undefined *local_c;
  int local_4;
  
  func_0x00009ae2(*(undefined2 *)(param_1 * 2 + 0x515c));
  local_4 = 0;
  do {
    puVar4 = (undefined *)(local_4 + 0x6708);
    local_c = (undefined *)(local_4 + 0x6608);
    iVar2 = param_1 * 0x80 + local_4;
    puVar3 = (undefined *)(iVar2 + -0x4de2);
    do {
      uVar1 = *puVar3;
      *local_c = uVar1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 0x20;
      local_c = local_c + 0x20;
      puVar3 = puVar3 + 0x20;
    } while (puVar3 < (undefined *)(iVar2 + -0x4d62));
    local_4 = local_4 + 1;
  } while (local_4 < 0x13);
  *(undefined *)0xbd27 = 9;
  *(undefined *)0xbd26 = 9;
  *(undefined *)0xbd28 = 0;
  *(undefined *)0xbd29 = (undefined)param_1;
  return;
}



void __cdecl16near FUN_0000_04a4(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_e;
  
  *(undefined2 *)0x52be = 0x10;
  *(undefined *)0xbd27 = 9;
  *(undefined *)0xbd26 = 9;
  *(undefined *)0xbd28 = 0;
  func_0x00002890(*(undefined2 *)0x13b2);
  func_0x000028c6(0x7e,199,0x78,0x78);
  func_0x00002890(*(undefined2 *)0x13b0);
  func_0x00002930(0x7f,199,0x7f,0x78);
  if ((*(char *)0x5893 != 'B') &&
     (func_0x0000438e(0x2c0,2000,0xb21e,0xa044), *(char *)0x5893 == '@')) {
    FUN_0000_0e52();
    do {
      iVar1 = func_0x00002e14(*(undefined2 *)0x25f0);
    } while (iVar1 == 0);
    FUN_0000_0e7b();
  }
  *(undefined *)0x5893 = 0x42;
  local_e = 0x200;
  while( true ) {
    if (1999 < local_e) {
      return;
    }
    uVar2 = (uint)*(byte *)(local_e + -0x4de2);
    if (uVar2 < 0x10) break;
    iVar1 = func_0x00003b7e();
    if (iVar1 != 0) {
      return;
    }
    local_e = local_e + 1;
  }
                    // WARNING: Could not emulate address calculation at 0x0000098c
                    // WARNING: Treating indirect jump as call
  (**(code **)(uVar2 * 2 + -0x14d6))();
  return;
}



void __cdecl16near FUN_0000_0998(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    do {
      iVar1 = func_0x00003eb2(7,0);
    } while (*(char *)(iVar1 + -0x42d6) != '\0');
  } while (*(char *)(iVar1 + -0x42ce) != '\0');
  *(undefined *)(iVar1 + -0x42d6) = 1;
  return;
}



void FUN_0000_09c8(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_10;
  int local_e;
  char local_c;
  int local_8;
  int local_6;
  
  func_0x00002a42(1);
  func_0x000034da(0xff);
  func_0x00002b6c(0,0,0x10,1,param_1);
  func_0x00002b6c(0,0,200,1,param_1);
  *(undefined2 *)0x5156 = 0;
  *(undefined2 *)0x5158 = 0x98;
  local_6 = FUN_0000_0998();
  iVar3 = FUN_0000_0998();
  if (iVar3 < local_6) {
    local_c = 'B';
    local_10 = local_6;
    local_e = iVar3;
  }
  else {
    local_c = 'A';
    local_10 = iVar3;
    local_e = local_6;
  }
  func_0x00002b6c(0,*(undefined *)(local_e + 0x5204),*(undefined *)(local_e + 0x51fc),local_e + 2,
                  param_1);
  func_0x00002b6c(0,*(undefined *)(local_10 + 0x5204),*(byte *)(local_10 + 0x51fc) + 0xb8,
                  local_10 + 2,param_1);
  func_0x0000438e(*(undefined2 *)(iVar3 * 2 + local_6 * 0x10 + 0x517c),2000,0xb21e,0xa052);
  FUN_0000_0000(0xb21e,param_2);
  func_0x00002d8e(0,1);
  do {
    uVar4 = func_0x00003b7e();
    cVar2 = func_0x00003e52(uVar4);
    if (cVar2 == 'A') break;
  } while (cVar2 != 'B');
  local_8 = iVar3;
  if (cVar2 != local_c) {
    local_8 = local_6;
    local_6 = iVar3;
  }
  pcVar1 = (char *)0xbd3c;
  *pcVar1 = *pcVar1 + *(char *)(local_6 + 0x5164);
  pcVar1 = (char *)0xbd3d;
  *pcVar1 = *pcVar1 + *(char *)(local_6 + 0x516c);
  pcVar1 = (char *)0xbd3e;
  *pcVar1 = *pcVar1 + *(char *)(local_6 + 0x5174);
  *(undefined *)(local_8 + -0x42ce) = 1;
  return;
}



void __cdecl16near FUN_0000_0b0a(void)

{
  undefined uVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  byte bVar9;
  undefined2 *puVar10;
  undefined *puVar11;
  undefined2 unaff_DS;
  
  if (*(char *)0x5893 != '@') {
    func_0x00002e4e();
  }
  *(undefined *)0xa9cb = 0xff;
  do {
    iVar5 = func_0x00002dce(*(undefined2 *)0x25ea);
  } while (iVar5 == 0);
  do {
    iVar6 = func_0x000029ce(*(undefined2 *)0x260a);
  } while (iVar6 == 0);
  func_0x0000438e(0,0x1060,0x55a6,0xa060);
  func_0x00002890(*(undefined2 *)0x13b2);
  func_0x000028c6(0x7e,200,0x78,0x78);
  func_0x00002890(*(undefined2 *)0x13b0);
  func_0x00002930(0x7f,200,0x7f,0x78);
  func_0x00002890(0);
  func_0x000028c6(0xbf,0x137,0x80,8);
  func_0x00003a12(0x11,3);
  func_0x00003670(0xa06a);
  func_0x00003a12(0x13,0xe);
  func_0x000034da(0x3a);
  func_0x00003c58(8,0x55a8);
  if (*(char *)0x55a8 != '\0') {
    func_0x00003a12(0x15,8);
    func_0x00003670(0xa08c);
    do {
      uVar7 = func_0x00003bfa(0);
      cVar4 = func_0x00003e52(uVar7);
      if (cVar4 == 'M') break;
    } while (cVar4 != 'F');
    func_0x000034da(cVar4);
    if (cVar4 == 'M') {
      *(undefined *)0x55b1 = 0xb;
    }
    else {
      *(undefined *)0x55b1 = 0xc;
    }
    *(undefined2 *)0x5156 = 0;
    *(undefined2 *)0x5158 = 9;
    *(undefined2 *)0x5146 = 0;
    *(undefined2 *)0x514c = 0x140;
    *(undefined2 *)0x5148 = 0xaf;
    *(undefined2 *)0x514e = 0x140;
    *(undefined2 *)0x5150 = 0x59;
    *(undefined2 *)0x5152 = 200;
    func_0x0000438e(0,2000,0xb21e,0xa0a6);
    func_0x00002a42(1);
    *(undefined *)0xa9be = 2;
    func_0x000034da(0xff);
    func_0x00002b6c(0,0x60,0,0,iVar6);
    FUN_0000_0000(0xb21e,iVar5);
    func_0x00002d8e(0,1);
    *(undefined2 *)0x5150 = 200;
    do {
      iVar8 = func_0x00003b7e();
    } while (iVar8 == 0);
    *(undefined *)0xbd3c = *(undefined *)0x55b6;
    *(undefined *)0xbd3d = *(undefined *)0x55b5;
    *(undefined *)0xbd3e = *(undefined *)0x55b4;
    bVar9 = 0;
    do {
      *(undefined *)(bVar9 + 0xbd32) = 0;
      *(undefined *)(bVar9 + 0xbd2a) = 0;
      bVar9 = bVar9 + 1;
    } while (bVar9 < 8);
    iVar8 = 4;
    do {
      FUN_0000_09c8(iVar6,iVar5);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar10 = (undefined2 *)0xbd2a;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = 0;
    }
    iVar8 = 2;
    do {
      FUN_0000_09c8(iVar6,iVar5);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar10 = (undefined2 *)0xbd2a;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = 0;
    }
    FUN_0000_09c8(iVar6,iVar5);
    *(undefined2 *)0x5158 = 0;
    *(undefined2 *)0x5156 = 0;
    *(undefined2 *)0x5150 = 0x5a;
    *(undefined2 *)0x5148 = 0;
    *(undefined2 *)0x514e = 0xa6;
    *(undefined2 *)0x5154 = 4;
    func_0x0000438e(0x322,2000,0xb21e,0xa0b4);
    func_0x00002a42(1);
    func_0x000034da(0xff);
    func_0x00002b6c(0,100,0xa8,10,iVar6);
    FUN_0000_0000(0xb21e,iVar5);
    *(undefined2 *)0x5154 = 5;
    func_0x00002d8e(0,1);
    do {
      iVar8 = func_0x00003b7e();
    } while (iVar8 == 0);
    func_0x00002a04(iVar6);
    func_0x00002dfc(iVar5);
    func_0x00002a42(1);
    func_0x000034da(0xff);
    func_0x00002a42(0);
    *(undefined *)0xa9be = 0;
    uVar1 = *(undefined *)0xbd3c;
    *(undefined *)0x55b6 = uVar1;
    *(undefined *)0x55b7 = uVar1;
    *(undefined *)0x55b5 = *(undefined *)0xbd3d;
    bVar9 = *(byte *)0xbd3e;
    *(char *)0x55b4 = (bVar9 - 0x14 & ~-(bVar9 < 0x14)) + 0x14;
    func_0x0000438e(0,0x100,0xb31e,0xa0c2);
    func_0x000034da(0xff);
    func_0x00003a12(10,0);
    func_0x0000433e(3);
    puVar11 = (undefined *)0xb21e;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = 0;
    }
    func_0x000043f8(0x200,0xb21e,0xa0cc);
    func_0x000043f8(0x1060,0x55a6,0xa0d6);
  }
  func_0x0000433e(0);
  *(undefined *)0x5893 = 0x40;
  return;
}



void __cdecl16near FUN_0000_0e52(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  if (*(int *)0x520c == 0) {
    uVar3 = func_0x00009b1e();
    *(undefined2 *)0x520c = uVar3;
  }
  puVar6 = *(undefined2 **)0x520c;
  puVar5 = (undefined2 *)0x0;
  uVar3 = *(undefined2 *)0x5354;
  for (iVar4 = 0x1800; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void __cdecl16near FUN_0000_0e7b(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  puVar5 = *(undefined2 **)0x520c;
  puVar6 = (undefined2 *)0x0;
  uVar3 = *(undefined2 *)0x5354;
  for (iVar4 = 0x1800; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


