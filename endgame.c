typedef unsigned char   undefined;

typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void FUN_0000_023a(char *param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  for (bVar1 = *(byte *)DATA_OVL(0x1810); (*param_1 != '\0' && (bVar1 < 0x27)); bVar1 = bVar1 + 1) {
    *(char *)(bVar1 + DATA_OVL(0x17e8)) = *param_1;
    param_1 = param_1 + 1;
  }
  *(byte *)DATA_OVL(0x1810) = bVar1;
  *(undefined *)(bVar1 + DATA_OVL(0x17e8)) = 0;
  if (*(char *)(bVar1 + DATA_OVL(0x17e7)) == '\n') {
    func_0x000075c0(DATA_OVL(0x17e8));
    *(undefined *)DATA_OVL(0x1810) = 0;
  }
  return;
}



int FUN_0000_028c(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (0x14 < param_1) {
    FUN_0000_023a(*(undefined2 *)((param_1 / 10) * 2 + DATA_OVL(0x3e3e)));
    iVar1 = param_1 / 10;
    param_1 = param_1 % 10;
    if (param_1 == 0) {
      return iVar1;
    }
    FUN_0000_023a(MEM(0x82c6));
  }
  iVar1 = FUN_0000_023a(*(undefined2 *)(param_1 * 2 + DATA_OVL(0x3e1a)));
  return iVar1;
}



void FUN_0000_02d6(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (param_1 < 0xd) {
    uVar1 = *(undefined2 *)(param_1 * 2 + DATA_OVL(0x3e50));
  }
  else if (param_1 < 0x14) {
    FUN_0000_028c(param_1);
    uVar1 = MEM(0x831e);
  }
  else {
    FUN_0000_023a(MEM(0x8322));
    if (param_1 == 0x14) {
      uVar1 = MEM(0x8328);
    }
    else {
      FUN_0000_023a(MEM(0x832e));
      uVar1 = *(undefined2 *)(param_1 * 2 + DATA_OVL(0x3e28));
    }
  }
  FUN_0000_023a(uVar1);
  return;
}



void FUN_0000_0326(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined local_10 [8];
  int local_8;
  int local_6;
  int local_4;
  
  func_0x00007962(1,0);
  func_0x0000742a(0xfd);
  func_0x0000742a(0xfc);
  func_0x000075c0(MEM(0x8332));
  *(undefined *)DATA_OVL(0x1810) = 0;
  FUN_0000_023a(MEM(0x8348));
  FUN_0000_02d6(*(undefined *)SAVED_GAM(0x02d8));
  FUN_0000_023a(MEM(0x834e));
  FUN_0000_023a(MEM(0x8358));
  FUN_0000_02d6(*(undefined *)SAVED_GAM(0x02d7));
  FUN_0000_023a(MEM(0x835e));
  func_0x000075c0(MEM(0x8366));
  FUN_0000_028c(*(int *)SAVED_GAM(0x02ce) / 100);
  FUN_0000_023a(MEM(0x8374));
  FUN_0000_028c(*(int *)SAVED_GAM(0x02ce) % 100);
  FUN_0000_023a(MEM(0x837e));
  FUN_0000_023a(SAVED_GAM(0x0002));
  FUN_0000_023a(MEM(0x8382));
  func_0x000075c0(MEM(0x8390));
  func_0x000075c0(MEM(0x83a0));
  func_0x000075c0(MEM(0x83b2));
  func_0x000075c0(MEM(0x83ca));
  func_0x000075c0(MEM(0x83de));
  func_0x00007a0e(1);
  func_0x000075c0(MEM(0x83ee));
  func_0x000075c0(MEM(0x8404));
  func_0x00007a0e(0);
  func_0x0000742a(0xfd);
  func_0x000075c0(MEM(0x8414));
  iVar1 = *(int *)SAVED_GAM(0x02ce);
  local_6 = iVar1 + -0x8b;
  uVar2 = (uint)*(byte *)SAVED_GAM(0x02d7);
  local_8 = uVar2 - 4;
  uVar3 = (uint)*(byte *)SAVED_GAM(0x02d8);
  local_4 = uVar3 - 5;
  if (local_4 < 0) {
    local_4 = uVar3 + 0x17;
    local_8 = uVar2 - 5;
  }
  if (local_8 < 0) {
    local_8 = local_8 + 0xd;
    local_6 = iVar1 + -0x8c;
  }
  if (local_6 != 0) {
    uVar4 = func_0x00006196(local_6,local_10,10);
    FUN_0000_023a(uVar4);
    FUN_0000_023a(MEM(0x8438));
    if (1 < local_6) {
      FUN_0000_023a(MEM(0x843e));
    }
    if ((local_8 != 0) || (local_4 != 0)) {
      FUN_0000_023a(MEM(0x8440));
    }
  }
  if (local_8 != 0) {
    uVar4 = func_0x00006196(local_8,local_10,10);
    FUN_0000_023a(uVar4);
    FUN_0000_023a(MEM(0x8444));
    if (1 < local_8) {
      FUN_0000_023a(MEM(0x844c));
    }
    if (local_4 != 0) {
      FUN_0000_023a(MEM(0x844e));
    }
  }
  if (local_4 != 0) {
    uVar4 = func_0x00006196(local_4,local_10,10);
    FUN_0000_023a(uVar4);
    FUN_0000_023a(MEM(0x8452));
    if (1 < local_4) {
      FUN_0000_023a(MEM(0x8458));
    }
  }
  FUN_0000_023a(MEM(0x845a));
  func_0x000075c0(MEM(0x845c));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __cdecl16near FUN_0000_04fe(void)

{
  func_0x00009856(2);
  func_0x0000a0ae();
  func_0x00009856();
  return;
}



undefined2 FUN_0000_0510(uint param_1,uint param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  undefined2 local_8;
  
  local_8 = 1;
  param_3 = param_3 * 8;
  if ((*(char *)(param_3 + SAVED_GAM(0x06b4)) == '\0') ||
     ((*(byte *)(param_3 + SAVED_GAM(0x06b6)) == param_2 && (*(byte *)(param_3 + SAVED_GAM(0x06b7)) == param_1)))) {
    local_8 = 0;
  }
  else {
    uVar2 = *(byte *)(param_3 + SAVED_GAM(0x06b6)) - param_2;
    uVar5 = (int)uVar2 >> 0xf;
    uVar3 = (uint)*(byte *)(param_3 + SAVED_GAM(0x06b7));
    uVar4 = uVar3 - param_1;
    uVar6 = (int)uVar4 >> 0xf;
    if ((int)((uVar2 ^ uVar5) - uVar5) < (int)((uVar4 ^ uVar6) - uVar6)) {
      if (param_1 < uVar3) {
        pcVar1 = (char *)(param_3 + SAVED_GAM(0x06b7));
        *pcVar1 = *pcVar1 + -1;
      }
      else {
        pcVar1 = (char *)(param_3 + SAVED_GAM(0x06b7));
        *pcVar1 = *pcVar1 + '\x01';
      }
    }
    else if (param_2 < *(byte *)(param_3 + SAVED_GAM(0x06b6))) {
      pcVar1 = (char *)(param_3 + SAVED_GAM(0x06b6));
      *pcVar1 = *pcVar1 + -1;
    }
    else {
      pcVar1 = (char *)(param_3 + SAVED_GAM(0x06b6));
      *pcVar1 = *pcVar1 + '\x01';
    }
    FUN_0000_04fe();
  }
  return local_8;
}



void FUN_0000_05a2(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_a;
  
  param_1 = param_1 * 8;
  if ((*(char *)(param_1 + SAVED_GAM(0x06b4)) != '\0') && (iVar1 = func_0x00007e02(1,0), iVar1 != 0)) {
    local_a = 0;
    do {
      uVar3 = (uint)*(byte *)(param_1 + SAVED_GAM(0x06b6));
      uVar2 = (uint)*(byte *)(param_1 + SAVED_GAM(0x06b7));
      iVar1 = func_0x00007e02(3,0);
      if (iVar1 == 0) {
        uVar3 = uVar3 + 1;
      }
      else if (iVar1 == 1) {
        uVar3 = uVar3 - 1;
      }
      else if (iVar1 == 2) {
        uVar2 = uVar2 + 1;
      }
      else if (iVar1 == 3) {
        uVar2 = uVar2 - 1;
      }
      if (*(char *)(uVar2 * 0x20 + uVar3 + MEM(0xab02)) == 'D') {
        *(undefined *)(param_1 + SAVED_GAM(0x06b6)) = (char)uVar3;
        *(undefined *)(param_1 + SAVED_GAM(0x06b7)) = (char)uVar2;
        break;
      }
      local_a = local_a + 1;
    } while (local_a < 8);
  }
  func_0x00009856(1);
  return;
}



void __cdecl16near FUN_0000_0648(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  undefined2 unaff_DS;
  undefined *local_1c;
  undefined2 *local_1a;
  undefined2 *local_18;
  int local_16;
  char *local_10;
  uint local_c;
  int local_4;
  
  *(undefined *)SAVED_GAM(0x02f8) = 0xff;
  func_0x00008670();
  func_0x0000cd0e(1);
  func_0x000082de(MEM(0x0210),0xb0,MEM(0xac64),MEM(0x8480));
  func_0x000082de(0,1000,DATA_OVL(0x0d54),MEM(0x848e));
  iVar12 = 0;
  iVar8 = 0;
  do {
    puVar13 = (undefined2 *)(iVar8 + MEM(0xad14));
    puVar9 = (undefined2 *)(iVar12 + MEM(0xac64));
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar13;
      puVar13 = puVar13 + 1;
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar3 = *puVar2;
    }
    *(undefined *)puVar13 = *(undefined *)puVar9;
    iVar12 = iVar12 + 0x10;
    iVar8 = iVar8 + 0x20;
  } while (iVar8 < MEM(0x0160));
  puVar14 = (undefined *)SAVED_GAM(0x06b4);
  puVar10 = (undefined *)SAVED_GAM(0x06b5);
  do {
    *puVar10 = 0;
    *puVar14 = 0;
    puVar14 = puVar14 + 8;
    puVar10 = puVar10 + 8;
  } while (puVar10 < (undefined *)SAVED_GAM(0x07b5));
  *(undefined *)SAVED_GAM(0x07ad) = 0x7c;
  *(undefined *)SAVED_GAM(0x07ac) = 0x7c;
  *(undefined *)SAVED_GAM(0x07ae) = 5;
  *(undefined *)SAVED_GAM(0x07af) = 8;
  *(undefined *)SAVED_GAM(0x07b2) = 0;
  func_0x00009856(0x28);
  do {
    iVar8 = FUN_0000_0510(3,5,0x1f);
  } while (iVar8 != 0);
  local_c = 0;
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    local_10 = (char *)SAVED_GAM(0x000d);
    local_16 = SAVED_GAM(0x0002);
    local_18 = (undefined2 *)SAVED_GAM(0x0012);
    local_1a = (undefined2 *)SAVED_GAM(0x0014);
    local_1c = (undefined *)SAVED_GAM(0x000c);
    puVar10 = (undefined *)SAVED_GAM(0x06b4);
    do {
      if (*local_10 == 'D') {
        func_0x0000742a(10);
        func_0x000075c0(local_16);
        func_0x000075c0(MEM(0x849a));
        *local_10 = 'G';
        *local_18 = *local_1a;
        func_0x000067e0(*(undefined2 *)MEM(0x13b0));
        func_0x000068f6(0xb7,0xb7,8,8);
        func_0x00007f02(1,5000,40000,1,MEM(0x2260));
        func_0x00008670();
      }
      iVar8 = func_0x0000aae6(*local_1c,MEM(0x84a4));
      uVar4 = *(undefined *)(iVar8 + MEM(0x1ade));
      puVar10[1] = uVar4;
      *puVar10 = uVar4;
      puVar10[2] = 5;
      puVar10[3] = 9;
      puVar10[6] = 0;
      func_0x00009856(1);
      iVar8 = FUN_0000_0510(*(undefined *)(local_c + DATA_OVL(0x3e70)),*(undefined *)(local_c + DATA_OVL(0x3e6a)),
                            local_c);
      if (iVar8 != 0) {
        uVar4 = *(undefined *)(local_c + DATA_OVL(0x3e70));
        uVar5 = *(undefined *)(local_c + DATA_OVL(0x3e6a));
        do {
          iVar8 = FUN_0000_0510(uVar4,uVar5,local_c);
        } while (iVar8 != 0);
      }
      local_10 = local_10 + 0x20;
      local_16 = local_16 + 0x20;
      local_18 = local_18 + 0x10;
      local_1a = local_1a + 0x10;
      local_1c = local_1c + 0x20;
      puVar10 = puVar10 + 8;
      local_c = local_c + 1;
    } while (local_c < *(byte *)SAVED_GAM(0x02b5));
  }
  func_0x00009856(0x28);
  func_0x000075c0(DATA_OVL(0x0d54));
  func_0x000075c0(SAVED_GAM(0x0002));
  func_0x000075c0(MEM(0x84ae));
  func_0x000083dc();
  func_0x000075c0(DATA_OVL(0x0d75));
  do {
    local_4 = func_0x000083dc();
    if (local_4 == 0x4e) {
      uVar6 = MEM(0x84ba);
LAB_0000_0864:
      func_0x000075c0(uVar6);
    }
    else if (local_4 == 0x59) {
      uVar6 = MEM(0x84b4);
      goto LAB_0000_0864;
    }
  } while ((local_4 != 0x59) && (local_4 != 0x4e));
  if (local_4 == 0x4e) {
    func_0x000075c0(DATA_OVL(0x0d9d));
    do {
      local_4 = func_0x000083dc();
      if (local_4 == 0x4e) {
        uVar6 = MEM(0x84c6);
LAB_0000_089d:
        func_0x000075c0(uVar6);
      }
      else if (local_4 == 0x59) {
        uVar6 = MEM(0x84c0);
        goto LAB_0000_089d;
      }
    } while ((local_4 != 0x59) && (local_4 != 0x4e));
  }
  if ((local_4 == 0x59) && (*(char *)SAVED_GAM(0x0219) != '\0')) {
    func_0x00009856(8);
    do {
      iVar8 = FUN_0000_0510(4,5,0);
    } while (iVar8 != 0);
    do {
      iVar8 = FUN_0000_0510(5,5,0);
    } while (iVar8 != 0);
    func_0x00009856(4);
    *(undefined *)SAVED_GAM(0x06e5) = 0xe;
    *(undefined *)SAVED_GAM(0x06e4) = 0xe;
    *(undefined *)SAVED_GAM(0x06e6) = 5;
    *(undefined *)SAVED_GAM(0x06e7) = 4;
    *(undefined *)SAVED_GAM(0x06ea) = 0;
    func_0x000075c0(DATA_OVL(0x0dff));
    func_0x00009856(0x28);
    func_0x000075c0(MEM(0x84cc));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0e27));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0e7c));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0ebb));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0f1d));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0f65));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0f9f));
    *(undefined *)SAVED_GAM(0x06e4) = 8;
    *(undefined *)SAVED_GAM(0x06e5) = 8;
    func_0x000083dc();
    func_0x00007f02(1,10000,50000,1,MEM(0x1450));
    *(undefined *)SAVED_GAM(0x06e4) = 0;
    *(undefined *)SAVED_GAM(0x06e5) = 0;
    *(undefined *)MEM(0xad99) = 0xdc;
    *(undefined *)SAVED_GAM(0x02e1) = 1;
    do {
      func_0x00009856(1);
      pcVar1 = (char *)SAVED_GAM(0x02e1);
      *pcVar1 = *pcVar1 + '\x01';
    } while (*(byte *)SAVED_GAM(0x02e1) < 0x10);
    func_0x00009856(4);
    do {
      iVar8 = FUN_0000_0510(4,5,0x1f);
    } while (iVar8 != 0);
    *(undefined *)SAVED_GAM(0x07ad) = 0;
    *(undefined *)SAVED_GAM(0x07ac) = 0;
    func_0x00009856(1);
    if (*(char *)SAVED_GAM(0x02b5) != '\0') {
      puVar10 = (undefined *)SAVED_GAM(0x06b4);
      local_1c = (undefined *)SAVED_GAM(0x06b5);
      uVar11 = 0;
      do {
        do {
          iVar8 = FUN_0000_0510(4,5,uVar11);
        } while (iVar8 != 0);
        *local_1c = 0;
        *puVar10 = 0;
        func_0x00009856(1);
        puVar10 = puVar10 + 8;
        local_1c = local_1c + 8;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)SAVED_GAM(0x02b5));
    }
    *(undefined *)SAVED_GAM(0x02e1) = 0xf;
    do {
      func_0x00009856(1);
      pcVar1 = (char *)SAVED_GAM(0x02e1);
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 != '\0');
    func_0x00006e50(4,5,0x44);
    func_0x00006992(1);
    func_0x000067e0(0);
    func_0x00006d9e();
    func_0x00006816(199,MEM(0x013f),0,0);
    func_0x00006992(0);
    FUN_0000_0000();
    FUN_0000_0326();
    return;
  }
  func_0x000075c0(MEM(0x84da));
  func_0x00009856(0x28);
  func_0x000075c0(DATA_OVL(0x1029));
  pcVar1 = (char *)SAVED_GAM(0x06b7);
  *pcVar1 = *pcVar1 + -1;
  FUN_0000_04fe();
  do {
    iVar8 = FUN_0000_0510(6,8,2);
    iVar12 = FUN_0000_0510(1,4,0x1f);
    iVar7 = FUN_0000_0510(4,8,0);
  } while (iVar8 + iVar12 + iVar7 != 0);
  do {
    FUN_0000_05a2(1);
    FUN_0000_05a2(3);
    FUN_0000_05a2(4);
    FUN_0000_05a2(5);
  } while( true );
}


