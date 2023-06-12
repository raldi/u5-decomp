typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near cmds_141b_0552(void)

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
  
  func_0x00019a80(0x4209);
  do {
    bVar5 = func_0x0001a89c();
    if (bVar5 == 0x20) break;
  } while ((bVar5 < 0x30) || (0x39 < bVar5));
  if ((bVar5 != 0x20) && (bVar5 != 0x30)) {
    func_0x000198ea((uint)bVar5);
    func_0x000198ea(10);
    iVar6 = (uint)*(byte *)0x587f + (uint)bVar5;
    local_8 = iVar6 - 0x30;
    if (0x17 < (int)local_8) {
      local_8 = iVar6 - 0x47;
    }
    iVar6 = 0;
    do {
      func_0x0001fce2(*(undefined *)0x587f);
      func_0x0001db40();
      if (*(char *)0x65be == 'a') {
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    uVar2 = *(undefined *)0x587b;
    uVar7 = (uint)*(byte *)0x585b;
    if (uVar7 != 0) {
      pcVar9 = (char *)0x55b3;
      uVar8 = 0;
      do {
        if (*pcVar9 == 'G') {
          *pcVar9 = 'S';
        }
        pcVar9 = pcVar9 + 0x20;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    func_0x0001ab30();
    func_0x00019a80(0x421e);
    func_0x00018ca0(0);
    uVar10 = 0xb7;
    func_0x00018cd6(0xb7,0xb7,8,8);
    cVar3 = *(char *)0x587f;
    while (local_8 != *(byte *)0x587f) {
      func_0x0001d1ac(10,uVar10);
      cVar4 = *(char *)0x587f;
      if ((cVar3 != cVar4) && ((cVar4 == '\x14' || (cVar4 == '\x05')))) {
        func_0x0001fcca();
      }
      cVar3 = *(char *)0x587f;
      func_0x0001ccb4();
      func_0x0001ad18();
      func_0x0001ab30();
      func_0x0001fcbe();
      uVar10 = 0x483b;
      iVar6 = func_0x0001b8be(*(undefined *)0x5895,*(undefined *)0x5897,*(undefined *)0x5896);
      if (iVar6 != 0) {
        local_8 = 0xffff;
        break;
      }
      func_0x0001a32a(1);
    }
    if (local_8 == 0xffff) {
      func_0x00019a80(0x422a);
    }
    uVar7 = (uint)*(byte *)0x585b;
    if (uVar7 != 0) {
      pcVar9 = (char *)0x55b3;
      uVar8 = 0;
      do {
        if (*pcVar9 == 'S') {
          *pcVar9 = 'G';
        }
        pcVar9 = pcVar9 + 0x20;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    *(undefined *)0x587b = uVar2;
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined *)0x24e6 = 1;
    pcVar1 = (char *)0x5c5c;
    *pcVar1 = *pcVar1 + '\x01';
    func_0x0001ab30();
    func_0x0001db40();
  }
  return;
}



undefined2 __cdecl16near cmds_141b_06ee(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((*(char *)0x587c == '\x1c') || (*(char *)0x587c == '\x1d')) {
    uVar1 = 1;
  }
  else {
    func_0x00019a80(0x423e);
    uVar1 = 0;
  }
  return uVar1;
}



undefined2 __cdecl16near cmds_141b_070c(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0x587c;
  if ((bVar1 < 0x14) ||
     ((0x15 < bVar1 && ((bVar1 < 0x1c || ((0x1d < bVar1 && ((bVar1 < 0x28 || (0x2b < bVar1))))))))))
  {
    func_0x00019a80(0x4248);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined2 __cdecl16near cmds_141b_073e(void)

{
  int iVar1;
  
  iVar1 = cmds_141b_0788(5,4);
  if ((((iVar1 != 1) && (iVar1 = cmds_141b_0788(5,6), iVar1 != 1)) &&
      (iVar1 = cmds_141b_0788(6,5), iVar1 != 1)) && (iVar1 = cmds_141b_0788(4,5), iVar1 != 1)) {
    return 0;
  }
  return 1;
}



undefined2 cmds_141b_0788(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)(param_1 + param_2 * 0x20 + -0x54fe);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + param_2 * 0x10 + -0x539c);
    if ((((bVar2 == 0x1b) || (bVar2 = bVar2 & 0xfc, bVar2 == 0x1c)) || (bVar2 == 0x24)) ||
       ((bVar2 == 0x10 || (bVar2 == 0x28)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = func_0x0001ae7c(cVar1,0x1c);
  }
  return uVar3;
}



undefined2 __cdecl16near cmds_141b_07f6(void)

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
  
  if ((*(byte *)0x5893 < 0x21) || (0x28 < *(byte *)0x5893)) {
    bVar5 = func_0x0001b8be(*(undefined *)0x5895,*(undefined *)0x5897,*(undefined *)0x5896);
    iVar3 = *(int *)0x5876;
    if ((bVar5 & 0xfe) == 0x10) {
      if (((*(char *)0x5893 != '\0') && (iVar7 = func_0x0001fd4e(iVar3), iVar7 != -1)) &&
         (*(int *)(iVar7 * 0x10 + 0x5f68) != 0)) {
        uVar6 = 0x425e;
        goto LAB_141b_080d;
      }
      iVar7 = cmds_141b_06ee();
      if (iVar7 == 0) {
        return 1;
      }
      func_0x00019a80(0x4266);
      bVar5 = bVar5 + 2;
LAB_141b_0875:
      *(byte *)0x587c = bVar5;
    }
    else if (bVar5 == 0x1b) {
      iVar7 = cmds_141b_06ee();
      if (iVar7 == 0) {
        return 1;
      }
      func_0x00019a80(0x426d);
      *(undefined *)0x587c = 0x14;
    }
    else {
      if ((bVar5 & 0xfc) == 0x28) {
        iVar7 = cmds_141b_06ee();
        if (iVar7 == 0) {
          return 1;
        }
        func_0x00019a80(0x4275);
        goto LAB_141b_0875;
      }
      if ((bVar5 & 0xfc) != 0x24) {
        func_0x00019a80(0x42bf);
        return 0;
      }
      iVar7 = cmds_141b_070c();
      if (iVar7 == 0) {
        return 1;
      }
      func_0x00019a80(0x427c);
      bVar4 = *(byte *)(iVar3 * 8 + 0x5c5f);
      if (bVar4 < 10) {
        func_0x00019a80(0x4282);
      }
      *(byte *)0x5c5f = bVar4;
      local_8 = (uint)*(byte *)(iVar3 * 8 + 0x5c61);
      if ((*(byte *)0x587c & 0xfe) == 0x14) {
        pcVar1 = (char *)0x57b0;
        *pcVar1 = *pcVar1 + '\x01';
      }
      if ((*(byte *)0x587c & 0xfc) == 0x28) {
        local_8 = local_8 + 1;
      }
      if (local_8 == 0) {
        func_0x00019a80(0x42a0);
      }
      *(byte *)0x587c = bVar5;
      *(undefined *)0x5c61 = (undefined)local_8;
      *(undefined *)0xa9fa = 1;
    }
    func_0x0001bca4(iVar3,0,0,0,0,0,0);
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
  }
  else {
    uVar6 = 0x4252;
LAB_141b_080d:
    func_0x00019a80(uVar6);
  }
  return 1;
}



void __cdecl16near cmds_141b_0962(void)

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
  
  if ((*(byte *)0x587c < 0x20) || (0x27 < *(byte *)0x587c)) {
    uVar3 = 0x42c6;
  }
  else {
    iVar4 = func_0x0001b81c();
    if (iVar4 == 0) {
      return;
    }
    iVar4 = *(int *)0x5876;
    iVar6 = *(int *)0x5878;
    if (((iVar4 != 0) || ((*(byte *)0x587c & 1) != 0)) &&
       ((iVar4 == 0 || ((*(byte *)0x587c & 1) == 0)))) {
      uVar8 = (uint)*(byte *)0x5896;
      local_16 = (uint)*(byte *)0x5897;
      func_0x0001c5de(300,5,200,1000);
      local_e = 0;
      while( true ) {
        uVar8 = uVar8 + iVar4;
        local_16 = local_16 + iVar6;
        uVar3 = func_0x0001b8be(*(undefined *)0x5895,local_16,uVar8);
        iVar5 = func_0x0001fe0e(uVar3);
        if ((iVar5 != 0) && (local_c = (byte)uVar3, (local_c & 0xfc) != 0xec)) break;
        local_e = local_e + 1;
        if (2 < local_e) {
          func_0x0001fe1a(1,iVar6 * 3 + 5,iVar4 * 3 + 5,5,5);
          return;
        }
      }
      iVar4 = *(int *)0x5876;
      iVar6 = func_0x0001fe1a(1,((uint)*(byte *)(iVar4 * 8 + 0x5c5d) - (uint)*(byte *)0x5897) + 5,
                              ((uint)*(byte *)(iVar4 * 8 + 0x5c5c) - (uint)*(byte *)0x5896) + 5,5,5)
      ;
      if (iVar6 == 0) {
        return;
      }
      func_0x0001db40();
      func_0x0001b752(local_16,uVar8);
      pbVar7 = (byte *)(iVar4 * 8 + 0x5c5f);
      cVar2 = func_0x0001a2c2(0x14,1);
      pbVar1 = pbVar7;
      *pbVar1 = *pbVar1 - cVar2;
      if (*pbVar7 < 0x80) {
        return;
      }
      func_0x0001bca4(iVar4,0,0,0,0,0,0);
      pbVar1 = (byte *)0x24e6;
      *pbVar1 = *pbVar1 | 2;
      return;
    }
    uVar3 = 0x42cd;
  }
  func_0x00019a80(uVar3);
  return;
}



void __cdecl16near cmds_141b_0aea(void)

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
  
  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    uVar6 = 0x42e4;
LAB_141b_0b01:
    func_0x00019a80(uVar6);
    return;
  }
  if (*(char *)0x5893 == '\0') {
    cmds_141b_0962();
    return;
  }
  func_0x0001bbfc(*(undefined *)0x5951,*(undefined *)0x5950,*(undefined *)0x594f);
  bVar13 = *(byte *)0xab87;
  if ((bVar13 & 0xfc) == 0xb4) {
    local_16 = 0;
    iVar14 = -1;
  }
  else {
    bVar13 = *(byte *)0xaba8;
    if ((bVar13 & 0xfc) == 0xb4) {
      local_16 = 1;
    }
    else {
      bVar13 = *(byte *)0xabc7;
      if ((bVar13 & 0xfc) == 0xb4) {
        local_16 = 0;
        iVar14 = 1;
        goto LAB_141b_0b8a;
      }
      bVar13 = *(byte *)0xaba6;
      if ((bVar13 & 0xfc) != 0xb4) {
        uVar6 = 0x42eb;
        goto LAB_141b_0b01;
      }
      local_16 = -1;
    }
    iVar14 = 0;
  }
LAB_141b_0b8a:
  local_14 = local_16 + (uint)*(byte *)0x5896;
  iVar7 = iVar14 + (uint)*(byte *)0x5897;
  iVar8 = local_16 + 5;
  iVar9 = iVar14 + 5;
  bVar5 = bVar13 & 3;
  if (bVar5 == 0) {
    local_16 = 0;
    iVar14 = -1;
    goto LAB_141b_0bee;
  }
  if (bVar5 == 1) {
    local_16 = 1;
  }
  else {
    if (bVar5 == 2) {
      local_16 = 0;
      iVar14 = 1;
      goto LAB_141b_0bee;
    }
    if (bVar5 != 3) goto LAB_141b_0bee;
    local_16 = -1;
  }
  iVar14 = 0;
LAB_141b_0bee:
  func_0x00019a80(0x42f2,bVar13,iVar14,iVar7);
  func_0x0001c5de(300,5,200,1000);
  func_0x0001fd06();
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
    iVar10 = func_0x0001b932(*(undefined *)0x5895,iVar7,local_14);
    if (iVar10 == 0) {
      pbVar11 = (byte *)func_0x0001c632(iVar7,local_14);
      bVar13 = *pbVar11;
      if ((0x96 < bVar13) && ((bVar13 < 0x9a || ((0xb7 < bVar13 && (bVar13 < 0xbc)))))) {
        bVar3 = true;
      }
    }
    else if ((((0x1b < iVar10) && (local_10 = (byte)iVar10, (local_10 & 0xf8) != 0x78)) &&
             ((local_10 & 0xfc) != 0x2f)) || ((iVar10 == 0x10 || (iVar10 == 0x11)))) {
      bVar4 = true;
      local_a = *(int *)0x5876;
    }
  }
  func_0x0001fe1a(1,local_12,local_e,iVar9,iVar8);
  if ((bVar3) || (bVar4)) {
    func_0x0001b752(iVar7,local_14);
  }
  if (bVar3) {
    func_0x00019a80(0x42fa);
    puVar12 = (undefined *)func_0x0001c632(iVar7,local_14);
    *puVar12 = 0x44;
    *(undefined *)0x24e6 = 1;
    *(undefined *)0x594f = 0;
  }
  if ((bVar4) && (local_a != 0)) {
    func_0x0001bca4(local_a,0,0,0,0,0,0);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    if (*(byte *)0x5888 < 6) {
      *(undefined *)0x5888 = 0;
    }
    else {
      pcVar2 = (char *)0x5888;
      *pcVar2 = *pcVar2 + -5;
    }
    iVar14 = func_0x0001fd4e(local_a);
    if (iVar14 == -1) {
      return;
    }
    func_0x0001fd36(iVar14);
    func_0x0001fd42(iVar14);
  }
  if ((bVar4) && (local_a == 0)) {
    func_0x0001acd8();
  }
  return;
}



void __cdecl16near cmds_141b_0ddc(void)

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
  
  func_0x00019a80(0x4318);
  iVar3 = func_0x0001b0be();
  if (iVar3 == -1) {
    uVar4 = 0x4320;
  }
  else {
    func_0x00019a80(iVar3 * 0x20 + 0x55a8);
    if (iVar3 == 0) {
      func_0x00019a80(0x4329);
      func_0x00019a80(0x55a8);
      uVar4 = 0x432c;
    }
    else {
      func_0x00019a80(0x4339);
      iVar5 = func_0x0001b0be();
      if (iVar5 == -1) {
        uVar4 = 0x4340;
      }
      else {
        func_0x00019a80(iVar5 * 0x20 + 0x55a8);
        if (iVar5 != 0) {
          func_0x00019a80(0x4359);
          puVar6 = (undefined2 *)(iVar3 * 0x20 + 0x55a8);
          puVar7 = local_22;
          puVar8 = puVar6;
          for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
            puVar2 = puVar7;
            puVar7 = puVar7 + 1;
            puVar1 = puVar8;
            puVar8 = puVar8 + 1;
            *puVar2 = *puVar1;
          }
          puVar8 = (undefined2 *)(iVar5 * 0x20 + 0x55a8);
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
          *(undefined *)0xa9fa = 1;
          return;
        }
        func_0x00019a80(0x4349);
        func_0x00019a80(0x55a8);
        uVar4 = 0x434c;
      }
    }
  }
  func_0x00019a80(uVar4);
  return;
}



void __cdecl16near cmds_141b_0eb4(void)

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
  
  if ((*(byte *)0x5893 < 0x20) && (0x29 < *(byte *)0x5893)) {
    uVar4 = 0x435c;
    goto LAB_141b_0ecc;
  }
  pbVar5 = (byte *)func_0x0001c632(*(undefined *)0x5897,*(undefined *)0x5896);
  bVar2 = *pbVar5;
  bVar3 = *(byte *)0x587c & 0xfc;
  if (bVar3 == 0x10) {
    func_0x00019a80(0x43a4);
    local_4 = *(char *)0x587c + -2;
LAB_141b_0f43:
    *(undefined *)0x587c = 0x1c;
LAB_141b_0ff4:
    iVar6 = func_0x0001bb14();
    func_0x0001bca4(iVar6,*(undefined *)0x5c5f,*(undefined *)0x5895,*(undefined *)0x5897,
                    *(undefined *)0x5896,local_4,local_4);
    *(char *)(iVar6 * 8 + 0x5c61) = local_a;
    func_0x0001ab30();
  }
  else {
    if (bVar3 == 0x14) {
      iVar6 = cmds_141b_073e();
      if ((iVar6 != 0) || (iVar6 = func_0x0001ae7c(bVar2,0x1c), iVar6 != 0)) {
        func_0x00019a80(0x437d);
        local_4 = '\x1b';
        goto LAB_141b_0f43;
      }
      iVar6 = cmds_141b_073e();
      if (iVar6 == 0) {
        uVar4 = 0x4386;
      }
      else {
        uVar4 = 0x4398;
      }
    }
    else if (bVar3 == 0x1c) {
      uVar4 = 0x4368;
    }
    else {
      if (bVar3 != 0x20) {
        if (bVar3 == 0x24) {
          func_0x00019a80(0x43d2);
          iVar6 = cmds_141b_073e();
          if (iVar6 == 0) {
            if (*(char *)0x5c61 != '\0') {
              local_4 = *(char *)0x587c;
              pcVar1 = (char *)0x587c;
              *pcVar1 = *pcVar1 + '\x04';
              local_a = *(char *)0x5c61 + -1;
              goto LAB_141b_0ff4;
            }
            if (*(char *)0x57b0 == '\0') {
              uVar4 = 0x43d9;
              goto LAB_141b_0ecc;
            }
            pcVar1 = (char *)0x57b0;
            *pcVar1 = *pcVar1 + -1;
            local_4 = *(char *)0x587c;
            *(undefined *)0x587c = 0x14;
          }
          else {
            local_4 = *(char *)0x587c;
            *(undefined *)0x587c = 0x1c;
          }
          local_a = *(char *)0x5c61;
        }
        else if (bVar3 == 0x28) {
          iVar6 = cmds_141b_073e();
          if (iVar6 == 0) {
            uVar4 = 0x43ac;
          }
          else {
            if ((bVar2 & 0xfe) != 0x6a) {
              func_0x00019a80(0x43ca);
              local_4 = *(char *)0x587c;
              goto LAB_141b_0f43;
            }
            uVar4 = 0x43be;
          }
          goto LAB_141b_0ecc;
        }
        goto LAB_141b_0ff4;
      }
      uVar4 = 0x436f;
    }
LAB_141b_0ecc:
    func_0x00019a80(uVar4);
  }
  return;
}



undefined2 cmds_141b_1030(undefined2 param_1)

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
  
  if (((*(char *)0x5893 == '\x1e') || (*(char *)0x5893 == '\x1f')) || (*(char *)0x5893 == ' ')) {
    iVar9 = 0;
    puVar6 = (undefined2 *)0x444a;
    do {
      iVar3 = func_0x0001f14e(param_1,*puVar6);
      if (-1 < iVar3) break;
      puVar6 = puVar6 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    if (((iVar9 != 3) && (1 < *(byte *)0x5897)) && (*(char *)(iVar9 + 0x58c8) != -1)) {
      iVar3 = 0;
      pcVar7 = (char *)0x5c5a;
      do {
        if (*pcVar7 == -4) {
          uVar4 = func_0x00019a80(0x4418);
          return uVar4;
        }
        pcVar7 = pcVar7 + 8;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      local_a = (undefined)iVar9;
      *(undefined *)0x58cb = local_a;
      iVar3 = func_0x0001bb14();
      func_0x0001bca4(iVar3,0,*(undefined *)0x5895,*(byte *)0x5897 - 2,*(undefined *)0x5896,0xfc,
                      0xfc);
      iVar9 = 0x1f;
      do {
        iVar5 = iVar9;
        if (*(char *)(iVar5 + 0x659e) == '\0') break;
        iVar9 = iVar5 + -1;
        iVar5 = 0x1f;
      } while (-1 < iVar9);
      iVar9 = iVar5 * 0x10;
      *(undefined2 *)(iVar9 + 0x5f5e) = 1;
      *(int *)(iVar9 + 0x5f6a) = iVar3;
      *(uint *)(iVar9 + 0x5f60) = (uint)*(byte *)0x5896;
      *(int *)(iVar9 + 0x5f62) = *(byte *)0x5897 - 2;
      *(uint *)(iVar9 + 0x5f64) = (uint)*(byte *)0x5895;
      puVar6 = (undefined2 *)(iVar9 + 0x5d6a);
      for (iVar9 = 2; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = 0;
      }
      cVar1 = *(char *)0x5897;
      iVar9 = 0;
      do {
        iVar8 = iVar5 * 0x10 + iVar9;
        *(undefined *)(iVar8 + 0x5d5e) = 6;
        *(undefined *)(iVar8 + 0x5d61) = *(undefined *)0x5896;
        *(char *)(iVar8 + 0x5d64) = cVar1 + -2;
        *(undefined *)(iVar8 + 0x5d67) = *(undefined *)0x5895;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 3);
      *(undefined *)(iVar5 + 0x659e) = 0xfc;
      func_0x00019a80(0x4425);
      func_0x0001a3c2(2,2000,30000,1,0x28a0);
      iVar3 = iVar3 * 8;
      *(undefined *)(iVar3 + 0x5c5b) = 0x16;
      *(undefined *)(iVar3 + 0x5c5a) = 0x16;
      func_0x00019298(3,5,0x1fc);
      *(undefined *)(iVar3 + 0x5c5b) = 0xfc;
      *(undefined *)(iVar3 + 0x5c5a) = 0xfc;
      return 0;
    }
    uVar4 = 0x440b;
  }
  else {
    uVar4 = 0x443c;
  }
  uVar4 = func_0x00019a80(uVar4);
  return uVar4;
}



void cmds_141b_1202(uint param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined local_12 [16];
  
  func_0x00019a80(0x4450);
  func_0x0001bd4c(0xf,local_12);
  iVar2 = func_0x0001f14e(local_12,*(undefined2 *)(param_3 * 2 + 0x1f4e));
  bVar5 = iVar2 != -1;
  iVar2 = 3;
  do {
    func_0x00019a80(0x4479);
    func_0x0001bd4c(0xf,local_12);
    iVar3 = func_0x0001f14e(local_12,*(undefined2 *)(param_3 * 2 + 0x1f5e));
    if (iVar3 == -1) {
      bVar5 = false;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (((bVar5) && (*(byte *)(param_3 + 0x1f6e) == param_2)) &&
     (*(byte *)(param_3 + 0x1f76) == param_1)) {
    pbVar1 = (byte *)(param_3 + 0x58d8);
    *pbVar1 = *pbVar1 & 0x7f;
    func_0x00019a80(0x4482);
    func_0x0001b2a2();
    puVar4 = (undefined *)func_0x0001c632(param_1,param_2);
    *puVar4 = 0x19;
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    func_0x000198ea(10);
  }
  return;
}



void cmds_141b_12c8(undefined2 param_1)

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
  local_e = (undefined2 *)0x4502;
  do {
    uVar3 = func_0x0001f14e(param_1,*local_e);
    if (uVar3 < 0x8000) {
      func_0x00019a80(0x44d7);
      func_0x0001b2a2();
      local_c = *(char *)0xaba6;
      if (((*(char *)(iVar5 + 0x4512) == local_c) || (local_c == -0x21)) || (local_c == '\x1a')) {
        local_6 = -1;
LAB_141b_1315:
        iVar6 = 0;
      }
      else {
        local_c = *(char *)0xabc7;
        if (((*(char *)(iVar5 + 0x4512) == local_c) || (local_c == -0x21)) || (local_c == '\x1a')) {
          local_6 = 0;
          iVar6 = 1;
        }
        else {
          local_c = *(char *)0xaba8;
          if (((*(char *)(iVar5 + 0x4512) == local_c) || (local_c == -0x21)) || (local_c == '\x1a'))
          {
            local_6 = 1;
            goto LAB_141b_1315;
          }
          local_c = *(char *)0xab87;
          if (((*(char *)(iVar5 + 0x4512) != local_c) && (local_c != -0x21)) && (local_c != '\x1a'))
          break;
          local_6 = 0;
          iVar6 = -1;
        }
      }
      if (local_c == '\x1a') {
        cmds_141b_1202(iVar6 + (uint)*(byte *)0x5897,local_6 + (uint)*(byte *)0x5896,iVar5);
        return;
      }
      if ((local_6 + (uint)*(byte *)0x5896 == (uint)*(byte *)(iVar5 + 0x1eaa)) &&
         (iVar6 + (uint)*(byte *)0x5897 == (uint)*(byte *)(iVar5 + 0x1ed2))) {
        pbVar1 = (byte *)(iVar5 + 0x58d0);
        *pbVar1 = *pbVar1 ^ 0x80;
        pbVar4 = (byte *)func_0x0001c632(iVar6 + (uint)*(byte *)0x5897,
                                         local_6 + (uint)*(byte *)0x5896);
        pbVar1 = pbVar4;
        *pbVar1 = *pbVar1 ^ *(byte *)(iVar5 + 0x4512) ^ 0xdf;
        pbVar1 = (byte *)0x24e6;
        *pbVar1 = *pbVar1 | 2;
      }
      bVar2 = true;
      break;
    }
    local_e = local_e + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  if (!bVar2) {
    func_0x00019a80(0x44f4);
  }
  return;
}



undefined2 __cdecl16near cmds_141b_1418(void)

{
  char *pcVar1;
  undefined2 unaff_DS;
  undefined2 local_24;
  char local_22 [32];
  
  local_24 = 1;
  if (((*(byte *)0x587c & 0xf8) == 0x20) && (*(byte *)0x5893 < 0x80)) {
    if ((*(byte *)0x587c & 0xfc) == 0x20) {
      local_24 = func_0x00019a80(0x451a);
      pcVar1 = (char *)0x587c;
      *pcVar1 = *pcVar1 + '\x04';
    }
    else {
      local_24 = func_0x00019a80(0x4521);
      pcVar1 = (char *)0x587c;
      *pcVar1 = *pcVar1 + -4;
    }
  }
  else {
    func_0x00019a80(0x4529);
    func_0x0001bd4c(0x1e,local_22);
    if (local_22[0] == '\0') {
      local_24 = func_0x00019a80(0x4531);
    }
    else {
      func_0x000198ea(10);
      if ((*(char *)0x5893 == '\0') || (0x20 < *(byte *)0x5893)) {
        if (*(char *)0x5893 == '\0') {
          cmds_141b_12c8(local_22);
        }
        else {
          func_0x00019a80(0x453a);
        }
      }
      else {
        local_24 = cmds_141b_1030(local_22);
      }
    }
  }
  return local_24;
}



undefined2 cmds_141b_14ba(byte param_1)

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



uint cmds_141b_1504(int param_1,uint param_2,int param_3,int param_4)

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



void cmds_141b_1548(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,undefined param_7,byte param_8)

{
  undefined uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x4547);
  pbVar2 = (byte *)func_0x0001c632(param_3,param_4);
  *pbVar2 = param_8;
  puVar3 = (undefined *)func_0x0001c632(param_5,param_6);
  *puVar3 = param_7;
  param_8 = param_8 & 0xfc;
  if ((param_8 == 0x90) || (param_8 == 0xb4)) {
    uVar1 = cmds_141b_1504(0,param_8,param_1,param_2);
    puVar3 = (undefined *)func_0x0001c632(param_3,param_4);
    *puVar3 = uVar1;
  }
  return;
}



void cmds_141b_15b0(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5,undefined2 param_6,byte param_7,undefined param_8)

{
  undefined uVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x4550);
  pbVar2 = (byte *)func_0x0001c632(param_5,param_6);
  *pbVar2 = param_7;
  puVar3 = (undefined *)func_0x0001c632(param_3,param_4);
  *puVar3 = param_8;
  param_7 = param_7 & 0xfc;
  if ((param_7 == 0x90) || (param_7 == 0xb4)) {
    uVar1 = cmds_141b_1504(1,param_7,param_1,param_2);
    puVar3 = (undefined *)func_0x0001c632(param_5,param_6);
    *puVar3 = uVar1;
  }
  return;
}



void __cdecl16near cmds_141b_161a(void)

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
  
  func_0x0001bbfc(*(undefined *)0x5951,*(undefined *)0x5950,*(undefined *)0x594f);
  iVar7 = func_0x0001b81c();
  if (iVar7 == 0) {
    return;
  }
  iVar7 = *(int *)0x5876;
  iVar2 = *(int *)0x5878;
  if (0x7f < *(byte *)0x5893) {
    local_c = *(undefined *)0x5896;
    local_e = *(undefined *)0x5897;
    iVar15 = (uint)*(byte *)0x589e * 8;
    *(undefined *)0x5896 = *(undefined *)(iVar15 + -0x45e6);
    *(undefined *)0x5897 = *(undefined *)(iVar15 + -0x45e5);
  }
  iVar15 = iVar7 + (uint)*(byte *)0x5896;
  iVar8 = iVar2 + (uint)*(byte *)0x5897;
  if ((0x7f < *(byte *)0x5893) && (iVar9 = func_0x000100ea(iVar8,iVar15), iVar9 != 0)) {
    return;
  }
  pbVar10 = (byte *)func_0x0001c632(iVar8,iVar15);
  bVar3 = *pbVar10;
  iVar9 = func_0x0001b8be(*(undefined *)0x5895,iVar8,iVar15);
  if ((iVar9 == 0) && (iVar9 = cmds_141b_14ba(bVar3), iVar9 != 0)) {
    if ((bVar3 & 0xfc) == 0xb4) {
      cVar6 = 'E';
    }
    else {
      cVar6 = 'D';
    }
    iVar9 = iVar15 + iVar7;
    iVar12 = iVar8 + iVar2;
    pcVar13 = (char *)func_0x0001c632(iVar12,iVar9);
    cVar4 = *pcVar13;
    pcVar13 = (char *)func_0x0001c632(*(undefined *)0x5897,*(undefined *)0x5896);
    cVar5 = *pcVar13;
    iVar14 = func_0x0001b8be(*(undefined *)0x5895,iVar12,iVar9);
    if ((iVar14 == 0) && (cVar4 == cVar6)) {
      cmds_141b_1548(iVar2,iVar7,iVar12,iVar9,iVar8,iVar15,cVar4,bVar3);
    }
    else {
      if (cVar5 != cVar6) {
        uVar11 = 0x4567;
        goto LAB_141b_16d3;
      }
      cmds_141b_15b0(iVar2,iVar7,iVar8,iVar15,*(undefined *)0x5897,*(undefined *)0x5896,bVar3,cVar5);
    }
    local_12 = (char)iVar7;
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + local_12;
    local_18 = (char)iVar2;
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + local_18;
    *(undefined *)0x24e6 = 1;
    if (0x7f < *(byte *)0x5893) {
      iVar7 = (uint)*(byte *)0x589e * 8;
      bVar3 = *(byte *)(iVar7 + -0x45e9);
      pcVar1 = (char *)(iVar7 + -0x45e6);
      *pcVar1 = *pcVar1 + local_12;
      pcVar1 = (char *)(iVar7 + -0x45e5);
      *pcVar1 = *pcVar1 + local_18;
      iVar7 = (uint)bVar3 * 8;
      pcVar1 = (char *)(iVar7 + 0x5c5c);
      *pcVar1 = *pcVar1 + local_12;
      pcVar1 = (char *)(iVar7 + 0x5c5d);
      *pcVar1 = *pcVar1 + local_18;
      *(undefined *)0x5896 = local_c;
      *(undefined *)0x5897 = local_e;
      func_0x0001db40();
    }
  }
  else {
    uVar11 = 0x4559;
LAB_141b_16d3:
    func_0x00019a80(uVar11);
  }
  return;
}



int __cdecl16near cmds_141b_17ec(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_6;
  
  func_0x00019a80(0x4574);
  local_6 = 0;
  pbVar4 = (byte *)0xba16;
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
    if ((*(byte *)0x58a1 & 0x80) == 0) {
      if (*(char *)0x58a3 != '\0') goto LAB_141b_184d;
      uVar2 = 0x4587;
    }
    else {
      uVar2 = 0x457b;
    }
    func_0x00019a80(uVar2);
    local_6 = 1;
  }
LAB_141b_184d:
  if (local_6 == 0) {
    func_0x000198ea(0x21);
    iVar3 = 0;
    pcVar5 = (char *)0xba16;
    do {
      if (*pcVar5 != '\0') {
        func_0x0001ffb2(-1 - iVar3);
        func_0x0001db40();
      }
      pcVar5 = pcVar5 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    iVar3 = 0;
    pcVar5 = (char *)0x5c5a;
    do {
      if (*pcVar5 != '\0') {
        func_0x0001ffb2(iVar3 + 1);
        func_0x0001db40();
      }
      pcVar5 = pcVar5 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
    func_0x0001c5de(0x28,1,2000,0x4b0);
  }
  *(undefined *)0xa9fa = 1;
  return local_6;
}



uint __cdecl16near cmds_141b_18be(void)

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
    if (*(char *)(local_8 + 0x5850) != '\0') {
      local_12[iVar3] = (byte)local_8;
      iVar3 = iVar3 + 1;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  func_0x00019dc4(1);
  func_0x00019e52(9,0x26,1,0x18,1);
  func_0x000198ea(0xff);
  func_0x00019e52(9,0x27,1,0x18,1);
  func_0x0001d12c();
  func_0x0001d080(0x8f64);
  for (iVar4 = 0; iVar4 != iVar3; iVar4 = iVar4 + 1) {
    func_0x000198ea(10);
    func_0x000198ea(0x20);
    uVar5 = (uint)local_12[iVar4];
    func_0x00019c6e(0x30,2,*(undefined *)(uVar5 + 0x5850));
    func_0x000198ea(0x20);
    func_0x00019a80(*(undefined2 *)(uVar5 * 2 + 0x19d2));
  }
  local_6 = 0;
  local_8 = iVar4;
  func_0x0001ac58(1);
  local_4 = 0;
  uVar5 = 0;
  do {
    func_0x00019dc4(2);
    local_a = func_0x0001a89c();
    if (local_a == 4) {
LAB_141b_19d0:
      if (local_6 < iVar3 + -1) {
        func_0x0001ac58(local_6 + 1);
        local_6 = local_6 + 1;
LAB_141b_19be:
        func_0x0001ac58(local_6 + 1);
      }
    }
    else if (local_a < 5) {
      if (local_a != 1) {
        if (local_a == 2) goto LAB_141b_19d0;
        if (local_a != 3) goto LAB_141b_19c5;
      }
      if (0 < local_6) {
        func_0x0001ac58(local_6 + 1);
        local_6 = local_6 + -1;
        goto LAB_141b_19be;
      }
    }
    else {
      if (local_a == 0xd) {
LAB_141b_19ee:
        uVar1 = 0x80 >> (local_12[local_6] & 0x1f);
        uVar5 = uVar5 ^ uVar1;
        func_0x00019dc4(1);
        func_0x00019e22(local_6 + 1,3);
        func_0x000198ea(0xfd);
        if ((uVar1 & uVar5) == 0) {
          uVar2 = 0x20;
        }
        else {
          uVar2 = 0xf;
        }
        func_0x000198ea(uVar2);
        uVar2 = 0xfd;
      }
      else {
        if (local_a != 0x1b) {
          if (local_a != 0x20) {
            if (local_a == 0x4d) {
              local_4 = 1;
              func_0x00019a80(0x8f6e);
            }
            goto LAB_141b_19c5;
          }
          goto LAB_141b_19ee;
        }
        uVar5 = 0xffff;
        local_4 = 1;
        uVar2 = 10;
      }
      func_0x000198ea(uVar2);
    }
LAB_141b_19c5:
    if (local_4 != 0) {
      func_0x0001ac58(local_6 + 1);
      func_0x00019dc4(2);
      return uVar5;
    }
  } while( true );
}



uint cmds_141b_1a70(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  do {
    bVar1 = true;
    func_0x00019a80(0x8f72);
    uVar2 = func_0x0001bdce(2);
    if (uVar2 != 0) {
      uVar4 = 0x80;
      iVar3 = 0;
      do {
        if (((param_1 & uVar4) != 0) && (*(byte *)(iVar3 + 0x5850) < uVar2)) {
          func_0x00019a80(0x8f7e);
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



void __cdecl16near cmds_141b_1ad8(void)

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
    iVar5 = iVar5 + (uint)*(byte *)(iVar7 + 0x5850);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if (iVar5 == 0) {
    func_0x00019a80(0x8f98);
    return;
  }
  func_0x00019a80(0x8fac);
  iVar5 = func_0x000102be();
  if (iVar5 == -1) {
    uVar2 = 0x8fbe;
  }
  else {
    func_0x000198ea(10);
    func_0x000198ea(0x1b);
    func_0x000198ea(0x2c);
    func_0x000198ea(0x1a);
    func_0x000198ea(0x2c);
    func_0x000198ea(0x18);
    func_0x000198ea(0x2c);
    func_0x000198ea(0x19);
    func_0x00019a80(0x8fc6);
    uVar3 = cmds_141b_18be();
    if (((int)uVar3 < 0) || (iVar4 = cmds_141b_1a70(uVar3), iVar4 < 1)) goto LAB_141b_1c11;
    if (uVar3 != 0) {
      func_0x00019a80(0x8ff0);
      if (*(byte *)0x5893 < 0x21) {
        func_0x0001bd16(10);
      }
      else {
        func_0x0001a32a(10);
      }
      uVar6 = 0x80;
      iVar7 = 0;
      do {
        if ((uVar6 & uVar3) != 0) {
          pcVar1 = (char *)(iVar7 + 0x5850);
          *pcVar1 = *pcVar1 - (char)iVar4;
        }
        uVar6 = (int)uVar6 >> 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 8);
      if ((iVar5 < 0) || (*(byte *)(iVar5 + 0x1cc0) != uVar3)) {
        func_0x000198ea(10);
        func_0x0001bc2c();
        func_0x0001b200(*(undefined2 *)0x5876);
      }
      else {
        func_0x00019a80(0x8ffc);
        pcVar1 = (char *)(iVar5 + 0x57f0);
        *pcVar1 = *pcVar1 + (char)iVar4;
        if (99 < *(byte *)(iVar5 + 0x57f0)) {
          *(undefined *)(iVar5 + 0x57f0) = 99;
        }
      }
      goto LAB_141b_1c11;
    }
    uVar2 = 0x9004;
  }
  func_0x00019a80(uVar2);
LAB_141b_1c11:
  func_0x0001d050();
  func_0x0001d16c();
  func_0x0001ab30(iVar7);
  return;
}



void __cdecl16near cmds_141b_1c20(void)

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
  
  if (*(char *)0x57af == '\0') {
    uVar3 = 0x9016;
  }
  else if (*(char *)0x587c == '\x1c') {
    iVar4 = func_0x0001b81c();
    if (iVar4 == 0) {
      return;
    }
    uVar3 = *(undefined2 *)0x5876;
    uVar1 = *(undefined2 *)0x5878;
    pcVar5 = (char *)func_0x0001c632((uint)*(byte *)0x5897 + *(int *)0x5878,
                                     (uint)*(byte *)0x5896 + *(int *)0x5876);
    cVar2 = *pcVar5;
    if (cVar2 == '\r') {
      uVar3 = 0x902c;
    }
    else {
      if (cVar2 == '\f') {
        if (*(char *)0x585b != '\0') {
          pcVar5 = (char *)0x55b3;
          local_12 = (byte *)0x55b5;
          uVar8 = 0;
          do {
            if ((*pcVar5 != 'D') && (uVar6 = func_0x0001a2c2(0x1e,1), *local_12 < uVar6)) {
              func_0x00019a80(0x904a);
              uVar7 = func_0x0001a2c2(5,1,uVar8);
              func_0x0001ac82(uVar7);
            }
            pcVar5 = pcVar5 + 0x20;
            local_12 = local_12 + 0x20;
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(byte *)0x585b);
        }
        func_0x0001fdf6(uVar1,uVar3);
        return;
      }
      uVar3 = 0x903a;
    }
  }
  else {
    uVar3 = 0x9022;
  }
  func_0x00019a80(uVar3);
  return;
}


