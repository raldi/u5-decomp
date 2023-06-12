typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



undefined2 FUN_124c_0000(uint param_1,uint param_2,undefined2 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined2 unaff_DS;
  byte *local_16;
  byte *local_14;
  byte *local_12;
  byte *local_10;
  byte *local_e;
  byte *local_c;
  byte *local_a;
  
  if (((((int)param_2 < 0xb) && ((int)param_1 < 0xb)) && (-1 < (int)param_2)) && (-1 < (int)param_1)
     ) {
    puVar2 = (undefined *)func_0x0001c632(param_1,param_2,param_3);
    iVar3 = func_0x0001ae7c(*puVar2);
    if ((iVar3 == 0) || (pcVar4 = (char *)func_0x0001c632(param_1,param_2), *pcVar4 == -1)) {
      return 0;
    }
    local_a = (byte *)0x5c5c;
    local_c = (byte *)0x5c5d;
    local_e = (byte *)0x5c5a;
    local_10 = (byte *)0x5c5b;
    local_12 = (byte *)0xba1a;
    local_14 = (byte *)0xba1b;
    local_16 = (byte *)0xba16;
    uVar5 = 0xba18;
    do {
      if ((*local_a == param_2) && (*local_c == param_1)) {
        bVar1 = *local_e;
        if (bVar1 == 0xeb) {
          return 0;
        }
        if (((((bVar1 & 0xfc) != 0xe8) && (bVar1 != 0x1e)) && (bVar1 != 0x1f)) && (bVar1 != 0)) {
          bVar1 = *local_10;
joined_r0x000125eb:
          if (bVar1 != 0) {
            return 0;
          }
        }
      }
      else if ((*local_12 == param_2) &&
              ((*local_14 == param_1 && (bVar1 = *local_16, (bVar1 & 0x24) == 0))))
      goto joined_r0x000125eb;
      local_a = local_a + 8;
      local_c = local_c + 8;
      local_e = local_e + 8;
      local_10 = local_10 + 8;
      local_12 = local_12 + 8;
      local_14 = local_14 + 8;
      local_16 = local_16 + 8;
      uVar5 = uVar5 + 8;
    } while (uVar5 < 0xbb18);
  }
  return 1;
}



undefined2 FUN_124c_014e(int param_1,int param_2,int param_3)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  uVar2 = (uint)*(byte *)(param_3 * 8 + -0x45e9);
  uVar1 = *(undefined *)(uVar2 + 0x15cc);
  if (((uVar2 == 0x1a) || (iVar3 = func_0x0001a2c2(0xff,0), iVar3 < 0x80)) &&
     (((*(uint *)(uVar2 * 2 + 0x153c) & 0x8000) == 0 ||
      ((*(char *)0x587a != 'N' && (*(char *)0x587a != '\x1c')))))) {
    func_0x0001c5de(0x96,5,400,0x2ee);
    if (param_1 == 0) {
      local_6 = FUN_124c_14d6(0,-(uint)*(byte *)0x588f,param_3,param_2);
    }
    else {
      local_6 = 0;
    }
    iVar3 = func_0x00010006(uVar1,local_6,*(undefined *)(param_2 * 8 + -0x45e5),
                            *(undefined *)(param_2 * 8 + -0x45e6),param_3);
    if (-1 < iVar3) {
      func_0x0001b794(iVar3);
      func_0x000198ea(10);
      FUN_124c_194a(param_3,iVar3);
      func_0x0001ffe2(param_3,iVar3);
    }
    return 1;
  }
  return 0;
}



undefined2 FUN_124c_0226(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  
  bVar1 = false;
  uVar2 = (uint)*(byte *)(param_1 * 8 + -0x45e9);
  uVar3 = (uint)*(byte *)(param_1 * 8 + -0x45e8);
  iVar4 = FUN_124c_0d30(param_1);
  if (-1 < iVar4) {
    if ((*(byte *)(param_1 * 8 + -0x45ea) & 1) == 0) {
      if ((((*(byte *)(iVar4 * 8 + -0x45ea) & 0x80) != 0) &&
          (*(char *)((uint)*(byte *)(iVar4 * 8 + -0x45e9) * 0x20 + 0x55c6) == '-')) &&
         ((*(uint *)(uVar2 * 2 + 0x153c) & 0x8000) != 0)) {
        iVar5 = func_0x0001a2c2(0xff,0);
        bVar1 = iVar5 < 0x80;
      }
      uVar6 = func_0x0001ffee(iVar4,param_1);
      if (uVar6 <= *(byte *)(uVar2 + 0x159c)) {
        if (uVar2 == 0x1a) {
          *(undefined *)(uVar3 * 8 + 0x5c60) = 0x20;
        }
        iVar5 = func_0x0001ffee(iVar4,param_1);
        if (iVar5 == 1) {
          if (uVar2 == 0x2d) {
            *(undefined *)(uVar3 * 8 + 0x5c60) = 0x20;
          }
          func_0x0001c5de(0x96,5,400,0x2ee);
          *(undefined *)(iVar4 + 0x58a8) = (undefined)param_1;
          iVar5 = FUN_124c_14d6(0,-(uint)*(byte *)0x588f,param_1,iVar4);
          if (iVar5 == 0) {
            return 1;
          }
          if ((((*(byte *)(uVar2 * 2 + 0x153c) & 2) != 0) &&
              (iVar5 = func_0x0001a2c2(3,0), iVar5 != 0)) && (*(int *)0x57a8 != 0)) {
            func_0x00019a80(0x6d74);
            func_0x0001ffca(param_1);
            func_0x00019a80(0x6d78);
            func_0x0001c184(5,0x57a8);
            func_0x0001c5de(0x32,1,2000,800);
            func_0x0001ab30();
            return 1;
          }
          func_0x0001b794(iVar4);
          func_0x000198ea(10);
          FUN_124c_194a(param_1,iVar4);
          func_0x0001ffe2(param_1,iVar4);
          return 1;
        }
        uVar7 = FUN_124c_014e(bVar1,iVar4,param_1);
        return uVar7;
      }
    }
    else {
      iVar5 = func_0x0001ffee(iVar4,param_1);
      if (iVar5 == 1) {
        *(undefined *)0x589d = 0x21;
        func_0x0001001e(0x21,iVar4,param_1);
        return 1;
      }
    }
  }
  return 0;
}



void __cdecl16near FUN_124c_03f4(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar3 = (uint)*(byte *)0x589e * 8;
  *(undefined *)0x589d = 0;
  bVar2 = *(byte *)(iVar3 + -0x45e8);
  if ((*(char *)0x587a != 'T') &&
     (((*(char *)0x587a != 'Q' || (iVar4 = func_0x0001a2c2(1,0), iVar4 != 0)) &&
      ((*(byte *)(iVar3 + -0x45ea) & 4) == 0)))) {
    if ((*(byte *)(iVar3 + -0x45ea) & 8) == 0) {
      if (*(char *)(iVar3 + -0x45e9) == '-') {
        *(undefined *)((uint)bVar2 * 8 + 0x5c60) = 0;
      }
      if ((*(byte *)(iVar3 + -0x45ea) & 2) == 0) {
        iVar4 = func_0x0001ffd6(*(undefined *)0x589e);
        if (iVar4 != 0) {
          return;
        }
        iVar4 = FUN_124c_0226(*(undefined *)0x589e);
        if (iVar4 != 0) {
          return;
        }
      }
      else {
        if (((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) && (iVar4 = func_0x0001a2c2(3,0), iVar4 == 3)
           ) {
          pcVar1 = (char *)(iVar3 + -0x45ec);
          *pcVar1 = *pcVar1 + '\x01';
        }
        FUN_124c_1a5c(*(undefined *)0x589e);
      }
      iVar4 = FUN_124c_0ee4(*(undefined *)0x589e);
      if (iVar4 == 0) {
        if ((*(byte *)(iVar3 + -0x45ea) & 2) != 0) {
          FUN_124c_0226(*(undefined *)0x589e);
        }
      }
      else {
        if ((*(byte *)0x58a2 & 0x10) != 0) {
          func_0x000198ea(10);
          func_0x0001c5de(0x28,1,2000,0x4b0);
          func_0x0001ffca(*(undefined *)0x589e);
          func_0x00019a80(0x6d8c);
          FUN_124c_1236(-1 - (uint)*(byte *)0x589e);
          if (((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) && (*(char *)(iVar3 + -0x45e9) == '/')) {
            func_0x000100ae();
          }
        }
        func_0x0001db40();
      }
    }
    else {
      iVar3 = func_0x0001a2c2(0x10,0);
      if (iVar3 == 0x10) {
        func_0x0001ea30(*(undefined *)0x589e);
      }
    }
  }
  return;
}



undefined2 FUN_124c_0544(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  func_0x00019a80(param_2);
  if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) == 0) {
    func_0x00019a80(0x6d98);
    uVar1 = 1;
  }
  else {
    if (param_1 == 0) {
      func_0x00010036();
    }
    else if (param_1 == 1) {
      func_0x00010042();
    }
    else if (param_1 == 2) {
      func_0x0001004e();
    }
    else if (param_1 == 3) {
      func_0x0001007e();
    }
    else if (param_1 == 4) {
      func_0x0001005a();
    }
    else if (param_1 == 5) {
      func_0x00010072();
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined2 FUN_124c_05b6(int param_1,int param_2)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 unaff_DS;
  
  if ((param_2 == 0xff) || (*(char *)(param_2 + 0x15fc) == '\0')) {
    uVar4 = 0;
  }
  else {
    if (param_1 != 0) {
      pcVar8 = (char *)0x6da0;
      uVar5 = 0xffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar2 != '\0');
      uVar5 = ~uVar5;
      puVar9 = (undefined2 *)(pcVar8 + -uVar5);
      pcVar8 = (char *)0xb21e;
      iVar6 = -1;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar2 != '\0');
      puVar10 = (undefined2 *)(pcVar8 + -1);
      for (uVar7 = uVar5 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar3 = *puVar1;
      }
      for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar3 = puVar10;
        puVar10 = (undefined2 *)((int)puVar10 + 1);
        puVar1 = puVar9;
        puVar9 = (undefined2 *)((int)puVar9 + 1);
        *(undefined *)puVar3 = *(undefined *)puVar1;
      }
    }
    pcVar8 = *(char **)(param_2 * 2 + 0x17f6);
    uVar5 = 0xffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    uVar5 = ~uVar5;
    puVar9 = (undefined2 *)(pcVar8 + -uVar5);
    pcVar8 = (char *)0xb21e;
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    puVar10 = (undefined2 *)(pcVar8 + -1);
    for (uVar7 = uVar5 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar3 = *puVar1;
    }
    for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar10;
      puVar10 = (undefined2 *)((int)puVar10 + 1);
      puVar1 = puVar9;
      puVar9 = (undefined2 *)((int)puVar9 + 1);
      *(undefined *)puVar3 = *(undefined *)puVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



void __cdecl16near FUN_124c_063e(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 unaff_DS;
  undefined2 uVar15;
  undefined2 uVar16;
  int local_c;
  byte local_8;
  int local_4;
  
  iVar10 = (uint)*(byte *)0x589e * 8;
  *(undefined *)0x5896 = *(undefined *)(iVar10 + -0x45e6);
  *(undefined *)0x5897 = *(undefined *)(iVar10 + -0x45e5);
  uVar6 = (uint)*(byte *)(iVar10 + -0x45e9);
  if ((*(char *)0x587b != -1) &&
     (((*(byte *)(iVar10 + -0x45ea) & 0x80) == 0 || (uVar6 != *(byte *)0x587b)))) {
    func_0x0001ff46();
    return;
  }
  if (((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) == 0) ||
     ((*(char *)(uVar6 * 0x20 + 0x55c3) != '#' && (*(char *)(uVar6 * 0x20 + 0x55c4) != '#')))) {
    iVar10 = (uint)*(byte *)0x589e * 8;
    if ((*(byte *)(iVar10 + -0x45ea) & 0x80) != 0) {
      func_0x0001ac58(*(undefined *)(iVar10 + -0x45e9));
    }
    if (*(char *)0xa9fa != '\0') {
      func_0x0001ab30();
      *(undefined *)0xa9fa = 0;
    }
LAB_124c_06f1:
    func_0x000198ea(10);
    func_0x0001ffca(*(undefined *)0x589e);
    *(undefined *)0xb21e = 0;
    if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) != 0) {
      func_0x00019a80(0x6da4);
      iVar11 = uVar6 * 0x20;
      iVar10 = FUN_124c_05b6(0,*(undefined *)(iVar11 + 0x55c1));
      iVar7 = FUN_124c_05b6(iVar10,*(undefined *)(iVar11 + 0x55c3));
      iVar11 = FUN_124c_05b6(iVar10 + iVar7,*(undefined *)(iVar11 + 0x55c4));
      local_c = iVar10 + iVar7 + iVar11;
      if (local_c == 0) {
        pcVar12 = (char *)0x6db2;
        uVar8 = 0xffff;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar3 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar3 != '\0');
        uVar8 = ~uVar8;
        puVar13 = (undefined2 *)(pcVar12 + -uVar8);
        pcVar12 = (char *)0xb21e;
        iVar10 = -1;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar3 = pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar3 != '\0');
        puVar14 = (undefined2 *)(pcVar12 + -1);
        for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
          puVar4 = puVar14;
          puVar14 = puVar14 + 1;
          puVar2 = puVar13;
          puVar13 = puVar13 + 1;
          *puVar4 = *puVar2;
        }
        for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
          puVar4 = puVar14;
          puVar14 = (undefined2 *)((int)puVar14 + 1);
          puVar2 = puVar13;
          puVar13 = (undefined2 *)((int)puVar13 + 1);
          *(undefined *)puVar4 = *(undefined *)puVar2;
        }
      }
    }
    pcVar12 = (char *)0x6dbe;
    uVar8 = 0xffff;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar3 != '\0');
    uVar8 = ~uVar8;
    puVar13 = (undefined2 *)(pcVar12 + -uVar8);
    pcVar12 = (char *)0xb21e;
    iVar10 = -1;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar3 = pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar3 != '\0');
    puVar14 = (undefined2 *)(pcVar12 + -1);
    for (uVar9 = uVar8 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      puVar4 = puVar14;
      puVar14 = puVar14 + 1;
      puVar2 = puVar13;
      puVar13 = puVar13 + 1;
      *puVar4 = *puVar2;
    }
    for (uVar8 = (uint)((uVar8 & 1) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar4 = puVar14;
      puVar14 = (undefined2 *)((int)puVar14 + 1);
      puVar2 = puVar13;
      puVar13 = (undefined2 *)((int)puVar13 + 1);
      *(undefined *)puVar4 = *(undefined *)puVar2;
    }
    func_0x00019a80(0xb21e);
    local_4 = 0;
    bVar5 = false;
LAB_124c_07ba:
    do {
      if (bVar5) goto LAB_124c_0b56;
      func_0x000198ea(10);
      func_0x0001ce5a();
      if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 4) == 0) {
        if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 8) == 0) {
          uVar16 = 0x2cfb;
          local_8 = func_0x0001a89c();
          bVar5 = true;
          local_4 = 0;
          uVar8 = (uint)local_8;
          if (uVar8 == 0x4a) {
            uVar15 = 0x6e1a;
            uVar16 = 1;
LAB_124c_0970:
            local_4 = FUN_124c_0544(uVar16,uVar15);
            goto LAB_124c_07ba;
          }
          if (uVar8 < 0x4b) {
            if (uVar8 == 0x41) {
              func_0x0001002a(local_c,*(undefined *)0x589e);
              goto LAB_124c_07ba;
            }
            if (0x41 < uVar8) {
              if (uVar8 - 0x42 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00012f89
                    // WARNING: Treating indirect jump as call
                (**(code **)((uVar8 - 0x42) * 2 + -0x52a2))();
                return;
              }
              goto LAB_124c_0ab7;
            }
            if (uVar8 == 0x1b) {
              local_4 = func_0x0001ffbe();
              goto LAB_124c_07ba;
            }
            if (0x1b < uVar8) {
              if (uVar8 == 0x20) {
                func_0x00019a80(0x6e60,uVar16);
              }
              else if (uVar8 == 0x30) {
                *(undefined *)0x587b = 0xff;
                func_0x00019a80(0x6e66,uVar16);
                func_0x0001ab30();
              }
              else {
                if ((uVar8 < 0x31) || (0x36 < uVar8)) {
LAB_124c_0ab7:
                  uVar15 = 0x6ee6;
                  goto LAB_124c_08a9;
                }
                iVar10 = func_0x0001ff76(local_8 - 0x31);
                if (iVar10 == 0) goto LAB_124c_0a41;
              }
              goto LAB_124c_07ba;
            }
            if (uVar8 == 0) goto LAB_124c_0ab7;
            if (uVar8 < 5) {
              iVar10 = func_0x0001ff6a(local_8,*(undefined *)0x589e);
              if (iVar10 != 0) goto LAB_124c_07ba;
            }
            else {
              if (uVar8 != 0x13) goto LAB_124c_0ab7;
              func_0x00019a80(0x6de4,uVar16);
              if (*(char *)0xa9ce == '\0') {
                uVar15 = 0x6df2;
              }
              else {
                uVar15 = 0x6dec;
              }
              func_0x00019a80(uVar15,uVar16);
              *(bool *)0xa9ce = *(char *)0xa9ce == '\0';
            }
          }
          else {
            if (uVar8 == 0x52) {
              uVar15 = 0x6e2e;
              uVar16 = 3;
              goto LAB_124c_0970;
            }
            if (uVar8 < 0x53) {
              if (uVar8 - 0x4b < 7) {
                    // WARNING: Could not emulate address calculation at 0x00012fb3
                    // WARNING: Treating indirect jump as call
                (**(code **)((uVar8 - 0x4b) * 2 + -0x5278))();
                return;
              }
              goto LAB_124c_0ab7;
            }
            if (uVar8 == 0x56) {
              uVar15 = 0x6ed0;
              uVar16 = 2;
LAB_124c_0a33:
              local_4 = func_0x0001fffa(uVar16,uVar15);
              goto LAB_124c_07ba;
            }
            if (uVar8 < 0x57) {
              if (uVar8 == 0x53) {
                uVar15 = 0x6e3a;
                uVar16 = 4;
              }
              else {
                if (uVar8 == 0x54) {
                  uVar15 = 0x6eca;
                  uVar16 = 3;
                  goto LAB_124c_0a33;
                }
                if (uVar8 != 0x55) goto LAB_124c_0ab7;
                uVar15 = 0x6e42;
                uVar16 = 5;
              }
              goto LAB_124c_0970;
            }
            if (uVar8 == 0x57) {
              func_0x00019a80(0x6ed6,uVar16);
LAB_124c_0a41:
              local_4 = 1;
              goto LAB_124c_07ba;
            }
            if (uVar8 == 0x58) {
              uVar15 = 0x6ee0;
              uVar16 = 1;
              goto LAB_124c_0a33;
            }
            if (uVar8 == 0x59) {
              func_0x00019a80(0x6e4e,uVar16);
              func_0x0001ff9a();
              goto LAB_124c_07ba;
            }
            if (uVar8 == 0x5a) {
              func_0x00019a80(0x6e54,uVar16);
              func_0x00010066();
              goto LAB_124c_07ba;
            }
            if (uVar8 != 0xfc) goto LAB_124c_0ab7;
            func_0x00019a80(0x6dd2,uVar16);
            uVar8 = (uint)(*(int *)0x538c == 0);
            *(uint *)0x538c = uVar8;
            if (uVar8 == 0) {
              uVar15 = 0x6de0;
            }
            else {
              uVar15 = 0x6ddc;
            }
LAB_124c_08a9:
            func_0x00019a80(uVar15,uVar16);
          }
          bVar5 = false;
          goto LAB_124c_07ba;
        }
        iVar10 = func_0x0001a2c2(0xff,0);
        if (iVar10 < 0x10) {
          func_0x0001ea30(*(undefined *)0x589e);
        }
        func_0x00019a80(0x6dc8);
      }
      else {
        func_0x00019a80(0x6dc0);
        func_0x0001a46c(500,3000,0x28);
        FUN_124c_1c66(*(undefined *)0x589e);
      }
      bVar5 = true;
    } while( true );
  }
  pbVar1 = (byte *)((uint)*(byte *)0x589e * 8 + -0x45ea);
  *pbVar1 = *pbVar1 | 1;
  *(undefined *)0x587b = 0xff;
  *(undefined *)0xa9fa = 1;
  FUN_124c_03f4();
LAB_124c_0b79:
  if ((local_8 < 0x30) || (0x36 < local_8)) {
    func_0x0001ff46();
    func_0x0001db40();
    func_0x00010096();
  }
  return;
LAB_124c_0b56:
  if (local_4 == 0) goto LAB_124c_0b5f;
  goto LAB_124c_06f1;
LAB_124c_0b5f:
  iVar10 = (uint)*(byte *)0x589e * 8;
  if ((*(byte *)(iVar10 + -0x45ea) & 0x80) != 0) {
    func_0x0001ac58(*(undefined *)(iVar10 + -0x45e9));
  }
  goto LAB_124c_0b79;
}



undefined2 __cdecl16near FUN_124c_0b94(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  uint uVar6;
  undefined2 local_4;
  
  local_4 = 1;
  *(undefined *)0x58a0 = 0;
  func_0x0001db40();
  func_0x0001ab30();
  func_0x00019d46();
  func_0x000100ba();
  if (*(int *)0x5876 == 0) {
    *(undefined *)0x58a3 = 1;
  }
  else {
    *(undefined *)0x58a3 = 0;
  }
  uVar6 = 0;
  do {
    *(undefined *)0x589e = 0;
    do {
      *(undefined *)0x594f = 0;
      iVar5 = (uint)*(byte *)0x589e * 8;
      bVar3 = *(byte *)(iVar5 + -0x45ea);
      if (((bVar3 & 0xc0) != 0) && ((bVar3 & 0x20) == 0)) {
        if (((bVar3 & 0x80) == 0) ||
           (*(char *)((uint)*(byte *)(iVar5 + -0x45e9) * 0x20 + 0x55b3) != 'D')) {
          if ((*(byte *)((uint)*(byte *)(iVar5 + -0x45e5) * 0x20 + (uint)*(byte *)(iVar5 + -0x45e6)
                        + -0x52ec) & 0xfe) != 0x84) {
            pcVar2 = (char *)(iVar5 + -0x45e7);
            *pcVar2 = *pcVar2 + -1;
            if (*pcVar2 == '\0') {
              *(char *)(iVar5 + -0x45e7) = '$' - *(char *)(iVar5 + -0x45eb);
              *(undefined *)0x5898 = 0;
              *(undefined *)0x58a2 = 0;
              *(undefined *)0x588f = 0;
              *(undefined *)0x5890 = 0;
              *(undefined *)0x589d = 0;
              pcVar2 = (char *)0x5882;
              *pcVar2 = *pcVar2 + '\x01';
              if (*(char *)0x5882 == '\n') {
                *(undefined *)0x5882 = 0;
                func_0x0001d1ac(1);
              }
              *(undefined *)0x589f = 1;
              iVar4 = func_0x0001d876(*(undefined *)0x589e);
              if (iVar4 == 0) {
                FUN_124c_063e();
              }
              else {
                FUN_124c_03f4();
              }
              uVar6 = (uint)*(byte *)0x589e;
              *(undefined *)(uVar6 + 0x58a8) = 0xff;
              FUN_124c_1b1e(uVar6);
              uVar6 = 0x3169;
              func_0x000100ba();
              if (*(int *)0x5878 == 0) {
                if (*(int *)0x5876 == 0) {
                  local_4 = 0;
                }
                else {
                  uVar6 = 0x318d;
                  iVar4 = func_0x000100ae();
                  if (iVar4 != -1) goto LAB_124c_0d08;
                  func_0x0001db40();
                  if (*(char *)0x58a3 == '\0') {
                    func_0x00019a80(0x6eee);
                    local_4 = 1;
                  }
                }
                uVar6 = 1;
                break;
              }
              if ((*(int *)0x5876 == 0) && (*(char *)0x58a3 == '\0')) {
                func_0x00019a80(0x6f00);
                *(undefined *)0x58a3 = 1;
                uVar6 = 0x31c5;
                func_0x0001c598();
                func_0x00019d46();
              }
            }
          }
        }
        else {
          pbVar1 = (byte *)(iVar5 + -0x45ea);
          *pbVar1 = *pbVar1 | 0x20;
          func_0x0001b794(*(undefined *)0x589e);
          uVar6 = (uint)*(byte *)0x589e;
          FUN_124c_1574(99,uVar6);
        }
      }
LAB_124c_0d08:
      pcVar2 = (char *)0x589e;
      *pcVar2 = *pcVar2 + '\x01';
    } while (*(byte *)0x589e < 0x20);
    if (uVar6 != 0) {
      func_0x00019d46(iVar5 + -0x45ec,bVar3);
      *(undefined *)0x2186 = 0xff;
      return local_4;
    }
  } while( true );
}



int FUN_124c_0d30(int param_1)

{
  byte *pbVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined2 unaff_DS;
  int local_1e;
  int local_16;
  uint local_12;
  int local_10;
  uint local_e;
  int local_8;
  int local_4;
  
  local_10 = -1;
  local_16 = -1;
  local_4 = 99;
  iVar4 = param_1 * 8;
  local_8 = func_0x0001d876(param_1);
  if (*(char *)0x587a == 'C') {
    iVar5 = FUN_124c_13e2(0xffff,param_1);
    iVar6 = func_0x0001bcee();
    if (iVar5 < iVar6) {
      local_8 = 0;
    }
  }
  iVar5 = 0x1f;
  uVar2 = *(undefined *)(iVar4 + -0x45e5);
  uVar3 = *(undefined *)(iVar4 + -0x45e6);
  local_1e = -0x44f4;
  do {
    if (((((iVar5 != param_1) && (*(char *)(local_1e + 2) != '\0')) &&
         ((*(byte *)(local_1e + 2) & 0x20) == 0)) &&
        (iVar6 = func_0x0001d876(iVar5), local_8 != iVar6)) &&
       ((((*(char *)0x5894 == '(' || (*(char *)(iVar4 + -0x45e9) == '/')) ||
         ((*(byte *)(local_1e + 2) & 0x10) == 0)) && ((*(byte *)(local_1e + 2) & 4) == 0)))) {
      if (iVar5 < 5) {
        local_10 = local_10 + 1;
      }
      iVar6 = func_0x00010102(*(undefined *)(local_1e + 7),*(undefined *)(local_1e + 6),uVar2,uVar3)
      ;
      if (iVar6 < local_4) {
        local_e = (uint)*(byte *)(local_1e + 6);
        local_12 = (uint)*(byte *)(local_1e + 7);
        local_16 = iVar5;
        local_4 = iVar6;
      }
    }
    local_1e = local_1e + -8;
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  if ((local_10 == -1) && (local_16 == -1)) {
    local_16 = func_0x000100ae();
  }
  if (local_16 == -1) {
    pbVar7 = (byte *)0xbb0e;
    puVar8 = (undefined *)0xbb0c;
    do {
      if ((*pbVar7 & 0x40) != 0) {
        *puVar8 = 1;
        pbVar1 = pbVar7;
        *pbVar1 = *pbVar1 | 2;
      }
      pbVar7 = pbVar7 + -8;
      puVar8 = puVar8 + -8;
    } while ((undefined *)0xba3c < puVar8);
    local_e = 5;
    local_12 = 5;
  }
  *(undefined2 *)0x5878 = 0;
  *(undefined2 *)0x5876 = 0;
  if (local_e < *(byte *)(iVar4 + -0x45e6)) {
    *(undefined2 *)0x5876 = 0xffff;
  }
  if (*(byte *)(iVar4 + -0x45e6) < local_e) {
    *(undefined2 *)0x5876 = 1;
  }
  if (local_12 < *(byte *)(iVar4 + -0x45e5)) {
    *(undefined2 *)0x5878 = 0xffff;
  }
  if (*(byte *)(iVar4 + -0x45e5) < local_12) {
    *(undefined2 *)0x5878 = 1;
  }
  if ((*(byte *)(iVar4 + -0x45ea) & 2) != 0) {
    *(int *)0x5876 = -*(int *)0x5876;
    *(int *)0x5878 = -*(int *)0x5878;
  }
  if (local_16 == param_1) {
    local_16 = -1;
  }
  return local_16;
}



int FUN_124c_0ee4(int param_1)

{
  char *pcVar1;
  undefined uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  int local_8;
  uint local_6;
  
  local_8 = 0;
  local_6 = 0;
  iVar5 = param_1 * 8;
  if ((*(char *)(iVar5 + -0x45e9) != '\x1b') && (*(char *)(iVar5 + -0x45e9) != '\x1a')) {
    if ((((*(byte *)(iVar5 + -0x45ea) & 0x80) == 0) &&
        (((((*(uint *)((uint)*(byte *)(iVar5 + -0x45e9) * 2 + 0x153c) & 0x2000) != 0 &&
           (*(char *)0x587a != 'N')) && (*(char *)0x587a != '\x1c')) &&
         ((iVar6 = func_0x000100de(param_1), iVar6 != 0 || (iVar6 = func_0x0001bcde(3), iVar6 != 3))
         )))) && (iVar6 = FUN_124c_120e(), iVar6 != 0)) {
      iVar7 = (uint)*(byte *)(iVar5 + -0x45e8) * 8;
      iVar6 = FUN_124c_0000(*(undefined2 *)0x5878,*(undefined2 *)0x5876,
                            *(undefined *)(iVar7 + 0x5c5a));
      if (iVar6 != 0) {
        uVar2 = *(undefined *)0x5876;
        *(undefined *)(iVar5 + -0x45e6) = uVar2;
        *(undefined *)(iVar7 + 0x5c5c) = uVar2;
        uVar2 = *(undefined *)0x5878;
        *(undefined *)(iVar5 + -0x45e5) = uVar2;
        *(undefined *)(iVar7 + 0x5c5d) = uVar2;
        func_0x00019a80(*(undefined2 *)((uint)*(byte *)(iVar5 + -0x45e9) * 2 + 0x1856));
        func_0x00019a80(0x6f0c);
        local_8 = 1;
      }
    }
    if ((local_8 == 0) && (iVar6 = func_0x000100de(param_1), iVar6 == 0)) {
      FUN_124c_0d30(param_1);
      iVar6 = func_0x0001bcde(0xff);
      if ((iVar6 < 0x80) ||
         (iVar6 = func_0x000100d2(param_1,*(undefined *)(iVar5 + -0x45e5),
                                  (uint)*(byte *)(iVar5 + -0x45e6) + *(int *)0x5876), iVar6 != 0)) {
        iVar6 = func_0x000100d2(param_1,(uint)*(byte *)(iVar5 + -0x45e5) + *(int *)0x5878,
                                *(undefined *)(iVar5 + -0x45e6));
        if (iVar6 == 0) {
          *(undefined2 *)0x5876 = 0;
          local_6 = 0x3e6;
        }
      }
      else {
        *(undefined2 *)0x5878 = 0;
        local_6 = 999;
      }
      if (local_6 < 0x3de) {
        local_8 = 4;
        bVar3 = *(byte *)(iVar5 + -0x45e5);
        bVar4 = *(byte *)(iVar5 + -0x45e6);
        do {
          local_6 = func_0x0001bcde(3);
          if (local_6 == 0) {
            *(undefined2 *)0x5878 = 1;
LAB_124c_106a:
            *(undefined2 *)0x5876 = 0;
          }
          else if (local_6 == 1) {
            *(undefined2 *)0x5876 = 1;
LAB_124c_109c:
            *(undefined2 *)0x5878 = 0;
          }
          else {
            if (local_6 == 2) {
              *(undefined2 *)0x5878 = 0xffff;
              goto LAB_124c_106a;
            }
            if (local_6 == 3) {
              *(undefined2 *)0x5876 = 0xffff;
              goto LAB_124c_109c;
            }
          }
          iVar6 = func_0x000100d2(param_1,(uint)bVar3 + *(int *)0x5878,(uint)bVar4 + *(int *)0x5876)
          ;
          if (iVar6 == 0) {
            local_6 = 0x3df;
          }
          if (0x3de < (int)local_6) break;
          *(undefined2 *)0x5878 = 0;
          *(undefined2 *)0x5876 = 0;
          local_8 = local_8 + -1;
        } while (0 < local_8);
      }
      if (local_6 != 0) {
        iVar6 = (uint)*(byte *)(iVar5 + -0x45e8) * 8;
        pcVar1 = (char *)(iVar5 + -0x45e6);
        *pcVar1 = *pcVar1 + *(char *)0x5876;
        *(undefined *)(iVar6 + 0x5c5c) = *(undefined *)(iVar5 + -0x45e6);
        pcVar1 = (char *)(iVar5 + -0x45e5);
        *pcVar1 = *pcVar1 + *(char *)0x5878;
        *(undefined *)(iVar6 + 0x5c5d) = *(undefined *)(iVar5 + -0x45e5);
        local_8 = 1;
        iVar5 = func_0x0001efb2(*(undefined *)(iVar5 + -0x45e5),*(undefined *)(iVar5 + -0x45e6));
        if (iVar5 == 0) {
          *(undefined *)0x58a2 = 0x10;
        }
      }
    }
  }
  return local_8;
}



int FUN_124c_111a(uint param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  undefined *local_12;
  int local_10;
  byte *local_c;
  byte *local_a;
  byte *local_8;
  byte *local_6;
  
  local_10 = 0;
  if (((*(byte *)0x58a1 & 0x80) != 0) || ((*(byte *)0x58a1 & 2) != 0)) {
    pbVar2 = (byte *)0xae1f;
    pbVar3 = (byte *)0xae27;
    local_12 = (undefined *)0xad1f;
    local_6 = (byte *)0xae3f;
    local_a = (byte *)0xae47;
    local_8 = (byte *)0xae5f;
    local_c = (byte *)0xae67;
    iVar1 = 8;
    do {
      if ((*pbVar2 == param_2) && (*pbVar3 == param_1)) {
        *pbVar3 = 0xff;
        *pbVar2 = 0xff;
        if ((*local_6 < 0xb) && (*local_a < 0xb)) {
          *(undefined *)((uint)*local_a * 0x20 + (uint)*local_6 + -0x52ec) = *local_12;
        }
        if ((*local_8 < 0xb) && (*local_c < 0xb)) {
          *(undefined *)((uint)*local_c * 0x20 + (uint)*local_8 + -0x52ec) = *local_12;
        }
        local_10 = 1;
      }
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      local_12 = local_12 + 1;
      local_6 = local_6 + 1;
      local_a = local_a + 1;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (local_10 != 0) {
      func_0x0001db40();
    }
  }
  return local_10;
}



undefined2 __cdecl16near FUN_124c_120e(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = func_0x0001bcde(0xf);
  *(undefined2 *)0x5876 = uVar1;
  iVar2 = func_0x0001bcde(0xf);
  *(int *)0x5878 = iVar2;
  if ((*(int *)0x5876 < 0xb) && (iVar2 < 0xb)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_124c_1236(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  uint local_6;
  
  if (param_1 < 0) {
    iVar1 = (-1 - param_1) * 8;
    local_6 = (uint)*(byte *)(iVar1 + -0x45e8);
    *(undefined *)(iVar1 + -0x45e8) = 0;
    *(undefined *)(iVar1 + -0x45eb) = 0;
    *(undefined *)(iVar1 + -0x45ec) = 0;
    *(undefined *)(iVar1 + -0x45e5) = 0;
    *(undefined *)(iVar1 + -0x45e6) = 0;
    *(undefined *)(iVar1 + -0x45e7) = 0;
    *(undefined *)(iVar1 + -0x45ea) = 0;
  }
  else {
    local_6 = param_1 - 1;
  }
  iVar1 = local_6 * 8;
  *(undefined *)(iVar1 + 0x5c5c) = 0;
  *(undefined *)(iVar1 + 0x5c5b) = 0;
  *(undefined *)(iVar1 + 0x5c5a) = 0;
  *(undefined *)(iVar1 + 0x5c5f) = 0;
  *(undefined *)(iVar1 + 0x5c5e) = 0;
  *(undefined *)(iVar1 + 0x5c5d) = 0;
  return;
}



uint FUN_124c_12b0(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint local_8;
  uint local_6;
  
  if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x40) == 0) {
    uVar3 = (uint)*(byte *)0x589d;
    if (uVar3 == 0x27) {
      func_0x00019a80(0x6f1a);
      func_0x0001f090(0x27,param_2);
      local_8 = 99;
    }
    else if (uVar3 == 0x28) {
      local_8 = 0;
    }
    else if (uVar3 == 0xff) {
      local_8 = 1;
    }
    else {
      bVar1 = *(byte *)(uVar3 + 0x15fc);
      local_8 = (uint)bVar1;
      if ((1 < bVar1) && (local_8 != 99)) {
        local_8 = func_0x0001a2c2(local_8,1);
      }
    }
  }
  else {
    local_8 = (uint)*(byte *)((uint)*(byte *)(param_2 * 8 + -0x45e9) * 8 + 0x13c0);
  }
  if (local_8 == 99) {
    local_6 = 99;
  }
  else {
    if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x40) == 0) {
      cVar2 = *(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55c0);
    }
    else {
      cVar2 = *(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 8 + 0x13bf);
    }
    local_6 = local_8;
    if (cVar2 != '\0') {
      iVar4 = func_0x0001a2c2(cVar2,1);
      local_6 = local_8 - iVar4;
    }
  }
  return local_6;
}



undefined FUN_124c_139a(int param_1)

{
  undefined uVar1;
  undefined2 unaff_DS;
  
  if ((((*(char *)0x587a == 'T') && ((*(byte *)(param_1 * 8 + -0x45ea) & 0x40) != 0)) ||
      (*(char *)(param_1 * 8 + -0x45e9) == '\x1a')) || ((*(byte *)(param_1 * 8 + -0x45ea) & 8) != 0)
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined *)(param_1 * 8 + -0x45eb);
  }
  return uVar1;
}



uint FUN_124c_13e2(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  uint local_6;
  
  iVar2 = param_2 * 8;
  if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
    if (param_1 < 1) goto LAB_124c_142d;
    if (*(char *)(param_1 + 0x169c) != '\b') goto LAB_124c_1428;
  }
  else {
    if (param_1 != 0) goto LAB_124c_142d;
    if ((*(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 2 + 0x153c) & 0x80) == 0) {
LAB_124c_1428:
      param_1 = -2;
      goto LAB_124c_142d;
    }
  }
  param_1 = -3;
LAB_124c_142d:
  if (param_1 == -4) {
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      uVar3 = func_0x0001efd8(*(undefined *)(iVar2 + -0x45e9));
      return uVar3;
    }
    bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13bf);
  }
  else if (param_1 == -3) {
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b4);
    }
    else {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13bc);
    }
  }
  else {
    if (param_1 == -2) {
      uVar3 = FUN_124c_139a(param_2);
      return uVar3;
    }
    if (param_1 != -1) {
      return local_6;
    }
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b6);
    }
    else {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13be);
    }
  }
  return (uint)bVar1;
}



int FUN_124c_14d6(int param_1,undefined2 param_2_00,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_a;
  undefined2 local_8;
  int local_6;
  
  local_a = -1;
  local_6 = 0;
  if (*(char *)0x588f == '\0') {
    if (((param_1 != 0x27) && (param_1 != 0x23)) && (param_1 != 0x28)) {
      local_8 = 0xfffe;
      local_a = param_1;
      goto LAB_124c_152f;
    }
  }
  else if (((param_1 < 0x2a) || (0x31 < param_1)) && (param_1 != 0x33)) {
    local_a = -1;
    local_8 = 0xffff;
    goto LAB_124c_152f;
  }
  local_6 = 1;
LAB_124c_152f:
  if (local_6 == 0) {
    iVar1 = FUN_124c_13e2(local_8,param_3);
    iVar2 = FUN_124c_13e2(local_a,param_2);
    iVar3 = func_0x0001bcee();
    if (((iVar1 - iVar2) + 0x1e) / 2 <= iVar3) {
      local_6 = 1;
    }
  }
  return local_6;
}



char FUN_124c_1574(uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined2 unaff_DS;
  int local_c;
  
  cVar7 = '\0';
  iVar8 = param_2 * 8;
  pbVar9 = (byte *)(iVar8 + -0x45ec);
  if ((int)param_1 < 1) {
    *(undefined *)0x58a2 = 0x20;
    param_1 = 0;
  }
  if ((*(byte *)(iVar8 + -0x45ea) & 0x80) == 0) {
    if (((*(byte *)((uint)*(byte *)(iVar8 + -0x45e9) * 2 + 0x153c) & 0x20) != 0) &&
       (*(char *)0x5890 == '\0')) {
      param_1 = (int)param_1 / 2;
    }
    if ((*(byte *)((uint)*(byte *)(iVar8 + -0x45e9) * 2 + 0x153c) & 8) != 0) {
      param_1 = 0;
    }
    if (*pbVar9 < param_1) {
      *pbVar9 = 0;
    }
    else {
      pbVar2 = pbVar9;
      *pbVar2 = *pbVar2 - (char)param_1;
    }
    if ((*pbVar9 == 0) || (param_1 == 99)) {
      uVar13 = (uint)*(byte *)(iVar8 + -0x45e9);
      iVar15 = uVar13 * 8;
      cVar7 = (*(byte *)(iVar15 + 0x13c1) >> 2) + 1;
      bVar5 = *(byte *)(iVar15 + 0x13c3);
      *(undefined *)(iVar8 + -0x45ea) = 0x20;
      *pbVar9 = 0;
      uVar10 = (uint)*(byte *)(iVar8 + -0x45e6);
      uVar11 = (uint)*(byte *)(iVar8 + -0x45e5);
      bVar6 = *(byte *)(uVar11 * 0x20 + uVar10 + -0x52ec);
      if ((*(uint *)(uVar13 * 2 + 0x153c) & 0x1001) == 0) {
        if (*(char *)(iVar8 + -0x45e9) == '\x1c') {
          iVar8 = (uint)*(byte *)(iVar8 + -0x45e8) * 8;
          *(undefined *)(iVar8 + 0x5c5b) = 0x1f;
          *(undefined *)(iVar8 + 0x5c5a) = 0x1f;
          func_0x0001e736(*(undefined *)0x5895,uVar11,uVar10,0,0x1f);
          func_0x0001db40();
          return cVar7;
        }
        if (*(char *)(iVar8 + -0x45e9) == '\x1e') {
          puVar12 = (undefined *)func_0x0001c632(uVar11,uVar10);
          *puVar12 = 0x4c;
        }
        else if ((bVar6 != 0x87) && (3 < bVar6)) {
          iVar15 = func_0x0001bcee();
          if ((int)(uint)bVar5 < iVar15) {
            iVar8 = (uint)*(byte *)(iVar8 + -0x45e8) * 8;
            *(undefined *)(iVar8 + 0x5c5b) = 0x1f;
            *(undefined *)(iVar8 + 0x5c5a) = 0x1f;
            return cVar7;
          }
          iVar15 = (uint)*(byte *)(iVar8 + -0x45e8) * 8;
          *(undefined *)(iVar15 + 0x5c5b) = 1;
          *(undefined *)(iVar15 + 0x5c5a) = 1;
          *(byte *)(iVar15 + 0x5c5f) = bVar5;
          iVar8 = func_0x0001bcee();
          if ((int)(uint)bVar5 <= iVar8) {
            return cVar7;
          }
          pbVar2 = (byte *)(iVar15 + 0x5c5f);
          *pbVar2 = *pbVar2 | 0x80;
          return cVar7;
        }
        param_2 = -1 - param_2;
      }
      else {
        iVar15 = (uint)*(byte *)(iVar8 + -0x45e9) * 2;
        if ((*(uint *)(iVar15 + 0x153c) & 0x1000) != 0) {
          func_0x00019a80(*(undefined2 *)(iVar15 + 0x1856));
          func_0x00019a80(0x6f36);
          *(undefined *)0x58a2 = 2;
          iVar15 = (uint)*(byte *)(iVar8 + -0x45e8) * 8;
          *(undefined *)(iVar15 + 0x5c5b) = 0x16;
          *(undefined *)(iVar15 + 0x5c5a) = 0x16;
          uVar13 = (uint)*(byte *)(iVar8 + -0x45e6);
          uVar10 = (uint)*(byte *)(iVar8 + -0x45e5);
          func_0x00019298(uVar10,uVar13,*(undefined *)(uVar10 * 0x20 + uVar13 + -0x52ec));
          FUN_124c_1236(-(param_2 + 1));
          func_0x000100ae();
          return cVar7;
        }
        param_2 = -(param_2 + 1);
      }
      FUN_124c_1236(param_2);
    }
    else if ((*(byte *)((uint)*(byte *)(iVar8 + -0x45e9) * 2 + 0x153c) & 0x10) != 0) {
      local_c = 0;
      do {
        func_0x0001010e(*(undefined *)(iVar8 + -0x45e5),*(undefined *)(iVar8 + -0x45e6));
        uVar3 = *(undefined2 *)0x5876;
        uVar4 = *(undefined2 *)0x5878;
        iVar15 = FUN_124c_0000(uVar4,uVar3,
                               *(undefined *)((uint)*(byte *)(iVar8 + -0x45e8) * 8 + 0x5c5a));
        if ((iVar15 != 0) &&
           (iVar15 = func_0x0001e736(*(undefined *)0x5895,uVar4,uVar3,0,
                                     *(byte *)((uint)*(byte *)(iVar8 + -0x45e8) * 8 + 0x5c5a) - 0x40
                                     >> 2), -1 < iVar15)) {
          *(byte *)(iVar15 * 8 + -0x45ec) = *pbVar9;
          func_0x00019a80(*(undefined2 *)((uint)*(byte *)(iVar8 + -0x45e9) * 2 + 0x1856));
          func_0x00019a80(0x6f42);
          return '\0';
        }
        local_c = local_c + 1;
      } while (local_c < 8);
    }
  }
  else {
    piVar14 = (int *)((uint)*(byte *)(iVar8 + -0x45e9) * 0x20 + 0x55b8);
    piVar1 = piVar14;
    *piVar1 = *piVar1 - param_1;
    if ((*piVar14 < 1) || (param_1 == 99)) {
      iVar15 = (uint)*(byte *)(iVar8 + -0x45e9) * 0x20;
      *(undefined2 *)(iVar15 + 0x55b8) = 0;
      pbVar2 = (byte *)(iVar8 + -0x45ea);
      *pbVar2 = *pbVar2 | 0x20;
      *(undefined *)(iVar15 + 0x55b3) = 0x44;
      iVar15 = (uint)*(byte *)(iVar8 + -0x45e8) * 8;
      *(undefined *)(iVar15 + 0x5c5b) = 0x1e;
      *(undefined *)(iVar15 + 0x5c5a) = 0x1e;
      if (*(char *)(iVar8 + -0x45e9) == *(char *)0x587b) {
        *(undefined *)0x587b = 0xff;
      }
    }
    func_0x0001ab30();
  }
  return cVar7;
}



void FUN_124c_18ba(uint param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) == 0) ||
     (iVar2 = (uint)*(byte *)(param_2 * 8 + -0x45e9) * 0x20, *(char *)(iVar2 + 0x55b3) != 'G')) {
    uVar1 = func_0x0001bcde(0x14,param_2);
    uVar1 = FUN_124c_1574(uVar1,param_2);
    if ((param_1 < 0x8000) && ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) != 0)) {
      func_0x0001c144(9999,uVar1,(uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55bc);
    }
  }
  else {
    *(undefined *)(iVar2 + 0x55b3) = 0x50;
    func_0x00019a80(iVar2 + 0x55a8);
    func_0x00019a80(0x6f4e);
    *(undefined *)0x58a2 = 8;
    *(undefined *)0xa9fa = 1;
  }
  return;
}



void FUN_124c_194a(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = (*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0;
  if (((!bVar4) || ((*(uint *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 2 + 0x153c) & 0x204) == 0))
     || (iVar2 = func_0x0001a2c2(3,0), iVar2 == 0)) {
    bVar1 = false;
    if (((bVar4) && (*(char *)(param_1 * 8 + -0x45e9) == '\x1c')) &&
       ((*(byte *)(param_2 * 8 + -0x45ea) & 8) == 0)) {
      func_0x0001eade(param_2);
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
    if ((*(char *)0x5890 != '\0') && (*(char *)0x589d == '4')) {
      func_0x0001eade(param_2);
      return;
    }
    if ((*(char *)0x5890 == '\0') || (*(char *)0x589d != '3')) {
      iVar2 = FUN_124c_12b0(param_2,param_1);
      if ((iVar2 < 0) && ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) != 0)) {
        *(undefined *)0x58a2 = 0x20;
        return;
      }
      uVar3 = FUN_124c_1574(iVar2,param_2);
      if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) {
        return;
      }
      func_0x0001c144(9999,uVar3,(uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55bc);
      return;
    }
  }
  FUN_124c_18ba(param_1,param_2);
  return;
}



byte * FUN_124c_1a5c(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  byte *local_6;
  
  bVar2 = false;
  param_1 = param_1 * 8;
  pbVar3 = (byte *)(param_1 + -0x45ec);
  if ((*(byte *)(param_1 + -0x45ea) & 0x80) != 0) {
    return pbVar3;
  }
  uVar4 = (uint)(*(byte *)((uint)*(byte *)(param_1 + -0x45e9) * 8 + 0x13c1) >> 2);
  if (*pbVar3 < uVar4) {
    local_6 = (byte *)0x1;
  }
  else {
    uVar4 = uVar4 << 1;
    if (uVar4 <= *pbVar3) {
      if ((uint)*pbVar3 < (uVar4 / 2) * 3) {
        local_6 = (byte *)0x3;
      }
      else {
        local_6 = (byte *)0x4;
      }
      goto LAB_124c_1aff;
    }
    local_6 = (byte *)0x2;
    iVar5 = func_0x0001bcde(0x100);
    if (iVar5 < 0xfc) goto LAB_124c_1aff;
  }
  bVar2 = true;
LAB_124c_1aff:
  if (bVar2) {
    pbVar1 = (byte *)(param_1 + -0x45ea);
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    pbVar1 = (byte *)(param_1 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return local_6;
}



void FUN_124c_1b1e(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  char *local_16;
  char *local_14;
  char *local_12;
  int local_a;
  
  local_a = 0;
  iVar2 = param_1 * 8;
  cVar1 = *(char *)((uint)*(byte *)(iVar2 + -0x45e6) + (*(uint *)(iVar2 + -0x45e5) & 0xff) * 0x20 +
                   -0x52ec);
  if ((cVar1 == -0x71) || (cVar1 == -0x44)) {
    local_a = 100;
  }
  if (cVar1 == '\x04') {
    local_a = 0x32;
  }
  if (local_a == 0) {
    uVar4 = 0;
    pcVar5 = (char *)0x5c5c;
    pcVar6 = (char *)0x5c5d;
    local_12 = (char *)0x5c5a;
    local_14 = (char *)0x5c5a;
    local_16 = (char *)0x5c5a;
    do {
      if (((uVar4 != *(byte *)(iVar2 + -0x45e8)) && (*(char *)(iVar2 + -0x45e6) == *pcVar5)) &&
         (*(char *)(iVar2 + -0x45e5) == *pcVar6)) {
        if (*local_12 == -0x16) {
          local_a = 100;
        }
        if (*local_14 == -0x18) {
          local_a = 0x32;
        }
        if (*local_16 == -0x17) {
          local_a = 0x96;
        }
        if (local_a != 0) break;
      }
      pcVar5 = pcVar5 + 8;
      pcVar6 = pcVar6 + 8;
      local_12 = local_12 + 8;
      local_14 = local_14 + 8;
      local_16 = local_16 + 8;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x20);
  }
  if (local_a == 0x32) {
    if (*(byte *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c5a) < 0x80) {
      FUN_124c_18ba(0xffff,param_1);
      func_0x0001b794(param_1);
    }
  }
  else if (local_a == 100) {
    func_0x0001b794(param_1);
    iVar2 = param_1;
    uVar3 = func_0x0001bcde(10,param_1);
    FUN_124c_1574(uVar3,iVar2);
    func_0x0001ffe2(0xff,param_1);
    *(undefined *)0xa9fa = 1;
  }
  else if (local_a == 0x96) {
    func_0x0001eade(param_1);
  }
  return;
}



void FUN_124c_1c66(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = param_1 * 8;
  uVar2 = func_0x0001bcee();
  if (uVar2 < *(byte *)(iVar3 + -0x45eb)) {
    if ((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) {
      iVar3 = *(int *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 2 + 0x1856);
    }
    else {
      iVar3 = (uint)*(byte *)(iVar3 + -0x45e9) * 0x20 + 0x55a8;
    }
    func_0x00019a80(iVar3);
    func_0x00019a80(0x6f5e);
    func_0x0001a46c(600,7000,1);
    pbVar1 = (byte *)(param_1 * 8 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xfb;
    iVar3 = (uint)*(byte *)(param_1 * 8 + -0x45e8) * 8;
    *(undefined *)(iVar3 + 0x5c5b) = *(undefined *)(iVar3 + 0x5c5a);
  }
  return;
}


