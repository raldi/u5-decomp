typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near FUN_1040_0010(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00018e62(1);
  func_0x000198fa(0xff);
  iVar1 = 0;
  iVar2 = 0;
  do {
    func_0x00018f8c(0,iVar2,0x10,iVar1 + 1,*(undefined2 *)0xbb1a);
    iVar2 = iVar2 + 0x32;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



undefined2 FUN_1040_0050(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  int local_e;
  uint local_c;
  
  local_e = *(int *)0x13b0;
  func_0x00018cb0(local_e);
  uVar1 = *(undefined2 *)0x5356;
  *(undefined2 *)0x5356 = 0x113;
  for (uVar4 = *(uint *)0xbb18; (int)uVar4 < 0x1060; uVar4 = uVar4 + 1) {
    if (local_e != 0) {
      func_0x00018ea4(param_1,param_2);
    }
    local_e = *(int *)0x13b0;
    local_c = *(byte *)(uVar4 + 0x55a6) & 7;
    if (2 < local_c) {
      local_e = 0;
    }
    if ((*(byte *)(uVar4 + 0x55a6) & 8) != 0) {
      local_c = -local_c;
    }
    uVar2 = (*(byte *)(uVar4 + 0x55a6) & 0x70) >> 4;
    if (2 < uVar2) {
      local_e = 0;
    }
    if ((*(byte *)(uVar4 + 0x55a6) & 0x80) != 0) {
      uVar2 = -uVar2;
    }
    param_2 = param_2 + uVar2;
    param_1 = param_1 + local_c;
    iVar3 = func_0x00019f9e();
    if (iVar3 != 0) {
      *(undefined2 *)0x5356 = uVar1;
      return 0;
    }
    if ((uVar4 & 0x1f) == 0) {
      func_0x0001a33a(1);
    }
    if (*(char *)(uVar4 + 0x55a6) == '\0') break;
  }
  *(int *)0xbb18 = uVar4 + 1;
  *(undefined2 *)0x5356 = uVar1;
  return *(undefined2 *)0xbb18;
}



void __cdecl16near FUN_1040_014e(void)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  undefined2 uVar8;
  int local_a;
  uint local_8;
  int local_6;
  
  if (*(char *)0x5893 != '@') {
    func_0x0001926e();
  }
  *(undefined *)0x5893 = 0x40;
  do {
    iVar2 = func_0x000191ee(*(undefined2 *)0x25ea);
  } while (iVar2 == 0);
  func_0x0001ff26(0x2f30,iVar2);
  func_0x00018e62(1);
  func_0x000198fa(0xff);
  func_0x00018e62(0);
  func_0x000198fa(0xff);
  func_0x00019e32(10,0);
  do {
    iVar3 = func_0x00018dee(*(undefined2 *)0x260c);
  } while (iVar3 == 0);
  do {
    local_6 = func_0x00018dee(*(undefined2 *)0x260e);
  } while (local_6 == 0);
  local_8 = 0;
  local_a = 0;
  do {
    if (0x14 < local_a) {
      func_0x00018e24(local_6);
      func_0x00018e24(iVar3);
      func_0x0001921c(iVar2);
      func_0x00019d56();
      do {
        iVar2 = func_0x00019f9e();
      } while (iVar2 == 0);
      func_0x00018e62(1);
      func_0x000198fa(0xff);
      func_0x00018e62(0);
      *(undefined *)0xa9be = 0;
      func_0x0001a75e(0);
      return;
    }
    if (*(byte *)(local_a + 0x30ae) != local_8) {
      func_0x00018e24(local_6);
      local_8 = (uint)*(byte *)(local_a + 0x30ae);
      do {
        local_6 = func_0x00018dee(*(undefined2 *)(local_8 * 2 + 0x260e));
      } while (local_6 == 0);
    }
    *(undefined *)0xa9be = 2;
    func_0x00018e62(1);
    func_0x000198fa(0xff);
    if (*(char *)(local_a + 0x30f0) == '\x01') {
      if (local_a == 0) {
        func_0x00018f8c(0,0x1e,0xe0,0,iVar3);
        uVar8 = 1;
        uVar7 = 0xa8;
        uVar5 = 0x3a;
      }
      else if (local_a == 7) {
        func_0x00018f8c(0,0x1a,0xe8,0,iVar3);
        uVar8 = 2;
        uVar7 = 200;
        uVar5 = 0x36;
      }
      else {
        if (local_a != 0xe) goto LAB_1040_01f9;
        func_0x00018f8c(0,0,0xb8,0,iVar3);
        uVar8 = 3;
        uVar7 = 0xf8;
        uVar5 = 0;
      }
      func_0x00018f8c(0,uVar5,uVar7,uVar8,iVar3);
    }
LAB_1040_01f9:
    uVar4 = (uint)*(byte *)(local_a + 0x30da);
    uVar1 = *(undefined *)(local_a + 0x30c4);
    func_0x00018f8c(0,uVar4,uVar1,*(undefined *)(local_a + 0x3098),local_6);
    if (3 < *(byte *)(local_a + 0x30f0)) {
      func_0x00018f8c(0,uVar4 + 0x37,uVar1,(uint)*(byte *)(local_a + 0x30f0) * 2 + -5,local_6);
    }
    *(uint *)0x5146 = (uint)*(byte *)(local_a * 2 + 0x2f98);
    *(uint *)0x5148 = (uint)*(byte *)(local_a * 2 + 0x2f99);
    *(undefined2 *)0x514c = *(undefined2 *)(local_a * 4 + 0x2fc2);
    *(undefined2 *)0x514e = *(undefined2 *)(local_a * 4 + 0x2fc4);
    *(uint *)0x5150 = (uint)*(byte *)(local_a + 0x3040);
    *(uint *)0x5152 = (uint)*(byte *)(local_a + 0x3056);
    uVar4 = (uint)*(byte *)(local_a + 0x306c);
    *(uint *)0x5156 = uVar4;
    *(uint *)0x5158 = (uint)*(byte *)(local_a + 0x3082);
    if (*(char *)(local_a + 0x30f0) == '\x03') {
      func_0x00018f8c(0,0x27,0x60,3,local_6);
      iVar6 = iVar2;
      func_0x0001ff26(0x2f31,iVar2);
      *(uint *)0x5156 = uVar4;
      *(undefined2 *)0x5158 = 0xb4;
      uVar5 = 0x2f5f;
    }
    else {
      iVar6 = 0x724;
      func_0x0001a7ae(*(undefined2 *)(local_a * 2 + 0x3016),2000,0xb21e,0x2f8d);
      uVar5 = 0xb21e;
    }
    func_0x0001ff26(uVar5,iVar2,iVar6);
    if (local_a != 0) {
      func_0x00019d56();
      do {
        iVar6 = func_0x00019f9e();
      } while (iVar6 == 0);
    }
    func_0x000191ae(0,1);
    if (*(char *)(local_a + 0x30f0) == '\x02') {
      func_0x00018e62(1);
      func_0x00018f8c(0,0x56,0x28,2,local_6);
      func_0x00019186(0x78,0x4b,0x56,0x28);
    }
    local_a = local_a + 1;
  } while( true );
}



void FUN_1040_043e(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = func_0x0001a3ac(param_1);
  iVar1 = iVar1 / 2 + -0x12;
  iVar2 = -iVar1;
  iVar3 = func_0x0001a3ac(param_1);
  func_0x00018cb0(*(undefined2 *)0x13b2);
  iVar1 = iVar1 * -8;
  func_0x00018ce6(199,iVar1,0xc1,8);
  iVar3 = (iVar3 + iVar2 + 2) * 8;
  func_0x00018ce6(199,0x137,0xc1,iVar3);
  func_0x00018cb0(*(undefined2 *)0x13b0);
  func_0x00018d50(0xc0,iVar1,0xc0,8);
  func_0x00018d50(0xc0,0x137,0xc0,iVar3);
  func_0x00019e32(0x18,iVar2);
  func_0x0001ce6a();
  func_0x00019a90(param_1);
  func_0x0001cf0e();
  return;
}



void __cdecl16near FUN_1040_04e0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00019f0a(*(undefined2 *)0x13b2);
  func_0x00019e32(0xf,0);
  func_0x000198fa(0x7b);
  iVar2 = 0x26;
  do {
    func_0x000198fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000198fa(0x7c);
  iVar2 = 8;
  do {
    func_0x000198fa(0x7f);
    uVar1 = func_0x00019f2e(0x27);
    func_0x00019e32(uVar1);
    func_0x000198fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000198fa(0x7d);
  iVar2 = 0x26;
  do {
    func_0x000198fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)0x538e = 0;
  func_0x000198fa(0x7e);
  *(undefined2 *)0x538e = 1;
  func_0x00018cb0(*(undefined2 *)0x13b0);
  func_0x00018d50(0x7f,0x138,0x7f,7);
  func_0x000191d0(0xc0,0x138);
  func_0x000191d0(0xc0,7);
  func_0x000191d0(0x7f,7);
  func_0x00019f0a(*(undefined2 *)0x13b0);
  return;
}



void FUN_1040_05b0(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined *)0xa9be = 2;
  if (*(char *)0x5893 != '@') {
    func_0x0001926e();
    *(undefined *)0x5893 = 0x40;
  }
  do {
    iVar1 = func_0x00018dee(*(undefined2 *)0x261e);
    *(int *)0xbb1a = iVar1;
  } while (iVar1 == 0);
  func_0x00018e62(0);
  func_0x000198fa(0xff);
  func_0x00018e62(1);
  func_0x00018f8c(0,0,0,0,*(undefined2 *)0xbb1a);
  if (param_1 != 0) {
    func_0x00019186(100,0x13f,0,0);
    iVar1 = func_0x00019f9e();
    param_1 = (uint)(iVar1 == 0);
  }
  if (param_1 == 0) {
    func_0x00018d0e(100,0x13f,0,0,0,1);
  }
  FUN_1040_0010();
  func_0x00018e24(*(undefined2 *)0xbb1a);
  if (param_1 != 0) {
    do {
      iVar1 = func_0x000191ee(0x3105);
    } while (iVar1 == 0);
    FUN_1040_20ae(iVar1);
    func_0x0001921c(iVar1);
  }
  func_0x00018e62(0);
  FUN_1040_2090();
  *(undefined *)0xa9be = 0;
  FUN_1040_04e0();
  return;
}



void FUN_1040_0676(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  if (param_3 == param_4) {
    func_0x000198fa(0xfd);
  }
  func_0x00019e32(param_3 + 0x11,param_2);
  func_0x000198fa(0x20);
  func_0x00019a90(param_1);
  func_0x000198fa(0x20);
  if (param_3 == param_4) {
    func_0x000198fa(0xfd);
  }
  return;
}



void FUN_1040_06bc(undefined2 param_1)

{
  FUN_1040_0676(0x310c,0xc,0,param_1);
  FUN_1040_0676(0x311b,9,1,param_1);
  FUN_1040_0676(0x3130,8,2,param_1);
  FUN_1040_0676(0x3148,9,3,param_1);
  FUN_1040_0676(0x315e,0xb,4,param_1);
  FUN_1040_0676(0x316f,10,5,param_1);
  return;
}



void __cdecl16near FUN_1040_072e(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  do {
    iVar1 = func_0x00018dee(*(undefined2 *)0x2620);
  } while (iVar1 == 0);
  func_0x00018e62(1);
  func_0x00018f8c(0,0x3f,0x10,1,iVar1);
  func_0x00018e62(0);
  iVar2 = 199;
  do {
    func_0x00018f8c(0,iVar2,0x90,0,iVar1);
    func_0x00018f8c(0,iVar2,0xa0,2,iVar1);
    iVar2 = iVar2 + -1;
  } while (0x3e < iVar2);
  iVar2 = 0;
  do {
    func_0x00018f8c(0,0x3f,0x88 - iVar2,0,iVar1);
    func_0x00018d0e(199,0x9f - iVar2,0x3f,0x98 - iVar2,0,1);
    func_0x00018f8c(0,0x3f,iVar2 + 0xa8,2,iVar1);
    func_0x00018d0e(199,iVar2 + 0xa7,0x3f,iVar2 + 0xa0,0,1);
    func_0x0001a33a(1);
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0x90);
  do {
    iVar2 = func_0x00018dee(*(undefined2 *)0x261e);
    *(int *)0xbb1a = iVar2;
  } while (iVar2 == 0);
  func_0x00018e62(1);
  func_0x000198fa(0xff);
  func_0x00018f8c(0,0x41,0x10,1,*(undefined2 *)0xbb1a);
  func_0x00018e24(*(undefined2 *)0xbb1a);
  FUN_1040_04e0();
  FUN_1040_06bc(4);
  do {
    iVar2 = func_0x00019f9e();
  } while (iVar2 == 0);
  func_0x00018e62(0);
  iVar2 = 0x88;
  do {
    func_0x00018f8c(0,0x3f,0x90 - iVar2,0,iVar1);
    func_0x00018d0e(199,0x8f - iVar2,0x3f,0x88 - iVar2,0,1);
    func_0x00018f8c(0,0x3f,iVar2 + 0xa0,2,iVar1);
    func_0x00018d0e(199,iVar2 + 0xb7,0x3f,iVar2 + 0xb0,0,1);
    func_0x0001a33a(1);
    iVar2 = iVar2 + -8;
  } while (-1 < iVar2);
  func_0x00018e24(iVar1);
  iVar2 = 0x3f;
  do {
    func_0x00018f8c(0,iVar2 + 1,0x90,0,iVar1);
    func_0x00018f8c(0,iVar2 + 1,0xa0,2,iVar1);
    func_0x00018d0e(iVar2,0xaf,iVar2,0x90,0,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 199);
  func_0x00018d0e(199,0xaf,199,0x90,0,1);
  FUN_1040_0010();
  func_0x00018e62(0);
  func_0x00019d56();
  return;
}



int FUN_1040_094e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1 <= iVar2) {
      return 0;
    }
    iVar1 = func_0x00019f9e();
    if (iVar1 != 0) break;
    func_0x0001a33a(1);
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}



void __cdecl16near FUN_1040_0986(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  undefined2 uVar9;
  byte local_10;
  uint local_a;
  char *pcVar6;
  
  *(undefined *)0xa9ce = 1;
  iVar4 = 0;
  do {
    *(undefined *)(iVar4 + -0x4ee2) = (char)iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x100);
  func_0x00019020();
  func_0x00019398();
  uVar1 = *(undefined2 *)0x5356;
  if ((*(int *)0x52c8 == 2) && (*(uint *)0x5358 < 0x170)) {
    *(undefined2 *)0x52f1 = 0;
    *(undefined2 *)0x52ba = 1;
    *(undefined2 *)0x52c8 = 0;
  }
  do {
    iVar4 = func_0x000190d4();
  } while (iVar4 == 0);
  func_0x00018ad2(1);
  if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
    iVar4 = 0;
    while( true ) {
      iVar7 = iVar4 + 1;
      pcVar5 = *(char **)(iVar4 * 2 + 0x25ea);
      if (*pcVar5 == '\0') break;
      do {
        pcVar6 = pcVar5;
        pcVar5 = pcVar6 + 1;
      } while (*pcVar6 != '.');
      iVar4 = iVar7;
      if (*pcVar5 == '1') {
        *pcVar5 = '4';
        pcVar6[2] = '\0';
      }
    }
  }
  else {
    *(undefined2 *)0x13b2 = 1;
    *(undefined2 *)0x13ae = 4;
    *(undefined2 *)0x13b0 = 0xf;
    *(undefined2 *)0x13b6 = 5;
    *(undefined2 *)0x13b4 = 2;
    *(undefined2 *)0x13b8 = 0xe;
    *(undefined2 *)0x13ba = 7;
  }
  iVar4 = func_0x0001916a();
  if (iVar4 == 0) {
    func_0x00018ab8();
    func_0x00018534(1);
  }
  if (*(int *)0x52c8 == 3) {
    do {
      iVar4 = func_0x00019f42(0,0x3182);
    } while (iVar4 == 0);
    do {
      iVar4 = func_0x00019f42(1,0x318a);
    } while (iVar4 == 0);
  }
  else {
    do {
      iVar4 = func_0x00019f42(0,0x3194);
    } while (iVar4 == 0);
    do {
      iVar4 = func_0x00019f42(1,0x319b);
    } while (iVar4 == 0);
  }
  func_0x00019ede(0);
  uVar9 = 0;
  uVar8 = 0;
  func_0x00019e62(0x18,0x27,0,0,0);
  func_0x00019dd4(0);
  uVar2 = func_0x00019f9e();
  iVar4 = func_0x0001a272(uVar2);
  if (iVar4 == 0x4a) {
    func_0x000198fa(0xff);
    func_0x000198fa(0xfc);
    func_0x00019e32(0xb,0);
    func_0x00019a90(0x31a4);
    func_0x000198fa(0xfb);
    do {
      iVar4 = func_0x00019234(*(undefined2 *)0x25f0);
    } while (iVar4 == 0);
    *(undefined *)0x5893 = 0x41;
    local_a = 0x4a;
  }
  else {
    do {
      iVar4 = func_0x000191ee(*(undefined2 *)0x25ee);
    } while (iVar4 == 0);
    do {
      iVar7 = func_0x000191ee(*(undefined2 *)0x25ec);
    } while (iVar7 == 0);
    func_0x0001a7ae(0,0x1060,0x55a6,0x31b5,uVar8,uVar9,iVar7);
    iVar3 = func_0x00018fb2(iVar4);
    local_a = (uint)(iVar3 == 0);
    func_0x00018e62(1);
    func_0x00018ce6(199,0x13f,0x8c,0);
    func_0x00019284(0x8c,0x6c,7,iVar4);
    func_0x00018d0e(199,0x13f,0x8c,0,0,1);
    if (local_a != 0) {
      func_0x0001a33a(0x12);
      iVar3 = FUN_1040_094e(0x14);
      local_a = (uint)(iVar3 == 0);
    }
    if (local_a != 0) {
      func_0x000198fa(0xff);
      func_0x00019284(0,0x98,8,iVar4);
      func_0x000191ae(0,1);
      iVar3 = FUN_1040_094e(0x14);
      local_a = (uint)(iVar3 == 0);
      if (local_a != 0) {
        func_0x00018e62(0);
        *(undefined2 *)0xbb18 = 0;
        local_a = 0;
        iVar3 = FUN_1040_0050(0x44,0x2c);
        if (((iVar3 != 0) && (iVar3 = FUN_1040_0050(0x5e,0x40), iVar3 != 0)) &&
           (iVar3 = FUN_1040_0050(0x4e,0x8f), iVar3 != 0)) {
          local_a = FUN_1040_0050(0x69,0xa7);
        }
        func_0x00018e62(1);
      }
      func_0x00019284(0x42,0x18,0,iVar7);
      func_0x000191ae(0,1);
      func_0x00019284(0xa0,0x68,9,iVar4);
      func_0x000191ae(0,1);
      if (local_a != 0) {
        iVar3 = FUN_1040_094e(0x14);
        local_a = (uint)(iVar3 == 0);
      }
    }
    func_0x0001921c(iVar7);
    func_0x0001921c(iVar4);
    *(undefined *)0x5893 = 0x40;
    func_0x000198fa(0xff);
    func_0x00018e62(0);
    FUN_1040_05b0(local_a);
    if (local_a != 0) {
      func_0x0001ff1a();
    }
    local_a = 1;
  }
  uVar2 = func_0x0001a296();
  func_0x0001a2be(uVar2);
LAB_1040_0cd0:
  do {
    func_0x00019e62(0x17,0x26,0x10,1,0);
    func_0x00019dd4(0);
    func_0x000198fa(0xff);
    func_0x00019e62(0x18,0x27,0,0,0);
    func_0x00019e62(9,0x27,1,0x18,1);
    func_0x00019e62(0x17,0x27,0xb,0x18,2);
    if (local_a == 0x4a) {
      local_10 = 0x4a;
    }
    else {
      iVar4 = 0;
      FUN_1040_043e(0x31c1);
      FUN_1040_06bc(0);
      do {
        func_0x00019e32(0xf,0xf);
        func_0x0001ce6a();
        func_0x00019a90(0x31dd);
        func_0x0001cf0e();
        func_0x00019e32(0xf,0x17);
        *(undefined2 *)0x5356 = 0x113;
        iVar7 = 0;
        do {
          uVar2 = func_0x00019d78();
          local_10 = func_0x0001a272(uVar2);
          if (local_10 == 0) {
            FUN_1040_2090();
          }
          iVar7 = iVar7 + 1;
        } while ((iVar7 < 200) && (local_10 == 0));
        *(undefined2 *)0x5356 = uVar1;
        if (local_10 == 0xd) {
LAB_1040_0de2:
          local_10 = *(byte *)(iVar4 + 0x3270);
        }
        else {
          if (local_10 < 0xe) {
            if (local_10 == 0) {
              local_10 = 0x52;
              goto LAB_1040_0dce;
            }
            if (local_10 == 1) {
LAB_1040_0dc4:
              iVar4 = iVar4 + -1;
              iVar7 = iVar4;
              if (iVar4 < 0) {
                iVar4 = 5;
                iVar7 = iVar4;
              }
            }
            else {
              if (local_10 != 2) {
                if (local_10 == 3) goto LAB_1040_0dc4;
                if (local_10 != 4) goto LAB_1000_1227;
              }
              iVar4 = iVar4 + 1;
              iVar7 = iVar4;
              if (5 < iVar4) {
                iVar4 = 0;
                iVar7 = iVar4;
              }
            }
          }
          else if (local_10 == 0x43) {
            iVar7 = 1;
          }
          else if (local_10 < 0x44) {
            if (local_10 == 0x20) goto LAB_1040_0de2;
            if (local_10 != 0x41) {
LAB_1000_1227:
              local_10 = 0;
              goto LAB_1040_0dce;
            }
            iVar7 = 4;
          }
          else if (local_10 == 0x4a) {
            iVar7 = 0;
          }
          else if (local_10 == 0x52) {
            iVar7 = 5;
          }
          else if (local_10 == 0x54) {
            iVar7 = 2;
          }
          else {
            if (local_10 != 0x55) goto LAB_1000_1227;
            iVar7 = 3;
          }
          FUN_1040_06bc(iVar7);
        }
LAB_1040_0dce:
      } while (local_10 < 0x21);
    }
    if (local_10 == 0x41) {
      if (*(char *)0x5893 != '@') {
        func_0x0001926e();
        *(undefined *)0x5893 = 0x40;
      }
      FUN_1040_072e();
      goto LAB_1040_0cd0;
    }
    if (local_10 == 0x43) {
      func_0x0001ff0e();
LAB_1040_0fab:
      func_0x00019e62(0x18,0x27,0,0,0);
      func_0x00019dd4(0);
      func_0x000198fa(0xff);
      func_0x00018e62(1);
      func_0x000198fa(0xff);
      FUN_1040_05b0(0);
      FUN_1040_0010();
      func_0x00018e62(0);
    }
    else if (local_10 == 0x4a) {
      func_0x0001e5be();
      func_0x0001b0d6(0);
      func_0x00019dd4(2);
      func_0x00019e32(0xc,0);
      if (*(char *)0x5893 == '@') {
        do {
          iVar4 = func_0x00019234(*(undefined2 *)0x25f0);
        } while (iVar4 == 0);
        *(undefined *)0x5893 = 0x41;
      }
      func_0x0001a75e(3);
      func_0x0001a7ae(0,0x1060,0x55a6,0x31e6);
      if (*(char *)0x55a8 != '\0') {
        func_0x0001a7ae(0,0x200,0xb21e,0x323f);
        func_0x0001a75e(1);
        func_0x0001a818(0x100,0xb21e,0x3249);
        func_0x0001a818(0x100,0xb31e,0x3252);
        if ((*(char *)0x5893 == '\0') && (*(char *)0x5895 != '\0')) {
          func_0x0001a75e(5);
          do {
            iVar4 = func_0x000198b4(0x325c);
          } while (iVar4 == 0);
          func_0x0001a818(0x100,0xb31e,0x3266);
        }
        func_0x0001b0d6(0xffff);
        *(undefined2 *)0x52be = 8;
        return;
      }
      func_0x00019a90(0x31f0);
      func_0x00019a90(0x3203);
      func_0x00019a90(0x321e);
      func_0x0001a01a(0);
      *(undefined *)0xa9cb = 0xff;
      func_0x0001a75e(0);
      func_0x00019dd4(0);
      func_0x000198fa(0xff);
      func_0x00018e62(1);
      func_0x000198fa(0xff);
      func_0x00018e62(0);
      FUN_1040_05b0(0);
      local_a = 0;
    }
    else if (local_10 == 0x52) {
      func_0x0001ff1a();
    }
    else {
      if (local_10 == 0x54) {
        func_0x000198fa(0xff);
        FUN_1040_132a();
        goto LAB_1040_0fab;
      }
      if (local_10 == 0x55) {
        FUN_1040_014e();
        FUN_1040_05b0(0);
      }
    }
  } while( true );
}



undefined2 __cdecl16near FUN_1040_1016(void)

{
  bool bVar1;
  undefined uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  bVar1 = false;
  *(undefined *)0xa9be = 1;
  *(undefined *)0xa9bd = 4;
  uVar2 = func_0x000198e6();
  *(undefined *)0xa9cc = uVar2;
  func_0x0001a7ae(8,0x28,0xbc88,0x3278);
  if (((((0x46 < *(uint *)0xbc8e) || (0x46 < *(uint *)0xbc90)) || (0x46 < *(uint *)0xbc92)) ||
      ((9999 < *(uint *)0xbc8c || (9999 < *(uint *)0xbc88)))) ||
     ((9999 < *(uint *)0xbc8a || (7 < *(byte *)0xbcad)))) {
    bVar1 = true;
  }
  iVar5 = 0;
  do {
    if ((*(char *)(iVar5 + -0x4364) != '\0') && (*(byte *)(iVar5 + -0x4364) < 0x20)) {
      bVar1 = true;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  if (bVar1) {
    func_0x000198fa(0xff);
    func_0x000198fa(0xfc);
    func_0x00019e32(5,0);
    func_0x00019a90(0x3282);
    func_0x00019a90(0x32b4);
    func_0x00019a90(0x32d4);
    func_0x000198fa(0xfb);
    func_0x0001a01a(0);
    uVar3 = 1;
  }
  else {
    iVar5 = 0;
    do {
      if (*(char *)(iVar5 + -0x4364) == '\0') break;
      *(undefined *)(iVar5 + 0x55a8) = *(undefined *)(iVar5 + -0x4364);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    *(undefined *)(iVar5 + 0x55a8) = 0;
    if (*(char *)0xbcac == '\v') {
      *(undefined *)0x55b1 = 0xb;
    }
    else {
      *(undefined *)0x55b1 = 0xc;
    }
    uVar4 = (uint)*(byte *)0xbcad;
    if (uVar4 < 8) {
                    // WARNING: Could not emulate address calculation at 0x0001156b
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(uVar4 * 2 + -0x6c80))();
      return uVar3;
    }
    *(undefined *)0x55b3 = 0x47;
    *(undefined *)0x55b4 = *(undefined *)0xbc8e;
    *(undefined *)0x55b5 = *(undefined *)0xbc90;
    *(undefined *)0x55b6 = *(undefined *)0xbc92;
    *(undefined *)0x55b7 = *(undefined *)0xbc94;
    *(undefined2 *)0x55b8 = *(undefined2 *)0xbc88;
    *(undefined2 *)0x55ba = *(undefined2 *)0xbc8a;
    *(undefined2 *)0x55bc = *(undefined2 *)0xbc8c;
    *(undefined *)0x55be = (char)((ulong)*(uint *)0xbc8a / 100);
    func_0x0001a7ae(0x140,0xb6,0xbb1c,0x32f9);
    if ((((*(int *)0xbb22 == 0) && (*(int *)0xbb24 == 0)) && (*(int *)0xbb26 == 0)) &&
       (((*(int *)0xbb28 == 0 && (*(int *)0xbb2a == 0)) &&
        ((*(int *)0xbb2c == 0 && ((*(int *)0xbb2e == 0 && (*(int *)0xbb30 == 0)))))))) {
      *(undefined2 *)0x3304 = 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



void __cdecl16near FUN_1040_1278(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(byte *)0x55b2 - 0x42;
  if (uVar1 < 0x13) {
                    // WARNING: Could not emulate address calculation at 0x00011688
                    // WARNING: Treating indirect jump as call
    (**(code **)(uVar1 * 2 + -0x6b7e))();
    return;
  }
  return;
}



int FUN_1040_12ea(int param_1)

{
  uint uVar1;
  
  if (9 < param_1) {
    if (param_1 < 0x1e) {
      param_1 = (param_1 + -9) / 2 + 10;
    }
    else {
      uVar1 = (int)(param_1 - 0x1eU) >> 0xf;
      param_1 = (((int)((param_1 - 0x1eU ^ uVar1) - uVar1) >> 2 ^ uVar1) - uVar1) + 0x14;
    }
  }
  return param_1;
}



void __cdecl16near FUN_1040_132a(void)

{
  char *pcVar1;
  undefined uVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined uVar7;
  int iVar8;
  undefined2 uVar9;
  char unaff_SI;
  undefined *puVar10;
  undefined2 unaff_DS;
  char local_12;
  
  cVar4 = *(char *)0x5893;
  while (*(char *)0x5893 = cVar4, cVar4 == 'B') {
    cVar4 = 'A';
  }
  uVar2 = *(undefined *)0xa9c8;
  *(undefined *)0xa9cb = uVar2;
  *(undefined *)0xa9cc = uVar2;
  func_0x0001a7ae(0,0x1060,0x55a6,0x3345);
  func_0x0001a7ae(0,0x100,0xb31e,0x334e);
  func_0x00019e62(0x18,0x27,0,0,0);
  func_0x00019dd4(0);
  func_0x000198fa(0xff);
  local_12 = *(char *)0xa9c8;
  while (iVar8 = func_0x0001a0ec(local_12), iVar8 == 0) {
    uVar9 = func_0x0001a01a(0);
    local_12 = '\0';
    func_0x0001a272(uVar9);
    if (local_12 == '\x1b') {
LAB_1000_17fb:
      *(char *)0x5893 = unaff_SI;
      return;
    }
  }
  *(undefined2 *)0x5394 = 0x2322;
  *(undefined2 *)0x5396 = 0;
  iVar8 = FUN_1040_1016();
  unaff_SI = cVar4;
  if (iVar8 != 0) goto LAB_1000_17fb;
  if (*(int *)0x3304 != 0) {
    *(undefined *)0x55b2 = 0x41;
  }
  func_0x000198fa(0xff);
  func_0x00019e32(0xb,0);
  func_0x000198fa(0xfc);
  func_0x00019a90(0x33d9);
  func_0x00019e32(0xc,0);
  func_0x00019a90(0x55a8);
  func_0x000198fa(0xfb);
  func_0x00019e32(0xd,0xc);
  func_0x00019a90(0x33e1);
  func_0x00019c7e(0x20,1,*(undefined *)0x55be);
  if (*(char *)0x55b1 == '\v') {
    uVar9 = 0x33ea;
  }
  else {
    uVar9 = 0x33f1;
  }
  func_0x00019a90(uVar9);
  FUN_1040_1278();
  func_0x00019e32(0xf,0x11);
  func_0x00019a90(0x33fa);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b4);
  func_0x00019e32(0x10,0x11);
  func_0x00019a90(0x3401);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b5);
  func_0x00019e32(0x11,0x11);
  func_0x00019a90(0x3408);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b6);
  func_0x00019e32(0x14,10);
  func_0x00019a90(0x55a8);
  func_0x00019a90(0x340f);
  if (*(int *)0x3304 == 0) {
    uVar9 = 0x341f;
  }
  else {
    uVar9 = 0x3414;
  }
  func_0x00019a90(uVar9);
  func_0x0001a01a(0);
  func_0x000198fa(0xff);
  FUN_1040_2024();
  iVar8 = 0;
  do {
    FUN_1040_1e22(iVar8);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  func_0x00019dd4(0);
  func_0x00019e32(3,0);
  func_0x000198fa(0xfc);
  func_0x00019a90(0x55a8);
  func_0x000198fa(0xfb);
  func_0x00019e32(5,10);
  if (*(char *)0x55b1 == '\v') {
    uVar9 = 0x342d;
  }
  else {
    uVar9 = 0x3432;
  }
  func_0x00019a90(uVar9);
  func_0x00019e32(6,10);
  if (*(int *)0x3304 == 0) {
    FUN_1040_1278();
  }
  else {
    func_0x00019a90(0x3439);
  }
  func_0x00019e32(8,10);
  func_0x00019c7e(0x20,1,*(undefined2 *)0x55bc);
  func_0x00019e32(9,10);
  func_0x00019c7e(0x20,1,*(undefined *)0x55be);
  func_0x00019e32(0xb,10);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b4);
  func_0x00019e32(0xc,10);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b5);
  func_0x00019e32(0xd,10);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b6);
  func_0x00019e32(0xf,0);
  func_0x000198fa(0xfc);
  if (*(int *)0x3304 == 0) {
    uVar9 = 0x3447;
  }
  else {
    uVar9 = 0x3440;
  }
  func_0x00019a90(uVar9);
  func_0x000198fa(0xfb);
  func_0x00019e32(2,7);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3452);
  func_0x00019dd4(1);
  func_0x00019e32(2,7);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3458);
  func_0x000198fa(0xfd);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x00019e32(0,10);
  func_0x00019a90(0x345e);
  do {
    uVar9 = func_0x0001a01a(0);
    cVar5 = func_0x0001a272(uVar9);
    if (cVar5 == 'Y') break;
  } while (cVar5 != 'N');
  func_0x000198fa(0xff);
  if (cVar5 == 'N') {
    do {
      func_0x00019e32(0,1);
      func_0x00019a90(0x346e);
      func_0x0001a078(8,0x55a8);
    } while (*(char *)0x55a8 == '\0');
  }
  func_0x00019dd4(1);
  func_0x00019e32(3,0);
  func_0x000198fa(0xfc);
  func_0x00019a90(0x55a8);
  func_0x000198fa(0xfb);
  func_0x00019e32(2,7);
  func_0x00019a90(0x347f);
  func_0x00019e32(5,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3485);
  func_0x000198fa(0xfd);
  func_0x00019dd4(0);
  func_0x00019e32(2,7);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x348a);
  func_0x00019e32(5,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3490);
  func_0x000198fa(0xfd);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x000198fa(0xfc);
  func_0x00019a90(0x3495);
  func_0x000198fa(0xfb);
  do {
    uVar9 = func_0x0001a01a(0);
    cVar5 = func_0x0001a272(uVar9);
    if (cVar5 == 'Y') break;
  } while (cVar5 != 'N');
  func_0x00019dd4(1);
  func_0x00019e32(5,10);
  if (((cVar5 == 'Y') && (*(char *)0x55b1 == '\v')) || ((cVar5 == 'N' && (*(char *)0x55b1 == '\f')))
     ) {
    func_0x00019a90(0x34a4);
    *(undefined *)0x55b1 = 0xb;
  }
  else {
    func_0x00019a90(0x34a9);
    *(undefined *)0x55b1 = 0xc;
  }
  func_0x00019e32(5,5);
  func_0x00019a90(0x34b0);
  func_0x00019e32(6,3);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x34b5);
  func_0x000198fa(0xfd);
  func_0x00019e32(6,10);
  if (*(int *)0x3304 == 0) {
    FUN_1040_1278();
  }
  else {
    func_0x00019a90(0x34bc);
  }
  func_0x00019dd4(0);
  func_0x00019e32(5,5);
  func_0x00019a90(0x34c3);
  func_0x00019e32(6,3);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x34c8);
  func_0x000198fa(0xfd);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x00019e32(0,2);
  if (*(int *)0x3304 == 0) {
    uVar9 = 0x34e7;
  }
  else {
    uVar9 = 0x34cf;
  }
  func_0x00019a90(uVar9);
  func_0x0001a01a(0);
  func_0x00019dd4(0);
  func_0x00019e32(6,3);
  func_0x00019a90(0x34fc);
  func_0x00019e32(8,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3503);
  func_0x000198fa(0xfd);
  func_0x00019dd4(1);
  func_0x00019e32(6,3);
  func_0x00019a90(0x3508);
  func_0x00019e32(8,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x350f);
  func_0x000198fa(0xfd);
  func_0x00019e32(8,10);
  iVar8 = *(int *)0x55bc / 10;
  *(int *)0x55bc = iVar8;
  func_0x00019c7e(0x20,1,iVar8);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x000198fa(0xfc);
  func_0x00019a90(0x3514);
  func_0x000198fa(0xfb);
  func_0x0001a01a(0);
  func_0x00019dd4(0);
  func_0x00019e32(8,5);
  func_0x00019a90(0x3532);
  func_0x00019e32(9,3);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3537);
  func_0x000198fa(0xfd);
  func_0x00019dd4(1);
  func_0x00019e32(8,5);
  func_0x00019a90(0x353e);
  func_0x00019e32(9,3);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3543);
  func_0x000198fa(0xfd);
  func_0x00019e32(9,10);
  *(undefined *)0x55be = 1;
  for (iVar8 = *(int *)0x55bc / 100; 0 < iVar8; iVar8 = iVar8 >> 1) {
    pcVar1 = (char *)0x55be;
    *pcVar1 = *pcVar1 + '\x01';
  }
  iVar8 = (uint)*(byte *)0x55be * 0x1e;
  *(int *)0x55ba = iVar8;
  *(int *)0x55b8 = iVar8;
  func_0x00019c7e(0x20,1,*(undefined *)0x55be);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x000198fa(0xfc);
  func_0x00019a90(0x354a);
  func_0x000198fa(0xfb);
  func_0x0001a01a(0);
  func_0x00019dd4(0);
  func_0x00019e32(9,3);
  func_0x00019a90(0x3563);
  func_0x00019e32(0xb,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x356a);
  func_0x000198fa(0xfd);
  func_0x00019dd4(1);
  func_0x00019e32(9,3);
  func_0x00019a90(0x356f);
  func_0x00019e32(0xb,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x3576);
  func_0x000198fa(0xfd);
  func_0x00019e32(0xb,10);
  uVar2 = *(undefined *)0x55b4;
  bVar6 = FUN_1040_12ea(uVar2);
  *(byte *)0x55b4 = bVar6;
  if (bVar6 < 0x14) {
    *(undefined *)0x55b4 = 0x14;
  }
  func_0x00019c7e(0x20,1,*(undefined *)0x55b4);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x00019e32(0,1);
  func_0x00019a90(0x357b);
  func_0x00019c7e(0x20,1,uVar2);
  func_0x00019a90(0x358a);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b4);
  func_0x00019a90(0x3595);
  func_0x0001a01a(0);
  func_0x00019dd4(0);
  func_0x00019e32(0xb,5);
  func_0x00019a90(0x359a);
  func_0x00019e32(0xc,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x359f);
  func_0x000198fa(0xfd);
  func_0x00019dd4(1);
  func_0x00019e32(0xb,5);
  func_0x00019a90(0x35a4);
  func_0x00019e32(0xc,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x35a9);
  func_0x000198fa(0xfd);
  func_0x00019e32(0xc,10);
  uVar2 = *(undefined *)0x55b5;
  uVar7 = FUN_1040_12ea(uVar2);
  *(undefined *)0x55b5 = uVar7;
  func_0x00019c7e(0x20,1,uVar7);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x00019e32(0,1);
  func_0x00019a90(0x35ae);
  func_0x00019c7e(0x20,1,uVar2);
  func_0x00019a90(0x35be);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b5);
  func_0x00019a90(0x35c9);
  func_0x0001a01a(0);
  func_0x00019dd4(0);
  func_0x00019e32(0xc,5);
  func_0x00019a90(0x35ce);
  func_0x00019e32(0xd,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x35d3);
  func_0x000198fa(0xfd);
  func_0x00019dd4(1);
  func_0x00019e32(0xc,5);
  func_0x00019a90(0x35d8);
  func_0x00019e32(0xd,5);
  func_0x000198fa(0xfd);
  func_0x00019a90(0x35dd);
  func_0x000198fa(0xfd);
  func_0x00019e32(0xd,10);
  uVar2 = *(undefined *)0x55b6;
  uVar7 = FUN_1040_12ea(uVar2);
  *(undefined *)0x55b6 = uVar7;
  *(undefined *)0x55b7 = uVar7;
  func_0x00019c7e(0x20,1,uVar7);
  func_0x00019dd4(2);
  func_0x000198fa(0xff);
  func_0x00019e32(0,1);
  func_0x00019a90(0x35e2);
  func_0x00019c7e(0x20,1,uVar2);
  func_0x00019a90(0x35f2);
  func_0x00019c7e(0x20,1,*(undefined *)0x55b6);
  func_0x00019a90(0x35fd);
  func_0x0001a01a(0);
  func_0x00019dd4(0);
  func_0x00019e32(0xd,5);
  func_0x00019a90(0x3602);
  func_0x00019dd4(1);
  func_0x00019e32(0xd,5);
  func_0x00019a90(0x3607);
  func_0x00019e32(0xf,0);
  func_0x000198fa(0xfc);
  if (*(int *)0x3304 == 0) {
    uVar9 = 0x3613;
  }
  else {
    uVar9 = 0x360c;
  }
  func_0x00019a90(uVar9);
  func_0x000198fa(0xfb);
  func_0x00019dd4(2);
  func_0x00019e62(0x16,0x25,0x15,2,2);
  func_0x000198fa(0xff);
  func_0x0001a75e(3);
  func_0x00019a90(0x361e);
  puVar10 = (undefined *)0xb21e;
  for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar3 = 0;
  }
  func_0x0001a818(0x200,0xb21e,0x3641);
  func_0x0001a818(0x1060,0x55a6,0x364b);
  func_0x0001a75e(0);
  *(char *)0x5893 = cVar4;
  *(undefined *)0xa9be = 0;
  return;
}



void FUN_1040_1e22(int param_1)

{
  undefined2 unaff_DS;
  
  func_0x00019dd4(0);
  param_1 = param_1 * 2;
  func_0x00019e32(*(undefined2 *)(param_1 + 0x3656),3);
  func_0x00019a90(*(undefined2 *)(param_1 + 0x3666));
  func_0x00019dd4(1);
  func_0x00019e32(*(undefined2 *)(param_1 + 0x3656),3);
  func_0x00019a90(*(undefined2 *)(param_1 + 0x3666));
  return;
}



void __cdecl16near FUN_1040_1e62(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00019f0a(*(undefined2 *)0x13b2);
  func_0x00019e32(0x13,0);
  func_0x000198fa(0x7b);
  iVar2 = 0x26;
  do {
    func_0x000198fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000198fa(0x7c);
  iVar2 = 3;
  do {
    func_0x000198fa(0x7f);
    uVar1 = func_0x00019f2e(0x27);
    func_0x00019e32(uVar1);
    func_0x000198fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000198fa(0x7d);
  iVar2 = 0x26;
  do {
    func_0x000198fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000198fa(0x7e);
  func_0x00018cb0(*(undefined2 *)0x13b0);
  func_0x00018d50(0x9f,0x138,0x9f,7);
  func_0x000191d0(0xb8,0x138);
  func_0x000191d0(0xb8,7);
  func_0x000191d0(0x9f,7);
  func_0x00019f0a(*(undefined2 *)0x13b0);
  return;
}



void FUN_1040_1f26(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00018cb0(*(undefined2 *)0x13b2);
  func_0x00018ce6(0x8f,param_1 + 6,0,param_1);
  iVar1 = param_1 + 0x8f;
  func_0x00018ce6(0x89,param_1 + 0x97,0,iVar1);
  iVar2 = param_1 + 7;
  func_0x00018ce6(0x8f,param_1 + 0x96,0x89,iVar2);
  func_0x00019f0a(*(undefined2 *)0x13b2);
  func_0x00019e32(0,0);
  func_0x00019a90(0x3676);
  func_0x0001ce6a();
  func_0x00019f0a(*(undefined2 *)0x13b0);
  func_0x00019a90(0x6d3a);
  func_0x00019f0a(*(undefined2 *)0x13b2);
  func_0x0001cf0e();
  func_0x00019a90(0x367a);
  func_0x000198fa(0x7c);
  func_0x00019e32(0x11,0);
  func_0x000198fa(0x7d);
  func_0x00019e32(0x11,0x12);
  func_0x000198fa(0x7e);
  func_0x00018cb0(*(undefined2 *)0x13b0);
  func_0x00018d50(7,iVar2,7,param_1 + 0x18);
  func_0x000191d0(0x88,iVar2);
  func_0x000191d0(0x88,iVar1);
  func_0x000191d0(7,iVar1);
  func_0x000191d0(7,param_1 + 0x80);
  func_0x00019f0a(*(undefined2 *)0x13b0);
  return;
}



void __cdecl16near FUN_1040_2024(void)

{
  FUN_1040_1e62();
  func_0x00019e62(0x12,0x13,0,0,0);
  func_0x00019e62(0x12,0x27,0,0x15,1);
  func_0x00019e62(0x15,0x25,0x15,3,2);
  func_0x00019dd4(0);
  FUN_1040_1f26(0);
  func_0x00019dd4(1);
  FUN_1040_1f26(0xa8);
  func_0x00019e32(0,0xc);
  func_0x000198fa(0x20);
  return;
}



void __cdecl16near FUN_1040_2090(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  func_0x0001a33a(1);
  *(undefined2 *)0x5350 = 0x69;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void __cdecl16near FUN_1040_20ae(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x69;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}


