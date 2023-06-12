typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void font_1641_0000(int param_1,undefined2 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  int local_e;
  uint local_c;
  int local_a;
  int local_8;
  int local_4;
  
  func_0x00018e52(1);
  iVar3 = *(int *)0x5150;
  piVar1 = (int *)0x5158;
  if ((*piVar1 == iVar3 || *piVar1 < iVar3) || (*(int *)0x5152 <= *(int *)0x5158)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  iVar3 = iVar3 * 2;
  local_c = *(int *)(iVar3 + 0x514c) - *(int *)(iVar3 + 0x5146);
  local_e = 0;
  local_4 = *(int *)0x5156 - *(int *)(iVar3 + 0x5146);
  do {
    if (*(char *)(local_e + param_1) == '\0') {
      func_0x00018e52(0);
      return;
    }
    local_a = 0;
    for (iVar3 = local_e;
        ((*(char *)(iVar3 + param_1) != '\0' && (local_4 < (int)local_c)) &&
        (*(char *)(iVar3 + param_1) != '\n')); iVar3 = iVar3 + 1) {
      if (*(byte *)(iVar3 + param_1) < 0x21) {
        local_4 = local_4 + *(int *)0x5154;
        local_a = local_a + 1;
      }
      else if (*(char *)(iVar3 + param_1) == '{') {
        local_4 = local_4 + 0xf;
      }
      else if (*(char *)(iVar3 + param_1) != '_') {
        local_4 = local_4 + *(byte *)(*(byte *)(iVar3 + param_1) + 0x50ca) + 1;
      }
    }
    uVar4 = (uint)*(byte *)0x50f7;
    while( true ) {
      if (((*(char *)(iVar3 + param_1) == '\0') && (local_4 < (int)local_c)) ||
         ((*(char *)(iVar3 + param_1) == '\n' || (iVar3 = iVar3 + -1, iVar3 <= local_e))))
      goto LAB_1000_6500;
      if (*(char *)(iVar3 + param_1) == ' ') {
        local_4 = local_4 - *(int *)0x5154;
        local_a = local_a + -1;
        goto LAB_1000_6500;
      }
      if ((*(char *)(iVar3 + param_1) == '_') && (uVar4 + local_4 + 1 < local_c)) break;
      if ((*(char *)(iVar3 + param_1) != '_') && (*(char *)(iVar3 + param_1) != '{')) {
        local_4 = local_4 - (*(byte *)(*(byte *)(iVar3 + param_1) + 0x50ca) + 1);
      }
    }
    local_4 = local_4 + uVar4 + 1;
LAB_1000_6500:
    local_8 = local_c - local_4;
    if (local_e < iVar3) {
      cVar2 = *(char *)(iVar3 + param_1);
      do {
        if (*(byte *)(local_e + param_1) < 0x21) {
          piVar1 = (int *)0x5156;
          *piVar1 = *piVar1 + *(int *)0x5154;
          if (((local_a != 0) && (cVar2 != '\0')) && (cVar2 != '\n')) {
            piVar1 = (int *)0x5156;
            *piVar1 = *piVar1 + local_8 / local_a;
            local_8 = local_8 - local_8 / local_a;
            local_a = local_a + -1;
          }
        }
        else if (*(char *)(local_e + param_1) == '{') {
          piVar1 = (int *)0x5156;
          *piVar1 = *piVar1 + 0xf;
        }
        else if (*(char *)(local_e + param_1) != '_') {
          if (*(int *)0x5158 < 0xc0) {
            func_0x00019274(*(undefined2 *)0x5158,*(undefined2 *)0x5156,
                            *(byte *)(local_e + param_1) - 0x20,param_2);
          }
          piVar1 = (int *)0x5156;
          *piVar1 = *piVar1 + *(byte *)(*(byte *)(local_e + param_1) + 0x50ca) + 1;
        }
        local_e = local_e + 1;
      } while (iVar3 != local_e);
    }
    local_e = iVar3;
    if (*(char *)(iVar3 + param_1) != '\0') {
      if ((*(char *)(iVar3 + param_1) == '_') && (*(int *)0x5158 < 0xc0)) {
        func_0x00019274(*(undefined2 *)0x5158,*(undefined2 *)0x5156,0xd,param_2);
      }
      local_4 = 0;
      piVar1 = (int *)0x5158;
      *piVar1 = *piVar1 + 9;
      iVar5 = *(int *)0x5150;
      piVar1 = (int *)0x5158;
      if ((*piVar1 == iVar5 || *piVar1 < iVar5) || (*(int *)0x5152 <= *(int *)0x5158)) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      *(undefined2 *)0x5156 = *(undefined2 *)(iVar5 * 2 + 0x5146);
      local_c = *(int *)(iVar5 * 2 + 0x514c) - *(int *)0x5156;
      local_e = iVar3 + 1;
    }
  } while( true );
}



void font_1641_02a2(int param_1,int param_2)

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
  func_0x00019310(param_1 + 7,param_2,uVar3);
  return;
}



undefined2 font_1641_02fc(int param_1)

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
    func_0x0001c782();
    iVar5 = 0x671a;
    func_0x0001ff22();
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
          font_1641_02a2(iVar3,local_6);
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
    uVar6 = 0x67b1;
    iVar3 = func_0x00019f8e();
    if (iVar3 != 0) {
      return 1;
    }
    if (param_1 != 0) {
      func_0x0001a32a(1,iVar5,uVar6);
    }
    if (*(char *)0xbd29 == '\x02') {
      func_0x0001a46c(10000,0x3c,0x14);
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
        if (*(int *)0x515a != 4) goto LAB_1641_0406;
        uVar6 = 2000;
      }
      func_0x0001a4f0(3,uVar6);
    }
LAB_1641_0406:
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}



void font_1641_0418(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 unaff_DS;
  undefined *local_c;
  int local_4;
  
  func_0x0001fef2(*(undefined2 *)(param_1 * 2 + 0x515c));
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



void __cdecl16near font_1641_04a4(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  int local_e;
  
  *(undefined2 *)0x52be = 0x10;
  *(undefined *)0xbd27 = 9;
  *(undefined *)0xbd26 = 9;
  *(undefined *)0xbd28 = 0;
  func_0x00018ca0(*(undefined2 *)0x13b2);
  func_0x00018cd6(0x7e,199,0x78,0x78);
  func_0x00018ca0(*(undefined2 *)0x13b0);
  func_0x00018d40(0x7f,199,0x7f,0x78);
  if ((*(char *)0x5893 != 'B') &&
     (func_0x0001a79e(0x2c0,2000,0xb21e,0xa044), *(char *)0x5893 == '@')) {
    font_1641_0e52();
    do {
      iVar1 = func_0x00019224(*(undefined2 *)0x25f0);
    } while (iVar1 == 0);
    font_1641_0e7b();
  }
  *(undefined *)0x5893 = 0x42;
  local_e = 0x200;
  while( true ) {
    if (1999 < local_e) {
      return;
    }
    uVar2 = (uint)*(byte *)(local_e + -0x4de2);
    if (uVar2 < 0x10) break;
    iVar1 = func_0x00019f8e();
    if (iVar1 != 0) {
      return;
    }
    local_e = local_e + 1;
  }
                    // WARNING: Could not emulate address calculation at 0x00016d9c
                    // WARNING: Treating indirect jump as call
  (**(code **)(uVar2 * 2 + -0x14d6))();
  return;
}



void __cdecl16near font_1641_0998(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    do {
      iVar1 = func_0x0001a2c2(7,0);
    } while (*(char *)(iVar1 + -0x42d6) != '\0');
  } while (*(char *)(iVar1 + -0x42ce) != '\0');
  *(undefined *)(iVar1 + -0x42d6) = 1;
  return;
}



void font_1641_09c8(undefined2 param_1,undefined2 param_2)

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
  
  func_0x00018e52(1);
  func_0x000198ea(0xff);
  func_0x00018f7c(0,0,0x10,1,param_1);
  func_0x00018f7c(0,0,200,1,param_1);
  *(undefined2 *)0x5156 = 0;
  *(undefined2 *)0x5158 = 0x98;
  local_6 = font_1641_0998();
  iVar3 = font_1641_0998();
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
  func_0x00018f7c(0,*(undefined *)(local_e + 0x5204),*(undefined *)(local_e + 0x51fc),local_e + 2,
                  param_1);
  func_0x00018f7c(0,*(undefined *)(local_10 + 0x5204),*(byte *)(local_10 + 0x51fc) + 0xb8,
                  local_10 + 2,param_1);
  func_0x0001a79e(*(undefined2 *)(iVar3 * 2 + local_6 * 0x10 + 0x517c),2000,0xb21e,0xa052);
  font_1641_0000(0xb21e,param_2);
  func_0x0001919e(0,1);
  do {
    uVar4 = func_0x00019f8e();
    cVar2 = func_0x0001a262(uVar4);
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



void __cdecl16near font_1641_0b0a(void)

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
    func_0x0001925e();
  }
  *(undefined *)0xa9cb = 0xff;
  do {
    iVar5 = func_0x000191de(*(undefined2 *)0x25ea);
  } while (iVar5 == 0);
  do {
    iVar6 = func_0x00018dde(*(undefined2 *)0x260a);
  } while (iVar6 == 0);
  func_0x0001a79e(0,0x1060,0x55a6,0xa060);
  func_0x00018ca0(*(undefined2 *)0x13b2);
  func_0x00018cd6(0x7e,200,0x78,0x78);
  func_0x00018ca0(*(undefined2 *)0x13b0);
  func_0x00018d40(0x7f,200,0x7f,0x78);
  func_0x00018ca0(0);
  func_0x00018cd6(0xbf,0x137,0x80,8);
  func_0x00019e22(0x11,3);
  func_0x00019a80(0xa06a);
  func_0x00019e22(0x13,0xe);
  func_0x000198ea(0x3a);
  func_0x0001a068(8,0x55a8);
  if (*(char *)0x55a8 != '\0') {
    func_0x00019e22(0x15,8);
    func_0x00019a80(0xa08c);
    do {
      uVar7 = func_0x0001a00a(0);
      cVar4 = func_0x0001a262(uVar7);
      if (cVar4 == 'M') break;
    } while (cVar4 != 'F');
    func_0x000198ea(cVar4);
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
    func_0x0001a79e(0,2000,0xb21e,0xa0a6);
    func_0x00018e52(1);
    *(undefined *)0xa9be = 2;
    func_0x000198ea(0xff);
    func_0x00018f7c(0,0x60,0,0,iVar6);
    font_1641_0000(0xb21e,iVar5);
    func_0x0001919e(0,1);
    *(undefined2 *)0x5150 = 200;
    do {
      iVar8 = func_0x00019f8e();
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
      font_1641_09c8(iVar6,iVar5);
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
      font_1641_09c8(iVar6,iVar5);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar10 = (undefined2 *)0xbd2a;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = 0;
    }
    font_1641_09c8(iVar6,iVar5);
    *(undefined2 *)0x5158 = 0;
    *(undefined2 *)0x5156 = 0;
    *(undefined2 *)0x5150 = 0x5a;
    *(undefined2 *)0x5148 = 0;
    *(undefined2 *)0x514e = 0xa6;
    *(undefined2 *)0x5154 = 4;
    func_0x0001a79e(0x322,2000,0xb21e,0xa0b4);
    func_0x00018e52(1);
    func_0x000198ea(0xff);
    func_0x00018f7c(0,100,0xa8,10,iVar6);
    font_1641_0000(0xb21e,iVar5);
    *(undefined2 *)0x5154 = 5;
    func_0x0001919e(0,1);
    do {
      iVar8 = func_0x00019f8e();
    } while (iVar8 == 0);
    func_0x00018e14(iVar6);
    func_0x0001920c(iVar5);
    func_0x00018e52(1);
    func_0x000198ea(0xff);
    func_0x00018e52(0);
    *(undefined *)0xa9be = 0;
    uVar1 = *(undefined *)0xbd3c;
    *(undefined *)0x55b6 = uVar1;
    *(undefined *)0x55b7 = uVar1;
    *(undefined *)0x55b5 = *(undefined *)0xbd3d;
    bVar9 = *(byte *)0xbd3e;
    *(char *)0x55b4 = (bVar9 - 0x14 & ~-(bVar9 < 0x14)) + 0x14;
    func_0x0001a79e(0,0x100,0xb31e,0xa0c2);
    func_0x000198ea(0xff);
    func_0x00019e22(10,0);
    func_0x0001a74e(3);
    puVar11 = (undefined *)0xb21e;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar11;
      puVar11 = puVar11 + 1;
      *puVar2 = 0;
    }
    func_0x0001a808(0x200,0xb21e,0xa0cc);
    func_0x0001a808(0x1060,0x55a6,0xa0d6);
  }
  func_0x0001a74e(0);
  *(undefined *)0x5893 = 0x40;
  return;
}



void __cdecl16near font_1641_0e52(void)

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
    uVar3 = func_0x0001ff2e();
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



void __cdecl16near font_1641_0e7b(void)

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


