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
  
  for (bVar1 = *(byte *)0xbcda; (*param_1 != '\0' && (bVar1 < 0x27)); bVar1 = bVar1 + 1) {
    *(char *)(bVar1 + 0xbcb2) = *param_1;
    param_1 = param_1 + 1;
  }
  *(byte *)0xbcda = bVar1;
  *(undefined *)(bVar1 + 0xbcb2) = 0;
  if (*(char *)(bVar1 + 0xbcb1) == '\n') {
    func_0x000075c0(0xbcb2);
    *(undefined *)0xbcda = 0;
  }
  return;
}



int FUN_0000_028c(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (0x14 < param_1) {
    FUN_0000_023a(*(undefined2 *)((param_1 / 10) * 2 + 0x3e2e));
    iVar1 = param_1 / 10;
    param_1 = param_1 % 10;
    if (param_1 == 0) {
      return iVar1;
    }
    FUN_0000_023a(0x82c6);
  }
  iVar1 = FUN_0000_023a(*(undefined2 *)(param_1 * 2 + 0x3e0a));
  return iVar1;
}



void FUN_0000_02d6(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (param_1 < 0xd) {
    uVar1 = *(undefined2 *)(param_1 * 2 + 0x3e40);
  }
  else if (param_1 < 0x14) {
    FUN_0000_028c(param_1);
    uVar1 = 0x831e;
  }
  else {
    FUN_0000_023a(0x8322);
    if (param_1 == 0x14) {
      uVar1 = 0x8328;
    }
    else {
      FUN_0000_023a(0x832e);
      uVar1 = *(undefined2 *)(param_1 * 2 + 0x3e18);
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
  func_0x000075c0(0x8332);
  *(undefined *)0xbcda = 0;
  FUN_0000_023a(0x8348);
  FUN_0000_02d6(*(undefined *)0x587e);
  FUN_0000_023a(0x834e);
  FUN_0000_023a(0x8358);
  FUN_0000_02d6(*(undefined *)0x587d);
  FUN_0000_023a(0x835e);
  func_0x000075c0(0x8366);
  FUN_0000_028c(*(int *)0x5874 / 100);
  FUN_0000_023a(0x8374);
  FUN_0000_028c(*(int *)0x5874 % 100);
  FUN_0000_023a(0x837e);
  FUN_0000_023a(0x55a8);
  FUN_0000_023a(0x8382);
  func_0x000075c0(0x8390);
  func_0x000075c0(0x83a0);
  func_0x000075c0(0x83b2);
  func_0x000075c0(0x83ca);
  func_0x000075c0(0x83de);
  func_0x00007a0e(1);
  func_0x000075c0(0x83ee);
  func_0x000075c0(0x8404);
  func_0x00007a0e(0);
  func_0x0000742a(0xfd);
  func_0x000075c0(0x8414);
  iVar1 = *(int *)0x5874;
  local_6 = iVar1 + -0x8b;
  uVar2 = (uint)*(byte *)0x587d;
  local_8 = uVar2 - 4;
  uVar3 = (uint)*(byte *)0x587e;
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
    FUN_0000_023a(0x8438);
    if (1 < local_6) {
      FUN_0000_023a(0x843e);
    }
    if ((local_8 != 0) || (local_4 != 0)) {
      FUN_0000_023a(0x8440);
    }
  }
  if (local_8 != 0) {
    uVar4 = func_0x00006196(local_8,local_10,10);
    FUN_0000_023a(uVar4);
    FUN_0000_023a(0x8444);
    if (1 < local_8) {
      FUN_0000_023a(0x844c);
    }
    if (local_4 != 0) {
      FUN_0000_023a(0x844e);
    }
  }
  if (local_4 != 0) {
    uVar4 = func_0x00006196(local_4,local_10,10);
    FUN_0000_023a(uVar4);
    FUN_0000_023a(0x8452);
    if (1 < local_4) {
      FUN_0000_023a(0x8458);
    }
  }
  FUN_0000_023a(0x845a);
  func_0x000075c0(0x845c);
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
  if ((*(char *)(param_3 + 0x5c5a) == '\0') ||
     ((*(byte *)(param_3 + 0x5c5c) == param_2 && (*(byte *)(param_3 + 0x5c5d) == param_1)))) {
    local_8 = 0;
  }
  else {
    uVar2 = *(byte *)(param_3 + 0x5c5c) - param_2;
    uVar5 = (int)uVar2 >> 0xf;
    uVar3 = (uint)*(byte *)(param_3 + 0x5c5d);
    uVar4 = uVar3 - param_1;
    uVar6 = (int)uVar4 >> 0xf;
    if ((int)((uVar2 ^ uVar5) - uVar5) < (int)((uVar4 ^ uVar6) - uVar6)) {
      if (param_1 < uVar3) {
        pcVar1 = (char *)(param_3 + 0x5c5d);
        *pcVar1 = *pcVar1 + -1;
      }
      else {
        pcVar1 = (char *)(param_3 + 0x5c5d);
        *pcVar1 = *pcVar1 + '\x01';
      }
    }
    else if (param_2 < *(byte *)(param_3 + 0x5c5c)) {
      pcVar1 = (char *)(param_3 + 0x5c5c);
      *pcVar1 = *pcVar1 + -1;
    }
    else {
      pcVar1 = (char *)(param_3 + 0x5c5c);
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
  if ((*(char *)(param_1 + 0x5c5a) != '\0') && (iVar1 = func_0x00007e02(1,0), iVar1 != 0)) {
    local_a = 0;
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x5c5c);
      uVar2 = (uint)*(byte *)(param_1 + 0x5c5d);
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
      if (*(char *)(uVar2 * 0x20 + uVar3 + -0x54fe) == 'D') {
        *(undefined *)(param_1 + 0x5c5c) = (char)uVar3;
        *(undefined *)(param_1 + 0x5c5d) = (char)uVar2;
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
  
  *(undefined *)0x589e = 0xff;
  func_0x00008670();
  func_0x0000cd0e(1);
  func_0x000082de(0x210,0xb0,0xac64,0x8480);
  func_0x000082de(0,1000,0xb21e,0x848e);
  iVar12 = 0;
  iVar8 = 0;
  do {
    puVar13 = (undefined2 *)(iVar8 + -0x52ec);
    puVar9 = (undefined2 *)(iVar12 + -0x539c);
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
  } while (iVar8 < 0x160);
  puVar14 = (undefined *)0x5c5a;
  puVar10 = (undefined *)0x5c5b;
  do {
    *puVar10 = 0;
    *puVar14 = 0;
    puVar14 = puVar14 + 8;
    puVar10 = puVar10 + 8;
  } while (puVar10 < (undefined *)0x5d5b);
  *(undefined *)0x5d53 = 0x7c;
  *(undefined *)0x5d52 = 0x7c;
  *(undefined *)0x5d54 = 5;
  *(undefined *)0x5d55 = 8;
  *(undefined *)0x5d58 = 0;
  func_0x00009856(0x28);
  do {
    iVar8 = FUN_0000_0510(3,5,0x1f);
  } while (iVar8 != 0);
  local_c = 0;
  if (*(char *)0x585b != '\0') {
    local_10 = (char *)0x55b3;
    local_16 = 0x55a8;
    local_18 = (undefined2 *)0x55b8;
    local_1a = (undefined2 *)0x55ba;
    local_1c = (undefined *)0x55b2;
    puVar10 = (undefined *)0x5c5a;
    do {
      if (*local_10 == 'D') {
        func_0x0000742a(10);
        func_0x000075c0(local_16);
        func_0x000075c0(0x849a);
        *local_10 = 'G';
        *local_18 = *local_1a;
        func_0x000067e0(*(undefined2 *)0x13b0);
        func_0x000068f6(0xb7,0xb7,8,8);
        func_0x00007f02(1,5000,40000,1,0x2260);
        func_0x00008670();
      }
      iVar8 = func_0x0000aae6(*local_1c,0x84a4);
      uVar4 = *(undefined *)(iVar8 + 0x1ade);
      puVar10[1] = uVar4;
      *puVar10 = uVar4;
      puVar10[2] = 5;
      puVar10[3] = 9;
      puVar10[6] = 0;
      func_0x00009856(1);
      iVar8 = FUN_0000_0510(*(undefined *)(local_c + 0x3e60),*(undefined *)(local_c + 0x3e5a),
                            local_c);
      if (iVar8 != 0) {
        uVar4 = *(undefined *)(local_c + 0x3e60);
        uVar5 = *(undefined *)(local_c + 0x3e5a);
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
    } while (local_c < *(byte *)0x585b);
  }
  func_0x00009856(0x28);
  func_0x000075c0(0xb21e);
  func_0x000075c0(0x55a8);
  func_0x000075c0(0x84ae);
  func_0x000083dc();
  func_0x000075c0(0xb23f);
  do {
    local_4 = func_0x000083dc();
    if (local_4 == 0x4e) {
      uVar6 = 0x84ba;
LAB_0000_0864:
      func_0x000075c0(uVar6);
    }
    else if (local_4 == 0x59) {
      uVar6 = 0x84b4;
      goto LAB_0000_0864;
    }
  } while ((local_4 != 0x59) && (local_4 != 0x4e));
  if (local_4 == 0x4e) {
    func_0x000075c0(0xb267);
    do {
      local_4 = func_0x000083dc();
      if (local_4 == 0x4e) {
        uVar6 = 0x84c6;
LAB_0000_089d:
        func_0x000075c0(uVar6);
      }
      else if (local_4 == 0x59) {
        uVar6 = 0x84c0;
        goto LAB_0000_089d;
      }
    } while ((local_4 != 0x59) && (local_4 != 0x4e));
  }
  if ((local_4 == 0x59) && (*(char *)0x57bf != '\0')) {
    func_0x00009856(8);
    do {
      iVar8 = FUN_0000_0510(4,5,0);
    } while (iVar8 != 0);
    do {
      iVar8 = FUN_0000_0510(5,5,0);
    } while (iVar8 != 0);
    func_0x00009856(4);
    *(undefined *)0x5c8b = 0xe;
    *(undefined *)0x5c8a = 0xe;
    *(undefined *)0x5c8c = 5;
    *(undefined *)0x5c8d = 4;
    *(undefined *)0x5c90 = 0;
    func_0x000075c0(0xb2c9);
    func_0x00009856(0x28);
    func_0x000075c0(0x84cc);
    func_0x000083dc();
    func_0x000075c0(0xb2f1);
    func_0x000083dc();
    func_0x000075c0(0xb346);
    func_0x000083dc();
    func_0x000075c0(0xb385);
    func_0x000083dc();
    func_0x000075c0(0xb3e7);
    func_0x000083dc();
    func_0x000075c0(0xb42f);
    func_0x000083dc();
    func_0x000075c0(0xb469);
    *(undefined *)0x5c8a = 8;
    *(undefined *)0x5c8b = 8;
    func_0x000083dc();
    func_0x00007f02(1,10000,50000,1,0x1450);
    *(undefined *)0x5c8a = 0;
    *(undefined *)0x5c8b = 0;
    *(undefined *)0xad99 = 0xdc;
    *(undefined *)0x5887 = 1;
    do {
      func_0x00009856(1);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + '\x01';
    } while (*(byte *)0x5887 < 0x10);
    func_0x00009856(4);
    do {
      iVar8 = FUN_0000_0510(4,5,0x1f);
    } while (iVar8 != 0);
    *(undefined *)0x5d53 = 0;
    *(undefined *)0x5d52 = 0;
    func_0x00009856(1);
    if (*(char *)0x585b != '\0') {
      puVar10 = (undefined *)0x5c5a;
      local_1c = (undefined *)0x5c5b;
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
      } while (uVar11 < *(byte *)0x585b);
    }
    *(undefined *)0x5887 = 0xf;
    do {
      func_0x00009856(1);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 != '\0');
    func_0x00006e50(4,5,0x44);
    func_0x00006992(1);
    func_0x000067e0(0);
    func_0x00006d9e();
    func_0x00006816(199,0x13f,0,0);
    func_0x00006992(0);
    FUN_0000_0000();
    FUN_0000_0326();
    return;
  }
  func_0x000075c0(0x84da);
  func_0x00009856(0x28);
  func_0x000075c0(0xb4f3);
  pcVar1 = (char *)0x5c5d;
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


