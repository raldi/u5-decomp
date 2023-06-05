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
    if ((uint)*(byte *)(iVar1 + 0x386e) == param_1 >> 8) {
      return 0x7f < *(byte *)(iVar1 + 0x58d8);
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
    bVar2 = *(byte *)((param_1 >> 8) + 0x3876);
    if (bVar2 == 0xff) {
      puVar5 = (undefined *)(param_2 * 0x100 + 0x6608);
      for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
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
  if (*(char *)0x5895 != '\0') {
    func_0x0000828e(5);
  }
  func_0x000082de(local_4,0x100,param_2 * 0x100 + 0x6608,param_3);
  uVar3 = (int)param_1 >> 4 & 0xf0;
  uVar4 = (int)param_1 >> 8 & 0xf0;
  local_c = 0;
  do {
    for (local_a = 0; local_a < 0x10; local_a = local_a + 1) {
      bVar2 = *(byte *)(local_a + param_2 * 0x100 + local_c * 0x10 + 0x6608);
      if (0x15 < bVar2) {
        if (bVar2 < 0x19) {
          iVar6 = FUN_0000_0000(param_1);
          if (iVar6 != 0) {
            puVar5 = (undefined *)func_0x0000a172(local_c + uVar4,local_a + uVar3);
            *puVar5 = 0xdf;
          }
        }
        else if ((bVar2 == 0x19) && (iVar6 = FUN_0000_004a(param_1), iVar6 != 0)) {
          puVar5 = (undefined *)func_0x0000a172(local_c + uVar4,local_a + uVar3);
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
  
  iVar2 = (uint)*(byte *)0x589b * 0x10 + (uint)*(byte *)0x589c * 0x100;
  if (*(char *)0x589b == -0x10) {
    local_6 = -0xf00;
  }
  else {
    local_6 = 0x100;
  }
  if (*(byte *)0x5895 < 0x80) {
    local_4 = 0x3980;
  }
  else {
    local_4 = 0x3976;
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
  iVar2 = func_0x00006172(0x6608,0x1b,0x400);
  if (iVar2 == 0) {
    *(undefined2 *)0x2180 = 0xffff;
    *(undefined2 *)0x217e = 0xffff;
  }
  else {
    uVar3 = iVar2 + 0x99f8;
    *(uint *)0x217e = uVar3 & 0xf;
    *(uint *)0x2180 = uVar3 >> 4 & 0xf;
    if ((uVar3 & 0x100) != 0) {
      piVar1 = (int *)0x217e;
      *piVar1 = *piVar1 + 0x10;
    }
    if ((uVar3 & 0x200) != 0) {
      piVar1 = (int *)0x2180;
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
  puVar5 = (undefined2 *)(iVar4 * 0x100 + 0x6608);
  puVar7 = (undefined2 *)(iVar3 * 0x100 + 0x6608);
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
  puVar5 = (undefined2 *)((iVar4 + param_1 + param_2 * 2) * 0x100 + 0x6608);
  puVar7 = (undefined2 *)((iVar3 + param_1 + param_2 * 2) * 0x100 + 0x6608);
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
  
  if (*(char *)0x5895 == '\0') {
    local_4 = 0x3989;
  }
  else {
    local_4 = 0x3992;
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
    if ((*(char *)(iVar3 + 0x1e8a) == *(char *)0x5896) &&
       (*(char *)(iVar3 + 0x1eb2) == *(char *)0x5897)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 < 0x20) {
    if ((iVar3 < 0xd) || (0x11 < iVar3)) {
      func_0x000075c0(0x399c);
      func_0x0000742a(0xfc);
      func_0x000075c0(*(undefined2 *)(iVar3 * 2 + 0x1e3a));
      func_0x0000742a(0xfb);
    }
    func_0x0000742a(10);
    if (*(char *)0xa9bd != '\x01') {
      func_0x0000828e(1);
      do {
        iVar1 = func_0x000073e4(0x399f);
      } while (iVar1 == 0);
    }
    uVar2 = FUN_0000_0368();
    func_0x00008348(0x100,0x5c5a,uVar2);
    local_6 = (char)iVar3;
    *(char *)0x5893 = local_6 + '\x01';
    *(undefined *)0x5895 = 0;
    *(undefined *)0x5896 = 0xf;
    *(undefined *)0x5897 = 0x1e;
    local_4 = 0;
  }
  else {
    func_0x000075c0(0x39a8);
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
  
  func_0x000075c0(0x39b5);
  func_0x0000d936(1,0);
  func_0x00009856(1);
  func_0x0000d936(1,0);
  func_0x0000a11e(300,1,800,0x9c4);
  uVar1 = *(undefined *)0x587c;
  *(undefined *)0x587c = 0;
  func_0x00009856(1);
  if (*(char *)0x585b != '\0') {
    pcVar5 = (char *)0x55b3;
    local_a = (byte *)0x55b5;
    uVar4 = 0;
    do {
      if ((*pcVar5 != 'D') && (uVar2 = func_0x0000982e(), *local_a <= uVar2)) {
        func_0x000087c2(1,uVar4);
      }
      pcVar5 = pcVar5 + 0x20;
      local_a = local_a + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)0x585b);
  }
  func_0x00009856(2);
  *(undefined *)0x587c = uVar1;
  if ((*(char *)0x5896 == '6') && (*(char *)0x5897 == -0x76)) {
    func_0x000075c0(0x39c3);
    *(undefined *)0x5895 = 0xff;
    func_0x00008348(0x100,0x5c5a,0x39de);
    func_0x000082de(0,0x100,0x5c5a,0x39e7);
    func_0x0000828e(5);
    do {
      iVar3 = func_0x000073e4(0x39f1);
    } while (iVar3 == 0);
    func_0x00008348(0x100,0x5c5a,0x39fb);
    func_0x0000d8ee();
  }
  return;
}



void __cdecl16near FUN_0000_0566(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined *local_8;
  
  if (*(char *)0x5895 != '\0') {
    if (*(char *)0x57b3 == '\0') {
      *(undefined *)0x5d3b = 0xb7;
      *(undefined *)0x5d3a = 0xb7;
      *(undefined *)0x5d3c = 0x69;
      *(undefined *)0x5d3d = 0xe1;
      *(undefined *)0x5d3e = 0xff;
      *(undefined *)0x5d3f = 0xf3;
    }
    iVar1 = 0;
    local_8 = (undefined *)0x5d42;
    do {
      if ((*(char *)(iVar1 + 0x57b6) == '\0') && (*(byte *)(iVar1 + 0x58c8) < 0x80)) {
        local_8[1] = 0xb4;
        *local_8 = 0xb4;
        local_8[2] = *(undefined *)(iVar1 + 0x3a06);
        local_8[3] = *(undefined *)(iVar1 + 0x3a0a);
        local_8[4] = 0xff;
        local_8[5] = *(undefined *)(iVar1 + 0x3a0e);
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
  if (*(char *)0x585b != '\0') {
    pcVar2 = (char *)0x55b3;
    pbVar3 = (byte *)0x55b5;
    do {
      if ((*pcVar2 != 'D') && (*pcVar2 != 'P')) {
        uVar1 = func_0x00007e02(0x1e,1);
        if (*pbVar3 < uVar1) {
          *pcVar2 = 'P';
          func_0x000075c0(0x3a1b);
        }
      }
      pcVar2 = pcVar2 + 0x20;
      pbVar3 = pbVar3 + 0x20;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)0x585b);
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
  
  func_0x000075c0(0x7750);
  func_0x00007f02(6,0x9c4,10000,1,0xa3c);
  puVar6 = (undefined2 *)0x3a26;
  do {
    func_0x00007f02(0xd,200,5000,1,*puVar6);
    puVar6 = puVar6 + 1;
  } while (puVar6 < (undefined2 *)0x3a32);
  local_4 = (undefined *)0x5caa;
  *(undefined *)0x5cad = 5;
  *(undefined *)0x5cac = 5;
  *(undefined *)0x5cab = 0x16;
  *(undefined *)0x5caa = 0x16;
  func_0x00006dd8(5,5,0x174);
  *(undefined *)0x5cab = 0x74;
  *(undefined *)0x5caa = 0x74;
  local_8 = 0;
  do {
    if (*(byte *)0x585b <= local_8) {
      func_0x000075c0(0x77e0);
      uVar3 = (uint)(*(byte *)0x5888 / 0x14);
      if (uVar3 < 4) {
        uVar10 = 0x77e4;
        uVar9 = *(undefined2 *)(uVar3 * 2 + 0x1a74);
      }
      else {
        uVar10 = 0x77ee;
        uVar9 = 0x29f;
      }
      func_0x000082de(uVar9,2000,0xb21e,uVar10);
      func_0x000075c0(0xb21e);
      func_0x0000742a(0x22);
      func_0x000083dc();
      func_0x000075c0(0x77f8);
      *(undefined *)0x5cab = 0x16;
      *(undefined *)0x5caa = 0x16;
      func_0x00006dd8(5,5,*(undefined *)0xadb9);
      *(undefined *)0x5cab = 0;
      *(undefined *)0x5caa = 0;
      func_0x00009856(1);
      func_0x0000acec(0);
      return;
    }
    if (*(char *)(local_8 * 0x20 + 0x55b3) != 'D') {
      iVar5 = local_8 * 0x20;
      *(undefined2 *)(iVar5 + 0x55b8) = *(undefined2 *)(iVar5 + 0x55ba);
      *(undefined *)(iVar5 + 0x55b3) = 0x47;
      pbVar8 = (byte *)0xba17;
      pbVar7 = (byte *)0xba18;
      do {
        if (*pbVar8 == local_8) {
          local_4 = (undefined *)((uint)*pbVar7 * 8 + 0x5c5a);
          break;
        }
        pbVar8 = pbVar8 + 8;
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < (byte *)0xbb18);
      iVar5 = func_0x0000aae6(*(undefined *)(local_8 * 0x20 + 0x55b2),0x7760);
      uVar2 = *(undefined *)(iVar5 + 0x1ade);
      local_4[1] = uVar2;
      *local_4 = uVar2;
      *(undefined *)0x5cb0 = 0;
      func_0x00009856(1);
      func_0x00007f02(0xd,200,5000,1,0x157c);
      func_0x000067e0(*(undefined2 *)0x13b0);
      func_0x000068f6(0xb7,0xb7,8,8);
      func_0x00007f02(1,0x9c4,60000,1,0x157c);
      iVar5 = 3;
      do {
        *(undefined *)0x5cb0 = 1;
        func_0x00009856(1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_e = 1;
      for (iVar5 = *(int *)(local_8 * 0x20 + 0x55bc) / 100; 0 < iVar5; iVar5 = iVar5 >> 1) {
        local_e = local_e + 1;
      }
      iVar5 = local_8 * 0x20;
      if (*(byte *)(iVar5 + 0x55be) != local_e) {
        *(undefined *)(iVar5 + 0x55be) = (undefined)local_e;
        *(int *)(iVar5 + 0x55ba) = local_e * 0x1e;
        *(int *)(iVar5 + 0x55b8) = local_e * 0x1e;
        func_0x000075c0(0x776a);
        func_0x000075c0(iVar5 + 0x55a8);
        func_0x000075c0(0x7774);
        func_0x000075c0(0x77a4);
        func_0x000077ae(0x20,1,local_e);
        func_0x000075c0(0x77b8);
        iVar5 = func_0x00007e02(3,1);
        if (iVar5 == 1) {
          func_0x000075c0(0x77c0);
          iVar5 = local_8 * 0x20 + 0x55b4;
LAB_0000_077f:
          func_0x00009c60(0x1e,1,iVar5);
        }
        else {
          if (iVar5 == 2) {
            func_0x000075c0(0x77ca);
            iVar5 = local_8 * 0x20 + 0x55b5;
            goto LAB_0000_077f;
          }
          if (iVar5 == 3) {
            func_0x000075c0(0x77d4);
            iVar5 = local_8 * 0x20 + 0x55b6;
            goto LAB_0000_077f;
          }
        }
        func_0x000075c0(0x77dc);
        func_0x000083dc();
        func_0x0000742a(10);
      }
    }
    cVar1 = *(char *)(local_8 * 0x20 + 0x55b2);
    if (cVar1 == 'A') {
LAB_0000_07e6:
      bVar4 = *(byte *)(local_8 * 0x20 + 0x55b6);
LAB_0000_07f1:
      *(byte *)(local_8 * 0x20 + 0x55b7) = bVar4;
    }
    else {
      if (cVar1 == 'B') {
        bVar4 = *(byte *)(local_8 * 0x20 + 0x55b6) >> 1;
        goto LAB_0000_07f1;
      }
      if (cVar1 == 'M') goto LAB_0000_07e6;
    }
    func_0x00008670();
    local_8 = local_8 + 1;
  } while( true );
}


