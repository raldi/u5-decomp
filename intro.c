typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near FUN_0000_0010(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00008a62(1);
  func_0x000094fa(0xff);
  iVar1 = 0;
  iVar2 = 0;
  do {
    func_0x00008b8c(0,iVar2,0x10,iVar1 + 1,*(undefined2 *)DATA_OVL(0x1650));
    iVar2 = iVar2 + 0x32;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



undefined2 FUN_0000_0050(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  int local_e;
  uint local_c;
  
  local_e = *(int *)MEM(0x13b0);
  func_0x000088b0(local_e);
  uVar1 = *(undefined2 *)MEM(0x5356);
  *(undefined2 *)MEM(0x5356) = MEM(0x0113);
  for (uVar4 = *(uint *)DATA_OVL(0x164e); (int)uVar4 < MEM(0x1060); uVar4 = uVar4 + 1) {
    if (local_e != 0) {
      func_0x00008aa4(param_1,param_2);
    }
    local_e = *(int *)MEM(0x13b0);
    local_c = *(byte *)(uVar4 + SAVED_GAM(0x0000)) & 7;
    if (2 < local_c) {
      local_e = 0;
    }
    if ((*(byte *)(uVar4 + SAVED_GAM(0x0000)) & 8) != 0) {
      local_c = -local_c;
    }
    uVar2 = (*(byte *)(uVar4 + SAVED_GAM(0x0000)) & 0x70) >> 4;
    if (2 < uVar2) {
      local_e = 0;
    }
    if ((*(byte *)(uVar4 + SAVED_GAM(0x0000)) & 0x80) != 0) {
      uVar2 = -uVar2;
    }
    param_2 = param_2 + uVar2;
    param_1 = param_1 + local_c;
    iVar3 = func_0x00009b9e();
    if (iVar3 != 0) {
      *(undefined2 *)MEM(0x5356) = uVar1;
      return 0;
    }
    if ((uVar4 & 0x1f) == 0) {
      func_0x00009f3a(1);
    }
    if (*(char *)(uVar4 + SAVED_GAM(0x0000)) == '\0') break;
  }
  *(int *)DATA_OVL(0x164e) = uVar4 + 1;
  *(undefined2 *)MEM(0x5356) = uVar1;
  return *(undefined2 *)DATA_OVL(0x164e);
}



void __cdecl16near FUN_0000_014e(void)

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
  
  if (*(char *)SAVED_GAM(0x02ed) != '@') {
    func_0x00008e6e();
  }
  *(undefined *)SAVED_GAM(0x02ed) = 0x40;
  do {
    iVar2 = func_0x00008dee(*(undefined2 *)MEM(0x25ea));
  } while (iVar2 == 0);
  func_0x0000fb26(MEM(0x2f30),iVar2);
  func_0x00008a62(1);
  func_0x000094fa(0xff);
  func_0x00008a62(0);
  func_0x000094fa(0xff);
  func_0x00009a32(10,0);
  do {
    iVar3 = func_0x000089ee(*(undefined2 *)MEM(0x260c));
  } while (iVar3 == 0);
  do {
    local_6 = func_0x000089ee(*(undefined2 *)MEM(0x260e));
  } while (local_6 == 0);
  local_8 = 0;
  local_a = 0;
  do {
    if (0x14 < local_a) {
      func_0x00008a24(local_6);
      func_0x00008a24(iVar3);
      func_0x00008e1c(iVar2);
      func_0x00009956();
      do {
        iVar2 = func_0x00009b9e();
      } while (iVar2 == 0);
      func_0x00008a62(1);
      func_0x000094fa(0xff);
      func_0x00008a62(0);
      *(undefined *)MEM(0xa9be) = 0;
      func_0x0000a35e(0);
      return;
    }
    if (*(byte *)(local_a + DATA_OVL(0x30be)) != local_8) {
      func_0x00008a24(local_6);
      local_8 = (uint)*(byte *)(local_a + DATA_OVL(0x30be));
      do {
        local_6 = func_0x000089ee(*(undefined2 *)(local_8 * 2 + MEM(0x260e)));
      } while (local_6 == 0);
    }
    *(undefined *)MEM(0xa9be) = 2;
    func_0x00008a62(1);
    func_0x000094fa(0xff);
    if (*(char *)(local_a + DATA_OVL(0x3100)) == '\x01') {
      if (local_a == 0) {
        func_0x00008b8c(0,0x1e,0xe0,0,iVar3);
        uVar8 = 1;
        uVar7 = 0xa8;
        uVar5 = 0x3a;
      }
      else if (local_a == 7) {
        func_0x00008b8c(0,0x1a,0xe8,0,iVar3);
        uVar8 = 2;
        uVar7 = 200;
        uVar5 = 0x36;
      }
      else {
        if (local_a != 0xe) goto LAB_0000_01f9;
        func_0x00008b8c(0,0,0xb8,0,iVar3);
        uVar8 = 3;
        uVar7 = 0xf8;
        uVar5 = 0;
      }
      func_0x00008b8c(0,uVar5,uVar7,uVar8,iVar3);
    }
LAB_0000_01f9:
    uVar4 = (uint)*(byte *)(local_a + DATA_OVL(0x30ea));
    uVar1 = *(undefined *)(local_a + DATA_OVL(0x30d4));
    func_0x00008b8c(0,uVar4,uVar1,*(undefined *)(local_a + DATA_OVL(0x30a8)),local_6);
    if (3 < *(byte *)(local_a + DATA_OVL(0x3100))) {
      func_0x00008b8c(0,uVar4 + 0x37,uVar1,(uint)*(byte *)(local_a + DATA_OVL(0x3100)) * 2 + -5,local_6);
    }
    *(uint *)MEM(0x5146) = (uint)*(byte *)(local_a * 2 + MEM(0x2f98));
    *(uint *)MEM(0x5148) = (uint)*(byte *)(local_a * 2 + MEM(0x2f99));
    *(undefined2 *)MEM(0x514c) = *(undefined2 *)(local_a * 4 + MEM(0x2fc2));
    *(undefined2 *)MEM(0x514e) = *(undefined2 *)(local_a * 4 + MEM(0x2fc4));
    *(uint *)MEM(0x5150) = (uint)*(byte *)(local_a + DATA_OVL(0x3050));
    *(uint *)MEM(0x5152) = (uint)*(byte *)(local_a + DATA_OVL(0x3066));
    uVar4 = (uint)*(byte *)(local_a + DATA_OVL(0x307c));
    *(uint *)MEM(0x5156) = uVar4;
    *(uint *)MEM(0x5158) = (uint)*(byte *)(local_a + DATA_OVL(0x3092));
    if (*(char *)(local_a + DATA_OVL(0x3100)) == '\x03') {
      func_0x00008b8c(0,0x27,0x60,3,local_6);
      iVar6 = iVar2;
      func_0x0000fb26(MEM(0x2f31),iVar2);
      *(uint *)MEM(0x5156) = uVar4;
      *(undefined2 *)MEM(0x5158) = 0xb4;
      uVar5 = MEM(0x2f5f);
    }
    else {
      iVar6 = MEM(0x0324);
      func_0x0000a3ae(*(undefined2 *)(local_a * 2 + DATA_OVL(0x3026)),2000,DATA_OVL(0x0d54),MEM(0x2f8d));
      uVar5 = DATA_OVL(0x0d54);
    }
    func_0x0000fb26(uVar5,iVar2,iVar6);
    if (local_a != 0) {
      func_0x00009956();
      do {
        iVar6 = func_0x00009b9e();
      } while (iVar6 == 0);
    }
    func_0x00008dae(0,1);
    if (*(char *)(local_a + DATA_OVL(0x3100)) == '\x02') {
      func_0x00008a62(1);
      func_0x00008b8c(0,0x56,0x28,2,local_6);
      func_0x00008d86(0x78,0x4b,0x56,0x28);
    }
    local_a = local_a + 1;
  } while( true );
}



void FUN_0000_043e(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar1 = func_0x00009fac(param_1);
  iVar1 = iVar1 / 2 + -0x12;
  iVar2 = -iVar1;
  iVar3 = func_0x00009fac(param_1);
  func_0x000088b0(*(undefined2 *)MEM(0x13b2));
  iVar1 = iVar1 * -8;
  func_0x000088e6(199,iVar1,0xc1,8);
  iVar3 = (iVar3 + iVar2 + 2) * 8;
  func_0x000088e6(199,MEM(0x0137),0xc1,iVar3);
  func_0x000088b0(*(undefined2 *)MEM(0x13b0));
  func_0x00008950(0xc0,iVar1,0xc0,8);
  func_0x00008950(0xc0,MEM(0x0137),0xc0,iVar3);
  func_0x00009a32(0x18,iVar2);
  func_0x0000ca6a();
  func_0x00009690(param_1);
  func_0x0000cb0e();
  return;
}



void __cdecl16near FUN_0000_04e0(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00009b0a(*(undefined2 *)MEM(0x13b2));
  func_0x00009a32(0xf,0);
  func_0x000094fa(0x7b);
  iVar2 = 0x26;
  do {
    func_0x000094fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000094fa(0x7c);
  iVar2 = 8;
  do {
    func_0x000094fa(0x7f);
    uVar1 = func_0x00009b2e(0x27);
    func_0x00009a32(uVar1);
    func_0x000094fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000094fa(0x7d);
  iVar2 = 0x26;
  do {
    func_0x000094fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)MEM(0x538e) = 0;
  func_0x000094fa(0x7e);
  *(undefined2 *)MEM(0x538e) = 1;
  func_0x000088b0(*(undefined2 *)MEM(0x13b0));
  func_0x00008950(0x7f,MEM(0x0138),0x7f,7);
  func_0x00008dd0(0xc0,MEM(0x0138));
  func_0x00008dd0(0xc0,7);
  func_0x00008dd0(0x7f,7);
  func_0x00009b0a(*(undefined2 *)MEM(0x13b0));
  return;
}



void FUN_0000_05b0(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined *)MEM(0xa9be) = 2;
  if (*(char *)SAVED_GAM(0x02ed) != '@') {
    func_0x00008e6e();
    *(undefined *)SAVED_GAM(0x02ed) = 0x40;
  }
  do {
    iVar1 = func_0x000089ee(*(undefined2 *)MEM(0x261e));
    *(int *)DATA_OVL(0x1650) = iVar1;
  } while (iVar1 == 0);
  func_0x00008a62(0);
  func_0x000094fa(0xff);
  func_0x00008a62(1);
  func_0x00008b8c(0,0,0,0,*(undefined2 *)DATA_OVL(0x1650));
  if (param_1 != 0) {
    func_0x00008d86(100,MEM(0x013f),0,0);
    iVar1 = func_0x00009b9e();
    param_1 = (uint)(iVar1 == 0);
  }
  if (param_1 == 0) {
    func_0x0000890e(100,MEM(0x013f),0,0,0,1);
  }
  FUN_0000_0010();
  func_0x00008a24(*(undefined2 *)DATA_OVL(0x1650));
  if (param_1 != 0) {
    do {
      iVar1 = func_0x00008dee(DATA_OVL(0x3115));
    } while (iVar1 == 0);
    FUN_0000_20ae(iVar1);
    func_0x00008e1c(iVar1);
  }
  func_0x00008a62(0);
  FUN_0000_2090();
  *(undefined *)MEM(0xa9be) = 0;
  FUN_0000_04e0();
  return;
}



void FUN_0000_0676(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  if (param_3 == param_4) {
    func_0x000094fa(0xfd);
  }
  func_0x00009a32(param_3 + 0x11,param_2);
  func_0x000094fa(0x20);
  func_0x00009690(param_1);
  func_0x000094fa(0x20);
  if (param_3 == param_4) {
    func_0x000094fa(0xfd);
  }
  return;
}



void FUN_0000_06bc(undefined2 param_1)

{
  FUN_0000_0676(DATA_OVL(0x311c),0xc,0,param_1);
  FUN_0000_0676(DATA_OVL(0x312b),9,1,param_1);
  FUN_0000_0676(DATA_OVL(0x3140),8,2,param_1);
  FUN_0000_0676(DATA_OVL(0x3158),9,3,param_1);
  FUN_0000_0676(DATA_OVL(0x316e),0xb,4,param_1);
  FUN_0000_0676(DATA_OVL(0x317f),10,5,param_1);
  return;
}



void __cdecl16near FUN_0000_072e(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  do {
    iVar1 = func_0x000089ee(*(undefined2 *)MEM(0x2620));
  } while (iVar1 == 0);
  func_0x00008a62(1);
  func_0x00008b8c(0,0x3f,0x10,1,iVar1);
  func_0x00008a62(0);
  iVar2 = 199;
  do {
    func_0x00008b8c(0,iVar2,0x90,0,iVar1);
    func_0x00008b8c(0,iVar2,0xa0,2,iVar1);
    iVar2 = iVar2 + -1;
  } while (0x3e < iVar2);
  iVar2 = 0;
  do {
    func_0x00008b8c(0,0x3f,0x88 - iVar2,0,iVar1);
    func_0x0000890e(199,0x9f - iVar2,0x3f,0x98 - iVar2,0,1);
    func_0x00008b8c(0,0x3f,iVar2 + 0xa8,2,iVar1);
    func_0x0000890e(199,iVar2 + 0xa7,0x3f,iVar2 + 0xa0,0,1);
    func_0x00009f3a(1);
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0x90);
  do {
    iVar2 = func_0x000089ee(*(undefined2 *)MEM(0x261e));
    *(int *)DATA_OVL(0x1650) = iVar2;
  } while (iVar2 == 0);
  func_0x00008a62(1);
  func_0x000094fa(0xff);
  func_0x00008b8c(0,0x41,0x10,1,*(undefined2 *)DATA_OVL(0x1650));
  func_0x00008a24(*(undefined2 *)DATA_OVL(0x1650));
  FUN_0000_04e0();
  FUN_0000_06bc(4);
  do {
    iVar2 = func_0x00009b9e();
  } while (iVar2 == 0);
  func_0x00008a62(0);
  iVar2 = 0x88;
  do {
    func_0x00008b8c(0,0x3f,0x90 - iVar2,0,iVar1);
    func_0x0000890e(199,0x8f - iVar2,0x3f,0x88 - iVar2,0,1);
    func_0x00008b8c(0,0x3f,iVar2 + 0xa0,2,iVar1);
    func_0x0000890e(199,iVar2 + 0xb7,0x3f,iVar2 + 0xb0,0,1);
    func_0x00009f3a(1);
    iVar2 = iVar2 + -8;
  } while (-1 < iVar2);
  func_0x00008a24(iVar1);
  iVar2 = 0x3f;
  do {
    func_0x00008b8c(0,iVar2 + 1,0x90,0,iVar1);
    func_0x00008b8c(0,iVar2 + 1,0xa0,2,iVar1);
    func_0x0000890e(iVar2,0xaf,iVar2,0x90,0,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 199);
  func_0x0000890e(199,0xaf,199,0x90,0,1);
  FUN_0000_0010();
  func_0x00008a62(0);
  func_0x00009956();
  return;
}



int FUN_0000_094e(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (param_1 <= iVar2) {
      return 0;
    }
    iVar1 = func_0x00009b9e();
    if (iVar1 != 0) break;
    func_0x00009f3a(1);
    iVar2 = iVar2 + 1;
  }
  return iVar1;
}



void __cdecl16near FUN_0000_0986(void)

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
  
  *(undefined *)MEM(0xa9ce) = 1;
  iVar4 = 0;
  do {
    *(undefined *)(iVar4 + DATA_OVL(0x0c54)) = (char)iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < MEM(0x0100));
  func_0x00008c20();
  func_0x00008f98();
  uVar1 = *(undefined2 *)MEM(0x5356);
  if ((*(int *)MEM(0x52c8) == 2) && (*(uint *)MEM(0x5358) < MEM(0x0170))) {
    *(undefined2 *)MEM(0x52f1) = 0;
    *(undefined2 *)MEM(0x52ba) = 1;
    *(undefined2 *)MEM(0x52c8) = 0;
  }
  do {
    iVar4 = func_0x00008cd4();
  } while (iVar4 == 0);
  func_0x000086d2(1);
  if ((*(int *)MEM(0x52c8) == 0) || (*(int *)MEM(0x52c8) == 3)) {
    iVar4 = 0;
    while( true ) {
      iVar7 = iVar4 + 1;
      pcVar5 = *(char **)(iVar4 * 2 + MEM(0x25ea));
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
    *(undefined2 *)MEM(0x13b2) = 1;
    *(undefined2 *)MEM(0x13ae) = 4;
    *(undefined2 *)MEM(0x13b0) = 0xf;
    *(undefined2 *)MEM(0x13b6) = 5;
    *(undefined2 *)MEM(0x13b4) = 2;
    *(undefined2 *)MEM(0x13b8) = 0xe;
    *(undefined2 *)MEM(0x13ba) = 7;
  }
  iVar4 = func_0x00008d6a();
  if (iVar4 == 0) {
    func_0x000086b8();
    func_0x00008134(1);
  }
  if (*(int *)MEM(0x52c8) == 3) {
    do {
      iVar4 = func_0x00009b42(0,DATA_OVL(0x3192));
    } while (iVar4 == 0);
    do {
      iVar4 = func_0x00009b42(1,DATA_OVL(0x319a));
    } while (iVar4 == 0);
  }
  else {
    do {
      iVar4 = func_0x00009b42(0,DATA_OVL(0x31a4));
    } while (iVar4 == 0);
    do {
      iVar4 = func_0x00009b42(1,DATA_OVL(0x31ab));
    } while (iVar4 == 0);
  }
  func_0x00009ade(0);
  uVar9 = 0;
  uVar8 = 0;
  func_0x00009a62(0x18,0x27,0,0,0);
  func_0x000099d4(0);
  uVar2 = func_0x00009b9e();
  iVar4 = func_0x00009e72(uVar2);
  if (iVar4 == 0x4a) {
    func_0x000094fa(0xff);
    func_0x000094fa(0xfc);
    func_0x00009a32(0xb,0);
    func_0x00009690(DATA_OVL(0x31b4));
    func_0x000094fa(0xfb);
    do {
      iVar4 = func_0x00008e34(*(undefined2 *)MEM(0x25f0));
    } while (iVar4 == 0);
    *(undefined *)SAVED_GAM(0x02ed) = 0x41;
    local_a = 0x4a;
  }
  else {
    do {
      iVar4 = func_0x00008dee(*(undefined2 *)MEM(0x25ee));
    } while (iVar4 == 0);
    do {
      iVar7 = func_0x00008dee(*(undefined2 *)MEM(0x25ec));
    } while (iVar7 == 0);
    func_0x0000a3ae(0,MEM(0x1060),SAVED_GAM(0x0000),DATA_OVL(0x31c5),uVar8,uVar9,iVar7);
    iVar3 = func_0x00008bb2(iVar4);
    local_a = (uint)(iVar3 == 0);
    func_0x00008a62(1);
    func_0x000088e6(199,MEM(0x013f),0x8c,0);
    func_0x00008e84(0x8c,0x6c,7,iVar4);
    func_0x0000890e(199,MEM(0x013f),0x8c,0,0,1);
    if (local_a != 0) {
      func_0x00009f3a(0x12);
      iVar3 = FUN_0000_094e(0x14);
      local_a = (uint)(iVar3 == 0);
    }
    if (local_a != 0) {
      func_0x000094fa(0xff);
      func_0x00008e84(0,0x98,8,iVar4);
      func_0x00008dae(0,1);
      iVar3 = FUN_0000_094e(0x14);
      local_a = (uint)(iVar3 == 0);
      if (local_a != 0) {
        func_0x00008a62(0);
        *(undefined2 *)DATA_OVL(0x164e) = 0;
        local_a = 0;
        iVar3 = FUN_0000_0050(0x44,0x2c);
        if (((iVar3 != 0) && (iVar3 = FUN_0000_0050(0x5e,0x40), iVar3 != 0)) &&
           (iVar3 = FUN_0000_0050(0x4e,0x8f), iVar3 != 0)) {
          local_a = FUN_0000_0050(0x69,0xa7);
        }
        func_0x00008a62(1);
      }
      func_0x00008e84(0x42,0x18,0,iVar7);
      func_0x00008dae(0,1);
      func_0x00008e84(0xa0,0x68,9,iVar4);
      func_0x00008dae(0,1);
      if (local_a != 0) {
        iVar3 = FUN_0000_094e(0x14);
        local_a = (uint)(iVar3 == 0);
      }
    }
    func_0x00008e1c(iVar7);
    func_0x00008e1c(iVar4);
    *(undefined *)SAVED_GAM(0x02ed) = 0x40;
    func_0x000094fa(0xff);
    func_0x00008a62(0);
    FUN_0000_05b0(local_a);
    if (local_a != 0) {
      func_0x0000fb1a();
    }
    local_a = 1;
  }
  uVar2 = func_0x00009e96();
  func_0x00009ebe(uVar2);
LAB_0000_0cd0:
  do {
    func_0x00009a62(0x17,0x26,0x10,1,0);
    func_0x000099d4(0);
    func_0x000094fa(0xff);
    func_0x00009a62(0x18,0x27,0,0,0);
    func_0x00009a62(9,0x27,1,0x18,1);
    func_0x00009a62(0x17,0x27,0xb,0x18,2);
    if (local_a == 0x4a) {
      local_10 = 0x4a;
    }
    else {
      iVar4 = 0;
      FUN_0000_043e(DATA_OVL(0x31d1));
      FUN_0000_06bc(0);
      do {
        func_0x00009a32(0xf,0xf);
        func_0x0000ca6a();
        func_0x00009690(DATA_OVL(0x31ed));
        func_0x0000cb0e();
        func_0x00009a32(0xf,0x17);
        *(undefined2 *)MEM(0x5356) = MEM(0x0113);
        iVar7 = 0;
        do {
          uVar2 = func_0x00009978();
          local_10 = func_0x00009e72(uVar2);
          if (local_10 == 0) {
            FUN_0000_2090();
          }
          iVar7 = iVar7 + 1;
        } while ((iVar7 < 200) && (local_10 == 0));
        *(undefined2 *)MEM(0x5356) = uVar1;
        if (local_10 == 0xd) {
LAB_0000_0de2:
          local_10 = *(byte *)(iVar4 + DATA_OVL(0x3280));
        }
        else {
          if (local_10 < 0xe) {
            if (local_10 == 0) {
              local_10 = 0x52;
              goto LAB_0000_0dce;
            }
            if (local_10 == 1) {
LAB_0000_0dc4:
              iVar4 = iVar4 + -1;
              iVar7 = iVar4;
              if (iVar4 < 0) {
                iVar4 = 5;
                iVar7 = iVar4;
              }
            }
            else {
              if (local_10 != 2) {
                if (local_10 == 3) goto LAB_0000_0dc4;
                if (local_10 != 4) goto LAB_0000_0e27;
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
            if (local_10 == 0x20) goto LAB_0000_0de2;
            if (local_10 != 0x41) {
LAB_0000_0e27:
              local_10 = 0;
              goto LAB_0000_0dce;
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
            if (local_10 != 0x55) goto LAB_0000_0e27;
            iVar7 = 3;
          }
          FUN_0000_06bc(iVar7);
        }
LAB_0000_0dce:
      } while (local_10 < 0x21);
    }
    if (local_10 == 0x41) {
      if (*(char *)SAVED_GAM(0x02ed) != '@') {
        func_0x00008e6e();
        *(undefined *)SAVED_GAM(0x02ed) = 0x40;
      }
      FUN_0000_072e();
      goto LAB_0000_0cd0;
    }
    if (local_10 == 0x43) {
      func_0x0000fb0e();
LAB_0000_0fab:
      func_0x00009a62(0x18,0x27,0,0,0);
      func_0x000099d4(0);
      func_0x000094fa(0xff);
      func_0x00008a62(1);
      func_0x000094fa(0xff);
      FUN_0000_05b0(0);
      FUN_0000_0010();
      func_0x00008a62(0);
    }
    else if (local_10 == 0x4a) {
      func_0x0000e1be();
      func_0x0000acd6(0);
      func_0x000099d4(2);
      func_0x00009a32(0xc,0);
      if (*(char *)SAVED_GAM(0x02ed) == '@') {
        do {
          iVar4 = func_0x00008e34(*(undefined2 *)MEM(0x25f0));
        } while (iVar4 == 0);
        *(undefined *)SAVED_GAM(0x02ed) = 0x41;
      }
      func_0x0000a35e(3);
      func_0x0000a3ae(0,MEM(0x1060),SAVED_GAM(0x0000),DATA_OVL(0x31f6));
      if (*(char *)SAVED_GAM(0x0002) != '\0') {
        func_0x0000a3ae(0,MEM(0x0200),DATA_OVL(0x0d54),DATA_OVL(0x324f));
        func_0x0000a35e(1);
        func_0x0000a418(MEM(0x0100),DATA_OVL(0x0d54),DATA_OVL(0x3259));
        func_0x0000a418(MEM(0x0100),DATA_OVL(0x0e54),DATA_OVL(0x3262));
        if ((*(char *)SAVED_GAM(0x02ed) == '\0') && (*(char *)SAVED_GAM(0x02ef) != '\0')) {
          func_0x0000a35e(5);
          do {
            iVar4 = func_0x000094b4(DATA_OVL(0x326c));
          } while (iVar4 == 0);
          func_0x0000a418(MEM(0x0100),DATA_OVL(0x0e54),DATA_OVL(0x3276));
        }
        func_0x0000acd6(MEM(0xffff));
        *(undefined2 *)MEM(0x52be) = 8;
        return;
      }
      func_0x00009690(DATA_OVL(0x3200));
      func_0x00009690(DATA_OVL(0x3213));
      func_0x00009690(DATA_OVL(0x322e));
      func_0x00009c1a(0);
      *(undefined *)MEM(0xa9cb) = 0xff;
      func_0x0000a35e(0);
      func_0x000099d4(0);
      func_0x000094fa(0xff);
      func_0x00008a62(1);
      func_0x000094fa(0xff);
      func_0x00008a62(0);
      FUN_0000_05b0(0);
      local_a = 0;
    }
    else if (local_10 == 0x52) {
      func_0x0000fb1a();
    }
    else {
      if (local_10 == 0x54) {
        func_0x000094fa(0xff);
        FUN_0000_132a();
        goto LAB_0000_0fab;
      }
      if (local_10 == 0x55) {
        FUN_0000_014e();
        FUN_0000_05b0(0);
      }
    }
  } while( true );
}



undefined2 __cdecl16near FUN_0000_1016(void)

{
  bool bVar1;
  undefined uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  bVar1 = false;
  *(undefined *)MEM(0xa9be) = 1;
  *(undefined *)MEM(0xa9bd) = 4;
  uVar2 = func_0x000094e6();
  *(undefined *)MEM(0xa9cc) = uVar2;
  func_0x0000a3ae(8,0x28,DATA_OVL(0x17be),DATA_OVL(0x3288));
  if (((((0x46 < *(uint *)DATA_OVL(0x17c4)) || (0x46 < *(uint *)DATA_OVL(0x17c6))) || (0x46 < *(uint *)DATA_OVL(0x17c8))) ||
      ((9999 < *(uint *)DATA_OVL(0x17c2) || (9999 < *(uint *)DATA_OVL(0x17be))))) ||
     ((9999 < *(uint *)DATA_OVL(0x17c0) || (7 < *(byte *)DATA_OVL(0x17e3))))) {
    bVar1 = true;
  }
  iVar5 = 0;
  do {
    if ((*(char *)(iVar5 + DATA_OVL(0x17d2)) != '\0') && (*(byte *)(iVar5 + DATA_OVL(0x17d2)) < 0x20)) {
      bVar1 = true;
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  if (bVar1) {
    func_0x000094fa(0xff);
    func_0x000094fa(0xfc);
    func_0x00009a32(5,0);
    func_0x00009690(DATA_OVL(0x3292));
    func_0x00009690(DATA_OVL(0x32c4));
    func_0x00009690(DATA_OVL(0x32e4));
    func_0x000094fa(0xfb);
    func_0x00009c1a(0);
    uVar3 = 1;
  }
  else {
    iVar5 = 0;
    do {
      if (*(char *)(iVar5 + DATA_OVL(0x17d2)) == '\0') break;
      *(undefined *)(iVar5 + SAVED_GAM(0x0002)) = *(undefined *)(iVar5 + DATA_OVL(0x17d2));
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    *(undefined *)(iVar5 + SAVED_GAM(0x0002)) = 0;
    if (*(char *)DATA_OVL(0x17e2) == '\v') {
      *(undefined *)SAVED_GAM(0x000b) = 0xb;
    }
    else {
      *(undefined *)SAVED_GAM(0x000b) = 0xc;
    }
    uVar4 = (uint)*(byte *)DATA_OVL(0x17e3);
    if (uVar4 < 8) {
                    // WARNING: Could not emulate address calculation at 0x0000116b
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(uVar4 * 2 + MEM(0x9380)))();
      return uVar3;
    }
    *(undefined *)SAVED_GAM(0x000d) = 0x47;
    *(undefined *)SAVED_GAM(0x000e) = *(undefined *)DATA_OVL(0x17c4);
    *(undefined *)SAVED_GAM(0x000f) = *(undefined *)DATA_OVL(0x17c6);
    *(undefined *)SAVED_GAM(0x0010) = *(undefined *)DATA_OVL(0x17c8);
    *(undefined *)SAVED_GAM(0x0011) = *(undefined *)DATA_OVL(0x17ca);
    *(undefined2 *)SAVED_GAM(0x0012) = *(undefined2 *)DATA_OVL(0x17be);
    *(undefined2 *)SAVED_GAM(0x0014) = *(undefined2 *)DATA_OVL(0x17c0);
    *(undefined2 *)SAVED_GAM(0x0016) = *(undefined2 *)DATA_OVL(0x17c2);
    *(undefined *)SAVED_GAM(0x0018) = (char)((ulong)*(uint *)DATA_OVL(0x17c0) / 100);
    func_0x0000a3ae(MEM(0x0140),0xb6,DATA_OVL(0x1652),DATA_OVL(0x3309));
    if ((((*(int *)DATA_OVL(0x1658) == 0) && (*(int *)DATA_OVL(0x165a) == 0)) && (*(int *)DATA_OVL(0x165c) == 0)) &&
       (((*(int *)DATA_OVL(0x165e) == 0 && (*(int *)DATA_OVL(0x1660) == 0)) &&
        ((*(int *)DATA_OVL(0x1662) == 0 && ((*(int *)DATA_OVL(0x1664) == 0 && (*(int *)DATA_OVL(0x1666) == 0)))))))) {
      *(undefined2 *)DATA_OVL(0x3314) = 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}



void __cdecl16near FUN_0000_1278(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(byte *)SAVED_GAM(0x000c) - 0x42;
  if (uVar1 < 0x13) {
                    // WARNING: Could not emulate address calculation at 0x00001288
                    // WARNING: Treating indirect jump as call
    (**(code **)(uVar1 * 2 + MEM(0x9482)))();
    return;
  }
  return;
}



int FUN_0000_12ea(int param_1)

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



void __cdecl16near FUN_0000_132a(void)

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
  
  cVar4 = *(char *)SAVED_GAM(0x02ed);
  while (*(char *)SAVED_GAM(0x02ed) = cVar4, cVar4 == 'B') {
    cVar4 = 'A';
  }
  uVar2 = *(undefined *)MEM(0xa9c8);
  *(undefined *)MEM(0xa9cb) = uVar2;
  *(undefined *)MEM(0xa9cc) = uVar2;
  func_0x0000a3ae(0,MEM(0x1060),SAVED_GAM(0x0000),DATA_OVL(0x3355));
  func_0x0000a3ae(0,MEM(0x0100),DATA_OVL(0x0e54),DATA_OVL(0x335e));
  func_0x00009a62(0x18,0x27,0,0,0);
  func_0x000099d4(0);
  func_0x000094fa(0xff);
  local_12 = *(char *)MEM(0xa9c8);
  while (iVar8 = func_0x00009cec(local_12), iVar8 == 0) {
    uVar9 = func_0x00009c1a(0);
    local_12 = '\0';
    func_0x00009e72(uVar9);
    if (local_12 == '\x1b') {
LAB_0000_13fb:
      *(char *)SAVED_GAM(0x02ed) = unaff_SI;
      return;
    }
  }
  *(undefined2 *)MEM(0x5394) = MEM(0x2322);
  *(undefined2 *)MEM(0x5396) = 0;
  iVar8 = FUN_0000_1016();
  unaff_SI = cVar4;
  if (iVar8 != 0) goto LAB_0000_13fb;
  if (*(int *)DATA_OVL(0x3314) != 0) {
    *(undefined *)SAVED_GAM(0x000c) = 0x41;
  }
  func_0x000094fa(0xff);
  func_0x00009a32(0xb,0);
  func_0x000094fa(0xfc);
  func_0x00009690(DATA_OVL(0x33e9));
  func_0x00009a32(0xc,0);
  func_0x00009690(SAVED_GAM(0x0002));
  func_0x000094fa(0xfb);
  func_0x00009a32(0xd,0xc);
  func_0x00009690(DATA_OVL(0x33f1));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x0018));
  if (*(char *)SAVED_GAM(0x000b) == '\v') {
    uVar9 = DATA_OVL(0x33fa);
  }
  else {
    uVar9 = DATA_OVL(0x3401);
  }
  func_0x00009690(uVar9);
  FUN_0000_1278();
  func_0x00009a32(0xf,0x11);
  func_0x00009690(DATA_OVL(0x340a));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000e));
  func_0x00009a32(0x10,0x11);
  func_0x00009690(DATA_OVL(0x3411));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000f));
  func_0x00009a32(0x11,0x11);
  func_0x00009690(DATA_OVL(0x3418));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x0010));
  func_0x00009a32(0x14,10);
  func_0x00009690(SAVED_GAM(0x0002));
  func_0x00009690(DATA_OVL(0x341f));
  if (*(int *)DATA_OVL(0x3314) == 0) {
    uVar9 = DATA_OVL(0x342f);
  }
  else {
    uVar9 = DATA_OVL(0x3424);
  }
  func_0x00009690(uVar9);
  func_0x00009c1a(0);
  func_0x000094fa(0xff);
  FUN_0000_2024();
  iVar8 = 0;
  do {
    FUN_0000_1e22(iVar8);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  func_0x000099d4(0);
  func_0x00009a32(3,0);
  func_0x000094fa(0xfc);
  func_0x00009690(SAVED_GAM(0x0002));
  func_0x000094fa(0xfb);
  func_0x00009a32(5,10);
  if (*(char *)SAVED_GAM(0x000b) == '\v') {
    uVar9 = DATA_OVL(0x343d);
  }
  else {
    uVar9 = DATA_OVL(0x3442);
  }
  func_0x00009690(uVar9);
  func_0x00009a32(6,10);
  if (*(int *)DATA_OVL(0x3314) == 0) {
    FUN_0000_1278();
  }
  else {
    func_0x00009690(DATA_OVL(0x3449));
  }
  func_0x00009a32(8,10);
  func_0x0000987e(0x20,1,*(undefined2 *)SAVED_GAM(0x0016));
  func_0x00009a32(9,10);
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x0018));
  func_0x00009a32(0xb,10);
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000e));
  func_0x00009a32(0xc,10);
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000f));
  func_0x00009a32(0xd,10);
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x0010));
  func_0x00009a32(0xf,0);
  func_0x000094fa(0xfc);
  if (*(int *)DATA_OVL(0x3314) == 0) {
    uVar9 = DATA_OVL(0x3457);
  }
  else {
    uVar9 = DATA_OVL(0x3450);
  }
  func_0x00009690(uVar9);
  func_0x000094fa(0xfb);
  func_0x00009a32(2,7);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3462));
  func_0x000099d4(1);
  func_0x00009a32(2,7);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3468));
  func_0x000094fa(0xfd);
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x00009a32(0,10);
  func_0x00009690(DATA_OVL(0x346e));
  do {
    uVar9 = func_0x00009c1a(0);
    cVar5 = func_0x00009e72(uVar9);
    if (cVar5 == 'Y') break;
  } while (cVar5 != 'N');
  func_0x000094fa(0xff);
  if (cVar5 == 'N') {
    do {
      func_0x00009a32(0,1);
      func_0x00009690(DATA_OVL(0x347e));
      func_0x00009c78(8,SAVED_GAM(0x0002));
    } while (*(char *)SAVED_GAM(0x0002) == '\0');
  }
  func_0x000099d4(1);
  func_0x00009a32(3,0);
  func_0x000094fa(0xfc);
  func_0x00009690(SAVED_GAM(0x0002));
  func_0x000094fa(0xfb);
  func_0x00009a32(2,7);
  func_0x00009690(DATA_OVL(0x348f));
  func_0x00009a32(5,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3495));
  func_0x000094fa(0xfd);
  func_0x000099d4(0);
  func_0x00009a32(2,7);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x349a));
  func_0x00009a32(5,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x34a0));
  func_0x000094fa(0xfd);
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x000094fa(0xfc);
  func_0x00009690(DATA_OVL(0x34a5));
  func_0x000094fa(0xfb);
  do {
    uVar9 = func_0x00009c1a(0);
    cVar5 = func_0x00009e72(uVar9);
    if (cVar5 == 'Y') break;
  } while (cVar5 != 'N');
  func_0x000099d4(1);
  func_0x00009a32(5,10);
  if (((cVar5 == 'Y') && (*(char *)SAVED_GAM(0x000b) == '\v')) || ((cVar5 == 'N' && (*(char *)SAVED_GAM(0x000b) == '\f')))
     ) {
    func_0x00009690(DATA_OVL(0x34b4));
    *(undefined *)SAVED_GAM(0x000b) = 0xb;
  }
  else {
    func_0x00009690(DATA_OVL(0x34b9));
    *(undefined *)SAVED_GAM(0x000b) = 0xc;
  }
  func_0x00009a32(5,5);
  func_0x00009690(DATA_OVL(0x34c0));
  func_0x00009a32(6,3);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x34c5));
  func_0x000094fa(0xfd);
  func_0x00009a32(6,10);
  if (*(int *)DATA_OVL(0x3314) == 0) {
    FUN_0000_1278();
  }
  else {
    func_0x00009690(DATA_OVL(0x34cc));
  }
  func_0x000099d4(0);
  func_0x00009a32(5,5);
  func_0x00009690(DATA_OVL(0x34d3));
  func_0x00009a32(6,3);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x34d8));
  func_0x000094fa(0xfd);
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x00009a32(0,2);
  if (*(int *)DATA_OVL(0x3314) == 0) {
    uVar9 = DATA_OVL(0x34f7);
  }
  else {
    uVar9 = DATA_OVL(0x34df);
  }
  func_0x00009690(uVar9);
  func_0x00009c1a(0);
  func_0x000099d4(0);
  func_0x00009a32(6,3);
  func_0x00009690(DATA_OVL(0x350c));
  func_0x00009a32(8,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3513));
  func_0x000094fa(0xfd);
  func_0x000099d4(1);
  func_0x00009a32(6,3);
  func_0x00009690(DATA_OVL(0x3518));
  func_0x00009a32(8,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x351f));
  func_0x000094fa(0xfd);
  func_0x00009a32(8,10);
  iVar8 = *(int *)SAVED_GAM(0x0016) / 10;
  *(int *)SAVED_GAM(0x0016) = iVar8;
  func_0x0000987e(0x20,1,iVar8);
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x000094fa(0xfc);
  func_0x00009690(DATA_OVL(0x3524));
  func_0x000094fa(0xfb);
  func_0x00009c1a(0);
  func_0x000099d4(0);
  func_0x00009a32(8,5);
  func_0x00009690(DATA_OVL(0x3542));
  func_0x00009a32(9,3);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3547));
  func_0x000094fa(0xfd);
  func_0x000099d4(1);
  func_0x00009a32(8,5);
  func_0x00009690(DATA_OVL(0x354e));
  func_0x00009a32(9,3);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3553));
  func_0x000094fa(0xfd);
  func_0x00009a32(9,10);
  *(undefined *)SAVED_GAM(0x0018) = 1;
  for (iVar8 = *(int *)SAVED_GAM(0x0016) / 100; 0 < iVar8; iVar8 = iVar8 >> 1) {
    pcVar1 = (char *)SAVED_GAM(0x0018);
    *pcVar1 = *pcVar1 + '\x01';
  }
  iVar8 = (uint)*(byte *)SAVED_GAM(0x0018) * 0x1e;
  *(int *)SAVED_GAM(0x0014) = iVar8;
  *(int *)SAVED_GAM(0x0012) = iVar8;
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x0018));
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x000094fa(0xfc);
  func_0x00009690(DATA_OVL(0x355a));
  func_0x000094fa(0xfb);
  func_0x00009c1a(0);
  func_0x000099d4(0);
  func_0x00009a32(9,3);
  func_0x00009690(DATA_OVL(0x3573));
  func_0x00009a32(0xb,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x357a));
  func_0x000094fa(0xfd);
  func_0x000099d4(1);
  func_0x00009a32(9,3);
  func_0x00009690(DATA_OVL(0x357f));
  func_0x00009a32(0xb,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x3586));
  func_0x000094fa(0xfd);
  func_0x00009a32(0xb,10);
  uVar2 = *(undefined *)SAVED_GAM(0x000e);
  bVar6 = FUN_0000_12ea(uVar2);
  *(byte *)SAVED_GAM(0x000e) = bVar6;
  if (bVar6 < 0x14) {
    *(undefined *)SAVED_GAM(0x000e) = 0x14;
  }
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000e));
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x00009a32(0,1);
  func_0x00009690(DATA_OVL(0x358b));
  func_0x0000987e(0x20,1,uVar2);
  func_0x00009690(DATA_OVL(0x359a));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000e));
  func_0x00009690(DATA_OVL(0x35a5));
  func_0x00009c1a(0);
  func_0x000099d4(0);
  func_0x00009a32(0xb,5);
  func_0x00009690(DATA_OVL(0x35aa));
  func_0x00009a32(0xc,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x35af));
  func_0x000094fa(0xfd);
  func_0x000099d4(1);
  func_0x00009a32(0xb,5);
  func_0x00009690(DATA_OVL(0x35b4));
  func_0x00009a32(0xc,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x35b9));
  func_0x000094fa(0xfd);
  func_0x00009a32(0xc,10);
  uVar2 = *(undefined *)SAVED_GAM(0x000f);
  uVar7 = FUN_0000_12ea(uVar2);
  *(undefined *)SAVED_GAM(0x000f) = uVar7;
  func_0x0000987e(0x20,1,uVar7);
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x00009a32(0,1);
  func_0x00009690(DATA_OVL(0x35be));
  func_0x0000987e(0x20,1,uVar2);
  func_0x00009690(DATA_OVL(0x35ce));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x000f));
  func_0x00009690(DATA_OVL(0x35d9));
  func_0x00009c1a(0);
  func_0x000099d4(0);
  func_0x00009a32(0xc,5);
  func_0x00009690(DATA_OVL(0x35de));
  func_0x00009a32(0xd,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x35e3));
  func_0x000094fa(0xfd);
  func_0x000099d4(1);
  func_0x00009a32(0xc,5);
  func_0x00009690(DATA_OVL(0x35e8));
  func_0x00009a32(0xd,5);
  func_0x000094fa(0xfd);
  func_0x00009690(DATA_OVL(0x35ed));
  func_0x000094fa(0xfd);
  func_0x00009a32(0xd,10);
  uVar2 = *(undefined *)SAVED_GAM(0x0010);
  uVar7 = FUN_0000_12ea(uVar2);
  *(undefined *)SAVED_GAM(0x0010) = uVar7;
  *(undefined *)SAVED_GAM(0x0011) = uVar7;
  func_0x0000987e(0x20,1,uVar7);
  func_0x000099d4(2);
  func_0x000094fa(0xff);
  func_0x00009a32(0,1);
  func_0x00009690(DATA_OVL(0x35f2));
  func_0x0000987e(0x20,1,uVar2);
  func_0x00009690(DATA_OVL(0x3602));
  func_0x0000987e(0x20,1,*(undefined *)SAVED_GAM(0x0010));
  func_0x00009690(DATA_OVL(0x360d));
  func_0x00009c1a(0);
  func_0x000099d4(0);
  func_0x00009a32(0xd,5);
  func_0x00009690(DATA_OVL(0x3612));
  func_0x000099d4(1);
  func_0x00009a32(0xd,5);
  func_0x00009690(DATA_OVL(0x3617));
  func_0x00009a32(0xf,0);
  func_0x000094fa(0xfc);
  if (*(int *)DATA_OVL(0x3314) == 0) {
    uVar9 = DATA_OVL(0x3623);
  }
  else {
    uVar9 = DATA_OVL(0x361c);
  }
  func_0x00009690(uVar9);
  func_0x000094fa(0xfb);
  func_0x000099d4(2);
  func_0x00009a62(0x16,0x25,0x15,2,2);
  func_0x000094fa(0xff);
  func_0x0000a35e(3);
  func_0x00009690(DATA_OVL(0x362e));
  puVar10 = (undefined *)DATA_OVL(0x0d54);
  for (iVar8 = MEM(0x0100); iVar8 != 0; iVar8 = iVar8 + -1) {
    puVar3 = puVar10;
    puVar10 = puVar10 + 1;
    *puVar3 = 0;
  }
  func_0x0000a418(MEM(0x0200),DATA_OVL(0x0d54),DATA_OVL(0x3651));
  func_0x0000a418(MEM(0x1060),SAVED_GAM(0x0000),DATA_OVL(0x365b));
  func_0x0000a35e(0);
  *(char *)SAVED_GAM(0x02ed) = cVar4;
  *(undefined *)MEM(0xa9be) = 0;
  return;
}



void FUN_0000_1e22(int param_1)

{
  undefined2 unaff_DS;
  
  func_0x000099d4(0);
  param_1 = param_1 * 2;
  func_0x00009a32(*(undefined2 *)(param_1 + DATA_OVL(0x3666)),3);
  func_0x00009690(*(undefined2 *)(param_1 + DATA_OVL(0x3676)));
  func_0x000099d4(1);
  func_0x00009a32(*(undefined2 *)(param_1 + DATA_OVL(0x3666)),3);
  func_0x00009690(*(undefined2 *)(param_1 + DATA_OVL(0x3676)));
  return;
}



void __cdecl16near FUN_0000_1e62(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x00009b0a(*(undefined2 *)MEM(0x13b2));
  func_0x00009a32(0x13,0);
  func_0x000094fa(0x7b);
  iVar2 = 0x26;
  do {
    func_0x000094fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000094fa(0x7c);
  iVar2 = 3;
  do {
    func_0x000094fa(0x7f);
    uVar1 = func_0x00009b2e(0x27);
    func_0x00009a32(uVar1);
    func_0x000094fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000094fa(0x7d);
  iVar2 = 0x26;
  do {
    func_0x000094fa(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  func_0x000094fa(0x7e);
  func_0x000088b0(*(undefined2 *)MEM(0x13b0));
  func_0x00008950(0x9f,MEM(0x0138),0x9f,7);
  func_0x00008dd0(0xb8,MEM(0x0138));
  func_0x00008dd0(0xb8,7);
  func_0x00008dd0(0x9f,7);
  func_0x00009b0a(*(undefined2 *)MEM(0x13b0));
  return;
}



void FUN_0000_1f26(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  func_0x000088b0(*(undefined2 *)MEM(0x13b2));
  func_0x000088e6(0x8f,param_1 + 6,0,param_1);
  iVar1 = param_1 + 0x8f;
  func_0x000088e6(0x89,param_1 + 0x97,0,iVar1);
  iVar2 = param_1 + 7;
  func_0x000088e6(0x8f,param_1 + 0x96,0x89,iVar2);
  func_0x00009b0a(*(undefined2 *)MEM(0x13b2));
  func_0x00009a32(0,0);
  func_0x00009690(DATA_OVL(0x3686));
  func_0x0000ca6a();
  func_0x00009b0a(*(undefined2 *)MEM(0x13b0));
  func_0x00009690(MEM(0x6d3a));
  func_0x00009b0a(*(undefined2 *)MEM(0x13b2));
  func_0x0000cb0e();
  func_0x00009690(DATA_OVL(0x368a));
  func_0x000094fa(0x7c);
  func_0x00009a32(0x11,0);
  func_0x000094fa(0x7d);
  func_0x00009a32(0x11,0x12);
  func_0x000094fa(0x7e);
  func_0x000088b0(*(undefined2 *)MEM(0x13b0));
  func_0x00008950(7,iVar2,7,param_1 + 0x18);
  func_0x00008dd0(0x88,iVar2);
  func_0x00008dd0(0x88,iVar1);
  func_0x00008dd0(7,iVar1);
  func_0x00008dd0(7,param_1 + 0x80);
  func_0x00009b0a(*(undefined2 *)MEM(0x13b0));
  return;
}



void __cdecl16near FUN_0000_2024(void)

{
  FUN_0000_1e62();
  func_0x00009a62(0x12,0x13,0,0,0);
  func_0x00009a62(0x12,0x27,0,0x15,1);
  func_0x00009a62(0x15,0x25,0x15,3,2);
  func_0x000099d4(0);
  FUN_0000_1f26(0);
  func_0x000099d4(1);
  FUN_0000_1f26(0xa8);
  func_0x00009a32(0,0xc);
  func_0x000094fa(0x20);
  return;
}



void __cdecl16near FUN_0000_2090(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  func_0x00009f3a(1);
  *(undefined2 *)MEM(0x5350) = 0x69;
  ppcVar1 = (code **)MEM(0x5350);
  (**ppcVar1)();
  return;
}



void __cdecl16near FUN_0000_20ae(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)MEM(0x5350) = 0x69;
  ppcVar1 = (code **)MEM(0x5350);
  (**ppcVar1)();
  return;
}


