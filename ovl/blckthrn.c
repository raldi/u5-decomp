typedef unsigned char   undefined;

typedef unsigned int    undefined2;



void blackthrn_124c_0000(int param_1)

{
  if (0 < param_1) {
    do {
      func_0x0001c56e();
      func_0x0001bd16(2);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



undefined2 blackthrn_124c_002e(uint param_1)

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
  *(undefined2 *)0x5878 = 0;
  *(undefined2 *)0x5876 = 0;
  param_1 = param_1 & 3;
  if (param_1 == 0) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
  }
  else if (param_1 == 1) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_1 == 2) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_1 == 3) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
  }
  return local_4;
}



// WARNING: Removing unreachable block (ram,0x00012667)
// WARNING: Removing unreachable block (ram,0x000126db)

void blackthrn_124c_00be(byte *param_1)

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
                    // WARNING: Could not emulate address calculation at 0x00012727
                    // WARNING: Treating indirect jump as call
        (**(code **)((uVar7 - 1) * 2 + -0x5bfa))();
        return;
      }
    }
    iVar6 = blackthrn_124c_002e(uVar7);
    uVar3 = *(undefined2 *)0x5876;
    uVar4 = *(undefined2 *)0x5878;
    do {
      local_12 = (char)uVar3;
      pcVar1 = (char *)(iVar6 * 8 + 0x5c5c);
      *pcVar1 = *pcVar1 + local_12;
      local_16 = (char)uVar4;
      pcVar1 = (char *)(iVar6 * 8 + 0x5c5d);
      *pcVar1 = *pcVar1 + local_16;
      blackthrn_124c_0000(1);
      local_6 = local_6 + -1;
    } while (local_6 != 0);
  } while( true );
}



void blackthrn_124c_0278(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    func_0x00019a80(0xb21e);
    func_0x00019a80(*(undefined2 *)(param_1 * 2 + 0x1f4e));
    uVar1 = 0x6f6e;
  }
  else if (param_2 == 1) {
    func_0x00019a80(0xb24b);
    func_0x00019a80(*(undefined2 *)(param_1 * 2 + 0x1f4e));
    uVar1 = 0x6f72;
  }
  else if (param_2 == 2) {
    func_0x00019a80(0xb270);
    func_0x00019a80(*(undefined2 *)(param_1 * 2 + 0x1f4e));
    uVar1 = 0x6f76;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uVar1 = 0xb2ca;
  }
  func_0x00019a80(uVar1);
  return;
}



int blackthrn_124c_02ea(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_18;
  int local_16;
  undefined local_14 [18];
  
  func_0x00019a80(0x6f7a);
  func_0x0001bd4c(0xe,local_14);
  func_0x00019a80(0x6f8e);
  iVar1 = func_0x0001a39c(*(undefined2 *)(param_1 * 2 + 0x1f5e));
  local_16 = 0;
  local_18 = 0;
  iVar2 = func_0x0001a39c(local_14);
  if (iVar1 <= iVar2) {
    do {
      local_16 = 1;
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          iVar3 = func_0x0001a262(*(undefined *)(*(int *)(param_1 * 2 + 0x1f5e) + iVar2));
          iVar4 = func_0x0001a262(local_14[local_18 + iVar2]);
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
      iVar2 = func_0x0001a39c(local_14);
    } while (local_18 <= iVar2 - iVar1);
  }
  return local_16;
}



void blackthrn_124c_03ae(int param_1)

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
    uVar4 = 0xb34b;
  }
  else {
    uVar4 = 0xb30f;
  }
  func_0x00019a80(uVar4);
  func_0x0001bd16(10);
  iVar6 = 2000;
  do {
    func_0x0001a3c2(0,iVar6,200,1,0xa50);
    iVar6 = iVar6 + 0x32;
  } while (iVar6 < 25000);
  iVar6 = 25000;
  do {
    func_0x0001a3c2(0,iVar6,200,1,0xa50);
    iVar6 = iVar6 + -0x32;
  } while (2000 < iVar6);
  func_0x0001b752(*(undefined *)0x5c65,*(undefined *)0x5c64);
  *(undefined *)0x5c63 = 0;
  *(undefined *)0x5c62 = 0;
  *(undefined *)0xadf9 = 0x80;
  local_28 = 0;
  uVar5 = (uint)*(byte *)0x585b;
  if (uVar5 != 0) {
    pcVar7 = (char *)0x55b3;
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
  puVar10 = (undefined2 *)(local_28 * 0x20 + 0x55a8);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar8;
    puVar8 = puVar8 + 1;
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar3 = *puVar2;
  }
  if ((int)local_28 < 0xf) {
    puVar10 = (undefined2 *)(local_28 * 0x20 + 0x55a8);
    puVar8 = (undefined2 *)(local_28 * 0x20 + 0x55c8);
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
    } while (puVar8 != (undefined2 *)0x57a8);
  }
  puVar10 = (undefined2 *)0x5788;
  puVar8 = local_22;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar2;
  }
  *(undefined *)0x57a7 = 0x7f;
  pcVar1 = (char *)0x585b;
  *pcVar1 = *pcVar1 + -1;
  func_0x0001ab30();
  if (param_1 != 0) {
    func_0x00019a80(0x6f92);
    func_0x00019a80(0x5788);
    func_0x00019a80(0x6f96);
    func_0x0001a89c();
    func_0x00019a80(0xb3be);
  }
  func_0x000198ea(10);
  return;
}



void __cdecl16near blackthrn_124c_0510(void)

{
  func_0x0001a89c();
  blackthrn_124c_00be();
  return;
}



void __cdecl16near blackthrn_124c_051c(void)

{
  func_0x00019a80(0xb447);
  blackthrn_124c_00be(0x36da);
  func_0x00019a80(0xb47d);
  func_0x00019a80(0x55c8);
  func_0x00019a80(0x6fac);
  func_0x0001a89c();
  func_0x00019a80();
  return;
}



void blackthrn_124c_054a(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  bVar1 = false;
  func_0x00019a80(0x6fb8);
  iVar4 = 0;
  do {
    blackthrn_124c_0278(param_2,iVar4);
    iVar2 = blackthrn_124c_02ea(param_2);
    if (iVar2 != 0) {
      *(undefined *)(param_2 + 0x58d8) = 0xff;
      func_0x0001c166(5,0x5888);
      if (1 < param_1) {
        blackthrn_124c_03ae(0);
        goto LAB_124c_0595;
      }
      uVar3 = 0xb4ba;
LAB_124c_0591:
      func_0x00019a80(uVar3);
LAB_124c_0595:
      blackthrn_124c_0510();
      return;
    }
    if (param_1 < 2) {
      uVar3 = 0xb4fa;
      goto LAB_124c_0591;
    }
    if (bVar1) {
      func_0x0001d1ac(2);
      func_0x0001ab30();
      if (iVar4 == 0) {
        *(undefined *)0xae39 = 0xea;
      }
      else if (iVar4 == 1) {
        *(undefined *)0xae39 = 0xeb;
      }
      else if (iVar4 == 2) {
        *(undefined *)0xae39 = 0xe8;
      }
      else if (iVar4 == 3) {
        blackthrn_124c_03ae(1);
      }
    }
    else {
      bVar1 = true;
      blackthrn_124c_051c();
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return;
    }
  } while( true );
}



void __cdecl16near blackthrn_124c_060e(void)

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
  uVar4 = (uint)*(byte *)0x585b;
  if (uVar4 != 0) {
    pcVar9 = (char *)0x55b3;
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
  *(undefined *)0x587c = 0x1c;
  func_0x0001db40();
  func_0x00019a80(0x6fbc);
  iVar10 = 0;
  do {
    if (*(char *)(iVar10 + 0x58d8) == '\0') break;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  if (7 < iVar10) goto LAB_124c_08e7;
  func_0x0001bd16(2);
  func_0x00018ca0(0);
  func_0x00018cd6(0xb7,0xb7,8,8);
  *(undefined *)0x5895 = 0xff;
  func_0x0001ccb4();
  func_0x0001b0c6(0xffff);
  iVar11 = 5;
  do {
    func_0x0001a32a(5);
    func_0x0001c56e();
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  func_0x00019a80(0x6fe0);
  iVar11 = 0;
  while( true ) {
    if (*(char *)0xa9ce == '\0') {
      iVar5 = 3;
    }
    else {
      iVar5 = 0x12;
    }
    if (iVar5 <= iVar11) break;
    func_0x0001a32a(5);
    func_0x0001c56e();
    iVar11 = iVar11 + 1;
  }
  iVar11 = 0;
  do {
    func_0x0001bca4(iVar11,0,0,0,0,0,0);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 0x20);
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x589e = 0xff;
  func_0x0001a79e(0,0xb0,0xac64,0x7000);
  func_0x0001a79e(0,1000,0xb21e,0x700e);
  iVar5 = 0;
  iVar11 = 0;
  do {
    puVar13 = (undefined2 *)(iVar11 + -0x52ec);
    puVar12 = (undefined2 *)(iVar5 + -0x539c);
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
  } while (iVar11 < 0x160);
  if (0 < local_a) {
    local_14 = (undefined *)0x5c5a;
    local_12 = (undefined *)0x55b2;
    iVar11 = 0;
    do {
      uVar4 = (uint)*(byte *)(local_a * 8 + iVar11 + 0x1f0a);
      local_14[2] = *(undefined *)(uVar4 + 0x1f42);
      local_14[3] = *(undefined *)(uVar4 + 0x1f48);
      iVar5 = func_0x0001cfa6(*local_12,0x701a);
      uVar3 = *(undefined *)(iVar5 + 0x1ade);
      local_14[1] = uVar3;
      *local_14 = uVar3;
      local_14 = local_14 + 8;
      local_12 = local_12 + 0x20;
      iVar11 = iVar11 + 1;
    } while (iVar11 != local_a);
  }
  func_0x0001bd16(0x10);
  func_0x00019a80(0x7024);
  func_0x0001bd16(0x32);
  func_0x00019a80(0x704c);
  blackthrn_124c_0000(8);
  func_0x0001bca4(6,0,0,10,4,0x70,0x70);
  func_0x0001bca4(7,0,0,10,6,0x70,0x70);
  blackthrn_124c_00be(0x3702);
  func_0x0001a3c2(5,100,13000,1,0xaf0);
  func_0x0001bca4(8,0,0,5,5,0x16,0x16);
  func_0x00019298(5,5,0x178);
  func_0x0001bca4(8,0,0,5,5,0x78,0x78);
  func_0x0001bd16(8);
  func_0x00019a80(0x705a);
  func_0x00019a80(0x55a8);
  func_0x00019a80(0x7074);
  func_0x0001a89c();
  func_0x00019a80(0x70a4);
  if (*(char *)0x55b1 == '\f') {
    uVar6 = 0x70c0;
LAB_1000_2d74:
    func_0x00019a80(uVar6);
  }
  else if (*(char *)0x55b1 == '\v') {
    uVar6 = 0x70c8;
    goto LAB_1000_2d74;
  }
  func_0x00019a80(0x70ce);
  blackthrn_124c_00be(0x370e);
  func_0x00019a80(0xb54a);
  func_0x0001a89c();
  blackthrn_124c_054a(local_a,iVar10);
  if (*(char *)0x5c9a != '\0') {
    blackthrn_124c_00be(0x3716);
  }
LAB_124c_08e7:
  *(undefined *)0x5895 = 0xff;
  func_0x0001ccb4();
  func_0x0001b0c6(0xffff);
  *(undefined *)0x5896 = 10;
  *(undefined *)0x5897 = 7;
  *(undefined *)0x57ac = 0;
  *(undefined *)0x5893 = 0x12;
  return;
}



void __cdecl16near blackthrn_124c_0910(void)

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
  
  func_0x0001a74e(1);
  do {
    iVar4 = func_0x000198a4(0x70d8);
  } while (iVar4 == 0);
  func_0x00010132(*(undefined *)0x58a6);
  *(undefined *)0x587c = 0x1e;
  if (*(byte *)0x5893 < 0x21) {
    func_0x0001db40();
  }
  func_0x0001a32a(10);
  bVar1 = *(byte *)0x5893;
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x589e = 0xff;
  func_0x00019a80(0x70e2);
  func_0x00018e52(1);
  func_0x00018ca0(0);
  func_0x00018cd6(0xb7,0xb7,8,8);
  func_0x00018e52(0);
  func_0x00019176(0xb7,0xb7,8,8);
  uVar6 = 0;
  do {
    puVar7 = (undefined2 *)(uVar6 + 0xad14);
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = 0xffff;
    }
    *(undefined *)puVar7 = 0xff;
    uVar6 = uVar6 + 0x20;
  } while (uVar6 < 0x160);
  uVar6 = 0;
  do {
    func_0x0001bca4(uVar6,0,0,0,0,0,0);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x20);
  func_0x0001db40();
  func_0x00019a80(0x7108);
  func_0x0001a32a(0xe);
  func_0x00019a80(0x7122);
  func_0x0001a32a(0x1c);
  func_0x00019a80(0x7152);
  *(undefined *)0xadb9 = 0;
  *(undefined *)0x5c5b = 0x1c;
  *(undefined *)0x5c5a = 0x1c;
  *(undefined *)0x5c5d = 5;
  *(undefined *)0x5c5c = 5;
  func_0x0001db40();
  puVar8 = (undefined2 *)0x3720;
  local_e = (undefined2 *)0x372c;
  local_12 = (undefined2 *)0x3738;
  puVar7 = (undefined2 *)0x3744;
  do {
    func_0x0001a3c2(*puVar7,*local_12,*local_e,1,*puVar8);
    puVar8 = puVar8 + 1;
    local_e = local_e + 1;
    local_12 = local_12 + 1;
    puVar7 = puVar7 + 1;
  } while (puVar7 < (undefined2 *)0x3750);
  func_0x00019a80(0x7172);
  func_0x0001a32a(6);
  *(undefined *)0x5c63 = 0x16;
  *(undefined *)0x5c62 = 0x16;
  *(undefined *)0x5c64 = 2;
  *(undefined *)0x5c65 = 7;
  *(undefined *)0xadf6 = 0;
  func_0x00019298(7,2,0x5e);
  *(undefined *)0xadf6 = 0x5e;
  *(undefined *)0x5c62 = 0;
  func_0x0001db40();
  func_0x0001a32a(4);
  *(undefined *)0x5c62 = 0x16;
  *(undefined *)0x5c64 = 8;
  *(undefined *)0xadfc = 0;
  func_0x00019298(7,8,0x5f);
  *(undefined *)0xadfc = 0x5f;
  *(undefined *)0x5c62 = 0;
  func_0x0001db40();
  func_0x0001a32a(4);
  func_0x00019a80(0x719e);
  func_0x0001b2a2();
  func_0x0001b2a2();
  *(undefined *)0xad59 = 0;
  *(undefined *)0x5c63 = 0x16;
  *(undefined *)0x5c62 = 0x16;
  *(undefined *)0x5c64 = 5;
  *(undefined *)0x5c65 = 2;
  func_0x00019298(2,5,0x174);
  *(undefined *)0x5c63 = 0x74;
  *(undefined *)0x5c62 = 0x74;
  func_0x0001db40();
  bVar2 = *(byte *)0x5888;
  func_0x00019a80(0x71be);
  func_0x0001a79e(*(undefined2 *)((bVar2 / 0x14) * 2 + 0x1a74),2000,0xb21e,0x71c2);
  func_0x00019a80(0xb21e);
  func_0x000198ea(0x22);
  func_0x0001a89c();
  func_0x00019a80(0x71cc);
  func_0x0001a32a(4);
  if (*(char *)0x585b != '\0') {
    puVar7 = (undefined2 *)0x55b8;
    local_12 = (undefined2 *)0x55ba;
    uVar6 = 0;
    do {
      uVar5 = func_0x000185d0(0x8e30,0,uVar6 + 7,0);
      func_0x0001a3c2(2,2000,30000,1,uVar5);
      func_0x00010126(0xff,uVar6);
      *puVar7 = *local_12;
      func_0x0001ab30();
      puVar7 = puVar7 + 0x10;
      local_12 = local_12 + 0x10;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)0x585b);
  }
  func_0x00019a80(0x71ea);
  func_0x0001a32a(4);
  func_0x00018e52(1);
  func_0x00018ca0(0);
  func_0x00018cd6(0xb7,0xb7,8,8);
  func_0x00019310(5,5,0x11c);
  func_0x00018e52(0);
  func_0x00019176(0xb7,0xb7,8,8);
  if (*(byte *)0x5888 < 0x4b) {
    *(undefined *)0x5888 = 0x4b;
  }
  *(undefined *)0x5893 = 0x11;
  *(undefined *)0x5895 = 1;
  *(undefined *)0x587c = 0x1c;
  *(undefined *)0x5897 = 10;
  *(undefined *)0x5896 = 10;
  *(undefined *)0x588e = 0;
  *(undefined *)0x587a = 0;
  while (*(char *)0x587f != '\x06') {
    func_0x0001d1ac(9);
  }
  *(undefined *)0x58a6 = 0;
  *(undefined *)0x58a7 = 0;
  if (*(int *)0x57a8 == 0) {
    *(undefined2 *)0x57a8 = 0x3f;
  }
  if ((bVar1 != 0) && (bVar1 < 0x21)) {
    func_0x0001fc76(1);
  }
  return;
}


