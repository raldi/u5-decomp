


void FUN_0000_3a9e(int param_1)

{
  int unaff_DS;

  *(int *)((int)FUN_0000_541c + 4) = param_1;
  return;
}



void FUN_0000_9c42(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_DS;
  bool bVar6;

  if (((-1 < param_1) && (param_1 < 0x20)) &&
     (((bVar2 = *(byte *)(param_1 + 0x659e) & 0xfc, bVar2 != 0x70 && (bVar2 < 0x80)) ||
      (bVar2 == 0xb4)))) {
    iVar5 = (uint)*(byte *)0x5893 * 4;
    uVar3 = 1;
    uVar4 = 0;
    for (; (char)param_1 != '\0'; param_1._0_1_ = (char)param_1 + -1) {
      bVar6 = (int)uVar3 < 0;
      uVar3 = uVar3 << 1;
      uVar4 = uVar4 << 1 | (uint)bVar6;
    }
    puVar1 = (uint *)(iVar5 + 0x5b56);
    *puVar1 = *puVar1 | uVar3;
    puVar1 = (uint *)(iVar5 + 0x5b58);
    *puVar1 = *puVar1 | uVar4;
  }
  return;
}



void FUN_0000_9ca0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int unaff_DS;

  iVar3 = param_1 * 0x10;
  iVar2 = *(int *)(iVar3 + 0x5f6a) * 8;
  *(int *)(iVar3 + 0x5f68) = 0;
  *(int *)(iVar3 + 0x5f64) = 0;
  *(int *)(iVar3 + 0x5f62) = 0;
  *(int *)(iVar3 + 0x5f60) = 0;
  *(int *)(iVar3 + 0x5f5e) = 0;
  *(int *)(iVar2 + 0x5c61) = 0;
  *(int *)(iVar2 + 0x5c60) = 0;
  *(int *)(iVar2 + 0x5c5e) = 0;
  *(int *)(iVar2 + 0x5c5d) = 0;
  *(int *)(iVar2 + 0x5c5c) = 0;
  *(int *)(iVar2 + 0x5c5b) = 0;
  *(int *)(iVar2 + 0x5c5a) = 0;
  *(int *)(iVar3 + 0x5d60) = 0;
  *(int *)(iVar3 + 0x5d5f) = 0;
  *(int *)((int)FUN_0000_5d5e + iVar3) = 0;
  *(int *)(param_1 + 0x659e) = 0;
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return;
}



int FUN_0000_9d0e(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_DS;
  int *local_a;

  iVar1 = 0;
  piVar2 = (int *)0x5f6a;
  local_a = (int *)0x5f5e;
  while (((*piVar2 != param_1 || (*(char *)(iVar1 + 0x659e) == '\0')) || (*local_a == 0))) {
    piVar2 = piVar2 + 8;
    local_a = local_a + 8;
    iVar1 = iVar1 + 1;
    if (0x1f < iVar1) {
      return -1;
    }
  }
  return iVar1;
}



void FUN_0000_9d60(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  int *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_DS;

  iVar7 = 0;
  do {
    iVar5 = 0;
    do {
      pcVar2 = (char *)FUN_0000_5e22(iVar5,iVar7);
      if (*pcVar2 == -0x79) {
        pbVar3 = (byte *)FUN_0000_5e22(iVar5 + 1,iVar7);
        pbVar1 = pbVar3;
        *pbVar1 = *pbVar1 ^ 0xdd;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  pbVar3 = (byte *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
  if ((*pbVar3 & 0xfe) != 0x48) {
    for (uVar6 = 0; uVar6 < *(byte *)0x594e; uVar6 = uVar6 + 1) {
      if (*(char *)0x587f == '\x05') {
        puVar4 = (int *)
                 FUN_0000_5e22(*(int *)(uVar6 + 0x590e),*(int *)(uVar6 + 0x58ee));
        *puVar4 = *(int *)(uVar6 + 0x592e);
      }
      else {
        puVar4 = (int *)
                 FUN_0000_5e22(*(int *)(uVar6 + 0x590e),*(int *)(uVar6 + 0x58ee));
        *puVar4 = 3;
      }
    }
  }
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return;
}



void FUN_0000_9e02(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int uVar4;
  int iVar5;
  int unaff_DS;
  int local_e;

  if (*(char *)((int)FUN_0000_5956 + 2) != -1) {
    FUN_0000_3a9e(*(int *)0x587e);
    local_e = 0;
    do {
      iVar5 = 0;
      do {
        cVar2 = *(char *)((int)FUN_0000_6608 + local_e + iVar5);
        if (cVar2 == '-') {
          iVar3 = RANDOM(7,0);
          if (iVar3 != 0) {
            *(int *)((int)FUN_0000_6608 + local_e + iVar5) = 0x2c;
          }
        }
        else if ((cVar2 == '.') && (iVar3 = RANDOM(7,0), iVar3 != 0)) {
          *(int *)((int)FUN_0000_6608 + local_e + iVar5) = 0x2b;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x20);
      local_e = local_e + 0x20;
    } while (local_e < 0x400);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    uVar4 = FUN_0000_3a76();
    FUN_0000_3a9e(uVar4);
  }
  return;
}



void FUN_0000_9e9e(void)

{
  int *puVar1;
  byte bVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *puVar9;
  int unaff_DS;

  *(int *)((int)FUN_0000_5956 + 2) = 0xff;
  if (*(char *)0x5897 != '\x04') {
    iVar7 = 0;
    uVar3 = *(int *)((int)FUN_0000_5956 + 2);
    do {
      if (*(char *)(iVar7 + 0x58c8) == *(char *)0x5893) {
        uVar3 = (int)iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    *(int *)((int)FUN_0000_5956 + 2) = uVar3;
  }
  if (*(char *)((int)FUN_0000_5956 + 2) != -1) {
    FUN_0000_9e02();
    pcVar8 = (char *)0x5c5a;
    iVar7 = 0;
    do {
      if (*pcVar8 == -4) {
        return;
      }
      pcVar8 = pcVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar4 = FUN_0000_5304();
    iVar5 = iVar4 * 8;
    iVar7 = 0x1f;
    do {
      iVar6 = iVar7;
      if (*(char *)(iVar6 + 0x659e) == '\0') break;
      iVar7 = iVar6 + -1;
      iVar6 = 0x1f;
    } while (-1 < iVar7);
    iVar7 = iVar6 * 0x10;
    *(int *)(iVar7 + 0x5f5e) = 1;
    *(int *)(iVar7 + 0x5f6a) = iVar4;
    *(int *)(iVar5 + 0x5c5c) = 0xf;
    *(int *)(iVar7 + 0x5f60) = 0xf;
    bVar2 = *(byte *)((*(uint *)0x5893 & 0xff) + 0x13a5);
    *(byte *)(iVar5 + 0x5c5d) = bVar2;
    *(uint *)(iVar7 + 0x5f62) = (uint)bVar2;
    *(int *)(iVar5 + 0x5c61) = 0;
    *(int *)(iVar5 + 0x5c5e) = 0;
    *(int *)(iVar5 + 0x5c5f) = 0;
    *(int *)(iVar5 + 0x5c60) = 0;
    *(int *)(iVar7 + 0x5f64) = 0;
    *(int *)(iVar5 + 0x5c5b) = 0xfc;
    *(int *)(iVar5 + 0x5c5a) = 0xfc;
    puVar9 = (int *)(iVar7 + 0x5d6a);
    for (iVar7 = 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar1 = 0;
    }
    iVar7 = 0;
    do {
      iVar4 = iVar6 * 0x10 + iVar7;
      *(int *)((int)FUN_0000_5d5e + iVar4) = 6;
      *(int *)(iVar4 + 0x5d61) = 0xf;
      *(int *)(iVar4 + 0x5d64) = *(int *)(iVar5 + 0x5c5d);
      *(int *)(iVar4 + 0x5d67) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    *(int *)(iVar6 + 0x659e) = 0xfc;
  }
  return;
}



void FUN_0000_9ff8(int param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int unaff_DS;
  int local_8;

  FUN_0000_6608();
  FUN_0000_64a4();
  FUN_0000_48b6(0xffff);
  *(int *)0x594f = 0;
  *(int *)0x589c = 0;
  *(int *)0x589b = 0;
  uVar3 = (uint)*(byte *)0x5893;
  bVar2 = *(byte *)0x5895;
  local_8 = (uint)*(byte *)(uVar3 + 0x1e19) + (uint)bVar2;
  if (0x7f < bVar2) {
    local_8 = local_8 + -0x100;
  }
  FUN_0000_3f8e(local_8 << 10,0x400,(int)FUN_0000_6608,
                *(int *)((uVar3 - 1 >> 3) * 2 + 0x2652));
  *(int *)0x594e = 0;
  *(int *)0x2184 = 0xffff;
  *(int *)0x2182 = 0xffff;
  *(int *)0x2180 = 0xffff;
  *(int *)0x217e = 0xffff;
  iVar8 = 0;
  do {
    iVar7 = 0;
    do {
      pbVar4 = (byte *)FUN_0000_5e22(iVar7,iVar8);
      if ((*pbVar4 & 0xfe) == 0x48) {
        uVar3 = (uint)*(byte *)0x594e;
        *(int *)(uVar3 + 0x58ee) = (char)iVar8;
        *(int *)(uVar3 + 0x590e) = (char)iVar7;
        puVar5 = (int *)FUN_0000_5e22(iVar7,iVar8);
        *(int *)(uVar3 + 0x592e) = *puVar5;
        pcVar1 = (char *)0x594e;
        *pcVar1 = *pcVar1 + '\x01';
      }
      pcVar6 = (char *)FUN_0000_5e22(iVar7,iVar8);
      if (*pcVar6 == '*') {
        if (*(int *)0x217e == -1) {
          *(int *)0x217e = iVar8;
          *(int *)0x2180 = iVar7;
        }
        else {
          *(int *)0x2182 = iVar8;
          *(int *)0x2184 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  if ((*(byte *)0x587f < 5) || (0x13 < *(byte *)0x587f)) {
    FUN_0000_9d60();
  }
  FUN_0000_786a();
  FUN_0000_699c(0);
  FUN_0000_9e02();
  if (param_1 != 0) {
    FUN_0000_b284();
  }
  *(int *)0x24e6 = 1;
  return;
}



void FUN_0000_a11e(int param_1,uint param_2)

{
  char *pcVar1;
  int uVar2;
  int unaff_DS;

  if (((byte)param_1 & 0xfc) == 0xc4) {
    FUN_0000_7330();
    if (param_1 - 0xc4U == param_2) {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + '\x01';
      uVar2 = 0x265a;
    }
    else {
      if (param_1 - 0xc4U != (param_2 ^ 2)) {
        return;
      }
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + -1;
      uVar2 = 0x265f;
    }
    FUN_0000_3270(uVar2);
    FUN_0000_9ff8(1);
  }
  return;
}



void FUN_0000_a16c(int param_1)

{
  byte bVar1;
  int unaff_DS;

  bVar1 = *(byte *)0x587c & 0xfc;
  if (bVar1 == 0x10) {
    FUN_0000_3270(0x2666);
    if (param_1 == 1) {
      *(int *)0x587c = 0x12;
    }
    else if (param_1 == 3) {
      *(int *)0x587c = 0x13;
    }
  }
  else if (bVar1 == 0x14) {
    FUN_0000_3270(0x266c);
    if (param_1 == 1) {
      *(int *)0x587c = 0x14;
    }
    else if (param_1 == 3) {
      *(int *)0x587c = 0x15;
    }
  }
  else {
    if ((bVar1 != 0x20) && (bVar1 != 0x24)) {
      if (bVar1 != 0x28) {
        return;
      }
      FUN_0000_3270(0x2671);
    }
    *(char *)0x587c = (char)param_1 + (*(byte *)0x587c & 0xfc);
  }
  return;
}



bool FUN_0000_a1f0(int param_1)

{
  char *pcVar1;
  int uVar2;
  bool bVar3;
  int iVar4;
  int uVar5;
  uint uVar6;
  int unaff_DS;
  bool bVar7;
  int local_e;
  int local_c;
  byte local_a;

  if ((*(char *)0x587c == '\x1c') || ((*(byte *)0x587c & 0xfe) == 0x12)) {
    FUN_0000_5d5e();
  }
  bVar7 = false;
  local_e = 0;
  local_c = 0;
  if (param_1 == 1) {
    local_c = -1;
    bVar7 = *(char *)0x5896 == '\0';
    param_1 = 3;
    FUN_0000_a16c(3);
    uVar5 = 0x268a;
LAB_0000_a255:
    FUN_0000_3270(uVar5);
  }
  else {
    if (param_1 == 2) {
      local_c = 1;
      bVar7 = 0x1e < *(byte *)0x5896;
      param_1 = 1;
      FUN_0000_a16c(1);
      uVar5 = SUB42(FUN_0000_2684,0);
      goto LAB_0000_a255;
    }
    if (param_1 == 3) {
      local_e = -1;
      bVar7 = *(char *)0x5897 == '\0';
      param_1 = 0;
      FUN_0000_a16c(0);
      uVar5 = 0x2676;
      goto LAB_0000_a255;
    }
    if (param_1 == 4) {
      local_e = 1;
      bVar7 = 0x1e < *(byte *)0x5897;
      param_1 = 2;
      FUN_0000_a16c(2);
      uVar5 = 0x267d;
      goto LAB_0000_a255;
    }
  }
  bVar3 = true;
  uVar2 = *(int *)(local_c + local_e * 0x20 + -0x5459);
  iVar4 = FUN_0000_50ae(*(int *)0x5895,local_e + (uint)*(byte *)0x5897,
                        local_c + (uint)*(byte *)0x5896);
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(byte *)0x587c < 0x30) && (0x1f < *(byte *)0x587c)) {
      if (((*(byte *)0x587c < 0x28) || (iVar4 < 0x24)) || (0x27 < iVar4)) goto LAB_0000_a366;
    }
    else if (((iVar4 < 0x24) || (0x2b < iVar4)) &&
            ((((iVar4 != 0x1b && (local_a = (byte)iVar4, (local_a & 0xfe) != 0x10)) &&
              (iVar4 != 0x1e)) && (iVar4 != 0x1f)))) goto LAB_0000_a366;
    bVar3 = true;
  }
LAB_0000_a366:
  if ((bVar3) && (iVar4 = FUN_0000_466c(uVar2,*(int *)0x587c), iVar4 != 0)) {
    if (bVar7 == false) {
      pcVar1 = (char *)0x5896;
      *pcVar1 = *pcVar1 + (char)local_c;
      pcVar1 = (char *)0x5897;
      *pcVar1 = *pcVar1 + (char)local_e;
      *(int *)0x24e6 = 1;
      if ((*(byte *)0x587c & 0xfe) == 0x12) {
        FUN_0000_5d5e();
      }
      FUN_0000_a11e(uVar2,param_1);
      return false;
    }
    FUN_0000_3270(0x2690);
    do {
      iVar4 = FUN_0000_408c();
      if ((iVar4 == 0x59) || (iVar4 == 0x4e)) break;
    } while (iVar4 != 0x1b);
    if (iVar4 == 0x59) {
      FUN_0000_3270(0x26ab);
      if (*(char *)0x5893 == '\x19') {
        FUN_0000_3270(0x26b9);
        *(int *)0x5895 = 0xff;
      }
      else {
        FUN_0000_3270(0x26c6);
        *(int *)0x5895 = 0;
      }
      *(int *)0x594f = 0;
      uVar6 = (uint)*(byte *)0x5893;
      *(int *)0x5896 = *(int *)(uVar6 + 0x1e89);
      *(int *)0x5897 = *(int *)(uVar6 + 0x1eb1);
      *(int *)0x5893 = 0;
      return bVar7;
    }
    FUN_0000_3270(0x26d2);
  }
  else {
    FUN_0000_3270(0x26d6);
    FUN_0000_3ce0(200,0xa5);
    FUN_0000_3536();
  }
  return false;
}



void FUN_0000_a44e(int param_1)

{
  int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int *piVar6;
  int unaff_DS;
  byte local_4;

  if (*(byte *)(param_1 + 0x659e) < 0x2f) {
    local_4 = 6;
  }
  else {
    local_4 = 7;
  }
  puVar5 = (int *)(param_1 * 0x10 + 0x5d6a);
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0;
  }
  iVar3 = (uint)local_4 * 0x100 + (uint)local_4;
  piVar6 = (int *)((int)FUN_0000_5d5e + param_1 * 0x10);
  for (iVar4 = 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    *piVar2 = iVar3;
  }
  *(char *)piVar6 = (char)iVar3;
  return;
}



void FUN_0000_a4c4(int param_1)

{
  int *puVar1;
  bool bVar2;
  int iVar3;
  int *puVar4;
  int unaff_DS;

  bVar2 = false;
  iVar3 = 0;
  do {
    if (*(char *)(iVar3 + param_1 * 0x10 + 0x5d6a) != '\0') {
      bVar2 = true;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if (((*(byte *)(param_1 + 0x659e) < 0x74) && (0x3f < *(byte *)(param_1 + 0x659e))) &&
     ((*(int *)(param_1 * 0x10 + 0x5f68) == 0xfe || (bVar2)))) {
    *(int *)(param_1 * 0x10 + 0x5f68) = 0xfd;
    puVar4 = (int *)((int)FUN_0000_5d5e + param_1 * 0x10);
    for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0x303;
    }
    *(int *)puVar4 = 3;
  }
  return;
}



void FUN_0000_a548(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_DS;
  int *local_8;

  iVar3 = 0;
  local_8 = (int *)0x5f5e;
  do {
    if (*local_8 != 0) {
      cVar1 = *(char *)(iVar3 + 0x659e);
      if (((cVar1 == -4) || (cVar1 == -0x28)) || (cVar1 == 'p')) {
        FUN_0000_a44e(iVar3);
      }
      else {
        iVar2 = RANDOM(0xff,0);
        if (iVar2 < 0x80) {
          FUN_0000_a4c4(iVar3);
        }
      }
    }
    local_8 = local_8 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}



void FUN_0000_a5ac(int param_1)

{
  int unaff_DS;

  FUN_0000_9c42(param_1);
  FUN_0000_7b70(*(int *)(param_1 * 0x10 + 0x5f6a));
  FUN_0000_9ca0(param_1);
  FUN_0000_9ff8(0);
  FUN_0000_9e9e();
  return;
}



int FUN_0000_a772(void)

{
  char *pcVar1;
  char cVar2;
  int uVar3;
  char *pcVar4;
  int iVar5;
  int unaff_DS;
  int local_4;

  local_4 = 0;
  FUN_0000_3270(0x2723);
  if ((*(byte *)0x587c & 0xfe) == 0x12) {
    uVar3 = 0x272a;
LAB_0000_a790:
    FUN_0000_3270(uVar3);
  }
  else {
    pcVar4 = (char *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
    cVar2 = *pcVar4;
    if (cVar2 == -0x7a) {
LAB_0000_a822:
      uVar3 = 2;
LAB_0000_a7c0:
      FUN_0000_a11e(0xc4,uVar3);
      local_4 = 1;
    }
    else {
      if (cVar2 == -0x38) {
        uVar3 = 0;
        goto LAB_0000_a7c0;
      }
      if (cVar2 == -0x37) goto LAB_0000_a822;
    }
    if (local_4 != 0) {
      return local_4;
    }
    iVar5 = FUN_0000_500c();
    if (iVar5 != 0) {
      pcVar4 = (char *)FUN_0000_5e22((uint)*(byte *)0x5897 + *(int *)0x5878,
                                     (uint)*(byte *)0x5896 + *(int *)0x5876);
      cVar2 = *pcVar4;
      if (((cVar2 != 'L') && (cVar2 != -0x36)) && (cVar2 != -0x35)) {
        uVar3 = 0x2735;
        goto LAB_0000_a790;
      }
      pcVar1 = (char *)0x5896;
      *pcVar1 = *pcVar1 + *(char *)0x5876;
      pcVar1 = (char *)0x5897;
      *pcVar1 = *pcVar1 + *(char *)0x5878;
      *(int *)0x24e6 = 1;
      FUN_0000_7330(cVar2);
    }
    local_4 = 1;
  }
  return local_4;
}



int FUN_0000_a83a(int param_1,int param_2)

{
  char *pcVar1;
  int unaff_DS;

  pcVar1 = (char *)FUN_0000_5e22(param_1,param_2);
  if ((*pcVar1 != -0x5e) && (pcVar1 = (char *)FUN_0000_5e22(param_1,param_2), *pcVar1 != 'C')) {
    return 0;
  }
  return 1;
}



void FUN_0000_a868(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *puVar4;
  uint uVar5;
  uint uVar6;
  int unaff_DS;
  int uVar7;
  byte *local_10;
  int local_a;

  local_a = 0;
  local_10 = (byte *)0x5c5a;
  do {
    bVar2 = *local_10;
    if ((((bVar2 & 0xfe) == 0x10) && (local_10[4] == *(byte *)0x5895)) &&
       (iVar3 = RANDOM(1,0), iVar3 == 0)) {
      uVar6 = (uint)local_10[2];
      uVar5 = (uint)local_10[3];
      iVar3 = FUN_0000_a83a(uVar5 + 1,uVar6);
      if (((iVar3 == 0) && (iVar3 = FUN_0000_a83a(uVar5,uVar6 + 1), iVar3 == 0)) &&
         ((iVar3 = FUN_0000_a83a(uVar5 - 1,uVar6), iVar3 == 0 &&
          (iVar3 = FUN_0000_a83a(uVar5,uVar6 - 1), iVar3 == 0)))) {
        iVar3 = RANDOM(1,0);
        if (iVar3 == 0) {
          iVar3 = RANDOM(1,0);
          uVar5 = uVar5 + iVar3 * 2 + -1;
        }
        else {
          iVar3 = RANDOM(1,0);
          iVar3 = iVar3 * 2 + -1;
          uVar6 = uVar6 + iVar3;
          if (iVar3 < 1) {
            bVar2 = 0x11;
          }
          else {
            bVar2 = 0x10;
          }
        }
        if ((((int)uVar6 < 0x20) && ((int)uVar5 < 0x20)) && ((-1 < (int)uVar6 && (-1 < (int)uVar5)))
           ) {
          uVar7 = 0x10;
          puVar4 = (int *)FUN_0000_5e22(uVar5,uVar6);
          iVar3 = FUN_0000_466c(*puVar4,uVar7);
          if ((iVar3 != 0) && (iVar3 = FUN_0000_5122(*(int *)0x5895,uVar5,uVar6), iVar3 == 0))
          {
            local_10[1] = bVar2;
            *local_10 = bVar2;
            local_10[2] = (byte)uVar6;
            local_10[3] = (byte)uVar5;
            pbVar1 = (byte *)0x24e6;
            *pbVar1 = *pbVar1 | 2;
          }
        }
      }
    }
    local_10 = local_10 + 8;
    local_a = local_a + 1;
  } while (local_a < 0x20);
  return;
}



uint FUN_0000_a9b4(int param_1)

{
  char *pcVar1;
  int iVar2;
  int unaff_DS;
  uint local_4;

  if (param_1 != 0) {
    FUN_0000_7330();
    if (*(char *)0xa9fa != '\0') {
      FUN_0000_4320();
      *(int *)0xa9fa = 0;
    }
    FUN_0000_30da(10);
    FUN_0000_664a();
  }
  local_4 = FUN_0000_408c();
  if (*(char *)((int)FUN_0000_5956 + 1) != '\0') {
    iVar2 = RANDOM(1,0);
    if (iVar2 != 0) {
      FUN_0000_a548();
      pcVar1 = (char *)((int)FUN_0000_5956 + 1);
      *pcVar1 = *pcVar1 + -1;
      FUN_0000_3270(0x273c);
      iVar2 = RANDOM(3,0);
      local_4 = (uint)*(byte *)(iVar2 + 0x2742);
    }
  }
  return local_4;
}



int FUN_0000_aa24(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  int unaff_DS;
  int local_4;

  local_4 = 3;
  if (*"" == -0x73) {
    uVar3 = param_1 - 0x30;
    if (*(char *)0xa9ce != '\0') {
      FUN_0000_3bb2(0xfffc,(int)&DAT_0000_4e20,4000,1,*(int *)(uVar3 * 2 + 0x2746));
    }
    if (*(byte *)(*(byte *)0x2767 + 0x275a) == uVar3) {
      pcVar1 = (char *)0x2767;
      *pcVar1 = *pcVar1 + '\x01';
      if (((*(char *)0x2767 == '\r') && (*(int *)0x2767 = 0, *(char *)0x5893 == '\x11')) &&
         (*(char *)0x5895 == '\x02')) {
        pbVar2 = (byte *)0x67b9;
        *pbVar2 = *pbVar2 ^ 0xb;
        FUN_0000_4a92();
        *(int *)0x24e6 = 1;
      }
    }
    else if ((*(char *)0x2767 == '\n') && (uVar3 == 8)) {
      *(int *)0x2767 = 3;
    }
    else if ((*(char *)0x2767 == '\v') && (uVar3 == 7)) {
      *(int *)0x2767 = 2;
    }
    else if (uVar3 == *(byte *)0x275a) {
      *(int *)0x2767 = 1;
    }
    else {
      *(int *)0x2767 = 0;
    }
  }
  else {
    local_4 = FUN_0000_5aa0(param_1);
  }
  return local_4;
}



void FUN_0000_aaf2(void)

{
  char *pcVar1;
  int uVar2;
  int *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  int *puVar8;
  uint uVar9;
  int *puVar10;
  int unaff_DS;
  uint local_6;

  if (*(char *)0x585b != '\0') {
    pcVar7 = (char *)0x55b3;
    uVar9 = 0;
    do {
      if ((*pcVar7 == 'S') && (iVar6 = RANDOM(0xf,0), iVar6 == 0xf)) {
        *pcVar7 = 'G';
      }
      pcVar7 = pcVar7 + 0x20;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)0x585b);
  }
  do {
    bVar5 = false;
    pcVar7 = (char *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
    cVar4 = *pcVar7;
    if ((cVar4 == -0x74) && ((*(byte *)0x587c & 0xfe) != 0x14)) {
      FUN_0000_3270(0x2768);
      uVar2 = *(int *)0x587c;
      *(int *)0x587c = 0;
      FUN_0000_7330();
      FUN_0000_44c8();
      *(int *)0x587c = uVar2;
      if (*(char *)0x5893 == '\x1d') {
        FUN_0000_2490(0);
        FUN_0000_24c6(0xb7,0xb7,8,8);
        local_6 = 1000;
        do {
          FUN_0000_3d02(local_6);
          FUN_0000_3ae8(0x28,1);
          local_6 = local_6 + -1;
        } while (0xfa < (int)local_6);
        FUN_0000_3d2e();
        puVar10 = (int *)FUN_0000_6608;
        for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = 0x8f;
        }
        *(int *)0x24e6 = 1;
        puVar10 = (int *)0x5c5a;
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = 0;
        }
        local_6 = 0;
        if (*(char *)0x585b != '\0') {
          puVar8 = (int *)0x55b8;
          puVar10 = (int *)0x55b3;
          do {
            *puVar8 = 0;
            *puVar10 = 0x44;
            FUN_0000_3c5c(500,3000,0x28);
            FUN_0000_4320();
            puVar8 = puVar8 + 0x10;
            puVar10 = puVar10 + 0x20;
            local_6 = local_6 + 1;
          } while (local_6 < *(byte *)0x585b);
        }
      }
      else {
        pcVar1 = (char *)0x5895;
        *pcVar1 = *pcVar1 + -1;
        FUN_0000_9ff8(1);
        bVar5 = true;
      }
    }
    else if ((cVar4 == '\x04') && (*(char *)0x587c == '\x1c')) {
      for (local_6 = 0; local_6 < *(byte *)0x585b; local_6 = local_6 + 1) {
        iVar6 = local_6 * 0x20;
        if (((*(char *)(iVar6 + 0x55b3) != 'D') && (*(char *)(iVar6 + 0x55b3) != 'P')) &&
           (uVar9 = RANDOM(0x1d,0), *(byte *)(iVar6 + 0x55b5) < uVar9)) {
          FUN_0000_3270(0x2775);
          *(int *)(iVar6 + 0x55b3) = 0x50;
          FUN_0000_4320();
        }
      }
    }
    else if ((cVar4 == -0x44) || (cVar4 == -0x71)) {
      FUN_0000_7330();
      FUN_0000_3270(0x2780);
      FUN_0000_44c8();
    }
  } while (bVar5);
  FUN_0000_4508();
  return;
}



void FUN_0000_acca(int param_1)

{
  FUN_0000_3270(0x278a);
  FUN_0000_44c8();
  FUN_0000_a4c4(param_1);
  return;
}



int FUN_0000_ace2(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int unaff_DS;
  int local_4;

  local_4 = 0;
  iVar2 = 0;
  do {
    iVar3 = iVar2;
    if (*(char *)(iVar3 + param_1 * 0x10 + 0x5d6a) != '\0') {
      local_4 = 1;
    }
    iVar2 = iVar3 + 1;
  } while (iVar3 + 1 < 4);
  bVar1 = *(byte *)(iVar3 + 0x659f);
  if ((bVar1 < 0x40) || (0x73 < bVar1)) {
    local_4 = 0;
  }
  iVar2 = RANDOM(1,0);
  if (iVar2 != 0) {
    local_4 = 0;
  }
  return local_4;
}



void FUN_0000_ad46(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *puVar4;
  int unaff_DS;

  cVar1 = *(char *)((int)FUN_0000_5956 + 2);
  if (cVar1 == '\x01') {
    iVar3 = 0;
    puVar4 = (int *)0x5f68;
    do {
      iVar2 = FUN_0000_ace2(iVar3);
      if (iVar2 != 0) {
        FUN_0000_a44e(iVar3);
        *puVar4 = 0xfe;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  else if (cVar1 == '\x02') {
    iVar3 = 0;
    puVar4 = (int *)0x5f68;
    do {
      iVar2 = FUN_0000_ace2(iVar3);
      if (iVar2 != 0) {
        FUN_0000_a4c4(iVar3);
        *puVar4 = 0xfd;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}



void FUN_0000_ada8(int param_1)

{
  int unaff_DS;

  FUN_0000_3270(0x27b8);
  FUN_0000_3270(*(int *)(param_1 * 2 + 0x27dc));
  FUN_0000_3270(0x27c4);
  FUN_0000_3bb2(1,2000,(int)&DAT_0000_ea60,1,(int)&DAT_0000_19c8);
  return;
}



void FUN_0000_ade0(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int unaff_DS;

  *(int *)0x24e6 = 1;
  *(int *)0xa9bc = 1;
  if (param_1 == 0) {
    *(int *)0x5958 = 0xff;
    FUN_0000_9ff8(0);
    FUN_0000_9e9e();
    iVar2 = 0;
    do {
      iVar1 = FUN_0000_9bf0(iVar2);
      if (iVar1 != 0) {
        FUN_0000_9ca0(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
    if ((*(char *)0x5893 == '\x1d') && (*(char *)0x57b5 != '\0')) {
      FUN_0000_9ca0(9);
    }
    FUN_0000_4320();
    iVar2 = FUN_0000_541c();
    if (-1 < iVar2) {
      FUN_0000_7330();
      if (*(char *)0x5893 == '\x1d') {
        iVar2 = 2;
        do {
          if (*(byte *)(iVar2 + 0x58c8) < 0x80) {
            FUN_0000_ada8(iVar2);
          }
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      else if (*(char *)0x5958 != -1) {
        FUN_0000_ada8(*(int *)0x5958);
        FUN_0000_ad46();
      }
    }
    return;
  }
  puVar3 = (int *)0x5c62;
  iVar2 = 0x1f;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)((int)FUN_0000_5956 + 1) = 0;
  *(int *)0x58a4 = 1;
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec();
}



int FUN_0000_ae9e(void)

{
  char cVar1;
  int iVar2;
  int unaff_DS;
  int local_6;

  local_6 = 0;
  if (*(char *)0x5893 == '\x12') {
    iVar2 = FUN_0000_541c();
    if (-1 < iVar2) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
  }
  else {
    FUN_0000_3270(0x27e2);
    FUN_0000_3270(0x27fe);
    do {
      cVar1 = FUN_0000_408c();
      if (cVar1 == 'N') break;
    } while (cVar1 != 'Y');
    if (cVar1 == 'Y') {
      FUN_0000_3270(0x281b);
      FUN_0000_2490(0);
      FUN_0000_3270(0x2845);
      *(int *)0x5893 = 4;
      *(int *)0x5896 = 0x19;
      *(int *)0x5897 = 4;
      *(int *)0x24e6 = 1;
      while (*(char *)0x587f != '\b') {
        FUN_0000_699c(0x14);
      }
      *(int *)0x57ac = 0;
      *(int *)0x5895 = 0;
      FUN_0000_ade0(1);
    }
    else {
      FUN_0000_3270(0x285e);
      FUN_0000_a548();
      local_6 = 1;
    }
  }
  return local_6;
}



void FUN_0000_af42(int param_1)

{
  int iVar1;
  int unaff_DS;
  int local_4;

  local_4 = 0;
  iVar1 = *(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f6a);
  FUN_0000_7330();
  if (*(char *)0x65be == 'a') {
    if (*(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f68) == 0xfe) {
      FUN_0000_30da(10);
      FUN_0000_acca(*(int *)0x65bf);
      goto LAB_0000_afcc;
    }
    if (*(char *)(iVar1 * 8 + 0x5c5a) != 'p') {
      local_4 = 1;
      goto LAB_0000_afcc;
    }
  }
  else if (param_1 == 0) {
    if (*(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f68) != 0) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    goto LAB_0000_afcc;
  }
  local_4 = FUN_0000_ae9e();
LAB_0000_afcc:
  if (local_4 != 0) {
    if (*(byte *)(*(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f6a) * 8 + 0x5c5a) < 0x40) {
      FUN_0000_9ca0(*(int *)0x65bf);
    }
    else {
      FUN_0000_3270(0x2881);
      FUN_0000_a5ac(*(int *)0x65bf);
    }
  }
  return;
}


/*
Unable to decompile 'FUN_0000_b00e'
Cause: Exception while decompiling 0000:b00e: Decompiler process died

*/


void FUN_0000_b284(void)

{
  int iVar1;
  int *puVar2;
  int unaff_DS;

  iVar1 = 1;
  puVar2 = (int *)0x5f7a;
  do {
    FUN_0000_5494(iVar1,0,0,0,0,0,0);
    *puVar2 = 0;
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  iVar1 = 1;
  do {
    if (*(char *)(iVar1 + 0x659e) != '\0') {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec(iVar1);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return;
}



void FUN_0000_b316(uint param_1,int param_2,int param_3,int param_4)

{
  int uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_DS;
  bool bVar8;
  int local_8;

  if (*(char *)(param_4 + 0x659e) != '\0') {
    iVar2 = param_4 * 0x10;
    if ((param_1 != *(byte *)0x5895) && (*(int *)(iVar2 + 0x5f6a) != 0)) {
      *(int *)(*(int *)(iVar2 + 0x5f6a) * 8 + 0x5c5a) = 0;
      *(int *)(iVar2 + 0x5f6a) = 0;
    }
    if ((param_1 == *(byte *)0x5895) && (*(int *)(iVar2 + 0x5f6a) == 0)) {
      iVar7 = FUN_0000_5304();
      if (*(char *)(param_4 + 0x659e) == '\x01') {
        local_8 = 0x1e;
      }
      else {
        iVar4 = (uint)*(byte *)0x5893 * 4;
        uVar5 = 0;
        uVar6 = 1;
        for (cVar3 = (char)param_4; cVar3 != '\0'; cVar3 = cVar3 + -1) {
          bVar8 = (int)uVar6 < 0;
          uVar6 = uVar6 << 1;
          uVar5 = uVar5 << 1 | (uint)bVar8;
        }
        if ((*(uint *)(iVar4 + 0x28c4) & uVar5 | *(uint *)(iVar4 + 0x28c2) & uVar6) == 0) {
          local_8 = 0;
        }
        else {
          local_8 = 0xff;
        }
      }
      uVar1 = *(int *)(param_4 + 0x659e);
      FUN_0000_5494(iVar7,local_8,param_1,param_2,param_3,uVar1,uVar1);
      *(int *)(iVar7 * 8 + 0x5c60) = 0;
      *(int *)(iVar2 + 0x5f6a) = iVar7;
    }
    if ((param_1 == *(byte *)0x5895) && (*(int *)(iVar2 + 0x5f6a) != 0)) {
      iVar7 = *(int *)(iVar2 + 0x5f6a) * 8;
      *(int *)(iVar7 + 0x5c5c) = (int)param_3;
      *(int *)(iVar7 + 0x5c5d) = (int)param_2;
      *(int *)(iVar7 + 0x5c5e) = (int)param_1;
    }
    *(int *)(iVar2 + 0x5f60) = param_3;
    *(int *)(iVar2 + 0x5f62) = param_2;
    *(uint *)(iVar2 + 0x5f64) = param_1;
    *(int *)(iVar2 + 0x5f5e) = 1;
  }
  return;
}



void FUN_0000_bd86(int param_1)

{
  int iVar1;
  int iVar2;
  int *puVar3;
  int iVar4;
  int iVar5;
  int unaff_DS;
  int *local_14;
  int *local_12;
  int *local_10;
  uint *local_c;
  int *local_a;
  int *local_8;

  iVar5 = 1;
  local_8 = (int *)0x5f6e;
  local_a = (int *)0x5f6e;
  local_c = (uint *)0x5f70;
  iVar4 = 0x10;
  local_10 = (int *)0x6560;
  local_12 = (int *)((int)FUN_0000_617a + 4);
  local_14 = (int *)0x65c4;
  do {
    puVar3 = local_8;
    if (*(char *)(iVar5 + 0x659e) != '\0') {
      iVar1 = FUN_0000_cf90(param_1,iVar5);
      *local_a = 1;
      iVar2 = iVar4 + iVar1;
      *local_c = (uint)*(byte *)((int)FUN_0000_5d5e + 3 + iVar2);
      *(uint *)(iVar4 + 0x5f62) = (uint)*(byte *)(iVar2 + 0x5d64);
      *(uint *)(iVar4 + 0x5f64) = (uint)*(byte *)(iVar2 + 0x5d67);
      *(uint *)(iVar4 + 0x5f66) = (uint)*(byte *)(iVar5 + 0x659e);
      *(int *)(iVar4 + 0x5f6c) = iVar1;
      *(int *)(iVar4 + 0x5f6a) = 0;
      *local_10 = 0xffff;
      *local_12 = 0;
      puVar3 = local_14;
    }
    *puVar3 = 0;
    local_8 = local_8 + 8;
    local_a = local_a + 8;
    local_c = local_c + 8;
    iVar4 = iVar4 + 0x10;
    local_10 = local_10 + 1;
    local_12 = local_12 + 0x20;
    local_14 = local_14 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  return;
}



void FUN_0000_be82(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int unaff_DS;
  int local_16;
  char local_e;
  int local_6;

  if (param_2 == 0xffff) {
    local_e = -0x38;
  }
  if (param_2 == 0xfffe) {
    local_e = -0x37;
  }
  uVar1 = FUN_0000_cf90(*(int *)0x587f,param_1);
  local_6 = 0;
  local_16 = 0;
  do {
    iVar5 = 0;
    do {
      iVar2 = FUN_0000_c78c(uVar1,param_1,*(int *)0x5895,local_6,iVar5);
      if (iVar2 == 0) {
        *(int *)(local_16 + *(int *)0xb11c + iVar5) = 0x90;
      }
      else {
        *(int *)(local_16 + *(int *)0xb11c + iVar5) = 0;
      }
      if (((int)param_2 < 0) && (*(char *)((int)FUN_0000_6608 + local_16 + iVar5) == local_e)) {
        *(int *)(*(int *)0xb11c + local_16 + iVar5) = 5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    local_16 = local_16 + 0x20;
    local_6 = local_6 + 1;
  } while (local_6 < 0x20);
  param_1 = param_1 * 0x10;
  pbVar6 = (byte *)0x5d52;
  do {
    if (0x3f < *pbVar6) {
      iVar5 = FUN_0000_c350(*(int *)(param_1 + 0x5f62),*(int *)(param_1 + 0x5f60),
                            pbVar6[3],pbVar6[2]);
      if (iVar5 < 4) {
        *(int *)((uint)pbVar6[3] * 0x20 + (uint)pbVar6[2] + *(int *)0xb11c) = 0x90;
      }
    }
    pbVar6 = pbVar6 + -8;
  } while ((byte *)0x5c5a < pbVar6);
  uVar3 = (uint)*(byte *)0x5c5d;
  uVar4 = (uint)*(byte *)0x5c5c;
  iVar5 = FUN_0000_c350(*(int *)(param_1 + 0x5f62),*(int *)(param_1 + 0x5f60),uVar3,
                        uVar4);
  if (iVar5 < 4) {
    *(int *)(uVar3 * 0x20 + *(int *)0xb11c + uVar4) = 0x90;
  }
  if (param_2 < 0x8000) {
    *(int *)(param_3 * 0x20 + param_4 + *(int *)0xb11c) = 5;
  }
  *(int *)(param_5 * 0x20 + param_6 + *(int *)0xb11c) = 0x46;
  return;
}



void FUN_0000_c394(int param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  int uVar3;
  int uVar4;
  int uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int unaff_DS;
  int *local_24;
  int *local_22;
  int *local_20;
  int *local_1e;
  uint local_1c;
  uint local_1a;
  int local_18;
  uint local_16;
  int local_14;
  int local_12;
  int local_10 [4];
  int local_8;
  int local_6;
  uint local_4;

  local_18 = 0x5c5a;
  iVar6 = param_2 * 0x10;
  local_8 = iVar6 + 0x5f5e;
  local_4 = (uint)*(byte *)((int)FUN_0000_5d5e + param_1 + iVar6);
  local_6 = FUN_0000_c350(*(int *)(iVar6 + 0x5f62),*(int *)(iVar6 + 0x5f60),
                          *(int *)0x5c5d,*(int *)0x5c5c);
  if ((local_6 == 1) && (3 < (int)local_4)) {
    if ((local_4 == 4) || (local_4 == 5)) {
      if (*(int *)(local_8 + 10) == 0) goto LAB_0000_c40a;
      *(int *)0x65be = 0x74;
    }
    else {
      *(int *)0x65be = 0x61;
    }
    *(int *)0x65bf = (int)param_2;
  }
  else {
LAB_0000_c40a:
    local_16 = 1;
    uVar4 = *(int *)(local_18 + 3);
    uVar5 = *(int *)(local_18 + 2);
    piVar9 = local_10;
    local_24 = local_10;
    do {
      *(int *)0x5876 = *(int *)(local_8 + 2);
      *(int *)0x5878 = *(int *)(local_8 + 4);
      FUN_0000_c2e2(local_16);
      local_12 = *(int *)0x5876;
      local_14 = *(int *)0x5878;
      iVar6 = FUN_0000_c84e(0xffff,param_2,local_14,*(int *)0x5876);
      if (iVar6 == 0) {
        *local_24 = 99;
      }
      else {
        iVar6 = FUN_0000_c350(local_14,local_12,uVar4,uVar5);
        *piVar9 = iVar6;
      }
      piVar9 = piVar9 + 1;
      local_24 = local_24 + 1;
      local_16 = local_16 + 1;
    } while ((int)local_16 < 5);
    uVar8 = 0xffff;
    local_6 = FUN_0000_c350(*(int *)(local_8 + 4),*(int *)(local_8 + 2),
                            *(int *)(local_18 + 3),*(int *)(local_18 + 2));
    uVar7 = 1;
    local_24 = local_10;
    local_22 = local_10;
    local_20 = local_10;
    local_1e = &local_18;
    do {
      if (((int)uVar7 < 5) && (*local_24 != 99)) {
        if (local_4 == 3) {
          piVar1 = local_24;
          if (*piVar1 != local_6 && local_6 <= *piVar1) {
            if ((uVar8 == 0xffff) || (iVar6 = RANDOM(1,0), iVar6 != 0)) {
              uVar8 = uVar7;
            }
            local_1a = uVar8;
            if (uVar7 == 4) break;
          }
        }
        else {
          local_1a = uVar7;
          if (*local_22 < local_6) break;
        }
      }
      if (((4 < (int)uVar7) && (*local_20 != 99)) && (local_1a = uVar7, *local_1e == local_6))
      break;
      local_24 = local_24 + 1;
      local_22 = local_22 + 1;
      local_20 = local_20 + 1;
      local_1e = local_1e + 1;
      uVar7 = uVar7 + 1;
      local_1a = uVar8;
    } while ((int)uVar7 < 8);
    local_16 = uVar7;
    if (((local_4 == 5) || (local_4 == 7)) && (iVar6 = RANDOM(0x3f,0), iVar6 < 0x10)) {
      uVar8 = 1;
      piVar9 = local_10;
      local_1c = local_1a;
      do {
        if (((uVar8 != local_1a) && (*piVar9 != 99)) &&
           ((local_1c == local_1a || (iVar6 = RANDOM(0x3f,0), iVar6 < 0x10)))) {
          local_1c = uVar8;
        }
        piVar9 = piVar9 + 1;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 5);
      local_1a = local_1c;
      local_16 = uVar8;
    }
    if (local_1a < 0x8000) {
      *(int *)0x5876 = *(int *)(local_8 + 2);
      *(int *)0x5878 = *(int *)(local_8 + 4);
      FUN_0000_c2e2(local_1a);
      iVar6 = *(int *)(local_8 + 0xc) * 8;
      uVar3 = *(int *)0x5876;
      *(int *)(local_8 + 2) = uVar3;
      *(int *)(iVar6 + 0x5c5c) = (char)uVar3;
      uVar3 = *(int *)0x5878;
      *(int *)(local_8 + 4) = uVar3;
      *(int *)(iVar6 + 0x5c5d) = (char)uVar3;
      pbVar2 = (byte *)0x24e6;
      *pbVar2 = *pbVar2 | 2;
    }
  }
  return;
}



int FUN_0000_c5e8(uint param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *puVar5;
  int iVar6;
  int unaff_DS;
  int local_a;
  int local_6;

  local_a = -1;
  iVar4 = param_2 * 0x10;
  puVar5 = (int *)(iVar4 + 0x5f5e);
  iVar6 = (int)FUN_0000_5d5e + iVar4;
  local_6 = 0;
  do {
    if (*(byte *)(local_6 + iVar6 + 0xc) == param_1) {
      local_a = FUN_0000_cf90(param_1,param_2);
      if (*(int *)(iVar4 + 0x5f6c) == local_a) {
        *puVar5 = 1;
      }
      else {
        bVar2 = *(byte *)0x5895;
        if ((*(uint *)(iVar4 + 0x5f64) == (uint)bVar2) || (*(byte *)(iVar6 + local_a + 9) == bVar2))
        {
          bVar2 = *(byte *)0x5895;
          if (*(uint *)(iVar4 + 0x5f64) == (uint)bVar2) {
            if (*(byte *)(iVar6 + local_a + 9) == bVar2) {
              *puVar5 = 2;
            }
            else {
              cVar3 = *(char *)0x5895;
              pcVar1 = (char *)(iVar6 + local_a + 9);
              if (*pcVar1 == cVar3 || *pcVar1 < cVar3) {
                *puVar5 = 7;
              }
              else {
                *puVar5 = 6;
              }
            }
          }
          else {
            cVar3 = *(char *)0x5895;
            pcVar1 = (char *)(iVar4 + 0x5f64);
            if (*pcVar1 == cVar3 || *pcVar1 < cVar3) {
              *puVar5 = 5;
            }
            else {
              *puVar5 = 4;
            }
          }
        }
        else {
          *puVar5 = 8;
        }
      }
      break;
    }
    local_6 = local_6 + 1;
  } while (local_6 < 4);
  if ((((-1 < local_a) &&
       (iVar6 = local_a + iVar6, *(uint *)(iVar4 + 0x5f60) == (uint)*(byte *)(iVar6 + 3))) &&
      (*(uint *)(iVar4 + 0x5f62) == (uint)*(byte *)(iVar6 + 6))) &&
     (*(uint *)(iVar4 + 0x5f64) == (uint)*(byte *)(iVar6 + 9))) {
    local_a = 0;
    *puVar5 = 1;
  }
  if (local_a == -1) {
    local_a = 0;
  }
  else {
    local_a = local_a + 1;
  }
  return local_a;
}
