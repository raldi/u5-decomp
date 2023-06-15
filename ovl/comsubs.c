typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



undefined2 comsubs_1641_0000(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 != 0x30) && (param_1 != 0x31)) && (param_1 < 0x33)) {
    iVar1 = func_0x000100f6(0xffff,param_3);
    iVar2 = func_0x000100f6(0xffff,param_2);
    iVar3 = ultima_1000_3abe();
    if (iVar3 < ((iVar2 - iVar1) + 0x1e) / 2) {
      return 1;
    }
  }
  return 0;
}



void __cdecl16near comsubs_1641_0056(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  pbVar3 = (byte *)0x5c5a;
  do {
    if ((*pbVar3 & 0xfc) == 0xe8) {
      iVar1 = ultima_1000_2092(0xff,0);
      if (iVar1 < 0x10) {
        func_0x0001ffb2(iVar2 + 1);
      }
    }
    pbVar3 = pbVar3 + 8;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}



void comsubs_1641_0094(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) {
    iVar1 = *(int *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 2 + 0x1856);
  }
  else {
    iVar1 = (uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55a8;
  }
  ultima_1000_1850(iVar1);
  return;
}



void comsubs_1641_00d2(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x588f == '\0') {
    comsubs_1641_0094(param_1);
    uVar1 = 0x99aa;
  }
  else {
    uVar1 = 0x99a0;
  }
  ultima_1000_1850(uVar1);
  return;
}



undefined2 comsubs_1641_00f4(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  
  iVar7 = param_1 * 8;
  uVar3 = (uint)*(byte *)(iVar7 + -0x45e9);
  uVar4 = (uint)*(byte *)(iVar7 + -0x45e8);
  if (((*(char *)0x587a == '\x1c') || (*(char *)0x587a == 'N')) ||
     ((*(byte *)(iVar7 + -0x45ea) & 0x80) != 0)) {
LAB_1000_6537:
    uVar5 = 0;
  }
  else {
    if ((*(byte *)(uVar3 * 2 + 0x153c) & 0x40) == 0) {
LAB_1641_01ca:
      if (((*(uint *)(uVar3 * 2 + 0x153c) & 0x800) == 0) ||
         (iVar7 = ultima_1000_2092(0xff,0), 0x1f < iVar7)) {
        if (((((*(uint *)(uVar3 * 2 + 0x153c) & 0x400) == 0) ||
             (iVar7 = ultima_1000_2092(0xff,0), 0x1f < iVar7)) ||
            (iVar7 = func_0x000100c6(), iVar7 == 0)) ||
           ((iVar7 = func_0x0001ffa6(*(undefined2 *)0x5878,*(undefined2 *)0x5876,0xd8), iVar7 == 0
            || (iVar7 = ultima_1000_6506(*(undefined *)0x5895,*(undefined2 *)0x5878,
                                        *(undefined2 *)0x5876,0,0x26), iVar7 == -1))))
        goto LAB_1000_6537;
        ultima_1000_16ba(10);
        comsubs_1641_0094(param_1);
        ultima_1000_1850(0x99dc);
        ultima_1000_2192(0xf,1000,5000,1,0xac8);
        iVar7 = (uint)*(byte *)(iVar7 * 8 + -0x45e8) * 8;
        *(undefined *)(iVar7 + 0x5c5b) = 0x16;
        *(undefined *)(iVar7 + 0x5c5a) = 0x16;
        ultima_1000_1068(*(undefined2 *)0x5878,*(undefined2 *)0x5876,0x1d8);
        *(undefined *)(iVar7 + 0x5c5b) = 0xd8;
        *(undefined *)(iVar7 + 0x5c5a) = 0xd8;
      }
      else {
        ultima_1000_16ba(10);
        comsubs_1641_0094(param_1);
        iVar7 = uVar4 * 8;
        if (*(char *)(iVar7 + 0x5c5b) == '\0') {
          ultima_1000_1850(0x99c2);
          pbVar1 = (byte *)(param_1 * 8 + -0x45ea);
          *pbVar1 = *pbVar1 & 0xef;
          *(undefined *)(iVar7 + 0x5c5b) = *(undefined *)(iVar7 + 0x5c5a);
        }
        else {
          ultima_1000_1850(0x99ce);
          pbVar1 = (byte *)(param_1 * 8 + -0x45ea);
          *pbVar1 = *pbVar1 | 0x10;
          *(undefined *)(uVar4 * 8 + 0x5c5b) = 0;
        }
      }
    }
    else {
      iVar7 = ultima_1000_2092(0x1f,0);
      iVar8 = iVar7 * 8;
      bVar2 = *(byte *)(iVar8 + -0x45ea);
      if (((bVar2 & 0x80) == 0) || ((bVar2 & 0x3d) != 0)) goto LAB_1641_01ca;
      iVar6 = comsubs_1641_0000(0,iVar7,param_1);
      if (iVar6 == 0) {
        ultima_1000_16ba(10);
        pbVar1 = (byte *)(iVar8 + -0x45ea);
        *pbVar1 = *pbVar1 | 1;
        if (*(char *)(iVar8 + -0x45e9) == *(char *)0x587b) {
          *(undefined *)0x587b = 0xff;
        }
        ultima_1000_2900();
        comsubs_1641_0094(iVar7);
        ultima_1000_1850(0x99b4);
        ultima_1000_2192(2,1000,30000,1,0xc1c);
        if (uVar3 == 0x26) {
          func_0x0001ffb2(-1 - param_1);
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



void comsubs_1641_0312(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)(param_2 * 8 + -0x45ea);
  pbVar1 = (byte *)0x58a2;
  *pbVar1 = *pbVar1 & 0xfe;
  if ((*(byte *)0x58a2 & 0x20) != 0) {
    comsubs_1641_0094(param_2);
    ultima_1000_1850(0x99f2);
    ultima_1000_43ae(0x28,1,2000,0x4b0);
  }
  if ((*(byte *)0x58a2 & 0x22) != 0) {
    pbVar1 = (byte *)0x58a2;
    *pbVar1 = *pbVar1 & 0xdd;
    return;
  }
  if ((bVar2 == 0) || ((bVar2 & 0x20) != 0)) {
    comsubs_1641_0094(param_2);
    ultima_1000_1850(0x99fc);
    pbVar1 = (byte *)0x58a2;
    *pbVar1 = *pbVar1 | 1;
  }
  else {
    if ((*(byte *)0x58a2 & 4) == 0) {
      if ((*(byte *)0x58a2 & 8) != 0) goto LAB_1641_0426;
      comsubs_1641_0094(param_2);
      if ((bVar2 & 0x80) == 0) {
        iVar4 = func_0x0001ff8e(param_2);
        if (iVar4 == 1) {
          uVar3 = 0x9a64;
        }
        else if (iVar4 == 2) {
          uVar3 = 0x9a50;
        }
        else if (iVar4 == 3) {
          uVar3 = 0x9a3c;
        }
        else {
          if (iVar4 != 4) goto LAB_1641_0426;
          uVar3 = 0x9a2a;
        }
      }
      else {
        if ((param_1 != 0xff) && (*(char *)(param_1 * 8 + -0x45e9) == '-')) {
          ultima_1000_1850(0x9a10);
          ultima_1000_43ae(0x28,1,2000,0x4b0);
          pbVar1 = (byte *)(param_2 * 8 + -0x45ea);
          *pbVar1 = *pbVar1 | 4;
          *(undefined *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c5b) = 0;
          ultima_1000_3ae6(4);
          goto LAB_1641_0426;
        }
        uVar3 = 0x9a22;
      }
    }
    else {
      comsubs_1641_0094(param_2);
      uVar3 = 0x9a06;
    }
    ultima_1000_1850(uVar3);
  }
LAB_1641_0426:
  if ((bVar2 & 0x80) != 0) {
    ultima_1000_2900();
    ultima_1000_5910();
  }
  pbVar1 = (byte *)0x58a2;
  *pbVar1 = *pbVar1 & 0xf3;
  return;
}



undefined4 comsubs_1641_0458(int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = (long)(param_3 - param_1) * (long)(param_3 - param_1);
  return CONCAT22((int)((ulong)lVar1 >> 0x10),(param_4 - param_2) * (param_4 - param_2) + (int)lVar1
                 );
}



int comsubs_1641_048a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = comsubs_1641_0458(param_1,param_2,param_3,param_4);
  iVar2 = 0;
  for (iVar3 = 1; iVar3 <= iVar1; iVar3 = iVar3 + 2) {
    iVar1 = iVar1 - iVar3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



void comsubs_1641_04d4(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  comsubs_1641_048a(*(undefined *)(param_1 * 8 + -0x45e5),*(undefined *)(param_1 * 8 + -0x45e6),
                *(undefined *)(param_2 * 8 + -0x45e5),*(undefined *)(param_2 * 8 + -0x45e6));
  return;
}



int comsubs_1641_0504(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  int local_14;
  uint local_c;
  undefined local_6;
  undefined local_4;
  
  *(undefined *)0x5898 = 1;
  local_c = (uint)*(byte *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c61);
  iVar6 = local_c * 8;
  if ((((0x1f < local_c) || ((*(byte *)(iVar6 + -0x45ea) & 0x30) != 0)) ||
      (*(char *)(iVar6 + -0x45ea) == '\0')) ||
     ((*(char *)((uint)*(byte *)(iVar6 + -0x45e8) * 8 + 0x5c5a) == '\0' ||
      (iVar6 = comsubs_1641_04d4(local_c,param_2), param_1 < iVar6)))) {
    local_c = param_2;
  }
  *(undefined *)0x5899 = *(undefined *)(local_c * 8 + -0x45e6);
  *(undefined *)0x589a = *(undefined *)(local_c * 8 + -0x45e5);
  bVar2 = false;
  bVar1 = false;
  pcVar3 = (char *)(param_2 * 8 + -0x45e5);
  pcVar4 = (char *)(param_2 * 8 + -0x45e6);
  do {
    if ((bVar1) || (bVar2)) {
      *(undefined *)0x5898 = 0;
      if (bVar2) {
        ultima_1000_16ba(10);
        local_14 = 0;
      }
      return local_14;
    }
    iVar7 = 0;
    iVar6 = 0;
    ultima_1000_5910();
    uVar8 = 0x6a50;
    iVar5 = ultima_1000_266c();
    if (iVar5 == 0x1b) {
      bVar2 = true;
      iVar6 = iVar7;
    }
    else if (iVar5 < 0x1c) {
      if (iVar5 == 1) {
LAB_1641_0683:
        iVar6 = -1;
      }
      else if (iVar5 == 2) {
LAB_1641_0679:
        iVar6 = 1;
      }
      else {
        if (iVar5 == 3) goto LAB_1641_05c5;
        if (iVar5 == 4) {
LAB_1641_066f:
          iVar7 = 1;
        }
        else if (iVar5 == 0xd) goto LAB_1641_06a3;
      }
    }
    else {
      if (iVar5 == 0x20) {
        if ((*pcVar4 == *(char *)0x5899) && (*pcVar3 == *(char *)0x589a)) {
          bVar2 = true;
        }
      }
      else if (iVar5 != 0x41) {
        if (iVar5 == 0xd3) {
          iVar7 = -1;
LAB_1641_05c5:
          iVar6 = iVar7;
          iVar7 = -1;
        }
        else {
          if (iVar5 == 0xd4) {
            iVar7 = 1;
            goto LAB_1641_0683;
          }
          if (iVar5 == 0xd5) {
            iVar7 = -1;
            goto LAB_1641_0679;
          }
          if (iVar5 == 0xd6) {
            iVar6 = 1;
            goto LAB_1641_066f;
          }
        }
        goto LAB_1000_69d8;
      }
LAB_1641_06a3:
      if ((*pcVar4 != *(char *)0x5899) || (*pcVar3 != *(char *)0x589a)) {
        ultima_1000_16ba(10,uVar8);
        if (*(char *)0x588f != '\0') {
          ultima_1000_223c(700,(uint)*(byte *)0x588f * 0x640 + 8000,800);
        }
        bVar1 = true;
      }
    }
LAB_1000_69d8:
    iVar6 = iVar6 + (uint)*(byte *)0x5899;
    iVar7 = iVar7 + (uint)*(byte *)0x589a;
    local_14 = comsubs_1641_048a(*pcVar3,*pcVar4,iVar7,iVar6);
    if ((((local_14 <= param_1) && (-1 < iVar6)) && (iVar6 < 0xb)) &&
       ((-1 < iVar7 && (iVar7 < 0xb)))) {
      local_4 = (undefined)iVar6;
      *(undefined *)0x5899 = local_4;
      local_6 = (undefined)iVar7;
      *(undefined *)0x589a = local_6;
    }
  } while( true );
}



int comsubs_1641_0748(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  byte *local_10;
  byte *local_e;
  byte *local_c;
  
  iVar2 = 0;
  pbVar3 = (byte *)0xba1a;
  local_c = (byte *)0xba1b;
  local_e = (byte *)0xba16;
  local_10 = (byte *)0xba18;
  while ((((*pbVar3 != param_2 || (*local_c != param_1)) ||
          (bVar1 = *local_e, *(char *)((uint)*local_10 * 8 + 0x5c5b) == -0xc)) ||
         ((((bVar1 & 0xc0) == 0 || ((bVar1 & 0x20) != 0)) || ((bVar1 & 4) != 0))))) {
    pbVar3 = pbVar3 + 8;
    local_c = local_c + 8;
    local_e = local_e + 8;
    local_10 = local_10 + 8;
    iVar2 = iVar2 + 1;
    if (0x1f < iVar2) {
      return -1;
    }
  }
  return iVar2;
}



void comsubs_1641_07d4(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    do {
      iVar1 = ultima_1000_2092(3,1);
      *(int *)0x5876 = iVar1 + param_2 + -2;
      iVar1 = ultima_1000_2092(3,1);
      iVar1 = iVar1 + param_1 + -2;
      *(int *)0x5878 = iVar1;
    } while (*(int *)0x5876 < 0);
  } while (((10 < *(int *)0x5876) || (iVar1 < 0)) || (10 < iVar1));
  return;
}



uint comsubs_1641_0822(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  int local_e;
  undefined2 local_c;
  undefined2 local_6;
  
  local_6 = param_4;
  local_c = param_3;
  uVar3 = (uint)*(byte *)(param_5 * 8 + -0x45e6);
  uVar2 = (uint)*(byte *)(param_5 * 8 + -0x45e5);
  if (param_2 == 0) {
    do {
      comsubs_1641_07d4(param_3,param_4);
      if (uVar3 != *(uint *)0x5876) break;
    } while (uVar2 == *(uint *)0x5878);
    local_6 = *(undefined2 *)0x5876;
    local_c = *(undefined2 *)0x5878;
  }
  if ((*(char *)0x589d == '\x19') || (*(char *)0x589d == '\"')) {
    if (param_2 != 0) {
      local_6 = param_4;
      local_c = param_3;
      local_e = 1;
    }
  }
  else {
    local_e = comsubs_1641_12de(param_1,local_c,local_6,uVar2,uVar3);
    if (local_e == 0) {
      local_6 = *(undefined2 *)0x5876;
      local_c = *(undefined2 *)0x5878;
    }
    else {
      func_0x000100ea(local_c,local_6);
    }
  }
  if (local_e == 0) goto LAB_1641_0964;
  uVar3 = comsubs_1641_0748(local_c,local_6);
  cVar1 = *(char *)0x589d;
  if (cVar1 == '\x13') {
LAB_1641_090c:
    uVar4 = 0xea;
LAB_1000_6d1f:
    ultima_1000_6506(*(undefined *)0x5895,local_c,local_6,2,uVar4);
  }
  else {
    if (cVar1 == '3') {
      uVar4 = 0xe8;
      goto LAB_1000_6d1f;
    }
    if (cVar1 == '4') {
      uVar4 = 0xe9;
      goto LAB_1000_6d1f;
    }
    if (cVar1 == '5') goto LAB_1641_090c;
    if (cVar1 == '6') {
      uVar4 = 0xeb;
      goto LAB_1000_6d1f;
    }
  }
  if ((((*(char *)0x588f == '\0') || (param_2 != 0)) && (-1 < (int)uVar3)) &&
     (uVar3 != *(byte *)0x589e)) {
    *(undefined2 *)0x5876 = local_6;
    *(undefined2 *)0x5878 = local_c;
    return uVar3;
  }
LAB_1641_0964:
  *(undefined2 *)0x5876 = local_6;
  *(undefined2 *)0x5878 = local_c;
  return 0xffff;
}



void comsubs_1641_097c(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  if (*(char *)0x588f != '\0') {
    return;
  }
  if (param_2 < 0x17) {
    if ((param_2 < 0x15) && (param_2 != 0x10)) {
      return;
    }
    if (param_1 < 2) {
      return;
    }
    if (*(char *)(param_2 + 0x57c0) != '\0') {
      pcVar1 = (char *)(param_2 + 0x57c0);
      *pcVar1 = *pcVar1 + -1;
      return;
    }
    ultima_1000_6e60(param_2,*(undefined *)((uint)*(byte *)0x589e * 8 + -0x45e9));
    return;
  }
  if (param_2 != 0x1a) {
    if (param_2 == 0x1c) {
      pcVar1 = (char *)0x57dd;
      *pcVar1 = *pcVar1 + -1;
      cVar2 = *pcVar1;
      goto LAB_1000_6db0;
    }
    if (param_2 != 0x24) {
      return;
    }
  }
  pcVar1 = (char *)0x57db;
  *pcVar1 = *pcVar1 + -1;
  cVar2 = *pcVar1;
LAB_1000_6db0:
  if (cVar2 == '\0') {
    cVar2 = func_0x0001023a(param_2);
    pcVar1 = (char *)(param_2 + 0x57c0);
    *pcVar1 = *pcVar1 + cVar2;
  }
  return;
}



undefined2 comsubs_1641_09fc(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x58a8);
  if ((((uVar1 != 0xff) && (pbVar3 = (byte *)(uVar1 * 8 + -0x45ea), *pbVar3 != 0)) &&
      (iVar2 = ultima_1000_5646(uVar1), iVar2 != 0)) &&
     ((((*pbVar3 & 0xc) == 0 && (*(char *)0x587a != 'T')) &&
      (iVar2 = comsubs_1641_04d4(uVar1,param_1), iVar2 == 1)))) {
    ultima_1000_16ba(10);
    comsubs_1641_0094(uVar1);
    ultima_1000_1850(0x9a70);
    return 1;
  }
  return 0;
}



void comsubs_1641_0a68(undefined2 param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined uVar2;
  undefined uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  undefined local_c;
  
  if (((((param_2 != 0x1a) && (param_2 != 0x1c)) && (param_2 != 0x24)) &&
      ((param_2 != 0x13 && (param_2 != 0x11)))) || (iVar5 = comsubs_1641_09fc(param_3), iVar5 == 0)) {
    ultima_1000_1850(0x9a7e);
    iVar5 = comsubs_1641_0504(*(undefined *)(param_2 + 0x1664),param_3);
    if (iVar5 != 0) {
      ultima_1000_43ae(100,5,300,0x514);
      if (param_2 == 0x13) {
        if (*(char *)0x57d3 == '\0') {
          ultima_1000_6e60(0x13,*(undefined *)((uint)*(byte *)0x589e * 8 + -0x45e9));
        }
        else {
          pcVar1 = (char *)0x57d3;
          *pcVar1 = *pcVar1 + -1;
        }
      }
      iVar6 = (uint)*(byte *)(param_3 * 8 + -0x45e8) * 8;
      *(undefined *)(iVar6 + 0x5c61) = 0xff;
      uVar7 = comsubs_1641_0748(*(undefined *)0x589a,*(undefined *)0x5899);
      if ((int)uVar7 < 0) {
        uVar2 = *(undefined *)0x5899;
        uVar3 = *(undefined *)0x589a;
        uVar8 = 1;
      }
      else {
        local_c = (undefined)uVar7;
        *(undefined *)(iVar6 + 0x5c61) = local_c;
        comsubs_1641_097c(iVar5,param_2);
        uVar8 = func_0x0001ff52(param_2,-(uint)*(byte *)0x588f,param_3,uVar7);
        uVar2 = *(undefined *)0x5899;
        uVar3 = *(undefined *)0x589a;
      }
      uVar9 = comsubs_1641_0822(param_1,uVar8,uVar3,uVar2,param_3);
      uVar8 = *(undefined2 *)0x5876;
      uVar4 = *(undefined2 *)0x5878;
      if (uVar9 < 0x8000) {
        ultima_1000_3564(uVar9);
        ultima_1000_16ba(10);
        func_0x0001ff82(param_3,uVar9);
        comsubs_1641_0312(param_3,uVar9);
      }
      else if (uVar7 < 0x8000) {
        ultima_1000_16ba(10);
        comsubs_1641_00d2(uVar7);
      }
      if (param_2 == 0x26) {
        comsubs_1641_12de(param_1,*(undefined *)(param_3 * 8 + -0x45e5),
                      *(undefined *)(param_3 * 8 + -0x45e6),uVar4,uVar8);
      }
    }
  }
  return;
}



void comsubs_1641_0bf8(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  ultima_1000_43ae(0x96,5,0x2ee,400);
  ultima_1000_16ba(10);
  iVar1 = func_0x0001ff52(param_1,-(uint)*(byte *)0x588f,param_3,param_2);
  if (iVar1 == 0) {
    comsubs_1641_00d2(param_2);
  }
  else {
    ultima_1000_3564(param_2);
    func_0x0001ff82(param_3,param_2);
    comsubs_1641_0312(param_3,param_2);
  }
  return;
}



void comsubs_1641_0c52(int param_1,int param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined local_8;
  
  if (0x22 < param_1) {
    *(undefined *)0x5890 = 1;
  }
  if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) == 0) {
    cVar1 = *(char *)(*(byte *)(param_2 * 8 + -0x45e9) + 0x159c);
    if (cVar1 == '\x01') {
      cVar1 = '\0';
    }
    uVar2 = *(undefined *)(*(byte *)(param_2 * 8 + -0x45e9) + 0x15cc);
  }
  else {
    if (param_1 == 0xff) {
      cVar1 = '\0';
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1664);
    }
    uVar2 = *(undefined *)(param_1 + 0x169c);
  }
  if (cVar1 == '\0') {
    ultima_1000_1850(0x9a84);
    iVar3 = comsubs_1641_0504(1,param_2);
    iVar4 = comsubs_1641_0748(*(undefined *)0x589a,*(undefined *)0x5899);
    if ((iVar3 == 0) || (iVar4 == -1)) {
      ultima_1000_1850(0x9a8a);
    }
    else {
      local_8 = (undefined)iVar4;
      *(undefined *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c61) = local_8;
      comsubs_1641_0bf8(param_1,iVar4,param_2);
    }
  }
  else {
    comsubs_1641_0a68(uVar2,param_1,param_2);
  }
  return;
}



void comsubs_1641_0d3c(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if ((param_2 != 0xff) && (*(char *)(param_2 + 0x15fc) != '\0')) {
    if (1 < param_1) {
      *(undefined *)0x588f = 0;
      *(undefined *)0x5890 = 0;
      ultima_1000_16ba(10);
      ultima_1000_1850(*(undefined2 *)(param_2 * 2 + 0x17f6));
      ultima_1000_1850(0x9a94);
    }
    *(undefined *)0x589d = (undefined)param_2;
    ultima_1000_1850(0x9a98);
    comsubs_1641_0c52(param_2,*(undefined *)0x589e);
  }
  return;
}



void comsubs_1641_0d96(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) == 0) || (param_1 == 0)) {
    *(undefined *)0x589d = 0xff;
    ultima_1000_1850(0x9aa0);
    comsubs_1641_0c52(0xff,param_2);
  }
  else {
    bVar1 = *(byte *)(param_2 * 8 + -0x45e9);
    if (1 < param_1) {
      uVar2 = ultima_1000_1cee(0);
      ultima_1000_1bf2(uVar2);
      ultima_1000_16ba(0x20);
    }
    iVar3 = (uint)bVar1 * 0x20;
    comsubs_1641_0d3c(param_1,*(undefined *)(iVar3 + 0x55c1));
    comsubs_1641_0d3c(param_1,*(undefined *)(iVar3 + 0x55c3));
    comsubs_1641_0d3c(param_1,*(undefined *)(iVar3 + 0x55c4));
  }
  return;
}



void comsubs_1641_0e26(undefined *param_1,undefined *param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_10;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_6 = 1;
  local_8 = 1;
  local_c = 0x148;
  if (param_4 == param_6) {
    local_a = 0x4b00;
  }
  else {
    local_a = ((param_3 - param_5) * 100) / (param_4 - param_6);
  }
  if (local_a < 0) {
    local_a = -local_a;
  }
  if (param_4 < param_6) {
    local_6 = -1;
  }
  if (param_3 < param_5) {
    local_8 = -1;
  }
  local_10 = param_4 - param_6;
  if (local_10 < 0) {
    local_10 = -local_10;
  }
  local_4 = param_3 - param_5;
  if (local_4 < 0) {
    local_4 = -local_4;
  }
  *param_2 = (undefined)param_6;
  param_2 = param_2 + 1;
  *param_1 = (undefined)param_5;
  param_1 = param_1 + 1;
  iVar1 = local_a;
  while ((0 < local_10 || (0 < local_4))) {
    do {
      if ((iVar1 < 1) || (local_4 < 1)) break;
      iVar1 = iVar1 + -100;
      param_5 = param_5 + local_8;
      *param_1 = (char)param_5;
      param_1 = param_1 + 1;
      local_4 = local_4 + -1;
      *param_2 = (undefined)param_6;
      param_2 = param_2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (local_c == 0) break;
    local_10 = local_10 + -1;
    iVar1 = iVar1 + local_a;
    param_6 = param_6 + local_6;
    *param_1 = (char)param_5;
    *param_2 = (undefined)param_6;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    local_c = local_c + -1;
  }
  *param_2 = 0xff;
  *param_1 = 0xff;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001763d)
// WARNING: Removing unreachable block (ram,0x0001765b)
// WARNING: Removing unreachable block (ram,0x0001769e)
// WARNING: Removing unreachable block (ram,0x000176a4)
// WARNING: Removing unreachable block (ram,0x000176aa)
// WARNING: Removing unreachable block (ram,0x000176b0)
// WARNING: Removing unreachable block (ram,0x000176df)
// WARNING: Removing unreachable block (ram,0x000176dc)

void comsubs_1641_0f4a(undefined2 param_1_00,undefined2 param_2,uint param_1)

{
  undefined2 unaff_DS;
  
  ultima_1000_0a70(*(undefined2 *)0x13b0);
  if (param_1 < 8) {
                    // WARNING: Could not emulate address calculation at 0x000173c0
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_1 * 2 + -0xc0c))();
    return;
  }
  return;
}



undefined2 comsubs_1641_12de(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 unaff_DS;
  byte *local_12;
  byte *local_e;
  int local_c;
  uint local_a;
  
  local_c = 0xd;
  local_a = 0;
  ultima_1000_0f6e(1,0);
  puVar5 = (undefined *)0xa728;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0xff;
  }
  puVar5 = (undefined *)0xa872;
  for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0xff;
  }
  comsubs_1641_0e26(0xa872,0xa728,param_2 * 0x10 + 0x10,param_3 * 0x10 + 0x10,param_4 * 0x10 + 0x10,
                param_5 * 0x10 + 0x10);
  local_e = (byte *)0xa728;
  local_12 = (byte *)0xa872;
  if ((*(char *)0x5893 == '\0') || (0x20 < *(byte *)0x5893)) {
    if (param_1 == 7) {
      local_c = 8;
    }
  }
  else {
    local_c = 6;
  }
  if (param_1 == 0) {
    local_e = (byte *)0xa72c;
    local_12 = (byte *)0xa876;
  }
  while( true ) {
    if (*local_e == 0xff) {
      return 1;
    }
    local_a = (local_a & 3) + 1;
    ultima_1000_3fb4(*local_12,*local_e);
    if (*(int *)0x5876 == -1) {
      return 1;
    }
    comsubs_1641_0f4a(local_12,local_e,param_1,local_a,*local_12,*local_e);
    ultima_1000_20c8(0x28,1);
    uVar2 = (uint)*local_12;
    uVar3 = *local_e & 0xf8;
    ultima_1000_0ace(uVar2 + 0xf,uVar3 + 0xf,uVar2 - 8,uVar3 - 8,0,1);
    local_e = local_e + local_c;
    local_12 = local_12 + local_c;
    if ((byte *)0xa872 < local_e) {
      return 1;
    }
    if (*local_e == 0xff) break;
    iVar4 = ultima_1000_3f6e(*(undefined2 *)0x5878,*(undefined2 *)0x5876);
    if ((iVar4 == 0) && ((param_5 != *(int *)0x5876 || (param_4 != *(int *)0x5878)))) {
      return 0;
    }
  }
  return 1;
}


