typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void FUN_0000_0082(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  func_0x00006bca();
  param_1 = param_1 * 0x20;
  func_0x00006c70(param_1 + 0x55a8);
  func_0x00003a42(9,0x26,1,0x18,1);
  func_0x000034da(0xff);
  func_0x00003a42(9,0x27,1,0x18,1);
  iVar2 = func_0x00006b96(*(undefined *)(param_1 + 0x55b2),0x96c6);
  iVar3 = func_0x00006b96(*(undefined *)(param_1 + 0x55b3),0x96d0);
  if (0 < *(int *)(iVar2 * 2 + 0x1a58)) {
    iVar4 = 0;
    do {
      func_0x000034da(0x20);
      iVar4 = iVar4 + 1;
      piVar1 = (int *)(iVar2 * 2 + 0x1a58);
    } while (*piVar1 != iVar4 && iVar4 <= *piVar1);
  }
  func_0x000034da(*(undefined *)(param_1 + 0x55b1));
  func_0x00003670(0x96d6);
  func_0x0000385e(0x20,1,*(undefined *)(param_1 + 0x55be));
  func_0x000034da(0x20);
  func_0x00003670(*(undefined2 *)(iVar2 * 2 + 0x1a44));
  func_0x00003a42(9,0x26,1,0x18,1);
  func_0x00003a12(1,0);
  func_0x000034da(0xfc);
  func_0x00003670(*(undefined2 *)(iVar3 * 2 + 0x1a6a));
  func_0x00003a42(9,0x27,1,0x18,1);
  func_0x00003a12(3,0);
  func_0x000034da(0xfb);
  func_0x00003670(0x96dc);
  func_0x0000385e(0x30,2,*(undefined *)(param_1 + 0x55b4));
  func_0x00003670(0x96e2);
  func_0x0000385e(0x20,4,*(undefined2 *)(param_1 + 0x55b8));
  func_0x00003670(0x96e8);
  func_0x0000385e(0x30,2,*(undefined *)(param_1 + 0x55b6));
  func_0x00003670(0x96ee);
  func_0x0000385e(0x20,4,*(undefined2 *)(param_1 + 0x55ba));
  func_0x00003670(0x96f4);
  func_0x0000385e(0x30,2,*(undefined *)(param_1 + 0x55b5));
  func_0x00003670(0x96fa);
  func_0x0000385e(0x20,4,*(undefined2 *)(param_1 + 0x55bc));
  func_0x00003670(0x9700);
  func_0x0000385e(0x20,2,*(undefined *)(param_1 + 0x55b7));
  return;
}



bool FUN_0000_0278(int param_1)

{
  undefined2 unaff_DS;
  
  if (param_1 != 0xff) {
    func_0x000034da(0x20);
    func_0x00003670(*(undefined2 *)(param_1 * 2 + 0x1962));
    func_0x000034da(10);
  }
  return param_1 != 0xff;
}



void FUN_0000_02a8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  int iVar6;
  
  func_0x00006bca();
  func_0x00006c70(param_1 * 0x20 + 0x55a8);
  iVar6 = 1;
  func_0x00003a42(9,0x26,1,0x18);
  func_0x000034da(0xff);
  func_0x000034da(0xfc);
  func_0x000034da(0xfe);
  func_0x00003670(0x970e);
  func_0x000034da(0xfb);
  func_0x000034da(0xfe);
  iVar1 = FUN_0000_0278(*(undefined *)(iVar6 + 0x19));
  iVar2 = FUN_0000_0278(*(undefined *)(iVar6 + 0x1a));
  iVar3 = FUN_0000_0278(*(undefined *)(iVar6 + 0x1b));
  iVar4 = FUN_0000_0278(*(undefined *)(iVar6 + 0x1c));
  iVar5 = FUN_0000_0278(*(undefined *)(iVar6 + 0x1d));
  iVar6 = FUN_0000_0278(*(undefined *)(iVar6 + 0x1e));
  if (iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 == 0) {
    func_0x00003a12(4,0);
    func_0x000034da(0xfc);
    func_0x00003670(0x9716);
    func_0x000034da(0xfb);
  }
  func_0x00003a42(9,0x27,1,0x18,1);
  return;
}



void __cdecl16near FUN_0000_039c(void)

{
  undefined2 unaff_DS;
  
  func_0x00006bca();
  func_0x00006c70();
  func_0x00003a42(9,0x26,1,0x18);
  func_0x000034da(0xff);
  func_0x00003a42(9,0x27,1,0x18,1);
  func_0x00003670(0x972e);
  func_0x0000385e(0x20,4,*(undefined2 *)0x57a8);
  func_0x00003670(0x9738);
  func_0x0000385e(0x20,4,*(undefined2 *)0x57aa);
  func_0x00003670(0x9742);
  func_0x0000385e(0x20,2,*(undefined *)0x57ac);
  func_0x00003670(0x9752);
  func_0x0000385e(0x20,2,*(undefined *)0x57ad);
  func_0x00003670(0x9760);
  func_0x0000385e(0x20,2,*(undefined *)0x57ae);
  if (*(char *)0x57af != '\0') {
    func_0x00003670(0x976e);
  }
  return;
}



void FUN_0000_045e(int param_1)

{
  int iVar1;
  
  func_0x00003a42(param_1 + 1,0x26,1,0x18,1);
  func_0x000034da(0xff);
  func_0x00003a42(9,0x27,1,0x18,1);
  func_0x000034da(0x10);
  iVar1 = 0xd;
  do {
    func_0x000034da(0x11);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x000034da(0x13);
  for (iVar1 = 1; iVar1 != param_1; iVar1 = iVar1 + 1) {
    func_0x00003a12(iVar1,0);
    func_0x000034da(0x17);
    func_0x00003a12(iVar1,0xe);
    func_0x000034da(0x17);
  }
  func_0x000034da(10);
  func_0x000034da(0x14);
  iVar1 = 0xd;
  do {
    func_0x000034da(0x15);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  func_0x000034da(0x16);
  return;
}



undefined2 FUN_0000_0518(uint param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  param_2 = param_2 * 0x20;
  if ((((*(byte *)(param_2 + 0x55c1) == param_1) || (*(byte *)(param_2 + 0x55c2) == param_1)) ||
      (*(byte *)(param_2 + 0x55c3) == param_1)) ||
     (((*(byte *)(param_2 + 0x55c4) == param_1 || (*(byte *)(param_2 + 0x55c5) == param_1)) ||
      (*(byte *)(param_2 + 0x55c6) == param_1)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int FUN_0000_056c(int param_1,int param_2,undefined2 param_3_00,int param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return -1;
    }
    if (*(char *)(param_2 + param_3) != '\0') break;
    if ((param_1 != 0xff) && (iVar1 = FUN_0000_0518(param_3,param_1), iVar1 != 0)) {
      return param_3;
    }
  }
  return param_3;
}



int FUN_0000_05a4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  while( true ) {
    param_4 = param_4 + 1;
    if (param_3 <= param_4) {
      return -1;
    }
    if (*(char *)(param_2 + param_4) != '\0') break;
    if ((param_1 != 0xff) && (iVar1 = FUN_0000_0518(param_4,param_1), iVar1 != 0)) {
      return param_4;
    }
  }
  return param_4;
}



void FUN_0000_05e2(uint param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  cVar1 = *(char *)(param_4 + param_3);
  if (cVar1 != -1) {
    if (cVar1 == '\0') {
      uVar4 = 0x615;
      func_0x00003670(0x9778);
    }
    else {
      uVar4 = 2;
      func_0x0000385e(0x20,2,cVar1);
    }
    if (param_1 < 0x20) {
      func_0x00003abe(1,uVar4);
    }
    func_0x000034da(param_1);
    func_0x00003abe(0,uVar4);
  }
  pcVar2 = *(char **)(param_4 * 2 + param_2);
  if (*pcVar2 == '*') {
    func_0x00003abe(1);
    func_0x00003670(0x977c);
    func_0x00003670(pcVar2 + 1);
LAB_0000_0652:
    func_0x00003abe(0);
  }
  else {
    if (**(char **)(param_2 + param_4 * 2) == '!') {
      func_0x00003abe(1);
      func_0x00003670(0x9782);
      func_0x00003abe(0);
      uVar4 = *(undefined2 *)(param_4 * 2 + 0x19b2);
    }
    else {
      pcVar2 = *(char **)(param_4 * 2 + param_2);
      if (*pcVar2 == '(') {
        func_0x00003670(0x9788);
        func_0x00003abe(1);
        func_0x000034da(pcVar2[1]);
        goto LAB_0000_0652;
      }
      uVar4 = *(undefined2 *)(param_4 * 2 + param_2);
    }
    func_0x00003670(uVar4);
  }
  iVar3 = func_0x00003d32();
  if (iVar3 < 0xe) {
    iVar3 = 0xe - iVar3;
    do {
      func_0x000034da(0x20);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  func_0x000034da(10);
  return;
}



int FUN_0000_06e8(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined2 uVar6;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_6;
  int local_4;
  
  func_0x00006c70(param_4);
  FUN_0000_045e(8);
  bVar1 = false;
  local_6 = FUN_0000_05a4(0xff,param_2,param_3,0xffff);
  if (local_6 == -1) {
    FUN_0000_045e(8);
    func_0x00003a12(4,1);
    func_0x00003670(0x9794);
    func_0x00006bca();
    func_0x000039b4(2);
    local_e = func_0x0000448c();
  }
  else {
LAB_0000_092d:
    while (!bVar1) {
      func_0x000039b4(1);
      uVar6 = 1;
      func_0x00003a12(1,1);
      for (local_c = local_6; local_c != -1; local_c = FUN_0000_05a4(0xff,param_2,param_3,local_c))
      {
        FUN_0000_05e2(0x2d,param_1,param_2,local_c);
        uVar2 = func_0x00003b0e(1);
        func_0x00003a12(uVar2,uVar6);
        iVar3 = func_0x00003b0e();
        if (iVar3 == 8) break;
      }
      local_10 = 0;
      iVar3 = FUN_0000_056c(0xff,param_2,param_3,local_6);
      if (iVar3 != -1) {
        local_10 = 2;
      }
      if ((local_c != -1) && (iVar3 = FUN_0000_05a4(0xff,param_2,param_3,local_c), iVar3 != -1)) {
        local_10 = local_10 + 1;
      }
      if (local_10 == 0) {
        func_0x00006bca();
      }
      else {
        if (local_10 == 1) {
          uVar6 = 0x19;
        }
        else if (local_10 == 2) {
          uVar6 = 0x18;
        }
        else {
          if (local_10 != 3) goto LAB_0000_07d3;
          uVar6 = 0x12;
        }
        func_0x00006c0a(uVar6);
      }
LAB_0000_07d3:
      func_0x000039b4(2);
      local_e = func_0x0000448c();
      if (local_e == 0x20) goto LAB_0000_0948;
      if (local_e < 0x21) {
        if (local_e == 3) goto LAB_0000_081c;
        if (local_e < 4) goto LAB_0000_07f7;
        if (local_e == 4) goto LAB_0000_086c;
        if (local_e == 0x1b) goto LAB_0000_0948;
      }
      else if (local_e == 0xd3) {
        local_6 = FUN_0000_05a4(0xff,param_2,param_3,0xffff);
      }
      else if (local_e < 0xd4) {
        if (0x2f < local_e) {
          bVar5 = SBORROW2(local_e,0x36);
          iVar3 = -0x36;
          bVar4 = local_e == 0x36;
          goto LAB_0000_0972;
        }
      }
      else if (local_e == 0xd4) {
        local_6 = FUN_0000_056c(0xff,param_2,param_3,param_3);
        local_a = 0;
        while ((local_a < 6 && (iVar3 = FUN_0000_056c(0xff,param_2,param_3,local_6), iVar3 != -1)))
        {
          local_a = local_a + 1;
          local_6 = iVar3;
        }
      }
      else if (local_e == 0xd5) {
LAB_0000_081c:
        if (local_e == 0xd5) {
          local_4 = 7;
        }
        else {
          local_4 = 1;
        }
        for (local_a = 0; local_a < local_4; local_a = local_a + 1) {
          iVar3 = FUN_0000_056c(0xff,param_2,param_3,local_6);
          if (iVar3 != -1) {
            local_6 = FUN_0000_056c(0xff,param_2,param_3,local_6);
          }
        }
      }
      else if (local_e == 0xd6) {
LAB_0000_086c:
        if (local_e == 0xd6) {
          local_4 = 7;
        }
        else {
          local_4 = 1;
        }
        for (local_a = 0; local_a < local_4; local_a = local_a + 1) {
          if ((local_c != -1) && (iVar3 = FUN_0000_05a4(0xff,param_2,param_3,local_c), iVar3 != -1))
          {
            local_6 = FUN_0000_05a4(0xff,param_2,param_3,local_6);
            local_c = FUN_0000_05a4(0xff,param_2,param_3,local_c);
          }
        }
      }
    }
  }
  return local_e;
LAB_0000_07f7:
  if (0 < local_e) {
    bVar5 = SBORROW2(local_e,2);
    iVar3 = -2;
    bVar4 = local_e == 2;
LAB_0000_0972:
    if (bVar4 || bVar5 != local_e + iVar3 < 0) {
LAB_0000_0948:
      bVar1 = true;
    }
  }
  goto LAB_0000_092d;
}



void __cdecl16near FUN_0000_099a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 unaff_DS;
  
  iVar4 = 0;
  do {
    *(undefined *)(iVar4 + -0x4612) = *(undefined *)(iVar4 + 0x5820);
    *(undefined *)(iVar4 + -0x460a) = *(undefined *)(iVar4 + 0x5828);
    if (*(char *)(iVar4 + 0x5840) == -1) {
      uVar3 = 0xff;
    }
    else {
      uVar3 = 0;
    }
    *(undefined *)(iVar4 + -0x45fd) = uVar3;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  *(undefined *)0xb9fe = *(undefined *)0x57b0;
  *(undefined *)0xb9ff = *(undefined *)0x57b1;
  *(undefined *)0xba00 = *(undefined *)0x57b3;
  *(undefined *)0xba01 = *(undefined *)0x57b4;
  *(undefined *)0xba02 = *(undefined *)0x57b5;
  puVar6 = (undefined2 *)0xba0b;
  puVar5 = (undefined2 *)0x57b6;
  for (iVar4 = 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined *)puVar6 = *(undefined *)puVar5;
  *(undefined *)0xba0e = *(undefined *)0x57ba;
  if (*(char *)0x57bb == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xff;
  }
  *(undefined *)0xba0f = uVar3;
  *(undefined *)0xba10 = *(undefined *)0x57bc;
  *(undefined *)0xba11 = *(undefined *)0x57bd;
  *(undefined *)0xba12 = *(undefined *)0x57be;
  *(undefined *)0xba13 = *(undefined *)0x57bf;
  return;
}



void __cdecl16near FUN_0000_0a3a(void)

{
  byte bVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint local_4;
  
  iVar2 = FUN_0000_0000(1);
  if (iVar2 == -2) {
    iVar2 = 6;
  }
  else if (iVar2 < 0) {
    return;
  }
  func_0x00003670(0x97a2);
  FUN_0000_099a();
  func_0x00006d1c();
  local_4 = iVar2 << 1;
  bVar1 = 0;
LAB_0000_0a78:
  do {
    if ((bVar1 == 0x20) || (bVar1 == 0x1b)) {
      func_0x00006bca();
      func_0x00006c40();
      func_0x00006d5c();
      func_0x00004720();
      func_0x00003670();
      return;
    }
    if (bVar1 == 3) {
LAB_0000_0aa6:
      if (local_4 == 0xc) {
        local_4 = (uint)*(byte *)0x585b * 2 - 1;
      }
      else if ((int)local_4 < 1) {
        local_4 = 0x10;
      }
      else {
        local_4 = local_4 - 1;
      }
    }
    else {
      if (bVar1 < 4) {
        if (bVar1 == 1) goto LAB_0000_0aa6;
        if (bVar1 != 2) goto LAB_0000_0acb;
LAB_0000_0aea:
        if ((uint)*(byte *)0x585b * 2 - 1 != local_4) {
          if ((int)local_4 < 0x10) {
            local_4 = local_4 + 1;
          }
          else {
            local_4 = 0;
          }
          goto LAB_0000_0acb;
        }
      }
      else {
        if (bVar1 == 4) goto LAB_0000_0aea;
        if (bVar1 != 0x30) {
          if (((0x30 < bVar1) && (bVar1 < 0x37)) && (bVar1 - 0x31 < (uint)*(byte *)0x585b)) {
            local_4 = (uint)bVar1 * 2 - 0x62;
          }
          goto LAB_0000_0acb;
        }
      }
      local_4 = 0xc;
    }
LAB_0000_0acb:
    func_0x000039b4(1);
    if ((int)local_4 < 0xc) {
      if ((local_4 & 1) == 0) {
        FUN_0000_0082((int)local_4 >> 1);
      }
      else {
        FUN_0000_02a8((int)local_4 >> 1);
      }
LAB_0000_0b5f:
      func_0x000039b4(2);
      bVar1 = func_0x0000448c();
      goto LAB_0000_0a78;
    }
    if (local_4 == 0xc) {
      FUN_0000_039c();
      goto LAB_0000_0b5f;
    }
    if (local_4 == 0xd) {
      uVar6 = 0x97ac;
      uVar5 = 8;
      uVar4 = 0x5850;
      uVar3 = 0x19d2;
      goto LAB_0000_0b99;
    }
    if (local_4 == 0xe) {
      uVar6 = 0x97b6;
      uVar5 = 0x30;
      uVar4 = 0x57f0;
      uVar3 = 0x19e2;
      goto LAB_0000_0b99;
    }
    if (local_4 == 0xf) {
      uVar6 = 0x97be;
      uVar5 = 0x26;
      uVar4 = 0xb9ee;
      uVar3 = 0x1916;
      goto LAB_0000_0b99;
    }
    if (local_4 == 0x10) {
      uVar6 = 0x97c4;
      uVar5 = 0x30;
      uVar4 = 0x57c0;
      uVar3 = 0x1962;
LAB_0000_0b99:
      bVar1 = FUN_0000_06e8(uVar3,uVar4,uVar5,uVar6);
    }
  } while( true );
}



void FUN_0000_0bee(undefined2 param_1)

{
  func_0x00003670(0x97d4);
  func_0x00003670(param_1);
  func_0x00003670(0x97d8);
  return;
}



undefined2 FUN_0000_0c0a(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 0x20;
  if ((*(char *)(param_1 + 0x55c3) == -1) && (*(char *)(param_1 + 0x55c4) == -1)) {
    uVar1 = 2;
  }
  else if (*(char *)(param_1 + 0x55c3) == -1) {
    uVar1 = 0;
  }
  else if ((*(char *)(param_1 + 0x55c4) == -1) &&
          (*(char *)(*(byte *)(param_1 + 0x55c3) + 0x1a7e) != '0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}



undefined2 FUN_0000_0c5c(int param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  byte *local_10;
  int local_c;
  undefined *local_6;
  
  if (0x7f < *(byte *)0x5893) {
    local_6 = (undefined *)((uint)*(byte *)((uint)*(byte *)0x589e * 8 + -0x45e8) * 8 + 0x5c5a);
  }
  if (param_1 == 0x1b) {
    return 0;
  }
  if (param_1 == 0x1d) {
    return 0;
  }
  if ((((8 < param_1) && (param_1 < 0x10)) && (0x7f < *(byte *)0x5893)) && (*(char *)0x58a3 == '\0')
     ) {
    uVar6 = 0x97e2;
    goto LAB_0000_0d2f;
  }
  iVar7 = FUN_0000_0518(param_1,param_2);
  if (iVar7 != 0) {
    func_0x00008c80(param_1,param_2);
    if (*(byte *)(param_1 + 0x57c0) < 99) {
      pcVar1 = (char *)(param_1 + 0x57c0);
      *pcVar1 = *pcVar1 + '\x01';
    }
    if (*(byte *)0x5893 < 0x80) {
      return 0;
    }
    if (param_1 != 0x2a) {
      return 0;
    }
    iVar7 = func_0x00006b96(*(undefined *)(param_2 * 0x20 + 0x55b2),0x9812);
    uVar5 = *(undefined *)(iVar7 + 0x1ade);
    local_6[1] = uVar5;
    goto LAB_0000_0d08;
  }
  if ((((param_1 == 0x1a) || (param_1 == 0x24)) && (*(char *)0x57db == '\0')) ||
     ((param_1 == 0x1c && (*(char *)0x57dd == '\0')))) {
    uVar6 = 0x981c;
    goto LAB_0000_0d2f;
  }
  iVar8 = 0;
  local_10 = (byte *)(param_2 * 0x20 + 0x55c1);
  iVar7 = 6;
  do {
    if (*local_10 != 0xff) {
      iVar8 = iVar8 + (uint)*(byte *)(*local_10 + 0x1aae);
    }
    local_10 = local_10 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  bVar2 = *(byte *)(param_1 + 0x1aae);
  bVar3 = *(byte *)(param_2 * 0x20 + 0x55b4);
  cVar4 = *(char *)(param_1 + 0x1a7e);
  if (cVar4 == '\x02') {
    if (*(char *)(param_2 * 0x20 + 0x55c5) != -1) {
      uVar6 = 0x9916;
      goto LAB_0000_0d2f;
    }
    local_10 = (byte *)(param_2 * 0x20 + 0x55c5);
  }
  else if (cVar4 == '\x04') {
    if (*(char *)(param_2 * 0x20 + 0x55c6) != -1) {
      uVar6 = 0x98f0;
      goto LAB_0000_0d2f;
    }
    local_10 = (byte *)(param_2 * 0x20 + 0x55c6);
  }
  else {
    if (cVar4 == ' ') {
      local_c = FUN_0000_0c0a(param_2);
      if (local_c == 0xff) {
        uVar6 = 0x9892;
        goto LAB_0000_0d2f;
      }
      if (local_c == 2) {
        local_c = 0;
      }
      local_c = param_2 * 0x20 + local_c;
    }
    else {
      if (cVar4 != '0') {
        if (cVar4 == '@') {
          if (*(char *)(param_2 * 0x20 + 0x55c2) != -1) {
            uVar6 = 0x9866;
            goto LAB_0000_0d2f;
          }
          local_10 = (byte *)(param_2 * 0x20 + 0x55c2);
        }
        else if (cVar4 == -0x80) {
          if (*(char *)(param_2 * 0x20 + 0x55c1) != -1) {
            uVar6 = 0x9846;
            goto LAB_0000_0d2f;
          }
          local_10 = (byte *)(param_2 * 0x20 + 0x55c1);
        }
        goto LAB_0000_0de9;
      }
      iVar7 = FUN_0000_0c0a(param_2);
      if (iVar7 != 2) {
        uVar6 = 0x98ba;
        goto LAB_0000_0d2f;
      }
      local_c = param_2 << 5;
    }
    local_10 = (byte *)(local_c + 0x55c3);
  }
LAB_0000_0de9:
  if ((uint)bVar2 + iVar8 <= (uint)bVar3) {
    *local_10 = (byte)param_1;
    pcVar1 = (char *)(param_1 + 0x57c0);
    *pcVar1 = *pcVar1 + -1;
    if (((param_1 == 0x2a) || (param_1 == 0x2c)) && (iVar7 = func_0x00003eb2(0xf,0), iVar7 == 0)) {
      func_0x00003670(0x995e);
      *(undefined *)(param_2 * 0x20 + 0x55c5) = 0xff;
      func_0x000061ce(0x28,1,2000,0x4b0);
      return 1;
    }
    if (param_1 != 0x2a) {
      return 0;
    }
    if (*(byte *)0x5893 < 0x80) {
      return 0;
    }
    uVar5 = 0x1d;
    local_6[1] = 0x1d;
LAB_0000_0d08:
    *local_6 = uVar5;
    return 0;
  }
  uVar6 = 0x9942;
LAB_0000_0d2f:
  FUN_0000_0bee(uVar6);
  return 0;
}



int FUN_0000_0f2e(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  undefined2 local_14;
  int local_10;
  undefined2 local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = 0;
  local_10 = 1;
  if (param_1 == 0x52) {
    local_14 = 0x57c0;
    local_a = 0x30;
  }
  else {
    local_14 = 0xb9ee;
    local_a = 0x26;
  }
LAB_0000_1282:
  do {
    if (local_8 != 0) {
      return local_1a;
    }
    func_0x000039b4(1);
    func_0x00003a12(1,1);
    local_4 = 0;
    for (iVar2 = param_3; iVar2 != -1; iVar2 = FUN_0000_05a4(param_2,local_14,local_a,iVar2)) {
      local_4 = local_4 + 1;
      iVar1 = func_0x00003b0e();
      if (iVar1 == local_10) {
        func_0x000034da(0xfd);
        local_1a = iVar2;
      }
      if (param_1 == 0x52) {
        iVar1 = FUN_0000_0518(iVar2,param_2);
        if (iVar1 == 0) {
          uVar4 = 0x20;
        }
        else {
          uVar4 = *(undefined *)(iVar2 + 0x1ae8);
        }
        uVar5 = 0x1962;
      }
      else {
        uVar5 = 0x1916;
        uVar4 = 0x20;
      }
      FUN_0000_05e2(uVar4,uVar5,local_14,iVar2);
      uVar5 = func_0x00003b0e(1);
      uVar6 = 0xfac;
      func_0x00003a12(uVar5);
      uVar5 = 0xfaf;
      iVar1 = func_0x00003b0e();
      if (iVar1 + -1 == local_10) {
        func_0x000034da(0xfd,uVar6,uVar5);
      }
      iVar1 = func_0x00003b0e();
      if (iVar1 == 8) break;
    }
    local_18 = 0;
    iVar1 = FUN_0000_056c(param_2,local_14,local_a,param_3);
    if (iVar1 != -1) {
      local_18 = 2;
    }
    if ((iVar2 != -1) && (iVar1 = FUN_0000_05a4(param_2,local_14,local_a,iVar2), iVar1 != -1)) {
      local_18 = local_18 + 1;
    }
    if (local_18 == 0) {
      func_0x00006bca();
    }
    else {
      if (local_18 == 1) {
        uVar5 = 0x19;
      }
      else if (local_18 == 2) {
        uVar5 = 0x18;
      }
      else {
        if (local_18 != 3) goto LAB_0000_1077;
        uVar5 = 0x12;
      }
      func_0x00006c0a(uVar5);
    }
LAB_0000_1077:
    func_0x000039b4(2);
    iVar1 = func_0x0000448c();
    if (iVar1 != 0xd) {
      if (iVar1 < 0xe) {
        if (iVar1 == 1) {
LAB_0000_10c0:
          if (iVar1 == 0xd5) {
            local_6 = 7;
          }
          else {
            local_6 = 1;
          }
          if (local_6 != 0) {
            local_1c = local_6;
            do {
              if ((local_10 == 4) || (local_10 == 1)) {
                iVar2 = FUN_0000_056c(param_2,local_14,local_a,param_3);
                if (iVar2 == -1) {
                  if (local_10 == 4) goto LAB_0000_1121;
                }
                else {
                  param_3 = FUN_0000_056c(param_2,local_14,local_a,param_3);
                }
              }
              else {
LAB_0000_1121:
                local_10 = local_10 + -1;
              }
              local_1c = local_1c + -1;
            } while (local_1c != 0);
          }
          goto LAB_0000_1282;
        }
        if (iVar1 != 2) {
          if (iVar1 == 3) goto LAB_0000_10c0;
          bVar3 = iVar1 == 4;
LAB_0000_127d:
          if (!bVar3) goto LAB_0000_1282;
        }
        if (iVar1 == 0xd6) {
          local_6 = 7;
        }
        else {
          local_6 = 1;
        }
        if (local_6 != 0) {
          local_1e = local_6;
          do {
            if (((local_10 == 4) || (local_10 == 7)) || (local_4 <= local_10)) {
              if ((iVar2 == -1) ||
                 (iVar1 = FUN_0000_05a4(param_2,local_14,local_a,iVar2), iVar1 == -1)) {
                if ((local_10 == 4) && (4 < local_4)) goto LAB_0000_11b3;
              }
              else {
                param_3 = FUN_0000_05a4(param_2,local_14,local_a,param_3);
                iVar2 = FUN_0000_05a4(param_2,local_14,local_a,iVar2);
              }
            }
            else {
LAB_0000_11b3:
              local_10 = local_10 + 1;
            }
            local_1e = local_1e + -1;
          } while (local_1e != 0);
        }
        goto LAB_0000_1282;
      }
      if (iVar1 == 0x1b) {
        if (param_1 == 0x52) {
          uVar5 = 0x9970;
        }
        else {
          uVar5 = 0x9976;
        }
        func_0x00003670(uVar5);
        local_8 = 1;
        local_1a = -1;
      }
      else {
        if (iVar1 == 0x20) goto LAB_0000_121c;
        if (iVar1 == 0xd3) {
          param_3 = FUN_0000_05a4(param_2,local_14,local_a,0xffff);
          local_10 = 1;
        }
        else {
          if (iVar1 != 0xd4) {
            if (iVar1 != 0xd5) {
              bVar3 = iVar1 == 0xd6;
              goto LAB_0000_127d;
            }
            goto LAB_0000_10c0;
          }
          param_3 = FUN_0000_056c(param_2,local_14,local_a,local_a);
          local_10 = 1;
          do {
            local_1a = FUN_0000_056c(param_2,local_14,local_a,param_3);
            if (local_1a == -1) break;
            local_10 = local_10 + 1;
            param_3 = local_1a;
          } while (local_10 < 7);
        }
      }
      goto LAB_0000_1282;
    }
LAB_0000_121c:
    if (param_1 == 0x52) {
      local_8 = FUN_0000_0c5c(local_1a,param_2);
    }
    else {
      local_8 = 1;
    }
  } while( true );
}



void __cdecl16near FUN_0000_1296(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0000_0000(0);
  if (-1 < iVar1) {
    iVar2 = FUN_0000_05a4(iVar1,0x57c0,0x30,0xffff);
    if (iVar2 == -1) {
      func_0x00003670(0x997e);
    }
    else {
      func_0x00003670(0x9998,iVar1,iVar2);
      func_0x00006d1c();
      iVar1 = 1;
      func_0x000039b4(1);
      func_0x00006c70(iVar1 * 0x20 + 0x55a8);
      FUN_0000_045e(8);
      FUN_0000_0f2e(0x52,iVar2,iVar2);
      func_0x00006bca();
      func_0x00006c40();
      func_0x00006d5c();
      func_0x00004720();
    }
  }
  return;
}


