typedef unsigned char   undefined;

typedef unsigned int    undefined2;



void FUN_0000_0000(int param_1)

{
  if (0 < param_1) {
    do {
      func_0x0000a0ae();
      func_0x00009856(2);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



undefined2 FUN_0000_002e(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  uVar2 = param_1 & 0xfc;
  if (uVar2 == 0x10) {
    local_4 = 6;
  }
  else if (uVar2 == 0x14) {
    local_4 = 7;
  }
  else if (uVar2 == 0x18) {
    local_4 = 8;
  }
  else if (uVar2 == 0x1c) {
    local_4 = 0;
  }
  else if (uVar2 == 0x20) {
    local_4 = 1;
  }
  *(undefined2 *)SAVED_GAM(0x02d2) = 0;
  *(undefined2 *)SAVED_GAM(0x02d0) = 0;
  param_1 = param_1 & 3;
  if (param_1 == 0) {
    piVar1 = (int *)SAVED_GAM(0x02d2);
    *piVar1 = *piVar1 + -1;
  }
  else if (param_1 == 1) {
    piVar1 = (int *)SAVED_GAM(0x02d0);
    *piVar1 = *piVar1 + 1;
  }
  else if (param_1 == 2) {
    piVar1 = (int *)SAVED_GAM(0x02d2);
    *piVar1 = *piVar1 + 1;
  }
  else if (param_1 == 3) {
    piVar1 = (int *)SAVED_GAM(0x02d0);
    *piVar1 = *piVar1 + -1;
  }
  return local_4;
}



// WARNING: Removing unreachable block (ram,0x000001a7)
// WARNING: Removing unreachable block (ram,0x0000021b)

void FUN_0000_00be(byte *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  char local_16;
  char local_12;
  int local_6;
  
  do {
    local_6 = 1;
    while( true ) {
      pbVar2 = param_1 + 1;
      bVar5 = *param_1;
      uVar7 = (uint)bVar5;
      if (uVar7 == 0) {
        return;
      }
      param_1 = pbVar2;
      if (0xf < bVar5) break;
      if (uVar7 - 1 < 9) {
                    // WARNING: Could not emulate address calculation at 0x00000267
                    // WARNING: Treating indirect jump as call
        (**(code **)((uVar7 - 1) * 2 + MEM(0xa406)))();
        return;
      }
    }
    iVar6 = FUN_0000_002e(uVar7);
    uVar3 = *(undefined2 *)SAVED_GAM(0x02d0);
    uVar4 = *(undefined2 *)SAVED_GAM(0x02d2);
    do {
      local_12 = (char)uVar3;
      pcVar1 = (char *)(iVar6 * 8 + SAVED_GAM(0x06b6));
      *pcVar1 = *pcVar1 + local_12;
      local_16 = (char)uVar4;
      pcVar1 = (char *)(iVar6 * 8 + SAVED_GAM(0x06b7));
      *pcVar1 = *pcVar1 + local_16;
      FUN_0000_0000(1);
      local_6 = local_6 + -1;
    } while (local_6 != 0);
  } while( true );
}



void FUN_0000_0278(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    func_0x000075c0(DATA_OVL(0x0d54));
    func_0x000075c0(*(undefined2 *)(param_1 * 2 + MEM(0x1f4e)));
    uVar1 = MEM(0x6f6e);
  }
  else if (param_2 == 1) {
    func_0x000075c0(DATA_OVL(0x0d81));
    func_0x000075c0(*(undefined2 *)(param_1 * 2 + MEM(0x1f4e)));
    uVar1 = MEM(0x6f72);
  }
  else if (param_2 == 2) {
    func_0x000075c0(DATA_OVL(0x0da6));
    func_0x000075c0(*(undefined2 *)(param_1 * 2 + MEM(0x1f4e)));
    uVar1 = MEM(0x6f76);
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uVar1 = DATA_OVL(0x0e00);
  }
  func_0x000075c0(uVar1);
  return;
}



int FUN_0000_02ea(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_18;
  int local_16;
  undefined local_14 [18];
  
  func_0x000075c0(MEM(0x6f7a));
  func_0x0000988c(0xe,local_14);
  func_0x000075c0(MEM(0x6f8e));
  iVar1 = func_0x00007edc(*(undefined2 *)(param_1 * 2 + MEM(0x1f5e)));
  local_16 = 0;
  local_18 = 0;
  iVar2 = func_0x00007edc(local_14);
  if (iVar1 <= iVar2) {
    do {
      local_16 = 1;
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = func_0x00007da2(*(undefined *)(*(int *)(param_1 * 2 + MEM(0x1f5e)) + iVar2));
          iVar4 = func_0x00007da2(local_14[local_18 + iVar2]);
          if (iVar4 != iVar3) {
            local_16 = 0;
            break;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      if (local_16 != 0) {
        return local_16;
      }
      local_18 = local_18 + 1;
      iVar2 = func_0x00007edc(local_14);
    } while (local_18 <= iVar2 - iVar1);
  }
  return local_16;
}



void FUN_0000_03ae(int param_1)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  uint local_28;
  undefined2 local_22 [16];
  
  if (param_1 == 0) {
    uVar4 = DATA_OVL(0x0e81);
  }
  else {
    uVar4 = DATA_OVL(0x0e45);
  }
  func_0x000075c0(uVar4);
  func_0x00009856(10);
  iVar6 = 2000;
  do {
    func_0x00007f02(0,iVar6,200,1,MEM(0x0a50));
    iVar6 = iVar6 + 0x32;
  } while (iVar6 < 25000);
  iVar6 = 25000;
  do {
    func_0x00007f02(0,iVar6,200,1,MEM(0x0a50));
    iVar6 = iVar6 + -0x32;
  } while (2000 < iVar6);
  func_0x00009292(*(undefined *)SAVED_GAM(0x06bf),*(undefined *)SAVED_GAM(0x06be));
  *(undefined *)SAVED_GAM(0x06bd) = 0;
  *(undefined *)SAVED_GAM(0x06bc) = 0;
  *(undefined *)MEM(0xadf9) = 0x80;
  local_28 = 0;
  uVar5 = (uint)*(byte *)SAVED_GAM(0x02b5);
  if (uVar5 != 0) {
    pcVar7 = (char *)SAVED_GAM(0x000d);
    local_28 = 0;
    iVar6 = 0;
    do {
      if (*pcVar7 != 'D') {
        iVar6 = iVar6 + 1;
      }
      if (iVar6 == 2) break;
      pcVar7 = pcVar7 + 0x20;
      local_28 = local_28 + 1;
    } while (local_28 < uVar5);
  }
  puVar8 = local_22;
  puVar10 = (undefined2 *)(local_28 * 0x20 + SAVED_GAM(0x0002));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar3 = *puVar2;
  }
  if ((int)local_28 < 0xf) {
    puVar10 = (undefined2 *)(local_28 * 0x20 + SAVED_GAM(0x0002));
    puVar8 = (undefined2 *)(local_28 * 0x20 + SAVED_GAM(0x0022));
    do {
      puVar9 = puVar8;
      puVar11 = puVar10;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar3 = puVar11;
        puVar11 = puVar11 + 1;
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar3 = *puVar2;
      }
      puVar10 = puVar10 + 0x10;
      puVar8 = puVar8 + 0x10;
    } while (puVar8 != (undefined2 *)SAVED_GAM(0x0202));
  }
  puVar10 = (undefined2 *)SAVED_GAM(0x01e2);
  puVar8 = local_22;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar2;
  }
  *(undefined *)SAVED_GAM(0x0201) = 0x7f;
  pcVar1 = (char *)SAVED_GAM(0x02b5);
  *pcVar1 = *pcVar1 + -1;
  func_0x00008670();
  if (param_1 != 0) {
    func_0x000075c0(MEM(0x6f92));
    func_0x000075c0(SAVED_GAM(0x01e2));
    func_0x000075c0(MEM(0x6f96));
    func_0x000083dc();
    func_0x000075c0(DATA_OVL(0x0ef4));
  }
  func_0x0000742a(10);
  return;
}



void __cdecl16near FUN_0000_0510(void)

{
  func_0x000083dc();
  FUN_0000_00be();
  return;
}



void __cdecl16near FUN_0000_051c(void)

{
  func_0x000075c0(DATA_OVL(0x0f7d));
  FUN_0000_00be(DATA_OVL(0x36ea));
  func_0x000075c0(DATA_OVL(0x0fb3));
  func_0x000075c0(SAVED_GAM(0x0022));
  func_0x000075c0(MEM(0x6fac));
  func_0x000083dc();
  func_0x000075c0();
  return;
}



void FUN_0000_054a(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  bVar1 = false;
  func_0x000075c0(MEM(0x6fb8));
  iVar4 = 0;
  do {
    FUN_0000_0278(param_2,iVar4);
    iVar2 = FUN_0000_02ea(param_2);
    if (iVar2 != 0) {
      *(undefined *)(param_2 + SAVED_GAM(0x0332)) = 0xff;
      func_0x00009ca6(5,SAVED_GAM(0x02e2));
      if (1 < param_1) {
        FUN_0000_03ae(0);
        goto LAB_0000_0595;
      }
      uVar3 = DATA_OVL(0x0ff0);
LAB_0000_0591:
      func_0x000075c0(uVar3);
LAB_0000_0595:
      FUN_0000_0510();
      return;
    }
    if (param_1 < 2) {
      uVar3 = DATA_OVL(0x1030);
      goto LAB_0000_0591;
    }
    if (bVar1) {
      func_0x0000acec(2);
      func_0x00008670();
      if (iVar4 == 0) {
        *(undefined *)MEM(0xae39) = 0xea;
      }
      else if (iVar4 == 1) {
        *(undefined *)MEM(0xae39) = 0xeb;
      }
      else if (iVar4 == 2) {
        *(undefined *)MEM(0xae39) = 0xe8;
      }
      else if (iVar4 == 3) {
        FUN_0000_03ae(1);
      }
    }
    else {
      bVar1 = true;
      FUN_0000_051c();
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}



void __cdecl16near FUN_0000_060e(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 unaff_DS;
  undefined *local_14;
  undefined *local_12;
  int local_a;
  
  local_a = 0;
  uVar4 = (uint)*(byte *)SAVED_GAM(0x02b5);
  if (uVar4 != 0) {
    pcVar9 = (char *)SAVED_GAM(0x000d);
    local_a = 0;
    uVar7 = 0;
    do {
      if (*pcVar9 != 'D') {
        local_a = local_a + 1;
      }
      pcVar9 = pcVar9 + 0x20;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  *(undefined *)SAVED_GAM(0x02d6) = 0x1c;
  func_0x0000b680();
  func_0x000075c0(MEM(0x6fbc));
  iVar10 = 0;
  do {
    if (*(char *)(iVar10 + SAVED_GAM(0x0332)) == '\0') break;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  if (7 < iVar10) goto LAB_0000_08e7;
  func_0x00009856(2);
  func_0x000067e0(0);
  func_0x00006816(0xb7,0xb7,8,8);
  *(undefined *)SAVED_GAM(0x02ef) = 0xff;
  func_0x0000a7f4();
  func_0x00008c06(MEM(0xffff));
  iVar11 = 5;
  do {
    func_0x00007e6a(5);
    func_0x0000a0ae();
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  func_0x000075c0(MEM(0x6fe0));
  iVar11 = 0;
  while( true ) {
    if (*(char *)MEM(0xa9ce) == '\0') {
      iVar5 = 3;
    }
    else {
      iVar5 = 0x12;
    }
    if (iVar5 <= iVar11) break;
    func_0x00007e6a(5);
    func_0x0000a0ae();
    iVar11 = iVar11 + 1;
  }
  iVar11 = 0;
  do {
    func_0x000097e4(iVar11,0,0,0,0,0,0);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x20);
  *(undefined *)SAVED_GAM(0x02ed) = 0xff;
  *(undefined *)SAVED_GAM(0x02f8) = 0xff;
  func_0x000082de(0,0xb0,MEM(0xac64),MEM(0x7000));
  func_0x000082de(0,1000,DATA_OVL(0x0d54),MEM(0x700e));
  iVar5 = 0;
  iVar11 = 0;
  do {
    puVar13 = (undefined2 *)(iVar11 + MEM(0xad14));
    puVar12 = (undefined2 *)(iVar5 + MEM(0xac64));
    for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      puVar1 = puVar12;
      puVar12 = puVar12 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined *)puVar13 = *(undefined *)puVar12;
    iVar5 = iVar5 + 0x10;
    iVar11 = iVar11 + 0x20;
  } while (iVar11 < MEM(0x0160));
  if (0 < local_a) {
    local_14 = (undefined *)SAVED_GAM(0x06b4);
    local_12 = (undefined *)SAVED_GAM(0x000c);
    iVar11 = 0;
    do {
      uVar4 = (uint)*(byte *)(local_a * 8 + iVar11 + MEM(0x1f0a));
      local_14[2] = *(undefined *)(uVar4 + MEM(0x1f42));
      local_14[3] = *(undefined *)(uVar4 + MEM(0x1f48));
      iVar5 = func_0x0000aae6(*local_12,MEM(0x701a));
      uVar3 = *(undefined *)(iVar5 + MEM(0x1ade));
      local_14[1] = uVar3;
      *local_14 = uVar3;
      local_14 = local_14 + 8;
      local_12 = local_12 + 0x20;
      iVar11 = iVar11 + 1;
    } while (iVar11 != local_a);
  }
  func_0x00009856(0x10);
  func_0x000075c0(MEM(0x7024));
  func_0x00009856(0x32);
  func_0x000075c0(MEM(0x704c));
  FUN_0000_0000(8);
  func_0x000097e4(6,0,0,10,4,0x70,0x70);
  func_0x000097e4(7,0,0,10,6,0x70,0x70);
  FUN_0000_00be(DATA_OVL(0x3712));
  func_0x00007f02(5,100,13000,1,MEM(0x0af0));
  func_0x000097e4(8,0,0,5,5,0x16,0x16);
  func_0x00006dd8(5,5,MEM(0x0178));
  func_0x000097e4(8,0,0,5,5,0x78,0x78);
  func_0x00009856(8);
  func_0x000075c0(MEM(0x705a));
  func_0x000075c0(SAVED_GAM(0x0002));
  func_0x000075c0(MEM(0x7074));
  func_0x000083dc();
  func_0x000075c0(MEM(0x70a4));
  if (*(char *)SAVED_GAM(0x000b) == '\f') {
    uVar6 = MEM(0x70c0);
LAB_0000_08b4:
    func_0x000075c0(uVar6);
  }
  else if (*(char *)SAVED_GAM(0x000b) == '\v') {
    uVar6 = MEM(0x70c8);
    goto LAB_0000_08b4;
  }
  func_0x000075c0(MEM(0x70ce));
  FUN_0000_00be(DATA_OVL(0x371e));
  func_0x000075c0(DATA_OVL(0x1080));
  func_0x000083dc();
  FUN_0000_054a(local_a,iVar10);
  if (*(char *)SAVED_GAM(0x06f4) != '\0') {
    FUN_0000_00be(DATA_OVL(0x3726));
  }
LAB_0000_08e7:
  *(undefined *)SAVED_GAM(0x02ef) = 0xff;
  func_0x0000a7f4();
  func_0x00008c06(MEM(0xffff));
  *(undefined *)SAVED_GAM(0x02f0) = 10;
  *(undefined *)SAVED_GAM(0x02f1) = 7;
  *(undefined *)SAVED_GAM(0x0206) = 0;
  *(undefined *)SAVED_GAM(0x02ed) = 0x12;
  return;
}



void __cdecl16near FUN_0000_0910(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_DS;
  undefined2 *local_12;
  undefined2 *local_e;
  
  func_0x0000828e(1);
  do {
    iVar4 = func_0x000073e4(MEM(0x70d8));
  } while (iVar4 == 0);
  func_0x0000dc72(*(undefined *)SAVED_GAM(0x0300));
  *(undefined *)SAVED_GAM(0x02d6) = 0x1e;
  if (*(byte *)SAVED_GAM(0x02ed) < 0x21) {
    func_0x0000b680();
  }
  func_0x00007e6a(10);
  bVar1 = *(byte *)SAVED_GAM(0x02ed);
  *(undefined *)SAVED_GAM(0x02ed) = 0xff;
  *(undefined *)SAVED_GAM(0x02f8) = 0xff;
  func_0x000075c0(MEM(0x70e2));
  func_0x00006992(1);
  func_0x000067e0(0);
  func_0x00006816(0xb7,0xb7,8,8);
  func_0x00006992(0);
  func_0x00006cb6(0xb7,0xb7,8,8);
  uVar6 = 0;
  do {
    puVar7 = (undefined2 *)(uVar6 + MEM(0xad14));
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = MEM(0xffff);
    }
    *(undefined *)puVar7 = 0xff;
    uVar6 = uVar6 + 0x20;
  } while (uVar6 < MEM(0x0160));
  uVar6 = 0;
  do {
    func_0x000097e4(uVar6,0,0,0,0,0,0);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x20);
  func_0x0000b680();
  func_0x000075c0(MEM(0x7108));
  func_0x00007e6a(0xe);
  func_0x000075c0(MEM(0x7122));
  func_0x00007e6a(0x1c);
  func_0x000075c0(MEM(0x7152));
  *(undefined *)MEM(0xadb9) = 0;
  *(undefined *)SAVED_GAM(0x06b5) = 0x1c;
  *(undefined *)SAVED_GAM(0x06b4) = 0x1c;
  *(undefined *)SAVED_GAM(0x06b7) = 5;
  *(undefined *)SAVED_GAM(0x06b6) = 5;
  func_0x0000b680();
  puVar8 = (undefined2 *)DATA_OVL(0x3730);
  local_e = (undefined2 *)DATA_OVL(0x373c);
  local_12 = (undefined2 *)DATA_OVL(0x3748);
  puVar7 = (undefined2 *)DATA_OVL(0x3754);
  do {
    func_0x00007f02(*puVar7,*local_12,*local_e,1,*puVar8);
    puVar8 = puVar8 + 1;
    local_e = local_e + 1;
    local_12 = local_12 + 1;
    puVar7 = puVar7 + 1;
  } while (puVar7 < (undefined2 *)DATA_OVL(0x3760));
  func_0x000075c0(MEM(0x7172));
  func_0x00007e6a(6);
  *(undefined *)SAVED_GAM(0x06bd) = 0x16;
  *(undefined *)SAVED_GAM(0x06bc) = 0x16;
  *(undefined *)SAVED_GAM(0x06be) = 2;
  *(undefined *)SAVED_GAM(0x06bf) = 7;
  *(undefined *)MEM(0xadf6) = 0;
  func_0x00006dd8(7,2,0x5e);
  *(undefined *)MEM(0xadf6) = 0x5e;
  *(undefined *)SAVED_GAM(0x06bc) = 0;
  func_0x0000b680();
  func_0x00007e6a(4);
  *(undefined *)SAVED_GAM(0x06bc) = 0x16;
  *(undefined *)SAVED_GAM(0x06be) = 8;
  *(undefined *)MEM(0xadfc) = 0;
  func_0x00006dd8(7,8,0x5f);
  *(undefined *)MEM(0xadfc) = 0x5f;
  *(undefined *)SAVED_GAM(0x06bc) = 0;
  func_0x0000b680();
  func_0x00007e6a(4);
  func_0x000075c0(MEM(0x719e));
  func_0x00008de2();
  func_0x00008de2();
  *(undefined *)MEM(0xad59) = 0;
  *(undefined *)SAVED_GAM(0x06bd) = 0x16;
  *(undefined *)SAVED_GAM(0x06bc) = 0x16;
  *(undefined *)SAVED_GAM(0x06be) = 5;
  *(undefined *)SAVED_GAM(0x06bf) = 2;
  func_0x00006dd8(2,5,MEM(0x0174));
  *(undefined *)SAVED_GAM(0x06bd) = 0x74;
  *(undefined *)SAVED_GAM(0x06bc) = 0x74;
  func_0x0000b680();
  bVar2 = *(byte *)SAVED_GAM(0x02e2);
  func_0x000075c0(MEM(0x71be));
  func_0x000082de(*(undefined2 *)((bVar2 / 0x14) * 2 + MEM(0x1a74)),2000,DATA_OVL(0x0d54),MEM(0x71c2));
  func_0x000075c0(DATA_OVL(0x0d54));
  func_0x0000742a(0x22);
  func_0x000083dc();
  func_0x000075c0(MEM(0x71cc));
  func_0x00007e6a(4);
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    puVar7 = (undefined2 *)SAVED_GAM(0x0012);
    local_12 = (undefined2 *)SAVED_GAM(0x0014);
    uVar6 = 0;
    do {
      uVar5 = func_0x00006110(MEM(0x8e30),0,uVar6 + 7,0);
      func_0x00007f02(2,2000,30000,1,uVar5);
      func_0x0000dc66(0xff,uVar6);
      *puVar7 = *local_12;
      func_0x00008670();
      puVar7 = puVar7 + 0x10;
      local_12 = local_12 + 0x10;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)SAVED_GAM(0x02b5));
  }
  func_0x000075c0(MEM(0x71ea));
  func_0x00007e6a(4);
  func_0x00006992(1);
  func_0x000067e0(0);
  func_0x00006816(0xb7,0xb7,8,8);
  func_0x00006e50(5,5,MEM(0x011c));
  func_0x00006992(0);
  func_0x00006cb6(0xb7,0xb7,8,8);
  if (*(byte *)SAVED_GAM(0x02e2) < 0x4b) {
    *(undefined *)SAVED_GAM(0x02e2) = 0x4b;
  }
  *(undefined *)SAVED_GAM(0x02ed) = 0x11;
  *(undefined *)SAVED_GAM(0x02ef) = 1;
  *(undefined *)SAVED_GAM(0x02d6) = 0x1c;
  *(undefined *)SAVED_GAM(0x02f1) = 10;
  *(undefined *)SAVED_GAM(0x02f0) = 10;
  *(undefined *)SAVED_GAM(0x02e8) = 0;
  *(undefined *)SAVED_GAM(0x02d4) = 0;
  while (*(char *)SAVED_GAM(0x02d9) != '\x06') {
    func_0x0000acec(9);
  }
  *(undefined *)SAVED_GAM(0x0300) = 0;
  *(undefined *)SAVED_GAM(0x0301) = 0;
  if (*(int *)SAVED_GAM(0x0202) == 0) {
    *(undefined2 *)SAVED_GAM(0x0202) = 0x3f;
  }
  if ((bVar1 != 0) && (bVar1 < 0x21)) {
    func_0x0000d7b6(1);
  }
  return;
}


