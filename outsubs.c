typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


bool FUN_0000_004a(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  do {
    if ((uint)*(byte *)(iVar1 + DATA_OVL(0x387e)) == param_1 >> 8) {
      return 0x7f < *(byte *)(iVar1 + SAVED_GAM(0x0332));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return false;
}



void FUN_0000_0098(uint param_1,int param_2,char *param_3)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  uint local_4;
  
  if (*param_3 == 'B') {
    bVar2 = *(byte *)((param_1 >> 8) + DATA_OVL(0x3886));
    if (bVar2 == 0xff) {
      puVar5 = (undefined *)(param_2 * MEM(0x0100) + MEM(0x6608));
      for (iVar6 = MEM(0x0100); iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar1 = 1;
      }
      return;
    }
    local_4 = (uint)bVar2 << 8;
  }
  else {
    local_4 = param_1;
  }
  if (*(char *)SAVED_GAM(0x02ef) != '\0') {
    func_0x0000828e(5);
  }
  func_0x000082de(local_4,MEM(0x0100),param_2 * MEM(0x0100) + MEM(0x6608),param_3);
  uVar3 = (int)param_1 >> 4 & 0xf0;
  uVar4 = (int)param_1 >> 8 & 0xf0;
  local_c = 0;
  do {
    for (local_a = 0; local_a < 0x10; local_a = local_a + 1) {
      bVar2 = *(byte *)(local_a + param_2 * MEM(0x0100) + local_c * 0x10 + MEM(0x6608));
      if (0x15 < bVar2) {
        if (bVar2 < 0x19) {
          iVar6 = FUN_0000_0000(param_1);
          if (iVar6 != 0) {
            puVar5 = (undefined *)get_sprite_at_coords(local_c + uVar4,local_a + uVar3);
            *puVar5 = 0xdf;
          }
        }
        else if ((bVar2 == 0x19) && (iVar6 = FUN_0000_004a(param_1), iVar6 != 0)) {
          puVar5 = (undefined *)get_sprite_at_coords(local_c + uVar4,local_a + uVar3);
          *puVar5 = 0x1a;
        }
      }
    }
    local_c = local_c + 1;
  } while (local_c < 0x10);
  return;
}



void FUN_0000_01b4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_6;
  undefined2 local_4;
  
  iVar2 = (uint)*(byte *)SAVED_GAM(0x02f5) * 0x10 + (uint)*(byte *)SAVED_GAM(0x02f6) * MEM(0x0100);
  if (*(char *)SAVED_GAM(0x02f5) == -0x10) {
    local_6 = MEM(0xf100);
  }
  else {
    local_6 = MEM(0x0100);
  }
  if (*(byte *)SAVED_GAM(0x02ef) < 0x80) {
    local_4 = DATA_OVL(0x3990);
  }
  else {
    local_4 = DATA_OVL(0x3986);
  }
  if ((param_2 == -1) || (param_1 == -1)) {
    FUN_0000_0098(iVar2,0,local_4);
  }
  if ((param_2 == 1) || (param_1 == -1)) {
    FUN_0000_0098(iVar2 + local_6,1,local_4);
  }
  if ((param_2 == -1) || (param_1 == 1)) {
    FUN_0000_0098(CONCAT11((char)((uint)iVar2 >> 8) + '\x10',(char)iVar2),2,local_4);
  }
  if ((param_2 == 1) || (param_1 == 1)) {
    FUN_0000_0098(CONCAT11((char)((uint)(iVar2 + local_6) >> 8) + '\x10',(char)(iVar2 + local_6)),3,
                  local_4);
  }
  iVar2 = func_0x00006172(MEM(0x6608),0x1b,MEM(0x0400));
  if (iVar2 == 0) {
    *(undefined2 *)MEM(0x2180) = MEM(0xffff);
    *(undefined2 *)MEM(0x217e) = MEM(0xffff);
  }
  else {
    uVar3 = iVar2 + MEM(0x99f8);
    *(uint *)MEM(0x217e) = uVar3 & 0xf;
    *(uint *)MEM(0x2180) = uVar3 >> 4 & 0xf;
    if ((uVar3 & MEM(0x0100)) != 0) {
      piVar1 = (int *)MEM(0x217e);
      *piVar1 = *piVar1 + 0x10;
    }
    if ((uVar3 & MEM(0x0200)) != 0) {
      piVar1 = (int *)MEM(0x2180);
      *piVar1 = *piVar1 + 0x10;
    }
  }
  return;
}



void FUN_0000_02c8(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  if ((param_2 < 0) || (param_1 < 0)) {
    iVar3 = 3;
  }
  else {
    iVar3 = 0;
  }
  if ((param_2 < 0) || (0 < param_1)) {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
  }
  puVar5 = (undefined2 *)(iVar4 * MEM(0x0100) + MEM(0x6608));
  puVar7 = (undefined2 *)(iVar3 * MEM(0x0100) + MEM(0x6608));
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = (undefined2 *)((int)puVar7 + 1);
    puVar1 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    *(undefined *)puVar2 = *(undefined *)puVar1;
  }
  puVar5 = (undefined2 *)((iVar4 + param_1 + param_2 * 2) * MEM(0x0100) + MEM(0x6608));
  puVar7 = (undefined2 *)((iVar3 + param_1 + param_2 * 2) * MEM(0x0100) + MEM(0x6608));
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar7;
    puVar7 = (undefined2 *)((int)puVar7 + 1);
    puVar1 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    *(undefined *)puVar2 = *(undefined *)puVar1;
  }
  return;
}



undefined2 __cdecl16near FUN_0000_0368(void)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  if (*(char *)SAVED_GAM(0x02ef) == '\0') {
    local_4 = DATA_OVL(0x3999);
  }
  else {
    local_4 = DATA_OVL(0x39a2);
  }
  return local_4;
}



undefined2 FUN_0000_0388(undefined2 param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  char local_6;
  undefined2 local_4;
  
  local_4 = 1;
  func_0x000075c0(param_1);
  iVar3 = 0;
  do {
    if ((*(char *)(iVar3 + MEM(0x1e8a)) == *(char *)SAVED_GAM(0x02f0)) &&
       (*(char *)(iVar3 + MEM(0x1eb2)) == *(char *)SAVED_GAM(0x02f1))) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 < 0x20) {
    if ((iVar3 < 0xd) || (0x11 < iVar3)) {
      func_0x000075c0(DATA_OVL(0x39ac));
      func_0x0000742a(0xfc);
      func_0x000075c0(*(undefined2 *)(iVar3 * 2 + MEM(0x1e3a)));
      func_0x0000742a(0xfb);
    }
    func_0x0000742a(10);
    if (*(char *)MEM(0xa9bd) != '\x01') {
      func_0x0000828e(1);
      do {
        iVar1 = func_0x000073e4(DATA_OVL(0x39af));
      } while (iVar1 == 0);
    }
    uVar2 = FUN_0000_0368();
    func_0x00008348(MEM(0x0100),SAVED_GAM(0x06b4),uVar2);
    local_6 = (char)iVar3;
    *(char *)SAVED_GAM(0x02ed) = local_6 + '\x01';
    *(undefined *)SAVED_GAM(0x02ef) = 0;
    *(undefined *)SAVED_GAM(0x02f0) = 0xf;
    *(undefined *)SAVED_GAM(0x02f1) = 0x1e;
    local_4 = 0;
  }
  else {
    func_0x000075c0(DATA_OVL(0x39b8));
  }
  return local_4;
}



void __cdecl16near FUN_0000_0458(void)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  byte *local_a;
  
  func_0x000075c0(DATA_OVL(0x39c5));
  func_0x0000d936(1,0);
  func_0x00009856(1);
  func_0x0000d936(1,0);
  func_0x0000a11e(300,1,800,MEM(0x09c4));
  uVar1 = *(undefined *)SAVED_GAM(0x02d6);
  *(undefined *)SAVED_GAM(0x02d6) = 0;
  func_0x00009856(1);
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    pcVar5 = (char *)SAVED_GAM(0x000d);
    local_a = (byte *)SAVED_GAM(0x000f);
    uVar4 = 0;
    do {
      if ((*pcVar5 != 'D') && (uVar2 = func_0x0000982e(), *local_a <= uVar2)) {
        func_0x000087c2(1,uVar4);
      }
      pcVar5 = pcVar5 + 0x20;
      local_a = local_a + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)SAVED_GAM(0x02b5));
  }
  func_0x00009856(2);
  *(undefined *)SAVED_GAM(0x02d6) = uVar1;
  if ((*(char *)SAVED_GAM(0x02f0) == '6') && (*(char *)SAVED_GAM(0x02f1) == -0x76)) {
    func_0x000075c0(DATA_OVL(0x39d3));
    *(undefined *)SAVED_GAM(0x02ef) = 0xff;
    func_0x00008348(MEM(0x0100),SAVED_GAM(0x06b4),DATA_OVL(0x39ee));
    func_0x000082de(0,MEM(0x0100),SAVED_GAM(0x06b4),DATA_OVL(0x39f7));
    func_0x0000828e(5);
    do {
      iVar3 = func_0x000073e4(DATA_OVL(0x3a01));
    } while (iVar3 == 0);
    func_0x00008348(MEM(0x0100),SAVED_GAM(0x06b4),DATA_OVL(0x3a0b));
    func_0x0000d8ee();
  }
  return;
}



void __cdecl16near FUN_0000_0566(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined *local_8;
  
  if (*(char *)SAVED_GAM(0x02ef) != '\0') {
    if (*(char *)SAVED_GAM(0x020d) == '\0') {
      *(undefined *)SAVED_GAM(0x0795) = 0xb7;
      *(undefined *)SAVED_GAM(0x0794) = 0xb7;
      *(undefined *)SAVED_GAM(0x0796) = 0x69;
      *(undefined *)SAVED_GAM(0x0797) = 0xe1;
      *(undefined *)SAVED_GAM(0x0798) = 0xff;
      *(undefined *)SAVED_GAM(0x0799) = 0xf3;
    }
    iVar1 = 0;
    local_8 = (undefined *)SAVED_GAM(0x079c);
    do {
      if ((*(char *)(iVar1 + SAVED_GAM(0x0210)) == '\0') && (*(byte *)(iVar1 + SAVED_GAM(0x0322)) < 0x80)) {
        local_8[1] = 0xb4;
        *local_8 = 0xb4;
        local_8[2] = *(undefined *)(iVar1 + DATA_OVL(0x3a16));
        local_8[3] = *(undefined *)(iVar1 + DATA_OVL(0x3a1a));
        local_8[4] = 0xff;
        local_8[5] = *(undefined *)(iVar1 + DATA_OVL(0x3a1e));
      }
      local_8 = local_8 + 8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}



void __cdecl16near FUN_0000_05fc(void)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  uint local_4;
  
  local_4 = 0;
  if (*(char *)SAVED_GAM(0x02b5) != '\0') {
    pcVar2 = (char *)SAVED_GAM(0x000d);
    pbVar3 = (byte *)SAVED_GAM(0x000f);
    do {
      if ((*pcVar2 != 'D') && (*pcVar2 != 'P')) {
        uVar1 = func_0x00007e02(0x1e,1);
        if (*pbVar3 < uVar1) {
          *pcVar2 = 'P';
          func_0x000075c0(DATA_OVL(0x3a2b));
        }
      }
      pcVar2 = pcVar2 + 0x20;
      pbVar3 = pbVar3 + 0x20;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)SAVED_GAM(0x02b5));
  }
  return;
}



void __cdecl16near FUN_0000_0658(void)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined2 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined2 unaff_DS;
  undefined2 uVar9;
  undefined2 uVar10;
  uint local_e;
  uint local_8;
  undefined *local_4;
  
  func_0x000075c0(MEM(0x7750));
  func_0x00007f02(6,MEM(0x09c4),10000,1,MEM(0x0a3c));
  puVar6 = (undefined2 *)DATA_OVL(0x3a36);
  do {
    func_0x00007f02(0xd,200,5000,1,*puVar6);
    puVar6 = puVar6 + 1;
  } while (puVar6 < (undefined2 *)DATA_OVL(0x3a42));
  local_4 = (undefined *)SAVED_GAM(0x0704);
  *(undefined *)SAVED_GAM(0x0707) = 5;
  *(undefined *)SAVED_GAM(0x0706) = 5;
  *(undefined *)SAVED_GAM(0x0705) = 0x16;
  *(undefined *)SAVED_GAM(0x0704) = 0x16;
  func_0x00006dd8(5,5,MEM(0x0174));
  *(undefined *)SAVED_GAM(0x0705) = 0x74;
  *(undefined *)SAVED_GAM(0x0704) = 0x74;
  local_8 = 0;
  do {
    if (*(byte *)SAVED_GAM(0x02b5) <= local_8) {
      func_0x000075c0(MEM(0x77e0));
      uVar3 = (uint)(*(byte *)SAVED_GAM(0x02e2) / 0x14);
      if (uVar3 < 4) {
        uVar10 = MEM(0x77e4);
        uVar9 = *(undefined2 *)(uVar3 * 2 + MEM(0x1a74));
      }
      else {
        uVar10 = MEM(0x77ee);
        uVar9 = MEM(0x029f);
      }
      func_0x000082de(uVar9,2000,DATA_OVL(0x0d54),uVar10);
      func_0x000075c0(DATA_OVL(0x0d54));
      func_0x0000742a(0x22);
      func_0x000083dc();
      func_0x000075c0(MEM(0x77f8));
      *(undefined *)SAVED_GAM(0x0705) = 0x16;
      *(undefined *)SAVED_GAM(0x0704) = 0x16;
      func_0x00006dd8(5,5,*(undefined *)MEM(0xadb9));
      *(undefined *)SAVED_GAM(0x0705) = 0;
      *(undefined *)SAVED_GAM(0x0704) = 0;
      func_0x00009856(1);
      func_0x0000acec(0);
      return;
    }
    if (*(char *)(local_8 * 0x20 + SAVED_GAM(0x000d)) != 'D') {
      iVar5 = local_8 * 0x20;
      *(undefined2 *)(iVar5 + SAVED_GAM(0x0012)) = *(undefined2 *)(iVar5 + SAVED_GAM(0x0014));
      *(undefined *)(iVar5 + SAVED_GAM(0x000d)) = 0x47;
      pbVar8 = (byte *)DATA_OVL(0x154d);
      pbVar7 = (byte *)DATA_OVL(0x154e);
      do {
        if (*pbVar8 == local_8) {
          local_4 = (undefined *)((uint)*pbVar7 * 8 + SAVED_GAM(0x06b4));
          break;
        }
        pbVar8 = pbVar8 + 8;
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < (byte *)DATA_OVL(0x164e));
      iVar5 = func_0x0000aae6(*(undefined *)(local_8 * 0x20 + SAVED_GAM(0x000c)),MEM(0x7760));
      uVar2 = *(undefined *)(iVar5 + MEM(0x1ade));
      local_4[1] = uVar2;
      *local_4 = uVar2;
      *(undefined *)SAVED_GAM(0x070a) = 0;
      func_0x00009856(1);
      func_0x00007f02(0xd,200,5000,1,MEM(0x157c));
      func_0x000067e0(*(undefined2 *)MEM(0x13b0));
      func_0x000068f6(0xb7,0xb7,8,8);
      func_0x00007f02(1,MEM(0x09c4),60000,1,MEM(0x157c));
      iVar5 = 3;
      do {
        *(undefined *)SAVED_GAM(0x070a) = 1;
        func_0x00009856(1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_e = 1;
      for (iVar5 = *(int *)(local_8 * 0x20 + SAVED_GAM(0x0016)) / 100; 0 < iVar5; iVar5 = iVar5 >> 1) {
        local_e = local_e + 1;
      }
      iVar5 = local_8 * 0x20;
      if (*(byte *)(iVar5 + SAVED_GAM(0x0018)) != local_e) {
        *(undefined *)(iVar5 + SAVED_GAM(0x0018)) = (undefined)local_e;
        *(int *)(iVar5 + SAVED_GAM(0x0014)) = local_e * 0x1e;
        *(int *)(iVar5 + SAVED_GAM(0x0012)) = local_e * 0x1e;
        func_0x000075c0(MEM(0x776a));
        func_0x000075c0(iVar5 + SAVED_GAM(0x0002));
        func_0x000075c0(MEM(0x7774));
        func_0x000075c0(MEM(0x77a4));
        func_0x000077ae(0x20,1,local_e);
        func_0x000075c0(MEM(0x77b8));
        iVar5 = func_0x00007e02(3,1);
        if (iVar5 == 1) {
          func_0x000075c0(MEM(0x77c0));
          iVar5 = local_8 * 0x20 + SAVED_GAM(0x000e);
LAB_0000_077f:
          func_0x00009c60(0x1e,1,iVar5);
        }
        else {
          if (iVar5 == 2) {
            func_0x000075c0(MEM(0x77ca));
            iVar5 = local_8 * 0x20 + SAVED_GAM(0x000f);
            goto LAB_0000_077f;
          }
          if (iVar5 == 3) {
            func_0x000075c0(MEM(0x77d4));
            iVar5 = local_8 * 0x20 + SAVED_GAM(0x0010);
            goto LAB_0000_077f;
          }
        }
        func_0x000075c0(MEM(0x77dc));
        func_0x000083dc();
        func_0x0000742a(10);
      }
    }
    cVar1 = *(char *)(local_8 * 0x20 + SAVED_GAM(0x000c));
    if (cVar1 == 'A') {
LAB_0000_07e6:
      bVar4 = *(byte *)(local_8 * 0x20 + SAVED_GAM(0x0010));
LAB_0000_07f1:
      *(byte *)(local_8 * 0x20 + SAVED_GAM(0x0011)) = bVar4;
    }
    else {
      if (cVar1 == 'B') {
        bVar4 = *(byte *)(local_8 * 0x20 + SAVED_GAM(0x0010)) >> 1;
        goto LAB_0000_07f1;
      }
      if (cVar1 == 'M') goto LAB_0000_07e6;
    }
    func_0x00008670();
    local_8 = local_8 + 1;
  } while( true );
}


