typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



int __cdecl16near FUN_1641_0000(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  pcVar3 = (char *)0x55c7;
  iVar1 = 0x10;
  do {
    if (*pcVar3 == *(char *)0x5893) {
      iVar2 = iVar2 + 1;
    }
    pcVar3 = pcVar3 + 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return iVar2;
}



undefined2 FUN_1641_002c(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x4d84);
  uVar1 = FUN_1641_0000();
  if (uVar1 < *(byte *)(*(int *)0xb114 + 0x4dc4)) {
    uVar2 = 1;
  }
  else {
    func_0x00019a80(0x4d87);
    if (param_1 == 0xc) {
      uVar2 = 0x4d95;
    }
    else {
      uVar2 = 0x4d9c;
    }
    func_0x00019a80(uVar2);
    func_0x00019a80(0x4da0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined2 FUN_1641_0072(undefined2 param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined2 unaff_DS;
  undefined4 uVar12;
  uint local_a;
  
  func_0x000198ea(0x52);
  iVar6 = FUN_1641_002c(param_2);
  if (iVar6 == 0) {
    param_1 = 0xfffe;
  }
  else {
    func_0x000198ea(0x22);
    *(int *)0xb118 = (uint)*(byte *)(*(int *)0xb114 + 0x4d7e) * (uint)*(byte *)0x585b;
    iVar6 = *(int *)0xb118;
    iVar10 = iVar6 >> 0xf;
    uVar8 = param_3 * 3;
    uVar12 = func_0x00018672(-(uVar8 - 100),
                             -((((int)uVar8 >> 0xf) - (uint)(uVar8 < 100)) +
                              (uint)(uVar8 - 100 != 0)),iVar6,iVar10,100,0);
    iVar6 = func_0x000186c6(uVar12);
    piVar1 = (int *)0xb118;
    *piVar1 = *piVar1 + iVar6;
    func_0x000101e6(*(undefined2 *)(*(int *)0xb114 * 2 + 0x4e6e));
    func_0x00019a80(0x4dca);
    cVar5 = func_0x00010192();
    func_0x00019a80(0x4de0);
    if (cVar5 == 'Y') {
      if (*(int *)0x57aa < *(int *)0xb118) {
        func_0x00019a80(0x4de3);
        func_0x0001019e(0x4e07);
      }
      else {
        piVar1 = (int *)0x57aa;
        *piVar1 = *piVar1 - *(int *)0xb118;
        func_0x0001020a();
        func_0x0001ab30();
        func_0x00019a80(0x4e13);
        if (param_2 == 0xc) {
          uVar7 = 0x4e2c;
        }
        else {
          uVar7 = 0x4e33;
        }
        func_0x00019a80(uVar7);
        func_0x0001019e(0x4e37);
        func_0x0001bd16(10);
        func_0x0001bbfc(*(undefined *)0x5951,*(undefined *)0x5950,*(undefined *)0x594f);
        iVar6 = *(int *)0xb114;
        *(undefined *)0x5896 = *(undefined *)(iVar6 + 0x4e7a);
        *(undefined *)0x5897 = *(undefined *)(iVar6 + 0x4e80);
        *(undefined *)0x24e6 = 1;
        uVar3 = *(undefined *)0x587b;
        uVar8 = (uint)*(byte *)0x585b;
        if (uVar8 != 0) {
          pcVar11 = (char *)0x55b3;
          uVar9 = 0;
          do {
            if (*pcVar11 == 'G') {
              *pcVar11 = 'S';
            }
            pcVar11 = pcVar11 + 0x20;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        func_0x0001ab30();
        func_0x0001db40();
        func_0x00019a80(0x4e44);
        iVar6 = 0xc;
        do {
          func_0x0001d1ac(5);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        while (*(char *)0x587f != '\x06') {
          func_0x0001bd16(1,iVar10);
          func_0x0001c23c();
          func_0x0001ab30();
          iVar10 = 0x65ee;
          func_0x0001d1ac(9);
          if ((*(char *)0x587f == '\x14') || (*(char *)0x587f == '\x05')) {
            func_0x0001fcca();
          }
        }
        func_0x00019a80(0x4e51);
        func_0x0001fcbe();
        local_a = 0;
        if (*(char *)0x585b != '\0') {
          iVar6 = 0x55a8;
          do {
            if (*(char *)(iVar6 + 0xb) != 'D') {
              *(undefined2 *)(iVar6 + 0x10) = *(undefined2 *)(iVar6 + 0x12);
              cVar5 = *(char *)(iVar6 + 10);
              if (cVar5 == 'A') {
LAB_1000_6643:
                bVar4 = *(byte *)(iVar6 + 0xe);
LAB_1000_6646:
                *(byte *)(iVar6 + 0xf) = bVar4;
              }
              else {
                if (cVar5 == 'B') {
                  bVar4 = *(byte *)(iVar6 + 0xe) >> 1;
                  goto LAB_1000_6646;
                }
                if (cVar5 == 'M') goto LAB_1000_6643;
              }
              if (*(char *)(iVar6 + 0xb) == 'P') {
                *(undefined *)(iVar6 + 0xb) = 0x44;
                *(undefined2 *)(iVar6 + 0x10) = 0;
                func_0x000198ea(10);
                func_0x00019a80(iVar6);
                func_0x00019a80(0x4e5b);
              }
              else if (*(char *)(iVar6 + 0xb) == 'S') {
                *(undefined *)(iVar6 + 0xb) = 0x47;
              }
            }
            iVar6 = iVar6 + 0x20;
            local_a = local_a + 1;
          } while (local_a < *(byte *)0x585b);
        }
        *(undefined *)0x587b = uVar3;
        pcVar2 = (char *)0x5896;
        *pcVar2 = *pcVar2 + '\x01';
        *(undefined *)0x24e6 = 1;
        func_0x0001ab30();
        param_1 = 0xffff;
      }
    }
  }
  return param_1;
}



undefined2 FUN_1641_02ae(undefined2 param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar16;
  undefined2 local_22 [16];
  
  func_0x000198ea(0x4c);
  iVar9 = FUN_1641_002c(param_2);
  if (iVar9 != 0) {
    if (*(char *)0x585b == '\x01') {
      func_0x000101e6(0x26e8);
      param_1 = 0xffff;
    }
    else {
      uVar6 = param_3 * 3;
      do {
        bVar7 = true;
        func_0x0001019e(0x4e86);
        uVar10 = func_0x0001b0be();
        if (uVar10 == 0xffff) {
          func_0x00019a80(0x4ea0);
          param_1 = 0xfffe;
        }
        else {
          func_0x00019a80(0x4ea9);
          if (uVar10 == 0) {
            func_0x00019a80(0x4eac);
            if (2 < *(byte *)0x585b) {
              func_0x000198ea(0x73);
            }
            func_0x00019a80(0x4eb7);
            bVar7 = false;
          }
          else if (*(char *)(uVar10 * 0x20 + 0x55b3) == 'D') {
            func_0x000101e6(0x2723);
            param_1 = 0xffff;
          }
          else {
            *(int *)0xb118 = (uint)*(byte *)(*(int *)0xb114 + 0x4d7e) * 10;
            iVar9 = *(int *)0xb118;
            uVar16 = func_0x00018672(-(uVar6 - 100),
                                     -((((int)uVar6 >> 0xf) - (uint)(uVar6 < 100)) +
                                      (uint)(uVar6 - 100 != 0)),iVar9,iVar9 >> 0xf,100,0);
            iVar9 = func_0x000186c6(uVar16);
            piVar1 = (int *)0xb118;
            *piVar1 = *piVar1 + iVar9;
            func_0x00019a80(0x4ecf);
            func_0x0001019e(0x4f00);
            func_0x00019a80(0x4f24);
            cVar8 = func_0x00010192();
            func_0x00019a80(0x4f3a);
            if (cVar8 == 'Y') {
              param_1 = 1;
              if (uVar10 == *(byte *)0x587b) {
                *(undefined *)0x587b = 0xff;
              }
              else {
                bVar3 = *(byte *)0x587b;
                if ((uVar10 < bVar3) && (bVar3 != 0xff)) {
                  pcVar2 = (char *)0x587b;
                  *pcVar2 = *pcVar2 + -1;
                }
              }
              iVar9 = uVar10 * 0x20;
              *(undefined *)(iVar9 + 0x55c7) = *(undefined *)0x5893;
              *(undefined *)(iVar9 + 0x55bf) = 0;
              puVar12 = local_22;
              puVar14 = (undefined2 *)(iVar9 + 0x55a8);
              for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar5 = puVar12;
                puVar12 = puVar12 + 1;
                puVar4 = puVar14;
                puVar14 = puVar14 + 1;
                *puVar5 = *puVar4;
              }
              if ((int)uVar10 < 0xf) {
                puVar12 = (undefined2 *)(uVar10 * 0x20 + 0x55a8);
                puVar14 = (undefined2 *)(uVar10 * 0x20 + 0x55c8);
                iVar9 = 0xf - uVar10;
                do {
                  puVar13 = puVar14;
                  puVar15 = puVar12;
                  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                    puVar5 = puVar15;
                    puVar15 = puVar15 + 1;
                    puVar4 = puVar13;
                    puVar13 = puVar13 + 1;
                    *puVar5 = *puVar4;
                  }
                  puVar12 = puVar12 + 0x10;
                  puVar14 = puVar14 + 0x10;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              puVar14 = (undefined2 *)0x5788;
              puVar12 = local_22;
              for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar5 = puVar14;
                puVar14 = puVar14 + 1;
                puVar4 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar5 = *puVar4;
              }
              pcVar2 = (char *)0x585b;
              *pcVar2 = *pcVar2 + -1;
              func_0x0001ab30();
              func_0x0001019e(0x4f3d);
            }
          }
        }
      } while (!bVar7);
    }
  }
  return param_1;
}



int FUN_1641_0494(int param_1)

{
  undefined2 unaff_DS;
  
  do {
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return 0;
    }
  } while (*(char *)(param_1 * 0x20 + 0x55c7) != *(char *)0x5893);
  return param_1;
}



int FUN_1641_04b6(int param_1)

{
  undefined2 unaff_DS;
  
  do {
    param_1 = param_1 + 1;
    if (0xf < param_1) break;
  } while (*(char *)(param_1 * 0x20 + 0x55c7) != *(char *)0x5893);
  if (param_1 == 0x10) {
    param_1 = 0;
  }
  return param_1;
}



undefined2 FUN_1641_04e6(undefined2 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  char *pcVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar18;
  int local_3a;
  int local_34;
  uint local_2c;
  undefined2 local_24 [16];
  int local_4;
  
  local_4 = FUN_1641_0000();
  if (*(char *)0x585b == '\x06') {
    func_0x00019a80(0x4f57);
    return param_1;
  }
  if (local_4 == 0) {
    func_0x0001019e(0x4f7a);
    return param_1;
  }
  if (local_4 < 2) {
    local_34 = FUN_1641_04b6(0);
  }
  else {
    func_0x00019a80(0x4fa7);
    func_0x00019dc4(1);
    func_0x0001d12c();
    func_0x00019e52(9,0x26,1,0x18,1);
    func_0x000198ea(0xff);
    func_0x00019e52(9,0x27,1,0x18,1);
    func_0x000198ea(0x10);
    iVar9 = 0xd;
    do {
      func_0x000198ea(0x11);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    func_0x000198ea(0x13);
    iVar9 = 1;
    do {
      func_0x00019e22(iVar9,0);
      func_0x000198ea(0x17);
      func_0x00019e22(iVar9,0xe);
      func_0x000198ea(0x17);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    func_0x000198ea(10);
    func_0x000198ea(0x14);
    iVar9 = 0xd;
    do {
      func_0x000198ea(0x15);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    func_0x000198ea(0x16);
    func_0x00019e22(1,1);
    func_0x00019a80(0x4fc0);
    uVar11 = 1;
    func_0x00019e22(2,1);
    func_0x00019a80(0x4fca);
    pcVar12 = (char *)0x55e7;
    iVar9 = 0x55c8;
    local_3a = 0xf;
    do {
      if (*pcVar12 == *(char *)0x5893) {
        uVar8 = func_0x00019f1e(4);
        func_0x00019e22(uVar8,uVar11);
        func_0x00019a80(iVar9);
        func_0x000198ea(10);
      }
      pcVar12 = pcVar12 + 0x20;
      iVar9 = iVar9 + 0x20;
      local_3a = local_3a + -1;
    } while (local_3a != 0);
    func_0x00019dc4(2);
    bVar6 = false;
    local_34 = FUN_1641_04b6(0);
    iVar9 = 0x28;
    func_0x00018ca0(*(undefined2 *)0x13b0);
    do {
      func_0x00018db6(iVar9 + 7,0x131,iVar9,0xc6);
      do {
        bVar7 = func_0x0001a89c();
        if (bVar7 == 3) {
LAB_1641_067c:
          iVar13 = FUN_1641_0494(local_34);
          if (iVar13 != 0) {
            func_0x00018db6(iVar9 + 7,0x131,iVar9,0xc6);
            iVar9 = iVar9 + -8;
            local_34 = iVar13;
          }
        }
        else if (bVar7 < 4) {
          if (bVar7 == 1) goto LAB_1641_067c;
          if (bVar7 == 2) goto LAB_1641_06a4;
LAB_1000_6b00:
          iVar13 = 0;
        }
        else if (bVar7 == 4) {
LAB_1641_06a4:
          iVar13 = FUN_1641_04b6(local_34);
          if (iVar13 != 0) {
            func_0x00018db6(iVar9 + 7,0x131,iVar9,0xc6);
            iVar9 = iVar9 + 8;
            local_34 = iVar13;
          }
        }
        else {
          if (bVar7 != 0xd) {
            if (bVar7 == 0x1b) {
              func_0x00019a80(0x4fd8);
              local_34 = 0;
            }
            else if (bVar7 != 0x20) goto LAB_1000_6b00;
          }
          iVar13 = 1;
          bVar6 = true;
        }
      } while (iVar13 == 0);
    } while (!bVar6);
    func_0x0001d16c();
    func_0x0001ab30();
  }
  if (local_34 == 0) {
    return param_1;
  }
  local_2c = (uint)*(byte *)(local_34 * 0x20 + 0x55bf);
  if (local_2c == 0) {
    local_2c = 1;
  }
  *(int *)0xb118 = (uint)*(byte *)(*(int *)0xb114 + 0x4d7e) * 10;
  iVar9 = *(int *)0xb118;
  uVar10 = param_2 * 3;
  uVar18 = func_0x00018672(-(uVar10 - 100),
                           -((((int)uVar10 >> 0xf) - (uint)(uVar10 < 100)) +
                            (uint)(uVar10 - 100 != 0)),iVar9,iVar9 >> 0xf,100,0);
  iVar9 = func_0x000186c6(uVar18);
  piVar1 = (int *)0xb118;
  *piVar1 = *piVar1 + iVar9;
  *(int *)0xb118 = local_2c * *(int *)0xb118;
  func_0x0001019e(0x4fe1);
  if (*(int *)0x57aa < *(int *)0xb118) {
    func_0x000101e6(0x275a);
    func_0x0001fd06();
    return 0xffff;
  }
  piVar1 = (int *)0x57aa;
  *piVar1 = *piVar1 - *(int *)0xb118;
  func_0x0001020a();
  func_0x0001ab30();
  puVar14 = local_24;
  puVar16 = (undefined2 *)(local_34 * 0x20 + 0x55a8);
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    puVar3 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar4 = *puVar3;
  }
  uVar10 = (uint)*(byte *)0x585b;
  if ((int)uVar10 < local_34) {
    puVar14 = (undefined2 *)(local_34 * 0x20 + 0x55a8);
    puVar16 = (undefined2 *)(local_34 * 0x20 + 0x5588);
    local_34 = local_34 - uVar10;
    do {
      puVar15 = puVar16;
      puVar17 = puVar14;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar4 = puVar17;
        puVar17 = puVar17 + 1;
        puVar3 = puVar15;
        puVar15 = puVar15 + 1;
        *puVar4 = *puVar3;
      }
      puVar14 = puVar14 + -0x10;
      puVar16 = puVar16 + -0x10;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  puVar16 = (undefined2 *)((uint)*(byte *)0x585b * 0x20 + 0x55a8);
  puVar14 = local_24;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar16;
    puVar16 = puVar16 + 1;
    puVar3 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = *puVar3;
  }
  bVar7 = *(byte *)0x585b;
  pcVar2 = (char *)0x585b;
  *pcVar2 = *pcVar2 + '\x01';
  iVar9 = (uint)bVar7 * 0x20;
  *(undefined *)(iVar9 + 0x55c7) = 0;
  if (*(char *)(iVar9 + 0x55b3) == 'P') {
    *(undefined *)(iVar9 + 0x55b3) = 0x44;
    *(undefined2 *)(iVar9 + 0x55b8) = 0;
    uVar11 = 0x5005;
    goto LAB_1000_6c9b;
  }
  *(undefined2 *)(iVar9 + 0x55b8) = *(undefined2 *)(iVar9 + 0x55ba);
  cVar5 = *(char *)(iVar9 + 0x55b2);
  if (cVar5 == 'A') {
LAB_1000_6c90:
    bVar7 = *(byte *)(iVar9 + 0x55b6);
LAB_1000_6c95:
    *(byte *)(iVar9 + 0x55b7) = bVar7;
  }
  else {
    if (cVar5 == 'B') {
      bVar7 = *(byte *)(iVar9 + 0x55b6) >> 1;
      goto LAB_1000_6c95;
    }
    if (cVar5 == 'M') goto LAB_1000_6c90;
  }
  uVar11 = 0x5028;
LAB_1000_6c9b:
  func_0x00019a80(uVar11);
  func_0x0001019e(0x5055);
  func_0x0001ab30();
  return 1;
}



void FUN_1641_08b4(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  char local_e;
  int local_a;
  
  local_a = 0;
  bVar3 = false;
  param_1 = param_1 * 0x20;
  uVar1 = *(undefined *)(param_1 + 0x55b6);
  uVar2 = *(undefined *)(param_1 + 0x55b1);
  *(undefined *)0x588e = 0;
  *(undefined *)0x587a = 0;
  func_0x0001ab30();
  func_0x00010216();
  while (!bVar3) {
    do {
      local_e = func_0x0001a89c(param_1);
      if (local_e == ' ') {
        local_e = 'N';
      }
      if (local_e == 'N') {
        uVar4 = 0x505f;
LAB_1000_6d0b:
        func_0x00019a80(uVar4);
      }
      else if (local_e == 'Y') {
        uVar4 = 0x5062;
        goto LAB_1000_6d0b;
      }
    } while ((local_e != 'N') && (local_e != 'Y'));
    if (local_e == 'N') break;
    func_0x0001019e(0x5066);
    func_0x00019a80(0x508e);
    do {
      local_e = func_0x0001a89c();
      iVar5 = local_a;
      if (local_e == ' ') {
LAB_1641_095f:
        bVar3 = true;
        local_a = iVar5;
      }
      else if (local_e == 'L') {
        iVar6 = FUN_1641_02ae(local_a,uVar2,uVar1);
        if (-2 < iVar6) {
          iVar5 = iVar6;
        }
LAB_1000_6d8f:
        local_a = iVar5;
        if (iVar5 == -1) goto LAB_1641_095f;
      }
      else {
        if (local_e == 'P') {
          iVar5 = FUN_1641_04e6(local_a,uVar1);
          goto LAB_1000_6d8f;
        }
        if (local_e == 'R') {
          iVar5 = FUN_1641_0072(local_a,uVar2,uVar1);
          if (-2 < iVar5) goto LAB_1641_095f;
        }
        else {
          local_e = '\0';
        }
      }
    } while (local_e == '\0');
    if (!bVar3) {
      func_0x00019a80(0x50bd);
    }
  }
  func_0x00010222(local_a);
  return;
}


