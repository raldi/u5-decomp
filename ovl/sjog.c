typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



int __cdecl16near FUN_141b_0000(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0x20;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
  } while (*(char *)(iVar1 * 8 + 0x5c5a) != '\0');
  return iVar1;
}



void FUN_141b_002a(undefined2 param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5876 = param_2;
  *(undefined2 *)0x5878 = param_1;
  if (param_3 == 0) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
  }
  else if (param_3 == 1) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_3 == 2) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_3 == 3) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
  }
  return;
}



undefined2 FUN_141b_006c(int param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x84e6);
  while (((cVar1 = func_0x0001a89c(), cVar1 != ' ' && (cVar1 != '\x03')) && (cVar1 != '\x04'))) {
    if ((cVar1 == '\x02') || (cVar1 == '\x01')) break;
  }
  if (cVar1 == '\x01') {
    func_0x00019a80(0x8508);
    param_1 = param_1 + 3;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
          func_0x00019a80(0x84fa);
          *(uint *)0x5876 = (uint)*(byte *)0x5896;
          *(uint *)0x5878 = (uint)*(byte *)0x5897;
          return 1;
        }
        if (cVar1 != ' ') {
          return 1;
        }
        func_0x00019a80(0x84ec);
        return 0;
      }
      func_0x00019a80(0x84f2);
      goto LAB_141b_00d2;
    }
    func_0x00019a80(0x8500);
    param_1 = param_1 + 1;
  }
  param_1 = param_1 % 4;
LAB_141b_00d2:
  FUN_141b_002a(*(undefined *)0x5897,*(undefined *)0x5896,param_1);
  return 1;
}



void FUN_141b_012a(int param_1)

{
  if (param_1 - 1U < 0x1f) {
                    // WARNING: Could not emulate address calculation at 0x000142eb
                    // WARNING: Treating indirect jump as call
    (**(code **)((param_1 - 1U) * 2 + -0x3ed0))();
    return;
  }
  func_0x00019a80(0x85f4);
  return;
}



void FUN_141b_01f2(int param_1,int param_2)

{
  byte *pbVar1;
  undefined uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  iVar3 = func_0x0001a2c2(7,0);
  if (iVar3 == 0) {
    iVar3 = func_0x0001a2c2(3,0);
    if (iVar3 == 0) {
      func_0x00019a80(0x863a);
      uVar2 = 0xf;
    }
    else {
      func_0x00019a80(0x8642);
      uVar2 = 2;
    }
    *(undefined *)(param_2 * 8 + 0x5c5b) = uVar2;
    *(undefined *)(param_2 * 8 + 0x5c5a) = uVar2;
    uVar2 = func_0x0001a2c2(3,1);
    *(undefined *)(param_2 * 8 + 0x5c5f) = uVar2;
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    func_0x0001db40();
  }
  else {
    func_0x0001bca4(param_2,0,0,0,0,0,0);
    iVar3 = func_0x0001a2c2(0x1f,0);
    if (iVar3 == 0x13) {
      func_0x00019a80(0x8606);
      func_0x0001a46c(500,3000,0x28);
      *(undefined *)(param_1 * 0x20 + 0x55b3) = 0x50;
      *(undefined *)0xa9fa = 1;
    }
    else {
      uVar4 = func_0x0001a2c2(3,0,0);
      iVar3 = func_0x0001a2c2(uVar4);
      if (iVar3 == 0) {
        uVar4 = 0x8610;
      }
      else if (iVar3 == 1) {
        uVar4 = 0x861a;
      }
      else if (iVar3 == 2) {
        uVar4 = 0x8622;
      }
      else {
        if (iVar3 != 3) {
          return;
        }
        uVar4 = 0x862a;
      }
      func_0x00019a80(uVar4);
    }
  }
  return;
}



void FUN_141b_02ea(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)(param_2 * 8 + 0x5c5f);
  if ((bVar1 & 0x80) == 0) {
    uVar3 = -(*(byte *)(param_1 * 0x20 + 0x55b6) - 0x1e);
  }
  else {
    uVar3 = ((bVar1 & 0x7f) - (uint)*(byte *)(param_1 * 0x20 + 0x55b6)) + 0x1e;
  }
  iVar4 = func_0x0001a2c2(0x1e,1);
  bVar2 = (int)(uVar3 >> 1) <= iVar4;
  if (((bVar2) && ((bVar1 & 0x80) == 0)) || ((!bVar2 && ((bVar1 & 0x80) != 0)))) {
    uVar5 = 0x864a;
  }
  else {
    uVar3 = bVar1 & 0x7f;
    if ((bVar2) && (uVar3 < 10)) {
      uVar5 = 0x8654;
    }
    else if ((bVar2) && (0x14 < uVar3)) {
      uVar5 = 0x8664;
    }
    else {
      uVar5 = 0x8676;
    }
  }
  func_0x00019a80(uVar5);
  return;
}



undefined2 FUN_141b_03a8(uint param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  bool bVar6;
  undefined2 unaff_DS;
  uint local_6;
  
  local_6 = 8;
  uVar2 = local_6;
  do {
    do {
      local_6 = uVar2;
      uVar2 = local_6 - 1;
      if ((int)uVar2 < 0) {
        return 0;
      }
    } while ((((*(byte *)(local_6 + 0x582f) != param_3) || (*(byte *)(local_6 + 0x5837) != param_2))
             || (*(byte *)(local_6 + 0x5847) != param_1)) ||
            (*(char *)(local_6 + 0x583f) != *(char *)0x5893));
    bVar6 = false;
    iVar5 = 0x20;
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      iVar3 = func_0x0001b8be(param_1,param_2,param_3);
      if ((iVar3 == 0x19) && (*(byte *)(*(int *)0x5876 * 8 + 0x5c5f) == uVar2)) {
        bVar6 = true;
      }
    }
  } while (bVar6);
  uVar4 = func_0x0001bb14();
  func_0x0001bca4(uVar4,uVar2,param_1,param_2,param_3,0x19,0x19);
  func_0x00019a80(0x8680);
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return 1;
}



undefined2 FUN_141b_045a(uint param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 *local_a;
  
  iVar5 = 0;
  local_a = (undefined2 *)0x3e72;
  while ((((*(byte *)(iVar5 + 0x3e66) != param_2 || (*(byte *)(iVar5 + 0x3e6a) != param_1)) ||
          (*(char *)0x587f != '\0')) ||
         (cVar2 = *(char *)0x587e, *(char *)(iVar5 + 0x5858) == cVar2))) {
    local_a = local_a + 1;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return 0;
    }
  }
  *(char *)(iVar5 + 0x5858) = cVar2;
  uVar3 = (uint)*(byte *)(iVar5 + 0x3e6e);
  iVar5 = func_0x0001a2c2(0xf,2);
  pcVar1 = (char *)(uVar3 + 0x5850);
  *pcVar1 = *pcVar1 + (char)iVar5;
  if (99 < *(byte *)(uVar3 + 0x5850)) {
    *(undefined *)(uVar3 + 0x5850) = 99;
  }
  if (iVar5 < 10) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  func_0x00019c6e(0x20,uVar4,iVar5);
  func_0x00019a80(0x86be);
  func_0x00019a80(*local_a);
  func_0x00019a80(0x86ca);
  return 1;
}



void FUN_141b_0514(uint param_1,uint param_2)

{
  byte *pbVar1;
  undefined uVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined2 unaff_DS;
  
  bVar3 = false;
  iVar6 = 0;
  while ((((*(char *)(iVar6 + 0x3f5c) != *(char *)0x5893 ||
           (*(char *)(iVar6 + 0x3fce) != *(char *)0x5895)) || (*(byte *)(iVar6 + 0x4040) != param_2)
          ) || (*(byte *)(iVar6 + 0x40b2) != param_1))) {
LAB_141b_062a:
    iVar6 = iVar6 + 1;
    if (0x70 < iVar6) {
LAB_141b_05a6:
      if (iVar6 == 0xe) {
        *(undefined *)0x57b2 = *(undefined *)0x587e;
      }
      if (bVar3) {
        uVar5 = func_0x0001bb14();
        uVar2 = *(undefined *)(iVar6 + 0x3e78);
        func_0x0001bca4(uVar5,*(undefined *)(iVar6 + 0x3eea),*(undefined *)(iVar6 + 0x3fce),
                        *(undefined *)(iVar6 + 0x40b2),*(undefined *)(iVar6 + 0x4040),uVar2,uVar2);
        pbVar1 = (byte *)0x24e6;
        *pbVar1 = *pbVar1 | 2;
        FUN_141b_012a(uVar2);
      }
      else {
        func_0x00019a80(0x86cc);
      }
      return;
    }
  }
  if (((((iVar6 != 0xd) || (*(char *)0x57ac != '\0')) ||
       (iVar4 = func_0x0001b8be(*(undefined *)0x5895,param_1,param_2), iVar4 != 0)) &&
      ((iVar6 != 0xe || (*(char *)0x587e == *(char *)0x57b2)))) &&
     ((iVar6 != 0xf ||
      ((*(char *)0x57e7 != '\0' ||
       (iVar4 = func_0x0001b8be(*(undefined *)0x5895,param_1,param_2), iVar4 != 0)))))) {
    uVar7 = 1 << ((byte)iVar6 & 7);
    if (((uVar7 & *(byte *)((iVar6 >> 3) + 0x585c)) != 0) || ((0xc < iVar6 && (iVar6 < 0x10))))
    goto LAB_141b_062a;
    pbVar1 = (byte *)((iVar6 >> 3) + 0x585c);
    *pbVar1 = *pbVar1 | (byte)uVar7;
  }
  bVar3 = true;
  goto LAB_141b_05a6;
}



void __cdecl16near FUN_141b_0646(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 unaff_DS;
  
  iVar6 = func_0x0001cbb8();
  if (iVar6 == -1) {
    return;
  }
  if ((*(char *)0x58a7 == '\0') && (*(char *)0x58a6 == '\0')) {
    uVar7 = 0x86de;
  }
  else {
    iVar8 = FUN_141b_006c(*(undefined *)0x6603);
    if (iVar8 == 0) {
      return;
    }
    uVar10 = *(uint *)0x5876;
    uVar2 = *(uint *)0x5878;
    uVar9 = (uint)*(byte *)0x5895;
    bVar3 = *(byte *)(uVar9 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7) + 0x595a);
    uVar9 = (uVar9 * 2 - (uint)*(byte *)(iVar6 * 0x20 + 0x55b5)) + 0x1e >> 1;
    func_0x00019a80(0x86f4);
    bVar4 = bVar3 & 0xf0;
    if (bVar4 == 0x70) {
      uVar7 = 0x87ca;
    }
    else if (bVar4 < 0x71) {
      if (bVar4 != 0x20) {
        if (bVar4 < 0x21) {
          if ((bVar3 & 0xf0) == 0) {
            uVar7 = 0x8700;
            goto LAB_141b_066b;
          }
          if (bVar4 != 0x10) {
            return;
          }
        }
        else if (bVar4 != 0x30) {
          if (bVar4 == 0x40) {
            iVar6 = func_0x0001a2c2(0x1e,1);
            if ((int)uVar9 < iVar6) {
              if (bVar3 == 0x40) {
                uVar7 = 0x8732;
                goto LAB_141b_066b;
              }
              uVar10 = (uint)*(byte *)0x5895;
            }
            else {
              uVar10 = func_0x0001a2c2(8,1);
            }
            if ((int)uVar10 < 4) {
              uVar7 = 0x873c;
            }
            else if ((int)uVar10 < 7) {
              uVar7 = 0x875c;
            }
            else {
              uVar7 = 0x874c;
            }
            goto LAB_141b_066b;
          }
          if (bVar4 == 0x50) {
            uVar7 = 0x8764;
            goto LAB_141b_066b;
          }
          if (bVar4 != 0x60) {
            return;
          }
          if (bVar3 == 0x60) {
            uVar7 = 0x8786;
            goto LAB_141b_066b;
          }
          if (bVar3 != 0x61) {
            if (bVar3 != 0x62) {
              return;
            }
            iVar6 = func_0x0001a2c2(0x1e,1);
            if ((int)uVar9 < iVar6) {
              func_0x00019a80(0x87aa);
              pbVar1 = (byte *)((uint)*(byte *)0x5895 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7) +
                               0x595a);
              *pbVar1 = *pbVar1 & 8;
              return;
            }
            uVar7 = 0x87b8;
            goto LAB_141b_066b;
          }
          func_0x00019a80(0x87a2);
          iVar6 = (uint)*(byte *)0x5895 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7);
          *(undefined *)(iVar6 + 0x595a) = 0x60;
          if (*(byte *)0x5895 < 7) {
            pbVar1 = (byte *)(iVar6 + 0x599a);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_141b_089e;
        }
      }
      uVar7 = 0x8712;
    }
    else if (bVar4 == 0xb0) {
      uVar7 = 0x886c;
    }
    else {
      if (0xb0 < bVar4) {
        if (bVar4 == 0xc0) {
          bVar4 = *(byte *)0x6604 & 0xf;
          if (bVar4 == 1) {
            uVar7 = 0x88ac;
            goto LAB_141b_066b;
          }
          if (bVar4 == 2) {
            uVar7 = 0x888a;
            goto LAB_141b_066b;
          }
          func_0x00019a80(0x88c8);
          func_0x00019a80(0x88ea);
          iVar6 = (uVar2 & 7) * 8 + (uVar10 & 7);
          bVar4 = *(byte *)0x5895;
          cVar5 = (bVar3 & 8) + 0xb0;
        }
        else {
          if (bVar4 != 0xd0) {
            if ((bVar4 != 0xe0) && (bVar4 != 0xf0)) {
              return;
            }
            uVar7 = 0x890e;
            goto LAB_141b_066b;
          }
          func_0x00019a80(0x88fe);
          iVar6 = (uVar2 & 7) * 8 + (uVar10 & 7);
          bVar4 = *(byte *)0x5895;
          cVar5 = (bVar3 & 8) - 0x20;
        }
        *(char *)((uint)bVar4 * 0x40 + iVar6 + 0x595a) = cVar5;
LAB_141b_089e:
        func_0x0001fe86(1);
        func_0x00019176(0xb7,0xb7,8,8);
        return;
      }
      if (bVar4 == 0x80) {
        if (bVar3 == 0x80) {
          uVar7 = 0x87d6;
        }
        else if (bVar3 == 0x81) {
          uVar7 = 0x87e6;
        }
        else if (bVar3 == 0x82) {
          uVar7 = 0x87fc;
        }
        else if (bVar3 == 0x83) {
          uVar7 = 0x880e;
        }
        else {
          uVar7 = 0x8822;
        }
      }
      else if (bVar4 == 0x90) {
        uVar7 = 0x8834;
      }
      else {
        if (bVar4 != 0xa0) {
          return;
        }
        uVar7 = 0x884e;
      }
    }
  }
LAB_141b_066b:
  func_0x00019a80(uVar7);
  return;
}



void __cdecl16near FUN_141b_095c(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined2 unaff_DS;
  char *local_16;
  byte *local_14;
  
  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_141b_0646();
    return;
  }
  iVar2 = func_0x0001b81c();
  if (iVar2 == 0) {
    return;
  }
  uVar3 = (uint)*(byte *)0x5896 + *(int *)0x5876;
  uVar4 = (uint)*(byte *)0x5897 + *(int *)0x5878;
  iVar2 = func_0x0001cbb8();
  if (iVar2 == -1) {
    return;
  }
  pbVar5 = (byte *)func_0x0001c632(uVar4,uVar3);
  uVar6 = (uint)*pbVar5;
  pbVar5 = (byte *)0x5c64;
  local_14 = (byte *)0x5c65;
  local_16 = (char *)0x5c66;
  pcVar10 = (char *)0x5c62;
  iVar7 = 1;
  do {
    if ((((*pbVar5 == uVar3) && (*local_14 == uVar4)) &&
        ((0x7f < *(byte *)0x5893 || (*local_16 == *(char *)0x5895)))) && (*pcVar10 == '\x01'))
    break;
    pbVar5 = pbVar5 + 8;
    local_14 = local_14 + 8;
    local_16 = local_16 + 8;
    pcVar10 = pcVar10 + 8;
    iVar7 = iVar7 + 1;
  } while (pcVar10 < (char *)0x5d5a);
  if (iVar7 < 0x20) {
    func_0x00019a80(0x892c);
    FUN_141b_02ea(iVar2,iVar7);
    return;
  }
  iVar7 = func_0x0001b932(*(undefined *)0x5895,uVar4,uVar3);
  if (iVar7 == 0x1f) {
    func_0x00019a80(0x893e);
    FUN_141b_01f2(iVar2,*(undefined2 *)0x5876);
    return;
  }
  if (uVar6 == 0xa5) {
    uVar8 = 0x8996;
    goto LAB_141b_0a83;
  }
  if (uVar6 < 0xa6) {
    if (uVar6 == 0x4f) {
      uVar8 = 0x8a24;
      goto LAB_141b_0a83;
    }
    if (uVar6 < 0x50) {
      if (uVar6 == 0x2b) {
        uVar8 = 0x8950;
        goto LAB_141b_0a83;
      }
    }
    else {
      if (uVar6 == 0x5a) {
        uVar8 = 0x8960;
        goto LAB_141b_0a83;
      }
      if (0x5b < uVar6) {
        if (uVar6 < 0x5e) {
          uVar8 = 0x8970;
          goto LAB_141b_0a83;
        }
        if (uVar6 == 0xa1) {
          uVar8 = 0x8984;
          goto LAB_141b_0a83;
        }
      }
    }
  }
  else if (uVar6 - 0xa6 < 0x17) {
                    // WARNING: Could not emulate address calculation at 0x00014ca9
                    // WARNING: Treating indirect jump as call
    (**(code **)((uVar6 - 0xa6) * 2 + -0x3582))();
    return;
  }
  uVar8 = 0x8a34;
LAB_141b_0a83:
  func_0x00019a80(uVar8);
  func_0x00019a80(0x8a38);
  if (uVar6 == 0x4e) {
    func_0x00019a80(0x8a48);
    if (*(byte *)0x5895 < 0x80) {
      puVar9 = (undefined *)func_0x0001c632(uVar4,uVar3);
      *puVar9 = 0xb9;
    }
    else {
      puVar9 = (undefined *)func_0x0001c632(uVar4,uVar3);
      *puVar9 = 0xb8;
    }
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
  }
  else if (((uVar6 == 0xdc) || (iVar2 = FUN_141b_03a8(*(undefined *)0x5895,uVar4,uVar3), iVar2 == 0)
           ) && (iVar2 = FUN_141b_045a(uVar4,uVar3), iVar2 == 0)) {
    FUN_141b_0514(uVar4,uVar3);
  }
  return;
}



void FUN_141b_0baa(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined2 unaff_DS;
  
  iVar5 = func_0x0001cbb8();
  if (iVar5 != -1) {
    bVar3 = *(byte *)(param_1 * 8 + 0x5c5f);
    if (bVar3 < 0x80) {
      uVar6 = 0x8a58;
    }
    else {
      bVar4 = *(byte *)(iVar5 * 0x20 + 0x55b5);
      uVar7 = func_0x0001a2c2(0x1e,1);
      if ((((bVar3 & 0x7f) - (uint)bVar4) + 0x1e >> 1 & 0xff) < uVar7) {
        func_0x00019a80(0x8a64);
        pbVar1 = (byte *)(param_1 * 8 + 0x5c5f);
        *pbVar1 = *pbVar1 & 0x7f;
        return;
      }
      uVar6 = 0x8a6e;
    }
    func_0x00019a80(uVar6);
    func_0x0001c5de(0x32,1,2000,800);
    pcVar2 = (char *)0x57ac;
    *pcVar2 = *pcVar2 + -1;
  }
  return;
}



void __cdecl16near FUN_141b_0c3e(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  
  func_0x00019a80(0x8a7a);
  iVar4 = func_0x0001cbb8();
  if (iVar4 == -1) {
    return;
  }
  uVar5 = (uint)*(byte *)0x5896;
  uVar6 = (uint)*(byte *)0x5897;
  uVar7 = (uint)*(byte *)0x5895;
  bVar2 = *(byte *)(uVar7 * 0x40 + (uVar6 & 7) * 8 + (uVar5 & 7) + 0x595a);
  bVar3 = *(byte *)(iVar4 * 0x20 + 0x55b5);
  if ((bVar2 & 0xf7) == 0x40) {
    if (*(char *)0x57ac != '\0') {
      uVar8 = 0x8a86;
LAB_141b_0cc5:
      func_0x00019a80(uVar8);
      pcVar1 = (char *)0x57ac;
      *pcVar1 = *pcVar1 + -1;
      return;
    }
    uVar8 = 0x8a7c;
  }
  else if ((bVar2 & 0xf0) == 0x40) {
    if (*(char *)0x57ac != '\0') {
      iVar4 = func_0x0001a2c2(0x1e,1);
      if ((int)((uVar7 * 2 - (uint)bVar3) + 0x1e >> 1) < iVar4) {
        func_0x00019a80(0x8a9c);
        *(char *)((uint)*(byte *)0x5895 * 0x40 + (uVar6 & 7) * 8 + (uVar5 & 7) + 0x595a) =
             (bVar2 & 8) + 0x40;
        return;
      }
      uVar8 = 0x8aac;
      goto LAB_141b_0cc5;
    }
    uVar8 = 0x8a92;
  }
  else if ((bVar2 & 0xf0) == 0x70) {
    uVar8 = 0x8ab8;
  }
  else {
    uVar8 = 0x8ac8;
  }
  func_0x00019a80(uVar8);
  return;
}



void __cdecl16near FUN_141b_0d4a(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined *puVar12;
  int *piVar13;
  undefined2 unaff_DS;
  char *local_12;
  byte *local_10;
  
  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_141b_0c3e();
    return;
  }
  if (*(char *)0x57ac == '\0') {
    uVar4 = 0x8ad0;
  }
  else {
    iVar5 = func_0x0001b81c();
    if (iVar5 == 0) {
      return;
    }
    uVar6 = (uint)*(byte *)0x5896 + *(int *)0x5876;
    uVar7 = (uint)*(byte *)0x5897 + *(int *)0x5878;
    pbVar8 = (byte *)func_0x0001c632(uVar7,uVar6);
    bVar3 = *pbVar8;
    if (bVar3 < 0x99) {
      if (0x96 < bVar3) {
        uVar4 = 0x8af2;
LAB_141b_0df2:
        func_0x00019a80(uVar4);
        pcVar1 = (char *)0x57ac;
        *pcVar1 = *pcVar1 + -1;
        return;
      }
      if ((0x83 < bVar3) && (bVar3 < 0x86)) {
        if ((*(byte *)0x5893 < 0x80) &&
           (iVar5 = func_0x0001b8be(*(undefined *)0x5895,uVar7,uVar6), iVar5 == 0)) {
          uVar4 = 0x8afe;
        }
        else {
          uVar4 = *(undefined2 *)0x5876;
          iVar5 = func_0x0001cbb8();
          if (iVar5 == -1) {
            return;
          }
          uVar9 = func_0x0001a2c2(0x1d,0);
          if (*(byte *)(iVar5 * 0x20 + 0x55b5) <= uVar9) {
            uVar4 = 0x8b10;
            goto LAB_141b_0df2;
          }
          if (*(byte *)0x5893 < 0x7f) {
            iVar5 = func_0x0001fd4e(uVar4);
            if (iVar5 != -1) {
              piVar13 = (int *)(iVar5 * 0x10 + 0x5f68);
              if (*piVar13 != 0) {
                *piVar13 = 0;
              }
              iVar11 = func_0x0001fd2a(iVar5);
              if (iVar11 == 0) {
                iVar11 = iVar5 * 0x10;
                *(undefined *)(iVar11 + 0x5d5e) = 5;
                *(undefined *)(iVar11 + 0x5d5f) = 5;
                *(undefined *)(iVar11 + 0x5d60) = 5;
                func_0x00019a80(0x8b36);
                func_0x0001c120(99,2,0x5888);
              }
              func_0x0001fd36(iVar5);
              return;
            }
            uVar4 = 0x8b1c;
          }
          else {
            puVar12 = (undefined *)func_0x0001c632(uVar7,uVar6);
            *puVar12 = 0x44;
            pbVar2 = (byte *)0x24e6;
            *pbVar2 = *pbVar2 | 2;
            uVar4 = 0x8b48;
          }
        }
        goto LAB_141b_0d70;
      }
    }
    else if ((bVar3 == 0xb9) || (bVar3 == 0xbb)) {
      iVar5 = func_0x0001cbb8();
      if (iVar5 == -1) {
        return;
      }
      uVar9 = func_0x0001a2c2(0x1d,0);
      if (*(byte *)(iVar5 * 0x20 + 0x55b5) <= uVar9) {
        uVar4 = 0x8ada;
        goto LAB_141b_0df2;
      }
      pcVar10 = (char *)func_0x0001c632(uVar7,uVar6);
      *pcVar10 = bVar3 - 1;
      pbVar2 = (byte *)0x24e6;
      *pbVar2 = *pbVar2 | 2;
      uVar4 = 0x8ae6;
      goto LAB_141b_0d70;
    }
    iVar5 = 1;
    pbVar8 = (byte *)0x5c64;
    local_10 = (byte *)0x5c65;
    local_12 = (char *)0x5c66;
    pcVar10 = (char *)0x5c62;
    do {
      if ((((*pbVar8 == uVar6) && (*local_10 == uVar7)) &&
          ((0x7f < *(byte *)0x5893 || (*local_12 == *(char *)0x5895)))) && (*pcVar10 == '\x01'))
      break;
      pbVar8 = pbVar8 + 8;
      local_10 = local_10 + 8;
      local_12 = local_12 + 8;
      pcVar10 = pcVar10 + 8;
      iVar5 = iVar5 + 1;
    } while (pcVar10 < (char *)0x5d5a);
    if (iVar5 < 0x20) {
      FUN_141b_0baa(iVar5,*(undefined *)0x5895,uVar7,uVar6);
      return;
    }
    uVar4 = 0x8b52;
  }
LAB_141b_0d70:
  func_0x00019a80(uVar4);
  return;
}



void FUN_141b_0f88(int *param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
                  ,int param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((param_7 == 3) || (param_7 == 4)) {
    param_6 = param_6 + -1;
  }
  if (param_7 != 1) {
    if (param_7 != 2) goto LAB_141b_0fc9;
    param_2 = param_2 * 3;
  }
  param_6 = func_0x0001a2c2(param_2,1);
LAB_141b_0fc9:
  iVar2 = FUN_141b_0000();
  if (iVar2 != 0) {
    func_0x0001bca4(iVar2,param_6,param_3,param_4,param_5,param_7,param_7);
    if (*(byte *)0x5893 < 0x80) {
      *(undefined *)(iVar2 * 8 + 0x5c61) = 0;
      *(undefined *)(iVar2 * 8 + 0x5c5e) = (undefined)param_3;
    }
    else {
      *(undefined *)(iVar2 * 8 + 0x5c61) = 0x20;
    }
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    func_0x0001db40();
    if (*param_1 == 0) {
      func_0x00019a80(0x8b5c);
      *param_1 = 1;
    }
    FUN_141b_012a(param_7);
  }
  return;
}



void FUN_141b_1040(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int iVar3;
  
  iVar2 = 8;
  while (iVar3 = iVar2, iVar2 = iVar3 + -1, -1 < iVar2) {
    if (*(byte *)(iVar3 + 0x412b) <= param_5) {
      uVar1 = func_0x0001a2c2(0x1e,1);
      if (*(byte *)(iVar3 + 0x412b) <= uVar1) {
        if (*(char *)(iVar3 + 0x4133) == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = func_0x0001a2c2(*(undefined *)(iVar3 + 0x4133),1);
        }
        FUN_141b_0f88(param_1,param_5,param_2,param_3,param_4,uVar4,*(undefined *)(iVar3 + 0x4123));
      }
    }
  }
  return;
}



void FUN_141b_10b8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = (int)param_5 / 2;
  while (iVar1 = local_4 + -1, -1 < local_4) {
    iVar2 = func_0x0001a2c2(0x2f,0);
    local_4 = iVar1;
    if (*(byte *)(iVar2 + 0x416c) <= param_5) {
      uVar3 = func_0x0001a2c2(0x1e,1);
      if (*(byte *)(iVar2 + 0x416c) <= uVar3) {
        FUN_141b_0f88(param_1,param_5,param_2,param_3,param_4,iVar2,*(undefined *)(iVar2 + 0x413c));
      }
    }
  }
  return;
}



void FUN_141b_112c(uint param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  undefined2 unaff_DS;
  char *local_14;
  byte *local_12;
  byte *local_10;
  int local_a;
  byte local_8;
  int local_6;
  uint local_4;
  
  local_a = 0;
  local_6 = 1;
  pbVar8 = (byte *)0x5c64;
  local_10 = (byte *)0x5c65;
  local_12 = (byte *)0x5c66;
  local_14 = (char *)0x5c62;
  pcVar7 = (char *)0x5c62;
  do {
    if (((*pbVar8 == param_3) && (*local_10 == param_2)) &&
       ((0x7f < *(byte *)0x5893 || ((*(byte *)0x5893 < 0x80 && (*local_12 == param_1)))))) {
      if (*local_14 == '\x01') break;
      if (*pcVar7 == '\x0e') {
        uVar5 = 0x8b64;
        goto LAB_141b_12c8;
      }
    }
    pbVar8 = pbVar8 + 8;
    local_10 = local_10 + 8;
    local_12 = local_12 + 8;
    local_14 = local_14 + 8;
    pcVar7 = pcVar7 + 8;
    local_6 = local_6 + 1;
  } while (pcVar7 < (char *)0x5d5a);
  if (local_6 == 0x20) {
    uVar5 = 0x8b6c;
  }
  else {
    uVar6 = func_0x0001cbb8();
    if (uVar6 == 0xffff) {
      return;
    }
    local_8 = *(byte *)(local_6 * 8 + 0x5c5f);
    func_0x0001bca4(local_6,0,0,0,0,0,0);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
      if (*(byte *)0x5888 < 3) {
        *(undefined *)0x5888 = 0;
      }
      else {
        pcVar2 = (char *)0x5888;
        *pcVar2 = *pcVar2 + -2;
      }
    }
    if (0x7f < local_8) {
      local_8 = local_8 & 0x7f;
      func_0x00019a80(0x8b7e);
      func_0x0001b200(uVar6);
      if ((0x7f < *(byte *)0x5893) && (*(char *)(uVar6 * 0x20 + 0x55b3) == 'D')) {
        local_6 = 0;
        uVar4 = 0xba14;
        do {
          local_4 = uVar4;
          if (((*(byte *)(local_4 + 2) & 0x80) != 0) && (*(byte *)(local_4 + 3) == uVar6)) {
            pbVar1 = (byte *)(local_4 + 2);
            *pbVar1 = *pbVar1 | 0x20;
            iVar9 = (uint)*(byte *)(local_4 + 4) * 8;
            *(undefined *)(iVar9 + 0x5c5b) = 0x1e;
            *(undefined *)(iVar9 + 0x5c5a) = 0x1e;
            break;
          }
          local_6 = local_6 + 1;
          uVar4 = local_4 + 8;
        } while (local_4 + 8 < 0xbb14);
        if (uVar6 == *(byte *)0x587b) {
          *(undefined *)0x587b = 0xff;
        }
        func_0x0001db40();
      }
    }
    bVar3 = local_8;
    FUN_141b_1040(&local_a,param_1,param_2,param_3,local_8);
    FUN_141b_10b8(&local_a,param_1,param_2,param_3,bVar3);
    if (local_a != 0) {
      return;
    }
    uVar5 = 0x8b88;
  }
LAB_141b_12c8:
  func_0x00019a80(uVar5);
  return;
}



void __cdecl16near FUN_141b_12d4(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)((uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7)
                   + 0x595a);
  if ((bVar1 & 0xf0) == 0x40) {
    iVar2 = func_0x0001cbb8();
    if (iVar2 == -1) {
      return;
    }
    if ((bVar1 & 7) != 0) {
      func_0x0001b200(iVar2);
    }
    *(char *)((uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7) +
             0x595a) = (bVar1 & 8) + 0x70;
    uVar3 = 0x8b96;
  }
  else if ((bVar1 & 0xf0) == 0x70) {
    uVar3 = 0x8ba6;
  }
  else {
    uVar3 = 0x8bb6;
  }
  func_0x00019a80(uVar3);
  return;
}



void __cdecl16near FUN_141b_1374(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined2 unaff_DS;
  undefined local_8;
  undefined local_6;
  
  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_141b_12d4();
    return;
  }
  func_0x0001bbfc(*(undefined *)0x5951,*(undefined *)0x5950,*(undefined *)0x594f);
  iVar2 = func_0x0001b81c();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (uint)*(byte *)0x5896 + *(int *)0x5876;
  iVar3 = (uint)*(byte *)0x5897 + *(int *)0x5878;
  pbVar4 = (byte *)func_0x0001c632(iVar3,iVar2);
  bVar1 = *pbVar4;
  if (bVar1 == 0xaf) {
    uVar5 = 0x8bbe;
    goto LAB_141b_13ed;
  }
  if (bVar1 < 0xb0) {
    if (bVar1 < 0x97) {
LAB_141b_1444:
      FUN_141b_112c(*(undefined *)0x5895,iVar3,iVar2);
      return;
    }
    if (0x98 < bVar1) {
      if (bVar1 == 0x99) {
        uVar5 = 0x8bca;
        goto LAB_141b_13ed;
      }
      goto LAB_141b_1444;
    }
  }
  else {
    if (bVar1 == 0xb8) {
LAB_141b_1400:
      *(byte *)0x594f = bVar1;
      *(undefined *)0x5952 = 4;
      local_6 = (undefined)iVar2;
      *(undefined *)0x5950 = local_6;
      local_8 = (undefined)iVar3;
      *(undefined *)0x5951 = local_8;
      puVar6 = (undefined *)func_0x0001c632(iVar3,iVar2);
      *puVar6 = 0x44;
      *(undefined *)0x24e6 = 1;
      uVar5 = 0x8be0;
      goto LAB_141b_13ed;
    }
    if (bVar1 != 0xb9) {
      if (bVar1 == 0xba) goto LAB_141b_1400;
      if (bVar1 != 0xbb) goto LAB_141b_1444;
    }
  }
  uVar5 = 0x8bd6;
LAB_141b_13ed:
  func_0x00019a80(uVar5);
  return;
}



void FUN_141b_1458(int param_1,uint param_2,int param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  if (param_3 < 0xd) {
    if (param_3 < 9) {
      if (param_3 - 1U < 8) {
                    // WARNING: Could not emulate address calculation at 0x0001562d
                    // WARNING: Treating indirect jump as call
        (**(code **)((param_3 - 1U) * 2 + -0x2962))();
        return;
      }
LAB_141b_1485:
      func_0x00019a80(0x8d92);
      return;
    }
    if ((param_2 == 0x1b) || (param_2 == 0x1d)) {
      func_0x0001c120(99,5,param_2 + 0x57c0);
    }
    else {
      pcVar1 = (char *)(param_2 + 0x57c0);
      *pcVar1 = *pcVar1 + '\x01';
      if (*(char *)(param_2 + 0x57c0) == 'd') {
        *(undefined *)(param_2 + 0x57c0) = 99;
      }
    }
    func_0x00019a80(*(undefined2 *)(param_2 * 2 + 0x17f6));
    uVar3 = 0x8d06;
    goto LAB_141b_15bf;
  }
  if (param_3 == 0x19) {
    func_0x00019a80(0x8c4e);
    *(undefined *)(param_2 + 0x5840) = 0xff;
    goto LAB_141b_177a;
  }
  if (param_3 < 0x1a) {
    if (param_3 == 0xd) {
      func_0x00019c6e(0x20,1,param_2);
      func_0x00019a80(0x8c8a);
      if (param_2 == 1) {
        uVar3 = 0x8c92;
      }
      else {
        uVar3 = 0x8c96;
      }
      func_0x00019a80(uVar3);
      func_0x0001c120(99,param_2,0x57ae);
    }
    else if (param_3 == 0xe) {
      func_0x00019a80(0x8c76);
      *(undefined *)0x57bf = 0xff;
      pbVar2 = (byte *)0x5b9d;
      *pbVar2 = *pbVar2 | 0x80;
    }
    else {
      if (param_3 != 0xf) goto LAB_141b_1485;
      func_0x00019c6e(0x20,1,param_2);
      func_0x00019a80(0x8c6e);
      func_0x0001c144(9999,param_2,0x57a8);
    }
    goto LAB_141b_177a;
  }
  if (param_3 == 0x1b) {
    func_0x00019a80(0x8c5c);
    pcVar1 = (char *)0x57b0;
    *pcVar1 = *pcVar1 + '\x01';
    if (*(char *)0x57b0 == 'd') {
      *(undefined *)0x57b0 = 99;
    }
    if (*(char *)0x5893 != '\x11') goto LAB_141b_177a;
    uVar3 = 0x16;
LAB_141b_14c2:
    func_0x0001fd42(uVar3);
  }
  else {
    if (param_3 == 0xb4) {
      param_2 = param_2 & 3;
      *(undefined *)(param_2 + 0x57b6) = 0xff;
      func_0x00019a80(0x8d0a);
      if (param_2 == 0) {
        uVar3 = 0x8d18;
      }
      else if (param_2 == 1) {
        uVar3 = 0x8d24;
      }
      else {
        uVar3 = 0x8d2e;
      }
    }
    else {
      if (param_3 == 0xb5) {
        *(undefined *)0x57b4 = 0xff;
        func_0x00019a80(0x8d3a);
        uVar3 = func_0x0001fd4e(param_1);
        func_0x0001fd36(uVar3);
        uVar3 = func_0x0001fd4e(param_1);
        goto LAB_141b_14c2;
      }
      if (param_3 == 0xb6) {
        *(undefined *)0x57b5 = 0xff;
        uVar3 = 0x8d56;
      }
      else {
        if (param_3 != 0xb7) goto LAB_141b_1485;
        *(undefined *)0x57b3 = 0xff;
        uVar3 = 0x8d74;
      }
    }
LAB_141b_15bf:
    func_0x00019a80(uVar3);
  }
LAB_141b_177a:
  if (param_1 < 0x20) {
    func_0x0001bca4(param_1,0,0,0,0,0,0);
  }
  pbVar2 = (byte *)0x24e6;
  *pbVar2 = *pbVar2 | 2;
  *(undefined *)0xa9fa = 1;
  return;
}



void __cdecl16near FUN_141b_179e(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined uVar6;
  
  func_0x00019a80(0x8da4);
  bVar2 = *(byte *)((uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7)
                   + 0x595a);
  if ((bVar2 & 0xf0) == 0x40) {
    uVar3 = 0x8daa;
  }
  else {
    if ((bVar2 & 0xf0) == 0x70) {
      pbVar1 = (byte *)((uint)*(byte *)0x5895 * 0x40 +
                        (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7) + 0x595a);
      *pbVar1 = *pbVar1 & 8;
      func_0x00019a80(0x8dbc);
      iVar5 = 0;
      do {
        uVar4 = func_0x0001a2c2((uint)*(byte *)0x5895 * 4 + 4,1);
        if (*(byte *)(iVar5 + 0x41bc) <= uVar4) {
          if (iVar5 == 5) {
            uVar3 = func_0x0001a2c2(7,0);
            uVar6 = 3;
          }
          else if (iVar5 == 6) {
            uVar3 = func_0x0001a2c2(7,0);
            uVar6 = 4;
          }
          else {
            if (iVar5 == 1) {
              uVar4 = (uint)*(byte *)0x5895 << 3;
            }
            else {
              uVar4 = (uint)*(byte *)(iVar5 + 0x41c4);
            }
            uVar3 = func_0x0001a2c2(uVar4,1);
            uVar6 = *(undefined *)(iVar5 + 0x41cc);
          }
          FUN_141b_1458(0x20,uVar3,uVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 7);
      return;
    }
    uVar3 = 0x8dda;
  }
  func_0x00019a80(uVar3);
  return;
}



void __cdecl16near FUN_141b_18ce(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  undefined2 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 unaff_DS;
  char *local_16;
  byte *local_14;
  uint local_8;
  int local_6;
  
  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_141b_179e();
    return;
  }
  iVar6 = func_0x0001b81c();
  if (iVar6 == 0) {
    return;
  }
  iVar6 = *(int *)0x5876;
  iVar3 = *(int *)0x5878;
  uVar7 = iVar6 + (uint)*(byte *)0x5896;
  uVar8 = iVar3 + (uint)*(byte *)0x5897;
  func_0x00019a80(0x8de6);
  local_6 = 1;
  pbVar12 = (byte *)0x5c64;
  local_14 = (byte *)0x5c65;
  local_16 = (char *)0x5c66;
  pbVar11 = (byte *)0x5c62;
  bVar4 = *(byte *)0x5893;
  do {
    if (((*pbVar12 == uVar7) && (*local_14 == uVar8)) &&
       ((0x7f < bVar4 || ((bVar4 < 0x80 && (*local_16 == *(char *)0x5895)))))) {
      bVar5 = *pbVar11;
      local_8 = (uint)bVar5;
      if ((bVar5 < 0x10) || (((local_8 == 0x19 || (local_8 == 0x1b)) || ((bVar5 & 0xfc) == 0xb4))))
      break;
    }
    pbVar12 = pbVar12 + 8;
    local_14 = local_14 + 8;
    local_16 = local_16 + 8;
    pbVar11 = pbVar11 + 8;
    local_6 = local_6 + 1;
  } while (pbVar11 < (byte *)0x5d5a);
  if (local_6 < 0x20) {
    FUN_141b_1458(local_6,*(undefined *)(local_6 * 8 + 0x5c5f),local_8);
    return;
  }
  pbVar11 = (byte *)func_0x0001c632(uVar8,uVar7);
  bVar4 = *pbVar11;
  if (bVar4 == 0x9a) {
    if (iVar3 != 1) {
      uVar10 = 0x8e10;
      goto LAB_141b_1a8b;
    }
    puVar9 = (undefined *)func_0x0001c632(uVar8,uVar7);
    *puVar9 = 0x95;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    uVar10 = 0x8e04;
  }
  else {
    if (0x9a < bVar4) {
      if (bVar4 == 0x9b) {
        if (iVar3 != -1) {
          uVar10 = 0x8e30;
          goto LAB_141b_1a8b;
        }
        puVar9 = (undefined *)func_0x0001c632(uVar8,uVar7);
        *puVar9 = 0x95;
        pbVar2 = (byte *)0x24e6;
        *pbVar2 = *pbVar2 | 2;
        uVar10 = 0x8e24;
      }
      else {
        if (bVar4 != 0x9c) {
          if ((0xaf < bVar4) && (bVar4 < 0xb2)) {
            puVar9 = (undefined *)func_0x0001c632(uVar8,uVar7);
            *puVar9 = 0x44;
            *(undefined *)0x24e6 = 1;
            if (*(byte *)0x5893 < 0x80) {
              func_0x0001e07a();
            }
            *(undefined *)0x58a7 = 100;
            func_0x00019a80(0x8de8);
            func_0x0001c5de(0x32,1,2000,800);
            func_0x0001db40();
            return;
          }
          goto LAB_141b_1b28;
        }
        if ((iVar6 == 1) || (iVar6 == -1)) {
          uVar10 = 0x8e44;
          goto LAB_141b_1a8b;
        }
        if (iVar3 == 1) {
          puVar9 = (undefined *)func_0x0001c632(uVar8,uVar7);
          *puVar9 = 0x9b;
        }
        if (iVar3 == -1) {
          puVar9 = (undefined *)func_0x0001c632(uVar8,uVar7);
          *puVar9 = 0x9a;
        }
        pbVar2 = (byte *)0x24e6;
        *pbVar2 = *pbVar2 | 2;
        uVar10 = 0x8e58;
      }
      func_0x00019a80(uVar10);
      func_0x0001c144(9999,1,0x57a8);
      goto LAB_141b_1a58;
    }
    if (bVar4 != 0x2d) {
LAB_141b_1b28:
      uVar10 = 0x8e64;
LAB_141b_1a8b:
      func_0x00019a80(uVar10);
      return;
    }
    puVar9 = (undefined *)func_0x0001c632(uVar8,uVar7);
    *puVar9 = 0x2c;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    uVar10 = 0x8df4;
  }
  func_0x00019a80(uVar10);
  func_0x0001c144(9999,1,0x57a8);
  *(undefined *)0xa9fa = 1;
LAB_141b_1a58:
  if (*(char *)0x5888 != '\0') {
    pcVar1 = (char *)0x5888;
    *pcVar1 = *pcVar1 + -1;
  }
  return;
}



int FUN_141b_1b34(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  for (uVar2 = 0; uVar2 < *(byte *)0x585b; uVar2 = uVar2 + 1) {
    iVar1 = func_0x0001f090(param_1,uVar2);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



void __cdecl16near FUN_141b_1b6c(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5878 = 0;
  *(undefined2 *)0x5876 = 0;
  iVar4 = 0;
  pbVar3 = (byte *)0xba16;
  do {
    if ((*pbVar3 != 0) && ((*pbVar3 & 0x20) == 0)) {
      iVar2 = func_0x0001d876(iVar4);
      if (iVar2 == 0) {
        piVar1 = (int *)0x5878;
        *piVar1 = *piVar1 + 1;
      }
      else {
        piVar1 = (int *)0x5876;
        *piVar1 = *piVar1 + 1;
      }
    }
    pbVar3 = pbVar3 + 8;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  return;
}



undefined2 FUN_141b_1bb2(uint param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((*(byte *)0x587c & 0xf8) == 0x20) {
    func_0x00019a80(0x8e76);
LAB_141b_1bc5:
    uVar1 = 0;
  }
  else {
    if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) != 0) {
      if (*(char *)0x58a0 == '\0') {
        *(undefined *)0x58a0 = (undefined)param_1;
      }
      else if ((param_1 != *(byte *)0x58a0) && ((*(byte *)0x58a1 & 0x80) != 0)) {
        func_0x00019a80(0x8e88);
        func_0x0001a4f0(200,0xa5);
        goto LAB_141b_1bc5;
      }
    }
    *(undefined *)0x589f = 1;
    FUN_141b_1b6c();
    if (*(int *)0x5876 == 0) {
      uVar1 = 0x8ea6;
    }
    else {
      uVar1 = 0x8eae;
    }
    func_0x00019a80(uVar1);
    func_0x0001c5de(0x28,1,2000,0x4b0);
    *(undefined *)0x587b = 0xff;
    func_0x0001ffb2(-1 - param_2);
    func_0x0001ab30();
    func_0x0001db40();
    uVar1 = 1;
  }
  return uVar1;
}



undefined2 FUN_141b_1c56(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  undefined local_6;
  undefined local_4;
  
  local_c = 0;
  local_a = 0;
  bVar1 = *(byte *)(param_2 * 8 + -0x45e8);
  if (param_1 == 1) {
    local_a = -1;
    uVar2 = 0x8ece;
  }
  else if (param_1 == 2) {
    local_a = 1;
    uVar2 = 0x8ec8;
  }
  else if (param_1 == 3) {
    local_c = -1;
    uVar2 = 0x8eb8;
  }
  else {
    if (param_1 != 4) goto LAB_141b_1c9c;
    local_c = 1;
    uVar2 = 0x8ec0;
  }
  func_0x00019a80(uVar2);
LAB_141b_1c9c:
  local_a = (uint)*(byte *)(param_2 * 8 + -0x45e6) + local_a;
  local_c = (uint)*(byte *)(param_2 * 8 + -0x45e5) + local_c;
  if ((((local_a < 0xb) && (local_c < 0xb)) && (-1 < local_a)) && (-1 < local_c)) {
    iVar4 = (uint)bVar1 * 8;
    iVar3 = func_0x0001ffa6(local_c,local_a,*(undefined *)(iVar4 + 0x5c5a));
    if (iVar3 == 0) {
      func_0x00019a80(0x8ed4);
      func_0x0001a4f0(200,0xa5);
      func_0x00019d46();
      uVar2 = 0;
    }
    else {
      local_4 = (undefined)local_a;
      *(undefined *)(param_2 * 8 + -0x45e6) = local_4;
      *(undefined *)(iVar4 + 0x5c5c) = local_4;
      local_6 = (undefined)local_c;
      *(undefined *)(param_2 * 8 + -0x45e5) = local_6;
      *(undefined *)(iVar4 + 0x5c5d) = local_6;
      func_0x0001c56e();
      if ((*(byte *)0x58a1 & 0x82) != 0) {
        func_0x000100ea(local_c,local_a);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = FUN_141b_1bb2(param_1,param_2);
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_141b_1d6a(void)

{
  undefined uVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined2 unaff_DS;
  undefined local_a;
  undefined local_8;
  
  func_0x00019a80(0x8ede);
  pcVar2 = (char *)func_0x0001c632(*(undefined *)0x5897,*(undefined *)0x5896);
  cVar8 = *pcVar2;
  if ((((*(byte *)0x58a1 & 2) != 0) && (cVar8 == -0x38)) && (*(char *)0xbb16 != '\0')) {
    func_0x00019a80(0x8ee6);
    do {
      iVar3 = func_0x0001a89c();
      if (iVar3 != 3) {
        if ((iVar3 == 4) || (iVar3 == 0x44)) {
          cVar8 = -0x37;
        }
        else if (iVar3 != 0x55) {
          iVar3 = 0;
        }
      }
    } while (iVar3 == 0);
  }
  if (cVar8 == -0x38) {
    func_0x00019a80(0x8eec);
    uVar1 = *(undefined *)0x589e;
    uVar4 = 5;
  }
  else {
    if (((cVar8 != -0x7a) || ((*(byte *)0x58a1 & 0x80) == 0)) && (cVar8 != -0x37)) {
      iVar3 = func_0x0001b81c();
      if (iVar3 != 0) {
        iVar3 = (uint)*(byte *)0x5896 + *(int *)0x5876;
        iVar5 = (uint)*(byte *)0x5897 + *(int *)0x5878;
        pcVar2 = (char *)func_0x0001c632(iVar5,iVar3);
        if ((*pcVar2 != 'L') || (iVar6 = func_0x0001b932(0,iVar5,iVar3), iVar6 != 0)) {
          func_0x00019a80(0x8efa);
          return 0;
        }
        iVar7 = (uint)*(byte *)0x589e * 8;
        iVar6 = (uint)*(byte *)(iVar7 + -0x45e8) * 8;
        local_8 = (undefined)iVar3;
        *(undefined *)(iVar7 + -0x45e6) = local_8;
        *(undefined *)(iVar6 + 0x5c5c) = local_8;
        local_a = (undefined)iVar5;
        *(undefined *)(iVar7 + -0x45e5) = local_a;
        *(undefined *)(iVar6 + 0x5c5d) = local_a;
        func_0x000100ea(iVar5,iVar3);
      }
      return 1;
    }
    func_0x00019a80(0x8ef2);
    uVar1 = *(undefined *)0x589e;
    uVar4 = 6;
  }
  uVar4 = FUN_141b_1bb2(uVar4,uVar1);
  return uVar4;
}



void __cdecl16near FUN_141b_1ea4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = (uint)*(byte *)0x589e * 8;
  if ((((*(char *)(iVar1 + -0x45ea) != '\0') && ((*(byte *)(iVar1 + -0x45ea) & 0x20) == 0)) &&
      (*(char *)(iVar1 + -0x45e5) == '\x02')) &&
     ((*(byte *)(*(byte *)(iVar1 + -0x45e6) + 0xac74) & 0xfc) == 0x3c)) {
    *(undefined *)0x58a0 = 0x4d;
    func_0x000198ea(10,iVar1 + -0x45ec);
    func_0x0001ffca(*(undefined *)0x589e);
    func_0x00019a80(0x8f02);
    func_0x0001c5de(0x28,1,2000,0x4b0);
    *(undefined *)0x587b = 0xff;
    func_0x0001ab30();
    func_0x0001ffb2(-1 - (uint)*(byte *)0x589e);
    func_0x0001db40();
  }
  return;
}



undefined2 FUN_141b_1f26(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  
  func_0x00019a80(param_2);
  if (param_1 == 1) {
    uVar1 = 0x8f12;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8f1a;
  }
  else {
    if (param_1 != 3) goto LAB_141b_1f4b;
    uVar1 = 0x8f24;
  }
  func_0x00019a80(uVar1);
LAB_141b_1f4b:
  func_0x000198ea(10);
  func_0x0001a4f0(0x96,0xdc);
  func_0x0001a4f0(0x96,0x96);
  return 1;
}



int FUN_141b_1f7a(uint param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  byte *local_c;
  byte *local_a;
  int local_8;
  
  local_8 = 0;
  func_0x00019a80(0x8f3a);
  iVar3 = 0;
  local_a = (byte *)0xba16;
  local_c = (byte *)0xba17;
  while (((bVar1 = *local_a, (bVar1 & 0x80) == 0 || (iVar2 = func_0x0001d876(iVar3), iVar2 != 0)) ||
         (*local_c != param_1))) {
    local_a = local_a + 8;
    local_c = local_c + 8;
    iVar3 = iVar3 + 1;
    if (0x1f < iVar3) {
LAB_141b_1fcd:
      if (local_8 == 0) {
        func_0x00019a80(0x8f4c);
      }
      else {
        *(undefined *)0x587b = (undefined)param_1;
        func_0x0001ffca(iVar3);
        func_0x000198ea(10);
        func_0x0001ab30();
      }
      return local_8;
    }
  }
  if ((bVar1 & 0x2c) == 0) {
    local_8 = 1;
  }
  else {
    local_8 = 0;
  }
  goto LAB_141b_1fcd;
}



void FUN_141b_203e(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  if (*(char *)0x58a0 == 'M') {
    func_0x0001fe7a();
  }
  puVar5 = (undefined2 *)0x5c5a;
  puVar4 = (undefined2 *)0xa9fc;
  do {
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    puVar5[3] = puVar4[3];
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar4 < (undefined2 *)0xaafc);
  if ((*(byte *)0x58a1 & 0x82) == 0) {
    if (param_1 < 0x20) {
      param_1 = param_1 * 8;
      pbVar3 = (byte *)(param_1 + 0x5c5a);
      if ((*(char *)0x58a3 == '\0') || ((*pbVar3 & 0xfc) != 0x2c)) {
        *(undefined *)(param_1 + 0x5c5e) = 0;
        *(undefined *)(param_1 + 0x5c5d) = 0;
        *(undefined *)(param_1 + 0x5c5c) = 0;
        *(undefined *)(param_1 + 0x5c5b) = 0;
        *pbVar3 = 0;
      }
      else {
        pbVar1 = pbVar3;
        *pbVar1 = *pbVar1 - 8;
        pcVar2 = (char *)(param_1 + 0x5c5b);
        *pcVar2 = *pcVar2 + -8;
        *(undefined *)(param_1 + 0x5c5f) = 99;
        *(undefined *)(param_1 + 0x5c61) = 2;
      }
    }
    func_0x000198ea(10);
    *(undefined *)0x5893 = *(undefined *)0x5894;
  }
  return;
}



int FUN_141b_20d8(int param_1,uint param_2,uint param_3)

{
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = 1;
  if ((((param_3 < 0x8000) && ((int)param_3 < 0xb)) && (param_2 < 0x8000)) && ((int)param_2 < 0xb))
  {
    local_6 = func_0x0001ffa6(param_2,param_3,
                              *(undefined *)((uint)*(byte *)(param_1 * 8 + -0x45e8) * 8 + 0x5c5a));
    local_6 = 1 - local_6;
  }
  else if ((*(byte *)(param_1 * 8 + -0x45ea) & 2) != 0) {
    local_6 = 0;
  }
  return local_6;
}



bool FUN_141b_2148(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_c;
  int local_6;
  
  local_6 = 0;
  uVar2 = (uint)*(byte *)(param_1 * 8 + -0x45e6);
  uVar3 = (uint)*(byte *)(param_1 * 8 + -0x45e5);
  local_c = 0;
  do {
    if (local_c == 0) {
      uVar3 = uVar3 + 1;
    }
    else if (local_c == 1) {
LAB_141b_21ae:
      uVar3 = uVar3 - 1;
      uVar2 = uVar2 + 1;
    }
    else if (local_c == 2) {
      uVar2 = uVar2 - 2;
    }
    else if (local_c == 3) goto LAB_141b_21ae;
    iVar1 = FUN_141b_20d8(param_1,uVar3,uVar2);
    if (iVar1 != 0) {
      local_6 = local_6 + 1;
    }
    local_c = local_c + 1;
    if (3 < local_c) {
      return local_6 == 4;
    }
  } while( true );
}



int __cdecl16near FUN_141b_21ce(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  pbVar2 = (byte *)0xba16;
  pbVar3 = (byte *)0xba17;
  while (((*pbVar2 & 1) == 0 || ((*pbVar2 & 0x80) == 0))) {
    pbVar2 = pbVar2 + 8;
    pbVar3 = pbVar3 + 8;
    local_4 = local_4 + 1;
    if (5 < local_4) {
LAB_141b_222d:
      if (local_4 == 6) {
        local_4 = -1;
      }
      return local_4;
    }
  }
  pbVar1 = pbVar2;
  *pbVar1 = *pbVar1 & 0xfe;
  func_0x00019a80((uint)*pbVar3 * 0x20 + 0x55a8);
  func_0x00019a80(0x8f56);
  func_0x0001a3c2(2,1000,30000,1,0xc1c);
  func_0x0001f090(0x23,*pbVar3);
  func_0x0001eade(local_4);
  goto LAB_141b_222d;
}


