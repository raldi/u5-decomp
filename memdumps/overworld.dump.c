


int FUN_0000_a080(int param_1_00,uint param_1)

{
  int iVar1;
  int uVar2;
  int unaff_DS;
  int uVar3;
  int uVar4;

  if ((*(byte *)0x587c & 0xfc) == 0x20) {
    if (param_1 != *(byte *)0x5955) {
      *(int *)0x5955 = (int)param_1;
      *(int *)0x5883 = 0;
    }
    *(int *)FUN_0000_5956 = 0;
  }
  if ((*(char *)0x587c == '\x1c') || ((*(byte *)0x587c & 0xfe) == 0x12)) {
    FUN_0000_5d5e();
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_1 == 1) {
    uVar4 = 0xffff;
    iVar1 = FUN_0000_9cca(3,0,0xffff);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_0000_a0fe;
    uVar2 = 0x29ef;
  }
  else if (param_1 == 2) {
    uVar4 = 1;
    iVar1 = FUN_0000_9cca(1,0,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_0000_a0fe;
    uVar2 = 0x29e9;
  }
  else if (param_1 == 3) {
    uVar3 = 0xffff;
    iVar1 = FUN_0000_9cca(0,0xffff);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_0000_a0fe;
    uVar2 = 0x29db;
  }
  else {
    if (param_1 != 4) goto LAB_0000_a0fe;
    uVar3 = 1;
    iVar1 = FUN_0000_9cca(2,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_0000_a0fe;
    uVar2 = 0x29e2;
  }
  FUN_0000_3270(uVar2);
LAB_0000_a0fe:
  iVar1 = FUN_0000_9dee(uVar3,uVar4);
  if ((param_1_00 == 0) && (iVar1 != 0)) {
    if ((*(byte *)0x587c & 0xfe) == 0x12) {
      FUN_0000_5d5e();
    }
    FUN_0000_9f44(uVar3,uVar4);
    FUN_0000_9fd0();
  }
  return iVar1;
}



void FUN_0000_a912(void)

{
  int iVar1;
  int unaff_DS;
  int local_8;

  FUN_0000_9bf0();
  if (0x3f < *(byte *)0x6605) {
    iVar1 = FUN_0000_5304();
    iVar1 = iVar1 * 8;
    *(byte *)(iVar1 + 0x5c61) = *(byte *)0x6605 & 0x3f;
    *(int *)(iVar1 + 0x5c5c) = *(int *)0x5953;
    *(int *)(iVar1 + 0x5c5d) = *(int *)0x5954;
    *(int *)(iVar1 + 0x5c5e) = 0;
    if (*(byte *)0x6605 < 0x80) {
      local_8 = 0x29;
    }
    else {
      local_8 = 0x25;
    }
    *(int *)(iVar1 + 0x5c5b) = local_8;
    *(int *)(iVar1 + 0x5c5a) = local_8;
    *(int *)(iVar1 + 0x5c5f) = 99;
    *(int *)0x6605 = 0;
  }
  FUN_0000_a674();
  return;
}



bool FUN_0000_bcb0(uint param_1)

{
  int iVar1;
  int unaff_DS;

  iVar1 = 0;
  do {
    if ((uint)*(byte *)(iVar1 + 0x3866) == param_1 >> 8) {
      return *(char *)(iVar1 + 0x58d0) == '\0';
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return true;
}



bool FUN_0000_bcfa(int param_1)

{
  int iVar1;
  int unaff_DS;

  iVar1 = 0;
  do {
    if ((uint)*(byte *)(iVar1 + 0x386e) == param_1 >> 8) {
      return 0x7f < *(byte *)(iVar1 + 0x58d8);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return false;
}



void FUN_0000_bd48(uint param_1,int param_2,char *param_3)

{
  int *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *puVar6;
  int iVar7;
  int unaff_DI;
  int unaff_DS;
  int in_stack_0000fff4;
  int in_stack_0000fff6;
  int iVar8;
  uint local_4;

  if (*param_3 == 'B') {
    bVar2 = *(byte *)((param_1 >> 8) + 0x3876);
    if (bVar2 == 0xff) {
      puVar6 = (int *)((int)FUN_0000_6608 + param_2 * 0x100);
      for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = 1;
      }
      FUN_0000_be5c(unaff_DI,in_stack_0000fff4,in_stack_0000fff6);
      return;
    }
    local_4 = (uint)bVar2 << 8;
  }
  else {
    local_4 = param_1;
  }
  if (*(char *)0x5895 != '\0') {
    FUN_0000_3f3e(5);
  }
  FUN_0000_3f8e(local_4,0x100,(int)FUN_0000_6608 + param_2 * 0x100,param_3);
  uVar3 = (int)param_1 >> 4 & 0xf0;
  uVar4 = (int)param_1 >> 8 & 0xf0;
  iVar7 = 0;
  do {
    for (iVar8 = 0; iVar8 < 0x10; iVar8 = iVar8 + 1) {
      bVar2 = *(byte *)((int)FUN_0000_6608 + iVar8 + param_2 * 0x100 + iVar7 * 0x10);
      if (0x15 < bVar2) {
        if (bVar2 < 0x19) {
          iVar5 = FUN_0000_bcb0(param_1);
          if (iVar5 != 0) {
            puVar6 = (int *)FUN_0000_5e22(iVar7 + uVar4,iVar8 + uVar3);
            *puVar6 = 0xdf;
          }
        }
        else if ((bVar2 == 0x19) && (iVar5 = FUN_0000_bcfa(param_1), iVar5 != 0)) {
          puVar6 = (int *)FUN_0000_5e22(iVar7 + uVar4,iVar8 + uVar3);
          *puVar6 = 0x1a;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  return;
}



void FUN_0000_be5c(void)

{
  return;
}



void FUN_0000_be64(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_DS;
  int local_6;
  int local_4;

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
    FUN_0000_bd48(iVar2,0,local_4);
  }
  if ((param_2 == 1) || (param_1 == -1)) {
    FUN_0000_bd48(iVar2 + local_6,1,local_4);
  }
  if ((param_2 == -1) || (param_1 == 1)) {
    FUN_0000_bd48(CONCAT11((char)((uint)iVar2 >> 8) + '\x10',(char)iVar2),2,local_4);
  }
  if ((param_2 == 1) || (param_1 == 1)) {
    FUN_0000_bd48(CONCAT11((char)((uint)(iVar2 + local_6) >> 8) + '\x10',(char)(iVar2 + local_6)),3,
                  local_4);
  }
  iVar2 = FUN_0000_1e22((int)FUN_0000_6608,0x1b,0x400);
  if (iVar2 == 0) {
    *(int *)0x2180 = 0xffff;
    *(int *)0x217e = 0xffff;
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



void FUN_0000_bf78(int param_1,int param_2)

{
  int *puVar1;
  int *puVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int iVar6;
  int *puVar7;
  int unaff_DS;

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
  puVar5 = (int *)((int)FUN_0000_6608 + iVar4 * 0x100);
  puVar7 = (int *)((int)FUN_0000_6608 + iVar3 * 0x100);
  for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar7;
    puVar7 = (int *)((int)puVar7 + 1);
    puVar1 = puVar5;
    puVar5 = (int *)((int)puVar5 + 1);
    *(int *)puVar2 = *(int *)puVar1;
  }
  puVar5 = (int *)((int)FUN_0000_6608 + (iVar4 + param_1 + param_2 * 2) * 0x100);
  puVar7 = (int *)((int)FUN_0000_6608 + (iVar3 + param_1 + param_2 * 2) * 0x100);
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar7;
    puVar7 = (int *)((int)puVar7 + 1);
    puVar1 = puVar5;
    puVar5 = (int *)((int)puVar5 + 1);
    *(int *)puVar2 = *(int *)puVar1;
  }
  return;
}



int FUN_0000_c018(void)

{
  int unaff_DS;
  int local_4;

  if (*(char *)0x5895 == '\0') {
    local_4 = 0x3989;
  }
  else {
    local_4 = 0x3992;
  }
  return local_4;
}



int FUN_0000_c038(int param_1)

{
  int iVar1;
  int uVar2;
  int iVar3;
  int unaff_DS;
  char local_6;
  int local_4;

  local_4 = 1;
  FUN_0000_3270(param_1);
  iVar3 = 0;
  do {
    if ((*(char *)(iVar3 + 0x1e8a) == *(char *)0x5896) &&
       (*(char *)(iVar3 + 0x1eb2) == *(char *)0x5897)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 < 0x20) {
    if ((iVar3 < 0xd) || (0x11 < iVar3)) {
      FUN_0000_3270(0x399c);
      FUN_0000_30da(0xfc);
      FUN_0000_3270(*(int *)(iVar3 * 2 + 0x1e3a));
      FUN_0000_30da(0xfb);
    }
    FUN_0000_30da(10);
    if (*(char *)0xa9bd != '\x01') {
      FUN_0000_3f3e(1);
      do {
        iVar1 = FUN_0000_3094(0x399f);
      } while (iVar1 == 0);
    }
    uVar2 = FUN_0000_c018();
    FUN_0000_3ff8(0x100,0x5c5a,uVar2);
    local_6 = (char)iVar3;
    *(char *)0x5893 = local_6 + '\x01';
    *(int *)0x5895 = 0;
    *(int *)0x5896 = 0xf;
    *(int *)0x5897 = 0x1e;
    local_4 = 0;
  }
  else {
    FUN_0000_3270(0x39a8);
  }
  return local_4;
}



void FUN_0000_c108(void)

{
  FUN_0000_3270(0x39b5);
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(0);
}



void FUN_0000_c216(void)

{
  int iVar1;
  int unaff_DS;
  int *local_8;

  if (*(char *)0x5895 != '\0') {
    if (*(char *)0x57b3 == '\0') {
      *(int *)0x5d3b = 0xb7;
      *(int *)0x5d3a = 0xb7;
      *(int *)0x5d3c = 0x69;
      *(int *)0x5d3d = 0xe1;
      *(int *)0x5d3e = 0xff;
      *(int *)0x5d3f = 0xf3;
    }
    iVar1 = 0;
    local_8 = (int *)0x5d42;
    do {
      if ((*(char *)(iVar1 + 0x57b6) == '\0') && (*(byte *)(iVar1 + 0x58c8) < 0x80)) {
        local_8[1] = 0xb4;
        *local_8 = 0xb4;
        local_8[2] = *(int *)(iVar1 + 0x3a06);
        local_8[3] = *(int *)(iVar1 + 0x3a0a);
        local_8[4] = 0xff;
        local_8[5] = *(int *)(iVar1 + 0x3a0e);
      }
      local_8 = local_8 + 8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}



void FUN_0000_c2ac(void)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  int unaff_DS;
  uint local_4;

  local_4 = 0;
  if (*(char *)0x585b != '\0') {
    pcVar2 = (char *)0x55b3;
    pbVar3 = (byte *)0x55b5;
    do {
      if ((*pcVar2 != 'D') && (*pcVar2 != 'P')) {
        uVar1 = RANDOM(0x1e,1);
        if (*pbVar3 < uVar1) {
          *pcVar2 = 'P';
          FUN_0000_3270(0x3a1b);
        }
      }
      pcVar2 = pcVar2 + 0x20;
      pbVar3 = pbVar3 + 0x20;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)0x585b);
  }
  return;
}



void FUN_0000_c308(void)

{
  char cVar1;
  int uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  int unaff_DS;
  int uVar9;
  int uVar10;
  uint uStack_e;
  uint local_8;
  int *puStack_4;

  FUN_0000_3270(0x7750);
  FUN_0000_3bb2(6,0x9c4,10000,1,0xa3c);
  puVar6 = (int *)0x3a26;
  do {
    FUN_0000_3bb2(0xd,200,(int)&DAT_0000_1388,1,*puVar6);
    puVar6 = puVar6 + 1;
  } while (puVar6 < (int *)0x3a32);
  puStack_4 = (int *)0x5caa;
  *(int *)0x5cad = 5;
  *(int *)0x5cac = 5;
  *(int *)0x5cab = 0x16;
  *(int *)0x5caa = 0x16;
  FUN_0000_2a88(5,5,0x174);
  *(int *)0x5cab = 0x74;
  *(int *)0x5caa = 0x74;
  local_8 = 0;
  do {
    if (*(byte *)0x585b <= local_8) {
      FUN_0000_3270(0x77e0);
      uVar3 = (uint)(*(byte *)0x5888 / 0x14);
      if (uVar3 < 4) {
        uVar10 = 0x77e4;
        uVar9 = *(int *)(uVar3 * 2 + 0x1a74);
      }
      else {
        uVar10 = 0x77ee;
        uVar9 = 0x29f;
      }
      FUN_0000_3f8e(uVar9,2000,0xb21e,uVar10);
      FUN_0000_3270(0xb21e);
      FUN_0000_30da(0x22);
      FUN_0000_408c();
      FUN_0000_3270(0x77f8);
      *(int *)0x5cab = 0x16;
      *(int *)0x5caa = 0x16;
      FUN_0000_2a88(5,5,*(int *)0xadb9);
      *(int *)0x5cab = 0;
      *(int *)0x5caa = 0;
      FUN_0000_5506(1);
      FUN_0000_699c(0);
      return;
    }
    if (*(char *)(local_8 * 0x20 + 0x55b3) != 'D') {
      iVar5 = local_8 * 0x20;
      *(int *)(iVar5 + 0x55b8) = *(int *)(iVar5 + 0x55ba);
      *(int *)(iVar5 + 0x55b3) = 0x47;
      pbVar8 = (byte *)0xba17;
      pbVar7 = (byte *)0xba18;
      do {
        if (*pbVar8 == local_8) {
          puStack_4 = (int *)((uint)*pbVar7 * 8 + 0x5c5a);
          break;
        }
        pbVar8 = pbVar8 + 8;
        pbVar7 = pbVar7 + 8;
      } while (pbVar7 < (byte *)0xbb18);
      iVar5 = FUN_0000_6796(*(int *)(local_8 * 0x20 + 0x55b2),0x7760);
      uVar2 = *(int *)(iVar5 + 0x1ade);
      puStack_4[1] = uVar2;
      *puStack_4 = uVar2;
      *(int *)0x5cb0 = 0;
      FUN_0000_5506(1);
      FUN_0000_3bb2(0xd,200,(int)&DAT_0000_1388,1,(int)&DAT_0000_157c);
      FUN_0000_2490(*(int *)0x13b0);
      FUN_0000_25a6(0xb7,0xb7,8,8);
      FUN_0000_3bb2(1,0x9c4,60000,1,(int)&DAT_0000_157c);
      iVar5 = 3;
      do {
        *(int *)0x5cb0 = 1;
        FUN_0000_5506(1);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      uStack_e = 1;
      for (iVar5 = *(int *)(local_8 * 0x20 + 0x55bc) / 100; 0 < iVar5; iVar5 = iVar5 >> 1) {
        uStack_e = uStack_e + 1;
      }
      iVar5 = local_8 * 0x20;
      if (*(byte *)((int)FUN_0000_55be + iVar5) != uStack_e) {
        *(int *)((int)FUN_0000_55be + iVar5) = (int)uStack_e;
        *(int *)(iVar5 + 0x55ba) = uStack_e * 0x1e;
        *(int *)(iVar5 + 0x55b8) = uStack_e * 0x1e;
        FUN_0000_3270(0x776a);
        FUN_0000_3270(iVar5 + 0x55a8);
        FUN_0000_3270(0x7774);
        FUN_0000_3270(0x77a4);
        FUN_0000_345e(0x20,1,uStack_e);
        FUN_0000_3270(0x77b8);
        iVar5 = RANDOM(3,1);
        if (iVar5 == 1) {
          FUN_0000_3270(0x77c0);
          iVar5 = local_8 * 0x20 + 0x55b4;
LAB_0000_c42f:
          FUN_0000_5910(0x1e,1,iVar5);
        }
        else {
          if (iVar5 == 2) {
            FUN_0000_3270(0x77ca);
            iVar5 = local_8 * 0x20 + 0x55b5;
            goto LAB_0000_c42f;
          }
          if (iVar5 == 3) {
            FUN_0000_3270(0x77d4);
            iVar5 = local_8 * 0x20 + 0x55b6;
            goto LAB_0000_c42f;
          }
        }
        FUN_0000_3270(0x77dc);
        FUN_0000_408c();
        FUN_0000_30da(10);
      }
    }
    cVar1 = *(char *)(local_8 * 0x20 + 0x55b2);
    if (cVar1 == 'A') {
LAB_0000_c496:
      bVar4 = *(byte *)(local_8 * 0x20 + 0x55b6);
LAB_0000_c4a1:
      *(byte *)(local_8 * 0x20 + 0x55b7) = bVar4;
    }
    else {
      if (cVar1 == 'B') {
        bVar4 = *(byte *)(local_8 * 0x20 + 0x55b6) >> 1;
        goto LAB_0000_c4a1;
      }
      if (cVar1 == 'M') goto LAB_0000_c496;
    }
    FUN_0000_4320();
    local_8 = local_8 + 1;
  } while( true );
}



int switchD_0000:dadb::caseD_0(void)

{
  char *pcVar1;
  char in_AL;
  int iVar2;
  int in_BX;
  int unaff_SI;
  int unaff_DS;

  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(in_BX + unaff_SI);
  *pcVar1 = *pcVar1 + in_AL;
  iVar2 = 0x20;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return 0;
    }
  } while (*(char *)(iVar2 * 8 + 0x5c5a) != '\0');
  return iVar2;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x000046c9) overlaps instruction at (ram,0x000046c8)
//
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Unable to track spacebase fully for stack

int * FUN_0000_daca(int param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  int uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int *puVar12;
  int iVar13;
  int *puVar14;
  uint in_CX;
  int in_DX;
  byte bVar15;
  char **ppcVar16;
  int *in_BX;
  byte bVar17;
  uint uVar18;
  char *pcVar19;
  char *unaff_SI;
  char *unaff_DI;
  int unaff_ES;
  int unaff_SS;
  int unaff_DS;
  bool bVar20;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  int *in_stack_00000000;
  int local_10;
  int uStack_f;
  int uStack_e;
  int uStack_d;
  uint local_8;
  char in_stack_0000fffc;

  pbVar10 = (byte *)CONCAT11(uStack_d,uStack_e);
  puVar12 = &stack0xfffe;
  uVar11 = param_1 - 1;
  if (0x1e < uVar11) {
    puVar12 = (int *)FUN_0000_3270();
    return puVar12;
  }
  ppcVar16 = (char **)(uVar11 * 2);
  bVar20 = (POPCOUNT((uint)ppcVar16 & 0xff) & 1U) == 0;
  bVar7 = (byte)in_BX;
  bVar15 = (byte)((uint)in_DX >> 8);
  bVar17 = (byte)((uint)ppcVar16 >> 8);
  switch(uVar11) {
  case 0:
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
    puVar12 = (int *)0x20;
    do {
      puVar12 = puVar12 + -1;
      if ((int)puVar12 < 0) {
        return (int *)0x0;
      }
    } while (*(char *)((int)puVar12 * 8 + 0x5c5a) != '\0');
    return puVar12;
  case 1:
    do {
      if (*(char *)(local_8 * 0x20 + 0x55b3) != 'D') {
        iVar13 = local_8 * 0x20;
        *(int *)(iVar13 + 0x55b8) = *(int *)(iVar13 + 0x55ba);
        *(int *)(iVar13 + 0x55b3) = 0x47;
        pbVar10 = (byte *)0xba17;
        uVar11 = 0xba18;
        do {
          if (*pbVar10 == local_8) break;
          pbVar10 = pbVar10 + 8;
          uVar11 = uVar11 + 8;
        } while (uVar11 < 0xbb18);
        puVar12 = (int *)0x7760;
        iVar13 = FUN_0000_6796();
        uVar5 = *(int *)(iVar13 + 0x1ade);
        puVar12[1] = uVar5;
        *puVar12 = uVar5;
        *(int *)0x5cb0 = 0;
        FUN_0000_5506();
        FUN_0000_3bb2();
        FUN_0000_2490();
        FUN_0000_25a6();
        local_8 = 60000;
        FUN_0000_3bb2();
        iVar13 = 3;
        do {
          *(int *)0x5cb0 = 1;
          FUN_0000_5506();
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        uVar11 = 1;
        for (iVar13 = *(int *)0xa1bc / 100; 0 < iVar13; iVar13 = iVar13 >> 1) {
          uVar11 = uVar11 + 1;
        }
        uStack_e = (int)uVar11;
        if (*(byte *)0xa1be != uVar11) {
          *(int *)0xa1be = uStack_e;
          *(int *)0xa1ba = uVar11 * 0x1e;
          *(int *)0xa1b8 = uVar11 * 0x1e;
          FUN_0000_3270();
          FUN_0000_3270();
          FUN_0000_3270();
          FUN_0000_3270();
          FUN_0000_345e();
          FUN_0000_3270();
          local_8 = 0xc40d;
          iVar13 = RANDOM();
          if (iVar13 == 1) {
            FUN_0000_3270();
LAB_0000_c42f:
            local_8 = 0x1e;
            FUN_0000_5910();
          }
          else {
            if (iVar13 == 2) {
              FUN_0000_3270();
              goto LAB_0000_c42f;
            }
            if (iVar13 == 3) {
              FUN_0000_3270();
              goto LAB_0000_c42f;
            }
          }
          FUN_0000_3270();
          FUN_0000_408c();
          FUN_0000_30da();
        }
      }
      cVar8 = *(char *)(local_8 * 0x20 + 0x55b2);
      if (cVar8 == 'A') {
LAB_0000_c496:
        bVar7 = *(byte *)(local_8 * 0x20 + 0x55b6);
LAB_0000_c4a1:
        *(byte *)(local_8 * 0x20 + 0x55b7) = bVar7;
      }
      else {
        if (cVar8 == 'B') {
          bVar7 = *(byte *)(local_8 * 0x20 + 0x55b6) >> 1;
          goto LAB_0000_c4a1;
        }
        if (cVar8 == 'M') goto LAB_0000_c496;
      }
      FUN_0000_4320();
      local_8 = local_8 + 1;
      if (*(byte *)0x585b <= local_8) {
        FUN_0000_3270();
        FUN_0000_3f8e();
        FUN_0000_3270();
        FUN_0000_30da();
        FUN_0000_408c();
        FUN_0000_3270();
        *(int *)0x5cab = 0x16;
        *(int *)0x5caa = 0x16;
        FUN_0000_2a88();
        *(int *)0x5cab = 0;
        *(int *)0x5caa = 0;
        FUN_0000_5506();
        puVar12 = (int *)FUN_0000_699c();
        return puVar12;
      }
    } while( true );
  case 2:
    *(int *)0x5876 = 0;
    *(int *)0x5878 = 0;
    while (((bVar7 = FUN_0000_408c(), bVar7 != 0x20 && (bVar7 != 3)) && (bVar7 != 4))) {
      if ((bVar7 == 1) || (bVar7 == 2)) break;
    }
    puVar12 = (int *)(uint)bVar7;
    if (puVar12 == (int *)0x1) {
      FUN_0000_3270();
      piVar2 = (int *)0x5876;
      *piVar2 = *piVar2 + -1;
    }
    else if (puVar12 == (int *)0x2) {
      FUN_0000_3270();
      piVar2 = (int *)0x5876;
      *piVar2 = *piVar2 + 1;
    }
    else if (puVar12 == (int *)0x3) {
      FUN_0000_3270();
      piVar2 = (int *)0x5878;
      *piVar2 = *piVar2 + -1;
    }
    else {
      if (puVar12 != (int *)0x4) {
        if ((puVar12 != (int *)0x1b) && (puVar12 != (int *)0x20)) {
          return puVar12;
        }
        FUN_0000_3270();
        return (int *)0x0;
      }
      FUN_0000_3270();
      piVar2 = (int *)0x5878;
      *piVar2 = *piVar2 + 1;
    }
    return (int *)0x1;
  case 3:
switchD_0000_dadb_caseD_3:
    pcVar3 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar3 = '\0';
    do {
      do {
        pcVar3 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        cVar8 = *pcVar3;
      } while (cVar8 == ' ');
    } while (cVar8 == '\t');
    if ((cVar8 == '\r') || (cVar8 == '\0')) {
LAB_0000_214a:
      *ppcVar16 = (char *)0x0;
                    // WARNING: Could not recover jumptable at 0x00002150. Too many branches
                    // WARNING: Treating indirect jump as call
      puVar12 = (int *)(**(code **)0x52b8)();
      return puVar12;
    }
    *ppcVar16 = unaff_DI;
    ppcVar16 = ppcVar16 + 1;
    do {
      unaff_SI = unaff_SI + -1;
LAB_0000_20d8:
      pcVar3 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      cVar8 = *pcVar3;
      if ((cVar8 == ' ') || (cVar8 == '\t')) goto switchD_0000_dadb_caseD_3;
      if ((cVar8 == '\r') || (cVar8 == '\0')) {
LAB_0000_2147:
        *unaff_DI = '\0';
        goto LAB_0000_214a;
      }
      pcVar19 = unaff_SI;
      if (cVar8 == '\"') {
LAB_0000_2114:
        while( true ) {
          unaff_SI = pcVar19 + 1;
          cVar8 = *pcVar19;
          if ((cVar8 == '\r') || (cVar8 == '\0')) goto LAB_0000_2147;
          if (cVar8 == '\"') break;
          if (cVar8 == '\\') {
            uVar11 = 0;
            do {
              pcVar19 = unaff_SI;
              uVar11 = uVar11 + 1;
              unaff_SI = pcVar19 + 1;
              cVar8 = *pcVar19;
            } while (cVar8 == '\\');
            if (cVar8 == '\"') {
              for (uVar18 = uVar11 >> 1; uVar18 != 0; uVar18 = uVar18 - 1) {
                pcVar3 = unaff_DI;
                unaff_DI = unaff_DI + 1;
                *pcVar3 = '\\';
              }
              if ((uVar11 & 1) == 0) break;
              pcVar3 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pcVar3 = '\"';
              pcVar19 = unaff_SI;
            }
            else {
              for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                pcVar3 = unaff_DI;
                unaff_DI = unaff_DI + 1;
                *pcVar3 = '\\';
              }
            }
          }
          else {
            pcVar3 = unaff_DI;
            unaff_DI = unaff_DI + 1;
            *pcVar3 = cVar8;
            pcVar19 = unaff_SI;
          }
        }
        goto LAB_0000_20d8;
      }
      if (cVar8 != '\\') {
        pcVar3 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *pcVar3 = cVar8;
        goto LAB_0000_20d8;
      }
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 1;
        pcVar3 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        cVar8 = *pcVar3;
      } while (cVar8 == '\\');
      if (cVar8 == '\"') {
        for (uVar18 = uVar11 >> 1; uVar18 != 0; uVar18 = uVar18 - 1) {
          pcVar3 = unaff_DI;
          unaff_DI = unaff_DI + 1;
          *pcVar3 = '\\';
        }
        pcVar19 = unaff_SI;
        if ((uVar11 & 1) == 0) goto LAB_0000_2114;
        pcVar3 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *pcVar3 = '\"';
        goto LAB_0000_20d8;
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        pcVar3 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *pcVar3 = '\\';
      }
    } while( true );
  case 4:
    puVar12 = (int *)in(0x5d);
    return puVar12;
  case 5:
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7 + CARRY2(uVar11,uVar11);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 6:
    in(in_DX);
  case 8:
    puVar12 = (int *)FUN_0000_7330();
    return puVar12;
  case 7:
    return in_stack_00000000;
  case 9:
    cVar8 = in(in_DX);
    *unaff_DI = cVar8;
    return in_BX;
  case 10:
    *(byte *)0x5955 = bVar7;
    *(int *)0x5883 = (char)((uint)in_BX >> 8);
    *(int *)FUN_0000_5956 = 0;
    if ((*(char *)0x587c == '\x1c') || ((*(byte *)0x587c & 0xfe) == 0x12)) {
      FUN_0000_5d5e();
    }
    if (param_2 == 1) {
      puVar12 = (int *)FUN_0000_9cca();
      if (puVar12 != (int *)0x0) {
        return puVar12;
      }
      cVar8 = *(char *)0x5955;
    }
    else if (param_2 == 2) {
      puVar12 = (int *)FUN_0000_9cca();
      if (puVar12 != (int *)0x0) {
        return puVar12;
      }
      cVar8 = *(char *)0x5955;
    }
    else if (param_2 == 3) {
      puVar12 = (int *)FUN_0000_9cca();
      if (puVar12 != (int *)0x0) {
        return puVar12;
      }
      cVar8 = *(char *)0x5955;
    }
    else {
      if (param_2 != 4) goto LAB_0000_a0fe;
      puVar12 = (int *)FUN_0000_9cca();
      if (puVar12 != (int *)0x0) {
        return puVar12;
      }
      cVar8 = *(char *)0x5955;
    }
    if (cVar8 == '\0') {
      FUN_0000_3270();
    }
LAB_0000_a0fe:
    puVar12 = (int *)FUN_0000_9dee();
    if ((param_1 == 0) && (puVar12 != (int *)0x0)) {
      if ((*(byte *)0x587c & 0xfe) == 0x12) {
        FUN_0000_5d5e();
      }
      FUN_0000_9f44();
      puVar12 = (int *)0xa12c;
      FUN_0000_9fd0();
    }
    return puVar12;
  case 0xb:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  default:
    FUN_0000_3270();
    FUN_0000_3270();
    if (CONCAT11(uStack_f,local_10) == 0x4e) {
      FUN_0000_3270();
      if (*(byte *)0x5895 < 0x80) {
        puVar12 = (int *)FUN_0000_5e22();
        *puVar12 = 0xb9;
      }
      else {
        puVar12 = (int *)FUN_0000_5e22();
        *puVar12 = 0xb8;
      }
      pbVar1 = (byte *)0x24e6;
      *pbVar1 = *pbVar1 | 2;
    }
    else if (((CONCAT11(uStack_f,local_10) == 0xdc) ||
             (puVar12 = (int *)FUN_0000_dd48(), puVar12 == (int *)0x0)) &&
            (puVar12 = (int *)FUN_0000_ddfa(), puVar12 == (int *)0x0)) {
      puVar12 = (int *)FUN_0000_deb4();
    }
    return puVar12;
  case 0xd:
    puVar12 = (int *)FUN_0000_45f4();
    break;
  case 0xe:
    pbVar1 = &stack0x002b + (int)unaff_DI;
    *pbVar1 = *pbVar1 & bVar15;
    pbVar1 = (byte *)((uint)*(byte *)0x589e * 8 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xef;
    puVar12 = (int *)0x8934;
    FUN_0000_87c8();
    return puVar12;
  case 0xf:
    FUN_0000_7b0c();
    FUN_0000_79a6();
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  case 0x10:
    uVar11 = (uint)(in_NT & 1) * 0x4000 | (uint)SCARRY2(uVar11,uVar11) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((int)ppcVar16 < 0) * 0x80 | (uint)(ppcVar16 == (char **)0x0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)bVar20 * 4 | (uint)CARRY2(uVar11,uVar11);
    if (bVar20) {
      unaff_SI[0x78] = '\0';
      pbVar10 = (byte *)0x55b5;
      goto LAB_0000_b827;
    }
    piVar2 = (int *)((int)ppcVar16 + (int)unaff_SI);
    *piVar2 = (int)(in_BX + *piVar2);
    do {
      uVar18 = RANDOM();
      if (*pbVar10 < uVar18) {
        puVar12 = (int *)FUN_0000_b72e();
        return puVar12;
      }
      do {
        unaff_DI = unaff_DI + 0x20;
        pbVar10 = pbVar10 + 0x20;
        uVar11 = uVar11 + 1;
        if (*(byte *)0x585b <= uVar11) {
          puVar12 = (int *)FUN_0000_3270();
          return puVar12;
        }
LAB_0000_b827:
      } while ((*unaff_DI == 'D') || (*unaff_DI == 'S'));
      FUN_0000_3270();
      FUN_0000_3270();
      iVar13 = 3;
      do {
        FUN_0000_5506();
        FUN_0000_30da();
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      FUN_0000_3270();
    } while( true );
  case 0x11:
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar15;
    pbVar1 = (byte *)((int)ppcVar16 + (int)unaff_SI);
    *pbVar1 = *pbVar1 | bVar7;
    pbVar1 = (byte *)((int)ppcVar16 + (int)unaff_SI);
    *pbVar1 = *pbVar1 | bVar7;
    pbVar1 = (byte *)((int)ppcVar16 + (int)unaff_SI);
    *pbVar1 = *pbVar1 | bVar7;
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_SI);
    *pcVar3 = *pcVar3 + bVar7;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x12:
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_DI) + -0x2cfc;
    *pcVar3 = *pcVar3 + '\x01';
    out(0xc6,bVar7);
    ((char *)((int)ppcVar16 + (int)unaff_SI))[0x50] = (char)ppcVar16;
    FUN_0000_5910();
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  case 0x13:
    pcVar3 = unaff_DI + 0x4c;
    cVar8 = (char)(in_BX + -1);
    *pcVar3 = *pcVar3 + cVar8;
    pcVar3 = unaff_DI + 0x47 + (int)&stack0x0000;
    *pcVar3 = *pcVar3 + (char)in_DX;
    pcVar3 = &stack0x0049 + (int)unaff_DI;
    *pcVar3 = *pcVar3 + cVar8;
    pcVar3 = &stack0x003c + (int)unaff_DI;
    *pcVar3 = *pcVar3 + cVar8;
    pcVar3 = unaff_SI + 0x41;
    *pcVar3 = *pcVar3 + (char)in_DX;
    iVar9 = (int)ppcVar16 + -1;
    pcVar3 = &stack0x003a + (int)unaff_DI;
    *pcVar3 = *pcVar3 + cVar8;
    bVar7 = *(byte *)0x564f;
    pcVar3 = &stack0x0052 + (int)unaff_SI;
    *pcVar3 = *pcVar3 + (char)iVar9;
    iVar13 = CONCAT11((byte)(in_CX + 1 >> 8) ^ bVar7,(char)(in_CX + 1)) + 1;
    pcVar3 = &stack0x0047 + (int)unaff_DI;
    *pcVar3 = *pcVar3 + cVar8;
    uVar11 = in_DX + 1;
    pcVar3 = &stack0x0046 + (int)(unaff_DI + -8);
    *pcVar3 = *pcVar3 + (char)uVar11;
    bVar7 = *(byte *)0x564f;
    pcVar3 = &stack0x0046 + (int)(unaff_DI + -8);
    *pcVar3 = *pcVar3 + (char)uVar11;
    uVar18 = (uint)&stack0x0000 ^ *(uint *)0x564f;
    pcVar3 = (char *)(uVar18 + 0x4f);
    *pcVar3 = *pcVar3 + cVar8;
    pcVar19 = unaff_SI + -1;
    pcVar3 = unaff_SI + 0x40;
    *pcVar3 = *pcVar3 + cVar8;
    puVar14 = (int *)(CONCAT11((byte)((uint)iVar13 >> 8) ^ bVar7,(char)iVar13) + 1);
    pcVar3 = pcVar19 + uVar18 + 0x2ec;
    *pcVar3 = *pcVar3 + (char)iVar9;
    pbVar1 = (byte *)(pcVar19 + iVar9);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    puVar12 = in_BX + -1 + *(int *)(pcVar19 + iVar9);
    while( true ) {
      uVar11 = uVar11 - ((uint)puVar12 & 0xff);
      puVar14 = puVar14 + 1;
      if (uVar11 < (byte)puVar14[(int)pcVar19]) break;
      puVar12 = (int *)(uint)(byte)puVar14[(int)pcVar19];
    }
    *(uint *)(uVar18 - 2) = uVar11;
    *(int *)(uVar18 - 4) = (int)puVar14;
    return puVar14;
  case 0x14:
    pcVar3 = &stack0xfffe + (int)unaff_DI;
    *pcVar3 = *pcVar3 + (char)(in_CX >> 8);
    if (!CARRY1(bVar17,bVar17) && ((uint)ppcVar16 & 0x7f00) != 0) {
      *(int *)(in_BX + -2) = param_1;
      *(int *)(in_BX + -4) = 0x46d7;
      puVar12 = (int *)FUN_0000_45f4();
    }
    if (((puVar12 == (int *)0x0) || (param_1 == 0x8f)) || (param_1 == 4)) {
      puVar12 = (int *)0x0;
    }
    else {
      puVar12 = (int *)0x1;
    }
    break;
  case 0x15:
    pbVar1 = (byte *)((int)ppcVar16 + (int)unaff_SI);
    bVar17 = *pbVar1;
    bVar6 = *pbVar1 + bVar7 + bVar15;
    *pbVar1 = bVar6 + CARRY1(bVar7,bVar15);
    LOCK();
    pcVar3 = (char *)((int)ppcVar16 + (int)unaff_DI);
    *pcVar3 = *pcVar3 + (CARRY1(bVar17,bVar7 + bVar15) || CARRY1(bVar6,CARRY1(bVar7,bVar15)));
    UNLOCK();
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x16:
    if ((ppcVar16 != (char **)0x0) && (local_8 != 0x1f)) {
      if (((int)local_8 < 4) || (0xf < (int)local_8)) {
        puVar12 = (int *)0x0;
        goto LAB_0000_a00f;
      }
      if (8 < (int)local_8) {
        puVar12 = (int *)0x2;
        goto LAB_0000_a00f;
      }
    }
    puVar12 = (int *)0x1;
LAB_0000_a00f:
    if (puVar12 == (int *)0x1) {
      iVar13 = FUN_0000_b650();
      iVar13 = unaff_DS + iVar13;
      FUN_0000_9c6a();
      if (iVar13 == 0) {
        FUN_0000_3270();
      }
    }
    else {
      if (puVar12 != (int *)0x2) {
        return puVar12;
      }
      iVar13 = FUN_0000_b650();
      iVar13 = unaff_DS + iVar13;
      FUN_0000_9c6a();
      iVar9 = FUN_0000_b650();
      iVar13 = iVar13 + iVar9;
      FUN_0000_9c6a();
      if (iVar13 == 0) {
        FUN_0000_3270();
      }
    }
    puVar12 = (int *)FUN_0000_699c();
    return puVar12;
  case 0x17:
    do {
      if (in_stack_0000fffc == 'N') break;
      in_stack_0000fffc = FUN_0000_408c();
    } while (in_stack_0000fffc != 'Y');
    if (in_stack_0000fffc == 'N') {
      FUN_0000_3270();
    }
    else {
      FUN_0000_3270();
      FUN_0000_3270();
      iVar13 = FUN_0000_48ae();
      FUN_0000_30da();
      if ((iVar13 == -1) || (*(char *)(iVar13 * 0x20 + 0x55b3) != 'G')) {
        FUN_0000_3270();
      }
    }
    if (*(byte *)0x5893 < 0x21) {
      puVar12 = (int *)FUN_0000_7d80();
      *(int *)0x24e6 = 1;
      return puVar12;
    }
    *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  case 0x19:
    for (; in_CX != 0; in_CX = in_CX - 1) {
      pcVar4 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      pcVar3 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *pcVar4 = *pcVar3;
    }
    return in_BX;
  case 0x1a:
    if (in_BX == (int *)(in_CX & 0xff)) {
      pbVar10 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
      if ((*pbVar10 < 0x43) && (1 < *(byte *)0xa9c2)) {
        pbVar1 = pbVar10;
        *pbVar1 = *pbVar1 ^ 3;
        FUN_0000_38cc();
        bVar7 = *(byte *)0xa9bd;
        if (*(byte *)0x545e != bVar7) goto LAB_0000_3d8d;
      }
      pbVar10 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
      if ((*pbVar10 < 0x43) || (*pbVar10 == 0xff)) {
        if (*(char *)0xa9be == '\x02') {
          FUN_0000_2642();
          FUN_0000_3642();
          FUN_0000_2490();
          FUN_0000_24c6();
        }
        *(int *)0x545e = 0xff;
        puVar12 = (int *)FUN_0000_30c6();
        while (uVar11 = (uint)puVar12 & 0xff, *(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
          uVar11 = (uint)puVar12 & 0xff;
          puVar12 = (int *)FUN_0000_38cc();
          if (puVar12 != (int *)0x0) break;
          FUN_0000_37fa();
          puVar12 = (int *)FUN_0000_3a52();
        }
        if (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
          puVar12 = (int *)(uVar11 & 0xff);
          cVar8 = (char)puVar12;
          if (cVar8 == 'B') {
            *(int *)0xa9c2 = 2;
          }
          bVar7 = *(byte *)0xa9bd;
          *(char *)(bVar7 + 0xa9c8) = cVar8;
          if ((bVar7 == 3) && (*(char *)0xa9c9 == -1)) {
            *(char *)0xa9c9 = cVar8;
          }
        }
        if (*(char *)0xa9be == '\0') {
          puVar12 = (int *)FUN_0000_30da();
        }
        else if (*(char *)0xa9be == '\x02') {
          FUN_0000_2642();
          FUN_0000_3642();
          puVar12 = (int *)FUN_0000_298e();
        }
      }
      else {
        *pbVar10 = 0x41;
        puVar12 = (int *)FUN_0000_38cc();
        *(int *)0x545e = 0xff;
      }
    }
    else {
      FUN_0000_38cc();
      bVar7 = *(byte *)0xa9bd;
LAB_0000_3d8d:
      puVar12 = (int *)(uint)bVar7;
      *(byte *)0x545e = bVar7;
    }
    *(int *)0x5394 = 0x2322;
    *(int *)0x5396 = 0x1a2;
    return puVar12;
  case 0x1b:
    puVar12 = (int *)in(0x5d);
    return puVar12;
  case 0x1c:
    pbVar10 = (byte *)FUN_0000_5e22();
    bVar7 = *pbVar10;
    if ((bVar7 == 200) || ((bVar7 & 0xf4) == 0xc4)) {
      puVar12 = (int *)0x1;
    }
    else {
      puVar12 = (int *)0x0;
    }
    return puVar12;
  case 0x1d:
    in(in_DX);
    iVar13 = (uint)*(byte *)0x589e * 8;
    puVar12 = (int *)(iVar13 + 0xba14);
    if ((((*(char *)(iVar13 + -0x45ea) != '\0') && ((*(byte *)(iVar13 + -0x45ea) & 0x20) == 0)) &&
        (*(char *)(iVar13 + -0x45e5) == '\x02')) &&
       (puVar12 = (int *)(*(byte *)(*(byte *)(iVar13 + -0x45e6) + 0xac74) & 0xfffc),
       (char)puVar12 == '<')) {
      *(int *)0x58a0 = 0x4d;
      FUN_0000_30da();
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    return puVar12;
  case 0x1e:
    return in_BX;
  }
  return puVar12;
}



void FUN_0000_e6ea(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int *puVar11;
  int unaff_DS;
  char *local_12;
  byte *local_10;

  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_0000_e5de();
    return;
  }
  if (*(char *)0x57ac == '\0') {
    uVar4 = 0x8ad0;
  }
  else {
    iVar5 = FUN_0000_500c();
    if (iVar5 == 0) {
      return;
    }
    uVar6 = (uint)*(byte *)0x5896 + *(int *)0x5876;
    uVar7 = (uint)*(byte *)0x5897 + *(int *)0x5878;
    pbVar8 = (byte *)FUN_0000_5e22(uVar7,uVar6);
    bVar3 = *pbVar8;
    if (bVar3 < 0x99) {
      if (0x96 < bVar3) {
        uVar4 = 0x8af2;
LAB_0000_e792:
        FUN_0000_3270(uVar4);
        pcVar1 = (char *)0x57ac;
        *pcVar1 = *pcVar1 + -1;
        return;
      }
      if ((0x83 < bVar3) && (bVar3 < 0x86)) {
        if ((*(byte *)0x5893 < 0x80) &&
           (iVar5 = FUN_0000_50ae(*(int *)0x5895,uVar7,uVar6), iVar5 == 0)) {
          uVar4 = 0x8afe;
        }
        else {
          iVar5 = FUN_0000_63a8();
          if (iVar5 == -1) {
            return;
          }
          uVar9 = RANDOM(0x1d,0);
          if (*(byte *)(iVar5 * 0x20 + 0x55b5) <= uVar9) {
            uVar4 = 0x8b10;
            goto LAB_0000_e792;
          }
          if (*(byte *)0x5893 < 0x7f) {
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          puVar11 = (int *)FUN_0000_5e22(uVar7,uVar6);
          *puVar11 = 0x44;
          pbVar2 = (byte *)0x24e6;
          *pbVar2 = *pbVar2 | 2;
          uVar4 = 0x8b48;
        }
        goto LAB_0000_e710;
      }
    }
    else if ((bVar3 == 0xb9) || (bVar3 == 0xbb)) {
      iVar5 = FUN_0000_63a8();
      if (iVar5 == -1) {
        return;
      }
      uVar9 = RANDOM(0x1d,0);
      if (*(byte *)(iVar5 * 0x20 + 0x55b5) <= uVar9) {
        uVar4 = 0x8ada;
        goto LAB_0000_e792;
      }
      pcVar10 = (char *)FUN_0000_5e22(uVar7,uVar6);
      *pcVar10 = bVar3 - 1;
      pbVar2 = (byte *)0x24e6;
      *pbVar2 = *pbVar2 | 2;
      uVar4 = 0x8ae6;
      goto LAB_0000_e710;
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
      FUN_0000_e54a(iVar5,*(int *)0x5895,uVar7,uVar6);
      return;
    }
    uVar4 = 0x8b52;
  }
LAB_0000_e710:
  FUN_0000_3270(uVar4);
  return;
}



void FUN_0000_ed14(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int uVar5;
  int *puVar6;
  int unaff_DS;
  int local_8;
  int local_6;

  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_0000_ec74();
    return;
  }
  FUN_0000_53ec(*(int *)0x5951,*(int *)0x5950,*(int *)0x594f);
  iVar2 = FUN_0000_500c();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (uint)*(byte *)0x5896 + *(int *)0x5876;
  iVar3 = (uint)*(byte *)0x5897 + *(int *)0x5878;
  pbVar4 = (byte *)FUN_0000_5e22(iVar3,iVar2);
  bVar1 = *pbVar4;
  if (bVar1 == 0xaf) {
    uVar5 = 0x8bbe;
    goto LAB_0000_ed8d;
  }
  if (bVar1 < 0xb0) {
    if (bVar1 < 0x97) {
LAB_0000_ede4:
      FUN_0000_eacc(*(int *)0x5895,iVar3,iVar2);
      return;
    }
    if (0x98 < bVar1) {
      if (bVar1 == 0x99) {
        uVar5 = SUB42(FUN_0000_8bca,0);
        goto LAB_0000_ed8d;
      }
      goto LAB_0000_ede4;
    }
  }
  else {
    if (bVar1 == 0xb8) {
LAB_0000_eda0:
      *(byte *)0x594f = bVar1;
      *(int *)0x5952 = 4;
      local_6 = (int)iVar2;
      *(int *)0x5950 = local_6;
      local_8 = (int)iVar3;
      *(int *)0x5951 = local_8;
      puVar6 = (int *)FUN_0000_5e22(iVar3,iVar2);
      *puVar6 = 0x44;
      *(int *)0x24e6 = 1;
      uVar5 = 0x8be0;
      goto LAB_0000_ed8d;
    }
    if (bVar1 != 0xb9) {
      if (bVar1 == 0xba) goto LAB_0000_eda0;
      if (bVar1 != 0xbb) goto LAB_0000_ede4;
    }
  }
  uVar5 = 0x8bd6;
LAB_0000_ed8d:
  FUN_0000_3270(uVar5);
  return;
}



void FUN_0000_f26e(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *puVar9;
  int uVar10;
  byte *pbVar11;
  byte *pbVar12;
  int unaff_DS;
  char *local_16;
  byte *local_14;
  uint local_8;
  int local_6;

  if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
    FUN_0000_f13e();
    return;
  }
  iVar6 = FUN_0000_500c();
  if (iVar6 == 0) {
    return;
  }
  iVar6 = *(int *)0x5876;
  iVar3 = *(int *)0x5878;
  uVar7 = iVar6 + (uint)*(byte *)0x5896;
  uVar8 = iVar3 + (uint)*(byte *)0x5897;
  FUN_0000_3270(0x8de6);
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
    FUN_0000_edf8(local_6,*(int *)(local_6 * 8 + 0x5c5f),local_8);
    return;
  }
  pbVar11 = (byte *)FUN_0000_5e22(uVar8,uVar7);
  bVar4 = *pbVar11;
  if (bVar4 == 0x9a) {
    if (iVar3 != 1) {
      uVar10 = 0x8e10;
      goto LAB_0000_f42b;
    }
    puVar9 = (int *)FUN_0000_5e22(uVar8,uVar7);
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
          goto LAB_0000_f42b;
        }
        puVar9 = (int *)FUN_0000_5e22(uVar8,uVar7);
        *puVar9 = 0x95;
        pbVar2 = (byte *)0x24e6;
        *pbVar2 = *pbVar2 | 2;
        uVar10 = 0x8e24;
      }
      else {
        if (bVar4 != 0x9c) {
          if ((0xaf < bVar4) && (bVar4 < 0xb2)) {
            puVar9 = (int *)FUN_0000_5e22(uVar8,uVar7);
            *puVar9 = 0x44;
            *(int *)0x24e6 = 1;
            if (*(byte *)0x5893 < 0x80) {
              FUN_0000_786a();
            }
            *(int *)0x58a7 = 100;
            FUN_0000_3270(0x8de8);
            FUN_0000_5dce(0x32,1,2000,800);
            FUN_0000_7330();
            return;
          }
          goto LAB_0000_f4c8;
        }
        if ((iVar6 == 1) || (iVar6 == -1)) {
          uVar10 = 0x8e44;
          goto LAB_0000_f42b;
        }
        if (iVar3 == 1) {
          puVar9 = (int *)FUN_0000_5e22(uVar8,uVar7);
          *puVar9 = 0x9b;
        }
        if (iVar3 == -1) {
          puVar9 = (int *)FUN_0000_5e22(uVar8,uVar7);
          *puVar9 = 0x9a;
        }
        pbVar2 = (byte *)0x24e6;
        *pbVar2 = *pbVar2 | 2;
        uVar10 = 0x8e58;
      }
      FUN_0000_3270(uVar10);
      FUN_0000_5934(9999,1,0x57a8);
      goto LAB_0000_f3f8;
    }
    if (bVar4 != 0x2d) {
LAB_0000_f4c8:
      uVar10 = 0x8e64;
LAB_0000_f42b:
      FUN_0000_3270(uVar10);
      return;
    }
    puVar9 = (int *)FUN_0000_5e22(uVar8,uVar7);
    *puVar9 = 0x2c;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    uVar10 = 0x8df4;
  }
  FUN_0000_3270(uVar10);
  FUN_0000_5934(9999,1,0x57a8);
  *(int *)((int)FUN_0000_a9f4 + 6) = 1;
LAB_0000_f3f8:
  if (*(char *)0x5888 != '\0') {
    pcVar1 = (char *)0x5888;
    *pcVar1 = *pcVar1 + -1;
  }
  return;
}



int FUN_0000_f4d4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_DS;

  iVar3 = 0;
  for (uVar2 = 0; uVar2 < *(byte *)0x585b; uVar2 = uVar2 + 1) {
    iVar1 = FUN_0000_8880(param_1,uVar2);
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



void FUN_0000_f5f6(int param_1,int param_2)

{
  byte bVar1;
  int uVar2;
  int unaff_DS;
  int local_c;
  int local_a;

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
    uVar2 = SUB42(&LAB_0000_8eb6_2,0);
  }
  else {
    if (param_1 != 4) goto LAB_0000_f63c;
    local_c = 1;
    uVar2 = SUB42(&DAT_0000_8ec0,0);
  }
  FUN_0000_3270(uVar2);
LAB_0000_f63c:
  local_a = (uint)*(byte *)(param_2 * 8 + -0x45e6) + local_a;
  local_c = (uint)*(byte *)(param_2 * 8 + -0x45e5) + local_c;
  if ((((local_a < 0xb) && (local_c < 0xb)) && (-1 < local_a)) && (-1 < local_c)) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec(local_a,*(int *)((uint)bVar1 * 8 + 0x5c5a));
  }
  FUN_0000_f552(param_1,param_2);
  return;
}



int FUN_0000_f70a(void)

{
  int uVar1;
  char *pcVar2;
  int iVar3;
  int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int unaff_DS;
  int local_a;
  int local_8;

  FUN_0000_3270(0x8ede);
  pcVar2 = (char *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
  cVar8 = *pcVar2;
  if ((((*(byte *)0x58a1 & 2) != 0) && (cVar8 == -0x38)) && (*(char *)0xbb16 != '\0')) {
    FUN_0000_3270(0x8ee6);
    do {
      iVar3 = FUN_0000_408c();
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
    FUN_0000_3270(0x8eec);
    uVar1 = *(int *)0x589e;
    uVar4 = 5;
  }
  else {
    if (((cVar8 != -0x7a) || ((*(byte *)0x58a1 & 0x80) == 0)) && (cVar8 != -0x37)) {
      iVar3 = FUN_0000_500c();
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = (uint)*(byte *)0x5896 + *(int *)0x5876;
      iVar5 = (uint)*(byte *)0x5897 + *(int *)0x5878;
      pcVar2 = (char *)FUN_0000_5e22(iVar5,iVar3);
      if ((*pcVar2 == 'L') && (iVar6 = FUN_0000_5122(0,iVar5,iVar3), iVar6 == 0)) {
        iVar7 = (uint)*(byte *)0x589e * 8;
        iVar6 = (uint)*(byte *)(iVar7 + -0x45e8) * 8;
        local_8 = (int)iVar3;
        *(int *)(iVar7 + -0x45e6) = local_8;
        *(int *)(iVar6 + 0x5c5c) = local_8;
        local_a = (int)iVar5;
        *(int *)(iVar7 + -0x45e5) = local_a;
        *(int *)(iVar6 + 0x5c5d) = local_a;
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec(iVar3);
      }
      FUN_0000_3270(0x8efa);
      return 0;
    }
    FUN_0000_3270(0x8ef2);
    uVar1 = *(int *)0x589e;
    uVar4 = 6;
  }
  uVar4 = FUN_0000_f552(uVar4,uVar1);
  return uVar4;
}



void FUN_0000_f844(void)

{
  int iVar1;
  int unaff_DS;

  iVar1 = (uint)*(byte *)0x589e * 8;
  if ((((*(char *)(iVar1 + -0x45ea) != '\0') && ((*(byte *)(iVar1 + -0x45ea) & 0x20) == 0)) &&
      (*(char *)(iVar1 + -0x45e5) == '\x02')) &&
     ((*(byte *)(*(byte *)(iVar1 + -0x45e6) + 0xac74) & 0xfc) == 0x3c)) {
    *(int *)0x58a0 = 0x4d;
    FUN_0000_30da(10,iVar1 + -0x45ec);
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  return;
}



int FUN_0000_f8c6(int param_1,int param_2)

{
  int uVar1;

  FUN_0000_3270(param_2);
  if (param_1 == 1) {
    uVar1 = 0x8f12;
  }
  else if (param_1 == 2) {
    uVar1 = 0x8f1a;
  }
  else {
    if (param_1 != 3) goto LAB_0000_f8eb;
    uVar1 = 0x8f24;
  }
  FUN_0000_3270(uVar1);
LAB_0000_f8eb:
  FUN_0000_30da(10);
  FUN_0000_3ce0(0x96,0xdc);
  FUN_0000_3ce0(0x96,0x96);
  return 1;
}



int FUN_0000_f91a(uint param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;
  byte *local_c;
  byte *local_a;

  bVar2 = false;
  FUN_0000_3270(0x8f3a);
  iVar4 = 0;
  local_a = (byte *)0xba16;
  local_c = (byte *)0xba17;
  while (((bVar1 = *local_a, (bVar1 & 0x80) == 0 || (iVar3 = FUN_0000_7066(iVar4), iVar3 != 0)) ||
         (*local_c != param_1))) {
    local_a = local_a + 8;
    local_c = local_c + 8;
    iVar4 = iVar4 + 1;
    if (0x1f < iVar4) {
LAB_0000_f96d:
      if (!bVar2) {
        FUN_0000_3270(0x8f4c);
        return 0;
      }
      *(int *)0x587b = (int)param_1;
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
  }
  if ((bVar1 & 0x2c) == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  goto LAB_0000_f96d;
}



void FUN_0000_f9de(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int *puVar4;
  int *puVar5;
  int unaff_DS;

  if (*(char *)0x58a0 == 'M') {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  puVar5 = (int *)0x5c5a;
  puVar4 = (int *)0xa9fc;
  do {
    *puVar5 = *puVar4;
    puVar5[1] = puVar4[1];
    puVar5[2] = puVar4[2];
    puVar5[3] = puVar4[3];
    puVar5 = puVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (puVar4 < (int *)0xaafc);
  if ((*(byte *)0x58a1 & 0x82) == 0) {
    if (param_1 < 0x20) {
      param_1 = param_1 * 8;
      pbVar3 = (byte *)(param_1 + 0x5c5a);
      if ((*(char *)0x58a3 == '\0') || ((*pbVar3 & 0xfc) != 0x2c)) {
        *(int *)(param_1 + 0x5c5e) = 0;
        *(int *)(param_1 + 0x5c5d) = 0;
        *(int *)(param_1 + 0x5c5c) = 0;
        *(int *)(param_1 + 0x5c5b) = 0;
        *pbVar3 = 0;
      }
      else {
        pbVar1 = pbVar3;
        *pbVar1 = *pbVar1 - 8;
        pcVar2 = (char *)(param_1 + 0x5c5b);
        *pcVar2 = *pcVar2 + -8;
        *(int *)(param_1 + 0x5c5f) = 99;
        *(int *)(param_1 + 0x5c61) = 2;
      }
    }
    FUN_0000_30da(10);
    *(int *)0x5893 = *(int *)0x5894;
  }
  return;
}



bool FUN_0000_fae8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_DS;
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
LAB_0000_fb4e:
      uVar3 = uVar3 - 1;
      uVar2 = uVar2 + 1;
    }
    else if (local_c == 2) {
      uVar2 = uVar2 - 2;
    }
    else if (local_c == 3) goto LAB_0000_fb4e;
    iVar1 = FUN_0000_fa78(param_1,uVar3,uVar2);
    if (iVar1 != 0) {
      local_6 = local_6 + 1;
    }
    local_c = local_c + 1;
    if (3 < local_c) {
      return local_6 == 4;
    }
  } while( true );
}



int FUN_0000_fb6e(void)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int unaff_DS;
  int local_4;

  local_4 = 0;
  pbVar2 = (byte *)0xba16;
  pbVar3 = (byte *)0xba17;
  while (((*pbVar2 & 1) == 0 || ((*pbVar2 & 0x80) == 0))) {
    pbVar2 = pbVar2 + 8;
    pbVar3 = pbVar3 + 8;
    local_4 = local_4 + 1;
    if (5 < local_4) {
LAB_0000_fbcd:
      if (local_4 == 6) {
        local_4 = -1;
      }
      return local_4;
    }
  }
  pbVar1 = pbVar2;
  *pbVar1 = *pbVar1 & 0xfe;
  FUN_0000_3270((uint)*pbVar3 * 0x20 + 0x55a8);
  FUN_0000_3270(0x8f56);
  FUN_0000_3bb2(2,1000,(int)&DAT_0000_7530,1,0xc1c);
  FUN_0000_8880(0x23,*pbVar3);
  FUN_0000_82ce(local_4);
  goto LAB_0000_fbcd;
}


