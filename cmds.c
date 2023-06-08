typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near FUN_0000_0552(void)

{
  char *pcVar1;
  undefined uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined2 uVar10;
  uint local_8;
  
  func_0x000058d0(DATA_OVL(0x4219));
  do {
    bVar5 = func_0x000066ec();
    if (bVar5 == 0x20) break;
  } while ((bVar5 < 0x30) || (0x39 < bVar5));
  if ((bVar5 != 0x20) && (bVar5 != 0x30)) {
    func_0x0000573a((uint)bVar5);
    func_0x0000573a(10);
    iVar6 = (uint)*(byte *)SAVED_GAM(0x02d9) + (uint)bVar5;
    local_8 = iVar6 - 0x30;
    if (0x17 < (int)local_8) {
      local_8 = iVar6 - 0x47;
    }
    iVar6 = 0;
    do {
      func_0x0000bb32(*(undefined *)SAVED_GAM(0x02d9));
      func_0x00009990();
      if (*(char *)SAVED_GAM(0x1018) == 'a') {
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    uVar2 = *(undefined *)SAVED_GAM(0x02d5);
    uVar7 = (uint)*(byte *)SAVED_GAM(0x02b5);
    if (uVar7 != 0) {
      pcVar9 = (char *)SAVED_GAM(0x000d);
      uVar8 = 0;
      do {
        if (*pcVar9 == 'G') {
          *pcVar9 = 'S';
        }
        pcVar9 = pcVar9 + 0x20;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    func_0x00006980();
    func_0x000058d0(DATA_OVL(0x422e));
    func_0x00004af0(0);
    uVar10 = 0xb7;
    func_0x00004b26(0xb7,0xb7,8,8);
    cVar3 = *(char *)SAVED_GAM(0x02d9);
    while (local_8 != *(byte *)SAVED_GAM(0x02d9)) {
      func_0x00008ffc(10,uVar10);
      cVar4 = *(char *)SAVED_GAM(0x02d9);
      if ((cVar3 != cVar4) && ((cVar4 == '\x14' || (cVar4 == '\x05')))) {
        func_0x0000bb1a();
      }
      cVar3 = *(char *)SAVED_GAM(0x02d9);
      func_0x00008b04();
      func_0x00006b68();
      func_0x00006980();
      func_0x0000bb0e();
      uVar10 = MEM(0x068b);
      iVar6 = func_0x0000770e(*(undefined *)SAVED_GAM(0x02ef),*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
      if (iVar6 != 0) {
        local_8 = MEM(0xffff);
        break;
      }
      func_0x0000617a(1);
    }
    if (local_8 == MEM(0xffff)) {
      func_0x000058d0(DATA_OVL(0x423a));
    }
    uVar7 = (uint)*(byte *)SAVED_GAM(0x02b5);
    if (uVar7 != 0) {
      pcVar9 = (char *)SAVED_GAM(0x000d);
      uVar8 = 0;
      do {
        if (*pcVar9 == 'S') {
          *pcVar9 = 'G';
        }
        pcVar9 = pcVar9 + 0x20;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    *(undefined *)SAVED_GAM(0x02d5) = uVar2;
    pcVar1 = (char *)SAVED_GAM(0x02f0);
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined *)MEM(0x24e6) = 1;
    pcVar1 = (char *)SAVED_GAM(0x06b6);
    *pcVar1 = *pcVar1 + '\x01';
    func_0x00006980();
    func_0x00009990();
  }
  return;
}



undefined2 __cdecl16near FUN_0000_06ee(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((*(char *)SAVED_GAM(0x02d6) == '\x1c') || (*(char *)SAVED_GAM(0x02d6) == '\x1d')) {
    uVar1 = 1;
  }
  else {
    func_0x000058d0(DATA_OVL(0x424e));
    uVar1 = 0;
  }
  return uVar1;
}



undefined2 __cdecl16near FUN_0000_070c(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)SAVED_GAM(0x02d6);
  if ((bVar1 < 0x14) ||
     ((0x15 < bVar1 && ((bVar1 < 0x1c || ((0x1d < bVar1 && ((bVar1 < 0x28 || (0x2b < bVar1))))))))))
  {
    func_0x000058d0(DATA_OVL(0x4258));
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_0000_073e(void)

{
  int iVar1;
  
  iVar1 = FUN_0000_0788(5,4);
  if ((((iVar1 != 1) && (iVar1 = FUN_0000_0788(5,6), iVar1 != 1)) &&
      (iVar1 = FUN_0000_0788(6,5), iVar1 != 1)) && (iVar1 = FUN_0000_0788(4,5), iVar1 != 1)) {
    return 0;
  }
  return 1;
}



undefined2 FUN_0000_0788(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)(param_1 + param_2 * 0x20 + MEM(0xab02));
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + param_2 * 0x10 + MEM(0xac64));
    if ((((bVar2 == 0x1b) || (bVar2 = bVar2 & 0xfc, bVar2 == 0x1c)) || (bVar2 == 0x24)) ||
       ((bVar2 == 0x10 || (bVar2 == 0x28)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = func_0x00006ccc(cVar1,0x1c);
  }
  return uVar3;
}



undefined2 __cdecl16near FUN_0000_07f6(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 unaff_DS;
  uint local_8;
  
  if ((*(byte *)SAVED_GAM(0x02ed) < 0x21) || (0x28 < *(byte *)SAVED_GAM(0x02ed))) {
    bVar5 = func_0x0000770e(*(undefined *)SAVED_GAM(0x02ef),*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
    iVar3 = *(int *)SAVED_GAM(0x02d0);
    if ((bVar5 & 0xfe) == 0x10) {
      if (((*(char *)SAVED_GAM(0x02ed) != '\0') && (iVar7 = func_0x0000bb9e(iVar3), iVar7 != -1)) &&
         (*(int *)(iVar7 * 0x10 + SAVED_GAM(0x09c2)) != 0)) {
        uVar6 = DATA_OVL(0x426e);
        goto LAB_0000_080d;
      }
      iVar7 = FUN_0000_06ee();
      if (iVar7 == 0) {
        return 1;
      }
      func_0x000058d0(DATA_OVL(0x4276));
      bVar5 = bVar5 + 2;
LAB_0000_0875:
      *(byte *)SAVED_GAM(0x02d6) = bVar5;
    }
    else if (bVar5 == 0x1b) {
      iVar7 = FUN_0000_06ee();
      if (iVar7 == 0) {
        return 1;
      }
      func_0x000058d0(DATA_OVL(0x427d));
      *(undefined *)SAVED_GAM(0x02d6) = 0x14;
    }
    else {
      if ((bVar5 & 0xfc) == 0x28) {
        iVar7 = FUN_0000_06ee();
        if (iVar7 == 0) {
          return 1;
        }
        func_0x000058d0(DATA_OVL(0x4285));
        goto LAB_0000_0875;
      }
      if ((bVar5 & 0xfc) != 0x24) {
        func_0x000058d0(DATA_OVL(0x42cf));
        return 0;
      }
      iVar7 = FUN_0000_070c();
      if (iVar7 == 0) {
        return 1;
      }
      func_0x000058d0(DATA_OVL(0x428c));
      bVar4 = *(byte *)(iVar3 * 8 + SAVED_GAM(0x06b9));
      if (bVar4 < 10) {
        func_0x000058d0(DATA_OVL(0x4292));
      }
      *(byte *)SAVED_GAM(0x06b9) = bVar4;
      local_8 = (uint)*(byte *)(iVar3 * 8 + SAVED_GAM(0x06bb));
      if ((*(byte *)SAVED_GAM(0x02d6) & 0xfe) == 0x14) {
        pcVar1 = (char *)SAVED_GAM(0x020a);
        *pcVar1 = *pcVar1 + '\x01';
      }
      if ((*(byte *)SAVED_GAM(0x02d6) & 0xfc) == 0x28) {
        local_8 = local_8 + 1;
      }
      if (local_8 == 0) {
        func_0x000058d0(DATA_OVL(0x42b0));
      }
      *(byte *)SAVED_GAM(0x02d6) = bVar5;
      *(undefined *)SAVED_GAM(0x06bb) = (undefined)local_8;
      *(undefined *)MEM(0xa9fa) = 1;
    }
    func_0x00007af4(iVar3,0,0,0,0,0,0);
    pbVar2 = (byte *)MEM(0x24e6);
    *pbVar2 = *pbVar2 | 2;
  }
  else {
    uVar6 = DATA_OVL(0x4262);
LAB_0000_080d:
    func_0x000058d0(uVar6);
  }
  return 1;
}



void __cdecl16near FUN_0000_0962(void)

{
  byte *pbVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined2 unaff_DS;
  uint local_16;
  int local_e;
  byte local_c;
  
  if ((*(byte *)SAVED_GAM(0x02d6) < 0x20) || (0x27 < *(byte *)SAVED_GAM(0x02d6))) {
    uVar3 = DATA_OVL(0x42d6);
  }
  else {
    iVar4 = func_0x0000766c();
    if (iVar4 == 0) {
      return;
    }
    iVar4 = *(int *)SAVED_GAM(0x02d0);
    iVar6 = *(int *)SAVED_GAM(0x02d2);
    if (((iVar4 != 0) || ((*(byte *)SAVED_GAM(0x02d6) & 1) != 0)) &&
       ((iVar4 == 0 || ((*(byte *)SAVED_GAM(0x02d6) & 1) == 0)))) {
      uVar8 = (uint)*(byte *)SAVED_GAM(0x02f0);
      local_16 = (uint)*(byte *)SAVED_GAM(0x02f1);
      func_0x0000842e(300,5,200,1000);
      local_e = 0;
      while( true ) {
        uVar8 = uVar8 + iVar4;
        local_16 = local_16 + iVar6;
        uVar3 = func_0x0000770e(*(undefined *)SAVED_GAM(0x02ef),local_16,uVar8);
        iVar5 = func_0x0000bc5e(uVar3);
        if ((iVar5 != 0) && (local_c = (byte)uVar3, (local_c & 0xfc) != 0xec)) break;
        local_e = local_e + 1;
        if (2 < local_e) {
          func_0x0000bc6a(1,iVar6 * 3 + 5,iVar4 * 3 + 5,5,5);
          return;
        }
      }
      iVar4 = *(int *)SAVED_GAM(0x02d0);
      iVar6 = func_0x0000bc6a(1,((uint)*(byte *)(iVar4 * 8 + SAVED_GAM(0x06b7)) - (uint)*(byte *)SAVED_GAM(0x02f1)) + 5,
                              ((uint)*(byte *)(iVar4 * 8 + SAVED_GAM(0x06b6)) - (uint)*(byte *)SAVED_GAM(0x02f0)) + 5,5,5)
      ;
      if (iVar6 == 0) {
        return;
      }
      func_0x00009990();
      func_0x000075a2(local_16,uVar8);
      pbVar7 = (byte *)(iVar4 * 8 + SAVED_GAM(0x06b9));
      cVar2 = func_0x00006112(0x14,1);
      pbVar1 = pbVar7;
      *pbVar1 = *pbVar1 - cVar2;
      if (*pbVar7 < 0x80) {
        return;
      }
      func_0x00007af4(iVar4,0,0,0,0,0,0);
      pbVar1 = (byte *)MEM(0x24e6);
      *pbVar1 = *pbVar1 | 2;
      return;
    }
    uVar3 = DATA_OVL(0x42dd);
  }
  func_0x000058d0(uVar3);
  return;
}



void __cdecl16near FUN_0000_0aea(void)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined2 unaff_DS;
  byte bVar13;
  int iVar14;
  int local_18;
  int local_16;
  int local_14;
  int local_12;
  byte local_10;
  int local_e;
  int local_a;
  
  if ((0x20 < *(byte *)SAVED_GAM(0x02ed)) && (*(byte *)SAVED_GAM(0x02ed) < 0x29)) {
    uVar6 = DATA_OVL(0x42f4);
LAB_0000_0b01:
    func_0x000058d0(uVar6);
    return;
  }
  if (*(char *)SAVED_GAM(0x02ed) == '\0') {
    FUN_0000_0962();
    return;
  }
  func_0x00007a4c(*(undefined *)SAVED_GAM(0x03ab),*(undefined *)SAVED_GAM(0x03aa),*(undefined *)SAVED_GAM(0x03a9));
  bVar13 = *(byte *)MEM(0xab87);
  if ((bVar13 & 0xfc) == 0xb4) {
    local_16 = 0;
    iVar14 = -1;
  }
  else {
    bVar13 = *(byte *)MEM(0xaba8);
    if ((bVar13 & 0xfc) == 0xb4) {
      local_16 = 1;
    }
    else {
      bVar13 = *(byte *)MEM(0xabc7);
      if ((bVar13 & 0xfc) == 0xb4) {
        local_16 = 0;
        iVar14 = 1;
        goto LAB_0000_0b8a;
      }
      bVar13 = *(byte *)MEM(0xaba6);
      if ((bVar13 & 0xfc) != 0xb4) {
        uVar6 = DATA_OVL(0x42fb);
        goto LAB_0000_0b01;
      }
      local_16 = -1;
    }
    iVar14 = 0;
  }
LAB_0000_0b8a:
  local_14 = local_16 + (uint)*(byte *)SAVED_GAM(0x02f0);
  iVar7 = iVar14 + (uint)*(byte *)SAVED_GAM(0x02f1);
  iVar8 = local_16 + 5;
  iVar9 = iVar14 + 5;
  bVar5 = bVar13 & 3;
  if (bVar5 == 0) {
    local_16 = 0;
    iVar14 = -1;
    goto LAB_0000_0bee;
  }
  if (bVar5 == 1) {
    local_16 = 1;
  }
  else {
    if (bVar5 == 2) {
      local_16 = 0;
      iVar14 = 1;
      goto LAB_0000_0bee;
    }
    if (bVar5 != 3) goto LAB_0000_0bee;
    local_16 = -1;
  }
  iVar14 = 0;
LAB_0000_0bee:
  func_0x000058d0(DATA_OVL(0x4302),bVar13,iVar14,iVar7);
  func_0x0000842e(300,5,200,1000);
  func_0x0000bb56();
  bVar3 = false;
  bVar4 = false;
  local_18 = 5;
  local_12 = iVar9;
  local_e = iVar8;
  while (((!bVar3 && (!bVar4)) && (local_18 = local_18 + -1, 0 < local_18))) {
    local_14 = local_14 + local_16;
    iVar7 = iVar7 + iVar14;
    local_e = local_e + local_16;
    local_12 = local_12 + iVar14;
    iVar10 = func_0x00007782(*(undefined *)SAVED_GAM(0x02ef),iVar7,local_14);
    if (iVar10 == 0) {
      pbVar11 = (byte *)func_0x00008482(iVar7,local_14);
      bVar13 = *pbVar11;
      if ((0x96 < bVar13) && ((bVar13 < 0x9a || ((0xb7 < bVar13 && (bVar13 < 0xbc)))))) {
        bVar3 = true;
      }
    }
    else if ((((0x1b < iVar10) && (local_10 = (byte)iVar10, (local_10 & 0xf8) != 0x78)) &&
             ((local_10 & 0xfc) != 0x2f)) || ((iVar10 == 0x10 || (iVar10 == 0x11)))) {
      bVar4 = true;
      local_a = *(int *)SAVED_GAM(0x02d0);
    }
  }
  func_0x0000bc6a(1,local_12,local_e,iVar9,iVar8);
  if ((bVar3) || (bVar4)) {
    func_0x000075a2(iVar7,local_14);
  }
  if (bVar3) {
    func_0x000058d0(DATA_OVL(0x430a));
    puVar12 = (undefined *)func_0x00008482(iVar7,local_14);
    *puVar12 = 0x44;
    *(undefined *)MEM(0x24e6) = 1;
    *(undefined *)SAVED_GAM(0x03a9) = 0;
  }
  if ((bVar4) && (local_a != 0)) {
    func_0x00007af4(local_a,0,0,0,0,0,0);
    pbVar1 = (byte *)MEM(0x24e6);
    *pbVar1 = *pbVar1 | 2;
    if (*(byte *)SAVED_GAM(0x02e2) < 6) {
      *(undefined *)SAVED_GAM(0x02e2) = 0;
    }
    else {
      pcVar2 = (char *)SAVED_GAM(0x02e2);
      *pcVar2 = *pcVar2 + -5;
    }
    iVar14 = func_0x0000bb9e(local_a);
    if (iVar14 == -1) {
      return;
    }
    func_0x0000bb86(iVar14);
    func_0x0000bb92(iVar14);
  }
  if ((bVar4) && (local_a == 0)) {
    func_0x00006b28();
  }
  return;
}



void __cdecl16near FUN_0000_0ddc(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_22 [16];
  
  func_0x000058d0(DATA_OVL(0x4328));
  iVar3 = func_0x00006f0e();
  if (iVar3 == -1) {
    uVar4 = DATA_OVL(0x4330);
  }
  else {
    func_0x000058d0(iVar3 * 0x20 + SAVED_GAM(0x0002));
    if (iVar3 == 0) {
      func_0x000058d0(DATA_OVL(0x4339));
      func_0x000058d0(SAVED_GAM(0x0002));
      uVar4 = DATA_OVL(0x433c);
    }
    else {
      func_0x000058d0(DATA_OVL(0x4349));
      iVar5 = func_0x00006f0e();
      if (iVar5 == -1) {
        uVar4 = DATA_OVL(0x4350);
      }
      else {
        func_0x000058d0(iVar5 * 0x20 + SAVED_GAM(0x0002));
        if (iVar5 != 0) {
          func_0x000058d0(DATA_OVL(0x4369));
          puVar6 = (undefined2 *)(iVar3 * 0x20 + SAVED_GAM(0x0002));
          puVar7 = local_22;
          puVar8 = puVar6;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          puVar8 = (undefined2 *)(iVar5 * 0x20 + SAVED_GAM(0x0002));
          puVar7 = puVar8;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar6;
            puVar6 = puVar6 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          puVar7 = local_22;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar8;
            puVar8 = puVar8 + 1;
            puVar1 = puVar7;
            puVar7 = puVar7 + 1;
            *puVar2 = *puVar1;
          }
          *(undefined *)MEM(0xa9fa) = 1;
          return;
        }
        func_0x000058d0(DATA_OVL(0x4359));
        func_0x000058d0(SAVED_GAM(0x0002));
        uVar4 = DATA_OVL(0x435c);
      }
    }
  }
  func_0x000058d0(uVar4);
  return;
}



void __cdecl16near FUN_0000_0eb4(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined2 unaff_DS;
  char local_a;
  char local_4;
  
  if ((*(byte *)SAVED_GAM(0x02ed) < 0x20) && (0x29 < *(byte *)SAVED_GAM(0x02ed))) {
    uVar4 = DATA_OVL(0x436c);
    goto LAB_0000_0ecc;
  }
  pbVar5 = (byte *)func_0x00008482(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
  bVar2 = *pbVar5;
  bVar3 = *(byte *)SAVED_GAM(0x02d6) & 0xfc;
  if (bVar3 == 0x10) {
    func_0x000058d0(DATA_OVL(0x43b4));
    local_4 = *(char *)SAVED_GAM(0x02d6) + -2;
LAB_0000_0f43:
    *(undefined *)SAVED_GAM(0x02d6) = 0x1c;
LAB_0000_0ff4:
    iVar6 = func_0x00007964();
    func_0x00007af4(iVar6,*(undefined *)SAVED_GAM(0x06b9),*(undefined *)SAVED_GAM(0x02ef),*(undefined *)SAVED_GAM(0x02f1),
                    *(undefined *)SAVED_GAM(0x02f0),local_4,local_4);
    *(char *)(iVar6 * 8 + SAVED_GAM(0x06bb)) = local_a;
    func_0x00006980();
  }
  else {
    if (bVar3 == 0x14) {
      iVar6 = FUN_0000_073e();
      if ((iVar6 != 0) || (iVar6 = func_0x00006ccc(bVar2,0x1c), iVar6 != 0)) {
        func_0x000058d0(DATA_OVL(0x438d));
        local_4 = '\x1b';
        goto LAB_0000_0f43;
      }
      iVar6 = FUN_0000_073e();
      if (iVar6 == 0) {
        uVar4 = DATA_OVL(0x4396);
      }
      else {
        uVar4 = DATA_OVL(0x43a8);
      }
    }
    else if (bVar3 == 0x1c) {
      uVar4 = DATA_OVL(0x4378);
    }
    else {
      if (bVar3 != 0x20) {
        if (bVar3 == 0x24) {
          func_0x000058d0(DATA_OVL(0x43e2));
          iVar6 = FUN_0000_073e();
          if (iVar6 == 0) {
            if (*(char *)SAVED_GAM(0x06bb) != '\0') {
              local_4 = *(char *)SAVED_GAM(0x02d6);
              pcVar1 = (char *)SAVED_GAM(0x02d6);
              *pcVar1 = *pcVar1 + '\x04';
              local_a = *(char *)SAVED_GAM(0x06bb) + -1;
              goto LAB_0000_0ff4;
            }
            if (*(char *)SAVED_GAM(0x020a) == '\0') {
              uVar4 = DATA_OVL(0x43e9);
              goto LAB_0000_0ecc;
            }
            pcVar1 = (char *)SAVED_GAM(0x020a);
            *pcVar1 = *pcVar1 + -1;
            local_4 = *(char *)SAVED_GAM(0x02d6);
            *(undefined *)SAVED_GAM(0x02d6) = 0x14;
          }
          else {
            local_4 = *(char *)SAVED_GAM(0x02d6);
            *(undefined *)SAVED_GAM(0x02d6) = 0x1c;
          }
          local_a = *(char *)SAVED_GAM(0x06bb);
        }
        else if (bVar3 == 0x28) {
          iVar6 = FUN_0000_073e();
          if (iVar6 == 0) {
            uVar4 = DATA_OVL(0x43bc);
          }
          else {
            if ((bVar2 & 0xfe) != 0x6a) {
              func_0x000058d0(DATA_OVL(0x43da));
              local_4 = *(char *)SAVED_GAM(0x02d6);
              goto LAB_0000_0f43;
            }
            uVar4 = DATA_OVL(0x43ce);
          }
          goto LAB_0000_0ecc;
        }
        goto LAB_0000_0ff4;
      }
      uVar4 = DATA_OVL(0x437f);
    }
LAB_0000_0ecc:
    func_0x000058d0(uVar4);
  }
  return;
}



undefined2 FUN_0000_1030(undefined2 param_1)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_DS;
  undefined local_a;
  
  if (((*(char *)SAVED_GAM(0x02ed) == '\x1e') || (*(char *)SAVED_GAM(0x02ed) == '\x1f')) || (*(char *)SAVED_GAM(0x02ed) == ' ')) {
    iVar9 = 0;
    puVar6 = (undefined2 *)DATA_OVL(0x445a);
    do {
      iVar3 = func_0x0000af9e(param_1,*puVar6);
      if (-1 < iVar3) break;
      puVar6 = puVar6 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    if (((iVar9 != 3) && (1 < *(byte *)SAVED_GAM(0x02f1))) && (*(char *)(iVar9 + SAVED_GAM(0x0322)) != -1)) {
      iVar3 = 0;
      pcVar7 = (char *)SAVED_GAM(0x06b4);
      do {
        if (*pcVar7 == -4) {
          uVar4 = func_0x000058d0(DATA_OVL(0x4428));
          return uVar4;
        }
        pcVar7 = pcVar7 + 8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      local_a = (undefined)iVar9;
      *(undefined *)SAVED_GAM(0x0325) = local_a;
      iVar3 = func_0x00007964();
      func_0x00007af4(iVar3,0,*(undefined *)SAVED_GAM(0x02ef),*(byte *)SAVED_GAM(0x02f1) - 2,*(undefined *)SAVED_GAM(0x02f0),0xfc,
                      0xfc);
      iVar9 = 0x1f;
      do {
        iVar5 = iVar9;
        if (*(char *)(iVar5 + SAVED_GAM(0x0ff8)) == '\0') break;
        iVar9 = iVar5 + -1;
        iVar5 = 0x1f;
      } while (-1 < iVar9);
      iVar9 = iVar5 * 0x10;
      *(undefined2 *)(iVar9 + SAVED_GAM(0x09b8)) = 1;
      *(int *)(iVar9 + SAVED_GAM(0x09c4)) = iVar3;
      *(uint *)(iVar9 + SAVED_GAM(0x09ba)) = (uint)*(byte *)SAVED_GAM(0x02f0);
      *(int *)(iVar9 + SAVED_GAM(0x09bc)) = *(byte *)SAVED_GAM(0x02f1) - 2;
      *(uint *)(iVar9 + SAVED_GAM(0x09be)) = (uint)*(byte *)SAVED_GAM(0x02ef);
      puVar6 = (undefined2 *)(iVar9 + SAVED_GAM(0x07c4));
      for (iVar9 = 2; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = 0;
      }
      cVar1 = *(char *)SAVED_GAM(0x02f1);
      iVar9 = 0;
      do {
        iVar8 = iVar5 * 0x10 + iVar9;
        *(undefined *)(iVar8 + SAVED_GAM(0x07b8)) = 6;
        *(undefined *)(iVar8 + SAVED_GAM(0x07bb)) = *(undefined *)SAVED_GAM(0x02f0);
        *(char *)(iVar8 + SAVED_GAM(0x07be)) = cVar1 + -2;
        *(undefined *)(iVar8 + SAVED_GAM(0x07c1)) = *(undefined *)SAVED_GAM(0x02ef);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      *(undefined *)(iVar5 + SAVED_GAM(0x0ff8)) = 0xfc;
      func_0x000058d0(DATA_OVL(0x4435));
      func_0x00006212(2,2000,30000,1,MEM(0x28a0));
      iVar3 = iVar3 * 8;
      *(undefined *)(iVar3 + SAVED_GAM(0x06b5)) = 0x16;
      *(undefined *)(iVar3 + SAVED_GAM(0x06b4)) = 0x16;
      func_0x000050e8(3,5,MEM(0x01fc));
      *(undefined *)(iVar3 + SAVED_GAM(0x06b5)) = 0xfc;
      *(undefined *)(iVar3 + SAVED_GAM(0x06b4)) = 0xfc;
      return 0;
    }
    uVar4 = DATA_OVL(0x441b);
  }
  else {
    uVar4 = DATA_OVL(0x444c);
  }
  uVar4 = func_0x000058d0(uVar4);
  return uVar4;
}



void FUN_0000_1202(uint param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined local_12 [16];
  
  func_0x000058d0(DATA_OVL(0x4460));
  func_0x00007b9c(0xf,local_12);
  iVar2 = func_0x0000af9e(local_12,*(undefined2 *)(param_3 * 2 + MEM(0x1f4e)));
  bVar5 = iVar2 != -1;
  iVar2 = 3;
  do {
    func_0x000058d0(DATA_OVL(0x4489));
    func_0x00007b9c(0xf,local_12);
    iVar3 = func_0x0000af9e(local_12,*(undefined2 *)(param_3 * 2 + MEM(0x1f5e)));
    if (iVar3 == -1) {
      bVar5 = false;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (((bVar5) && (*(byte *)(param_3 + MEM(0x1f6e)) == param_2)) &&
     (*(byte *)(param_3 + MEM(0x1f76)) == param_1)) {
    pbVar1 = (byte *)(param_3 + SAVED_GAM(0x0332));
    *pbVar1 = *pbVar1 & 0x7f;
    func_0x000058d0(DATA_OVL(0x4492));
    func_0x000070f2();
    puVar4 = (undefined *)func_0x00008482(param_1,param_2);
    *puVar4 = 0x19;
    pbVar1 = (byte *)MEM(0x24e6);
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    func_0x0000573a(10);
  }
  return;
}



void FUN_0000_12c8(undefined2 param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined2 *local_e;
  char local_c;
  int local_6;
  
  bVar2 = false;
  iVar5 = 0;
  local_e = (undefined2 *)DATA_OVL(0x4512);
  do {
    uVar3 = func_0x0000af9e(param_1,*local_e);
    if (uVar3 < MEM(0x8000)) {
      func_0x000058d0(DATA_OVL(0x44e7));
      func_0x000070f2();
      local_c = *(char *)MEM(0xaba6);
      if (((*(char *)(iVar5 + DATA_OVL(0x4522)) == local_c) || (local_c == -0x21)) || (local_c == '\x1a')) {
        local_6 = -1;
LAB_0000_1315:
        iVar6 = 0;
      }
      else {
        local_c = *(char *)MEM(0xabc7);
        if (((*(char *)(iVar5 + DATA_OVL(0x4522)) == local_c) || (local_c == -0x21)) || (local_c == '\x1a')) {
          local_6 = 0;
          iVar6 = 1;
        }
        else {
          local_c = *(char *)MEM(0xaba8);
          if (((*(char *)(iVar5 + DATA_OVL(0x4522)) == local_c) || (local_c == -0x21)) || (local_c == '\x1a'))
          {
            local_6 = 1;
            goto LAB_0000_1315;
          }
          local_c = *(char *)MEM(0xab87);
          if (((*(char *)(iVar5 + DATA_OVL(0x4522)) != local_c) && (local_c != -0x21)) && (local_c != '\x1a'))
          break;
          local_6 = 0;
          iVar6 = -1;
        }
      }
      if (local_c == '\x1a') {
        FUN_0000_1202(iVar6 + (uint)*(byte *)SAVED_GAM(0x02f1),local_6 + (uint)*(byte *)SAVED_GAM(0x02f0),iVar5);
        return;
      }
      if ((local_6 + (uint)*(byte *)SAVED_GAM(0x02f0) == (uint)*(byte *)(iVar5 + MEM(0x1eaa))) &&
         (iVar6 + (uint)*(byte *)SAVED_GAM(0x02f1) == (uint)*(byte *)(iVar5 + MEM(0x1ed2)))) {
        pbVar1 = (byte *)((int)&SUB_0000_58d0 + iVar5);
        *pbVar1 = *pbVar1 ^ 0x80;
        pbVar4 = (byte *)func_0x00008482(iVar6 + (uint)*(byte *)SAVED_GAM(0x02f1),
                                         local_6 + (uint)*(byte *)SAVED_GAM(0x02f0));
        pbVar1 = pbVar4;
        *pbVar1 = *pbVar1 ^ *(byte *)(iVar5 + DATA_OVL(0x4522)) ^ 0xdf;
        pbVar1 = (byte *)MEM(0x24e6);
        *pbVar1 = *pbVar1 | 2;
      }
      bVar2 = true;
      break;
    }
    local_e = local_e + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  if (!bVar2) {
    func_0x000058d0(DATA_OVL(0x4504));
  }
  return;
}



undefined2 __cdecl16near FUN_0000_1418(void)

{
  char *pcVar1;
  undefined2 unaff_DS;
  undefined2 local_24;
  char local_22 [32];
  
  local_24 = 1;
  if (((*(byte *)SAVED_GAM(0x02d6) & 0xf8) == 0x20) && (*(byte *)SAVED_GAM(0x02ed) < 0x80)) {
    if ((*(byte *)SAVED_GAM(0x02d6) & 0xfc) == 0x20) {
      local_24 = func_0x000058d0(DATA_OVL(0x452a));
      pcVar1 = (char *)SAVED_GAM(0x02d6);
      *pcVar1 = *pcVar1 + '\x04';
    }
    else {
      local_24 = func_0x000058d0(DATA_OVL(0x4531));
      pcVar1 = (char *)SAVED_GAM(0x02d6);
      *pcVar1 = *pcVar1 + -4;
    }
  }
  else {
    func_0x000058d0(DATA_OVL(0x4539));
    func_0x00007b9c(0x1e,local_22);
    if (local_22[0] == '\0') {
      local_24 = func_0x000058d0(DATA_OVL(0x4541));
    }
    else {
      func_0x0000573a(10);
      if ((*(char *)SAVED_GAM(0x02ed) == '\0') || (0x20 < *(byte *)SAVED_GAM(0x02ed))) {
        if (*(char *)SAVED_GAM(0x02ed) == '\0') {
          FUN_0000_12c8(local_22);
        }
        else {
          func_0x000058d0(DATA_OVL(0x454a));
        }
      }
      else {
        local_24 = FUN_0000_1030(local_22);
      }
    }
  }
  return local_24;
}



undefined2 FUN_0000_14ba(byte param_1)

{
  if (param_1 < 0xa7) {
    if (((param_1 < 0xa5) && (param_1 != 0x5b)) && ((param_1 < 0x90 || (0x93 < param_1)))) {
      return 0;
    }
  }
  else {
    if (param_1 < 0xa8) {
      return 0;
    }
    if (0xa9 < param_1) {
      if (param_1 < 0xad) {
        return 0;
      }
      if (0xaf < param_1) {
        if (param_1 < 0xb4) {
          return 0;
        }
        if (0xb7 < param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}



uint FUN_0000_1504(int param_1,uint param_2,int param_3,int param_4)

{
  if ((param_4 == 1) && (param_3 == 0)) {
    param_2 = param_2 + 1;
  }
  if ((param_4 == 0) && (param_3 == 1)) {
    param_2 = param_2 + 2;
  }
  if ((param_4 == -1) && (param_3 == 0)) {
    param_2 = param_2 + 3;
  }
  if (param_1 != 0) {
    param_2 = param_2 ^ 2;
  }
  return param_2;
}



void FUN_0000_1548(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined param_7,byte param_8)

{
  undefined uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  
  func_0x000058d0(DATA_OVL(0x4557));
  pbVar2 = (byte *)func_0x00008482(param_3,param_4);
  *pbVar2 = param_8;
  puVar3 = (undefined *)func_0x00008482(param_5,param_6);
  *puVar3 = param_7;
  param_8 = param_8 & 0xfc;
  if ((param_8 == 0x90) || (param_8 == 0xb4)) {
    uVar1 = FUN_0000_1504(0,param_8,param_1,param_2);
    puVar3 = (undefined *)func_0x00008482(param_3,param_4);
    *puVar3 = uVar1;
  }
  return;
}



void FUN_0000_15b0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,byte param_7,undefined param_8)

{
  undefined uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  
  func_0x000058d0(DATA_OVL(0x4560));
  pbVar2 = (byte *)func_0x00008482(param_5,param_6);
  *pbVar2 = param_7;
  puVar3 = (undefined *)func_0x00008482(param_3,param_4);
  *puVar3 = param_8;
  param_7 = param_7 & 0xfc;
  if ((param_7 == 0x90) || (param_7 == 0xb4)) {
    uVar1 = FUN_0000_1504(1,param_7,param_1,param_2);
    puVar3 = (undefined *)func_0x00008482(param_5,param_6);
    *puVar3 = uVar1;
  }
  return;
}



void __cdecl16near FUN_0000_161a(void)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  undefined2 uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  undefined2 unaff_DS;
  char local_18;
  char local_12;
  undefined local_e;
  undefined local_c;
  
  func_0x00007a4c(*(undefined *)SAVED_GAM(0x03ab),*(undefined *)SAVED_GAM(0x03aa),*(undefined *)SAVED_GAM(0x03a9));
  iVar7 = func_0x0000766c();
  if (iVar7 == 0) {
    return;
  }
  iVar7 = *(int *)SAVED_GAM(0x02d0);
  iVar2 = *(int *)SAVED_GAM(0x02d2);
  if (0x7f < *(byte *)SAVED_GAM(0x02ed)) {
    local_c = *(undefined *)SAVED_GAM(0x02f0);
    local_e = *(undefined *)SAVED_GAM(0x02f1);
    iVar15 = (uint)*(byte *)SAVED_GAM(0x02f8) * 8;
    *(undefined *)SAVED_GAM(0x02f0) = *(undefined *)(iVar15 + DATA_OVL(0x1550));
    *(undefined *)SAVED_GAM(0x02f1) = *(undefined *)(iVar15 + DATA_OVL(0x1551));
  }
  iVar15 = iVar7 + (uint)*(byte *)SAVED_GAM(0x02f0);
  iVar8 = iVar2 + (uint)*(byte *)SAVED_GAM(0x02f1);
  if ((0x7f < *(byte *)SAVED_GAM(0x02ed)) && (iVar9 = func_0x0000bf3a(iVar8,iVar15), iVar9 != 0)) {
    return;
  }
  pbVar10 = (byte *)func_0x00008482(iVar8,iVar15);
  bVar3 = *pbVar10;
  iVar9 = func_0x0000770e(*(undefined *)SAVED_GAM(0x02ef),iVar8,iVar15);
  if ((iVar9 == 0) && (iVar9 = FUN_0000_14ba(bVar3), iVar9 != 0)) {
    if ((bVar3 & 0xfc) == 0xb4) {
      cVar6 = 'E';
    }
    else {
      cVar6 = 'D';
    }
    iVar9 = iVar15 + iVar7;
    iVar12 = iVar8 + iVar2;
    pcVar13 = (char *)func_0x00008482(iVar12,iVar9);
    cVar4 = *pcVar13;
    pcVar13 = (char *)func_0x00008482(*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0));
    cVar5 = *pcVar13;
    iVar14 = func_0x0000770e(*(undefined *)SAVED_GAM(0x02ef),iVar12,iVar9);
    if ((iVar14 == 0) && (cVar4 == cVar6)) {
      FUN_0000_1548(iVar2,iVar7,iVar12,iVar9,iVar8,iVar15,cVar4,bVar3);
    }
    else {
      if (cVar5 != cVar6) {
        uVar11 = DATA_OVL(0x4577);
        goto LAB_0000_16d3;
      }
      FUN_0000_15b0(iVar2,iVar7,iVar8,iVar15,*(undefined *)SAVED_GAM(0x02f1),*(undefined *)SAVED_GAM(0x02f0),bVar3,cVar5);
    }
    local_12 = (char)iVar7;
    pcVar1 = (char *)SAVED_GAM(0x02f0);
    *pcVar1 = *pcVar1 + local_12;
    local_18 = (char)iVar2;
    pcVar1 = (char *)SAVED_GAM(0x02f1);
    *pcVar1 = *pcVar1 + local_18;
    *(undefined *)MEM(0x24e6) = 1;
    if (0x7f < *(byte *)SAVED_GAM(0x02ed)) {
      iVar7 = (uint)*(byte *)SAVED_GAM(0x02f8) * 8;
      bVar3 = *(byte *)(iVar7 + DATA_OVL(0x154d));
      pcVar1 = (char *)(iVar7 + DATA_OVL(0x1550));
      *pcVar1 = *pcVar1 + local_12;
      pcVar1 = (char *)(iVar7 + DATA_OVL(0x1551));
      *pcVar1 = *pcVar1 + local_18;
      iVar7 = (uint)bVar3 * 8;
      pcVar1 = (char *)(iVar7 + SAVED_GAM(0x06b6));
      *pcVar1 = *pcVar1 + local_12;
      pcVar1 = (char *)(iVar7 + SAVED_GAM(0x06b7));
      *pcVar1 = *pcVar1 + local_18;
      *(undefined *)SAVED_GAM(0x02f0) = local_c;
      *(undefined *)SAVED_GAM(0x02f1) = local_e;
      func_0x00009990();
    }
  }
  else {
    uVar11 = DATA_OVL(0x4569);
LAB_0000_16d3:
    func_0x000058d0(uVar11);
  }
  return;
}



int __cdecl16near FUN_0000_17ec(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_6;
  
  func_0x000058d0(DATA_OVL(0x4584));
  local_6 = 0;
  pbVar4 = (byte *)DATA_OVL(0x154c);
  bVar1 = false;
  iVar3 = 0;
  do {
    if ((*pbVar4 & 0xa0) == 0x80) {
      bVar1 = true;
      break;
    }
    pbVar4 = pbVar4 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (bVar1) {
    if ((*(byte *)SAVED_GAM(0x02fb) & 0x80) == 0) {
      if (*(char *)SAVED_GAM(0x02fd) != '\0') goto LAB_0000_184d;
      uVar2 = DATA_OVL(0x4597);
    }
    else {
      uVar2 = DATA_OVL(0x458b);
    }
    func_0x000058d0(uVar2);
    local_6 = 1;
  }
LAB_0000_184d:
  if (local_6 == 0) {
    func_0x0000573a(0x21);
    iVar3 = 0;
    pcVar5 = (char *)DATA_OVL(0x154c);
    do {
      if (*pcVar5 != '\0') {
        func_0x0000be02(-1 - iVar3);
        func_0x00009990();
      }
      pcVar5 = pcVar5 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    iVar3 = 0;
    pcVar5 = (char *)SAVED_GAM(0x06b4);
    do {
      if (*pcVar5 != '\0') {
        func_0x0000be02(iVar3 + 1);
        func_0x00009990();
      }
      pcVar5 = pcVar5 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    func_0x0000842e(0x28,1,2000,MEM(0x04b0));
  }
  *(undefined *)MEM(0xa9fa) = 1;
  return local_6;
}



uint __cdecl16near FUN_0000_18be(void)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  byte local_12 [8];
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  iVar3 = 0;
  local_8 = 0;
  do {
    if (*(char *)(local_8 + SAVED_GAM(0x02aa)) != '\0') {
      local_12[iVar3] = (byte)local_8;
      iVar3 = iVar3 + 1;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  func_0x00005c14(1);
  func_0x00005ca2(9,0x26,1,0x18,1);
  func_0x0000573a(0xff);
  func_0x00005ca2(9,0x27,1,0x18,1);
  func_0x00008f7c();
  func_0x00008ed0(MEM(0x8f64));
  for (iVar4 = 0; iVar4 != iVar3; iVar4 = iVar4 + 1) {
    func_0x0000573a(10);
    func_0x0000573a(0x20);
    uVar5 = (uint)local_12[iVar4];
    print_number(0x30,2,*(undefined *)(uVar5 + SAVED_GAM(0x02aa)));
    func_0x0000573a(0x20);
    func_0x000058d0(*(undefined2 *)(uVar5 * 2 + MEM(0x19d2)));
  }
  local_6 = 0;
  local_8 = iVar4;
  func_0x00006aa8(1);
  local_4 = 0;
  uVar5 = 0;
  do {
    func_0x00005c14(2);
    local_a = func_0x000066ec();
    if (local_a == 4) {
LAB_0000_19d0:
      if (local_6 < iVar3 + -1) {
        func_0x00006aa8(local_6 + 1);
        local_6 = local_6 + 1;
LAB_0000_19be:
        func_0x00006aa8(local_6 + 1);
      }
    }
    else if (local_a < 5) {
      if (local_a != 1) {
        if (local_a == 2) goto LAB_0000_19d0;
        if (local_a != 3) goto LAB_0000_19c5;
      }
      if (0 < local_6) {
        func_0x00006aa8(local_6 + 1);
        local_6 = local_6 + -1;
        goto LAB_0000_19be;
      }
    }
    else {
      if (local_a == 0xd) {
LAB_0000_19ee:
        uVar1 = 0x80 >> (local_12[local_6] & 0x1f);
        uVar5 = uVar5 ^ uVar1;
        func_0x00005c14(1);
        func_0x00005c72(local_6 + 1,3);
        func_0x0000573a(0xfd);
        if ((uVar1 & uVar5) == 0) {
          uVar2 = 0x20;
        }
        else {
          uVar2 = 0xf;
        }
        func_0x0000573a(uVar2);
        uVar2 = 0xfd;
      }
      else {
        if (local_a != 0x1b) {
          if (local_a != 0x20) {
            if (local_a == 0x4d) {
              local_4 = 1;
              func_0x000058d0(MEM(0x8f6e));
            }
            goto LAB_0000_19c5;
          }
          goto LAB_0000_19ee;
        }
        uVar5 = MEM(0xffff);
        local_4 = 1;
        uVar2 = 10;
      }
      func_0x0000573a(uVar2);
    }
LAB_0000_19c5:
    if (local_4 != 0) {
      func_0x00006aa8(local_6 + 1);
      func_0x00005c14(2);
      return uVar5;
    }
  } while( true );
}



uint FUN_0000_1a70(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  do {
    bVar1 = true;
    func_0x000058d0(MEM(0x8f72));
    uVar2 = func_0x00007c1e(2);
    if (uVar2 != 0) {
      uVar4 = 0x80;
      iVar3 = 0;
      do {
        if (((param_1 & uVar4) != 0) && (*(byte *)(iVar3 + SAVED_GAM(0x02aa)) < uVar2)) {
          func_0x000058d0(MEM(0x8f7e));
          bVar1 = false;
          break;
        }
        uVar4 = (int)uVar4 >> 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
    }
    if (bVar1) {
      return uVar2;
    }
  } while( true );
}



void __cdecl16near FUN_0000_1ad8(void)

{
  char *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    iVar5 = iVar5 + (uint)*(byte *)(iVar7 + SAVED_GAM(0x02aa));
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if (iVar5 == 0) {
    func_0x000058d0(MEM(0x8f98));
    return;
  }
  func_0x000058d0(MEM(0x8fac));
  iVar5 = func_0x0000c10e();
  if (iVar5 == -1) {
    uVar2 = MEM(0x8fbe);
  }
  else {
    func_0x0000573a(10);
    func_0x0000573a(0x1b);
    func_0x0000573a(0x2c);
    func_0x0000573a(0x1a);
    func_0x0000573a(0x2c);
    func_0x0000573a(0x18);
    func_0x0000573a(0x2c);
    func_0x0000573a(0x19);
    func_0x000058d0(MEM(0x8fc6));
    uVar3 = FUN_0000_18be();
    if (((int)uVar3 < 0) || (iVar4 = FUN_0000_1a70(uVar3), iVar4 < 1)) goto LAB_0000_1c11;
    if (uVar3 != 0) {
      func_0x000058d0(MEM(0x8ff0));
      if (*(byte *)SAVED_GAM(0x02ed) < 0x21) {
        func_0x00007b66(10);
      }
      else {
        func_0x0000617a(10);
      }
      uVar6 = 0x80;
      iVar7 = 0;
      do {
        if ((uVar6 & uVar3) != 0) {
          pcVar1 = (char *)(iVar7 + SAVED_GAM(0x02aa));
          *pcVar1 = *pcVar1 - (char)iVar4;
        }
        uVar6 = (int)uVar6 >> 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      if ((iVar5 < 0) || (*(byte *)(iVar5 + MEM(0x1cc0)) != uVar3)) {
        func_0x0000573a(10);
        func_0x00007a7c();
        func_0x00007050(*(undefined2 *)SAVED_GAM(0x02d0));
      }
      else {
        func_0x000058d0((int)&SUB_0000_8ffc);
        pcVar1 = (char *)(iVar5 + SAVED_GAM(0x024a));
        *pcVar1 = *pcVar1 + (char)iVar4;
        if (99 < *(byte *)(iVar5 + SAVED_GAM(0x024a))) {
          *(undefined *)(iVar5 + SAVED_GAM(0x024a)) = 99;
        }
      }
      goto LAB_0000_1c11;
    }
    uVar2 = MEM(0x9004);
  }
  func_0x000058d0(uVar2);
LAB_0000_1c11:
  func_0x00008ea0();
  func_0x00008fbc();
  func_0x00006980(iVar7);
  return;
}



void __cdecl16near FUN_0000_1c20(void)

{
  undefined2 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined2 unaff_DS;
  byte *local_12;
  
  if (*(char *)SAVED_GAM(0x0209) == '\0') {
    uVar3 = MEM(0x9016);
  }
  else if (*(char *)SAVED_GAM(0x02d6) == '\x1c') {
    iVar4 = func_0x0000766c();
    if (iVar4 == 0) {
      return;
    }
    uVar3 = *(undefined2 *)SAVED_GAM(0x02d0);
    uVar1 = *(undefined2 *)SAVED_GAM(0x02d2);
    pcVar5 = (char *)func_0x00008482((uint)*(byte *)SAVED_GAM(0x02f1) + *(int *)SAVED_GAM(0x02d2),
                                     (uint)*(byte *)SAVED_GAM(0x02f0) + *(int *)SAVED_GAM(0x02d0));
    cVar2 = *pcVar5;
    if (cVar2 == '\r') {
      uVar3 = MEM(0x902c);
    }
    else {
      if (cVar2 == '\f') {
        if (*(char *)SAVED_GAM(0x02b5) != '\0') {
          pcVar5 = (char *)SAVED_GAM(0x000d);
          local_12 = (byte *)SAVED_GAM(0x000f);
          uVar8 = 0;
          do {
            if ((*pcVar5 != 'D') && (uVar6 = func_0x00006112(0x1e,1), *local_12 < uVar6)) {
              func_0x000058d0(MEM(0x904a));
              uVar7 = func_0x00006112(5,1,uVar8);
              func_0x00006ad2(uVar7);
            }
            pcVar5 = pcVar5 + 0x20;
            local_12 = local_12 + 0x20;
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(byte *)SAVED_GAM(0x02b5));
        }
        func_0x0000bc46(uVar1,uVar3);
        return;
      }
      uVar3 = MEM(0x903a);
    }
  }
  else {
    uVar3 = MEM(0x9022);
  }
  func_0x000058d0(uVar3);
  return;
}


