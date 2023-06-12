typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void dungeon_1040_0000(byte param_1)

{
  byte *pbVar1;
  undefined uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  undefined2 unaff_DS;
  int local_1e;
  
  func_0x00019a80(0x2c58);
  *(undefined *)0x6603 = *(undefined *)(*(byte *)0x6602 + 0x2c76);
  func_0x00019d46();
  uVar2 = *(undefined *)0x587b;
  *(undefined *)0x587b = 0xff;
  *(undefined *)0x589e = 0xff;
  uVar14 = (uint)*(byte *)0x5893;
  local_1e = uVar14 - 0x21;
  if (0 < local_1e) {
    local_1e = uVar14 - 0x22;
  }
  puVar16 = (undefined *)0xad14;
  for (iVar15 = 0x160; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar13 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar13 = 0;
  }
  func_0x0001a79e(local_1e * 0x1600 + (param_1 & 0xf) * 0x160,0x160,0xad14,0x2c6a);
  *(undefined *)0x5894 = *(undefined *)0x5893;
  bVar3 = *(byte *)0x5896;
  bVar4 = *(byte *)0x5897;
  uVar5 = *(undefined2 *)0x5c62;
  uVar6 = *(undefined2 *)0x5c64;
  uVar7 = *(undefined2 *)0x5c66;
  uVar8 = *(undefined2 *)0x5c68;
  uVar9 = *(undefined2 *)0x5c6a;
  uVar10 = *(undefined2 *)0x5c6c;
  uVar11 = *(undefined2 *)0x5c6e;
  uVar12 = *(undefined2 *)0x5c70;
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x58a0 = 0;
  func_0x0001fe6e(3,param_1);
  func_0x0001db40();
  *(undefined *)0x58a1 = 0x82;
  iVar15 = func_0x0001fe62();
  if (iVar15 == 0) {
    if (*(char *)0x58a0 == 'M') {
      func_0x0001fe7a();
    }
    *(undefined *)0x5893 = *(undefined *)0x5894;
    func_0x0001fe92(param_1 & 0xf);
    pbVar1 = (byte *)((uint)*(byte *)0x5895 * 0x40 + (uint)bVar4 * 8 + (uint)bVar3 + 0x595a);
    *pbVar1 = *pbVar1 & 0xaf;
  }
  *(byte *)0x5897 = bVar4;
  *(byte *)0x5896 = bVar3;
  *(undefined *)0x5893 = *(undefined *)0x5894;
  func_0x0001fe9e();
  *(undefined2 *)0x5c62 = uVar5;
  *(undefined2 *)0x5c64 = uVar6;
  *(undefined2 *)0x5c66 = uVar7;
  *(undefined2 *)0x5c68 = uVar8;
  *(undefined2 *)0x5c6a = uVar9;
  *(undefined2 *)0x5c6c = uVar10;
  *(undefined2 *)0x5c6e = uVar11;
  *(undefined2 *)0x5c70 = uVar12;
  *(undefined *)0x587b = uVar2;
  return;
}



void dungeon_1040_0134(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined local_8;
  
  cVar1 = *(char *)0x5c67;
  if (param_1 != 0) {
    iVar2 = func_0x0001a2c2(7,0);
    local_8 = (undefined)iVar2;
    *(undefined *)0x5c63 = local_8;
    *(undefined *)0x5c62 = local_8;
    *(undefined *)0x5c69 = 0;
    *(undefined *)0x5c68 = *(undefined *)(iVar2 + 0x1744);
    *(undefined *)0x5c67 = *(undefined *)(iVar2 + 0x173c);
    *(undefined *)0x5c66 = *(undefined *)0x5895;
    if (cVar1 != -1) {
      func_0x00018e14(*(undefined2 *)0xa9c6);
    }
    *(undefined2 *)0xa9c6 = 0;
    iVar2 = dungeon_1040_0252();
    if (iVar2 == 0) {
      *(undefined *)0x5c63 = 0;
      *(undefined *)0x5c62 = 0;
      *(undefined *)0x5c67 = 0xff;
    }
  }
  if (*(char *)0x5c67 != -1) {
    do {
      iVar2 = func_0x00018dde(*(undefined2 *)((uint)*(byte *)0x5c62 * 2 + 0x25fa));
      *(int *)0xa9c6 = iVar2;
    } while (iVar2 == 0);
  }
  return;
}



void __cdecl16near dungeon_1040_01d2(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  uVar2 = *(undefined2 *)0x5386;
  func_0x00019dc4(0);
  uVar4 = 0xc;
  func_0x00019e22(0,0xc);
  iVar3 = *(byte *)0x5895 + 1;
  func_0x00019c6e(0x20,1,iVar3,uVar4,iVar3);
  func_0x00019e22(0x17,0xc);
  cVar1 = *(char *)0x6603;
  if (cVar1 == '\0') {
    uVar4 = 0x2c7c;
  }
  else if (cVar1 == '\x01') {
    uVar4 = 0x2c82;
  }
  else if (cVar1 == '\x02') {
    uVar4 = 0x2c88;
  }
  else if (cVar1 == '\x03') {
    uVar4 = 0x2c8e;
  }
  else {
    uVar4 = 0x2c94;
  }
  func_0x00019a80(uVar4);
  func_0x00019dc4(uVar2);
  return;
}



uint __cdecl16near dungeon_1040_0252(void)

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
    bVar1 = *(byte *)0x5895;
    local_a = func_0x0001a2c2(0x3f,0);
    bVar1 = *(byte *)((uint)bVar1 * 0x40 + 0x595a + local_a) & 0xf0;
    if ((bVar1 < 0x60) || (bVar1 == 0x70)) {
      uVar4 = (int)local_a >> 0xf;
      uVar4 = ((int)((local_a ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
      if (((int)local_a % 8 != (uint)*(byte *)0x5896) && (uVar4 != *(byte *)0x5897)) {
        uVar2 = (undefined)((int)local_a % 8);
        *(undefined *)0x5c6c = uVar2;
        *(undefined *)0x5c64 = uVar2;
        local_6 = (undefined)uVar4;
        *(undefined *)0x5c6d = local_6;
        *(undefined *)0x5c65 = local_6;
        if (((*(char *)0x5c67 == '\x16') || (*(char *)0x5c67 == '\x18')) &&
           (iVar3 = func_0x0001a2c2(99,0), 0x30 < iVar3)) {
          *(undefined *)0x5c69 = 0xff;
        }
        local_a = 1;
        goto LAB_1040_02fb;
      }
    }
    local_8 = local_8 + 1;
    if (7 < local_8) {
LAB_1040_02fb:
      if (local_8 == 8) {
        *(undefined *)0x5c6d = 0xff;
        *(undefined *)0x5c65 = 0xff;
        *(undefined *)0x5c6c = 0xff;
        *(undefined *)0x5c64 = 0xff;
        local_a = 0;
      }
      return local_a;
    }
  } while( true );
}



void __cdecl16near dungeon_1040_0332(void)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)0x5386;
  func_0x00018ca0(*(undefined2 *)0x13b2,uVar1);
  func_0x00018cd6(7,0x98,0,0x28);
  func_0x00018cd6(0xbf,0x98,0xb9,0x30);
  func_0x00018ca0(*(undefined2 *)0x13b0);
  func_0x00018d40(7,0x98,7,0x28);
  func_0x00018d40(0xb8,0x98,0xb8,0x30);
  func_0x00019dc4(0);
  func_0x00019e22(0,10);
  func_0x0001ce5a();
  func_0x00019a80(0x2c9a);
  func_0x0001cefe();
  func_0x00019e22(0x17,6);
  func_0x0001ce5a();
  func_0x00019a80(0x2c9d);
  func_0x0001cefe();
  func_0x00019dc4(uVar1);
  return;
}



int __cdecl16near dungeon_1040_03d6(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  if (*(char *)0xa9fa != '\0') {
    func_0x0001ab30();
    *(undefined *)0xa9fa = 0;
  }
  func_0x000198ea(10);
  func_0x0001ce5a();
  iVar3 = 1;
  do {
    uVar1 = func_0x00019d68();
    iVar2 = func_0x0001a262(uVar1);
    if (((iVar2 != 0) && (iVar2 < 5)) && (*(int *)0x538a == 0)) {
      iVar2 = iVar2 + 0xfa;
    }
    if (iVar2 == 0) {
      dungeon_1040_1a90(iVar3);
      if (iVar3 == 0) {
        uVar4 = 0x28;
        uVar1 = 0x96;
      }
      else {
        uVar4 = 0x10;
        uVar1 = 0xaf;
      }
      func_0x00018cfe(0xb2,uVar1,0xe,uVar4,0,1);
      if (*(char *)0x6604 != '\x01') {
        iVar3 = 0;
      }
      dungeon_1040_1020();
    }
  } while (iVar2 == 0);
  return iVar2;
}



void dungeon_1040_0470(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  dungeon_1040_1be0();
  func_0x00019a80(0x2ca8);
  func_0x00019a80(0x2caf);
  func_0x00018ca0(*(undefined2 *)0x13b0);
  func_0x00018db6(0xb7,0xb7,8,8);
  func_0x0001a32a(1);
  func_0x00018db6(0xb7,0xb7,8,8);
  func_0x0001a46c(20000,500,1);
  if (param_1 < 1) {
    iVar2 = (uint)*(byte *)0x6603 * 2;
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + *(char *)(iVar2 + 0x24d6);
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + *(char *)(iVar2 + 0x24de);
  }
  else {
    iVar2 = (uint)*(byte *)0x6603 * 2;
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 - *(char *)(iVar2 + 0x24d6);
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 - *(char *)(iVar2 + 0x24de);
  }
  func_0x0001acd8();
  dungeon_1040_1be0();
  return;
}



undefined2 dungeon_1040_0502(byte param_1,int param_2)

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
      uVar2 = 0x2cef;
LAB_1040_0666:
      func_0x00019a80(uVar2);
    }
    else {
      func_0x00019a80(0x2d00);
      bVar1 = *(char *)0x6603 + 3;
LAB_1040_0642:
      *(byte *)0x6603 = bVar1 & 3;
    }
  }
  else {
    if (param_2 == 2) {
      if ((param_1 & 0xf0) != 0xe0) {
        func_0x00019a80(0x2cda);
        bVar1 = *(char *)0x6603 + 1;
        goto LAB_1040_0642;
      }
      uVar2 = 0x2cc9;
      goto LAB_1040_0666;
    }
    if (param_2 == 3) {
      func_0x00019a80(0x2cc0);
      local_6 = 1;
    }
    else {
      if (param_2 != 4) {
        func_0x00019a80(0x2d0b);
        bVar1 = *(char *)0x6603 + 2;
        goto LAB_1040_0642;
      }
      func_0x00019a80(0x2ce6);
      local_6 = -1;
    }
  }
  bVar1 = *(byte *)0x6603;
  *(byte *)0x6602 = bVar1;
  if (local_6 != 0) {
    local_4 = 1;
    local_8 = *(int *)((uint)bVar1 * 2 + 0x24d6) * local_6 + (uint)*(byte *)0x5896;
    if ((int)local_8 < 0) {
      local_8 = 7;
    }
    if (7 < (int)local_8) {
      local_8 = 0;
    }
    local_a = *(int *)((uint)*(byte *)0x6603 * 2 + 0x24de) * local_6 + (uint)*(byte *)0x5897;
    if ((int)local_a < 0) {
      local_a = 7;
    }
    if (7 < (int)local_a) {
      local_a = 0;
    }
    bVar1 = *(byte *)((uint)*(byte *)0x5895 * 0x40 + local_a * 8 + local_8 + 0x595a);
    if (bVar1 == 0x83) {
      *(undefined *)0x5896 = (byte)local_8;
      *(undefined *)0x5897 = (byte)local_a;
      dungeon_1040_0470(local_6);
      local_8 = (uint)*(byte *)0x5896;
      local_a = (uint)*(byte *)0x5897;
    }
    bVar1 = bVar1 & 0xf0;
    if (((bVar1 < 0xa1) || (0xdf < bVar1)) &&
       ((local_6 != -1 || ((bVar1 != 0xa0 && (bVar1 != 0xf0)))))) {
      if ((local_8 != *(byte *)0x5c64) || (local_a != *(byte *)0x5c65)) {
        *(undefined *)0xa9fb = 0xf;
        *(undefined *)0x24e7 = 0;
        dungeon_1040_1020();
        *(undefined *)0x24e7 = 0;
        *(byte *)0x5896 = (byte)local_8 & 7;
        *(byte *)0x5897 = (byte)local_a & 7;
        goto LAB_1040_06b6;
      }
      uVar2 = 0x2d23;
    }
    else {
      uVar2 = 0x2d19;
    }
    func_0x00019a80(uVar2);
  }
LAB_1040_06b6:
  dungeon_1040_1be0();
  return local_4;
}



undefined2 dungeon_1040_06c4(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 local_4;
  
  if (param_1 == 0xb) {
    uVar2 = 1;
    func_0x00019c6e(0x20,1,*(undefined *)0x5888);
LAB_1040_0703:
    func_0x000198ea(10,uVar2);
    return 1;
  }
  if ((int)param_1 < 0xc) {
    if (0 < (int)param_1) {
      if ((int)param_1 < 5) goto LAB_1040_0744;
      if (param_1 == 5) {
        func_0x00019a80(0x2d2d);
        iVar1 = func_0x0001a89c();
        if (iVar1 == 0x59) {
          func_0x00018aa8();
          func_0x00018524(0);
          return 1;
        }
        func_0x00019a80(0x2d3b);
        return 1;
      }
    }
LAB_1040_07bc:
    if ((param_1 < 0x30) || (0x39 < param_1)) {
      local_4 = func_0x0001b3a8(param_1);
    }
    else {
      func_0x0001c2b0(param_1);
      local_4 = 0;
    }
  }
  else {
    if (param_1 != 0xd) {
      if (param_1 == 0x13) {
        func_0x00019a80(0x2d43);
        if (*(char *)0xa9ce == '\0') {
          uVar2 = 0x2d4f;
        }
        else {
          uVar2 = 0x2d4a;
        }
        func_0x00019a80(uVar2);
        *(bool *)0xa9ce = *(char *)0xa9ce == '\0';
        return 1;
      }
      if (param_1 == 0x16) {
        uVar2 = 0xb41;
        func_0x00019a80(0x2d3e);
        goto LAB_1040_0703;
      }
      if (param_1 != 0x2e) goto LAB_1040_07bc;
    }
LAB_1040_0744:
    local_4 = dungeon_1040_0502(*(undefined *)
                             ((uint)*(byte *)0x5896 +
                              (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a),
                            param_1);
  }
  return local_4;
}



undefined2 __cdecl16near dungeon_1040_07e2(void)

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
  if (*(char *)0x5c67 != -1) {
    if (*(char *)0x5c67 != '\x1b') {
      local_c = 0;
      bVar2 = *(byte *)0x5c6d;
      bVar3 = *(byte *)0x5c6c;
      bVar4 = *(byte *)0x5c65;
      bVar5 = *(byte *)0x5c64;
      do {
        iVar6 = func_0x0001a2c2(3,0);
        uVar7 = *(int *)(iVar6 * 2 + 0x24d6) + (uint)bVar5;
        if (7 < (int)uVar7) {
          uVar7 = 0;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 7;
        }
        uVar8 = *(int *)(iVar6 * 2 + 0x24de) + (uint)bVar4;
        if (7 < (int)uVar8) {
          uVar8 = 0;
        }
        if ((int)uVar8 < 0) {
          uVar8 = 7;
        }
        bVar1 = *(byte *)(uVar8 * 8 + uVar7 + (uint)*(byte *)0x5895 * 0x40 + 0x595a) & 0xf0;
        if ((((bVar1 != 0x60) && (bVar1 != 0x80)) && (bVar1 < 0xa0)) &&
           (((uVar7 != bVar3 || (uVar8 != bVar2)) || (iVar6 = func_0x0001a2c2(7,0), iVar6 == 1)))) {
          local_e = 900;
          break;
        }
        local_c = local_c + 1;
      } while (local_c < 8);
      if (local_e == 900) {
        *(undefined *)0x5c6c = *(undefined *)0x5c64;
        *(undefined *)0x5c6d = *(undefined *)0x5c65;
        local_12 = (undefined)uVar7;
        *(undefined *)0x5c64 = local_12;
        local_14 = (undefined)uVar8;
        *(undefined *)0x5c65 = local_14;
      }
    }
    if ((*(char *)0x5c64 == *(char *)0x5896) && (*(char *)0x5c65 == *(char *)0x5897)) {
      local_10 = 1;
      *(undefined *)0x5c64 = *(undefined *)0x5c6c;
      *(undefined *)0x5c65 = *(undefined *)0x5c6d;
    }
  }
  return local_10;
}



void __cdecl16near dungeon_1040_0948(void)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 unaff_DS;
  byte *local_6;
  
  func_0x00019a80(0x2d53);
  if (*(char *)0x585b != '\0') {
    local_6 = (byte *)0x55b5;
    pcVar3 = (char *)0x55b3;
    uVar4 = 0;
    do {
      uVar2 = func_0x0001a2c2(0x1e,1);
      if ((*local_6 <= uVar2) && (*pcVar3 != 'D')) {
        *pcVar3 = 'S';
        func_0x0001ac58(uVar4);
        func_0x0001a46c(0xdac,0x32,1);
        *(undefined *)0xa9fa = 1;
      }
      local_6 = local_6 + 0x20;
      pcVar3 = pcVar3 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)0x585b);
  }
  pbVar1 = (byte *)((uint)*(byte *)0x5896 +
                    (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a);
  *pbVar1 = *pbVar1 & 8;
  return;
}



void __cdecl16near dungeon_1040_09e6(void)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  uint local_4;
  
  func_0x00019a80(0x2d61);
  local_4 = 0;
  if (*(char *)0x585b != '\0') {
    pbVar3 = (byte *)0x55b5;
    pcVar2 = (char *)0x55b3;
    do {
      uVar1 = func_0x0001a2c2(0x1e,1);
      if ((*pbVar3 <= uVar1) && (*pcVar2 != 'D')) {
        *pcVar2 = 'P';
        func_0x0001a46c(0xdac,0x32,1);
      }
      pbVar3 = pbVar3 + 0x20;
      pcVar2 = pcVar2 + 0x20;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)0x585b);
  }
  return;
}



void dungeon_1040_0a4c(byte param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  *(undefined *)0x6602 = 5;
  while (((param_1 == 0x61 || (param_1 == 0x69)) && (*(byte *)0x5895 < 8))) {
    func_0x00019a80(0x2d6a);
    func_0x00019a80(0x2d75);
    uVar4 = (uint)*(byte *)0x5896;
    iVar5 = (uint)*(byte *)0x5897 * 8;
    pbVar1 = (byte *)((uint)*(byte *)0x5895 * 0x40 + iVar5 + uVar4 + 0x595a);
    *pbVar1 = *pbVar1 & 0xf8;
    pcVar2 = (char *)0x5895;
    *pcVar2 = *pcVar2 + '\x01';
    param_1 = *(byte *)((uint)*(byte *)0x5895 * 0x40 + iVar5 + uVar4 + 0x595a);
    if (param_1 < 0x90) {
      param_1 = param_1 | 8;
      *(byte *)((uint)*(byte *)0x5895 * 0x40 + (uint)*(byte *)0x5897 * 8 + (uint)*(byte *)0x5896 +
               0x595a) = param_1;
    }
    dungeon_1040_1be0();
    func_0x00019a80(0x2d81);
    func_0x0001acd8();
  }
  if (*(char *)0x5895 == '\b') {
    *(undefined *)0x5893 = 0;
  }
  if (*(char *)0x5893 != '\0') {
    bVar3 = *(byte *)((uint)*(byte *)0x5896 +
                      (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a) & 0xf0;
    if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
      func_0x0001fe32();
      dungeon_1040_0000(*(undefined *)
                     ((uint)*(byte *)0x5896 +
                      (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a));
      if (*(char *)0x5893 == '\0') {
        return;
      }
      func_0x0001fe3e(1);
    }
    dungeon_1040_0134(1);
  }
  return;
}



void __cdecl16near dungeon_1040_0b7e(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x2d92);
  if ((*(char *)0x5c6c - 1U & 7) == *(byte *)0x5896) {
    *(undefined *)0x6602 = 1;
  }
  else if ((*(char *)0x5c6c + 1U & 7) == *(byte *)0x5896) {
    *(undefined *)0x6602 = 3;
  }
  else if ((*(char *)0x5c6d - 1U & 7) == *(byte *)0x5897) {
    *(undefined *)0x6602 = 2;
  }
  else {
    *(undefined *)0x6602 = 0;
  }
  if (*(char *)0x6602 == *(char *)0x6603) goto LAB_1040_0c22;
  func_0x00019a80(0x2d9b);
  cVar1 = *(char *)0x6602;
  if (cVar1 == '\0') {
    uVar2 = 0x2da6;
LAB_1040_0c03:
    func_0x00019a80(uVar2);
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = 0x2dac;
      goto LAB_1040_0c03;
    }
    if (cVar1 == '\x02') {
      uVar2 = 0x2db1;
      goto LAB_1040_0c03;
    }
    if (cVar1 == '\x03') {
      uVar2 = 0x2db7;
      goto LAB_1040_0c03;
    }
  }
  *(undefined *)0x6603 = *(undefined *)0x6602;
LAB_1040_0c22:
  func_0x00019a80(0x2dbc);
  dungeon_1040_1be0();
  func_0x00019d46();
  func_0x0001a32a(2);
  func_0x0001fe32();
  *(undefined *)0x58a0 = 0;
  *(undefined *)0x58a1 = 2;
  func_0x0001fe56();
  func_0x0001e1b6(0,*(undefined *)0x5c67);
  func_0x0001fe9e();
  func_0x0001fe3e(1);
  dungeon_1040_0134(1);
  if (*(char *)0x5893 != '\0') {
    dungeon_1040_1be0();
  }
  return;
}



void dungeon_1040_0c76(int param_1,byte param_2)

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
  if (*(char *)0x585b != '\0') {
    pcVar3 = (char *)0x55b3;
    uVar4 = 0;
    do {
      if ((*pcVar3 == 'S') && (iVar2 = func_0x0001a2c2(0x3f,0), iVar2 < 4)) {
        *pcVar3 = 'G';
        local_8 = local_8 + '\x01';
      }
      pcVar3 = pcVar3 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)0x585b);
  }
  if (local_8 != '\0') {
    func_0x0001ab30();
  }
  if (param_1 != 0) {
    local_a = dungeon_1040_07e2();
  }
  if (local_a != 0) {
    dungeon_1040_0b7e();
    param_2 = *(byte *)((uint)*(byte *)0x5896 +
                        (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a);
    local_4 = param_2 & 0xf0;
  }
  if ((local_4 == 0xf0) || (local_4 == 0xa0)) {
    func_0x0001fe32();
    while ((((local_4 == 0xf0 || (local_4 == 0xa0)) && (iVar2 = func_0x0001bc2c(), -1 < iVar2)) &&
           (dungeon_1040_0000(param_2), *(char *)0x5893 != '\0'))) {
      param_2 = *(byte *)((uint)*(byte *)0x5896 +
                          (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a);
      local_4 = param_2 & 0xf0;
    }
    func_0x0001fe3e(1);
    if (0x20 < *(byte *)0x5893) {
      dungeon_1040_1be0();
    }
    goto LAB_1040_0e22;
  }
  if (param_2 == 0x80) {
LAB_1040_0db0:
    dungeon_1040_0948();
  }
  else if (param_2 < 0x81) {
    if (param_2 == 0x61) {
LAB_1040_0dfa:
      dungeon_1040_0a4c(param_2);
    }
    else {
      if (param_2 != 0x62) {
        if (param_2 == 0x69) goto LAB_1040_0dfa;
        if (param_2 != 0x6a) goto LAB_1000_121f;
      }
      func_0x00019a80(0x2dc7);
      func_0x00019a80(0x2dd3);
      pbVar1 = (byte *)((uint)*(byte *)0x5896 +
                        (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a);
      *pbVar1 = *pbVar1 & 8;
LAB_1040_0dc3:
      func_0x0001acd8();
    }
  }
  else {
    if (param_2 != 0x81) {
      if (param_2 != 0x82) {
        if (param_2 == 0x88) goto LAB_1040_0db0;
        if (param_2 == 0x89) goto LAB_1040_0db6;
        if (param_2 != 0x8a) goto LAB_1000_121f;
      }
      func_0x00019a80(0x2dbf);
      goto LAB_1040_0dc3;
    }
LAB_1040_0db6:
    dungeon_1040_09e6();
  }
LAB_1000_121f:
  func_0x0001ab30();
LAB_1040_0e22:
  func_0x0001ad18();
  return;
}



void dungeon_1040_0e2e(undefined2 param_1)

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
  *(undefined *)0xbb17 = 2;
  func_0x0001fe4a();
  bVar3 = *(byte *)((uint)*(byte *)0x5896 +
                    (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a) & 0xf0;
  dungeon_1040_0332();
  dungeon_1040_01d2();
  iVar4 = *(byte *)0x5893 - 0x20;
  if (((iVar4 == 1) || (iVar4 == 4)) || (iVar4 == 5)) {
    *(undefined *)0xbb14 = 0x4f;
    *(undefined *)0xbb15 = 0x45;
    *(undefined *)0x6604 = 3;
  }
  else {
    *(undefined *)0xbb14 = 0x4d;
    *(undefined *)0xbb15 = 5;
    if ((iVar4 == 6) || (iVar4 == 7)) {
      *(undefined *)0x6604 = 2;
    }
    else {
      *(undefined *)0x6604 = 1;
    }
  }
  if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
    func_0x0001fe32();
    dungeon_1040_0000(*(undefined *)
                   ((uint)*(byte *)0x5896 +
                    (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a));
  }
  if (0x20 < *(byte *)0x5893) {
    func_0x0001fe3e(param_1);
    dungeon_1040_0134(param_1);
    dungeon_1040_1be0();
  }
  do {
    do {
      if ((iVar6 == 0) || (*(byte *)0x5893 < 0x21)) {
        if ((*(byte *)0xbb17 & 2) == 0) {
          pbVar1 = (byte *)0xbb17;
          *pbVar1 = *pbVar1 | 4;
        }
        else {
          pbVar1 = (byte *)0xbb17;
          *pbVar1 = *pbVar1 & 0xfb;
        }
        func_0x0001fe32();
        if (iVar5 < 0) {
          func_0x0001fc8e(iVar5,iVar6,in_stack_0000fff4,iVar4,bVar3,uVar7);
        }
        return;
      }
      iVar6 = 1;
      iVar5 = func_0x0001bc2c();
      if (iVar5 == 1) {
        func_0x000198ea(10);
        func_0x0001ce5a();
        func_0x00019a80(0x2ddd);
      }
      if (-1 >= iVar5) {
        iVar6 = 0;
      }
      in_stack_0000fff4 = (uint)(-1 < iVar5);
    } while (iVar5 != 0);
    if ((*(char *)0x587a == 'T') || (*(char *)0x587a == 'Q')) {
      if (*(char *)0x587a == 'Q') {
        uVar7 = uVar7 ^ 1;
        if (uVar7 != 0) goto LAB_1040_0f2e;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 1;
LAB_1040_0f2e:
      func_0x0001d1ac(1);
    }
    iVar4 = dungeon_1040_03d6();
    if (-1 < iVar4) {
      in_stack_0000fff4 = dungeon_1040_06c4(iVar4);
    }
    if (*(byte *)0x5893 < 0x21) {
      in_stack_0000fff4 = 0;
      iVar6 = 0;
    }
    bVar2 = *(byte *)((uint)*(byte *)0x5895 * 0x40 + (uint)*(byte *)0x5897 * 8 +
                      (uint)*(byte *)0x5896 + 0x595a);
    bVar3 = bVar2 & 0xf0;
    if (in_stack_0000fff4 != 0) {
      dungeon_1040_0c76(uVar7,bVar2);
    }
    if (*(byte *)0x5893 < 0x21) {
      in_stack_0000fff4 = 0;
      iVar6 = 0;
    }
  } while( true );
}



void __cdecl16near dungeon_1040_1020(void)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  pbVar1 = (byte *)0x24e7;
  *pbVar1 = *pbVar1 ^ 1;
  if ((*pbVar1 != 0) && (*(char *)0xa9fb != '\0')) {
    func_0x0001a46c(20000,*(undefined *)0xa9fb,1);
    func_0x0001c166(4,0xa9fb);
  }
  return;
}



void dungeon_1040_104c(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (uint)*(byte *)0x5893;
  if (param_1 <= *(byte *)(uVar2 + 0x2dcf)) {
    iVar1 = *(byte *)(uVar2 + 0x2dc7) + param_1;
    func_0x00019e52(0x18,0x27,*(undefined *)(iVar1 + 0x2e03),*(undefined *)(iVar1 + 0x2df7),0);
    func_0x00019dc4(0);
    func_0x00019ece(1);
    func_0x00019e22(0,0);
    func_0x000198ea(0xfd);
    func_0x00019a80(*(undefined2 *)((iVar1 + -1) * 2 + 0x2e10));
    func_0x000198ea(0xfd);
    func_0x00019ece(0);
    func_0x00019dc4(2);
    func_0x00019e52(0x18,0x27,0,0,0);
  }
  return;
}



byte dungeon_1040_10dc(uint param_1,uint param_2)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)((uint)*(byte *)0x5895 * 0x40 + (param_1 & 7) * 8 + (param_2 & 7) + 0x595a);
  if (bVar1 < 0x90) {
    bVar1 = bVar1 & 0xf7;
  }
  return bVar1;
}



void dungeon_1040_111e(int param_1)

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
  
  if (*(char *)0x587a == 'T') {
    *(undefined *)0x5c68 = *(undefined *)(*(byte *)0x5c62 + 0x1744);
  }
  uVar4 = (uint)(*(char *)0x5c69 == -1);
  bVar1 = *(byte *)0x5c68;
  uVar5 = (uint)bVar1;
  uVar6 = uVar5 & 0x60;
  local_8 = uVar5 & 0xf;
  if (*(char *)0x587a == 'T') {
    local_e = 1;
    local_6 = 1;
  }
  else {
    iVar7 = func_0x0001a2c2(100,0);
    local_6 = (uint)(iVar7 < 0x32);
    iVar7 = func_0x0001a2c2(100,0);
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
      bVar2 = *(byte *)(local_8 + 0x2e26);
      local_6 = (uint)(bVar2 >> 1);
      local_e = bVar2 & 1;
    }
  }
  if ((bVar1 & 0x90) != 0) {
    local_e = (uVar5 & 0x90) == 0x90 ^ local_6;
  }
  if (*(int *)0xa9c6 == 0) {
    func_0x00019a80(0x6c4e);
  }
  else {
    uVar3 = *(undefined2 *)(uVar4 * 8 + param_1 * 2 + 0x2e32);
    func_0x00018f7c(uVar4,uVar3,*(undefined2 *)(param_1 * 2 + 0x2e2a),local_6 * 3 + param_1 + -1,
                    *(undefined2 *)0xa9c6);
    func_0x00018e2c(uVar4,uVar3,0x60,local_e * 3 + param_1 + -1,*(undefined2 *)0xa9c6);
    local_4 = (char)uVar6;
    local_a = (char)(uVar5 & 0x90);
    *(char *)0x5c68 = local_4 + local_a + (char)local_8;
  }
  return;
}



void dungeon_1040_127e(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x52c4;
  *(undefined2 *)0x52c4 = 0;
  if (param_1 == 0) {
    iVar7 = *(int *)0x13b6;
  }
  else if (param_1 == 1) {
    iVar7 = *(int *)0x13b4;
  }
  else if (param_1 == 2) {
    iVar7 = *(int *)0x13ae;
  }
  else {
    if (param_1 != 3) goto LAB_1040_12be;
    iVar7 = *(int *)0x13b2;
  }
  func_0x00018ca0(iVar7 + 8);
LAB_1040_12be:
  if (0 < *(int *)(param_2 * 2 + 0x2e52)) {
    param_2 = param_2 * 2;
    iVar7 = *(int *)(param_2 + 0x2e52);
    iVar2 = *(int *)(param_2 + 0x2e5a);
    iVar3 = *(int *)(param_2 + 0x2e4a);
    uVar4 = *(undefined2 *)(param_2 + 0x2e42);
    do {
      iVar5 = func_0x0001a2c2(iVar3 - iVar2,uVar4);
      uVar6 = func_0x0001a2c2(iVar3,uVar4);
      func_0x00018ecc(iVar2 + iVar5,uVar6,iVar5);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined2 *)0x52c4 = uVar1;
  return;
}



void dungeon_1040_134a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_8;
  
  if ((int)param_3 < 0x1f) {
    local_8 = *(undefined2 *)((param_3 & 3) * 2 + param_1 * 8 + 0x2e62);
    if ((param_1 != 0) && ((((byte)param_3 & 0xf8) == 8 || (((byte)param_3 & 0xfc) == 0x18)))) {
      local_8 = 0x60;
    }
    if (param_1 == 0) {
      uVar3 = *(undefined2 *)0xa9c0;
      uVar2 = 0xe;
      param_2 = 0;
LAB_1040_1452:
      func_0x00018f7c(param_2,uVar2,local_8,param_3,uVar3);
      return;
    }
    uVar3 = *(undefined2 *)0xa9c0;
    uVar2 = 0xe;
    param_2 = 0;
  }
  else {
    uVar1 = param_3 + 1;
    param_3 = ((int)uVar1 >> 1) - 0x10;
    uVar1 = uVar1 & 6;
    if (param_1 == 0) {
      local_8 = *(undefined2 *)(uVar1 + 0x2e72);
    }
    else {
      local_8 = 0x60;
    }
    if ((int)param_3 < 8) {
      if (param_2 == 0) {
        uVar2 = 0x60;
      }
      else {
        uVar2 = *(undefined2 *)(uVar1 + 0x2e82);
      }
    }
    else {
      uVar2 = *(undefined2 *)(uVar1 + param_2 * 8 + 0x2e7a);
    }
    if (param_1 == 0) {
      uVar3 = *(undefined2 *)0xa9c4;
      goto LAB_1040_1452;
    }
    uVar3 = *(undefined2 *)0xa9c4;
  }
  func_0x00018e2c(param_2,uVar2,local_8,param_3,uVar3);
  return;
}



int dungeon_1040_145c(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (param_2 == 5) {
    param_2 = 0;
    func_0x0001c5de(-(param_1 * 8 + -0x14),1,0xdac,0xc80);
  }
  else {
    if (param_2 == 4) {
      if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
        uVar1 = 3;
      }
      else {
        uVar1 = 0xb;
      }
    }
    else {
      uVar1 = *(undefined2 *)0x13b2;
    }
    func_0x00018ca0(uVar1);
    func_0x00018ecc(param_4 + 1,param_3,param_4 + -1);
    func_0x00018f22(param_3 + 1,param_3 + -1,param_4);
    if (param_2 < 4) {
      func_0x00018ca0(*(int *)0x13b2 + 8);
      func_0x00018e94(param_3,param_4);
    }
    if ((param_2 != 0) || (iVar2 = func_0x0001a2c2(0x40,0), iVar2 < 4)) {
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}



undefined2 dungeon_1040_150a(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  byte local_6;
  int local_4;
  
  uVar3 = dungeon_1040_10dc(param_2,param_3);
  if (0x9f < (int)uVar3) {
    local_4 = (uint)*(byte *)(((int)uVar3 >> 4) + 0x2e80) + param_1;
    if (param_1 == 0) {
      local_4 = 0xc;
    }
    dungeon_1040_134a(0,0,local_4);
    dungeon_1040_134a(1,0,local_4);
    local_6 = (byte)uVar3;
    if ((((param_1 == 1) || (param_1 == 2)) && (*(char *)0x6604 == '\x01')) &&
       ((local_6 & 0xf0) == 0xc0)) {
      cVar2 = dungeon_1040_145c(param_1,uVar3 & 7,*(byte *)((uVar3 & 7) + param_1 * 5 + 0x2e8b) + 0xe,
                            0x5f);
      pbVar5 = (byte *)((uint)*(byte *)0x5895 * 0x40 + (param_2 & 7) * 8 + (param_3 & 7) + 0x595a);
      pbVar1 = pbVar5;
      *pbVar1 = *pbVar1 & 0xf8;
      pbVar1 = pbVar5;
      *pbVar1 = *pbVar1 + cVar2;
    }
    if (param_1 == 1) {
      if (((local_6 & 0xf0) == 0xb0) && ((uVar3 & 0xf) != 0)) {
        dungeon_1040_104c(uVar3 & 0xf);
      }
      else if ((*(char *)0x6604 == '\x03') &&
              (((local_6 & 0xf0) == 0xc0 && (iVar4 = func_0x0001a2c2(0x40,0), iVar4 < 4)))) {
        func_0x00018ca0(*(int *)0x13ae + 8);
        func_0x00018ecc(0x5d,0x57,0x5c);
        func_0x00018ecc(0x5d,0x58,0x5b);
        func_0x00018ecc(0x62,0x57,0x61);
        func_0x00018ecc(99,0x58,0x61);
      }
    }
    if (((local_6 & 0xf0) != 0xe0) || (param_1 != 0)) {
      return 0;
    }
    *(undefined2 *)0x52c4 = 1;
  }
  return 1;
}



void dungeon_1040_1682(int param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  int local_6;
  
  uVar3 = dungeon_1040_10dc(param_3,param_4);
  if ((int)uVar3 < 0xa0) {
    param_1 = param_1 + 0x10;
  }
  else {
    uVar4 = uVar3 & 0xf0;
    if (uVar4 != 0xa0) {
      if (uVar4 == 0xc0) {
        dungeon_1040_134a(param_2,0,param_1 + 0x14);
        if (1 < param_1) {
          return;
        }
        if (*(char *)0x6604 != '\x01') {
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
        cVar2 = dungeon_1040_145c(param_1,uVar3 & 7,*(byte *)((uVar3 & 7) + param_1 * 5 + 0x2e9a) + 0xe,
                              local_6);
        pbVar5 = (byte *)((uint)*(byte *)0x5895 * 0x40 + (param_3 & 7) * 8 + (param_4 & 7) + 0x595a)
        ;
        pbVar1 = pbVar5;
        *pbVar1 = *pbVar1 & 0xf8;
        pbVar1 = pbVar5;
        *pbVar1 = *pbVar1 + cVar2;
        return;
      }
      if ((uVar4 != 0xe0) && (uVar4 != 0xf0)) goto LAB_1040_1775;
    }
    param_1 = param_1 + 4;
  }
LAB_1040_1775:
  dungeon_1040_134a(param_2,0,param_1);
  return;
}



void dungeon_1040_1786(int param_1,int param_2)

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
  
  if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined2 *)0x13b2;
  }
  func_0x00018ca0(uVar7);
  if (param_2 == 0) {
    if ((*(int *)0x52c8 != 0) && (*(int *)0x52c8 != 3)) {
      func_0x00018ca0(*(int *)0x13b2 + 8);
    }
    iVar3 = param_1 * 0x10;
    local_8 = (byte *)(iVar3 + 0x2ea4);
    puVar5 = (undefined *)(iVar3 + 0x2ea5);
    do {
      uVar1 = *puVar5;
      uVar2 = (uint)*local_8;
      func_0x00018e94(uVar1,uVar2);
      func_0x00018e94(uVar1,0xbe - uVar2);
      local_8 = local_8 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 < (undefined *)(iVar3 + 0x2eb5));
    uVar4 = (uint)*(byte *)(param_1 * 2 + 0x2f11);
    uVar2 = (uint)*(byte *)(param_1 * 2 + 0x2f10);
    func_0x00018e94(uVar4,uVar2);
    iVar3 = 0xbe - uVar2;
  }
  else {
    if (param_2 == 1) {
      param_1 = param_1 * 10;
      local_c = (byte *)(param_1 + 0x2ed4);
      pbVar6 = (byte *)(param_1 + 0x2ed5);
      do {
        iVar3 = *pbVar6 + 0x60;
        uVar2 = (uint)*local_c;
        func_0x00018e94(iVar3,uVar2 + 0x48);
        func_0x00018e94(iVar3,0x76 - uVar2);
        local_c = local_c + 2;
        pbVar6 = pbVar6 + 2;
      } while (pbVar6 < (byte *)(param_1 + 11999));
      return;
    }
    if (param_2 == 2) {
      param_1 = param_1 * 8;
      local_10 = (byte *)(param_1 + 0x2ef2);
      pbVar6 = (byte *)(param_1 + 0x2ef3);
      do {
        iVar3 = *pbVar6 + 0x60;
        uVar2 = (uint)*local_10;
        func_0x00018e94(iVar3,uVar2 + 0x50);
        func_0x00018e94(iVar3,0x6e - uVar2);
        local_10 = local_10 + 2;
        pbVar6 = pbVar6 + 2;
      } while (pbVar6 < (byte *)(param_1 + 0x2efb));
      return;
    }
    if (param_2 != 3) {
      return;
    }
    uVar4 = *(byte *)(param_1 * 2 + 0x2f0b) + 0x60;
    uVar2 = (uint)*(byte *)(param_1 * 2 + 0x2f0a);
    func_0x00018e94(uVar4,uVar2 + 0x58);
    iVar3 = 0x66 - uVar2;
  }
  func_0x00018e94(uVar4,iVar3);
  return;
}



void dungeon_1040_1952(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar2 = dungeon_1040_10dc(param_2,param_3);
  iVar3 = (int)uVar2 >> 4;
  if (((iVar3 < 1) || (7 < iVar3)) || ((iVar3 == 6 && ((uVar2 & 7) != 0)))) {
    if (iVar3 == 8) {
      dungeon_1040_127e(uVar2 & 7,param_1);
    }
  }
  else {
    if (*(char *)(iVar3 + 0x2f16) != '\0') {
      iVar4 = (uint)*(byte *)(iVar3 + 0x2f16) + param_1 * 2;
      dungeon_1040_134a(0,1,iVar4);
      dungeon_1040_134a(1,1,iVar4);
    }
    if (*(char *)(iVar3 + 0x2f1e) != '\0') {
      iVar4 = (uint)*(byte *)(iVar3 + 0x2f1e) + param_1 * 2;
      dungeon_1040_134a(0,0,iVar4);
      dungeon_1040_134a(1,0,iVar4);
    }
    if (iVar3 == 5) {
      dungeon_1040_1786(*(undefined *)0x2f26,param_1);
    }
  }
  if ((iVar3 < 9) &&
     ((*(byte *)((uint)*(byte *)0x5895 * 0x40 + (param_2 & 7) * 8 + (param_3 & 7) + 0x595a) & 8) !=
      0)) {
    iVar3 = param_1 * 2 + (uint)*(byte *)0x2f24;
    dungeon_1040_134a(0,1,iVar3);
    dungeon_1040_134a(1,1,iVar3);
  }
  if (((param_1 != 0) && (((byte)param_3 & 7) == *(byte *)0x5c64)) &&
     (((byte)param_2 & 7) == *(byte *)0x5c65)) {
    dungeon_1040_111e(param_1);
  }
  if ((param_1 == 0) && (pcVar1 = (char *)0x2f26, *pcVar1 = *pcVar1 + '\x01', 2 < *(byte *)0x2f26))
  {
    *(undefined *)0x2f26 = 0;
  }
  return;
}



void dungeon_1040_1a90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_DS;
  uint local_8;
  
  *(undefined *)0x545e = 0xff;
  func_0x00018e52(1);
  func_0x00018ca0(0);
  func_0x00018cd6(0xb2,0xaf,0xe,0x60);
  func_0x00018e6c(0xb7,0x98,0x2a,0x28);
  *(undefined2 *)0x52c4 = 0;
  if ((*(char *)0x58a6 == '\0') && (*(char *)0x58a7 == '\0')) {
    func_0x00018cd6(0xb7,0xb7,8,8);
  }
  else {
    uVar6 = (uint)*(byte *)0x5896;
    local_8 = (uint)*(byte *)0x5897;
    iVar2 = (uint)*(byte *)0x6603 * 2;
    iVar1 = *(int *)(iVar2 + 0x24d6);
    iVar2 = *(int *)(iVar2 + 0x24de);
    iVar5 = 0;
    do {
      iVar3 = dungeon_1040_150a(iVar5,local_8,uVar6);
      if (iVar3 == 0) break;
      if ((iVar5 != 0) ||
         ((iVar3 = dungeon_1040_10dc(*(undefined *)0x5897,*(undefined *)0x5896), iVar3 != 0xe0 &&
          (param_1 != 0)))) {
        uVar4 = (uint)*(byte *)0x6603;
        dungeon_1040_1682(iVar5,0,*(byte *)(uVar4 + 0x2f2c) + local_8,*(byte *)(uVar4 + 0x2f28) + uVar6)
        ;
        uVar4 = (uint)*(byte *)0x6603;
        dungeon_1040_1682(iVar5,1,local_8 - *(byte *)(uVar4 + 0x2f2c),uVar6 - *(byte *)(uVar4 + 0x2f28))
        ;
      }
      uVar6 = uVar6 + iVar1;
      local_8 = local_8 + iVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      uVar6 = uVar6 - iVar1;
      local_8 = local_8 - iVar2;
      dungeon_1040_1952(iVar5,local_8,uVar6);
    }
  }
  func_0x00018e52(0);
  *(undefined2 *)0x52c4 = 0;
  return;
}



void __cdecl16near dungeon_1040_1be0(void)

{
  func_0x0001ab30();
  dungeon_1040_1a90();
  func_0x00018cfe(0xb2,0xaf,0xe,0x10,0);
  dungeon_1040_1020();
  dungeon_1040_01d2();
  return;
}



undefined2 dungeon_1040_1c0c(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 1;
  bVar1 = *(byte *)((uint)*(byte *)0x5896 + param_2 * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a);
  bVar2 = bVar1 & 0xf0;
  if ((param_1 != 0) &&
     (((((bVar1 & 0xf0) != 0 || (bVar2 == 0xe0)) || (bVar2 == 0xd0)) ||
      ((bVar2 == 0xc0 || (bVar2 == 0xb0)))))) {
    local_4 = 0;
  }
  return local_4;
}



undefined2 dungeon_1040_1c6a(undefined2 param_1,int param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0;
  if (param_2 < 1) {
    uVar2 = 0x6c74;
  }
  else {
    uVar2 = 0x6c6c;
  }
  func_0x00019a80(uVar2);
  if (((param_2 < 1) || (*(char *)0x5895 != '\a')) && ((-1 < param_2 || (*(char *)0x5895 != '\0'))))
  {
    iVar3 = dungeon_1040_1c0c(param_1,param_2 + (uint)*(byte *)0x5895);
    if (iVar3 == 0) {
      func_0x00019a80(0x6c7a);
      func_0x0001c5de(0x32,1,2000,800);
    }
    else {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + (char)param_2;
      if (param_2 < 1) {
        *(undefined *)0x6602 = 4;
      }
      else {
        *(undefined *)0x6602 = 5;
      }
      dungeon_1040_0134(1);
      dungeon_1040_1be0();
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



void __cdecl16near dungeon_1040_1d08(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)0x5893;
  *(undefined *)0x5896 = *(undefined *)(uVar1 + 0x1e89);
  *(undefined *)0x5897 = *(undefined *)(uVar1 + 0x1eb1);
  func_0x00019a80(0x6c84);
  if (*(char *)0x5895 == '\0') {
    *(undefined *)0x5895 = 0;
    uVar2 = 0x6c9c;
  }
  else {
    *(undefined *)0x5895 = 0xff;
    uVar2 = 0x6c8e;
  }
  func_0x00019a80(uVar2);
  *(undefined *)0x5893 = 0;
  return;
}



undefined2 __cdecl16near dungeon_1040_1d4a(void)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x6caa);
  iVar2 = (uint)*(byte *)0x6603 * 2;
  if (((*(int *)(iVar2 + 0x24d6) + (uint)*(byte *)0x5896 & 7) != (uint)*(byte *)0x5c64) ||
     ((*(int *)(iVar2 + 0x24de) + (uint)*(byte *)0x5897 & 7) != (uint)*(byte *)0x5c65)) {
    func_0x00019a80(0x6cb2);
    return 0;
  }
  *(undefined *)0x58a1 = 2;
  func_0x0001fe32();
  func_0x0001fee6();
  func_0x0001fe56();
  func_0x0001e1b6(0,*(undefined *)0x5c67,2);
  if (*(char *)0x58a0 == '\x05') {
    if (*(char *)0x5895 != '\0') {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + -1;
      goto LAB_1040_1dd1;
    }
  }
  else {
    if (*(char *)0x58a0 != '\x06') goto LAB_1040_1dd1;
    if (*(byte *)0x5895 < 7) {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + '\x01';
      goto LAB_1040_1dd1;
    }
  }
  dungeon_1040_1d08();
LAB_1040_1dd1:
  func_0x0001fe3e(1);
  if (*(char *)0x5893 != '\0') {
    dungeon_1040_0134(1);
    dungeon_1040_1be0();
  }
  return 0;
}



undefined2 __cdecl16near dungeon_1040_1e10(void)

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
  uVar4 = dungeon_1040_10dc(*(undefined *)0x5897,*(undefined *)0x5896);
  uVar4 = uVar4 & 0xf0;
  bVar1 = *(byte *)((uint)*(byte *)0x5896 +
                    (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8 + 0x595a);
  if (((uVar4 == 0x10) || (uVar4 == 0x30)) || (((bVar1 & 8) != 0 && (*(char *)0x57af != '\0')))) {
    bVar2 = true;
  }
  if (((uVar4 == 0x20) || (uVar4 == 0x30)) || (uVar4 == 0x60)) {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    func_0x00019a80(0x6cba);
    while ((bVar2 && (bVar3))) {
      iVar5 = func_0x0001a89c();
      if (iVar5 == 3) {
LAB_1040_1ecc:
        bVar3 = false;
      }
      else if (iVar5 == 4) {
LAB_1040_1ed4:
        bVar2 = false;
      }
      else if (iVar5 == 0x20) {
        func_0x00019a80(0x6cc6);
        bVar3 = false;
        bVar2 = false;
      }
      else {
        if (iVar5 == 0x44) goto LAB_1040_1ed4;
        if (iVar5 == 0x55) goto LAB_1040_1ecc;
      }
    }
  }
  else {
    if ((!bVar2) && (!bVar3)) {
      if ((bVar1 & 8) == 0) {
        uVar6 = 0x6cea;
      }
      else {
        uVar6 = 0x6cd6;
      }
      func_0x00019a80(uVar6);
      return 0;
    }
    func_0x00019a80(0x6cce);
  }
  if (((bVar2) && (iVar5 = dungeon_1040_1c6a(0,0xffff), iVar5 != 0)) ||
     ((bVar3 && (iVar5 = dungeon_1040_1c6a(0,1), iVar5 != 0)))) {
    dungeon_1040_1d08();
  }
  return 1;
}


