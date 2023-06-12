typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



char * FUN_124c_0000(char *param_1,char *param_2)

{
  char cVar1;
  undefined2 unaff_DS;
  
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = cVar1;
    if (cVar1 == '\0') break;
    param_2 = param_2 + 1;
  }
  return param_2;
}



void FUN_124c_0026(byte *param_1)

{
  undefined2 *puVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  undefined2 uVar10;
  undefined local_c [6];
  byte *local_6;
  undefined2 *local_4;
  
  local_4 = (undefined2 *)0xb7fa;
  local_6 = param_1;
LAB_124c_0060:
  if (*local_6 != 0) {
    bVar4 = *local_6;
    if (((((bVar4 == 0x23) || (bVar4 == 0x24)) || (bVar4 == 0x40)) ||
        ((bVar4 == 0x25 || (bVar4 == 0x5e)))) ||
       ((bVar4 == 0x26 || ((bVar4 == 0x2a || (0x7f < bVar4)))))) {
      *local_6 = 0;
      local_4 = (undefined2 *)FUN_124c_0000(param_1,local_4);
      *local_6 = bVar4;
      param_1 = local_6 + 1;
    }
    local_6 = local_6 + 1;
    if (bVar4 < 0x80) {
      if (bVar4 == 0x25) {
        uVar10 = *(undefined2 *)0xb118;
LAB_1000_25c8:
        func_0x00018656(uVar10,local_c,10);
        puVar5 = local_c;
      }
      else if (bVar4 < 0x26) {
        if (bVar4 == 0x23) {
          puVar5 = (undefined *)*(int *)0xaafc;
        }
        else {
          if (bVar4 != 0x24) goto LAB_124c_0060;
          puVar5 = (undefined *)*(int *)0xaafe;
        }
      }
      else if (bVar4 == 0x26) {
        puVar5 = (undefined *)*(int *)0xab00;
      }
      else if (bVar4 == 0x2a) {
        puVar5 = (undefined *)*(int *)0xac62;
      }
      else {
        if (bVar4 != 0x40) {
          if (bVar4 == 0x5e) {
            uVar10 = *(undefined2 *)0xb11a;
            goto LAB_1000_25c8;
          }
          goto LAB_124c_0060;
        }
        if (*(byte *)0x587f < 0xc) {
          puVar5 = (undefined *)0x7826;
        }
        else if (*(byte *)0x587f < 0x12) {
          puVar5 = (undefined *)0x782e;
        }
        else {
          puVar5 = (undefined *)0x7838;
        }
      }
      local_4 = (undefined2 *)FUN_124c_0000(puVar5,local_4);
      goto LAB_124c_0060;
    }
    *(undefined *)local_4 = 0x20;
    local_4 = (undefined2 *)
              FUN_124c_0000(*(undefined2 *)((uint)bVar4 * 2 + 0x23ea),
                            (undefined *)((int)local_4 + 1));
    if ((*local_6 != 0) && (*local_6 < 0x80)) {
      *(undefined *)local_4 = 0x20;
      local_4 = (undefined2 *)((int)local_4 + 1);
    }
    goto LAB_124c_0060;
  }
  uVar6 = 0xffff;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pbVar2 = param_1;
    param_1 = param_1 + 1;
  } while (*pbVar2 != 0);
  uVar6 = ~uVar6;
  puVar8 = (undefined2 *)(param_1 + -uVar6);
  puVar9 = local_4;
  for (uVar7 = uVar6 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
    puVar3 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar3 = *puVar1;
  }
  for (uVar6 = (uint)((uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar3 = puVar9;
    puVar9 = (undefined2 *)((int)puVar9 + 1);
    puVar1 = puVar8;
    puVar8 = (undefined2 *)((int)puVar8 + 1);
    *(undefined *)puVar3 = *(undefined *)puVar1;
  }
  func_0x00019a80(0xb7fa);
  return;
}



void FUN_124c_017a(undefined2 param_1)

{
  func_0x0001a79e(param_1,0x5dc,0xb21e,0x7840);
  FUN_124c_0026(0xb21e);
  return;
}



void __cdecl16near FUN_124c_019a(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x5958 == '\0') {
    uVar1 = func_0x0001a2c2(0x40,1,0x57aa);
    func_0x0001c184(uVar1);
  }
  return;
}



void __cdecl16near FUN_124c_01b6(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x000198ea(0x22);
  iVar1 = func_0x0001a2c2(3,0);
  FUN_124c_017a(*(undefined2 *)(*(int *)0xb116 * 8 + iVar1 * 2 + 0x3b2a));
  iVar1 = func_0x0001a142();
  if (iVar1 < 0xc) {
    iVar1 = func_0x0001a142();
    if (iVar1 != 0) {
      func_0x000198ea(0x20);
      return;
    }
    uVar2 = 0x7850;
  }
  else {
    uVar2 = 0x784c;
  }
  func_0x00019a80(uVar2);
  return;
}



void FUN_124c_0202(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  if (param_1 == 0) {
    func_0x00019a80(0x7854);
    iVar1 = func_0x0001a2c2(3,0);
    uVar2 = *(undefined2 *)(*(int *)0xb116 * 8 + iVar1 * 2 + 0x3b6a);
  }
  else {
    if (param_1 != 1) goto LAB_124c_025a;
    func_0x00019a80(0x7858);
    iVar1 = func_0x0001a2c2(3,0);
    uVar2 = *(undefined2 *)(*(int *)0xb116 * 8 + iVar1 * 2 + 0x3baa);
  }
  FUN_124c_017a(uVar2);
LAB_124c_025a:
  if ((param_1 == 0) || (param_1 == 1)) {
    iVar1 = func_0x0001a142();
    if (iVar1 != 0) {
      func_0x000198ea(10);
    }
    FUN_124c_0026(0x785c);
  }
  return;
}



int __cdecl16near FUN_124c_0280(void)

{
  int iVar1;
  undefined2 uVar2;
  
  do {
    iVar1 = func_0x0001a89c();
    if (iVar1 == 0x4e) {
      uVar2 = 0x7866;
LAB_124c_02a0:
      func_0x00019a80(uVar2);
    }
    else if (iVar1 == 0x59) {
      uVar2 = 0x786a;
      goto LAB_124c_02a0;
    }
    if ((iVar1 == 0x4e) || (iVar1 == 0x59)) {
      return iVar1;
    }
  } while( true );
}



undefined2 FUN_124c_02ba(undefined2 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  undefined2 uVar8;
  
  *(undefined2 *)0xb118 = *(undefined2 *)(*(int *)0xb114 * 8 + param_2 * 2 + 0x3bea);
  iVar5 = *(int *)0xb118;
  uVar2 = (uint)*(byte *)(param_3 * 0x20 + 0x55b6) * 3;
  iVar4 = uVar2 - 100;
  uVar7 = func_0x00018672(-iVar4,-((uint)(iVar4 != 0) - (uint)(uVar2 < 100)),iVar5,iVar5 >> 0xf,100,
                          0);
  iVar5 = func_0x000185d0(uVar7);
  piVar1 = (int *)0xb118;
  *piVar1 = *piVar1 + iVar5;
  func_0x00019a80(0x786e);
  FUN_124c_017a(*(undefined2 *)(param_2 * 2 + 0x3c0a));
  func_0x00019a80(0x7872);
  do {
    cVar3 = func_0x0001a89c();
    if (cVar3 == 'N') {
      uVar6 = 0x7882;
LAB_124c_03d6:
      func_0x00019a80(uVar6);
    }
    else if (cVar3 == 'Y') {
      func_0x00019a80(0x789a);
      if (*(int *)0xb118 <= *(int *)0x57aa) {
        piVar1 = (int *)0x57aa;
        *piVar1 = *piVar1 - *(int *)0xb118;
        FUN_124c_019a();
        func_0x0001ab30();
        if (param_2 == 0) {
          uVar8 = 0x57ac;
          uVar6 = 3;
LAB_124c_039b:
          func_0x0001c120(99,uVar6,uVar8);
        }
        else {
          if (param_2 == 1) {
            uVar8 = 0x57ad;
            uVar6 = 4;
            goto LAB_124c_039b;
          }
          if (param_2 == 2) {
            uVar8 = 0x57ae;
            uVar6 = 5;
            goto LAB_124c_039b;
          }
        }
        param_1 = 1;
        FUN_124c_0026(0x78a0);
        if (*(char *)(param_3 * 0x20 + 0x55b1) == '\f') {
          uVar6 = 0x78c0;
        }
        else {
          uVar6 = 0x78c8;
        }
        func_0x00019a80(uVar6);
        uVar6 = 0x78d0;
        goto LAB_124c_03d6;
      }
      FUN_124c_017a(0x21e6);
      param_1 = 0xffff;
    }
    if ((cVar3 == 'N') || (cVar3 == 'Y')) {
      return param_1;
    }
  } while( true );
}



int FUN_124c_03f6(undefined2 param_1)

{
  bool bVar1;
  int local_8;
  byte local_4;
  
  bVar1 = false;
  local_8 = 0;
  do {
    if (bVar1) {
      return local_8;
    }
    func_0x00019a80(0x78d4);
    func_0x00019a80(0x78e4);
    func_0x00019a80(0x78f4);
    func_0x00019a80(0x7906);
    do {
      local_4 = func_0x0001a89c();
      if (local_4 == 0x20) {
LAB_124c_0465:
        bVar1 = true;
      }
      else {
        if (local_4 < 0x21) {
          if (local_4 == 0x1b) goto LAB_124c_0465;
        }
        else if (0x40 < local_4) {
          if (local_4 < 0x44) {
            func_0x000198ea(local_4 | 0x20);
            local_8 = FUN_124c_02ba(local_8,local_4 - 0x41,param_1);
            if (local_8 == -1) goto LAB_124c_0465;
          }
          else {
            if (local_4 != 0x44) goto LAB_1000_2951;
            FUN_124c_017a(0x2215);
          }
          goto LAB_1000_292a;
        }
LAB_1000_2951:
        local_4 = 0;
      }
LAB_1000_292a:
    } while ((local_4 == 0) && (!bVar1));
  } while( true );
}



void FUN_124c_04a2(undefined2 param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  FUN_124c_01b6();
  bVar1 = false;
  do {
    cVar2 = func_0x0001a89c();
    if ((cVar2 == ' ') || (cVar2 == 'N')) {
      func_0x00019a80(0x7928);
LAB_124c_04dc:
      bVar1 = true;
    }
    else if (cVar2 == 'Y') {
      func_0x00019a80(0x7916);
      uVar3 = FUN_124c_03f6(param_1);
      goto LAB_124c_04dc;
    }
    if (bVar1) {
      FUN_124c_0202(uVar3);
      return;
    }
  } while( true );
}



undefined2 FUN_124c_0502(undefined2 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  undefined4 uVar9;
  
  iVar7 = 0;
  iVar6 = 0;
  do {
    if (*(char *)(iVar6 + *(int *)0xb114 * 8 + 0x3a32) != '\0') {
      if (iVar7 == param_2) break;
      iVar7 = iVar7 + 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  if (iVar6 == 8) {
    param_1 = 0xfffe;
  }
  else if (*(char *)(iVar6 + 0x5850) == 'c') {
    func_0x00019a80(0x792c);
    func_0x0001a89c();
  }
  else {
    iVar8 = *(int *)0xb114 * 8 + iVar6;
    *(uint *)0xb118 = (uint)*(byte *)(iVar8 + 0x3a32);
    iVar7 = *(int *)0xb118;
    uVar2 = (uint)*(byte *)(param_3 * 0x20 + 0x55b6) * 3;
    iVar4 = uVar2 - 100;
    uVar9 = func_0x00018672(-iVar4,-((uint)(iVar4 != 0) - (uint)(uVar2 < 100)),iVar7,iVar7 >> 0xf,
                            100,0);
    iVar7 = func_0x000185d0(uVar9);
    piVar1 = (int *)0xb118;
    *piVar1 = *piVar1 + iVar7;
    *(uint *)0xb11a = (uint)*(byte *)(iVar8 + 0x3a5a);
    func_0x00019a80(0x7952);
    FUN_124c_0026(*(int *)(iVar6 * 2 + 0x3c10) + -0x6849);
    func_0x00019a80(0x7956);
    iVar7 = func_0x0001a142();
    if (0xc < iVar7) {
      func_0x00019a80(0x796c);
    }
    do {
      cVar3 = func_0x0001a89c();
      if (cVar3 == 'N') {
        uVar5 = 0x7970;
LAB_124c_0647:
        func_0x00019a80(uVar5);
      }
      else if (cVar3 == 'Y') {
        func_0x00019a80(0x7982);
        if (*(int *)0xb118 <= *(int *)0x57aa) {
          piVar1 = (int *)0x57aa;
          *piVar1 = *piVar1 - *(int *)0xb118;
          FUN_124c_019a();
          func_0x0001ab30();
          func_0x0001c120(99,*(undefined2 *)0xb11a,iVar6 + 0x5850);
          param_1 = 1;
          FUN_124c_0026(0x7988);
          uVar5 = 0x79a2;
          goto LAB_124c_0647;
        }
        FUN_124c_0026(0xb6e2);
        param_1 = 0xffff;
      }
    } while ((cVar3 != 'N') && (cVar3 != 'Y'));
  }
  return param_1;
}



int FUN_124c_0666(undefined2 param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_e;
  char local_c;
  int local_8;
  byte local_4;
  
  bVar1 = false;
  local_e = 0;
  func_0x0001a79e(0x1a67,0x5dc,0xb21e,0x7a0a);
  do {
    if (bVar1) {
      return local_e;
    }
    local_c = 'A';
    local_8 = 0;
    do {
      if (*(char *)(*(int *)0xb114 * 8 + local_8 + 0x3a32) != '\0') {
        func_0x000198ea(local_c);
        func_0x00019a80(0x7a16);
        func_0x00019a80(*(undefined2 *)(local_8 * 2 + 0x3c20));
        func_0x000198ea(10);
        local_c = local_c + '\x01';
      }
      local_8 = local_8 + 1;
    } while (local_8 < 8);
    func_0x00019a80(0x7a1a);
    do {
      local_4 = func_0x0001a89c();
      if (local_4 == 0x1b) {
LAB_124c_0717:
        bVar1 = true;
        iVar2 = local_e;
      }
      else {
        if (local_4 < 0x1c) {
          if (local_4 != 0xd) goto LAB_124c_0724;
          goto LAB_124c_0717;
        }
        if (local_4 == 0x20) goto LAB_124c_0717;
        if ((local_4 < 0x41) || (0x45 < local_4)) {
LAB_124c_0724:
          local_4 = 0;
          iVar2 = local_e;
        }
        else {
          iVar2 = FUN_124c_0502(local_e,local_4 - 0x41,param_1);
          if (iVar2 == -1) {
            local_e = -1;
            goto LAB_124c_0717;
          }
          if (iVar2 == -2) goto LAB_124c_0724;
        }
      }
      local_e = iVar2;
    } while ((local_4 == 0) && (!bVar1));
  } while( true );
}



void FUN_124c_075e(undefined2 param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  
  uVar3 = 0;
  FUN_124c_01b6();
  bVar1 = false;
  do {
    cVar2 = func_0x0001a89c();
    if ((cVar2 == ' ') || (cVar2 == 'N')) {
      func_0x00019a80(0x7a44);
LAB_124c_0798:
      bVar1 = true;
    }
    else if (cVar2 == 'Y') {
      func_0x00019a80(0x7a2c);
      uVar3 = FUN_124c_0666(param_1);
      goto LAB_124c_0798;
    }
    if (bVar1) {
      FUN_124c_0202(uVar3);
      return;
    }
  } while( true );
}



void FUN_124c_07be(int param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  undefined2 unaff_DS;
  undefined4 uVar13;
  undefined2 uVar14;
  int *local_16;
  undefined2 local_12;
  undefined local_e;
  int local_c;
  undefined local_a;
  
  iVar10 = 0;
  pcVar11 = (char *)0x5c5a;
  do {
    if (*pcVar11 == '\0') break;
    pcVar11 = pcVar11 + 8;
    iVar10 = iVar10 + 1;
  } while (pcVar11 < (char *)0x5d5a);
  local_c = 0;
  local_16 = (int *)0x3c38;
  piVar12 = (int *)0x3c40;
  do {
    iVar5 = *local_16 + (uint)*(byte *)0x5896;
    iVar6 = *piVar12 + (uint)*(byte *)0x5897;
    pcVar11 = (char *)func_0x0001c632(iVar6,iVar5);
    cVar4 = *pcVar11;
    iVar7 = func_0x0001b8be(*(undefined *)0x5895,iVar6,iVar5);
    if ((iVar7 == 0) && (((cVar4 == 'D' || (cVar4 == 'E')) || (cVar4 == '\x05')))) break;
    local_16 = local_16 + 1;
    piVar12 = piVar12 + 1;
    local_c = local_c + 1;
  } while (piVar12 < (int *)0x3c48);
  if ((local_c == 4) || (iVar10 == 0x20)) {
    func_0x00019a80(0x7a48);
  }
  else {
    bVar3 = false;
    local_12 = 0;
    *(undefined2 *)0xb118 = *(undefined2 *)(*(int *)0xb114 * 2 + 0x3c30);
    iVar7 = *(int *)0xb118;
    uVar2 = (uint)*(byte *)(param_1 * 0x20 + 0x55b6) * 3;
    iVar8 = uVar2 - 100;
    uVar13 = func_0x00018672(-iVar8,-((uint)(iVar8 != 0) - (uint)(uVar2 < 100)),iVar7,iVar7 >> 0xf,
                             100,0);
    uVar14 = (undefined2)((ulong)uVar13 >> 0x10);
    iVar7 = func_0x000185d0(uVar13);
    piVar1 = (int *)0xb118;
    *piVar1 = *piVar1 + iVar7;
    FUN_124c_01b6();
    iVar10 = iVar10 * 8;
    do {
      cVar4 = func_0x0001a89c(uVar14);
      if ((cVar4 == ' ') || (cVar4 == 'N')) {
        uVar9 = 0x7ab2;
LAB_124c_091d:
        func_0x00019a80(uVar9);
LAB_124c_0986:
        bVar3 = true;
      }
      else if (cVar4 == 'Y') {
        func_0x00019a80(0x7a62);
        FUN_124c_017a(0x1643);
        func_0x00019a80(0x7a6a);
        do {
          cVar4 = func_0x0001a89c();
          if (cVar4 == 'Y') break;
        } while (cVar4 != 'N');
        if (cVar4 == 'N') {
          uVar9 = 0x7a74;
          goto LAB_124c_091d;
        }
        func_0x00019a80(0x7a78);
        if (*(int *)0x57aa < *(int *)0xb118) {
          func_0x00019a80(0x7a7e);
          FUN_124c_0026(0x7a9e);
          local_12 = 0xffff;
        }
        else {
          piVar1 = (int *)0x57aa;
          *piVar1 = *piVar1 - *(int *)0xb118;
          FUN_124c_019a();
          *(undefined *)(iVar10 + 0x5c5f) = 0;
          *(undefined *)(iVar10 + 0x5c61) = 0;
          *(undefined *)(iVar10 + 0x5c60) = 0;
          *(undefined *)(iVar10 + 0x5c5b) = 0x10;
          *(undefined *)(iVar10 + 0x5c5a) = 0x10;
          local_a = (undefined)iVar5;
          *(undefined *)(iVar10 + 0x5c5c) = local_a;
          local_e = (undefined)iVar6;
          *(undefined *)(iVar10 + 0x5c5d) = local_e;
          *(undefined *)(iVar10 + 0x5c5e) = *(undefined *)0x5895;
          func_0x0001db40();
          uVar14 = 0x2e41;
          func_0x0001ab30();
          local_12 = 1;
        }
        goto LAB_124c_0986;
      }
    } while (!bVar3);
    FUN_124c_0202(local_12);
  }
  return;
}



int FUN_124c_09ac(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  *(undefined2 *)0xb118 = *(undefined2 *)(param_2 * 2 + 0x3a82);
  iVar5 = *(int *)0xb118;
  uVar2 = (uint)*(byte *)(param_3 * 0x20 + 0x55b6) * 3;
  iVar4 = uVar2 - 100;
  uVar7 = func_0x00018672(-iVar4,-((uint)(iVar4 != 0) - (uint)(uVar2 < 100)),iVar5,iVar5 >> 0xf,100,
                          0);
  iVar5 = func_0x000185d0(uVar7);
  piVar1 = (int *)0xb118;
  *piVar1 = *piVar1 + iVar5;
  func_0x00019a80(0x7b5e);
  FUN_124c_017a(*(undefined2 *)(param_2 * 2 + 0x3c48));
  func_0x00019a80(0x7b62);
  iVar5 = func_0x0001a2c2(3,0);
  func_0x00019a80(*(undefined2 *)(iVar5 * 2 + 0x3ca6));
  func_0x00019a80(0x7b66);
  do {
    cVar3 = func_0x0001a89c();
    if (cVar3 == 'N') {
      func_0x00019a80(0x7b6a);
    }
    else if (cVar3 == 'Y') {
      func_0x00019a80(0x7b70);
      if (*(char *)(param_2 + 0x57c0) == 'c') {
        func_0x00019a80(0x7b76);
        FUN_124c_0026(0x7b9a);
        func_0x0001a89c();
      }
      else if (*(int *)0x57aa < *(int *)0xb118) {
        func_0x00019a80(0x7ba4);
        iVar5 = func_0x0001a2c2(3,0);
        func_0x00019a80(*(undefined2 *)(iVar5 * 2 + 0x3cae));
        FUN_124c_0026(0x7ba8);
        param_1 = -1;
      }
      else {
        piVar1 = (int *)0x57aa;
        *piVar1 = *piVar1 - *(int *)0xb118;
        FUN_124c_019a();
        func_0x0001ab30();
        if ((param_2 == 0x1b) || (param_2 == 0x1d)) {
          *(undefined *)(param_2 + 0x57c0) = 99;
        }
        else {
          func_0x0001c120(99,1,param_2 + 0x57c0);
        }
        FUN_124c_0026(0x7bb4);
        param_1 = 1;
      }
    }
  } while ((cVar3 != 'N') && (cVar3 != 'Y'));
  if (param_1 != -1) {
    func_0x00019a80(0x7bbc);
    if (param_1 == 0) {
      uVar6 = 0x7bdc;
    }
    else if (*(char *)(param_3 * 0x20 + 0x55b1) == '\f') {
      uVar6 = 0x7bce;
    }
    else {
      uVar6 = 0x7bd6;
    }
    func_0x00019a80(uVar6);
  }
  return param_1;
}



int FUN_124c_0b30(undefined2 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  int local_a;
  byte local_4;
  
  bVar1 = false;
  local_a = 0;
  do {
    func_0x00019a80(0x7c44);
    iVar4 = 0;
    do {
      uVar2 = (uint)*(byte *)(*(int *)0xb114 * 8 + iVar4 + 0x3ae2);
      if (uVar2 == 0xff) break;
      func_0x000198ea(iVar4 + 0x61);
      func_0x00019a80(0x7c48);
      iVar3 = func_0x0001a39c(*(undefined2 *)(uVar2 * 2 + 0x17f6));
      if (iVar3 < 0xd) {
        uVar5 = *(undefined2 *)(uVar2 * 2 + 0x17f6);
      }
      else {
        uVar5 = *(undefined2 *)(uVar2 * 2 + 0x1962);
      }
      func_0x00019a80(uVar5);
      iVar3 = func_0x0001a142();
      if (iVar3 != 0) {
        func_0x000198ea(10);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    func_0x000198ea(10);
    iVar3 = func_0x0001a2c2(3,0);
    func_0x00019a80(*(undefined2 *)(iVar3 * 2 + 0x3cb6));
    func_0x00019a80(0x7c4c);
    do {
      local_4 = func_0x0001a89c();
      iVar3 = local_4 - 0x41;
      if ((iVar3 < iVar4) && (-1 < iVar3)) {
        func_0x000198ea(local_4 + 0x20);
        local_a = FUN_124c_09ac(local_a,*(undefined *)(*(int *)0xb114 * 8 + iVar3 + 0x3ae2),param_1)
        ;
        if (local_a == -1) {
LAB_1000_30e8:
          bVar1 = true;
        }
      }
      else {
        if ((local_4 == 0x1b) || (local_4 == 0x20)) goto LAB_1000_30e8;
        local_4 = 0;
      }
    } while ((local_4 == 0) && (!bVar1));
    if (bVar1) {
      return local_a;
    }
  } while( true );
}



undefined2 __cdecl16near FUN_124c_0c58(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  do {
    if (*(char *)(iVar1 + 0x57c0) != '\0') {
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  return 0;
}



undefined2 FUN_124c_0c80(int *param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_a;
  int local_8;
  undefined2 local_4;
  
  iVar3 = *param_1;
  if (*(char *)(iVar3 + 0x57c0) == '\0') {
    if (*param_2 == iVar3) {
      iVar3 = func_0x000101b6(0xff,0x57c0,0x30,iVar3);
      *param_1 = iVar3;
      if (iVar3 == -1) {
        iVar3 = func_0x000101c2(0xff,0x57c0,0x30,0xffff);
        *param_1 = iVar3;
      }
      iVar3 = *param_1;
LAB_124c_0d3a:
      *param_2 = iVar3;
    }
    else {
      iVar3 = func_0x000101c2(0xff,0x57c0,0x30,*param_1);
      *param_1 = iVar3;
      if (iVar3 == -1) {
        iVar3 = func_0x000101b6(0xff,0x57c0,0x30,0x30);
        *param_1 = iVar3;
        iVar3 = *param_2;
        iVar2 = func_0x000101b6(0xff,0x57c0,0x30,iVar3);
        if (-1 < iVar2) {
          iVar3 = func_0x000101b6(0xff,0x57c0,0x30,iVar3);
          goto LAB_124c_0d3a;
        }
      }
    }
  }
  func_0x00019dc4(1);
  func_0x00019e22(1,1);
  local_8 = *param_2;
  if (local_8 != -1) {
    iVar3 = *param_1;
    do {
      if (iVar3 == local_8) {
        func_0x000198ea(0xfd);
        local_4 = func_0x00019f1e();
      }
      func_0x000101ce(0x2d,0x1962,0x57c0,local_8);
      if (iVar3 == local_8) {
        func_0x000198ea(0xfd);
      }
      uVar1 = func_0x00019f1e(1);
      func_0x00019e22(uVar1);
      iVar2 = func_0x00019f1e();
    } while ((iVar2 != 5) && (local_8 = func_0x000101c2(0xff,0x57c0,0x30,local_8), local_8 != -1));
  }
  for (iVar3 = func_0x00019f1e(); iVar3 != 5; iVar3 = iVar3 + 1) {
    func_0x00019e22(iVar3,1);
    func_0x00019a80(0x7c50);
  }
  local_a = 0;
  iVar3 = func_0x000101b6(0xff,0x57c0,0x30,*param_2);
  if (iVar3 != -1) {
    local_a = 2;
  }
  if ((local_8 != -1) && (iVar3 = func_0x000101c2(0xff,0x57c0,0x30,local_8), iVar3 != -1)) {
    local_a = local_a + 1;
  }
  if (local_a == 0) {
    func_0x0001d16c();
  }
  else {
    func_0x00019e22(6,6);
    func_0x0001ce5a();
    if (local_a == 1) {
      uVar1 = 0x19;
    }
    else if (local_a == 2) {
      uVar1 = 0x18;
    }
    else {
      if (local_a != 3) goto LAB_124c_0e49;
      uVar1 = 0x12;
    }
    func_0x000198ea(uVar1);
    func_0x0001cefe();
  }
LAB_124c_0e49:
  func_0x00019dc4(2);
  return local_4;
}



undefined2 FUN_124c_0e76(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  if ((param_1 == 0x1b) || (param_1 == 0x1d)) {
    FUN_124c_0026(0x7d32);
    uVar3 = 1;
  }
  else {
    func_0x00019a80(0x7d64);
    iVar5 = param_1 * 2;
    if (*(int *)(iVar5 + 0x3a82) == 0) {
      FUN_124c_0026(0x7d8c);
    }
    else {
      uVar1 = (uint)*(byte *)(param_2 * 0x20 + 0x55b6) * *(int *)(iVar5 + 0x3a82);
      iVar4 = func_0x000185d0(uVar1 * 3,((int)uVar1 < 0) + CARRY2(uVar1 * 2,uVar1),100,0);
      *(int *)0xb118 = iVar4 + 1;
      iVar4 = *(int *)(iVar5 + 0x3cce);
      *(int *)0xab00 = iVar4;
      if (iVar4 == 0) {
        *(undefined2 *)0xab00 = *(undefined2 *)(iVar5 + 0x17f6);
      }
      iVar5 = func_0x0001a2c2(7,0);
      FUN_124c_0026(*(int *)(iVar5 * 2 + 0x3cbe) + -0x59a2);
      func_0x00019a80(0x7d68);
      do {
        cVar2 = func_0x0001a89c();
        if (cVar2 == 'N') break;
      } while (cVar2 != 'Y');
      if (cVar2 == 'N') {
        func_0x00019a80(0x7d72);
      }
      else {
        FUN_124c_0026(0x7d76);
        func_0x0001c144(9999,*(undefined2 *)0xb118,0x57aa);
        func_0x0001c166(1,param_1 + 0x57c0);
      }
      func_0x0001aab4();
    }
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_124c_0f64(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  bool bVar5;
  int local_16;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  byte local_8;
  int local_6;
  int local_4;
  
  iVar1 = FUN_124c_0c58();
  if (iVar1 == 0) {
    uVar3 = 0x7f20;
  }
  else {
    iVar1 = func_0x0001a2c2(3,0);
    func_0x00019a80(*(undefined2 *)(iVar1 * 2 + 0x3d2e));
    func_0x00019a80(0x7ef0);
    func_0x0001d080(0x7ef4);
    func_0x00019dc4(1);
    func_0x00019e52(6,0x26,1,0x18,1);
    func_0x000198ea(0xff);
    func_0x00019e52(9,0x27,1,0x18,1);
    func_0x000198ea(0x10);
    local_e = 0xd;
    iVar1 = 0xd;
    do {
      func_0x000198ea(0x11);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    func_0x000198ea(0x13);
    iVar1 = 1;
    do {
      func_0x00019e22(iVar1,0);
      func_0x000198ea(0x17);
      func_0x00019e22(iVar1,0xe);
      func_0x000198ea(0x17);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    local_e = iVar1;
    func_0x000198ea(10);
    func_0x000198ea(0x14);
    local_e = 0xd;
    iVar1 = 0xd;
    do {
      func_0x000198ea(0x15);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    func_0x000198ea(0x16);
    local_10 = func_0x000101c2(0xff,0x57c0,0x30,0xffff);
    local_6 = local_10;
    local_c = FUN_124c_0c80(&local_10,&local_6);
    local_12 = 0;
    local_a = 0;
    func_0x0001a79e(0xbc0,0x5dc,0xb21e,0x7efa);
    while (local_a == 0) {
      local_8 = func_0x0001a89c();
      if (local_8 == 0xd) {
LAB_124c_11ea:
        local_12 = FUN_124c_0e76(local_10,param_1);
        if ((local_12 == 0) && (iVar1 = FUN_124c_0c58(), iVar1 != 0)) {
          local_c = FUN_124c_0c80(&local_10,&local_6);
          func_0x00019a80(0x7f06);
          iVar1 = func_0x0001a2c2(3,0);
          func_0x00019a80(*(undefined2 *)(iVar1 * 2 + 0x3d3e));
          func_0x00019a80(0x7f0a);
        }
        else {
LAB_124c_1236:
          local_a = 1;
        }
      }
      else {
        iVar1 = local_10;
        if (0xd < local_8) {
          if (local_8 != 0x1b) {
            if (local_8 == 0x20) goto LAB_124c_11ea;
            if (local_8 == 0xd3) {
              iVar1 = func_0x000101c2(0xff,0x57c0,0x30,0xffff);
              iVar4 = local_e;
              local_6 = iVar1;
            }
            else {
              if (local_8 != 0xd4) {
                if (local_8 != 0xd5) {
                  bVar5 = local_8 == 0xd6;
                  goto LAB_124c_10b7;
                }
                goto LAB_124c_10bc;
              }
              local_10 = func_0x000101b6(0xff,0x57c0,0x30,0x30);
              iVar4 = 1;
              local_6 = local_10;
              do {
                iVar2 = func_0x000101b6(0xff,0x57c0,0x30,local_6);
                iVar1 = local_10;
                if (iVar2 == -1) break;
                iVar4 = iVar4 + 1;
                local_6 = iVar2;
              } while (iVar4 < 4);
            }
            goto LAB_124c_1112;
          }
          goto LAB_124c_1236;
        }
        if (local_8 == 1) {
LAB_124c_10bc:
          if (local_8 == 0xd5) {
            local_4 = 4;
          }
          else {
            local_4 = 1;
          }
          local_e = 0;
          iVar4 = local_e;
          if (local_4 != 0) {
            local_16 = local_4;
            local_e = local_4;
            do {
              iVar2 = func_0x000101b6(0xff,0x57c0,0x30,iVar1);
              iVar4 = local_6;
              if ((iVar1 != local_6) || (iVar4 = iVar2, -1 < iVar2)) {
                local_6 = iVar4;
                iVar1 = iVar2;
              }
              local_16 = local_16 + -1;
              iVar4 = local_e;
            } while (local_16 != 0);
          }
          goto LAB_124c_1112;
        }
        if (local_8 == 2) goto LAB_124c_1124;
        if (local_8 == 3) goto LAB_124c_10bc;
        bVar5 = local_8 == 4;
LAB_124c_10b7:
        if (bVar5) {
LAB_124c_1124:
          if (local_8 == 0xd6) {
            local_4 = 4;
          }
          else {
            local_4 = 1;
          }
          local_e = 0;
          iVar4 = local_e;
          if (local_4 != 0) {
            local_e = local_4;
            iVar2 = local_4;
            do {
              iVar1 = func_0x000101c2(0xff,0x57c0,0x30,local_10);
              if ((-1 < iVar1) && (local_c = local_c + 1, local_10 = iVar1, 4 < local_c)) {
                local_6 = func_0x000101c2(0xff,0x57c0,0x30,local_6);
              }
              iVar2 = iVar2 + -1;
              iVar1 = local_10;
              iVar4 = local_e;
            } while (iVar2 != 0);
          }
LAB_124c_1112:
          local_e = iVar4;
          local_10 = iVar1;
          local_c = FUN_124c_0c80(&local_10,&local_6);
        }
      }
    }
    func_0x0001ab30();
    func_0x0001d050();
    if (local_12 != 0) {
      return;
    }
    func_0x00019a80(0x7f0e);
    iVar1 = func_0x0001a2c2(3,0);
    func_0x00019a80(*(undefined2 *)(iVar1 * 2 + 0x3d36));
    func_0x00019a80(0x7f12);
    iVar1 = FUN_124c_0c58();
    if (iVar1 == 0) {
      return;
    }
    uVar3 = 0x7f16;
  }
  FUN_124c_0026(uVar3);
  return;
}



void FUN_124c_12b2(undefined2 param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  FUN_124c_0026(0x8018);
  func_0x0001a89c();
  FUN_124c_0026(0x8036);
  iVar2 = func_0x0001a2c2(1,0);
  func_0x00019a80(*(undefined2 *)(iVar2 * 2 + 0x3d46));
  func_0x00019a80(0x8042);
  do {
    cVar1 = func_0x0001a89c();
    if (cVar1 == ' ') {
      func_0x00019a80(0x8056);
    }
    else if (cVar1 == 'B') {
      func_0x00019a80(0x8046);
      iVar2 = func_0x0001a2c2(3,0);
      func_0x00019a80(*(undefined2 *)(iVar2 * 2 + 0x3d4a));
      iVar2 = func_0x0001a2c2(3,0);
      func_0x00019a80(*(undefined2 *)(iVar2 * 2 + 0x3d52));
      uVar3 = FUN_124c_0b30(param_1);
    }
    else if (cVar1 == 'S') {
      func_0x00019a80(0x804e);
      FUN_124c_0f64(param_1);
      uVar3 = 0xffff;
    }
  } while (((cVar1 != 'B') && (cVar1 != 'S')) && (cVar1 != ' '));
  FUN_124c_0202(uVar3);
  return;
}



int __cdecl16near FUN_124c_137c(void)

{
  undefined2 unaff_DS;
  int local_4;
  
  if (*(char *)0x585b == '\x01') {
    local_4 = 0;
  }
  else {
    func_0x00019a80(0x805a);
    local_4 = func_0x0001b0be();
    if (local_4 == -1) {
      local_4 = -0x7f8e;
      func_0x00019a80();
    }
  }
  return local_4;
}



void __cdecl16near FUN_124c_13b0(void)

{
  undefined2 unaff_DS;
  
  func_0x00018ca0(*(undefined2 *)0x13ae);
  func_0x00018db6(0xb7,0xb7,8,8);
  func_0x0001a3c2(1,5000,0x57e4,1,0x100e);
  func_0x0001a3c2(0xffff,0x6b6c,0x57e4,1,0x100e);
  func_0x00018ca0(*(undefined2 *)0x13b0);
  func_0x00018db6(0xb7,0xb7,8,8);
  func_0x0001a3c2(1,1,40000,1,0x11b2);
  func_0x0001a3c2(0xffff,40000,40000,1,0x11b2);
  func_0x00018db6(0xb7,0xb7,8,8);
  func_0x0001a3c2(2,1,18000,1,0x8fc);
  func_0x0001a3c2(0xfffe,36000,18000,1,0x8fc);
  return;
}



bool __cdecl16near FUN_124c_146a(void)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  FUN_124c_0026(0x807a);
  do {
    iVar2 = func_0x0001a89c();
    if (iVar2 == 0x59) {
      uVar3 = 0x8098;
LAB_1000_3952:
      func_0x00019a80(uVar3);
    }
    else if (iVar2 == 0x4e) {
      uVar3 = 0x809c;
      goto LAB_1000_3952;
    }
    if ((iVar2 == 0x59) || (iVar2 == 0x4e)) {
      bVar4 = iVar2 == 0x4e;
      if (((!bVar4) && (iVar2 = *(int *)0xb118, *(int *)0x57aa < iVar2)) &&
         ((100 < iVar2 || (*(char *)0x5893 != '\a')))) {
        FUN_124c_017a(0x23ab);
        bVar4 = true;
      }
      if ((bVar4 == false) && (iVar2 = *(int *)0xb118, iVar2 <= *(int *)0x57aa)) {
        piVar1 = (int *)0x57aa;
        *piVar1 = *piVar1 - iVar2;
        FUN_124c_019a();
      }
      return bVar4;
    }
  } while( true );
}



void FUN_124c_14f8(void)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  FUN_124c_01b6();
  bVar1 = false;
  while (!bVar1) {
    do {
      cVar2 = func_0x0001a89c();
      if (cVar2 == 'N') {
        uVar3 = 0x80a0;
LAB_124c_1529:
        func_0x00019a80(uVar3);
      }
      else if (cVar2 == 'Y') {
        uVar3 = 0x80a4;
        goto LAB_124c_1529;
      }
    } while ((cVar2 != 'N') && (cVar2 != 'Y'));
    if (cVar2 == 'N') break;
    func_0x00019a80(0x80aa);
    FUN_124c_0026(0x80da);
    while (((cVar2 = func_0x0001a89c(), cVar2 != 'C' && (cVar2 != 'H')) && (cVar2 != 'R'))) {
      if ((cVar2 == ' ') || (cVar2 == '\r')) break;
    }
    if ((cVar2 == '\r') || (cVar2 == ' ')) {
      func_0x00019a80(0x81c0);
      bVar1 = true;
    }
    else if (cVar2 == 'C') {
      func_0x00019a80(0x8106);
      iVar4 = FUN_124c_137c();
      if (iVar4 != -1) {
        if (*(char *)(iVar4 * 0x20 + 0x55b3) == 'P') {
          func_0x00019a80(0x810e);
          if (*(char *)0x5893 == '\x05') {
            func_0x00019a80(0x8112);
          }
          else {
            func_0x00019a80(0x812a);
            *(uint *)0xb118 = (uint)*(byte *)(*(int *)0xb114 + 0x3d8e);
            iVar5 = FUN_124c_146a();
            if (iVar5 != 0) goto LAB_124c_15a8;
          }
          FUN_124c_13b0();
          *(undefined *)(iVar4 * 0x20 + 0x55b3) = 0x47;
        }
        else {
LAB_1000_3a94:
          FUN_124c_0026(0x3d5a);
        }
      }
    }
    else if (cVar2 == 'H') {
      func_0x00019a80(0x8148);
      iVar4 = FUN_124c_137c();
      if (iVar4 != -1) {
        iVar5 = iVar4 * 0x20;
        if ((*(char *)(iVar5 + 0x55b3) == 'D') ||
           (*(int *)(iVar5 + 0x55b8) == *(int *)(iVar5 + 0x55ba))) goto LAB_1000_3a94;
        func_0x00019a80(0x8150);
        if (*(char *)0x5893 == '\x05') {
          func_0x00019a80(0x8154);
        }
        else {
          func_0x00019a80(0x816c);
          *(uint *)0xb118 = (uint)*(byte *)(*(int *)0xb114 + 0x3d86);
          iVar5 = FUN_124c_146a();
          if (iVar5 != 0) goto LAB_124c_15a8;
        }
        FUN_124c_13b0();
        *(undefined2 *)(iVar4 * 0x20 + 0x55b8) = *(undefined2 *)(iVar4 * 0x20 + 0x55ba);
      }
    }
    else if (cVar2 == 'R') {
      func_0x00019a80(0x817e);
      iVar4 = FUN_124c_137c();
      if (iVar4 != -1) {
        if (*(char *)(iVar4 * 0x20 + 0x55b3) != 'D') goto LAB_1000_3a94;
        func_0x00019a80(0x8188);
        func_0x00019a80(0x818c);
        func_0x00019a80(0x81b6);
        *(undefined2 *)0xb118 = *(undefined2 *)(*(int *)0xb114 * 2 + 0x3d96);
        iVar5 = FUN_124c_146a();
        if (iVar5 == 0) {
          FUN_124c_13b0();
          func_0x00010126(0xff,iVar4);
          *(undefined2 *)(iVar4 * 0x20 + 0x55b8) = *(undefined2 *)(iVar4 * 0x20 + 0x55ba);
          func_0x0001ab30();
        }
      }
    }
LAB_124c_15a8:
    if (!bVar1) {
      func_0x0001ab30();
      func_0x00019a80(0x81c8);
      func_0x00019a80(0x81f2);
    }
  }
  FUN_124c_0202(1);
  return;
}


