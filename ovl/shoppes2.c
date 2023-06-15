typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void shoppes2_1641_0000(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  *(undefined2 *)0xb118 = 0;
  *(undefined2 *)0xbd1c = 0;
  *(undefined2 *)0xbd1a = 0;
  uVar2 = (uint)*(byte *)0x585b;
  if (uVar2 != 0) {
    pcVar5 = (char *)0x55b3;
    iVar6 = *(int *)0xbd1a;
    iVar4 = *(int *)0xbd1c;
    uVar3 = 0;
    do {
      if (*pcVar5 != 'D') {
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 1;
        piVar1 = (int *)0xb118;
        *piVar1 = *piVar1 + param_1;
      }
      pcVar5 = pcVar5 + 0x20;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
    *(int *)0xbd1a = iVar6;
    *(int *)0xbd1c = iVar4;
  }
  ultima_1000_16ba(10);
  ultima_1000_16ba(10);
  return;
}



void __cdecl16near shoppes2_1641_006a(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xbd1c;
  if (iVar1 == 2) {
    uVar2 = 0x9aa8;
  }
  else if (iVar1 == 3) {
    uVar2 = 0x9aac;
  }
  else if (iVar1 == 4) {
    uVar2 = 0x9ab2;
  }
  else if (iVar1 == 5) {
    uVar2 = 0x9ab8;
  }
  else {
    if (iVar1 != 6) {
      return;
    }
    uVar2 = 0x9abe;
  }
  ultima_1000_1850(uVar2);
  return;
}



void __cdecl16near shoppes2_1641_00ac(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  *(undefined *)0x587b = 0xff;
  if (*(char *)0x55b1 == '\v') {
    uVar1 = 0x9ac2;
  }
  else {
    uVar1 = 0x9ac6;
  }
  ultima_1000_1850(uVar1);
  return;
}



undefined2 __cdecl16near shoppes2_1641_00dc(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 unaff_DS;
  uint uVar6;
  
  ultima_1000_16ba(0x22);
  ultima_1000_1850(0x9ace);
  ultima_1000_1a3e(0x20,1,*(undefined2 *)0xb118);
  ultima_1000_1850(0x9adc);
  shoppes2_1641_006a();
  ultima_1000_1850(0x9aec);
  shoppes2_1641_00ac();
  ultima_1000_16ba(0x2e);
  iVar2 = *(int *)0x57aa;
  piVar1 = (int *)0xb118;
  if (*piVar1 != iVar2 && iVar2 <= *piVar1) {
    ultima_1000_1850(0x9af6);
    ultima_1000_1850(*(undefined2 *)0xaafe);
    ultima_1000_16ba(0x2e);
    ultima_1000_16ba(10);
    return 1;
  }
  piVar1 = (int *)0x57aa;
  *piVar1 = *piVar1 - *(int *)0xb118;
  func_0x0001020a();
  if (*(int *)0xbd1a == 0) {
    piVar1 = (int *)0xbd20;
    *piVar1 = *piVar1 + 1;
  }
  else {
    ultima_1000_3f14(9999,*(undefined2 *)0xbd1a,0x57a8);
    uVar6 = (uint)*(byte *)0x5896;
    pcVar3 = (char *)ultima_1000_4402(*(byte *)0x5897 - 1,uVar6);
    if (*pcVar3 == -0x6b) {
      uVar4 = (uint)*(byte *)0x5896;
      puVar5 = (undefined *)ultima_1000_4402(*(byte *)0x5897 - 1,uVar4);
      *puVar5 = 0x9b;
      *(undefined2 *)0xbd1e = 0x9b;
    }
    else {
      uVar4 = (uint)*(byte *)0x5896;
      pcVar3 = (char *)ultima_1000_4402(*(byte *)0x5897 + 1,uVar4);
      if (*pcVar3 != -0x6b) goto LAB_1000_65d8;
      uVar6 = 0x65c7;
      puVar5 = (undefined *)ultima_1000_4402(*(byte *)0x5897 + 1,*(undefined *)0x5896);
      *puVar5 = 0x9a;
      *(undefined2 *)0xbd1e = 0x9a;
    }
    ultima_1000_5910(uVar4,uVar6);
  }
LAB_1000_65d8:
  ultima_1000_1850(0x9b16);
  return 0;
}



void __cdecl16near shoppes2_1641_01d2(void)

{
  undefined2 unaff_DS;
  
  ultima_1000_16ba(*(undefined *)(*(byte *)0xbd16 + 0x4c1e));
  shoppes2_1641_0000(*(undefined2 *)(*(int *)0xb114 * 2 + 0x4c36));
  shoppes2_1641_00dc();
  return;
}



undefined2 __cdecl16near shoppes2_1641_01f4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  ultima_1000_16ba(*(undefined *)(*(byte *)0xbd16 + 0x4c24));
  if (*(int *)0xbd20 == 3) {
    ultima_1000_1850(0x9b22);
    shoppes2_1641_00ac();
    ultima_1000_1850(0x9b38);
    ultima_1000_1850(*(undefined2 *)0xaafe);
    ultima_1000_1850(0x9b42);
    do {
      cVar3 = ultima_1000_266c();
      if (cVar3 == 'Y') {
        ultima_1000_1850(0x9b6c);
        goto LAB_1641_0241;
      }
      if (cVar3 == 'N') {
        ultima_1000_1850(0x9b72);
        *(undefined *)0x5957 = 0x19;
        ultima_1000_3f36(1,0x5888);
      }
    } while ((cVar3 != 'Y') && (cVar3 != 'N'));
  }
  shoppes2_1641_0000(1);
  if (*(char *)(*(byte *)0xbd16 + 0x4c24) == 'W') {
    ultima_1000_1850(0x9b76);
    shoppes2_1641_00ac();
    ultima_1000_1850(0x9b88);
    ultima_1000_1850(0x9b8c);
    ultima_1000_1850(0x9b9e);
    ultima_1000_1850(0x9bb0);
    ultima_1000_1850(0x9bc2);
    ultima_1000_1850(0x9bd4);
    ultima_1000_1850(0x9be6);
    ultima_1000_1850(0x9bfa);
    do {
      bVar4 = ultima_1000_266c();
      if (bVar4 == 0x20) goto LAB_1000_66e2;
    } while ((bVar4 < 0x41) || (0x46 < bVar4));
    ultima_1000_16ba(bVar4);
    ultima_1000_1850(0x9c08);
    shoppes2_1641_00ac();
    ultima_1000_16ba(0x2e);
    iVar2 = *(int *)0x57aa;
    piVar1 = (int *)((uint)(byte)(bVar4 + 0xbf) * 2 + 0x4c48);
    if (*piVar1 == iVar2 || *piVar1 < iVar2) {
      piVar1 = (int *)0x57aa;
      *piVar1 = *piVar1 - *(int *)((uint)(byte)(bVar4 + 0xbf) * 2 + 0x4c48);
      func_0x0001020a();
      piVar1 = (int *)0xbd20;
      *piVar1 = *piVar1 + 1;
      bVar4 = 0x40;
      ultima_1000_1850();
LAB_1000_66e2:
      ultima_1000_16ba(10);
      ultima_1000_16ba(10);
      if (bVar4 == 0x20) {
        func_0x000101e6(0x1413);
        uVar5 = 2;
      }
      else {
LAB_1641_0241:
        uVar5 = 0;
      }
    }
    else {
      ultima_1000_1850(0x9c20);
      ultima_1000_1850(*(undefined2 *)0xaafe);
      ultima_1000_16ba(0x2e);
      ultima_1000_16ba(10);
      uVar5 = 1;
    }
  }
  else {
    *(undefined2 *)0xbd1a = 0;
    uVar5 = shoppes2_1641_00dc();
  }
  return uVar5;
}



undefined2 shoppes2_1641_0380(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  ultima_1000_16ba(*(undefined *)(*(byte *)0xbd16 + 0x4c2a));
  ultima_1000_16ba(10);
  ultima_1000_16ba(10);
  *(undefined2 *)0xb118 = *(undefined2 *)(*(int *)0xb114 * 2 + 0x4c54);
  iVar4 = *(int *)0xb118;
  uVar2 = (uint)*(byte *)(param_1 * 0x20 + 0x55b6) * 3;
  iVar3 = uVar2 - 100;
  uVar6 = func_0x00018672(-iVar3,-((uint)(iVar3 != 0) - (uint)(uVar2 < 100)),iVar4,iVar4 >> 0xf,100,
                          0);
  iVar4 = func_0x000185d0(uVar6);
  piVar1 = (int *)0xb118;
  *piVar1 = *piVar1 + iVar4;
  ultima_1000_16ba(0x22);
  iVar4 = ultima_1000_2092(6,0);
  func_0x000101e6(*(undefined2 *)(iVar4 * 2 + 0x4c66));
  ultima_1000_1850(0x9c4a);
  iVar3 = ultima_1000_3b9e(2);
  iVar4 = iVar3;
  if (iVar3 == 0) {
    ultima_1000_1850(0x9c6a);
    uVar5 = 2;
  }
  else {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)0x57aa < *(int *)0xb118) {
        ultima_1000_1850(0x9c76);
        if (iVar3 - iVar4 == 0) {
          if (*(int *)0x57a8 < 3) {
            iVar4 = ultima_1000_2092(1,0,0x57a8);
            ultima_1000_3f14(9999,iVar4 + 1);
            func_0x000101e6(0x143f);
          }
          else {
            ultima_1000_1850(0x9c7a);
            ultima_1000_1850(0x9ca4);
            ultima_1000_1850(*(undefined2 *)0xaafe);
            ultima_1000_1850(0x9cac);
          }
          return 1;
        }
        ultima_1000_1850(0x9cb0);
        ultima_1000_1a3e(0x20,1,iVar3 - iVar4);
        ultima_1000_1850(0x9cca);
        return 0;
      }
      ultima_1000_3f54(*(undefined2 *)0xb118,0x57aa);
      ultima_1000_3f14(9999,0x19,0x57a8);
      if (*(int *)0x57a8 == 9999) break;
    }
    ultima_1000_1850(0x9cd0);
    func_0x0001020a();
    uVar5 = 0;
  }
  return uVar5;
}



undefined2 __cdecl16near shoppes2_1641_0508(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 *local_a;
  int local_8;
  
  ultima_1000_16ba(*(undefined *)(*(byte *)0xbd16 + 0x4c30));
  ultima_1000_1850(0x9efc);
  do {
    ultima_1000_1850(0x9f00);
    shoppes2_1641_00ac();
    ultima_1000_1850(0x9f24);
    ultima_1000_3b1c(0xf,0xbcf8);
    ultima_1000_1850(0x9f36);
    if (*(char *)0xbcf8 == '\0') {
      return 0;
    }
    iVar5 = 0;
    local_8 = -1;
    local_a = (undefined2 *)0x4c74;
    do {
      iVar3 = ultima_1000_6f1e(0xbcf8,*local_a);
      iVar2 = iVar5;
      if ((iVar3 == 0) || ((0 < iVar3 && (*(char *)(iVar3 + -0x4309) == ' ')))) break;
      local_a = local_a + 1;
      iVar5 = iVar5 + 1;
      iVar2 = local_8;
    } while (iVar5 < 0x1a);
    local_8 = iVar2;
    if (local_8 != -1) {
      *(undefined2 *)0xb118 = *(undefined2 *)(local_8 * 2 + 0x4d10);
      func_0x000101e6(0x134e);
      ultima_1000_1850(0x9f5c);
      iVar5 = 0;
      break;
    }
    ultima_1000_1850(0x9f3a);
  } while( true );
  while (iVar5 = ultima_1000_266c(), iVar5 != 0x59) {
    if (iVar5 == 0x4e) break;
  }
  if (iVar5 == 0x4e) {
    uVar4 = 0x9f6c;
  }
  else {
    ultima_1000_1850(0x9f72);
    iVar5 = *(int *)0x57aa;
    piVar1 = (int *)0xb118;
    if (*piVar1 != iVar5 && iVar5 <= *piVar1) {
      ultima_1000_1850(0x9f78);
      shoppes2_1641_00ac();
      func_0x000101e6(0x146a);
      return 1;
    }
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 - *(int *)0xb118;
    ultima_1000_2900();
    *(undefined2 *)0xab00 = *(undefined2 *)(local_8 * 2 + 0x4ca8);
    *(undefined2 *)0xac62 = *(undefined2 *)((uint)*(byte *)(local_8 + 0x4cdc) * 2 + 0x4cf6);
    iVar5 = ultima_1000_2092(3,0);
    func_0x000101e6(*(undefined2 *)(iVar5 * 2 + 0x4d44));
    ultima_1000_1850(0x9f82);
    ultima_1000_1850(*(undefined2 *)0xaafe);
    uVar4 = 0x9f8a;
  }
  ultima_1000_1850(uVar4);
  return 0;
}



void __cdecl16near shoppes2_1641_0664(void)

{
  undefined2 unaff_DS;
  
  func_0x00010222(*(undefined2 *)0xbd18);
  return;
}



void shoppes2_1641_066c(undefined2 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  *(undefined *)0xbd16 = *(undefined *)(*(int *)0xb114 + 0x4d4c);
  *(undefined2 *)0xbd18 = 0;
  *(undefined2 *)0xbd1e = 0;
  func_0x00010216();
  do {
    cVar1 = ultima_1000_266c();
    if ((cVar1 == 'N') || (cVar1 == ' ')) {
      uVar2 = 0x9f8e;
LAB_1000_6aa9:
      ultima_1000_1850(uVar2);
LAB_1641_069d:
      shoppes2_1641_0664();
      return;
    }
  } while (cVar1 != 'Y');
  ultima_1000_1850(0x9f92);
  func_0x000101e6(*(undefined2 *)((uint)*(byte *)0xbd16 * 2 + 0x4d56));
  ultima_1000_16ba(0x22);
  ultima_1000_16ba(0x20);
  iVar3 = ultima_1000_1f12();
  if (iVar3 < 0xf) goto LAB_1641_06dd;
  uVar2 = 10;
LAB_1000_6ae9:
  ultima_1000_16ba(uVar2);
LAB_1641_06dd:
  do {
    cVar1 = ultima_1000_266c();
    iVar3 = 0;
    if (((cVar1 == ' ') || (cVar1 == '\x1b')) || (cVar1 == '\r')) goto LAB_1641_069d;
    if (*(char *)(*(byte *)0xbd16 + 0x4c1e) == cVar1) {
      iVar3 = 0x6b13;
      iVar4 = shoppes2_1641_01d2();
      if (iVar4 != 0) {
        return;
      }
    }
    if ((*(char *)(*(byte *)0xbd16 + 0x4c24) == cVar1) && (iVar3 = shoppes2_1641_01f4(), iVar3 == 1)) {
      return;
    }
    if ((*(char *)(*(byte *)0xbd16 + 0x4c2a) == cVar1) &&
       (iVar3 = shoppes2_1641_0380(param_1), iVar3 == 1)) {
      return;
    }
    if (*(char *)(*(byte *)0xbd16 + 0x4c30) == cVar1) {
      if (*(int *)0xbd18 == 0) goto LAB_1641_06dd;
      iVar3 = 0x6b73;
      iVar4 = shoppes2_1641_0508();
      if (iVar4 != 0) {
        return;
      }
    }
    uVar5 = (uint)*(byte *)0xbd16;
    if ((((*(char *)(uVar5 + 0x4c1e) == cVar1) || (*(char *)(uVar5 + 0x4c24) == cVar1)) ||
        (*(char *)(uVar5 + 0x4c2a) == cVar1)) || (*(char *)(uVar5 + 0x4c30) == cVar1)) break;
  } while( true );
  if (iVar3 != 2) {
    *(undefined2 *)0xbd18 = 1;
  }
  ultima_1000_2900();
  ultima_1000_1850(0x9f9a);
  do {
    cVar1 = ultima_1000_266c();
    if (cVar1 == 'N') {
      uVar2 = 0x9fb6;
      goto LAB_1000_6aa9;
    }
  } while (cVar1 != 'Y');
  ultima_1000_1850(0x9fba);
  func_0x000101e6(*(undefined2 *)((uint)*(byte *)0xbd16 * 2 + 0x4d5e));
  ultima_1000_16ba(0x22);
  uVar2 = 0x20;
  goto LAB_1000_6ae9;
}



bool shoppes2_1641_07e2(int param_1)

{
  bool bVar1;
  undefined2 unaff_DS;
  
  bVar1 = param_1 <= *(int *)0x57aa;
  if (!bVar1) {
    func_0x000101e6(0x198e);
    func_0x0001019e(0x9fc2);
    *(undefined2 *)0xbd22 = 1;
  }
  return bVar1;
}



bool shoppes2_1641_080e(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  if (param_3 != 0) {
    func_0x000101e6(0x19ab);
    iVar2 = *(int *)0xb114;
    *(undefined *)0x5953 = *(undefined *)(iVar2 + 0x4d76);
    *(undefined *)0x5954 = *(undefined *)(iVar2 + 0x4d7a);
  }
  if (param_2 != 0) {
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 - *(int *)0xb118;
    *(undefined2 *)0xbd24 = 1;
    func_0x0001020a();
  }
  ultima_1000_2900();
  func_0x000101e6(0x19da);
  if (*(char *)(param_1 * 0x20 + 0x55b1) == 'F') {
    uVar4 = 0x9fcc;
  }
  else {
    uVar4 = 0x9fd4;
  }
  ultima_1000_1850(uVar4);
  ultima_1000_1850(0x9fd8);
  do {
    cVar3 = ultima_1000_266c();
    if (cVar3 == 'Y') break;
  } while (cVar3 != 'N');
  if (cVar3 != 'Y') {
    ultima_1000_1850(0x9fe0);
  }
  else {
    ultima_1000_1850(0x9fdc);
  }
  return cVar3 != 'Y';
}



void shoppes2_1641_08a8(int param_1)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 unaff_DS;
  undefined4 uVar9;
  
  iVar8 = 0;
  pbVar5 = (byte *)(param_1 * 0x20 + 0x55b6);
  do {
    func_0x000101e6(0x18eb);
    iVar6 = ultima_1000_266c();
    if ((iVar6 == 0x1b) || (iVar6 == 0x20)) {
      iVar8 = 1;
    }
    else if (iVar6 == 0x46) {
      ultima_1000_1850(0x9fe4);
      iVar8 = 1;
      if ((*(byte *)0x6605 & 0xc0) == 0) {
        *(undefined2 *)0xb118 = *(undefined2 *)(*(int *)0xb114 * 2 + 0x4d66);
        iVar8 = *(int *)0xb118;
        uVar3 = (uint)*pbVar5 * 3;
        iVar6 = uVar3 - 100;
        uVar9 = func_0x00018672(-iVar6,-((uint)(iVar6 != 0) - (uint)(uVar3 < 100)),iVar8,
                                iVar8 >> 0xf,100,0);
        iVar8 = func_0x000185d0(uVar9);
        piVar1 = (int *)0xb118;
        *piVar1 = *piVar1 + iVar8;
        func_0x000101e6(0x183e);
        func_0x000101e6(0x1a50);
        do {
          cVar4 = ultima_1000_266c();
          if (cVar4 == 'Y') break;
        } while (cVar4 != 'N');
        if (cVar4 != 'Y') {
          uVar7 = 0x9ff6;
          goto LAB_1000_6ddd;
        }
        ultima_1000_1850(0x9ff0);
        iVar8 = shoppes2_1641_07e2(*(undefined2 *)0xb118);
        if (iVar8 == 0) {
          return;
        }
        *(undefined *)0x6605 = 0x82;
        iVar8 = 1;
        iVar6 = iVar8;
        goto LAB_1641_0a82;
      }
      func_0x000101e6(0x19f2);
      do {
        cVar4 = ultima_1000_266c();
        if (cVar4 == 'Y') break;
      } while (cVar4 != 'N');
      if (cVar4 == 'Y') {
        ultima_1000_1850(0x9fe8);
        shoppes2_1641_07e2(10000);
      }
      else {
        ultima_1000_1850(0x9fec);
        shoppes2_1641_08a8(param_1);
      }
    }
    else if (iVar6 == 0x53) {
      ultima_1000_1850(0x9ffa);
      *(undefined2 *)0xb118 = *(undefined2 *)(*(int *)0xb114 * 2 + 0x4d6e);
      iVar8 = *(int *)0xb118;
      uVar3 = (uint)*pbVar5 * 3;
      iVar6 = uVar3 - 100;
      uVar9 = func_0x00018672(-iVar6,-((uint)(iVar6 != 0) - (uint)(uVar3 < 100)),iVar8,iVar8 >> 0xf,
                              100,0);
      iVar8 = func_0x000185d0(uVar9);
      piVar1 = (int *)0xb118;
      *piVar1 = *piVar1 + iVar8;
      func_0x000101e6(0x188c);
      func_0x000101e6(0x1a50);
      do {
        cVar4 = ultima_1000_266c();
        if (cVar4 == 'Y') break;
      } while (cVar4 != 'N');
      iVar8 = 1;
      if (cVar4 != 'Y') {
        uVar7 = 0xa004;
LAB_1000_6ddd:
        ultima_1000_1850(uVar7);
        return;
      }
      ultima_1000_1850(0x9ffe);
      iVar6 = shoppes2_1641_07e2(*(undefined2 *)0xb118);
      if (iVar6 == 0) {
        return;
      }
      if ((*(byte *)0x6605 & 0xc0) == 0) {
        *(undefined *)0x6605 = 0x40;
        iVar6 = iVar8;
      }
      else if ((*(byte *)0x6605 & 0x80) == 0) {
        if ((*(byte *)0x6605 & 0x40) == 0) goto LAB_1000_6eb9;
        func_0x000101e6(0x195f);
        iVar8 = 0;
        iVar6 = iVar8;
      }
      else {
        func_0x000101e6(0x193b);
        pcVar2 = (char *)0x6605;
        *pcVar2 = *pcVar2 + '\x01';
        iVar8 = 1;
        iVar6 = 0;
      }
LAB_1641_0a82:
      iVar8 = shoppes2_1641_080e(param_1,iVar8,iVar6);
    }
LAB_1000_6eb9:
    if (iVar8 != 0) {
      return;
    }
  } while( true );
}



void shoppes2_1641_0abc(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  bVar1 = false;
  *(undefined2 *)0xbd22 = 0;
  *(undefined2 *)0xbd24 = 0;
  func_0x00010216();
  do {
    iVar2 = ultima_1000_266c();
    if ((iVar2 == 0x20) || (iVar2 == 0x4e)) {
      ultima_1000_1850(0xa00c);
LAB_1641_0af1:
      bVar1 = true;
    }
    else if (iVar2 == 0x59) {
      ultima_1000_1850(0xa008);
      shoppes2_1641_08a8(param_1);
      goto LAB_1641_0af1;
    }
    if (bVar1) {
      if (*(int *)0xbd22 == 0) {
        func_0x00010222(*(undefined2 *)0xbd24);
      }
      return;
    }
  } while( true );
}


