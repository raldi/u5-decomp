typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



undefined2 town_1040_0000(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  if ((*(char *)(param_1 + 0x659e) == '\x0e') || (0x3f < *(byte *)(param_1 + 0x659e))) {
    iVar1 = (uint)*(byte *)0x5893 * 4;
    uVar2 = 0;
    uVar3 = 1;
    for (; (char)param_1 != '\0'; param_1._0_1_ = (char)param_1 + -1) {
      bVar4 = (int)uVar3 < 0;
      uVar3 = uVar3 << 1;
      uVar2 = uVar2 << 1 | (uint)bVar4;
    }
    if ((*(uint *)(iVar1 + 0x5b58) & uVar2 | *(uint *)(iVar1 + 0x5b56) & uVar3) != 0) {
      return 1;
    }
  }
  return 0;
}



void town_1040_0052(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
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



void town_1040_00b0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = param_1 * 0x10;
  iVar2 = *(int *)(iVar3 + 0x5f6a) * 8;
  *(undefined2 *)(iVar3 + 0x5f68) = 0;
  *(undefined2 *)(iVar3 + 0x5f64) = 0;
  *(undefined2 *)(iVar3 + 0x5f62) = 0;
  *(undefined2 *)(iVar3 + 0x5f60) = 0;
  *(undefined2 *)(iVar3 + 0x5f5e) = 0;
  *(undefined *)(iVar2 + 0x5c61) = 0;
  *(undefined *)(iVar2 + 0x5c60) = 0;
  *(undefined *)(iVar2 + 0x5c5e) = 0;
  *(undefined *)(iVar2 + 0x5c5d) = 0;
  *(undefined *)(iVar2 + 0x5c5c) = 0;
  *(undefined *)(iVar2 + 0x5c5b) = 0;
  *(undefined *)(iVar2 + 0x5c5a) = 0;
  *(undefined *)(iVar3 + 0x5d60) = 0;
  *(undefined *)(iVar3 + 0x5d5f) = 0;
  *(undefined *)(iVar3 + 0x5d5e) = 0;
  *(undefined *)(param_1 + 0x659e) = 0;
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return;
}



int town_1040_011e(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
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



void __cdecl16near town_1040_0170(void)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  iVar7 = 0;
  do {
    iVar5 = 0;
    do {
      pcVar2 = (char *)ultima_1000_4402(iVar5,iVar7);
      if (*pcVar2 == -0x79) {
        pbVar3 = (byte *)ultima_1000_4402(iVar5 + 1,iVar7);
        pbVar1 = pbVar3;
        *pbVar1 = *pbVar1 ^ 0xdd;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  pbVar3 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  if ((*pbVar3 & 0xfe) != 0x48) {
    for (uVar6 = 0; uVar6 < *(byte *)0x594e; uVar6 = uVar6 + 1) {
      if (*(char *)0x587f == '\x05') {
        puVar4 = (undefined *)
                 ultima_1000_4402(*(undefined *)(uVar6 + 0x590e),*(undefined *)(uVar6 + 0x58ee));
        *puVar4 = *(undefined *)(uVar6 + 0x592e);
      }
      else {
        puVar4 = (undefined *)
                 ultima_1000_4402(*(undefined *)(uVar6 + 0x590e),*(undefined *)(uVar6 + 0x58ee));
        *puVar4 = 3;
      }
    }
  }
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return;
}



void __cdecl16near town_1040_0212(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  int local_e;
  
  if (*(char *)0x5958 != -1) {
    func_0x0001a2ae(*(undefined *)0x587e);
    local_e = 0;
    do {
      iVar5 = 0;
      do {
        cVar2 = *(char *)(local_e + iVar5 + 0x6608);
        if (cVar2 == '-') {
          iVar3 = ultima_1000_2092(7,0);
          if (iVar3 != 0) {
            *(undefined *)(local_e + iVar5 + 0x6608) = 0x2c;
          }
        }
        else if ((cVar2 == '.') && (iVar3 = ultima_1000_2092(7,0), iVar3 != 0)) {
          *(undefined *)(local_e + iVar5 + 0x6608) = 0x2b;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x20);
      local_e = local_e + 0x20;
    } while (local_e < 0x400);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    uVar4 = ultima_1000_2056();
    func_0x0001a2ae(uVar4);
  }
  return;
}



void __cdecl16near town_1040_02ae(void)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  undefined2 unaff_DS;
  
  *(undefined *)0x5958 = 0xff;
  if (*(char *)0x5897 != '\x04') {
    iVar7 = 0;
    uVar3 = *(undefined *)0x5958;
    do {
      if (*(char *)(iVar7 + 0x58c8) == *(char *)0x5893) {
        uVar3 = (undefined)iVar7;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    *(undefined *)0x5958 = uVar3;
  }
  if (*(char *)0x5958 != -1) {
    town_1040_0212();
    pcVar8 = (char *)0x5c5a;
    iVar7 = 0;
    do {
      if (*pcVar8 == -4) {
        return;
      }
      pcVar8 = pcVar8 + 8;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x20);
    iVar4 = ultima_1000_38e4();
    iVar5 = iVar4 * 8;
    iVar7 = 0x1f;
    do {
      iVar6 = iVar7;
      if (*(char *)(iVar6 + 0x659e) == '\0') break;
      iVar7 = iVar6 + -1;
      iVar6 = 0x1f;
    } while (-1 < iVar7);
    iVar7 = iVar6 * 0x10;
    *(undefined2 *)(iVar7 + 0x5f5e) = 1;
    *(int *)(iVar7 + 0x5f6a) = iVar4;
    *(undefined *)(iVar5 + 0x5c5c) = 0xf;
    *(undefined2 *)(iVar7 + 0x5f60) = 0xf;
    bVar2 = *(byte *)((*(uint *)0x5893 & 0xff) + 0x13a5);
    *(byte *)(iVar5 + 0x5c5d) = bVar2;
    *(uint *)(iVar7 + 0x5f62) = (uint)bVar2;
    *(undefined *)(iVar5 + 0x5c61) = 0;
    *(undefined *)(iVar5 + 0x5c5e) = 0;
    *(undefined *)(iVar5 + 0x5c5f) = 0;
    *(undefined *)(iVar5 + 0x5c60) = 0;
    *(undefined2 *)(iVar7 + 0x5f64) = 0;
    *(undefined *)(iVar5 + 0x5c5b) = 0xfc;
    *(undefined *)(iVar5 + 0x5c5a) = 0xfc;
    puVar9 = (undefined2 *)(iVar7 + 0x5d6a);
    for (iVar7 = 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar1 = 0;
    }
    iVar7 = 0;
    do {
      iVar4 = iVar6 * 0x10 + iVar7;
      *(undefined *)(iVar4 + 0x5d5e) = 6;
      *(undefined *)(iVar4 + 0x5d61) = 0xf;
      *(undefined *)(iVar4 + 0x5d64) = *(undefined *)(iVar5 + 0x5c5d);
      *(undefined *)(iVar4 + 0x5d67) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    *(undefined *)(iVar6 + 0x659e) = 0xfc;
  }
  return;
}



void town_1040_0408(int param_1)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  int local_8;
  
  ultima_1000_4be8();
  ultima_1000_4a84();
  ultima_1000_2e96(0xffff);
  *(undefined *)0x594f = 0;
  *(undefined *)0x589c = 0;
  *(undefined *)0x589b = 0;
  uVar3 = (uint)*(byte *)0x5893;
  bVar2 = *(byte *)0x5895;
  local_8 = (uint)*(byte *)(uVar3 + 0x1e19) + (uint)bVar2;
  if (0x7f < bVar2) {
    local_8 = local_8 + -0x100;
  }
  ultima_1000_256e(local_8 << 10,0x400,0x6608,*(undefined2 *)((uVar3 - 1 >> 3) * 2 + 0x2652));
  *(undefined *)0x594e = 0;
  *(undefined2 *)0x2184 = 0xffff;
  *(undefined2 *)0x2182 = 0xffff;
  *(undefined2 *)0x2180 = 0xffff;
  *(undefined2 *)0x217e = 0xffff;
  iVar8 = 0;
  do {
    iVar7 = 0;
    do {
      pbVar4 = (byte *)ultima_1000_4402(iVar7,iVar8);
      if ((*pbVar4 & 0xfe) == 0x48) {
        uVar3 = (uint)*(byte *)0x594e;
        *(undefined *)(uVar3 + 0x58ee) = (char)iVar8;
        *(undefined *)(uVar3 + 0x590e) = (char)iVar7;
        puVar5 = (undefined *)ultima_1000_4402(iVar7,iVar8);
        *(undefined *)(uVar3 + 0x592e) = *puVar5;
        pcVar1 = (char *)0x594e;
        *pcVar1 = *pcVar1 + '\x01';
      }
      pcVar6 = (char *)ultima_1000_4402(iVar7,iVar8);
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
    town_1040_0170();
  }
  ultima_1000_5e4a();
  ultima_1000_4f7c(0);
  town_1040_0212();
  if (param_1 != 0) {
    town_1040_1694();
  }
  *(undefined *)0x24e6 = 1;
  return;
}



void town_1040_052e(int param_1,uint param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  if (((byte)param_1 & 0xfc) == 0xc4) {
    ultima_1000_5910();
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
    ultima_1000_1850(uVar2);
    town_1040_0408(1);
  }
  return;
}



void town_1040_057c(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0x587c & 0xfc;
  if (bVar1 == 0x10) {
    ultima_1000_1850(0x2666);
    if (param_1 == 1) {
      *(undefined *)0x587c = 0x12;
    }
    else if (param_1 == 3) {
      *(undefined *)0x587c = 0x13;
    }
  }
  else if (bVar1 == 0x14) {
    ultima_1000_1850(0x266c);
    if (param_1 == 1) {
      *(undefined *)0x587c = 0x14;
    }
    else if (param_1 == 3) {
      *(undefined *)0x587c = 0x15;
    }
  }
  else {
    if ((bVar1 != 0x20) && (bVar1 != 0x24)) {
      if (bVar1 != 0x28) {
        return;
      }
      ultima_1000_1850(0x2671);
    }
    *(char *)0x587c = (char)param_1 + (*(byte *)0x587c & 0xfc);
  }
  return;
}



bool town_1040_0600(int param_1)

{
  char *pcVar1;
  undefined uVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  bool bVar7;
  int local_e;
  int local_c;
  byte local_a;
  
  if ((*(char *)0x587c == '\x1c') || ((*(byte *)0x587c & 0xfe) == 0x12)) {
    func_0x0001c56e();
  }
  bVar7 = false;
  local_e = 0;
  local_c = 0;
  if (param_1 == 1) {
    local_c = -1;
    bVar7 = *(char *)0x5896 == '\0';
    param_1 = 3;
    town_1040_057c(3);
    uVar5 = 0x268a;
LAB_1040_0665:
    ultima_1000_1850(uVar5);
  }
  else {
    if (param_1 == 2) {
      local_c = 1;
      bVar7 = 0x1e < *(byte *)0x5896;
      param_1 = 1;
      town_1040_057c(1);
      uVar5 = 0x2684;
      goto LAB_1040_0665;
    }
    if (param_1 == 3) {
      local_e = -1;
      bVar7 = *(char *)0x5897 == '\0';
      param_1 = 0;
      town_1040_057c(0);
      uVar5 = 0x2676;
      goto LAB_1040_0665;
    }
    if (param_1 == 4) {
      local_e = 1;
      bVar7 = 0x1e < *(byte *)0x5897;
      param_1 = 2;
      town_1040_057c(2);
      uVar5 = 0x267d;
      goto LAB_1040_0665;
    }
  }
  bVar3 = true;
  uVar2 = *(undefined *)(local_c + local_e * 0x20 + -0x5459);
  iVar4 = ultima_1000_368e(*(undefined *)0x5895,local_e + (uint)*(byte *)0x5897,
                          local_c + (uint)*(byte *)0x5896);
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(byte *)0x587c < 0x30) && (0x1f < *(byte *)0x587c)) {
      if (((*(byte *)0x587c < 0x28) || (iVar4 < 0x24)) || (0x27 < iVar4)) goto LAB_1040_0776;
    }
    else if (((iVar4 < 0x24) || (0x2b < iVar4)) &&
            ((((iVar4 != 0x1b && (local_a = (byte)iVar4, (local_a & 0xfe) != 0x10)) &&
              (iVar4 != 0x1e)) && (iVar4 != 0x1f)))) goto LAB_1040_0776;
    bVar3 = true;
  }
LAB_1040_0776:
  if ((bVar3) && (iVar4 = ultima_1000_2c4c(uVar2,*(undefined *)0x587c), iVar4 != 0)) {
    if (bVar7 == false) {
      pcVar1 = (char *)0x5896;
      *pcVar1 = *pcVar1 + (char)local_c;
      pcVar1 = (char *)0x5897;
      *pcVar1 = *pcVar1 + (char)local_e;
      *(undefined *)0x24e6 = 1;
      if ((*(byte *)0x587c & 0xfe) == 0x12) {
        func_0x0001c56e();
      }
      town_1040_052e(uVar2,param_1);
      return false;
    }
    ultima_1000_1850(0x2690);
    do {
      iVar4 = ultima_1000_266c();
      if ((iVar4 == 0x59) || (iVar4 == 0x4e)) break;
    } while (iVar4 != 0x1b);
    if (iVar4 == 0x59) {
      ultima_1000_1850(0x26ab);
      if (*(char *)0x5893 == '\x19') {
        ultima_1000_1850(0x26b9);
        *(undefined *)0x5895 = 0xff;
      }
      else {
        ultima_1000_1850(0x26c6);
        *(undefined *)0x5895 = 0;
      }
      *(undefined *)0x594f = 0;
      uVar6 = (uint)*(byte *)0x5893;
      *(undefined *)0x5896 = *(undefined *)(uVar6 + 0x1e89);
      *(undefined *)0x5897 = *(undefined *)(uVar6 + 0x1eb1);
      *(undefined *)0x5893 = 0;
      return bVar7;
    }
    ultima_1000_1850(0x26d2);
  }
  else {
    ultima_1000_1850(0x26d6);
    ultima_1000_22c0(200,0xa5);
    ultima_1000_1b16();
  }
  return false;
}



void town_1040_085e(int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined2 unaff_DS;
  byte local_4;
  
  if (*(byte *)(param_1 + 0x659e) < 0x2f) {
    local_4 = 6;
  }
  else {
    local_4 = 7;
  }
  puVar5 = (undefined2 *)(param_1 * 0x10 + 0x5d6a);
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0;
  }
  iVar3 = (uint)local_4 * 0x100 + (uint)local_4;
  piVar6 = (int *)(param_1 * 0x10 + 0x5d5e);
  for (iVar4 = 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    piVar2 = piVar6;
    piVar6 = piVar6 + 1;
    *piVar2 = iVar3;
  }
  *(char *)piVar6 = (char)iVar3;
  return;
}



void town_1040_08d4(int param_1)

{
  undefined2 *puVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
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
    *(undefined2 *)(param_1 * 0x10 + 0x5f68) = 0xfd;
    puVar4 = (undefined2 *)(param_1 * 0x10 + 0x5d5e);
    for (iVar3 = 1; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar1 = 0x303;
    }
    *(undefined *)puVar4 = 3;
  }
  return;
}



void __cdecl16near town_1040_0958(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  int *local_8;
  
  iVar3 = 0;
  local_8 = (int *)0x5f5e;
  do {
    if (*local_8 != 0) {
      cVar1 = *(char *)(iVar3 + 0x659e);
      if (((cVar1 == -4) || (cVar1 == -0x28)) || (cVar1 == 'p')) {
        town_1040_085e(iVar3);
      }
      else {
        iVar2 = ultima_1000_2092(0xff,0);
        if (iVar2 < 0x80) {
          town_1040_08d4(iVar3);
        }
      }
    }
    local_8 = local_8 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}



void town_1040_09bc(int param_1)

{
  undefined2 unaff_DS;
  
  town_1040_0052(param_1);
  ultima_1000_6150(*(undefined2 *)(param_1 * 0x10 + 0x5f6a));
  town_1040_00b0(param_1);
  town_1040_0408(0);
  town_1040_02ae();
  return;
}



undefined2 __cdecl16near town_1040_09e6(void)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_DS;
  byte local_12;
  int local_4;
  
  ultima_1000_1850(0x26e0);
  pbVar4 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  if ((*pbVar4 < 4) && (*(char *)0x587c != '\x1c')) {
    ultima_1000_1850(0x26e8);
    return 0;
  }
  iVar5 = ultima_1000_35ec();
  if (iVar5 == 0) {
    return 1;
  }
  iVar5 = (uint)*(byte *)0x5896 + *(int *)0x5876;
  iVar6 = (uint)*(byte *)0x5897 + *(int *)0x5878;
  pcVar7 = (char *)ultima_1000_4402(iVar6,iVar5);
  if (*pcVar7 == -99) {
    puVar8 = (undefined *)ultima_1000_4402(iVar6,iVar5);
    *puVar8 = 0x9f;
    ultima_1000_1850(0x26f2);
    iVar5 = 2000;
    do {
      ultima_1000_223c(iVar5,0x78,0x28);
      iVar5 = iVar5 + 1000;
    } while (iVar5 < 20000);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    return 1;
  }
  iVar9 = ultima_1000_368e(*(undefined *)0x5895,iVar6,iVar5);
  bVar3 = true;
  local_12 = (byte)iVar9;
  if ((((iVar9 != 0) && (local_4 = town_1040_011e(*(undefined2 *)0x5876), 0x3f < iVar9)) &&
      ((iVar9 < 0xe8 || (0xef < iVar9)))) && ((local_12 & 0xfc) != 0xb4)) {
    bVar3 = false;
  }
  if (bVar3) {
    uVar10 = 0x26fb;
    goto LAB_1040_0ae1;
  }
  if (iVar9 < 0x80) {
    ultima_1000_3f36(5,0x5888);
LAB_1040_0b05:
    town_1040_0958();
  }
  else if ((local_12 & 0xfc) == 0xd8) goto LAB_1040_0b05;
  pbVar4 = (byte *)ultima_1000_4402(iVar6,iVar5);
  bVar2 = *pbVar4;
  if ((bVar2 < 0x84) || (((0x85 < bVar2 && (bVar2 != 0x9f)) && (bVar2 != 0xab)))) {
    if (local_4 < 0) {
      return 1;
    }
    town_1040_0052(local_4);
    town_1040_09bc(local_4);
    return 1;
  }
  if (iVar9 != 0x78) {
    ultima_1000_1850(0x2718);
    ultima_1000_3f36(5,0x5888);
    ultima_1000_3522(iVar6,iVar5);
    if (local_4 < 0) {
      return 1;
    }
    town_1040_0052(local_4);
    town_1040_00b0(local_4);
    return 1;
  }
  uVar10 = 9999;
LAB_1040_0ae1:
  ultima_1000_1850(uVar10);
  return 1;
}



int __cdecl16near town_1040_0b82(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  char *pcVar4;
  int iVar5;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  ultima_1000_1850(0x2723);
  if ((*(byte *)0x587c & 0xfe) == 0x12) {
    uVar3 = 0x272a;
LAB_1040_0ba0:
    ultima_1000_1850(uVar3);
  }
  else {
    pcVar4 = (char *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
    cVar2 = *pcVar4;
    if (cVar2 == -0x7a) {
LAB_1040_0c32:
      uVar3 = 2;
LAB_1040_0bd0:
      town_1040_052e(0xc4,uVar3);
      local_4 = 1;
    }
    else {
      if (cVar2 == -0x38) {
        uVar3 = 0;
        goto LAB_1040_0bd0;
      }
      if (cVar2 == -0x37) goto LAB_1040_0c32;
    }
    if (local_4 != 0) {
      return local_4;
    }
    iVar5 = ultima_1000_35ec();
    if (iVar5 != 0) {
      pcVar4 = (char *)ultima_1000_4402((uint)*(byte *)0x5897 + *(int *)0x5878,
                                       (uint)*(byte *)0x5896 + *(int *)0x5876);
      cVar2 = *pcVar4;
      if (((cVar2 != 'L') && (cVar2 != -0x36)) && (cVar2 != -0x35)) {
        uVar3 = 0x2735;
        goto LAB_1040_0ba0;
      }
      pcVar1 = (char *)0x5896;
      *pcVar1 = *pcVar1 + *(char *)0x5876;
      pcVar1 = (char *)0x5897;
      *pcVar1 = *pcVar1 + *(char *)0x5878;
      *(undefined *)0x24e6 = 1;
      ultima_1000_5910(cVar2);
    }
    local_4 = 1;
  }
  return local_4;
}



undefined2 town_1040_0c4a(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)ultima_1000_4402(param_1,param_2);
  if ((*pcVar1 != -0x5e) && (pcVar1 = (char *)ultima_1000_4402(param_1,param_2), *pcVar1 != 'C')) {
    return 0;
  }
  return 1;
}



void __cdecl16near town_1040_0c78(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  byte *local_10;
  int local_a;
  
  local_a = 0;
  local_10 = (byte *)0x5c5a;
  do {
    bVar2 = *local_10;
    if ((((bVar2 & 0xfe) == 0x10) && (local_10[4] == *(byte *)0x5895)) &&
       (iVar3 = ultima_1000_2092(1,0), iVar3 == 0)) {
      uVar6 = (uint)local_10[2];
      uVar5 = (uint)local_10[3];
      iVar3 = town_1040_0c4a(uVar5 + 1,uVar6);
      if (((iVar3 == 0) && (iVar3 = town_1040_0c4a(uVar5,uVar6 + 1), iVar3 == 0)) &&
         ((iVar3 = town_1040_0c4a(uVar5 - 1,uVar6), iVar3 == 0 &&
          (iVar3 = town_1040_0c4a(uVar5,uVar6 - 1), iVar3 == 0)))) {
        iVar3 = ultima_1000_2092(1,0);
        if (iVar3 == 0) {
          iVar3 = ultima_1000_2092(1,0);
          uVar5 = uVar5 + iVar3 * 2 + -1;
        }
        else {
          iVar3 = ultima_1000_2092(1,0);
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
          puVar4 = (undefined *)ultima_1000_4402(uVar5,uVar6,0x10);
          iVar3 = ultima_1000_2c4c(*puVar4);
          if ((iVar3 != 0) &&
             (iVar3 = ultima_1000_3702(*(undefined *)0x5895,uVar5,uVar6), iVar3 == 0)) {
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



uint town_1040_0dc4(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    ultima_1000_5910();
    if (*(char *)0xa9fa != '\0') {
      ultima_1000_2900();
      *(undefined *)0xa9fa = 0;
    }
    ultima_1000_16ba(10);
    ultima_1000_4c2a();
  }
  uVar2 = ultima_1000_266c();
  if (*(char *)0x5957 != '\0') {
    uVar2 = 0;
    iVar3 = ultima_1000_2092(1);
    if (iVar3 != 0) {
      town_1040_0958();
      pcVar1 = (char *)0x5957;
      *pcVar1 = *pcVar1 + -1;
      ultima_1000_1850(0x273c);
      iVar3 = ultima_1000_2092(3,0);
      uVar2 = (uint)*(byte *)(iVar3 + 0x2742);
    }
  }
  return uVar2;
}



undefined2 town_1040_0e34(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 3;
  if (*(char *)0xabc7 == -0x73) {
    uVar3 = param_1 - 0x30;
    if (*(char *)0xa9ce != '\0') {
      ultima_1000_2192(0xfffc,20000,4000,1,*(undefined2 *)(uVar3 * 2 + 0x2746));
    }
    if (*(byte *)(*(byte *)0x2767 + 0x275a) == uVar3) {
      pcVar1 = (char *)0x2767;
      *pcVar1 = *pcVar1 + '\x01';
      if (((*(char *)0x2767 == '\r') && (*(undefined *)0x2767 = 0, *(char *)0x5893 == '\x11')) &&
         (*(char *)0x5895 == '\x02')) {
        pbVar2 = (byte *)0x67b9;
        *pbVar2 = *pbVar2 ^ 0xb;
        ultima_1000_3072();
        *(undefined *)0x24e6 = 1;
      }
    }
    else if ((*(char *)0x2767 == '\n') && (uVar3 == 8)) {
      *(undefined *)0x2767 = 3;
    }
    else if ((*(char *)0x2767 == '\v') && (uVar3 == 7)) {
      *(undefined *)0x2767 = 2;
    }
    else if (uVar3 == *(byte *)0x275a) {
      *(undefined *)0x2767 = 1;
    }
    else {
      *(undefined *)0x2767 = 0;
    }
  }
  else {
    local_4 = ultima_1000_4080(param_1);
  }
  return local_4;
}



void __cdecl16near town_1040_0f02(void)

{
  char *pcVar1;
  undefined uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined2 unaff_DS;
  undefined2 uVar11;
  uint local_6;
  
  if (*(char *)0x585b != '\0') {
    pcVar7 = (char *)0x55b3;
    uVar9 = 0;
    do {
      if ((*pcVar7 == 'S') && (iVar6 = ultima_1000_2092(0xf,0), iVar6 == 0xf)) {
        *pcVar7 = 'G';
      }
      pcVar7 = pcVar7 + 0x20;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)0x585b);
  }
  do {
    bVar5 = false;
    pcVar7 = (char *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
    cVar4 = *pcVar7;
    if ((cVar4 == -0x74) && ((*(byte *)0x587c & 0xfe) != 0x14)) {
      ultima_1000_1850(0x2768);
      uVar2 = *(undefined *)0x587c;
      *(undefined *)0x587c = 0;
      ultima_1000_5910();
      uVar11 = 0x1390;
      ultima_1000_2aa8();
      *(undefined *)0x587c = uVar2;
      if (*(char *)0x5893 == '\x1d') {
        ultima_1000_0a70(0,uVar11);
        ultima_1000_0aa6(0xb7,0xb7,8,8);
        local_6 = 1000;
        do {
          ultima_1000_22e2(local_6);
          ultima_1000_20c8(0x28,1);
          local_6 = local_6 + -1;
        } while (0xfa < (int)local_6);
        ultima_1000_230e();
        puVar10 = (undefined *)0x6608;
        for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = 0x8f;
        }
        *(undefined *)0x24e6 = 1;
        puVar10 = (undefined *)0x5c5a;
        for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar3 = puVar10;
          puVar10 = puVar10 + 1;
          *puVar3 = 0;
        }
        local_6 = 0;
        if (*(char *)0x585b != '\0') {
          puVar8 = (undefined2 *)0x55b8;
          puVar10 = (undefined *)0x55b3;
          do {
            *puVar8 = 0;
            *puVar10 = 0x44;
            ultima_1000_223c(500,3000,0x28);
            ultima_1000_2900();
            puVar8 = puVar8 + 0x10;
            puVar10 = puVar10 + 0x20;
            local_6 = local_6 + 1;
          } while (local_6 < *(byte *)0x585b);
        }
      }
      else {
        pcVar1 = (char *)0x5895;
        *pcVar1 = *pcVar1 + -1;
        town_1040_0408(1);
        bVar5 = true;
      }
    }
    else if ((cVar4 == '\x04') && (*(char *)0x587c == '\x1c')) {
      for (local_6 = 0; local_6 < *(byte *)0x585b; local_6 = local_6 + 1) {
        iVar6 = local_6 * 0x20;
        if (((*(char *)(iVar6 + 0x55b3) != 'D') && (*(char *)(iVar6 + 0x55b3) != 'P')) &&
           (uVar9 = ultima_1000_2092(0x1d,0), *(byte *)(iVar6 + 0x55b5) < uVar9)) {
          ultima_1000_1850(0x2775);
          *(undefined *)(iVar6 + 0x55b3) = 0x50;
          ultima_1000_2900();
        }
      }
    }
    else if ((cVar4 == -0x44) || (cVar4 == -0x71)) {
      ultima_1000_5910();
      ultima_1000_1850(0x2780);
      ultima_1000_2aa8();
    }
  } while (bVar5);
  ultima_1000_2ae8();
  return;
}



void town_1040_10da(undefined2 param_1)

{
  ultima_1000_1850(0x278a);
  ultima_1000_2aa8();
  town_1040_08d4(param_1);
  return;
}



undefined2 town_1040_10f2(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
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
  iVar2 = ultima_1000_2092(1,0);
  if (iVar2 != 0) {
    local_4 = 0;
  }
  return local_4;
}



void __cdecl16near town_1040_1156(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)0x5958;
  if (cVar1 == '\x01') {
    iVar3 = 0;
    puVar4 = (undefined2 *)0x5f68;
    do {
      iVar2 = town_1040_10f2(iVar3);
      if (iVar2 != 0) {
        town_1040_085e(iVar3);
        *puVar4 = 0xfe;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  else if (cVar1 == '\x02') {
    iVar3 = 0;
    puVar4 = (undefined2 *)0x5f68;
    do {
      iVar2 = town_1040_10f2(iVar3);
      if (iVar2 != 0) {
        town_1040_08d4(iVar3);
        *puVar4 = 0xfd;
      }
      puVar4 = puVar4 + 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}



void town_1040_11b8(int param_1)

{
  undefined2 unaff_DS;
  
  ultima_1000_1850(0x27b8);
  ultima_1000_1850(*(undefined2 *)(param_1 * 2 + 0x27dc));
  ultima_1000_1850(0x27c4);
  ultima_1000_2192(1,2000,60000,1,0x19c8);
  return;
}



void town_1040_11f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  
  *(undefined *)0x24e6 = 1;
  *(undefined *)0xa9bc = 1;
  if (param_1 != 0) {
    puVar3 = (undefined *)0x5c62;
    iVar2 = 0x1f;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined *)0x5957 = 0;
    *(undefined *)0x58a4 = 1;
    func_0x0000fca6();
    func_0x0000fcd6(*(undefined *)0x587f);
  }
  *(undefined *)0x5958 = 0xff;
  town_1040_0408(param_1);
  town_1040_02ae();
  iVar2 = 0;
  do {
    iVar1 = town_1040_0000(iVar2);
    if (iVar1 != 0) {
      town_1040_00b0(iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  if ((*(char *)0x5893 == '\x1d') && (*(char *)0x57b5 != '\0')) {
    town_1040_00b0(9);
  }
  ultima_1000_2900();
  iVar1 = ultima_1000_39fc();
  if (-1 < iVar1) {
    ultima_1000_5910();
    if (*(char *)0x5893 == '\x1d') {
      iVar2 = 2;
      do {
        if (*(byte *)(iVar2 + 0x58c8) < 0x80) {
          town_1040_11b8(iVar2);
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    else if (*(char *)0x5958 != -1) {
      town_1040_11b8(*(undefined *)0x5958,iVar2);
      town_1040_1156();
    }
  }
  return;
}



undefined2 __cdecl16near town_1040_12ae(void)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x5893 == '\x12') {
    iVar2 = ultima_1000_39fc();
    if (iVar2 < 0) {
      return 0;
    }
    func_0x0000fcee();
  }
  else {
    ultima_1000_1850(0x27e2);
    ultima_1000_1850(0x27fe);
    do {
      cVar1 = ultima_1000_266c();
      if (cVar1 == 'N') break;
    } while (cVar1 != 'Y');
    if (cVar1 != 'Y') {
      ultima_1000_1850(0x285e);
      town_1040_0958();
      return 1;
    }
    ultima_1000_1850(0x281b);
    ultima_1000_0a70(0);
    ultima_1000_1850(0x2845);
    *(undefined *)0x5893 = 4;
    *(undefined *)0x5896 = 0x19;
    *(undefined *)0x5897 = 4;
    *(undefined *)0x24e6 = 1;
    while (*(char *)0x587f != '\b') {
      ultima_1000_4f7c(0x14);
    }
    *(undefined *)0x57ac = 0;
    *(undefined *)0x5895 = 0;
  }
  town_1040_11f0(1);
  return 0x16d4;
}



void town_1040_1352(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  iVar2 = *(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f6a);
  ultima_1000_5910();
  if (*(char *)0x65be == 'a') {
    if (*(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f68) == 0xfe) {
      ultima_1000_16ba(10);
      town_1040_10da(*(undefined *)0x65bf);
      goto LAB_1040_13dc;
    }
    if (*(char *)(iVar2 * 8 + 0x5c5a) != 'p') {
      local_4 = 1;
      goto LAB_1040_13dc;
    }
  }
  else if (param_1 == 0) {
    uVar1 = (uint)*(byte *)0x65bf;
    if (*(int *)(uVar1 * 0x10 + 0x5f68) == 0) goto LAB_1040_13dc;
    iVar2 = func_0x0000fd12(uVar1);
    if (iVar2 == 0) goto LAB_1040_13dc;
  }
  local_4 = town_1040_12ae();
LAB_1040_13dc:
  if (local_4 != 0) {
    if (*(byte *)(*(int *)((uint)*(byte *)0x65bf * 0x10 + 0x5f6a) * 8 + 0x5c5a) < 0x40) {
      town_1040_00b0(*(undefined *)0x65bf);
    }
    else {
      ultima_1000_1850(0x2881);
      town_1040_09bc(*(undefined *)0x65bf);
    }
  }
  return;
}



void __cdecl16near town_1040_141e(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined2 unaff_DS;
  int local_c;
  uint local_8;
  undefined2 local_4;
  
  bVar5 = false;
  bVar4 = false;
  do {
    bVar6 = false;
    local_c = 1;
    iVar7 = ultima_1000_39fc();
    if (iVar7 == 1) {
      ultima_1000_16ba(10);
      ultima_1000_4c2a();
      ultima_1000_1850(0x288d);
    }
    else if (iVar7 == -1) {
      func_0x0000fc8e();
      local_c = 0;
    }
    else {
      if (*(char *)0xa9bc == '\0') {
        iVar7 = ultima_1000_48a8();
        if (iVar7 != 0) {
          func_0x0000fc9a();
        }
      }
      else {
        *(undefined *)0xa9bc = 0;
      }
      if (*(char *)0x5893 == '\0') {
        return;
      }
      local_4 = 1;
      do {
        local_8 = town_1040_0dc4(local_4);
        local_4 = 0;
        if (local_8 < 0x20) {
          if (local_8 - 1 < 0x16) {
                    // WARNING: Could not emulate address calculation at 0x000118b3
                    // WARNING: Treating indirect jump as call
            (**(code **)((local_8 - 1) * 2 + -0x68de))();
            return;
          }
          ultima_1000_1850(0x28be);
          local_c = 0;
        }
        else if ((local_8 < 0x30) || (0x39 < local_8)) {
          local_c = ultima_1000_3178(local_8);
        }
        else {
          local_c = town_1040_0e34(local_8);
        }
      } while (local_c == 3);
    }
    if (*(char *)0x5893 == '\0') {
      bVar6 = true;
    }
    else if ((local_c != 0) && (iVar7 = ultima_1000_39fc(), iVar7 != -1)) {
      cVar2 = *(char *)0x587f;
      ultima_1000_4f7c(1);
      cVar3 = *(char *)0x587f;
      if ((cVar2 != cVar3) && ((cVar3 == '\x14' || (cVar3 == '\x05')))) {
        town_1040_0170();
      }
      town_1040_0f02();
      if (*(char *)0x594f != '\0') {
        pcVar1 = (char *)0x5952;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          ultima_1000_39cc(*(undefined *)0x5951,*(undefined *)0x5950,*(undefined *)0x594f);
        }
      }
      *(undefined *)0x5c5c = *(undefined *)0x5896;
      *(undefined *)0x5c5d = *(undefined *)0x5897;
      *(undefined *)0x5c5e = *(undefined *)0x5895;
      if (((((*(byte *)0x587c < 0x12) || (0x15 < *(byte *)0x587c)) || (local_8 == 0x20)) ||
          (bVar4 = !bVar4, !bVar4)) &&
         ((*(char *)0x587a != 'T' && ((*(char *)0x587a != 'Q' || (bVar5 = !bVar5, !bVar5)))))) {
        town_1040_0c78();
        if (local_c < 2) {
          func_0x0000fce2(*(undefined *)0x587f);
        }
        if ((*(char *)0x65bf != '\0') || (local_c == 2)) {
          town_1040_1352(local_c + -1);
        }
      }
    }
  } while (!bVar6);
  return;
}



void __cdecl16near town_1040_1694(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 *local_a;
  
  iVar3 = 1;
  puVar4 = (undefined2 *)0x5f7a;
  do {
    ultima_1000_3a74(iVar3,0,0,0,0,0,0);
    *puVar4 = 0;
    puVar4 = puVar4 + 8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  iVar3 = 1;
  iVar5 = 0x10;
  local_a = (undefined2 *)0x6560;
  do {
    if (*(char *)(iVar3 + 0x659e) != '\0') {
      iVar1 = func_0x0000fd66(*(undefined *)0x587f,iVar3);
      iVar2 = iVar5 + iVar1;
      town_1040_1726(*(undefined *)(iVar2 + 0x5d67),*(undefined *)(iVar2 + 0x5d64),
                    *(undefined *)(iVar2 + 0x5d61),iVar3);
      *(undefined2 *)(iVar5 + 0x5f5e) = 1;
      *(int *)(iVar5 + 0x5f6c) = iVar1;
      *local_a = 0xffff;
    }
    iVar5 = iVar5 + 0x10;
    local_a = local_a + 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}



void town_1040_1726(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  undefined uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  bool bVar8;
  undefined2 local_8;
  
  if (*(char *)(param_4 + 0x659e) != '\0') {
    iVar2 = param_4 * 0x10;
    if ((param_1 != *(byte *)0x5895) && (*(int *)(iVar2 + 0x5f6a) != 0)) {
      *(undefined *)(*(int *)(iVar2 + 0x5f6a) * 8 + 0x5c5a) = 0;
      *(undefined2 *)(iVar2 + 0x5f6a) = 0;
    }
    if ((param_1 == *(byte *)0x5895) && (*(int *)(iVar2 + 0x5f6a) == 0)) {
      iVar7 = ultima_1000_38e4();
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
      uVar1 = *(undefined *)(param_4 + 0x659e);
      ultima_1000_3a74(iVar7,local_8,param_1,param_2,param_3,uVar1,uVar1);
      *(undefined *)(iVar7 * 8 + 0x5c60) = 0;
      *(int *)(iVar2 + 0x5f6a) = iVar7;
    }
    if ((param_1 == *(byte *)0x5895) && (*(int *)(iVar2 + 0x5f6a) != 0)) {
      iVar7 = *(int *)(iVar2 + 0x5f6a) * 8;
      *(undefined *)(iVar7 + 0x5c5c) = (undefined)param_3;
      *(undefined *)(iVar7 + 0x5c5d) = (undefined)param_2;
      *(undefined *)(iVar7 + 0x5c5e) = (undefined)param_1;
    }
    *(undefined2 *)(iVar2 + 0x5f60) = param_3;
    *(undefined2 *)(iVar2 + 0x5f62) = param_2;
    *(uint *)(iVar2 + 0x5f64) = param_1;
    *(undefined2 *)(iVar2 + 0x5f5e) = 1;
  }
  return;
}


