typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void FUN_0000_0134(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined local_8;
  
  cVar1 = *(char *)SAVED_GAM(0x06c1);
  if (param_1 != 0) {
    iVar2 = RANDOM(7, false);
    local_8 = (undefined)iVar2;
    *(undefined *)SAVED_GAM(0x06bd) = local_8;
    *(undefined *)SAVED_GAM(0x06bc) = local_8;
    *(undefined *)SAVED_GAM(0x06c3) = 0;
    *(undefined *)SAVED_GAM(0x06c2) = *(undefined *)(iVar2 + MEM(0x1744));
    *(undefined *)SAVED_GAM(0x06c1) = *(undefined *)(iVar2 + MEM(0x173c));
    *(undefined *)SAVED_GAM(0x06c0) = *(undefined *)SAVED_GAM(0x02ef);
    if (cVar1 != -1) {
      func_0x00008a14(*(undefined2 *)MEM(0xa9c6));
    }
    *(undefined2 *)MEM(0xa9c6) = 0;
    iVar2 = FUN_0000_0252();
    if (iVar2 == 0) {
      *(undefined *)SAVED_GAM(0x06bd) = 0;
      *(undefined *)SAVED_GAM(0x06bc) = 0;
      *(undefined *)SAVED_GAM(0x06c1) = 0xff;
    }
  }
  if (*(char *)SAVED_GAM(0x06c1) != -1) {
    do {
      iVar2 = func_0x000089de(*(undefined2 *)((uint)*(byte *)SAVED_GAM(0x06bc) * 2 + MEM(0x25fa)));
      *(int *)MEM(0xa9c6) = iVar2;
    } while (iVar2 == 0);
  }
  return;
}



void __cdecl16near FUN_0000_01d2(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  uVar2 = *(undefined2 *)MEM(0x5386);
  func_0x000099c4(0);
  uVar4 = 0xc;
  func_0x00009a22(0,0xc);
  iVar3 = *(byte *)SAVED_GAM(0x02ef) + 1;
  func_0x0000986e(0x20,1,iVar3,uVar4,iVar3);
  func_0x00009a22(0x17,0xc);
  cVar1 = *(char *)MEM(0x6603);
  if (cVar1 == '\0') {
    uVar4 = MEM(0x2c7c);
  }
  else if (cVar1 == '\x01') {
    uVar4 = MEM(0x2c82);
  }
  else if (cVar1 == '\x02') {
    uVar4 = MEM(0x2c88);
  }
  else if (cVar1 == '\x03') {
    uVar4 = MEM(0x2c8e);
  }
  else {
    uVar4 = MEM(0x2c94);
  }
  func_0x00009680(uVar4);
  func_0x000099c4(uVar2);
  return;
}



uint __cdecl16near FUN_0000_0252(void)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  uint local_a;
  int local_8;
  undefined local_6;
  
  local_8 = 0;
  do {
    bVar1 = *(byte *)SAVED_GAM(0x02ef);
    local_a = RANDOM(63, false);
    bVar1 = *(byte *)((uint)bVar1 * 0x40 + SAVED_GAM(0x03b4) + local_a) & 0xf0;
    if ((bVar1 < 0x60) || (bVar1 == 0x70)) {
      uVar4 = (int)local_a >> 0xf;
      uVar4 = ((int)((local_a ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
      if (((int)local_a % 8 != (uint)*(byte *)SAVED_GAM(0x02f0)) && (uVar4 != *(byte *)SAVED_GAM(0x02f1))) {
        uVar2 = (undefined)((int)local_a % 8);
        *(undefined *)SAVED_GAM(0x06c6) = uVar2;
        *(undefined *)SAVED_GAM(0x06be) = uVar2;
        local_6 = (undefined)uVar4;
        *(undefined *)SAVED_GAM(0x06c7) = local_6;
        *(undefined *)SAVED_GAM(0x06bf) = local_6;
        if (((*(char *)SAVED_GAM(0x06c1) == '\x16') || (*(char *)SAVED_GAM(0x06c1) == '\x18')) &&
           (iVar3 = RANDOM(99, false), 0x30 < iVar3)) {
          *(undefined *)SAVED_GAM(0x06c3) = 0xff;
        }
        local_a = 1;
        goto LAB_0000_02fb;
      }
    }
    local_8 = local_8 + 1;
    if (7 < local_8) {
LAB_0000_02fb:
      if (local_8 == 8) {
        *(undefined *)SAVED_GAM(0x06c7) = 0xff;
        *(undefined *)SAVED_GAM(0x06bf) = 0xff;
        *(undefined *)SAVED_GAM(0x06c6) = 0xff;
        *(undefined *)SAVED_GAM(0x06be) = 0xff;
        local_a = 0;
      }
      return local_a;
    }
  } while( true );
}



void __cdecl16near FUN_0000_0332(void)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)MEM(0x5386);
  func_0x000088a0(*(undefined2 *)MEM(0x13b2),uVar1);
  func_0x000088d6(7,0x98,0,0x28);
  func_0x000088d6(0xbf,0x98,0xb9,0x30);
  func_0x000088a0(*(undefined2 *)MEM(0x13b0));
  func_0x00008940(7,0x98,7,0x28);
  func_0x00008940(0xb8,0x98,0xb8,0x30);
  func_0x000099c4(0);
  func_0x00009a22(0,10);
  func_0x0000ca5a();
  func_0x00009680(MEM(0x2c9a));
  func_0x0000cafe();
  func_0x00009a22(0x17,6);
  func_0x0000ca5a();
  func_0x00009680(MEM(0x2c9d));
  func_0x0000cafe();
  func_0x000099c4(uVar1);
  return;
}



int __cdecl16near FUN_0000_03d6(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  if (*(char *)MEM(0xa9fa) != '\0') {
    func_0x0000a730();
    *(undefined *)MEM(0xa9fa) = 0;
  }
  func_0x000094ea(10);
  func_0x0000ca5a();
  iVar3 = 1;
  do {
    uVar1 = func_0x00009968();
    iVar2 = func_0x00009e62(uVar1);
    if (((iVar2 != 0) && (iVar2 < 5)) && (*(int *)MEM(0x538a) == 0)) {
      iVar2 = iVar2 + 0xfa;
    }
    if (iVar2 == 0) {
      FUN_0000_1a90(iVar3);
      if (iVar3 == 0) {
        uVar4 = 0x28;
        uVar1 = 0x96;
      }
      else {
        uVar4 = 0x10;
        uVar1 = 0xaf;
      }
      func_0x000088fe(0xb2,uVar1,0xe,uVar4,0,1);
      if (*(char *)MEM(0x6604) != '\x01') {
        iVar3 = 0;
      }
      FUN_0000_1020();
    }
  } while (iVar2 == 0);
  return iVar2;
}



void FUN_0000_0470(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_0000_1be0();
  func_0x00009680(MEM(0x2ca8));
  func_0x00009680(MEM(0x2caf));
  func_0x000088a0(*(undefined2 *)MEM(0x13b0));
  func_0x000089b6(0xb7,0xb7,8,8);
  func_0x00009f2a(1);
  func_0x000089b6(0xb7,0xb7,8,8);
  func_0x0000a06c(20000,500,1);
  if (param_1 < 1) {
    iVar2 = (uint)*(byte *)MEM(0x6603) * 2;
    pcVar1 = (char *)SAVED_GAM(0x02f0);
    *pcVar1 = *pcVar1 + *(char *)(iVar2 + MEM(0x24d6));
    pcVar1 = (char *)SAVED_GAM(0x02f1);
    *pcVar1 = *pcVar1 + *(char *)(iVar2 + MEM(0x24de));
  }
  else {
    iVar2 = (uint)*(byte *)MEM(0x6603) * 2;
    pcVar1 = (char *)SAVED_GAM(0x02f0);
    *pcVar1 = *pcVar1 - *(char *)(iVar2 + MEM(0x24d6));
    pcVar1 = (char *)SAVED_GAM(0x02f1);
    *pcVar1 = *pcVar1 - *(char *)(iVar2 + MEM(0x24de));
  }
  func_0x0000a8d8();
  FUN_0000_1be0();
  return;
}



undefined2 FUN_0000_0502(byte param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  uint local_a;
  uint local_8;
  int local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  if (param_2 == 1) {
    if ((param_1 & 0xf0) == 0xe0) {
      uVar2 = MEM(0x2cef);
LAB_0000_0666:
      func_0x00009680(uVar2);
    }
    else {
      func_0x00009680(MEM(0x2d00));
      bVar1 = *(char *)MEM(0x6603) + 3;
LAB_0000_0642:
      *(byte *)MEM(0x6603) = bVar1 & 3;
    }
  }
  else {
    if (param_2 == 2) {
      if ((param_1 & 0xf0) != 0xe0) {
        func_0x00009680(MEM(0x2cda));
        bVar1 = *(char *)MEM(0x6603) + 1;
        goto LAB_0000_0642;
      }
      uVar2 = MEM(0x2cc9);
      goto LAB_0000_0666;
    }
    if (param_2 == 3) {
      func_0x00009680(MEM(0x2cc0));
      local_6 = 1;
    }
    else {
      if (param_2 != 4) {
        func_0x00009680(MEM(0x2d0b));
        bVar1 = *(char *)MEM(0x6603) + 2;
        goto LAB_0000_0642;
      }
      func_0x00009680(MEM(0x2ce6));
      local_6 = -1;
    }
  }
  bVar1 = *(byte *)MEM(0x6603);
  *(byte *)MEM(0x6602) = bVar1;
  if (local_6 != 0) {
    local_4 = 1;
    local_8 = *(int *)((uint)bVar1 * 2 + MEM(0x24d6)) * local_6 + (uint)*(byte *)SAVED_GAM(0x02f0);
    if ((int)local_8 < 0) {
      local_8 = 7;
    }
    if (7 < (int)local_8) {
      local_8 = 0;
    }
    local_a = *(int *)((uint)*(byte *)MEM(0x6603) * 2 + MEM(0x24de)) * local_6 + (uint)*(byte *)SAVED_GAM(0x02f1);
    if ((int)local_a < 0) {
      local_a = 7;
    }
    if (7 < (int)local_a) {
      local_a = 0;
    }
    bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + local_a * 8 + local_8 + SAVED_GAM(0x03b4));
    if (bVar1 == 0x83) {
      *(undefined *)SAVED_GAM(0x02f0) = (byte)local_8;
      *(undefined *)SAVED_GAM(0x02f1) = (byte)local_a;
      FUN_0000_0470(local_6);
      local_8 = (uint)*(byte *)SAVED_GAM(0x02f0);
      local_a = (uint)*(byte *)SAVED_GAM(0x02f1);
    }
    bVar1 = bVar1 & 0xf0;
    if (((bVar1 < 0xa1) || (0xdf < bVar1)) &&
       ((local_6 != -1 || ((bVar1 != 0xa0 && (bVar1 != 0xf0)))))) {
      if ((local_8 != *(byte *)SAVED_GAM(0x06be)) || (local_a != *(byte *)SAVED_GAM(0x06bf))) {
        *(undefined *)MEM(0xa9fb) = 0xf;
        *(undefined *)MEM(0x24e7) = 0;
        FUN_0000_1020();
        *(undefined *)MEM(0x24e7) = 0;
        *(byte *)SAVED_GAM(0x02f0) = (byte)local_8 & 7;
        *(byte *)SAVED_GAM(0x02f1) = (byte)local_a & 7;
        goto LAB_0000_06b6;
      }
      uVar2 = MEM(0x2d23);
    }
    else {
      uVar2 = MEM(0x2d19);
    }
    func_0x00009680(uVar2);
  }
LAB_0000_06b6:
  FUN_0000_1be0();
  return local_4;
}



undefined2 FUN_0000_06c4(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 local_4;
  
  if (param_1 == 0xb) {
    uVar2 = 1;
    func_0x0000986e(0x20,1,*(undefined *)SAVED_GAM(0x02e2));
LAB_0000_0703:
    func_0x000094ea(10,uVar2);
    return 1;
  }
  if ((int)param_1 < 0xc) {
    if (0 < (int)param_1) {
      if ((int)param_1 < 5) goto LAB_0000_0744;
      if (param_1 == 5) {
        func_0x00009680(MEM(0x2d2d));
        iVar1 = func_0x0000a49c();
        if (iVar1 == 0x59) {
          func_0x000086a8();
          func_0x00008124(0);
          return 1;
        }
        func_0x00009680(MEM(0x2d3b));
        return 1;
      }
    }
LAB_0000_07bc:
    if ((param_1 < 0x30) || (0x39 < param_1)) {
      local_4 = func_0x0000afa8(param_1);
    }
    else {
      func_0x0000beb0(param_1);
      local_4 = 0;
    }
  }
  else {
    if (param_1 != 0xd) {
      if (param_1 == 0x13) {
        func_0x00009680(MEM(0x2d43));
        if (*(char *)MEM(0xa9ce) == '\0') {
          uVar2 = MEM(0x2d4f);
        }
        else {
          uVar2 = MEM(0x2d4a);
        }
        func_0x00009680(uVar2);
        *(bool *)MEM(0xa9ce) = *(char *)MEM(0xa9ce) == '\0';
        return 1;
      }
      if (param_1 == 0x16) {
        uVar2 = MEM(0x0741);
        func_0x00009680(MEM(0x2d3e));
        goto LAB_0000_0703;
      }
      if (param_1 != 0x2e) goto LAB_0000_07bc;
    }
LAB_0000_0744:
    local_4 = FUN_0000_0502(*(undefined *)
                             ((uint)*(byte *)SAVED_GAM(0x02f0) +
                              (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4)),
                            param_1);
  }
  return local_4;
}



undefined2 __cdecl16near FUN_0000_07e2(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 unaff_DS;
  undefined local_14;
  undefined local_12;
  undefined2 local_10;
  int local_e;
  int local_c;
  
  local_10 = 0;
  local_e = 999;
  if (*(char *)SAVED_GAM(0x06c1) != -1) {
    if (*(char *)SAVED_GAM(0x06c1) != '\x1b') {
      local_c = 0;
      bVar2 = *(byte *)SAVED_GAM(0x06c7);
      bVar3 = *(byte *)SAVED_GAM(0x06c6);
      bVar4 = *(byte *)SAVED_GAM(0x06bf);
      bVar5 = *(byte *)SAVED_GAM(0x06be);
      do {
        iVar6 = RANDOM(3, false);
        uVar7 = *(int *)(iVar6 * 2 + MEM(0x24d6)) + (uint)bVar5;
        if (7 < (int)uVar7) {
          uVar7 = 0;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 7;
        }
        uVar8 = *(int *)(iVar6 * 2 + MEM(0x24de)) + (uint)bVar4;
        if (7 < (int)uVar8) {
          uVar8 = 0;
        }
        if ((int)uVar8 < 0) {
          uVar8 = 7;
        }
        bVar1 = *(byte *)(uVar8 * 8 + uVar7 + (uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + SAVED_GAM(0x03b4)) & 0xf0;
        if ((((bVar1 != 0x60) && (bVar1 != 0x80)) && (bVar1 < 0xa0)) &&
           (((uVar7 != bVar3 || (uVar8 != bVar2)) || (iVar6 = RANDOM(7, false), iVar6 == 1)))) {
          local_e = 900;
          break;
        }
        local_c = local_c + 1;
      } while (local_c < 8);
      if (local_e == 900) {
        *(undefined *)SAVED_GAM(0x06c6) = *(undefined *)SAVED_GAM(0x06be);
        *(undefined *)SAVED_GAM(0x06c7) = *(undefined *)SAVED_GAM(0x06bf);
        local_12 = (undefined)uVar7;
        *(undefined *)SAVED_GAM(0x06be) = local_12;
        local_14 = (undefined)uVar8;
        *(undefined *)SAVED_GAM(0x06bf) = local_14;
      }
    }
    if ((*(char *)SAVED_GAM(0x06be) == *(char *)SAVED_GAM(0x02f0)) && (*(char *)SAVED_GAM(0x06bf) == *(char *)SAVED_GAM(0x02f1))) {
      local_10 = 1;
      *(undefined *)SAVED_GAM(0x06be) = *(undefined *)SAVED_GAM(0x06c6);
      *(undefined *)SAVED_GAM(0x06bf) = *(undefined *)SAVED_GAM(0x06c7);
    }
  }
  return local_10;
}



void __cdecl16near FUN_0000_0948(void)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 unaff_DS;
  byte *local_6;
  
  func_0x00009680(MEM(0x2d53));
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    local_6 = (byte *)SAVED_GAM(0x000f);
    pcVar3 = (char *)SAVED_GAM(0x000d);
    uVar4 = 0;
    do {
      uVar2 = RANDOM(30, true);
      if ((*local_6 <= uVar2) && (*pcVar3 != 'D')) {
        *pcVar3 = 'S';
        func_0x0000a858(uVar4);
        func_0x0000a06c(MEM(0x0dac),0x32,1);
        *(undefined *)MEM(0xa9fa) = 1;
      }
      local_6 = local_6 + 0x20;
      pcVar3 = pcVar3 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)SAVED_GAM(0x02b5));
  }
  pbVar1 = (byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                    (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
  *pbVar1 = *pbVar1 & 8;
  return;
}



void __cdecl16near FUN_0000_09e6(void)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  uint local_4;
  
  func_0x00009680(MEM(0x2d61));
  local_4 = 0;
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    pbVar3 = (byte *)SAVED_GAM(0x000f);
    pcVar2 = (char *)SAVED_GAM(0x000d);
    do {
      uVar1 = RANDOM(30, true);
      if ((*pbVar3 <= uVar1) && (*pcVar2 != 'D')) {
        *pcVar2 = 'P';
        func_0x0000a06c(MEM(0x0dac),0x32,1);
      }
      pbVar3 = pbVar3 + 0x20;
      pcVar2 = pcVar2 + 0x20;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)SAVED_GAM(0x02b5));
  }
  return;
}



void FUN_0000_0a4c(byte param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  *(undefined *)MEM(0x6602) = 5;
  while (((param_1 == 0x61 || (param_1 == 0x69)) && (*(byte *)SAVED_GAM(0x02ef) < 8))) {
    func_0x00009680(MEM(0x2d6a));
    func_0x00009680(MEM(0x2d75));
    uVar4 = (uint)*(byte *)SAVED_GAM(0x02f0);
    iVar5 = (uint)*(byte *)SAVED_GAM(0x02f1) * 8;
    pbVar1 = (byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + iVar5 + uVar4 + SAVED_GAM(0x03b4));
    *pbVar1 = *pbVar1 & 0xf8;
    pcVar2 = (char *)SAVED_GAM(0x02ef);
    *pcVar2 = *pcVar2 + '\x01';
    param_1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + iVar5 + uVar4 + SAVED_GAM(0x03b4));
    if (param_1 < 0x90) {
      param_1 = param_1 | 8;
      *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + (uint)*(byte *)SAVED_GAM(0x02f0) +
               SAVED_GAM(0x03b4)) = param_1;
    }
    FUN_0000_1be0();
    func_0x00009680(MEM(0x2d81));
    func_0x0000a8d8();
  }
  if (*(char *)SAVED_GAM(0x02ef) == '\b') {
    *(undefined *)SAVED_GAM(0x02ed) = 0;
  }
  if (*(char *)SAVED_GAM(0x02ed) != '\0') {
    bVar3 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                      (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4)) & 0xf0;
    if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
      func_0x0000fa32();
      FUN_0000_0000(*(undefined *)
                     ((uint)*(byte *)SAVED_GAM(0x02f0) +
                      (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4)));
      if (*(char *)SAVED_GAM(0x02ed) == '\0') {
        return;
      }
      func_0x0000fa3e(1);
    }
    FUN_0000_0134(1);
  }
  return;
}



void __cdecl16near FUN_0000_0b7e(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00009680(MEM(0x2d92));
  if ((*(char *)SAVED_GAM(0x06c6) - 1U & 7) == *(byte *)SAVED_GAM(0x02f0)) {
    *(undefined *)MEM(0x6602) = 1;
  }
  else if ((*(char *)SAVED_GAM(0x06c6) + 1U & 7) == *(byte *)SAVED_GAM(0x02f0)) {
    *(undefined *)MEM(0x6602) = 3;
  }
  else if ((*(char *)SAVED_GAM(0x06c7) - 1U & 7) == *(byte *)SAVED_GAM(0x02f1)) {
    *(undefined *)MEM(0x6602) = 2;
  }
  else {
    *(undefined *)MEM(0x6602) = 0;
  }
  if (*(char *)MEM(0x6602) == *(char *)MEM(0x6603)) goto LAB_0000_0c22;
  func_0x00009680(MEM(0x2d9b));
  cVar1 = *(char *)MEM(0x6602);
  if (cVar1 == '\0') {
    uVar2 = MEM(0x2da6);
LAB_0000_0c03:
    func_0x00009680(uVar2);
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = MEM(0x2dac);
      goto LAB_0000_0c03;
    }
    if (cVar1 == '\x02') {
      uVar2 = MEM(0x2db1);
      goto LAB_0000_0c03;
    }
    if (cVar1 == '\x03') {
      uVar2 = MEM(0x2db7);
      goto LAB_0000_0c03;
    }
  }
  *(undefined *)MEM(0x6603) = *(undefined *)MEM(0x6602);
LAB_0000_0c22:
  func_0x00009680(MEM(0x2dbc));
  FUN_0000_1be0();
  func_0x00009946();
  func_0x00009f2a(2);
  func_0x0000fa32();
  *(undefined *)SAVED_GAM(0x02fa) = 0;
  *(undefined *)SAVED_GAM(0x02fb) = 2;
  func_0x0000fa56();
  func_0x0000ddb6(0,*(undefined *)SAVED_GAM(0x06c1));
  func_0x0000fa9e();
  func_0x0000fa3e(1);
  FUN_0000_0134(1);
  if (*(char *)SAVED_GAM(0x02ed) != '\0') {
    FUN_0000_1be0();
  }
  return;
}



void FUN_0000_0c76(int param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 unaff_DS;
  int local_a;
  char local_8;
  byte local_4;
  
  local_a = 0;
  local_4 = param_2 & 0xf0;
  local_8 = '\0';
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    pcVar3 = (char *)SAVED_GAM(0x000d);
    uVar4 = 0;
    do {
      if ((*pcVar3 == 'S') && (iVar2 = RANDOM(63, false), iVar2 < 4)) {
        *pcVar3 = 'G';
        local_8 = local_8 + '\x01';
      }
      pcVar3 = pcVar3 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)SAVED_GAM(0x02b5));
  }
  if (local_8 != '\0') {
    func_0x0000a730();
  }
  if (param_1 != 0) {
    local_a = FUN_0000_07e2();
  }
  if (local_a != 0) {
    FUN_0000_0b7e();
    param_2 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                        (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
    local_4 = param_2 & 0xf0;
  }
  if ((local_4 == 0xf0) || (local_4 == 0xa0)) {
    func_0x0000fa32();
    while ((((local_4 == 0xf0 || (local_4 == 0xa0)) && (iVar2 = func_0x0000b82c(), -1 < iVar2)) &&
           (FUN_0000_0000(param_2), *(char *)SAVED_GAM(0x02ed) != '\0'))) {
      param_2 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                          (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
      local_4 = param_2 & 0xf0;
    }
    func_0x0000fa3e(1);
    if (0x20 < *(byte *)SAVED_GAM(0x02ed)) {
      FUN_0000_1be0();
    }
    goto LAB_0000_0e22;
  }
  if (param_2 == 0x80) {
LAB_0000_0db0:
    FUN_0000_0948();
  }
  else if (param_2 < 0x81) {
    if (param_2 == 0x61) {
LAB_0000_0dfa:
      FUN_0000_0a4c(param_2);
    }
    else {
      if (param_2 != 0x62) {
        if (param_2 == 0x69) goto LAB_0000_0dfa;
        if (param_2 != 0x6a) goto LAB_0000_0e1f;
      }
      func_0x00009680(MEM(0x2dc7));
      func_0x00009680(MEM(0x2dd3));
      pbVar1 = (byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                        (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
      *pbVar1 = *pbVar1 & 8;
LAB_0000_0dc3:
      func_0x0000a8d8();
    }
  }
  else {
    if (param_2 != 0x81) {
      if (param_2 != 0x82) {
        if (param_2 == 0x88) goto LAB_0000_0db0;
        if (param_2 == 0x89) goto LAB_0000_0db6;
        if (param_2 != 0x8a) goto LAB_0000_0e1f;
      }
      func_0x00009680(MEM(0x2dbf));
      goto LAB_0000_0dc3;
    }
LAB_0000_0db6:
    FUN_0000_09e6();
  }
LAB_0000_0e1f:
  func_0x0000a730();
LAB_0000_0e22:
  func_0x0000a918();
  return;
}



void FUN_0000_0e2e(undefined2 param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  uint in_stack_0000fff4;
  uint uVar7;
  
  iVar6 = 1;
  iVar5 = 0;
  uVar7 = 0;
  *(undefined *)DATA_OVL(0x164d) = 2;
  func_0x0000fa4a();
  bVar3 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                    (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4)) & 0xf0;
  FUN_0000_0332();
  FUN_0000_01d2();
  iVar4 = *(byte *)SAVED_GAM(0x02ed) - 0x20;
  if (((iVar4 == 1) || (iVar4 == 4)) || (iVar4 == 5)) {
    *(undefined *)DATA_OVL(0x164a) = 0x4f;
    *(undefined *)DATA_OVL(0x164b) = 0x45;
    *(undefined *)MEM(0x6604) = 3;
  }
  else {
    *(undefined *)DATA_OVL(0x164a) = 0x4d;
    *(undefined *)DATA_OVL(0x164b) = 5;
    if ((iVar4 == 6) || (iVar4 == 7)) {
      *(undefined *)MEM(0x6604) = 2;
    }
    else {
      *(undefined *)MEM(0x6604) = 1;
    }
  }
  if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
    func_0x0000fa32();
    FUN_0000_0000(*(undefined *)
                   ((uint)*(byte *)SAVED_GAM(0x02f0) +
                    (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4)));
  }
  if (0x20 < *(byte *)SAVED_GAM(0x02ed)) {
    func_0x0000fa3e(param_1);
    FUN_0000_0134(param_1);
    FUN_0000_1be0();
  }
  do {
    do {
      if ((iVar6 == 0) || (*(byte *)SAVED_GAM(0x02ed) < 0x21)) {
        if ((*(byte *)DATA_OVL(0x164d) & 2) == 0) {
          pbVar1 = (byte *)DATA_OVL(0x164d);
          *pbVar1 = *pbVar1 | 4;
        }
        else {
          pbVar1 = (byte *)DATA_OVL(0x164d);
          *pbVar1 = *pbVar1 & 0xfb;
        }
        func_0x0000fa32();
        if (iVar5 < 0) {
          func_0x0000f88e(iVar5,iVar6,in_stack_0000fff4,iVar4,bVar3,uVar7);
        }
        return;
      }
      iVar6 = 1;
      iVar5 = func_0x0000b82c();
      if (iVar5 == 1) {
        func_0x000094ea(10);
        func_0x0000ca5a();
        func_0x00009680(MEM(0x2ddd));
      }
      if (-1 >= iVar5) {
        iVar6 = 0;
      }
      in_stack_0000fff4 = (uint)(-1 < iVar5);
    } while (iVar5 != 0);
    if ((*(char *)SAVED_GAM(0x02d4) == 'T') || (*(char *)SAVED_GAM(0x02d4) == 'Q')) {
      if (*(char *)SAVED_GAM(0x02d4) == 'Q') {
        uVar7 = uVar7 ^ 1;
        if (uVar7 != 0) goto LAB_0000_0f2e;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 1;
LAB_0000_0f2e:
      func_0x0000cdac(1);
    }
    iVar4 = FUN_0000_03d6();
    if (-1 < iVar4) {
      in_stack_0000fff4 = FUN_0000_06c4(iVar4);
    }
    if (*(byte *)SAVED_GAM(0x02ed) < 0x21) {
      in_stack_0000fff4 = 0;
      iVar6 = 0;
    }
    bVar2 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 +
                      (uint)*(byte *)SAVED_GAM(0x02f0) + SAVED_GAM(0x03b4));
    bVar3 = bVar2 & 0xf0;
    if (in_stack_0000fff4 != 0) {
      FUN_0000_0c76(uVar7,bVar2);
    }
    if (*(byte *)SAVED_GAM(0x02ed) < 0x21) {
      in_stack_0000fff4 = 0;
      iVar6 = 0;
    }
  } while( true );
}



void __cdecl16near FUN_0000_1020(void)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  pbVar1 = (byte *)MEM(0x24e7);
  *pbVar1 = *pbVar1 ^ 1;
  if ((*pbVar1 != 0) && (*(char *)MEM(0xa9fb) != '\0')) {
    func_0x0000a06c(20000,*(undefined *)MEM(0xa9fb),1);
    func_0x0000bd66(4,MEM(0xa9fb));
  }
  return;
}



void FUN_0000_104c(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (uint)*(byte *)SAVED_GAM(0x02ed);
  if (param_1 <= *(byte *)(uVar2 + MEM(0x2dcf))) {
    iVar1 = *(byte *)(uVar2 + MEM(0x2dc7)) + param_1;
    func_0x00009a52(0x18,0x27,*(undefined *)(iVar1 + MEM(0x2e03)),*(undefined *)(iVar1 + MEM(0x2df7)),0);
    func_0x000099c4(0);
    func_0x00009ace(1);
    func_0x00009a22(0,0);
    func_0x000094ea(0xfd);
    func_0x00009680(*(undefined2 *)((iVar1 + -1) * 2 + MEM(0x2e10)));
    func_0x000094ea(0xfd);
    func_0x00009ace(0);
    func_0x000099c4(2);
    func_0x00009a52(0x18,0x27,0,0,0);
  }
  return;
}



byte FUN_0000_10dc(uint param_1,uint param_2)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (param_1 & 7) * 8 + (param_2 & 7) + SAVED_GAM(0x03b4));
  if (bVar1 < 0x90) {
    bVar1 = bVar1 & 0xf7;
  }
  return bVar1;
}



void FUN_0000_111e(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  uint local_e;
  char local_a;
  uint local_8;
  uint local_6;
  char local_4;
  
  if (*(char *)SAVED_GAM(0x02d4) == 'T') {
    *(undefined *)SAVED_GAM(0x06c2) = *(undefined *)(*(byte *)SAVED_GAM(0x06bc) + MEM(0x1744));
  }
  uVar4 = (uint)(*(char *)SAVED_GAM(0x06c3) == -1);
  bVar1 = *(byte *)SAVED_GAM(0x06c2);
  uVar5 = (uint)bVar1;
  uVar6 = uVar5 & 0x60;
  local_8 = uVar5 & 0xf;
  if (*(char *)SAVED_GAM(0x02d4) == 'T') {
    local_e = 1;
    local_6 = 1;
  }
  else {
    iVar7 = RANDOM(100, false);
    local_6 = (uint)(iVar7 < 0x32);
    iVar7 = RANDOM(100, false);
    local_e = (uint)(iVar7 < 0x32);
    if (uVar6 == 0x20) {
      local_e = (uint)((bVar1 & 0xf) == 0);
      local_8 = local_e;
      local_6 = local_e;
    }
    else if ((uVar6 != 0x40) && (uVar6 == 0x60)) {
      local_8 = local_8 - 1;
      if ((int)local_8 < 0) {
        local_8 = 3;
      }
      bVar2 = *(byte *)(local_8 + MEM(0x2e26));
      local_6 = (uint)(bVar2 >> 1);
      local_e = bVar2 & 1;
    }
  }
  if ((bVar1 & 0x90) != 0) {
    local_e = (uVar5 & 0x90) == 0x90 ^ local_6;
  }
  if (*(int *)MEM(0xa9c6) == 0) {
    func_0x00009680(MEM(0x6c4e));
  }
  else {
    uVar3 = *(undefined2 *)(uVar4 * 8 + param_1 * 2 + MEM(0x2e32));
    func_0x00008b7c(uVar4,uVar3,*(undefined2 *)(param_1 * 2 + MEM(0x2e2a)),local_6 * 3 + param_1 + -1,
                    *(undefined2 *)MEM(0xa9c6));
    func_0x00008a2c(uVar4,uVar3,0x60,local_e * 3 + param_1 + -1,*(undefined2 *)MEM(0xa9c6));
    local_4 = (char)uVar6;
    local_a = (char)(uVar5 & 0x90);
    *(char *)SAVED_GAM(0x06c2) = local_4 + local_a + (char)local_8;
  }
  return;
}



void FUN_0000_127e(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)MEM(0x52c4);
  *(undefined2 *)MEM(0x52c4) = 0;
  if (param_1 == 0) {
    iVar7 = *(int *)MEM(0x13b6);
  }
  else if (param_1 == 1) {
    iVar7 = *(int *)MEM(0x13b4);
  }
  else if (param_1 == 2) {
    iVar7 = *(int *)MEM(0x13ae);
  }
  else {
    if (param_1 != 3) goto LAB_0000_12be;
    iVar7 = *(int *)MEM(0x13b2);
  }
  func_0x000088a0(iVar7 + 8);
LAB_0000_12be:
  if (0 < *(int *)(param_2 * 2 + MEM(0x2e52))) {
    param_2 = param_2 * 2;
    iVar7 = *(int *)(param_2 + MEM(0x2e52));
    iVar2 = *(int *)(param_2 + MEM(0x2e5a));
    iVar3 = *(int *)(param_2 + MEM(0x2e4a));
    uVar4 = *(undefined2 *)(param_2 + MEM(0x2e42));
    do {
      iVar5 = RANDOM(iVar3 - iVar2, uVar4);
      uVar6 = RANDOM(iVar3, uVar4);
      func_0x00008acc(iVar2 + iVar5,uVar6,iVar5);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined2 *)MEM(0x52c4) = uVar1;
  return;
}



void FUN_0000_134a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_8;
  
  if ((int)param_3 < 0x1f) {
    local_8 = *(undefined2 *)((param_3 & 3) * 2 + param_1 * 8 + MEM(0x2e62));
    if ((param_1 != 0) && ((((byte)param_3 & 0xf8) == 8 || (((byte)param_3 & 0xfc) == 0x18)))) {
      local_8 = 0x60;
    }
    if (param_1 == 0) {
      uVar3 = *(undefined2 *)MEM(0xa9c0);
      uVar2 = 0xe;
      param_2 = 0;
LAB_0000_1452:
      func_0x00008b7c(param_2,uVar2,local_8,param_3,uVar3);
      return;
    }
    uVar3 = *(undefined2 *)MEM(0xa9c0);
    uVar2 = 0xe;
    param_2 = 0;
  }
  else {
    uVar1 = param_3 + 1;
    param_3 = ((int)uVar1 >> 1) - 0x10;
    uVar1 = uVar1 & 6;
    if (param_1 == 0) {
      local_8 = *(undefined2 *)(uVar1 + MEM(0x2e72));
    }
    else {
      local_8 = 0x60;
    }
    if ((int)param_3 < 8) {
      if (param_2 == 0) {
        uVar2 = 0x60;
      }
      else {
        uVar2 = *(undefined2 *)(uVar1 + MEM(0x2e82));
      }
    }
    else {
      uVar2 = *(undefined2 *)(uVar1 + param_2 * 8 + MEM(0x2e7a));
    }
    if (param_1 == 0) {
      uVar3 = *(undefined2 *)MEM(0xa9c4);
      goto LAB_0000_1452;
    }
    uVar3 = *(undefined2 *)MEM(0xa9c4);
  }
  func_0x00008a2c(param_2,uVar2,local_8,param_3,uVar3);
  return;
}



int FUN_0000_145c(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (param_2 == 5) {
    param_2 = 0;
    func_0x0000c1de(-(param_1 * 8 + -0x14),1,MEM(0x0dac),MEM(0x0c80));
  }
  else {
    if (param_2 == 4) {
      if ((*(int *)MEM(0x52c8) == 0) || (*(int *)MEM(0x52c8) == 3)) {
        uVar1 = 3;
      }
      else {
        uVar1 = 0xb;
      }
    }
    else {
      uVar1 = *(undefined2 *)MEM(0x13b2);
    }
    func_0x000088a0(uVar1);
    func_0x00008acc(param_4 + 1,param_3,param_4 + -1);
    func_0x00008b22(param_3 + 1,param_3 + -1,param_4);
    if (param_2 < 4) {
      func_0x000088a0(*(int *)MEM(0x13b2) + 8);
      func_0x00008a94(param_3,param_4);
    }
    if ((param_2 != 0) || (iVar2 = RANDOM(64, false), iVar2 < 4)) {
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}



undefined2 FUN_0000_150a(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  byte local_6;
  int local_4;
  
  uVar3 = FUN_0000_10dc(param_2,param_3);
  if (0x9f < (int)uVar3) {
    local_4 = (uint)*(byte *)(((int)uVar3 >> 4) + MEM(0x2e80)) + param_1;
    if (param_1 == 0) {
      local_4 = 0xc;
    }
    FUN_0000_134a(0,0,local_4);
    FUN_0000_134a(1,0,local_4);
    local_6 = (byte)uVar3;
    if ((((param_1 == 1) || (param_1 == 2)) && (*(char *)MEM(0x6604) == '\x01')) &&
       ((local_6 & 0xf0) == 0xc0)) {
      cVar2 = FUN_0000_145c(param_1,uVar3 & 7,*(byte *)((uVar3 & 7) + param_1 * 5 + MEM(0x2e8b)) + 0xe,
                            0x5f);
      pbVar5 = (byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (param_2 & 7) * 8 + (param_3 & 7) + SAVED_GAM(0x03b4));
      pbVar1 = pbVar5;
      *pbVar1 = *pbVar1 & 0xf8;
      pbVar1 = pbVar5;
      *pbVar1 = *pbVar1 + cVar2;
    }
    if (param_1 == 1) {
      if (((local_6 & 0xf0) == 0xb0) && ((uVar3 & 0xf) != 0)) {
        FUN_0000_104c(uVar3 & 0xf);
      }
      else if ((*(char *)MEM(0x6604) == '\x03') &&
              (((local_6 & 0xf0) == 0xc0 && (iVar4 = RANDOM(64, false), iVar4 < 4)))) {
        func_0x000088a0(*(int *)MEM(0x13ae) + 8);
        func_0x00008acc(0x5d,0x57,0x5c);
        func_0x00008acc(0x5d,0x58,0x5b);
        func_0x00008acc(0x62,0x57,0x61);
        func_0x00008acc(99,0x58,0x61);
      }
    }
    if (((local_6 & 0xf0) != 0xe0) || (param_1 != 0)) {
      return 0;
    }
    *(undefined2 *)MEM(0x52c4) = 1;
  }
  return 1;
}



void FUN_0000_1682(int param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  int local_6;
  
  uVar3 = FUN_0000_10dc(param_3,param_4);
  if ((int)uVar3 < 0xa0) {
    param_1 = param_1 + 0x10;
  }
  else {
    uVar4 = uVar3 & 0xf0;
    if (uVar4 != 0xa0) {
      if (uVar4 == 0xc0) {
        FUN_0000_134a(param_2,0,param_1 + 0x14);
        if (1 < param_1) {
          return;
        }
        if (*(char *)MEM(0x6604) != '\x01') {
          return;
        }
        if (param_1 == 0) {
          local_6 = 0x21;
        }
        else {
          local_6 = 0x43;
        }
        if (param_2 != 0) {
          local_6 = 0xbe - local_6;
        }
        cVar2 = FUN_0000_145c(param_1,uVar3 & 7,*(byte *)((uVar3 & 7) + param_1 * 5 + MEM(0x2e9a)) + 0xe,
                              local_6);
        pbVar5 = (byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (param_3 & 7) * 8 + (param_4 & 7) + SAVED_GAM(0x03b4))
        ;
        pbVar1 = pbVar5;
        *pbVar1 = *pbVar1 & 0xf8;
        pbVar1 = pbVar5;
        *pbVar1 = *pbVar1 + cVar2;
        return;
      }
      if ((uVar4 != 0xe0) && (uVar4 != 0xf0)) goto LAB_0000_1775;
    }
    param_1 = param_1 + 4;
  }
LAB_0000_1775:
  FUN_0000_134a(param_2,0,param_1);
  return;
}



void FUN_0000_1786(int param_1,int param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
  if ((*(int *)MEM(0x52c8) == 0) || (*(int *)MEM(0x52c8) == 3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined2 *)MEM(0x13b2);
  }
  func_0x000088a0(uVar7);
  if (param_2 == 0) {
    if ((*(int *)MEM(0x52c8) != 0) && (*(int *)MEM(0x52c8) != 3)) {
      func_0x000088a0(*(int *)MEM(0x13b2) + 8);
    }
    iVar3 = param_1 * 0x10;
    local_8 = (byte *)(iVar3 + MEM(0x2ea4));
    puVar5 = (undefined *)(iVar3 + MEM(0x2ea5));
    do {
      uVar1 = *puVar5;
      uVar2 = (uint)*local_8;
      func_0x00008a94(uVar1,uVar2);
      func_0x00008a94(uVar1,0xbe - uVar2);
      local_8 = local_8 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 < (undefined *)(iVar3 + MEM(0x2eb5)));
    uVar4 = (uint)*(byte *)(param_1 * 2 + MEM(0x2f11));
    uVar2 = (uint)*(byte *)(param_1 * 2 + MEM(0x2f10));
    func_0x00008a94(uVar4,uVar2);
    iVar3 = 0xbe - uVar2;
  }
  else {
    if (param_2 == 1) {
      param_1 = param_1 * 10;
      local_c = (byte *)(param_1 + MEM(0x2ed4));
      pbVar6 = (byte *)(param_1 + MEM(0x2ed5));
      do {
        iVar3 = *pbVar6 + 0x60;
        uVar2 = (uint)*local_c;
        func_0x00008a94(iVar3,uVar2 + 0x48);
        func_0x00008a94(iVar3,0x76 - uVar2);
        local_c = local_c + 2;
        pbVar6 = pbVar6 + 2;
      } while (pbVar6 < (byte *)(param_1 + 11999));
      return;
    }
    if (param_2 == 2) {
      param_1 = param_1 * 8;
      local_10 = (byte *)(param_1 + MEM(0x2ef2));
      pbVar6 = (byte *)(param_1 + MEM(0x2ef3));
      do {
        iVar3 = *pbVar6 + 0x60;
        uVar2 = (uint)*local_10;
        func_0x00008a94(iVar3,uVar2 + 0x50);
        func_0x00008a94(iVar3,0x6e - uVar2);
        local_10 = local_10 + 2;
        pbVar6 = pbVar6 + 2;
      } while (pbVar6 < (byte *)(param_1 + MEM(0x2efb)));
      return;
    }
    if (param_2 != 3) {
      return;
    }
    uVar4 = *(byte *)(param_1 * 2 + MEM(0x2f0b)) + 0x60;
    uVar2 = (uint)*(byte *)(param_1 * 2 + MEM(0x2f0a));
    func_0x00008a94(uVar4,uVar2 + 0x58);
    iVar3 = 0x66 - uVar2;
  }
  func_0x00008a94(uVar4,iVar3);
  return;
}



void FUN_0000_1952(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar2 = FUN_0000_10dc(param_2,param_3);
  iVar3 = (int)uVar2 >> 4;
  if (((iVar3 < 1) || (7 < iVar3)) || ((iVar3 == 6 && ((uVar2 & 7) != 0)))) {
    if (iVar3 == 8) {
      FUN_0000_127e(uVar2 & 7,param_1);
    }
  }
  else {
    if (*(char *)(iVar3 + MEM(0x2f16)) != '\0') {
      iVar4 = (uint)*(byte *)(iVar3 + MEM(0x2f16)) + param_1 * 2;
      FUN_0000_134a(0,1,iVar4);
      FUN_0000_134a(1,1,iVar4);
    }
    if (*(char *)(iVar3 + MEM(0x2f1e)) != '\0') {
      iVar4 = (uint)*(byte *)(iVar3 + MEM(0x2f1e)) + param_1 * 2;
      FUN_0000_134a(0,0,iVar4);
      FUN_0000_134a(1,0,iVar4);
    }
    if (iVar3 == 5) {
      FUN_0000_1786(*(undefined *)MEM(0x2f26),param_1);
    }
  }
  if ((iVar3 < 9) &&
     ((*(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (param_2 & 7) * 8 + (param_3 & 7) + SAVED_GAM(0x03b4)) & 8) !=
      0)) {
    iVar3 = param_1 * 2 + (uint)*(byte *)MEM(0x2f24);
    FUN_0000_134a(0,1,iVar3);
    FUN_0000_134a(1,1,iVar3);
  }
  if (((param_1 != 0) && (((byte)param_3 & 7) == *(byte *)SAVED_GAM(0x06be))) &&
     (((byte)param_2 & 7) == *(byte *)SAVED_GAM(0x06bf))) {
    FUN_0000_111e(param_1);
  }
  if ((param_1 == 0) && (pcVar1 = (char *)MEM(0x2f26), *pcVar1 = *pcVar1 + '\x01', 2 < *(byte *)MEM(0x2f26)))
  {
    *(undefined *)MEM(0x2f26) = 0;
  }
  return;
}



void FUN_0000_1a90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_DS;
  uint local_8;
  
  *(undefined *)MEM(0x545e) = 0xff;
  func_0x00008a52(1);
  func_0x000088a0(0);
  func_0x000088d6(0xb2,0xaf,0xe,0x60);
  func_0x00008a6c(0xb7,0x98,0x2a,0x28);
  *(undefined2 *)MEM(0x52c4) = 0;
  if ((*(char *)SAVED_GAM(0x0300) == '\0') && (*(char *)SAVED_GAM(0x0301) == '\0')) {
    func_0x000088d6(0xb7,0xb7,8,8);
  }
  else {
    uVar6 = (uint)*(byte *)SAVED_GAM(0x02f0);
    local_8 = (uint)*(byte *)SAVED_GAM(0x02f1);
    iVar2 = (uint)*(byte *)MEM(0x6603) * 2;
    iVar1 = *(int *)(iVar2 + MEM(0x24d6));
    iVar2 = *(int *)(iVar2 + MEM(0x24de));
    iVar5 = 0;
    do {
      iVar3 = FUN_0000_150a(iVar5,local_8,uVar6);
      if (iVar3 == 0) break;
      if ((iVar5 != 0) ||
         ((iVar3 = FUN_0000_10dc(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0)), iVar3 != 0xe0 &&
          (param_1 != 0)))) {
        uVar4 = (uint)*(byte *)MEM(0x6603);
        FUN_0000_1682(iVar5,0,*(byte *)(uVar4 + MEM(0x2f2c)) + local_8,*(byte *)(uVar4 + MEM(0x2f28)) + uVar6)
        ;
        uVar4 = (uint)*(byte *)MEM(0x6603);
        FUN_0000_1682(iVar5,1,local_8 - *(byte *)(uVar4 + MEM(0x2f2c)),uVar6 - *(byte *)(uVar4 + MEM(0x2f28)))
        ;
      }
      uVar6 = uVar6 + iVar1;
      local_8 = local_8 + iVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      uVar6 = uVar6 - iVar1;
      local_8 = local_8 - iVar2;
      FUN_0000_1952(iVar5,local_8,uVar6);
    }
  }
  func_0x00008a52(0);
  *(undefined2 *)MEM(0x52c4) = 0;
  return;
}



void __cdecl16near FUN_0000_1be0(void)

{
  func_0x0000a730();
  FUN_0000_1a90();
  func_0x000088fe(0xb2,0xaf,0xe,0x10,0);
  FUN_0000_1020();
  FUN_0000_01d2();
  return;
}



undefined2 FUN_0000_1c0c(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 1;
  bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) + param_2 * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
  bVar2 = bVar1 & 0xf0;
  if ((param_1 != 0) &&
     (((((bVar1 & 0xf0) != 0 || (bVar2 == 0xe0)) || (bVar2 == 0xd0)) ||
      ((bVar2 == 0xc0 || (bVar2 == 0xb0)))))) {
    local_4 = 0;
  }
  return local_4;
}



undefined2 FUN_0000_1c6a(undefined2 param_1,int param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0;
  if (param_2 < 1) {
    uVar2 = MEM(0x6c74);
  }
  else {
    uVar2 = MEM(0x6c6c);
  }
  func_0x00009680(uVar2);
  if (((param_2 < 1) || (*(char *)SAVED_GAM(0x02ef) != '\a')) && ((-1 < param_2 || (*(char *)SAVED_GAM(0x02ef) != '\0'))))
  {
    iVar3 = FUN_0000_1c0c(param_1,param_2 + (uint)*(byte *)SAVED_GAM(0x02ef));
    if (iVar3 == 0) {
      func_0x00009680(MEM(0x6c7a));
      func_0x0000c1de(0x32,1,2000,800);
    }
    else {
      pcVar1 = (char *)SAVED_GAM(0x02ef);
      *pcVar1 = *pcVar1 + (char)param_2;
      if (param_2 < 1) {
        *(undefined *)MEM(0x6602) = 4;
      }
      else {
        *(undefined *)MEM(0x6602) = 5;
      }
      FUN_0000_0134(1);
      FUN_0000_1be0();
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



void __cdecl16near FUN_0000_1d08(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)SAVED_GAM(0x02ed);
  *(undefined *)SAVED_GAM(0x02f0) = *(undefined *)(uVar1 + MEM(0x1e89));
  *(undefined *)SAVED_GAM(0x02f1) = *(undefined *)(uVar1 + MEM(0x1eb1));
  func_0x00009680(MEM(0x6c84));
  if (*(char *)SAVED_GAM(0x02ef) == '\0') {
    *(undefined *)SAVED_GAM(0x02ef) = 0;
    uVar2 = MEM(0x6c9c);
  }
  else {
    *(undefined *)SAVED_GAM(0x02ef) = 0xff;
    uVar2 = MEM(0x6c8e);
  }
  func_0x00009680(uVar2);
  *(undefined *)SAVED_GAM(0x02ed) = 0;
  return;
}



undefined2 __cdecl16near FUN_0000_1d4a(void)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00009680(MEM(0x6caa));
  iVar2 = (uint)*(byte *)MEM(0x6603) * 2;
  if (((*(int *)(iVar2 + MEM(0x24d6)) + (uint)*(byte *)SAVED_GAM(0x02f0) & 7) != (uint)*(byte *)SAVED_GAM(0x06be)) ||
     ((*(int *)(iVar2 + MEM(0x24de)) + (uint)*(byte *)SAVED_GAM(0x02f1) & 7) != (uint)*(byte *)SAVED_GAM(0x06bf))) {
    func_0x00009680(MEM(0x6cb2));
    return 0;
  }
  *(undefined *)SAVED_GAM(0x02fb) = 2;
  func_0x0000fa32();
  func_0x0000fae6();
  func_0x0000fa56();
  func_0x0000ddb6(0,*(undefined *)SAVED_GAM(0x06c1),2);
  if (*(char *)SAVED_GAM(0x02fa) == '\x05') {
    if (*(char *)SAVED_GAM(0x02ef) != '\0') {
      pcVar1 = (char *)SAVED_GAM(0x02ef);
      *pcVar1 = *pcVar1 + -1;
      goto LAB_0000_1dd1;
    }
  }
  else {
    if (*(char *)SAVED_GAM(0x02fa) != '\x06') goto LAB_0000_1dd1;
    if (*(byte *)SAVED_GAM(0x02ef) < 7) {
      pcVar1 = (char *)SAVED_GAM(0x02ef);
      *pcVar1 = *pcVar1 + '\x01';
      goto LAB_0000_1dd1;
    }
  }
  FUN_0000_1d08();
LAB_0000_1dd1:
  func_0x0000fa3e(1);
  if (*(char *)SAVED_GAM(0x02ed) != '\0') {
    FUN_0000_0134(1);
    FUN_0000_1be0();
  }
  return 0;
}



undefined2 __cdecl16near FUN_0000_1e10(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  bVar2 = false;
  bVar3 = false;
  uVar4 = FUN_0000_10dc(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
  uVar4 = uVar4 & 0xf0;
  bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                    (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
  if (((uVar4 == 0x10) || (uVar4 == 0x30)) || (((bVar1 & 8) != 0 && (*(char *)SAVED_GAM(0x0209) != '\0')))) {
    bVar2 = true;
  }
  if (((uVar4 == 0x20) || (uVar4 == 0x30)) || (uVar4 == 0x60)) {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    func_0x00009680(MEM(0x6cba));
    while ((bVar2 && (bVar3))) {
      iVar5 = func_0x0000a49c();
      if (iVar5 == 3) {
LAB_0000_1ecc:
        bVar3 = false;
      }
      else if (iVar5 == 4) {
LAB_0000_1ed4:
        bVar2 = false;
      }
      else if (iVar5 == 0x20) {
        func_0x00009680(MEM(0x6cc6));
        bVar3 = false;
        bVar2 = false;
      }
      else {
        if (iVar5 == 0x44) goto LAB_0000_1ed4;
        if (iVar5 == 0x55) goto LAB_0000_1ecc;
      }
    }
  }
  else {
    if ((!bVar2) && (!bVar3)) {
      if ((bVar1 & 8) == 0) {
        uVar6 = MEM(0x6cea);
      }
      else {
        uVar6 = MEM(0x6cd6);
      }
      func_0x00009680(uVar6);
      return 0;
    }
    func_0x00009680(MEM(0x6cce));
  }
  if (((bVar2) && (iVar5 = FUN_0000_1c6a(0,MEM(0xffff)), iVar5 != 0)) ||
     ((bVar3 && (iVar5 = FUN_0000_1c6a(0,1), iVar5 != 0)))) {
    FUN_0000_1d08();
  }
  return 1;
}


