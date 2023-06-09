typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near FUN_0000_1c41(void)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  code **ppcVar5;
  code *pcVar6;
  char cVar7;
  undefined2 uVar8;
  int iVar9;
  uint extraout_DX;
  undefined2 in_BX;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar13;
  
  FUN_0000_1fa6();
  FUN_0000_1f7d();
  (**(code **)0x5212)(0xff);
  pcVar6 = (code *)swi(0x21);
  uVar8 = (*pcVar6)();
  *(undefined2 *)0x5287 = uVar8;
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  *(undefined2 *)0x5273 = in_BX;
  *(undefined2 *)0x5275 = unaff_ES;
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  if (*(int *)0x6ad0 != 0) {
    bVar13 = false;
    ppcVar5 = (code **)0x6ace;
    (**ppcVar5)();
    if (bVar13) {
      FUN_0000_21e4();
      return;
    }
    ppcVar5 = (code **)0x6ace;
    (**ppcVar5)();
  }
  iVar10 = *(int *)0x2c;
  if (iVar10 != 0) {
    pcVar12 = (char *)0x0;
    do {
      bVar13 = *pcVar12 == '\0';
      if (bVar13) break;
      iVar9 = 0xc;
      pcVar11 = (char *)0x5266;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar4 = pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar2 = pcVar11;
        pcVar11 = pcVar11 + 1;
        bVar13 = *pcVar2 == *pcVar4;
      } while (bVar13);
      if (bVar13) {
        pcVar11 = (char *)((int)FUN_0000_5288 + 6);
        iVar9 = (int)*pcVar12;
        do {
          pcVar12 = pcVar12 + 1;
          cVar3 = *pcVar12;
          cVar7 = cVar3 + '\x01';
          if (cVar7 != '\0') {
            cVar7 = cVar3;
          }
          pcVar2 = pcVar11;
          pcVar11 = pcVar11 + 1;
          *pcVar2 = cVar7;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        break;
      }
      iVar9 = 0x7fff;
      bVar13 = true;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar2 = pcVar12;
        pcVar12 = pcVar12 + 1;
        bVar13 = *pcVar2 == '\0';
      } while (!bVar13);
    } while (bVar13);
  }
  iVar10 = 4;
  do {
    pbVar1 = (byte *)((int)FUN_0000_5288 + 6 + iVar10);
    bVar13 = false;
    *pbVar1 = *pbVar1 & 0xbf;
    pcVar6 = (code *)swi(0x21);
    (*pcVar6)();
    if ((!bVar13) && ((extraout_DX & 0x80) != 0)) {
      pbVar1 = (byte *)((int)FUN_0000_5288 + 6 + iVar10);
      *pbVar1 = *pbVar1 | 0x40;
    }
    iVar10 = iVar10 + -1;
  } while (-1 < iVar10);
  FUN_0000_1dac();
  FUN_0000_1d9d();
  return;
}



void FUN_0000_1d14(undefined2 param_1,undefined2 param_2)

{
  code **ppcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  FUN_0000_1d9d();
  FUN_0000_1d9d();
  FUN_0000_1d9d();
  FUN_0000_1dac();
  FUN_0000_21c2();
  iVar3 = 0xf;
  iVar4 = 5;
  do {
    if ((*(byte *)((int)FUN_0000_5288 + 6 + iVar4) & 1) != 0) {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0000_1d70();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (*(int *)0x6ad0 != 0) {
    ppcVar1 = (code **)0x6ace;
    (**ppcVar1)();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (*(char *)0x52b0 != '\0') {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



void __cdecl16near FUN_0000_1d70(undefined2 param_1)

{
  code **ppcVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  
  if (*(int *)0x6ad0 != 0) {
    ppcVar1 = (code **)0x6ace;
    (**ppcVar1)();
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (*(char *)0x52b0 != '\0') {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



void __cdecl16near FUN_0000_1d9d(void)

{
  code *pcVar1;
  code **unaff_SI;
  code **unaff_DI;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    pcVar1 = *unaff_DI;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  return;
}



void __cdecl16near FUN_0000_1dac(void)

{
  code **ppcVar1;
  code **ppcVar2;
  code **unaff_SI;
  code **unaff_DI;
  code **ppcVar3;
  undefined2 unaff_DS;
  
  while (unaff_SI < unaff_DI) {
    ppcVar3 = unaff_DI + -2;
    ppcVar1 = unaff_DI + -1;
    unaff_DI = ppcVar3;
    if (((uint)*ppcVar3 | (uint)*ppcVar1) != 0) {
      ppcVar2 = ppcVar3;
      (**ppcVar2)();
    }
  }
  return;
}



char * __cdecl16near FUN_0000_1e22(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  pcVar2 = (char *)0x0;
  bVar3 = true;
  if (param_3 != 0) {
    do {
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      pcVar1 = param_1;
      param_1 = param_1 + 1;
      bVar3 = param_2 == *pcVar1;
    } while (!bVar3);
    pcVar2 = (char *)0x0;
    if (bVar3) {
      pcVar2 = param_1 + -1;
    }
  }
  return pcVar2;
}



void FUN_0000_1e46(void)

{
  FUN_0000_21f6();
  return;
}



void FUN_0000_1e96(undefined2 *param_1)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_0000_224a();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}



int * FUN_0000_1f52(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 unaff_DS;
  
  piVar4 = (int *)0xa452;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    iVar3 = *piVar1;
    piVar2 = piVar4;
    if ((iVar3 == param_1) || (piVar2 = (int *)(iVar3 + 1), piVar2 == (int *)0x0)) {
      return piVar2;
    }
    iVar3 = -1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      piVar1 = piVar4;
      piVar4 = (int *)((int)piVar4 + 1);
    } while (*(char *)piVar1 != '\0');
  } while( true );
}



void FUN_0000_1f7d(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  
  pcVar3 = (char *)FUN_0000_1f52(param_1);
  if (pcVar3 != (char *)0x0) {
    iVar4 = -1;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar1 = pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



void __cdecl16near FUN_0000_1fa6(void)

{
  undefined2 unaff_DS;
  
  FUN_0000_1f7d(0xfc);
  if (*(int *)0x52b6 != 0) {
    (**(code **)0x52b6)();
  }
  FUN_0000_1f7d(0xff);
  return;
}



uint __cdecl16near FUN_0000_21c2(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar4;
  uint uVar3;
  int iVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  
  pbVar6 = (byte *)0x0;
  iVar5 = 0x42;
  bVar4 = 0;
  do {
    pbVar1 = pbVar6;
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar1;
    bVar4 = bVar4 ^ bVar2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = CONCAT11(bVar4,bVar2) ^ 0x5500;
  if (bVar4 != 0x55) {
    FUN_0000_1fa6();
    FUN_0000_1f7d(1);
    uVar3 = 1;
  }
  return uVar3;
}



void FUN_0000_21e4(void)

{
  FUN_0000_1c41();
  return;
}



byte * __cdecl16near FUN_0000_21f6(void)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint in_AX;
  uint uVar5;
  uint in_CX;
  uint in_DX;
  uint uVar6;
  char in_BL;
  byte *pbVar7;
  byte *unaff_DI;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  bool bVar10;
  char cVar4;
  
  pbVar8 = unaff_DI;
  pbVar7 = unaff_DI;
  if (((in_BL != '\0') && (in_CX == 10)) && ((int)in_DX < 0)) {
    pbVar8 = unaff_DI + 1;
    *unaff_DI = 0x2d;
    bVar10 = in_AX != 0;
    in_AX = -in_AX;
    in_DX = -(in_DX + bVar10);
    pbVar7 = pbVar8;
  }
  do {
    uVar6 = 0;
    uVar5 = in_DX;
    if (in_DX != 0) {
      uVar5 = in_DX / in_CX;
      uVar6 = in_DX % in_CX;
    }
    uVar2 = CONCAT22(uVar6,in_AX);
    in_AX = (uint)(uVar2 / in_CX);
    cVar4 = (char)(uVar2 % (ulong)in_CX);
    bVar3 = cVar4 + 0x30;
    if (0x39 < bVar3) {
      bVar3 = cVar4 + 0x57;
    }
    pbVar9 = pbVar8 + 1;
    *pbVar8 = bVar3;
    in_DX = uVar5;
    pbVar8 = pbVar9;
  } while ((uVar5 | in_AX) != 0);
  *pbVar9 = 0;
  do {
    pbVar9 = pbVar9 + -1;
    LOCK();
    pbVar1 = pbVar9;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar7;
    UNLOCK();
    *pbVar7 = bVar3;
    pbVar8 = pbVar7 + 2;
    pbVar7 = pbVar7 + 1;
  } while (pbVar8 < pbVar9);
  return unaff_DI;
}



void __cdecl16near FUN_0000_224a(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16near FUN_0000_2256(void)

{
  uint *puVar1;
  int *piVar2;
  code *pcVar3;
  uint in_AX;
  uint uVar4;
  uint extraout_DX;
  int unaff_DS;
  bool bVar5;
  
  puVar1 = (uint *)0x5214;
  uVar4 = in_AX + *puVar1;
  if (!CARRY2(in_AX,*puVar1)) {
    if (*(uint *)0x520e < uVar4) {
      bVar5 = CARRY2((uVar4 + 0xf >> 1 | (uint)(0xfff0 < uVar4) << 0xf) >> 3,
                     unaff_DS - *(int *)0x5285);
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      if (bVar5) goto LAB_0000_2293;
      *(int *)0x520e = (uVar4 + 0xf & 0xfff0) - 1;
      in_AX = extraout_DX;
    }
    piVar2 = (int *)0x5214;
    *piVar2 = *piVar2 + in_AX;
    return;
  }
LAB_0000_2293:
  FUN_0000_1c41();
  return;
}



void __cdecl16near FUN_0000_22b2(int param_1)

{
  code **ppcVar1;
  code *pcVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0x5352 != 0) {
    if ((param_1 != 0) && (*(int *)FUN_0000_5304 == -1)) {
      pcVar2 = (code *)swi(0x10);
      uVar3 = (*pcVar2)();
      *(uint *)FUN_0000_5304 = uVar3 & 0xff;
    }
    *(undefined2 *)0x5350 = 3;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void __cdecl16near FUN_0000_22ea(void)

{
  int in_AX;
  int in_BX;
  undefined2 unaff_DS;
  
  if ((((*(int *)0x52d0 <= in_AX) && (in_AX <= *(int *)0x52d2)) && (*(int *)0x52d4 <= in_BX)) &&
     (in_BX <= *(int *)0x52d6)) {
    return;
  }
  return;
}



void __cdecl16near FUN_0000_2306(void)

{
  return;
}



undefined2 __cdecl16near FUN_0000_2355(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 uVar2;
  uint unaff_SI;
  uint unaff_DI;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  uVar3 = FUN_0000_2442();
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  uVar1 = (undefined2)uVar3;
  if ((unaff_SI == 0) && (unaff_DI == 0)) {
    return uVar1;
  }
  if ((unaff_DI & unaff_SI) != 0) {
    return uVar1;
  }
  *(undefined2 *)0x52fa = uVar1;
  *(undefined2 *)0x52fc = in_BX;
  *(undefined2 *)0x52fe = in_CX;
  *(undefined2 *)0x5300 = uVar2;
  if (unaff_SI != 0) {
    uVar1 = FUN_0000_23b1();
    *(undefined2 *)0x52fa = uVar1;
    *(undefined2 *)0x52fc = uVar2;
    in_BX = uVar2;
  }
  if (unaff_DI != 0) {
    uVar1 = FUN_0000_23b1();
    *(undefined2 *)0x52fe = uVar1;
    *(undefined2 *)0x5300 = in_BX;
  }
  return *(undefined2 *)0x52fa;
}



void __cdecl16near FUN_0000_23b1(void)

{
  undefined2 in_AX;
  uint uVar1;
  int in_CX;
  undefined2 in_DX;
  uint in_BX;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  
  uVar5 = CONCAT22(in_DX,in_AX);
  do {
    while( true ) {
      uVar1 = (int)uVar5 + in_CX;
      uVar2 = in_BX + (int)((ulong)uVar5 >> 0x10);
      if ((int)uVar1 < 0) {
        uVar1 = (int)uVar1 / 2;
      }
      else {
        uVar1 = uVar1 >> 1;
      }
      if ((int)uVar2 < 0) {
        uVar2 = (int)uVar2 / 2;
      }
      else {
        uVar2 = uVar2 >> 1;
      }
      iVar3 = (int)uVar5 - uVar1;
      *(int *)0x52f6 = iVar3;
      *(int *)0x52f8 = in_BX - uVar2;
      uVar5 = FUN_0000_2442();
      iVar4 = (int)uVar5;
      if (iVar3 == 0) break;
      uVar5 = CONCAT22(uVar2,iVar4 + *(int *)0x52f6);
      in_CX = iVar4;
      in_BX = uVar2 + *(int *)0x52f8;
    }
    if ((iVar4 == *(int *)0x52d0) || (iVar4 == *(int *)0x52d2)) {
      if (uVar2 == *(uint *)0x52d4) {
        return;
      }
      if (uVar2 == *(uint *)0x52d6) {
        return;
      }
    }
    iVar4 = *(int *)0x52f6;
    iVar3 = *(int *)0x52f8;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    in_BX = uVar2;
    if (iVar4 < 1) {
      return;
    }
  } while( true );
}



void __cdecl16near FUN_0000_2442(void)

{
  return;
}



void FUN_0000_2490(uint param_1)

{
  code **ppcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  if (param_1 != 0xffff) {
    uVar2 = 0xf;
    if (*(int *)0x52c8 == 0) {
      uVar2 = 3;
    }
    param_1 = param_1 & uVar2;
  }
  *(uint *)0x52da = param_1;
  if (param_1 != 0xffff) {
    *(undefined2 *)0x5350 = 0x2d;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_24c6(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_0000_2306();
  *(undefined2 *)0x5350 = 0x3f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



undefined2 FUN_0000_24ee(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  undefined2 param_4;
  uint param_5;
  uint param_6;
  
  if (((param_6 != param_5) && (param_6 < 2)) && (param_5 < 2)) {
    FUN_0000_2306();
    *(undefined2 *)0x5350 = 0x18;
    ppcVar1 = (code **)0x5350;
    param_4 = (**ppcVar1)();
  }
  return param_4;
}



void FUN_0000_2530(void)

{
  FUN_0000_254d();
  return;
}



void __cdecl16near FUN_0000_254d(void)

{
  code **ppcVar1;
  undefined2 in_AX;
  int in_CX;
  undefined2 in_DX;
  int in_BX;
  undefined2 unaff_DS;
  byte in_CF;
  bool bVar2;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  undefined4 uVar3;
  
  uVar3 = CONCAT22(in_DX,in_AX);
  *(int *)0x52cc = in_CX;
  *(undefined2 *)0x52ce = in_DX;
  bVar2 = false;
  if (*(int *)0x52c4 != 0) {
    uVar3 = FUN_0000_2355((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                          (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
    if (bVar2) {
      return;
    }
  }
  if (in_BX == (int)((ulong)uVar3 >> 0x10)) {
    if ((int)uVar3 != in_CX) {
      FUN_0000_2306();
      *(undefined2 *)0x5350 = 0x39;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)();
      return;
    }
    *(undefined2 *)0x5350 = 0x30;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    return;
  }
  if ((int)uVar3 == in_CX) {
    FUN_0000_2306();
    *(undefined2 *)0x5350 = 0x3c;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    return;
  }
  *(undefined2 *)0x5350 = 0x33;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_25a6(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_0000_2306();
  *(undefined2 *)0x5350 = 0x3f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_25ce(void)

{
  code **ppcVar1;
  undefined2 uVar2;
  int in_BX;
  undefined2 unaff_DS;
  undefined in_CF;
  
  uVar2 = FUN_0000_2c7d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      in_BX = -1;
    }
    else {
      *(undefined2 *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)();
      in_BX = 0;
    }
  }
  else {
    *(undefined2 *)0x5350 = 0x42;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return in_BX;
}



void FUN_0000_2604(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void FUN_0000_261c(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 99;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2642(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0xf;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_265c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x52d0 = param_4;
  *(undefined2 *)0x52d4 = param_3;
  *(undefined2 *)0x52d2 = param_2;
  *(undefined2 *)0x52d6 = param_1;
  return;
}



void FUN_0000_2684(undefined2 param_1,undefined2 param_2)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x52cc = param_2;
  *(undefined2 *)0x52ce = param_1;
  if (*(int *)0x52da != -1) {
    bVar2 = false;
    if ((*(int *)0x52c4 != 0) && (FUN_0000_22ea(), bVar2)) {
      return;
    }
    *(undefined2 *)0x5350 = 0x30;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_26bc(undefined2 param_1)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x52cc = param_1;
  bVar2 = false;
  if ((*(int *)0x52c4 != 0) && (FUN_0000_26ed(), bVar2)) {
    return;
  }
  *(undefined2 *)0x5350 = 0x39;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void __cdecl16near FUN_0000_26ed(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  undefined2 unaff_DS;
  
  iVar1 = in_AX;
  if (in_AX < in_CX) {
    iVar1 = in_CX;
    in_CX = in_AX;
  }
  if ((((*(int *)0x52d0 <= iVar1) && (in_CX <= *(int *)0x52d2)) && (-1 < iVar1)) &&
     ((iVar1 < 0x140 && (in_CX < 0x140)))) {
    return;
  }
  return;
}



void FUN_0000_2712(undefined2 param_1)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x52ce = param_1;
  bVar2 = false;
  if ((*(int *)0x52c4 == 0) || (FUN_0000_274b(), !bVar2)) {
    *(undefined2 *)0x5350 = 0x3c;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void __cdecl16near FUN_0000_274b(void)

{
  int in_DX;
  int in_BX;
  undefined2 unaff_DS;
  
  if ((((*(int *)0x52d4 <= in_BX) && (in_DX <= *(int *)0x52d6)) && (-1 < in_BX)) &&
     ((in_BX < 200 && (in_DX < 200)))) {
    return;
  }
  return;
}



void FUN_0000_276c(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x4b;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2792(undefined2 param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  int *local_a;
  int local_4;
  
  local_4 = 0;
  FUN_0000_2642(1);
  FUN_0000_2490(0);
  FUN_0000_24c6(199,0x13f,0,0);
  iVar1 = 0;
  piVar2 = (int *)((int)FUN_0000_5304 + 2);
  local_a = (int *)0x5314;
  do {
    FUN_0000_2a64(local_4,0x140 - *piVar2 >> 1,iVar1,param_1);
    local_4 = local_4 + *local_a;
    piVar2 = piVar2 + 1;
    local_a = local_a + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  FUN_0000_2642(0);
  FUN_0000_2b60();
  return;
}



void __cdecl16near FUN_0000_2800(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  byte in_BH;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined2 unaff_DS;
  bool bVar13;
  
  cVar5 = DAT_f000_fffe;
  uVar7 = 0;
  if (((DAT_f000_fffe != -3) && (DAT_f000_fffe != -1)) && (uVar7 = 2, DAT_f000_fffe != -4)) {
    uVar7 = 6;
  }
  *(undefined2 *)0x52ca = uVar7;
  if (cVar5 != -3) {
    bVar13 = cVar5 == -1;
    if (bVar13) {
      pcVar11 = "";
      iVar8 = 0x5fff;
code_r0x0000283e:
      do {
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          pcVar1 = pcVar11;
          pcVar11 = pcVar11 + 1;
          bVar13 = *pcVar1 == 'T';
          if (!bVar13) goto code_r0x0000283e;
        }
        if (!bVar13) goto LAB_0000_285c;
        pcVar10 = "\x01";
        pcVar12 = pcVar11 + -1;
        bVar13 = pcVar12 == (char *)0x0;
        iVar9 = 5;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar2 = pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar1 = pcVar10;
          pcVar10 = pcVar10 + 1;
          bVar13 = *pcVar1 == *pcVar2;
        } while (bVar13);
      } while (!bVar13);
      *(undefined2 *)0x52ca = 3;
      uVar7 = 2;
      goto LAB_0000_28ab;
    }
LAB_0000_285c:
    iVar8 = -1;
    pcVar3 = (code *)swi(0x10);
    (*pcVar3)();
    if (iVar8 != -1) {
      bVar4 = in_BH & 1 ^ 1;
      if (bVar4 == 0) {
        uVar7 = 0xffff;
        goto LAB_0000_28ab;
      }
      if (bVar4 == 1) {
        uVar7 = 1;
        goto LAB_0000_28ab;
      }
    }
    pcVar3 = (code *)swi(0x10);
    cVar5 = (*pcVar3)();
    if (cVar5 == '\a') {
      bVar4 = in(0x3ba);
      iVar8 = -0x8000;
      do {
        bVar6 = in(0x3ba);
        if ((bVar6 & 0x80) != (bVar4 & 0x80)) {
          uVar7 = 3;
          goto LAB_0000_28ab;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  uVar7 = 0;
LAB_0000_28ab:
  *(undefined2 *)0x52c8 = uVar7;
  return;
}



void FUN_0000_298e(int param_1,int param_2)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  if (param_2 != param_1) {
    *(undefined2 *)0x5350 = 0x1b;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_29b0(void)

{
  FUN_0000_254d();
  return;
}



int FUN_0000_29ce(void)

{
  code **ppcVar1;
  undefined2 uVar2;
  int in_BX;
  undefined2 unaff_DS;
  undefined in_CF;
  
  uVar2 = FUN_0000_2c7d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      in_BX = -1;
    }
    else if (in_BX != 0) {
      *(undefined2 *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)();
      in_BX = 0;
    }
  }
  return in_BX;
}



undefined2 FUN_0000_2a14(void)

{
  code **ppcVar1;
  undefined2 uVar2;
  int in_BX;
  undefined2 unaff_DS;
  undefined in_CF;
  
  uVar2 = FUN_0000_2c7d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      uVar2 = 0xffff;
    }
    else {
      *(undefined2 *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)();
      uVar2 = 0;
    }
  }
  else {
    *(undefined2 *)0x5350 = 0x48;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    uVar2 = 1;
  }
  return uVar2;
}



void __cdecl16near FUN_0000_2a4e(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x5a;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2a64(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x4e;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_2a88(void)

{
  code **ppcVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  uVar3 = 0;
LAB_0000_2a90:
  do {
    *(undefined2 *)0x5350 = 0x66;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    *(undefined2 *)0x5350 = 0x66;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    uVar3 = uVar3 + 2;
    if (uVar3 == 0x100) {
      return 0;
    }
  } while ((uVar3 & 7) != 0);
  if (*(char *)0x5893 == 'B') goto code_r0x00002ae2;
  goto LAB_0000_2af0;
code_r0x00002ae2:
  iVar2 = FUN_0000_9bda(1);
  if (iVar2 != 0) {
    if (iVar2 != 0) {
      return iVar2;
    }
LAB_0000_2af0:
    FUN_0000_7330();
  }
  goto LAB_0000_2a90;
}



void FUN_0000_2b00(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x51;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2b32(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x60;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void __cdecl16near FUN_0000_2b60(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void __cdecl16near FUN_0000_2b78(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_0000_2ba4();
  FUN_0000_2c46();
  FUN_0000_2bd4();
  return;
}



void __cdecl16near FUN_0000_2ba4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined2 unaff_DS;
  
  puVar2 = (undefined *)0x535e;
  *(undefined2 *)0x539a = 0x535e;
  iVar1 = 4;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0x27;
    puVar2[3] = 0x18;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0xf;
    puVar2[7] = 0;
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined2 *)0x5386 = 0;
  return;
}



void __cdecl16near FUN_0000_2bd4(void)

{
  int *piVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  undefined2 in_stack_0000000a;
  
  *(undefined2 *)0x5356 = 0;
  *(undefined2 *)0x535a = 0;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  do {
  } while (*(int *)0x535a == 0);
  *(undefined2 *)0x535a = 0;
  do {
    piVar1 = (int *)0x5356;
    *piVar1 = *piVar1 + 1;
  } while (*(int *)0x535a == 0);
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  *(undefined2 *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
  pcVar2 = (code *)swi(0x12);
  uVar3 = (*pcVar2)();
  *(undefined2 *)0x5358 = uVar3;
  return;
}



void __cdecl16near FUN_0000_2c46(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x53a4 = 0;
  *(undefined2 *)0x53a6 = 0;
  *(undefined2 *)0x53a8 = 0;
  return;
}



int __cdecl16near FUN_0000_2c7d(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 extraout_DX;
  uint uVar6;
  uint uVar7;
  undefined2 unaff_DS;
  byte in_CF;
  bool bVar8;
  undefined uVar9;
  undefined4 uVar10;
  
  FUN_0000_2fa8();
  if ((bool)in_CF) {
    *(undefined2 *)0x53ba = 0;
    *(undefined2 *)0x53bc = 0;
    *(undefined2 *)0x53be = 0;
    *(undefined2 *)0x53b8 = 0;
    pcVar1 = (code *)swi(0x21);
    iVar5 = (*pcVar1)();
    if (!(bool)in_CF) {
      *(int *)0x53b8 = iVar5;
      uVar9 = 0;
      pcVar1 = (code *)swi(0x21);
      iVar5 = (*pcVar1)();
      if (!(bool)in_CF) {
        uVar7 = *(uint *)0x53b4;
        uVar6 = *(uint *)0x53b6;
        iVar5 = CONCAT11(uVar9,4);
        do {
          uVar2 = uVar6 & 1;
          uVar6 = uVar6 >> 1;
          in_CF = (uVar7 & 1) != 0;
          uVar7 = uVar7 >> 1 | (uint)(uVar2 != 0) << 0xf;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar5 = FUN_0000_2fe6();
        if ((bool)in_CF) {
          *(undefined2 *)0x53ba = 0xffff;
        }
        else {
          *(int *)0x53ba = iVar5;
          *(int *)0x53bc = iVar5;
          iVar5 = FUN_0000_2fe6();
          if ((bool)in_CF) {
            *(undefined2 *)0x53ba = 0xffff;
          }
          else {
            *(int *)0x53be = iVar5;
            FUN_0000_2d7a();
            iVar5 = *(int *)0x53b4;
            in_CF = 0;
            if (iVar5 == 0) {
              iVar5 = -1;
            }
          }
        }
      }
    }
    uVar7 = (uint)(in_CF & 1);
    uVar9 = *(int *)0x53be == 0;
    if (!(bool)uVar9) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    if (!(bool)uVar9) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    if (*(int *)0x53ba != -1) {
      if ((uVar7 & 1) != 0) {
        return iVar5;
      }
      return iVar5;
    }
LAB_0000_2c6a:
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar10 = FUN_0000_3074(extraout_DX);
  iVar5 = (int)uVar10;
  if (!(bool)in_CF) {
    iVar3 = iVar5;
    if (iVar5 == 0) {
      if ((int)((ulong)uVar10 >> 0x10) == 0) {
        return 0;
      }
      iVar3 = -1;
    }
    bVar8 = false;
    if (iVar3 != 0) {
      bVar8 = (iVar3 - 1U >> 3 & 1) != 0;
    }
    uVar4 = FUN_0000_2fe6();
    if (bVar8) goto LAB_0000_2c6a;
    uVar4 = FUN_0000_302e(uVar4);
    if (!bVar8) {
      return iVar5;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(uVar4);
    iVar5 = param_1;
  }
  return iVar5;
}



void __cdecl16near FUN_0000_2d7a(undefined2 param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  code *pcVar6;
  byte bVar7;
  undefined uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined2 *puVar14;
  undefined2 unaff_DS;
  byte bVar15;
  
  *(undefined2 *)0x53d2 = 9;
  *(undefined2 *)0x53c2 = 0;
  *(undefined2 *)0x53c4 = 0;
  *(undefined2 *)0x53cc = 0x102;
  *(undefined2 *)0x53d0 = 0x200;
  *(undefined2 *)0x53c0 = *(undefined2 *)0x5354;
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  while( true ) {
    LOCK();
    puVar1 = (uint *)0x53c4;
    uVar11 = *puVar1;
    *puVar1 = *(int *)0x53c4 + *(int *)0x53d2;
    UNLOCK();
    puVar9 = (uint *)(uVar11 / 8);
    uVar11 = uVar11 % 8;
    if ((uint *)0x3fc < puVar9) {
      *(int *)0x53c4 = uVar11 + *(int *)0x53d2;
      uVar5 = *(undefined2 *)0x53be;
      puVar13 = (undefined *)0x0;
      for (iVar10 = 0x400 - (int)puVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar13;
        puVar13 = puVar13 + 1;
        puVar1 = puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        *puVar3 = *(undefined *)puVar1;
      }
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      puVar9 = (uint *)0x0;
    }
    uVar5 = *(undefined2 *)0x53be;
    uVar12 = *puVar9;
    bVar7 = *(byte *)(puVar9 + 1);
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      bVar15 = bVar7 & 1;
      bVar7 = bVar7 >> 1;
      uVar12 = uVar12 >> 1 | (uint)bVar15 << 0xf;
    }
    uVar12 = uVar12 & *(uint *)((*(int *)0x53d2 + -9) * 2 + 0x53ac);
    if (uVar12 == 0x101) break;
    if (uVar12 == 0x100) {
      *(undefined2 *)0x53d2 = 9;
      *(undefined2 *)0x53d0 = 0x200;
      *(undefined2 *)0x53cc = 0x102;
      LOCK();
      puVar1 = (uint *)0x53c4;
      uVar11 = *puVar1;
      *puVar1 = *(int *)0x53c4 + *(int *)0x53d2;
      UNLOCK();
      puVar9 = (uint *)(uVar11 / 8);
      uVar11 = uVar11 % 8;
      if ((uint *)0x3fc < puVar9) {
        *(int *)0x53c4 = uVar11 + *(int *)0x53d2;
        uVar5 = *(undefined2 *)0x53be;
        puVar13 = (undefined *)0x0;
        for (iVar10 = 0x400 - (int)puVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar3 = puVar13;
          puVar13 = puVar13 + 1;
          puVar1 = puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
          *puVar3 = *(undefined *)puVar1;
        }
        pcVar6 = (code *)swi(0x21);
        (*pcVar6)();
        puVar9 = (uint *)0x0;
      }
      uVar5 = *(undefined2 *)0x53be;
      uVar12 = *puVar9;
      bVar7 = *(byte *)(puVar9 + 1);
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        bVar15 = bVar7 & 1;
        bVar7 = bVar7 >> 1;
        uVar12 = uVar12 >> 1 | (uint)bVar15 << 0xf;
      }
      uVar12 = uVar12 & *(uint *)((*(int *)0x53d2 + -9) * 2 + 0x53ac);
      *(uint *)0x53c6 = uVar12;
      *(uint *)0x53c8 = uVar12;
      uVar8 = (undefined)uVar12;
      *(undefined *)0x53d5 = uVar8;
      *(undefined *)0x53d4 = uVar8;
      puVar13 = (undefined *)*(int *)0x53c2;
      *puVar13 = uVar8;
      piVar2 = (int *)0x53c2;
      *piVar2 = *piVar2 + 1;
      if (puVar13 == (undefined *)0xf) {
        piVar2 = (int *)0x53ba;
        *piVar2 = *piVar2 + 1;
        *(undefined2 *)0x53c2 = 0;
      }
    }
    else {
      *(uint *)0x53c6 = uVar12;
      *(uint *)0x53ca = uVar12;
      uVar5 = *(undefined2 *)0x53c0;
      if (*(int *)0x53cc <= (int)uVar12) {
        *(undefined2 *)0x53c6 = *(undefined2 *)0x53c8;
        piVar2 = (int *)0x53ce;
        *piVar2 = *piVar2 + 1;
      }
      while (0xff < *(int *)0x53c6) {
        iVar10 = *(int *)0x53c6;
        piVar2 = (int *)0x53ce;
        *piVar2 = *piVar2 + 1;
        *(undefined2 *)0x53c6 = *(undefined2 *)(iVar10 * 3);
      }
      uVar5 = *(undefined2 *)0x53c6;
      uVar8 = (undefined)uVar5;
      *(undefined *)0x53d4 = uVar8;
      *(undefined *)0x53d5 = uVar8;
      piVar2 = (int *)0x53ce;
      *piVar2 = *piVar2 + 1;
      for (iVar10 = *(int *)0x53ce; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar13 = (undefined *)*(int *)0x53c2;
        *puVar13 = (char)uVar5;
        piVar2 = (int *)0x53c2;
        *piVar2 = *piVar2 + 1;
        if (puVar13 == (undefined *)0xf) {
          piVar2 = (int *)0x53ba;
          *piVar2 = *piVar2 + 1;
          *(undefined2 *)0x53c2 = 0;
        }
        uVar5 = param_1;
      }
      *(undefined2 *)0x53ce = 0;
      puVar14 = (undefined2 *)(*(int *)0x53cc * 3);
      uVar5 = *(undefined2 *)0x53c0;
      *(undefined *)(puVar14 + 1) = *(undefined *)0x53d5;
      *puVar14 = *(undefined2 *)0x53c8;
      piVar2 = (int *)0x53cc;
      *piVar2 = *piVar2 + 1;
      *(undefined2 *)0x53c8 = *(undefined2 *)0x53ca;
      if ((*(int *)0x53d0 <= *(int *)0x53cc) && (*(int *)0x53d2 != 0xc)) {
        piVar2 = (int *)0x53d2;
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)0x53d0;
        *piVar2 = *piVar2 << 1;
      }
    }
  }
  uVar5 = *(undefined2 *)0x53c0;
  puVar14 = (undefined2 *)0x0;
  for (iVar10 = 0x1800; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = 0;
  }
  return;
}



void __cdecl16near FUN_0000_2fa8(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char *in_DX;
  int **ppiVar4;
  int *piVar5;
  char *pcVar6;
  undefined2 unaff_DS;
  
  ppiVar4 = (int **)0x25ea;
  do {
    piVar5 = *ppiVar4;
    if (*piVar5 == 0) {
      return;
    }
    ppiVar4 = ppiVar4 + 1;
    pcVar6 = in_DX;
    while( true ) {
      piVar1 = piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      cVar2 = *(char *)piVar1;
      cVar3 = *pcVar6;
      if (('`' < cVar3) && (cVar3 < '{')) {
        cVar3 = cVar3 + -0x20;
      }
      if (('`' < cVar2) && (cVar2 < '{')) {
        cVar2 = cVar2 + -0x20;
      }
      if (cVar3 != cVar2) break;
      if (*(char *)piVar5 == '\0') {
        return;
      }
      pcVar6 = pcVar6 + 1;
    }
  } while( true );
}



undefined2 __cdecl16near FUN_0000_2fe6(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 in_stack_00000012;
  
  pcVar1 = (code *)swi(0x21);
  cVar2 = (*pcVar1)();
  if (cVar2 == '\x03') {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return in_stack_00000012;
}



undefined2 __cdecl16near FUN_0000_302e(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  uint unaff_DS;
  undefined in_CF;
  bool bVar4;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    return uVar2;
  }
  bVar4 = false;
  if (unaff_DS == 0) {
    unaff_DS = 0xffff;
  }
  uVar3 = FUN_0000_3069();
  if (((!bVar4) && (unaff_DS <= uVar3)) && (unaff_DS == 0xffff)) {
    FUN_0000_3069();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return param_2;
}



void __cdecl16near FUN_0000_3069(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



undefined2 __cdecl16near FUN_0000_3074(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined in_CF;
  undefined2 in_stack_0000000a;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    uVar2 = in_stack_0000000a;
  }
  return uVar2;
}



bool FUN_0000_3094(void)

{
  code **ppcVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  undefined in_CF;
  
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)in_CF) {
    *(undefined2 *)0x535c = uVar3;
    ppcVar1 = (code **)0x5394;
    (**ppcVar1)();
  }
  else {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    *(undefined2 *)0x535c = 0;
  }
  return !(bool)in_CF;
}



char __cdecl16near FUN_0000_30c6(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = (code *)swi(0x21);
  cVar2 = (*pcVar1)();
  return cVar2 + 'A';
}



void FUN_0000_30da(uint param_1)

{
  char *pcVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  code **ppcVar7;
  int iVar8;
  byte bVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined2 *puVar12;
  undefined2 unaff_DS;
  
  param_1 = param_1 & 0xff;
  bVar9 = (byte)param_1;
  pcVar11 = *(char **)0x539a;
  if (0x7f < bVar9) {
    if (bVar9 == 0xff) {
      pcVar11[4] = '\0';
      pcVar11[5] = '\0';
      *(undefined2 *)0x5350 = 0x2d;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)();
      FUN_0000_3997();
      *(undefined2 *)0x5350 = 0x3f;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)();
      *(undefined2 *)0x5350 = 0x2d;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)();
      return;
    }
    if (bVar9 == 0xfe) {
      puVar3 = (uint *)0x53a4;
      *puVar3 = *puVar3 ^ 1;
      pbVar2 = (byte *)(pcVar11 + 7);
      *pbVar2 = *pbVar2 ^ 1;
      return;
    }
    if (bVar9 == 0xfd) {
      puVar3 = (uint *)0x53a8;
      *puVar3 = *puVar3 ^ 1;
      pbVar2 = (byte *)(pcVar11 + 7);
      *pbVar2 = *pbVar2 ^ 4;
      return;
    }
    if (bVar9 == 0xfc) {
      *(undefined2 *)0x53a6 = 1;
      pbVar2 = (byte *)(pcVar11 + 7);
      *pbVar2 = *pbVar2 | 2;
      return;
    }
    if (bVar9 == 0xfb) {
      *(undefined2 *)0x53a6 = 0;
      pbVar2 = (byte *)(pcVar11 + 7);
      *pbVar2 = *pbVar2 & 0xfd;
      return;
    }
    bVar9 = bVar9 & 0x7f;
  }
  if (bVar9 != 10) {
    if (bVar9 == 0xd) goto LAB_0000_3165;
    puVar12 = (undefined2 *)(param_1 * 8);
    if (*(int *)0x52c8 == 3) {
      puVar12 = (undefined2 *)(param_1 * 0x18);
    }
    uVar6 = *(undefined2 *)0x5398;
    FUN_0000_3214();
    *(undefined2 *)0x5350 = 0x5d;
    ppcVar7 = (code **)0x5350;
    (**ppcVar7)();
    puVar10 = (undefined2 *)0x53ea;
    iVar8 = 4;
    if (*(int *)0x52c8 == 3) {
      iVar8 = 0xc;
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar5 = puVar12;
      puVar12 = puVar12 + 1;
      puVar4 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar5 = *puVar4;
    }
    pcVar11 = *(char **)0x539a;
    if (*(int *)0x538e == 0) {
      return;
    }
    pcVar1 = pcVar11 + 4;
    *pcVar1 = *pcVar1 + '\x01';
    if ((char)(pcVar11[4] + *pcVar11) <= pcVar11[2]) {
      return;
    }
  }
  pcVar1 = pcVar11 + 5;
  *pcVar1 = *pcVar1 + '\x01';
LAB_0000_3165:
  pcVar11[4] = '\0';
  if (pcVar11[3] < (char)(pcVar11[5] + pcVar11[1])) {
    FUN_0000_3997();
    pcVar1 = pcVar11 + 5;
    *pcVar1 = *pcVar1 + -1;
    *(undefined2 *)0x5350 = 0x27;
    ppcVar7 = (code **)0x5350;
    (**ppcVar7)();
  }
  return;
}



void __cdecl16near FUN_0000_3214(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *unaff_DI;
  uint *puVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar4 = (uint *)0x53ea;
  iVar2 = 4;
  puVar3 = unaff_DI;
  if (*(int *)0x52c8 == 3) {
    iVar2 = 0xc;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
  }
  if (*(int *)0x53a4 != 0) {
    if (*(int *)0x52c8 == 3) {
      unaff_DI[0xb] = 0xffff;
    }
    else {
      *(undefined *)((int)unaff_DI + 7) = 0xff;
    }
  }
  if (*(int *)0x53a8 != 0) {
    iVar2 = 4;
    if (*(int *)0x52c8 == 3) {
      iVar2 = 0xc;
    }
    do {
      puVar1 = unaff_DI;
      *puVar1 = ~*puVar1;
      unaff_DI = unaff_DI + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}



void FUN_0000_3270(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 local_44;
  char local_42 [40];
  uint local_1a;
  int local_18;
  int local_16;
  int local_14;
  byte *local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = 0;
  local_a = 0;
  local_4 = 0;
  if (*param_1 != '\0') {
    iVar1 = *(int *)0x5386 * 8;
    local_12 = (byte *)(iVar1 + 0x535e);
    local_1a = *(byte *)(iVar1 + 0x5365) & 2;
    local_44 = (uint)*(byte *)(iVar1 + 0x5360) - (uint)*local_12;
    do {
      if (local_4 != 0) {
        FUN_0000_30da(10);
      }
      local_14 = 0;
      local_6 = 0;
      local_4 = 0;
      iVar2 = FUN_0000_3932();
      local_10 = local_44 - iVar2;
      iVar1 = local_8;
      for (iVar4 = 0;
          (((param_1[iVar1] != '\n' && (param_1[iVar1] != '\r')) && (param_1[iVar1] != '\0')) &&
          (iVar4 <= local_44 - iVar2)); iVar4 = iVar4 + 1) {
        local_42[iVar4] = param_1[iVar1];
        iVar1 = iVar1 + 1;
      }
      local_8 = iVar1;
      local_c = iVar4;
      if (iVar4 == 0) {
        if (param_1[iVar1] == '\0') {
          local_a = local_a + 1;
          iVar2 = local_e;
        }
        else {
          local_8 = iVar1 + 1;
          FUN_0000_30da(param_1[iVar1]);
          iVar2 = local_e;
        }
      }
      else {
        if (local_10 < iVar4) {
          local_18 = iVar4;
          local_16 = iVar1;
          for (; ((param_1[local_8] != ' ' && (local_c != 0)) &&
                 ((param_1[local_8] != '\n' &&
                  ((param_1[local_8] != '\0' && (param_1[local_8] != '\r'))))));
              local_8 = local_8 + -1) {
            local_c = local_c + -1;
          }
          if (local_c == 0) {
            local_c = iVar4;
            local_8 = iVar1;
            if (local_12[4] != 0) {
              FUN_0000_30da(10);
              local_6 = 1;
            }
          }
          else {
            do {
              do {
                iVar1 = local_c;
                local_c = iVar1 + -1;
              } while (local_42[iVar1 + -1] == ' ');
            } while ((local_42[iVar1 + -1] == '\r') || (local_42[iVar1 + -1] == '\n'));
            if (param_1[local_8] != '\0') {
              local_8 = local_8 + 1;
            }
            if (local_c < local_10) {
              local_4 = local_4 + 1;
            }
          }
          if (local_10 < local_c) goto LAB_0000_33f2;
        }
        else {
LAB_0000_33f2:
          local_c = local_c + -1;
        }
        if (local_1a != 0) {
          if (local_44 < local_c) {
            FUN_0000_30da(10);
          }
          iVar1 = (local_10 - local_c) / 2;
          uVar3 = FUN_0000_370e(iVar1);
          FUN_0000_3612(uVar3,iVar1);
        }
        iVar1 = local_c;
        iVar2 = local_14;
        if (local_6 != 0) {
          for (; local_42[local_14] == ' '; local_14 = local_14 + 1) {
          }
          iVar2 = local_14;
        }
        for (; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
          FUN_0000_30da(local_42[iVar2]);
        }
      }
      local_e = iVar2;
    } while (local_a == 0);
  }
  return;
}



void FUN_0000_345e(char param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar6;
  int local_2e;
  int local_2c;
  char local_2a [40];
  
  if (0x27 < param_2) {
    param_2 = 0x27;
  }
  bVar6 = param_3 < 0;
  if (bVar6) {
    param_3 = -param_3;
  }
  piVar4 = (int *)0x5404;
  local_2c = 1;
  do {
    piVar1 = piVar4;
    if (*piVar1 == param_3 || *piVar1 < param_3) {
      local_2c = local_2c + 1;
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 < (int *)0x540c);
  if (bVar6) {
    local_2c = local_2c + 1;
  }
  local_2e = param_2 - local_2c;
  if (local_2e < 1) {
    local_2e = 0;
  }
  else {
    for (iVar3 = 0; iVar3 != local_2e; iVar3 = iVar3 + 1) {
      local_2a[iVar3] = param_1;
    }
  }
  if (bVar6) {
    local_2a[local_2e] = '-';
    local_2c = local_2c + -1;
    local_2e = local_2e + 1;
  }
  do {
    iVar5 = local_2e;
    iVar3 = *(int *)(local_2c * 2 + 0x5400);
    iVar2 = param_3 / iVar3;
    local_2a[iVar5] = (char)iVar2 + '0';
    param_3 = param_3 - iVar3 * iVar2;
    local_2c = local_2c + -1;
    local_2e = iVar5 + 1;
  } while (local_2c != 0);
  local_2a[iVar5 + 1] = '\0';
  FUN_0000_3270(local_2a);
  return;
}



void __cdecl16near FUN_0000_3536(void)

{
  FUN_0000_3544();
  return;
}



void __cdecl16near FUN_0000_3544(void)

{
  DAT_0000_041a = 0x1e;
  DAT_0000_041c = 0x1e;
  return;
}



int __cdecl16near FUN_0000_3558(void)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)0x538e;
  *(undefined2 *)0x538e = 0;
  iVar4 = *(int *)0x5390;
  iVar3 = *(int *)0x540c;
  piVar1 = (int *)0x540c;
  *piVar1 = *piVar1 + 1;
  FUN_0000_30da(iVar4 + iVar3);
  iVar4 = FUN_0000_377e();
  if (*(int *)0x5392 <= *(int *)0x540c) {
    *(undefined2 *)0x540c = 0;
  }
  if (iVar4 == 0) {
    FUN_0000_3b1a(1);
  }
  else {
    FUN_0000_30da(0x20);
  }
  *(undefined2 *)0x538e = uVar2;
  return iVar4;
}



void FUN_0000_35b4(uint param_1)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (param_1 < 4) {
    *(uint *)0x5386 = param_1;
    iVar3 = param_1 * 8;
    *(int *)0x539a = iVar3 + 0x535e;
    uVar1 = *(undefined *)(iVar3 + 0x5364);
    uVar2 = CONCAT11(uVar1,uVar1) & 0xff0f;
    *(undefined *)0x53aa = (char)uVar2;
    *(byte *)0x53ab = (byte)(uVar2 >> 0xc);
    uVar2 = (uint)*(byte *)(iVar3 + 0x5365);
    *(uint *)0x53a4 = uVar2 & 1;
    *(uint *)0x53a6 = (uVar2 & 2) >> 1;
    *(uint *)0x53a8 = (uVar2 & 4) >> 2;
  }
  return;
}



void FUN_0000_3612(char param_1,char param_2)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = *(char **)0x539a;
  if (((byte)(param_2 + *pcVar1) < 0x28) && ((byte)(param_1 + pcVar1[1]) < 0x19)) {
    pcVar1[4] = param_2;
    pcVar1[5] = param_1;
  }
  return;
}



void FUN_0000_3642(undefined2 param_1,undefined param_2,undefined param_3,undefined2 param_4,
                  uint param_5)

{
  undefined uVar1;
  undefined extraout_DL;
  int iVar2;
  undefined2 unaff_DS;
  
  if (param_5 < 4) {
    iVar2 = param_5 * 8;
    uVar1 = FUN_0000_367b();
    *(undefined *)(iVar2 + 0x535e) = uVar1;
    *(undefined *)(iVar2 + 0x535f) = param_3;
    *(undefined *)(iVar2 + 0x5360) = param_2;
    *(undefined *)(iVar2 + 0x5361) = extraout_DL;
  }
  return;
}



void __cdecl16near FUN_0000_367b(void)

{
  return;
}



void FUN_0000_36be(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((param_1 < 4) && (*(int *)(param_1 * 2 + 0x539c) != 0)) {
    *(undefined2 *)0x5398 = *(undefined2 *)(param_1 * 2 + 0x539c);
    *(uint *)0x5388 = param_1 & 0x7fff;
  }
  return;
}



void FUN_0000_36ea(byte param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x539a;
  *(byte *)0x53aa = param_1 & 0xf;
  uVar2 = CONCAT11(*(undefined *)(iVar1 + 6),param_1) & 0xf00f;
  *(byte *)(iVar1 + 6) = (byte)(uVar2 >> 8) | (byte)uVar2;
  return;
}



undefined __cdecl16near FUN_0000_370e(void)

{
  undefined2 unaff_DS;
  
  return *(undefined *)(*(int *)0x539a + 5);
}



int FUN_0000_3722(uint param_1)

{
  code **ppcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar4 = param_1 < 4;
  if (3 < (int)param_1) {
    return -2;
  }
  iVar2 = FUN_0000_3074();
  if (!bVar4) {
    bVar4 = false;
    if (iVar2 != 0) {
      bVar4 = (iVar2 - 1U >> 3 & 1) != 0;
    }
    uVar3 = FUN_0000_2fe6();
    if (bVar4) {
      return -1;
    }
    FUN_0000_302e();
    if (!bVar4) {
      *(undefined2 *)(param_1 * 2 + 0x539c) = uVar3;
      return iVar2;
    }
  }
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



uint __cdecl16near FUN_0000_377e(void)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined in_ZF;
  bool bVar6;
  
  *(undefined2 *)0x538a = 0;
  pcVar2 = (code *)swi(0x16);
  (*pcVar2)();
  if ((bool)in_ZF) {
    return 0;
  }
  pcVar2 = (code *)swi(0x21);
  bVar3 = (*pcVar2)();
  uVar4 = (uint)bVar3;
  bVar6 = bVar3 == 0;
  if (bVar6) {
    pcVar2 = (code *)swi(0x21);
    bVar3 = (*pcVar2)();
    if (bVar6) {
      return 0;
    }
    if (bVar3 < 0x3b) {
      return 0;
    }
    if (bVar3 < 0x45) {
      uVar4 = (uint)(byte)(bVar3 + 0x8e);
    }
    else {
      iVar5 = 0;
      do {
        if (bVar3 == *(byte *)(iVar5 + 0x540e)) goto LAB_0000_37d8;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 8);
      if (iVar5 == 8) {
        return 0;
      }
LAB_0000_37d8:
      uVar4 = (uint)*(byte *)(iVar5 + 0x5416);
      piVar1 = (int *)0x538a;
      *piVar1 = *piVar1 + 1;
    }
  }
  else if ((0x30 < bVar3) && (bVar3 < 0x3a)) {
    pcVar2 = (code *)swi(0x16);
    bVar3 = (*pcVar2)();
    if ((bVar3 & 0x23) != 0) {
      piVar1 = (int *)0x538a;
      *piVar1 = *piVar1 + 1;
    }
  }
  if (*(int *)0x538c != 0) {
    uVar4 = FUN_0000_3544();
  }
  return uVar4;
}



int FUN_0000_37fa(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  int local_4;
  
  local_4 = -1;
  if (param_1 != 0) {
    local_4 = 0;
  }
  if (1 < param_1) {
    local_6 = *(undefined2 *)0x5356;
    *(undefined2 *)0x5356 = 500;
  }
  do {
    iVar1 = FUN_0000_3558();
    if (param_1 != 0) {
      local_4 = local_4 + 1;
    }
  } while ((local_4 < param_1) && (iVar1 == 0));
  if (1 < param_1) {
    *(undefined2 *)0x5356 = local_6;
  }
  return iVar1;
}



void FUN_0000_3858(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_0000_37fa(0);
    if (((iVar1 == 8) || (iVar1 == 1)) && (iVar2 != 0)) {
      FUN_0000_39c0(1);
      iVar2 = iVar2 + -1;
    }
    else if ((iVar1 == 0x1b) && (iVar2 != 0)) {
      FUN_0000_39c0(iVar2);
      iVar2 = 0;
    }
    else if ((0x1f < iVar1) && ((iVar1 < 0x80 && (iVar2 < param_1)))) {
      *(undefined *)(param_2 + iVar2) = (char)iVar1;
      iVar2 = iVar2 + 1;
      FUN_0000_30da(iVar1);
    }
  } while (iVar1 != 0xd);
  *(undefined *)(iVar2 + param_2) = 0;
  return;
}



undefined2 FUN_0000_38cc(void)

{
  code **ppcVar1;
  code *pcVar2;
  char cVar3;
  undefined extraout_DL;
  undefined2 unaff_DS;
  undefined in_CF;
  
  *(undefined2 *)0x535c = 0;
  FUN_0000_3917();
  if (!(bool)in_CF) {
    *(undefined *)((int)FUN_0000_541c + 2) = extraout_DL;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (*(int *)0x535c == 0) {
      pcVar2 = (code *)swi(0x21);
      cVar3 = (*pcVar2)();
      if (*(char *)((int)FUN_0000_541c + 2) == cVar3) {
        *(undefined2 *)0x535c = 0;
        return 1;
      }
    }
  }
  *(undefined2 *)0x535c = 1;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



void __cdecl16near FUN_0000_3917(void)

{
  char in_AL;
  
  if (('`' < in_AL) && (in_AL < '{')) {
    in_AL = in_AL + -0x20;
  }
  if (('@' < in_AL) && (in_AL < '[')) {
    return;
  }
  return;
}



undefined __cdecl16near FUN_0000_3932(void)

{
  undefined2 unaff_DS;
  
  return *(undefined *)(*(int *)0x539a + 4);
}



void FUN_0000_3946(byte param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x539a;
  *(byte *)0x53ab = param_1 & 0xf;
  uVar2 = CONCAT11(*(undefined *)(iVar1 + 6),(param_1 & 0xf) << 4) & 0xfff;
  *(byte *)(iVar1 + 6) = (byte)(uVar2 >> 8) | (byte)uVar2;
  return;
}



void FUN_0000_396e(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_0000_3997();
  *(undefined2 *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



undefined4 __cdecl16near FUN_0000_3997(void)

{
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  return CONCAT22((uint)unaff_SI[3] * 8 + 7,(uint)*unaff_SI << 3);
}



void FUN_0000_39c0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar2 = FUN_0000_3932();
  if (((iVar2 != 0) || (iVar2 = FUN_0000_370e(), iVar2 != 0)) && (param_1 != 0)) {
    uVar1 = *(undefined2 *)0x538e;
    iVar2 = *(int *)0x5386 * 8;
    *(undefined2 *)0x538e = 0;
    if (0 < param_1) {
      iVar2 = (uint)*(byte *)(iVar2 + 0x5360) - (uint)*(byte *)(iVar2 + 0x535e);
      do {
        iVar3 = FUN_0000_3932();
        FUN_0000_30da(0x20);
        if (iVar3 == 0) {
          iVar3 = iVar2;
          iVar4 = FUN_0000_370e(iVar2);
          iVar4 = iVar4 + -1;
        }
        else {
          iVar3 = iVar3 + -1;
          iVar4 = FUN_0000_370e(iVar3);
        }
        FUN_0000_3612(iVar4,iVar3);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(undefined2 *)0x538e = uVar1;
  }
  return;
}



uint FUN_0000_3a52(byte param_1)

{
  uint uVar1;
  
  if ((param_1 < 0x61) || (0x7a < param_1)) {
    uVar1 = (uint)param_1;
  }
  else {
    uVar1 = param_1 - 0x20;
  }
  return uVar1;
}



uint __cdecl16near FUN_0000_3a76(void)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return (CONCAT11((char)((uint)extraout_DX >> 8) << 3,(char)extraout_DX) +
          CONCAT11((char)((uint)in_CX >> 8) << 1,(char)in_CX << 2) ^ 0x91ebU) & 0xfff;
}



int FUN_0000_3ab2(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar1 = *(int *)((int)FUN_0000_541c + 4) + 0x9248;
  uVar2 = uVar1 >> 1;
  uVar2 = ((((uVar2 | (uint)((uVar1 & 1) != 0) << 0xf) >> 1 | (uint)((uVar2 & 1) != 0) << 0xf) >> 1
           | (uint)((uVar2 & 2) != 0) << 0xf) ^ 0x9248) + 0x11;
  *(uint *)((int)FUN_0000_541c + 4) = uVar2;
  return (uVar2 & 0x7fff) % ((param_1 - param_2) + 1U) + param_2;
}



void FUN_0000_3ae8(undefined2 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  uVar3 = *(uint *)0x5356;
  iVar2 = *(int *)(param_2 + 0x5426);
  if (iVar2 != 0) {
    uVar3 = uVar3 >> ((byte)iVar2 & 0x1f);
  }
  *(undefined2 *)0x5424 = param_1;
  do {
    *(uint *)((int)FUN_0000_541c + 6) = uVar3;
    do {
      piVar1 = (int *)((int)FUN_0000_541c + 6);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    piVar1 = (int *)0x5424;
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  return;
}



void FUN_0000_3b1a(int param_1)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_BP;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((param_1 != 1) || (0xf0 < *(int *)0x5356)) {
    *(int *)0x544a = param_1;
    *(undefined2 *)0x5448 = 0;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x544e = in_BX;
    *(undefined2 *)0x544c = unaff_ES;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    do {
    } while (*(uint *)0x5448 < *(uint *)0x544a);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  return;
}



int FUN_0000_3b8c(char *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  while (*param_1 != '\0') {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



uint FUN_0000_3bb2(int param_1,uint param_2,int param_3,undefined2 param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  undefined uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  uVar5 = *(uint *)0x5356;
  if ((int)uVar5 < 100) {
    iVar4 = 0;
  }
  else {
    iVar4 = (int)(char)(uVar5 / 0x18);
  }
  *(int *)0x5454 = iVar4;
  out(0x42,0x3c);
  out(0x42,0);
  uVar5 = 0;
  if (*(char *)0xa9ce == '\0') {
    do {
      iVar4 = *(int *)0x5454;
      if (iVar4 != 0) {
        *(undefined2 *)0x5450 = param_4;
        do {
          *(int *)0x5452 = iVar4;
          do {
            piVar1 = (int *)0x5452;
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
          piVar1 = (int *)0x5450;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  else {
    do {
      uVar5 = uVar5 + param_5;
      if (param_2 < uVar5) {
        bVar2 = in(0x61);
        out(0x61,bVar2 | 3);
      }
      else {
        bVar2 = in(0x61);
        out(0x61,bVar2 & 0xfc);
      }
      param_2 = param_2 + param_1;
      iVar4 = *(int *)0x5454;
      if (iVar4 != 0) {
        *(undefined2 *)0x5450 = param_4;
        do {
          *(int *)0x5452 = iVar4;
          do {
            piVar1 = (int *)0x5452;
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
          piVar1 = (int *)0x5450;
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar3 = in(0x61);
    param_5 = CONCAT11((char)(param_5 >> 8),uVar3) & 0xfffc;
    out(0x61,(char)param_5);
  }
  return param_5;
}



uint FUN_0000_3c5c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  undefined uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5456 = 0;
  if (*(char *)0xa9ce != '\0') {
    bVar4 = in(0x61);
    out(0x61,bVar4 | 3);
  }
  do {
    iVar2 = *(int *)0x545c;
    uVar6 = ((iVar2 + 0x9248U >> 3 | iVar2 << 0xd) ^ 0x9248) + 0x11;
    *(uint *)0x545c = uVar6;
    uVar3 = 0x1234de / (ulong)(uVar6 % (param_1 - 99U) + 100);
    out(0x42,(char)uVar3);
    out(0x42,(char)(uVar3 >> 8));
    uVar6 = *(uint *)0x5356;
    piVar1 = (int *)0x5456;
    *piVar1 = *piVar1 + param_3;
    *(int *)0x5458 = param_3;
    do {
      *(uint *)0x545a = uVar6 >> 4;
      do {
        piVar1 = (int *)0x545a;
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      piVar1 = (int *)0x5458;
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    iVar2 = *(int *)0x5456;
  } while (iVar2 < param_2);
  uVar5 = in(0x61);
  uVar6 = CONCAT11((char)((uint)iVar2 >> 8),uVar5) & 0xfffc;
  out(0x61,(char)uVar6);
  return uVar6;
}



void FUN_0000_3ce0(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  if (*(char *)0xa9ce != '\0') {
    FUN_0000_3d02(param_2);
  }
  FUN_0000_3ae8(param_1,1);
  FUN_0000_3d2e();
  return;
}



void FUN_0000_3d02(uint param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0xa9ce != 0) {
    out(0x42,(char)(0x1234de / (ulong)param_1));
    out(0x42,(char)(0x1234de / (ulong)param_1 >> 8));
    bVar1 = in(0x61);
    out(0x61,bVar1 | 3);
  }
  return;
}



byte __cdecl16near FUN_0000_3d2e(void)

{
  byte bVar1;
  
  bVar1 = in(0x61);
  out(0x61,bVar1 & 0xfc);
  return bVar1 & 0xfc;
}



void __cdecl16far FUN_0000_3d42(void)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5394 = 0x2320;
  *(undefined2 *)0x5396 = 0x1a2;
  bVar4 = *(byte *)0xa9bd;
  bVar2 = *(byte *)(bVar4 + 0xa9c8);
  if ((bVar2 == 0xff) || (*(byte *)0x545e == bVar4)) {
LAB_0000_3d94:
    pbVar7 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
    if ((*pbVar7 < 0x43) && (1 < *(byte *)0xa9c2)) {
      pbVar1 = pbVar7;
      *pbVar1 = *pbVar1 ^ 3;
      FUN_0000_38cc(*pbVar7);
      cVar3 = *(char *)0xa9bd;
      if (*(char *)0x545e != cVar3) goto LAB_0000_3d8d;
    }
    pbVar7 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
    if ((*pbVar7 < 0x43) || (*pbVar7 == 0xff)) {
      if (*(char *)0xa9be == '\x02') {
        FUN_0000_2642(0);
        FUN_0000_3642(0xd,0x21,0xc,6,0);
        FUN_0000_2490(0);
        FUN_0000_24c6(0x77,0x117,0x58,0x28);
      }
      *(undefined *)0x545e = 0xff;
      uVar5 = 0x3e28;
      bVar4 = FUN_0000_30c6();
      while (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
        uVar5 = (uint)bVar4;
        iVar6 = FUN_0000_38cc(uVar5);
        if (iVar6 != 0) break;
        uVar5 = FUN_0000_37fa(0);
        bVar4 = FUN_0000_3a52(uVar5);
      }
      if (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
        uVar5 = (uint)bVar4;
        if (bVar4 == 0x42) {
          *(undefined *)0xa9c2 = 2;
        }
        bVar2 = *(byte *)0xa9bd;
        *(byte *)(bVar2 + 0xa9c8) = bVar4;
        if ((bVar2 == 3) && (*(char *)0xa9c9 == -1)) {
          *(byte *)0xa9c9 = bVar4;
        }
      }
      if (*(char *)0xa9be == '\0') {
        FUN_0000_30da(10);
      }
      else if (*(char *)0xa9be == '\x02') {
        FUN_0000_2642(1,uVar5);
        FUN_0000_3642(0x18,0x27,0,0,0);
        FUN_0000_298e(0,1);
      }
    }
    else {
      *pbVar7 = 0x41;
      FUN_0000_38cc(0x41);
      *(undefined *)0x545e = 0xff;
    }
  }
  else {
    uVar5 = FUN_0000_30c6();
    if (uVar5 == bVar2) goto LAB_0000_3d94;
    FUN_0000_38cc(*(undefined *)(*(byte *)0xa9bd + 0xa9c8));
    cVar3 = *(char *)0xa9bd;
LAB_0000_3d8d:
    *(char *)0x545e = cVar3;
  }
  *(undefined2 *)0x5394 = 0x2322;
  *(undefined2 *)0x5396 = 0x1a2;
  return;
}



void FUN_0000_3f3e(int param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5394 = 0x2320;
  *(undefined2 *)0x5396 = 0x1a2;
  if ((param_1 == 2) || (param_1 == 5)) {
    param_1 = 1;
  }
  *(undefined *)0xa9bd = (undefined)param_1;
  if (*(char *)(param_1 + -0x5638) != -1) {
    FUN_0000_38cc(*(undefined *)(param_1 + -0x5638));
    *(undefined *)0x545e = 0xff;
  }
  *(undefined2 *)0x5394 = 0x2322;
  *(undefined2 *)0x5396 = 0x1a2;
  return;
}



void FUN_0000_3f8e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((*(char *)0xa9bd == '\x03') && (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1)) {
    FUN_0000_3d42();
  }
  FUN_0000_38cc(*(undefined *)(*(byte *)0xa9bd + 0xa9c8));
  iVar1 = 0;
  while (iVar1 == 0) {
    iVar1 = FUN_0000_8c54(param_1,param_2,param_3,param_4);
  }
  return;
}



void FUN_0000_3ff8(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)0xa9bd;
  if ((bVar1 == 3) && (*(char *)(bVar1 + 0xa9c8) == -1)) {
    FUN_0000_3d42();
  }
  FUN_0000_38cc(*(undefined *)(*(byte *)0xa9bd + 0xa9c8));
  iVar2 = 0;
  while (iVar2 == 0) {
    do {
      iVar2 = FUN_0000_3094(param_3);
    } while (iVar2 == 0);
    *(undefined2 *)0x5394 = 0x25ca;
    *(undefined2 *)0x5396 = 0x1a2;
    iVar2 = FUN_0000_8cb6(param_1,param_2,param_3);
    *(undefined2 *)0x5394 = 0x2322;
    *(undefined2 *)0x5396 = 0x1a2;
  }
  *(byte *)0xa9bd = bVar1;
  FUN_0000_38cc(*(undefined *)(bVar1 + 0xa9c8));
  return;
}


/*
Unable to decompile 'FUN_0000_408c'
Cause: Exception while decompiling 0000:408c: Decompiler process died

*/


void FUN_0000_4146(uint param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  FUN_0000_3612(param_1,0);
  if (*(byte *)0x585b <= param_1) {
    iVar5 = 0xf;
    do {
      FUN_0000_30da(0x20);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  iVar5 = (uint)*(byte *)0x589e * 8;
  if ((((0x7f < *(byte *)0x5893) && (*(char *)0x589e != -1)) &&
      ((*(byte *)(iVar5 + -0x45ea) & 0x80) != 0)) && (*(byte *)(iVar5 + -0x45e9) == param_1)) {
    FUN_0000_30da(0xfd);
  }
  iVar3 = param_1 * 0x20 + 0x55a8;
  FUN_0000_3270(iVar3);
  iVar3 = FUN_0000_3b8c(iVar3);
  if (iVar3 < 9) {
    iVar3 = 9 - iVar3;
    do {
      FUN_0000_30da(0x20);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_1 == *(byte *)0x587b) {
    cVar1 = *(char *)(param_1 * 0x20 + 0x55b3);
    if ((cVar1 == 'D') || (cVar1 == 'S')) {
      FUN_0000_30da(0x20);
      *(undefined *)0x587b = 0xff;
      goto LAB_0000_421d;
    }
    uVar4 = 0x1a;
  }
  else {
    uVar4 = 0x20;
  }
  FUN_0000_30da(uVar4);
LAB_0000_421d:
  FUN_0000_345e(0x20,4,*(undefined2 *)(param_1 * 0x20 + 0x55b8));
  if (*(byte *)0x5893 < 0x80) {
    uVar2 = *(undefined *)(param_1 * 0x20 + 0x55b3);
  }
  else {
    if (((*(byte *)(param_1 * 8 + -0x45ea) & 0xe1) == 0x81) &&
       (*(byte *)(param_1 * 8 + -0x45e9) == param_1)) {
      uVar2 = 0x43;
    }
    else {
      uVar2 = *(undefined *)(param_1 * 0x20 + 0x55b3);
    }
    FUN_0000_30da(uVar2);
    if (*(char *)0x589e == -1) {
      return;
    }
    if ((*(byte *)(iVar5 + -0x45ea) & 0x80) == 0) {
      return;
    }
    if (*(byte *)(iVar5 + -0x45e9) != param_1) {
      return;
    }
    uVar2 = 0xfd;
  }
  FUN_0000_30da(uVar2);
  return;
}



void __cdecl16near FUN_0000_42a4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)0x5386;
  FUN_0000_35b4(1,uVar2);
  FUN_0000_3612(7,8);
  if (*(int *)0x57aa < 1000) {
    FUN_0000_30da(0x20);
  }
  if (*(int *)0x57aa < 100) {
    FUN_0000_30da(0x20);
  }
  if (*(int *)0x57aa < 10) {
    FUN_0000_30da(0x20);
  }
  FUN_0000_3270(0x54b6);
  FUN_0000_345e(0x20,1,*(undefined2 *)0x57aa);
  while( true ) {
    iVar1 = FUN_0000_3932();
    if (0xe < iVar1) break;
    FUN_0000_30da(0x20);
  }
  FUN_0000_35b4(uVar2);
  return;
}



void __cdecl16near FUN_0000_4320(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_0000_35b4(1);
  iVar1 = 0;
  do {
    FUN_0000_4146(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  FUN_0000_3612(7,0);
  FUN_0000_3270(0x54ba);
  FUN_0000_345e(0x20,1,*(undefined2 *)0x57a8);
  while( true ) {
    iVar1 = FUN_0000_3932();
    if (7 < iVar1) break;
    FUN_0000_30da(0x20);
  }
  if ((*(byte *)0x5893 < 0x80) && ((*(byte *)0x587c & 0xf8) == 0x20)) {
    FUN_0000_3270(0x54bd);
    FUN_0000_345e(0x20,1,*(undefined *)0x5c5f);
    if (*(byte *)0x5c5f < 10) {
      FUN_0000_30da(0x20);
    }
  }
  else {
    FUN_0000_42a4();
  }
  FUN_0000_3270(0x54c3);
  if ((*(byte *)0x587d < 10) && (*(byte *)0x587e < 10)) {
    FUN_0000_30da(0x20);
  }
  FUN_0000_345e(0x20,1,*(undefined *)0x587d);
  FUN_0000_30da(0x2d);
  FUN_0000_345e(0x20,1,*(undefined *)0x587e);
  FUN_0000_30da(0x2d);
  FUN_0000_345e(0x30,3,*(undefined2 *)0x5874);
  while( true ) {
    iVar1 = FUN_0000_3932();
    if (0xe < iVar1) break;
    FUN_0000_30da(0x20);
  }
  FUN_0000_3612(6,6);
  if (*(char *)0x587a == '\0') {
    FUN_0000_695c();
  }
  else {
    FUN_0000_664a();
    FUN_0000_30da(*(undefined *)0x587a);
    FUN_0000_66ee();
  }
  FUN_0000_35b4(2);
  return;
}



void FUN_0000_4448(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_25a6(param_1 * 8 + 0xf,0x137,param_1 * 8 + 8,0xc0);
  return;
}



void FUN_0000_4472(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_0000_4448(param_2);
  FUN_0000_3c5c(2000,0x640,10);
  FUN_0000_4448(param_2);
  iVar2 = param_2 * 0x20;
  piVar1 = (int *)(iVar2 + 0x55b8);
  *piVar1 = *piVar1 - param_1;
  if (*(int *)(iVar2 + 0x55b8) < 1) {
    *(undefined2 *)(iVar2 + 0x55b8) = 0;
    *(undefined *)(iVar2 + 0x55b3) = 0x44;
    if (param_2 == *(byte *)0x587b) {
      *(undefined *)0x587b = 0xff;
    }
  }
  FUN_0000_4320();
  return;
}



void __cdecl16near FUN_0000_44c8(void)

{
  undefined2 uVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  uint uVar4;
  
  uVar2 = 0;
  pcVar3 = (char *)0x55b3;
  do {
    if ((uVar2 < *(byte *)0x585b) && (*pcVar3 != 'D')) {
      uVar4 = uVar2;
      uVar1 = FUN_0000_3ab2(8,1);
      FUN_0000_4472(uVar1,uVar4);
    }
    pcVar3 = pcVar3 + 0x20;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}



void __cdecl16near FUN_0000_4508(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined2 unaff_DS;
  char *local_a;
  int local_4;
  
  local_4 = 0;
  if (*(char *)0x585b != '\0') {
    local_a = (char *)0x55b3;
    uVar3 = 0;
    do {
      cVar2 = *local_a;
      if ((cVar2 == 'D') && (uVar3 == *(byte *)0x587b)) {
        *(undefined *)0x587b = 0xff;
      }
      if ((cVar2 != 'D') && (cVar2 != 'S')) {
        if (cVar2 == 'P') {
          FUN_0000_4472(1,uVar3);
        }
        local_4 = local_4 + 1;
      }
      local_a = local_a + 0x20;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)0x585b);
  }
  if (*(char *)0x587f != *(char *)0x5880) {
    if (*(int *)0x57a8 == 0) {
      FUN_0000_3270(0x54c8);
      FUN_0000_44c8();
    }
    else if (((*(char *)0x587f == '\x06') || (*(char *)0x587f == '\f')) ||
            (*(char *)0x587f == '\x12')) {
      FUN_0000_5974(local_4,0x57a8);
    }
    *(undefined *)0x5880 = *(undefined *)0x587f;
  }
  FUN_0000_5910(0xff,1,0x588b);
  if ((*(char *)0x588e != '\0') && (*(char *)0x588e != -1)) {
    pcVar1 = (char *)0x588e;
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      *(undefined *)0x587a = 0;
      FUN_0000_4320();
    }
  }
  FUN_0000_5a2c();
  return;
}



bool FUN_0000_45f4(int param_1,byte param_2)

{
  undefined2 unaff_DS;
  bool bVar1;
  
  bVar1 = ((uint)*(byte *)((int)FUN_0000_54ce + 6 + (param_1 >> 3)) & 0x80 >> ((byte)param_1 & 7))
          == 0;
  if ((((param_2 & 0xfe) != 0x1c) && ((param_2 & 0xf0) != 0x40)) && (((byte)param_1 & 0xfc) == 0x90)
     ) {
    bVar1 = false;
  }
  return bVar1;
}



undefined2 FUN_0000_464e(int param_1)

{
  undefined2 uVar1;
  
  if ((param_1 < 4) || (((byte)param_1 & 0xf0) == 0x60)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/*
Unable to decompile 'FUN_0000_466c'
Cause: Exception while decompiling 0000:466c: process: timeout

*/


uint FUN_0000_479a(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  uint local_4;
  
  local_4 = 0;
  bVar1 = false;
  if ((0x7f < *(byte *)0x5893) &&
     (iVar3 = (uint)*(byte *)0x589e * 8, (*(byte *)(iVar3 + -0x45ea) & 0x80) != 0)) {
    FUN_0000_4448(*(undefined *)(iVar3 + -0x45e9));
  }
  FUN_0000_6870(0x5554);
  uVar4 = 0xffff;
  do {
    if (uVar4 != local_4) {
      FUN_0000_4448(local_4);
      uVar4 = local_4;
    }
    do {
      uVar2 = FUN_0000_408c();
    } while (0x37 < uVar2);
    if (((uVar2 < 0x31) || (0x36 < uVar2)) || ((uint)*(byte *)0x585b <= uVar2 - 0x31)) {
      if (uVar2 == 4) {
LAB_0000_484a:
        FUN_0000_5934(*(byte *)0x585b - 1,1,&local_4);
      }
      else if ((int)uVar2 < 5) {
        if (uVar2 != 1) {
          if (uVar2 == 2) goto LAB_0000_484a;
          if (uVar2 != 3) goto LAB_0000_4839;
        }
        FUN_0000_5974(1,&local_4);
      }
      else {
        if (uVar2 != 0xd) {
          if (uVar2 == 0x1b) {
            local_4 = 0xffff;
          }
          else if (uVar2 != 0x20) {
            if ((uVar2 != 0x30) || (param_1 == 0)) goto LAB_0000_4839;
            local_4 = 0xfffe;
          }
        }
        bVar1 = true;
      }
    }
    else {
      local_4 = uVar2 - 0x31;
    }
LAB_0000_4839:
    if (uVar4 != local_4) {
      FUN_0000_4448(uVar4);
    }
    if (bVar1) {
      if (local_4 < 0x8000) {
        FUN_0000_4448(local_4);
      }
      FUN_0000_6840();
      return local_4;
    }
  } while( true );
}



void __cdecl16near FUN_0000_48ae(void)

{
  FUN_0000_479a(0);
  return;
}



void FUN_0000_48b6(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  if (param_1 != -1) {
    *(undefined *)0x5892 = (undefined)param_1;
    *(undefined *)0x5883 = 0;
  }
  if (0x20 < *(byte *)0x5893) {
    return;
  }
  if (*(char *)0x5893 == '\x19') {
    return;
  }
  if (0x7f < *(byte *)0x5895) {
    FUN_0000_2490(*(undefined2 *)0x13b0);
    FUN_0000_2530(0xb8,0x98,0xb8,0x30);
    FUN_0000_2490(*(undefined2 *)0x13b2);
    FUN_0000_24c6(0xbf,0x98,0xb9,0x30);
    return;
  }
  FUN_0000_35b4(0);
  FUN_0000_3612(0x17,6);
  FUN_0000_664a();
  cVar1 = *(char *)0x5892;
  if (cVar1 == '\0') {
    uVar2 = 0x555c;
  }
  else if (cVar1 == '\x01') {
    uVar2 = 0x5562;
  }
  else if (cVar1 == '\x02') {
    uVar2 = 0x5568;
  }
  else if (cVar1 == '\x03') {
    uVar2 = 0x556e;
  }
  else {
    if (cVar1 != '\x04') goto LAB_0000_491f;
    uVar2 = 0x5574;
  }
  FUN_0000_3270(uVar2);
LAB_0000_491f:
  FUN_0000_3270(0x557a);
  FUN_0000_66ee();
  FUN_0000_35b4(2);
  return;
}



void __cdecl16near FUN_0000_4982(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0000_3ab2(0x3f,0);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_0000_3ab2(4,0);
      if (iVar1 != 0) break;
      iVar2 = FUN_0000_3ab2(0xff,0);
    } while (iVar2 < 0xc0);
    FUN_0000_48b6(iVar1);
  }
  return;
}



void FUN_0000_49c6(uint param_1)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  if ((param_1 < *(byte *)0x585b) && (pcVar1 = (char *)(param_1 * 0x20 + 0x55b3), *pcVar1 != 'D')) {
    *pcVar1 = 'P';
    FUN_0000_4320();
  }
  return;
}



void FUN_0000_49f0(undefined2 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_0000_3c5c(500,3000,0x28);
  if (*(byte *)0x5893 < 0x80) {
    iVar3 = FUN_0000_3ab2(7,0);
    uVar1 = (uint)*(byte *)(iVar3 + 0x559e);
  }
  else {
    uVar1 = FUN_0000_3ab2(1,0);
  }
  if (uVar1 == 0) {
    FUN_0000_3270(0x5581);
    uVar2 = FUN_0000_54de(param_1);
    FUN_0000_4472(uVar2,param_1);
  }
  else if (uVar1 == 1) {
    FUN_0000_3270(0x5588);
    FUN_0000_49c6(param_1);
  }
  else if (uVar1 == 2) {
    FUN_0000_3270(0x5591);
    FUN_0000_44c8();
  }
  else if (uVar1 == 3) {
    FUN_0000_3270(0x5598);
    iVar3 = 0;
    do {
      FUN_0000_49c6(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  return;
}



void __cdecl16near FUN_0000_4a92(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_8;
  
  FUN_0000_298e(1,0);
  FUN_0000_2642(1);
  local_8 = 8;
  do {
    iVar2 = 8;
    do {
      FUN_0000_8bea(2,iVar2 + 4,0xb7,iVar2,8);
      uVar1 = FUN_0000_3ab2(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + 3;
    } while (iVar2 < 0xb4);
    iVar2 = 8;
    do {
      FUN_0000_24ee(iVar2 + 4,0xb7,iVar2,8,0,1);
      uVar1 = FUN_0000_3ab2(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + 3;
    } while (iVar2 < 0xb4);
    iVar2 = 0xb3;
    do {
      FUN_0000_8c20(2,iVar2 + 4,0xb7,iVar2,8);
      uVar1 = FUN_0000_3ab2(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + -3;
    } while (7 < iVar2);
    iVar2 = 0xb3;
    do {
      FUN_0000_24ee(iVar2 + 4,0xb7,iVar2,8,0,1);
      uVar1 = FUN_0000_3ab2(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + -3;
    } while (7 < iVar2);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_0000_2642(0);
  FUN_0000_3d2e();
  return;
}


/*
Unable to decompile 'FUN_0000_4b98'
Cause: Exception while decompiling 0000:4b98: Decompiler process died

*/


void FUN_0000_4f42(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if (*(byte *)0x5893 < 0x80) {
    param_2 = param_2 - (*(byte *)0x5896 - 5);
    param_1 = param_1 - (*(byte *)0x5897 - 5);
  }
  FUN_0000_2b00(param_1,param_2,0);
  FUN_0000_3c5c(2000,3000,10);
  FUN_0000_7330();
  return;
}



void FUN_0000_4f84(uint param_1)

{
  undefined uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  if (0x7f < *(byte *)0x5893) {
    local_4 = param_1 * 8 + -0x45ec;
    param_1 = (uint)*(byte *)(param_1 * 8 + -0x45e8);
  }
  FUN_0000_2b00(*(undefined *)(param_1 * 8 + 0x5c5d),*(undefined *)(param_1 * 8 + 0x5c5c),0);
  if ((*(byte *)0x5893 < 0x80) || ((*(byte *)(local_4 + 2) & 0x80) == 0)) {
    FUN_0000_3c5c(2000,3000,10);
  }
  else {
    uVar1 = *(undefined *)(local_4 + 3);
    FUN_0000_4448(uVar1);
    FUN_0000_3c5c(500,3000,0x28);
    FUN_0000_4448(uVar1);
  }
  FUN_0000_7330();
  return;
}



char __cdecl16near FUN_0000_500c(void)

{
  int *piVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5876 = 0;
  *(undefined2 *)0x5878 = 0;
  while (((cVar2 = FUN_0000_408c(), cVar2 != ' ' && (cVar2 != '\x03')) && (cVar2 != '\x04'))) {
    if ((cVar2 == '\x01') || (cVar2 == '\x02')) break;
  }
  if (cVar2 == '\x01') {
    FUN_0000_3270(0xa2b6);
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
  }
  else if (cVar2 == '\x02') {
    FUN_0000_3270(0xa2bc);
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
  }
  else if (cVar2 == '\x03') {
    FUN_0000_3270(0xa2a6);
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
  }
  else {
    if (cVar2 != '\x04') {
      if ((cVar2 != '\x1b') && (cVar2 != ' ')) {
        return cVar2;
      }
      FUN_0000_3270(0xa2a0);
      return '\0';
    }
    FUN_0000_3270(0xa2ae);
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + 1;
  }
  return '\x01';
}



undefined FUN_0000_50ae(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  byte *local_8;
  byte *local_6;
  
  iVar3 = 1;
  pbVar5 = (byte *)0x5c64;
  local_6 = (byte *)0x5c65;
  local_8 = (byte *)0x5c66;
  puVar4 = (undefined *)0x5c62;
  bVar1 = *(byte *)0x5893;
  while (((*pbVar5 != param_3 || (*local_6 != param_2)) ||
         ((bVar1 < 0x80 && ((0x7f < bVar1 || (*local_8 != param_1))))))) {
    pbVar5 = pbVar5 + 8;
    local_6 = local_6 + 8;
    local_8 = local_8 + 8;
    puVar4 = puVar4 + 8;
    iVar3 = iVar3 + 1;
    if ((undefined *)0x5d59 < puVar4) {
      *(int *)0x5876 = iVar3;
      return 0;
    }
  }
  uVar2 = *puVar4;
  *(int *)0x5876 = iVar3;
  return uVar2;
}



undefined FUN_0000_5122(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  byte *local_8;
  byte *local_6;
  
  iVar3 = 0x1f;
  pbVar5 = (byte *)0x5d54;
  local_6 = (byte *)0x5d55;
  local_8 = (byte *)0x5d56;
  puVar4 = (undefined *)0x5d52;
  bVar1 = *(byte *)0x5893;
  while (((*pbVar5 != param_3 || (*local_6 != param_2)) ||
         ((bVar1 < 0x80 && ((0x7f < bVar1 || (*local_8 != param_1))))))) {
    pbVar5 = pbVar5 + -8;
    local_6 = local_6 + -8;
    local_8 = local_8 + -8;
    puVar4 = puVar4 + -8;
    iVar3 = iVar3 + -1;
    if (puVar4 < (undefined *)0x5c5a) {
      *(int *)0x5876 = iVar3;
      return 0;
    }
  }
  uVar2 = *puVar4;
  *(int *)0x5876 = iVar3;
  return uVar2;
}



int FUN_0000_5196(char param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  char *local_1e;
  byte *local_1c;
  byte *local_18;
  char *local_14;
  char *local_12;
  int local_4;
  
  iVar7 = 0x1f;
  uVar4 = (uint)*(byte *)0x5897;
  uVar5 = (uint)*(byte *)0x5896;
  local_12 = (char *)0x5d52;
  local_14 = (char *)0x5d52;
  pbVar8 = (byte *)0x5d54;
  local_18 = (byte *)0x5d54;
  pbVar9 = (byte *)0x5d55;
  local_1c = (byte *)0x5d55;
  local_1e = "";
  do {
    if (*local_12 == '\0') {
      return iVar7;
    }
    if (*local_14 == param_1) {
      bVar2 = *(byte *)0x5896;
      pbVar1 = pbVar8;
      if (*pbVar1 < bVar2 || *pbVar1 == bVar2) {
        local_4 = uVar5 - *pbVar8;
      }
      else {
        local_4 = ~(uVar5 - *local_18) + 1;
      }
      bVar2 = *(byte *)0x5897;
      pbVar1 = pbVar9;
      if (*pbVar1 < bVar2 || *pbVar1 == bVar2) {
        iVar6 = uVar4 - *pbVar9;
      }
      else {
        iVar6 = ~(uVar4 - *local_1c) + 1;
      }
      cVar3 = *(char *)0x5895;
      if (*local_1e != cVar3) {
        return iVar7;
      }
      if (((*local_1e == cVar3) && (5 < local_4)) && (5 < iVar6)) {
        return iVar7;
      }
    }
    local_12 = local_12 + -8;
    local_14 = local_14 + -8;
    pbVar8 = pbVar8 + -8;
    local_18 = local_18 + -8;
    pbVar9 = pbVar9 + -8;
    local_1c = local_1c + -8;
    local_1e = local_1e + -8;
    iVar7 = iVar7 + -1;
    if (iVar7 < 0) {
      return -1;
    }
  } while( true );
}



int FUN_0000_5288(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  char *local_e;
  
  iVar2 = 1;
  pbVar3 = (byte *)0x5c62;
  pcVar4 = (char *)0x5c64;
  local_e = (char *)0x5c65;
  do {
    bVar1 = *pbVar3;
    if (((param_3 <= bVar1) && (bVar1 <= param_2)) && (bVar1 != 0xb5)) {
      if (param_1 == 0) {
        return iVar2;
      }
      if (10 < (byte)((*pcVar4 - *(char *)0x5896) + 5U)) {
        return iVar2;
      }
      if (10 < (byte)((*local_e - *(char *)0x5897) + 5U)) {
        return iVar2;
      }
    }
    pbVar3 = pbVar3 + 8;
    pcVar4 = pcVar4 + 8;
    local_e = local_e + 8;
    iVar2 = iVar2 + 1;
    if (0x17 < iVar2) {
      return 0;
    }
  } while( true );
}



int __cdecl16near FUN_0000_5304(void)

{
  int local_4;
  
  local_4 = FUN_0000_5288(0,0,0);
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(1,0xf,1);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(1,0xff,0x80);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(1,0x11,0x10);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(1,0x7f,0x30);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(0,0xf,1);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(0,0xff,0x80);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(0,0x11,0x10);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(0,0x7f,0x30);
  }
  if (local_4 == 0) {
    local_4 = FUN_0000_5288(0,0xff,0);
  }
  return local_4;
}



void FUN_0000_53ec(undefined param_1,undefined param_2,char param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  if (((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) && (param_3 != '\0')) {
    pcVar1 = (char *)FUN_0000_5e22(param_1,param_2);
    *pcVar1 = param_3;
  }
  return;
}



undefined2 __cdecl16near FUN_0000_541c(void)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_DS;
  int local_8;
  
  local_8 = 0;
  uVar2 = (uint)*(byte *)0x585b;
  if (uVar2 != 0) {
    pcVar5 = (char *)0x55b3;
    uVar4 = 0;
    local_8 = 0;
    do {
      cVar1 = *pcVar5;
      if ((cVar1 == 'G') || (cVar1 == 'P')) {
        *(uint *)0x5876 = uVar4;
        return 0;
      }
      if (cVar1 == 'S') {
        local_8 = local_8 + 1;
      }
      pcVar5 = pcVar5 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (local_8 == 0) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



void FUN_0000_5494(int param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined param_5,undefined param_6,undefined param_7)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 8;
  *(undefined *)(param_1 + 0x5c5a) = param_7;
  *(undefined *)(param_1 + 0x5c5b) = param_6;
  *(undefined *)(param_1 + 0x5c5c) = param_5;
  *(undefined *)(param_1 + 0x5c5d) = param_4;
  *(undefined *)(param_1 + 0x5c5e) = param_3;
  *(undefined *)(param_1 + 0x5c5f) = param_2;
  return;
}



void FUN_0000_54ce(undefined2 param_1)

{
  FUN_0000_3ab2(param_1,0);
  return;
}



int __cdecl16near FUN_0000_54de(void)

{
  int iVar1;
  
  iVar1 = FUN_0000_54ce(0x3c,0);
  iVar1 = iVar1 / 2;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



void FUN_0000_5506(int param_1)

{
  undefined2 unaff_DS;
  
  if ((*(char *)0x58a4 != '\0') && (0 < param_1)) {
    do {
      FUN_0000_7330();
      FUN_0000_3b1a(1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_0000_553c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  uVar1 = *(undefined2 *)0x538c;
  *(undefined2 *)0x538c = 0;
  do {
    iVar2 = FUN_0000_408c();
    if (((iVar2 == 8) || (iVar2 == 1)) && (iVar3 != 0)) {
      FUN_0000_39c0(1);
      iVar3 = iVar3 + -1;
    }
    else if ((iVar2 == 0x1b) && (iVar3 != 0)) {
      FUN_0000_39c0(iVar3);
      iVar3 = 0;
    }
    else if ((0x1f < iVar2) && ((iVar2 < 0x80 && (iVar3 < param_1)))) {
      *(undefined *)(param_2 + iVar3) = (char)iVar2;
      iVar3 = iVar3 + 1;
      FUN_0000_30da(iVar2);
    }
  } while (iVar2 != 0xd);
  *(undefined *)(iVar3 + param_2) = 0;
  *(undefined2 *)0x538c = uVar1;
  return;
}



int FUN_0000_55be(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_10;
  int local_a;
  byte local_8 [6];
  
  local_10 = 0;
  local_a = 0;
  if (5 < param_1) {
    param_1 = 5;
  }
  iVar3 = 0;
  do {
    uVar1 = FUN_0000_408c();
    if ((uVar1 < 0x30) || (0x39 < uVar1)) {
      if (((uVar1 == 0x2d) || (uVar1 == 0x2b)) && (iVar3 == 0)) goto LAB_0000_55f7;
      if (((uVar1 == 8) || (uVar1 == 1)) && (iVar3 != 0)) {
        iVar3 = iVar3 + -1;
        FUN_0000_39c0(1);
      }
      else if ((uVar1 == 0x1b) && (iVar3 != 0)) {
        FUN_0000_39c0(iVar3);
        iVar3 = 0;
      }
    }
    else if (iVar3 < param_1) {
LAB_0000_55f7:
      local_8[iVar3] = (byte)uVar1;
      iVar3 = iVar3 + 1;
      FUN_0000_30da(uVar1);
    }
    if (uVar1 == 0xd) {
      iVar3 = iVar3 + -1;
      if (0 < iVar3) {
        piVar2 = (int *)0x6a0a;
        do {
          local_10 = local_10 + (local_8[iVar3] - 0x30) * *piVar2;
          piVar2 = piVar2 + 1;
          local_a = local_a + 1;
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
      }
      if (local_8[0] == 0x2d) {
        local_10 = -local_10;
      }
      else if (0x2f < local_8[0]) {
        local_10 = local_10 + *(int *)(local_a * 2 + 0x6a0a) * (local_8[0] - 0x30);
      }
      return local_10;
    }
  } while( true );
}



void __cdecl16near FUN_0000_56ba(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined2 in_stack_0000ffe2;
  undefined2 uVar10;
  byte local_e;
  int local_8;
  int local_6;
  
  local_e = *(byte *)0x5c5b;
  FUN_0000_3270(0xa2c2);
  if ((local_e & 0xf8) == 0x20) {
    uVar5 = 0x56e7;
    FUN_0000_3270(0xa2ce);
    if (0x23 < *(byte *)0x5c5b) {
      iVar8 = 0;
      do {
        uVar10 = 0x5705;
        FUN_0000_95c2();
        FUN_0000_9592(in_stack_0000ffe2,uVar5,uVar10);
        if ((*(byte *)0x587c & 0xfc) != 0x24) {
          return;
        }
        uVar5 = 0x571f;
        FUN_0000_699c(5);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 5);
      do {
        cVar3 = FUN_0000_3ab2(3,1);
        pcVar1 = (char *)0x5c5f;
        *pcVar1 = *pcVar1 + cVar3;
        if (99 < *(byte *)0x5c5f) {
          *(undefined *)0x5c5f = 99;
        }
      } while (*(byte *)0x5c5f < 10);
      FUN_0000_3270(0xa2f8);
      FUN_0000_345e(0x20,2,*(undefined *)0x5c5f);
      FUN_0000_3270((int)&DAT_0000_a302);
      *(undefined *)0xa9fa = 1;
      goto LAB_0000_5905;
    }
    FUN_0000_3270((int)FUN_0000_a2dc);
    uVar5 = 0xa2ec;
  }
  else {
    FUN_0000_3270((int)&DAT_0000_a306);
    if (*(byte *)0x5893 < 0x21) {
      pbVar4 = (byte *)FUN_0000_5e22(*(undefined *)0x5897,*(undefined *)0x5896);
      local_e = *pbVar4;
    }
    if (((*(byte *)0x5893 < 0x21) && (local_e != 0)) && (local_e < 4)) {
      uVar5 = SUB42(&DAT_0000_a30e,0);
    }
    else {
      if ((0x20 < *(byte *)0x5893) || (*(char *)0x5c5b == '\x1c')) {
        FUN_0000_3270(0xa32c);
        do {
          bVar2 = FUN_0000_408c();
          if (bVar2 == 0x20) break;
        } while ((bVar2 < 0x30) || (0x39 < bVar2));
        FUN_0000_30da(bVar2);
        FUN_0000_30da(10);
        if (bVar2 == 0x20) {
          return;
        }
        if (bVar2 == 0x30) {
          return;
        }
        local_6 = 0;
        uVar6 = (uint)*(byte *)0x585b;
        if (uVar6 != 0) {
          pcVar9 = (char *)0x55b3;
          local_6 = 0;
          uVar7 = 0;
          do {
            if ((*pcVar9 == 'G') || (*pcVar9 == 'P')) {
              local_6 = local_6 + 1;
            }
            pcVar9 = pcVar9 + 0x20;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar6);
        }
        if (local_6 < 2) {
LAB_0000_5879:
          local_8 = -1;
        }
        else {
          FUN_0000_3270(0xa348);
          do {
            cVar3 = FUN_0000_408c();
            if (cVar3 == 'Y') break;
          } while (cVar3 != 'N');
          if (cVar3 == 'N') {
            FUN_0000_3270(0xa362);
            goto LAB_0000_5879;
          }
          FUN_0000_3270(0xa368);
          FUN_0000_3270(0xa36e);
          local_8 = FUN_0000_48ae();
          FUN_0000_30da(10);
          if ((local_8 == -1) || (*(char *)(local_8 * 0x20 + 0x55b3) != 'G')) {
            local_8 = -1;
            FUN_0000_3270(0xa386);
          }
        }
        if (*(byte *)0x5893 < 0x21) {
          FUN_0000_7d80(bVar2 - 0x30,local_8);
        }
        else {
          *(undefined *)0x58a1 = 6;
          FUN_0000_9622();
          FUN_0000_9646();
          FUN_0000_79a6(bVar2 - 0x30,local_8,*(undefined *)0x58a1);
          FUN_0000_3f3e(2);
          FUN_0000_962e();
          *(undefined2 *)0x5c62 = *(undefined2 *)0xaa04;
          *(undefined2 *)0x5c64 = *(undefined2 *)0xaa06;
          *(undefined2 *)0x5c66 = *(undefined2 *)0xaa08;
          *(undefined2 *)0x5c68 = *(undefined2 *)0xaa0a;
          FUN_0000_969a(0);
        }
        goto LAB_0000_5905;
      }
      uVar5 = SUB42(&DAT_0000_a322,0);
    }
  }
  FUN_0000_3270(uVar5);
LAB_0000_5905:
  *(undefined *)0x24e6 = 1;
  return;
}



void FUN_0000_5910(uint param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if ((uint)*param_3 + param_2 < param_1) {
    pbVar1 = param_3;
    *pbVar1 = *pbVar1 + (char)param_2;
  }
  else {
    *param_3 = (byte)param_1;
  }
  return;
}



void FUN_0000_5934(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  if (*param_3 + param_2 < param_1) {
    piVar1 = param_3;
    *piVar1 = *piVar1 + param_2;
  }
  else {
    *param_3 = param_1;
  }
  return;
}



void FUN_0000_5956(uint param_1,byte *param_2)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (param_1 < *param_2) {
    pbVar1 = param_2;
    *pbVar1 = *pbVar1 - (char)param_1;
  }
  else {
    *param_2 = 0;
  }
  return;
}



void FUN_0000_5974(int param_1,int *param_2)

{
  int *piVar1;
  undefined2 unaff_DS;
  
  piVar1 = param_2;
  if (*piVar1 == param_1 || *piVar1 < param_1) {
    *param_2 = 0;
  }
  else {
    piVar1 = param_2;
    *piVar1 = *piVar1 - param_1;
  }
  return;
}



bool FUN_0000_598e(int param_1,int param_2)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)(param_2 + param_1 * 0x20 + -0x54fe);
  return (0x80 >> (bVar1 & 7) & (uint)*(byte *)(((int)(uint)bVar1 >> 3) + 0x6a14)) != 0;
}



void FUN_0000_59d4(int param_1,int param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  if ((((param_2 < 8) || (0xb7 < param_2)) || (param_1 < 8)) || (0xb7 < param_1)) {
    *(undefined2 *)0x5878 = 0xffff;
    *(undefined2 *)0x5876 = 0xffff;
  }
  else {
    uVar1 = (int)(param_2 - 8U) >> 0xf;
    *(int *)0x5876 = ((int)((param_2 - 8U ^ uVar1) - uVar1) >> 4 ^ uVar1) - uVar1;
    uVar1 = (int)(param_1 - 8U) >> 0xf;
    *(int *)0x5878 = ((int)((param_1 - 8U ^ uVar1) - uVar1) >> 4 ^ uVar1) - uVar1;
  }
  return;
}



void __cdecl16near FUN_0000_5a2c(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  undefined2 *local_c;
  int local_a;
  uint local_4;
  
  local_4 = 0;
  if (*(char *)0x585b != '\0') {
    pcVar2 = (char *)0x55b3;
    pcVar3 = (char *)((int)FUN_0000_55be + 7);
    local_a = 0x55b8;
    local_c = (undefined2 *)0x55ba;
    do {
      if ((*pcVar2 != 'D') && (*pcVar3 == ',')) {
        iVar1 = FUN_0000_3ab2(7,0);
        if (iVar1 == 7) {
          FUN_0000_5934(*local_c,1,local_a);
          *(undefined *)0xa9fa = 1;
        }
      }
      pcVar2 = pcVar2 + 0x20;
      pcVar3 = pcVar3 + 0x20;
      local_a = local_a + 0x20;
      local_c = local_c + 0x10;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)0x585b);
  }
  return;
}



undefined2 FUN_0000_5aa0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined local_6;
  
  uVar1 = param_1 - 0x31;
  FUN_0000_3270(0xa396);
  if (param_1 == 0x30) {
    FUN_0000_3270(0xa3a8);
    *(undefined *)0x587b = 0xff;
  }
  else {
    if (((*(byte *)0x585b <= uVar1) || (iVar2 = uVar1 * 0x20, *(char *)(iVar2 + 0x55b3) == 'D')) ||
       (*(char *)(iVar2 + 0x55b3) == 'S')) {
      FUN_0000_3270(0xa3b0);
      return 1;
    }
    local_6 = (undefined)uVar1;
    *(undefined *)0x587b = local_6;
    FUN_0000_3270(iVar2 + 0x55a8);
    FUN_0000_30da(10);
  }
  FUN_0000_4320();
  return 0;
}



void __cdecl16near FUN_0000_5b22(void)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  undefined2 uVar6;
  undefined2 uVar7;
  byte *local_1e;
  char *local_1c;
  int local_12;
  int local_e;
  int local_c;
  uint local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  local_e = 0;
  local_4 = 0x33;
  if (*(byte *)0x5893 < 0x80) {
    local_8 = (uint)*(byte *)0x5896;
    local_a = (uint)*(byte *)0x5897;
  }
  else {
    local_a = 5;
    local_8 = 5;
  }
  local_c = local_8 - 5;
  local_12 = 0;
  if (local_c < (int)(local_8 + 6)) {
    do {
      if ((int)(local_a - 5) < (int)(local_a + 6)) {
        local_1c = (char *)(local_12 + -0x54fe);
        local_1e = (byte *)(local_12 + -0x539c);
        iVar5 = local_a - 5;
        do {
          local_6 = (iVar5 - local_a) * (iVar5 - local_a) +
                    (local_c - local_8) * (local_c - local_8);
          if (local_6 < local_4) {
            pbVar3 = (byte *)FUN_0000_5e22(iVar5,local_c);
            bVar2 = *pbVar3;
            if ((bVar2 & 0xfe) == 0xfa) {
              local_e = 1;
            }
            else if ((bVar2 & 0xfc) == 0xd4) {
              local_e = 2;
            }
            else if ((bVar2 & 0xfc) == 0xd8) {
              local_e = 3;
            }
            else if ((*local_1c == '\0') && ((*local_1e & 0xfc) == 0x5c)) {
              local_e = 4;
            }
            else {
              local_6 = local_4;
            }
            local_4 = local_6;
          }
          iVar5 = iVar5 + 1;
          local_1c = local_1c + 0x20;
          local_1e = local_1e + 0x10;
        } while (iVar5 < (int)(local_a + 6));
      }
      local_c = local_c + 1;
      local_12 = local_12 + 1;
    } while (local_c != local_8 + 6);
  }
  if (local_e == 1) {
    if ((*(char *)0x5884 == '\0') || ((*(char *)0x6a34 != '\0' && (*(char *)0x6a34 != '\x04')))) {
      if (*(char *)0x6a34 == '\0') {
        uVar4 = 3000;
      }
      else {
        if (*(char *)0x6a34 != '\x04') goto LAB_0000_5d2e;
        uVar4 = 2000;
      }
      FUN_0000_3ce0(3,uVar4);
    }
    else {
      FUN_0000_3bb2((int)&DAT_0000_fff6,20000,2000,1,0xc2c);
    }
  }
  else {
    if (local_e == 2) {
      uVar7 = 0x14;
      uVar6 = 0x3c;
      uVar4 = 10000;
    }
    else {
      if (local_e != 3) {
        if (local_e == 4) {
          bVar2 = *(byte *)(*(byte *)0x6a08 + 0x6a48);
          if (bVar2 != 0) {
            FUN_0000_3bb2((int)&DAT_0000_fff6,20000,2000,1,*(undefined2 *)((uint)bVar2 * 2 + 0x6a34)
                         );
          }
          pcVar1 = (char *)0x6a08;
          *pcVar1 = *pcVar1 + '\x01';
          if (0x34 < *(byte *)0x6a08) {
            *(undefined *)0x6a08 = 0;
          }
        }
        goto LAB_0000_5d2e;
      }
      uVar7 = 10;
      uVar6 = 0x1e;
      uVar4 = 25000;
    }
    FUN_0000_3c5c(uVar4,uVar6,uVar7);
  }
LAB_0000_5d2e:
  if ((*(char *)0x5884 != '\0') && ((*(char *)0x6a34 == '\0' || (*(char *)0x6a34 == '\x04')))) {
    pcVar1 = (char *)0x5884;
    *pcVar1 = *pcVar1 + -1;
  }
  pcVar1 = (char *)0x6a34;
  *pcVar1 = *pcVar1 + '\x01';
  if (7 < *(byte *)0x6a34) {
    *(undefined *)0x6a34 = 0;
  }
  return;
}



void __cdecl16near FUN_0000_5d88(void)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    FUN_0000_3bb2(6,300,0x2a30,1,(int)&DAT_0000_11f8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0000_3bb2(3,300,0x5460,1,(int)&DAT_0000_17d4);
  return;
}



void FUN_0000_5dce(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_3 = param_3 - param_4;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + param_2) {
    FUN_0000_3d02(param_4);
    FUN_0000_3ae8(param_2,1);
    param_4 = param_4 + (param_3 * param_2) / param_1;
  }
  FUN_0000_3d2e();
  return;
}



int FUN_0000_5e22(uint param_1,uint param_2)

{
  undefined2 unaff_DS;
  byte local_6;
  int local_4;
  
  if (*(byte *)0x5893 < 0x80) {
    if (*(char *)0x5893 == '\0') {
      param_2 = param_2 - *(byte *)0x589b & 0x1f;
      param_1 = param_1 - *(byte *)0x589c & 0x1f;
      local_6 = 0;
      if (0xf < param_1) {
        local_6 = 2;
        param_1 = param_1 - 0x10;
      }
      if (0xf < param_2) {
        local_6 = local_6 + 1;
        param_2 = param_2 - 0x10;
      }
      local_4 = (int)FUN_0000_6608 + (uint)local_6 * 0x100 + param_1 * 0x10 + param_2;
    }
    else if (((((int)param_2 < 0) || ((int)param_1 < 0)) || (0x1f < (int)param_2)) ||
            (0x1f < (int)param_1)) {
      local_4 = 0x6a07;
    }
    else {
      local_4 = (int)FUN_0000_6608 + param_1 * 0x20 + param_2;
    }
  }
  else {
    local_4 = param_1 * 0x20 + param_2 + -0x52ec;
  }
  return local_4;
}



void __cdecl16near FUN_0000_5ed8(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0xd4;
  do {
    pcVar1 = (char *)(iVar3 + -0x4ee2);
    *pcVar1 = *pcVar1 + '\x01';
    if (*(char *)(iVar3 + -0x4ee2) == -0x28) {
      *(undefined *)(iVar3 + -0x4ee2) = 0xd4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd8);
  iVar3 = 0xd8;
  do {
    pcVar1 = (char *)(iVar3 + -0x4ee2);
    *pcVar1 = *pcVar1 + '\x01';
    if (*(char *)(iVar3 + -0x4ee2) == -0x24) {
      *(undefined *)(iVar3 + -0x4ee2) = 0xd8;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xdc);
  if ((*(byte *)0x6a7e & 1) != 0) {
    iVar3 = 0x80;
    do {
      pbVar2 = (byte *)(iVar3 + -0x4ee2);
      *pbVar2 = *pbVar2 ^ 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x84);
    iVar3 = 0xec;
    do {
      pcVar1 = (char *)(iVar3 + -0x4ee2);
      *pcVar1 = *pcVar1 + '\x01';
      if (*(char *)(iVar3 + -0x4ee2) == -0x10) {
        *(undefined *)(iVar3 + -0x4ee2) = 0xec;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xf0);
    if ((*(byte *)0x6a7e & 2) != 0) {
      iVar3 = 0xfa;
      do {
        pbVar2 = (byte *)(iVar3 + -0x4ee2);
        *pbVar2 = *pbVar2 ^ 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0xfe);
    }
  }
  pcVar1 = (char *)0x6a7e;
  *pcVar1 = *pcVar1 + '\x01';
  return;
}


/*
Unable to decompile 'FUN_0000_5f72'
Cause: Exception while decompiling 0000:5f72: Decompiler process died

*/


undefined2 FUN_0000_6122(int param_1)

{
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0;
  if ((*(char *)(param_1 + 0x5840) == *(char *)0x5893) &&
     (*(char *)(param_1 + 0x5848) == *(char *)0x5895)) {
    if (*(char *)0x5893 == '\0') {
      if (0x1f < (byte)(*(char *)(param_1 + 0x5830) - *(char *)0x589b)) {
        return 0;
      }
      if (0x1f < (byte)(*(char *)(param_1 + 0x5838) - *(char *)0x589c)) {
        return 0;
      }
    }
    local_4 = 1;
  }
  return local_4;
}



void __cdecl16near FUN_0000_617a(void)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  cVar3 = -0x24;
  if ((*(byte *)0x587f < 0x14) && (4 < *(byte *)0x587f)) {
    FUN_0000_5956(1,0x5887);
    if (*(char *)0x5887 == '\0') {
      cVar3 = '\x05';
    }
  }
  else {
    FUN_0000_5910(0x10,1,0x5887);
  }
  iVar6 = 0;
  do {
    iVar4 = FUN_0000_6122(iVar6);
    if (iVar4 != 0) {
      pcVar5 = (char *)FUN_0000_5e22(*(undefined *)(iVar6 + 0x5838),*(undefined *)(iVar6 + 0x5830));
      cVar2 = *pcVar5;
      *pcVar5 = cVar3;
      pbVar1 = (byte *)0x24e6;
      *pbVar1 = *pbVar1 | 2;
      if (cVar2 != cVar3) {
        FUN_0000_786a();
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  return;
}



undefined2 FUN_0000_6214(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_BP;
  undefined2 unaff_DS;
  undefined2 in_stack_0000fffc;
  
  if (*(char *)(param_1 + 0x5840) == -1) {
    uVar2 = 0;
  }
  else {
    if (*(char *)0x5893 == '\0') {
      FUN_0000_3f3e(1);
      do {
        iVar3 = FUN_0000_3094(0xa3ba);
      } while (iVar3 == 0);
      uVar2 = FUN_0000_9442(in_stack_0000fffc,unaff_BP);
      FUN_0000_3ff8(0x100,0x5c5a,uVar2);
    }
    bVar1 = *(byte *)0x5893;
    *(undefined *)0x5893 = *(undefined *)(param_1 + 0x5840);
    *(undefined *)0x5896 = *(undefined *)(param_1 + 0x5830);
    *(undefined *)0x5897 = *(undefined *)(param_1 + 0x5838);
    *(undefined *)0x5895 = *(undefined *)(param_1 + 0x5848);
    if ((((*(char *)0x5893 == '\0') || (bVar1 == 0)) || (0x20 < *(byte *)0x5893)) || (0x20 < bVar1))
    {
      if ((*(char *)0x5893 == '\0') && (bVar1 == 0)) {
        FUN_0000_9442();
        FUN_0000_3f8e(0,0x100);
        FUN_0000_959e();
      }
    }
    else {
      FUN_0000_9466(1);
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_0000_62c8(void)

{
  char *pcVar1;
  byte *pbVar2;
  undefined uVar3;
  byte bVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined2 unaff_DS;
  undefined2 local_8;
  
  local_8 = 0;
  pcVar5 = (char *)FUN_0000_5e22(*(undefined *)0x5897,*(undefined *)0x5896);
  if (*pcVar5 == -0x24) {
    FUN_0000_5506(1);
    FUN_0000_3bb2(2,2000,(int)&DAT_0000_7530,1,(int)&DAT_0000_170c);
    uVar3 = *(undefined *)0x587c;
    *(undefined *)0x587c = 0x16;
    FUN_0000_2a88(5,5,0xdc);
    *(undefined *)0x587c = 0;
    FUN_0000_5506(1);
    *(undefined *)0x5887 = 0xf;
    do {
      FUN_0000_2b32(5,5,*(undefined *)0x5887);
      FUN_0000_3b1a(2);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 != '\0');
    puVar6 = (undefined *)FUN_0000_5e22(*(undefined *)0x5897,*(undefined *)0x5896);
    *puVar6 = 5;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    FUN_0000_2b00(5,5,5);
    if ((*(char *)0x587f == '\0') && (*(byte *)0x5881 < 10)) {
      local_8 = 1;
    }
    else {
      if (*(byte *)0x587f < 0xc) {
        bVar4 = *(byte *)0x5885;
      }
      else {
        bVar4 = *(byte *)0x5886;
      }
      FUN_0000_6214(bVar4 - 0x30);
    }
    *(undefined *)0x587c = uVar3;
  }
  return local_8;
}



uint __cdecl16near FUN_0000_63a8(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined2 unaff_DS;
  uint local_a;
  int local_8;
  
  local_a = 0xffff;
  if (*(byte *)0x5893 < 0x81) {
    if (*(char *)0x587b == -1) {
      local_8 = 0;
      uVar3 = (uint)*(byte *)0x585b;
      if (uVar3 != 0) {
        pcVar5 = (char *)0x55b3;
        uVar6 = 0;
        local_8 = 0;
        do {
          if ((*pcVar5 == 'G') || (*pcVar5 == 'P')) {
            local_8 = local_8 + 1;
            local_a = uVar6;
          }
          pcVar5 = pcVar5 + 0x20;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
      if (1 < local_8) {
        bVar1 = false;
        do {
          FUN_0000_3270(0xa3c4);
          local_a = FUN_0000_48ae();
          if ((int)local_a < 0) {
LAB_0000_6432:
            bVar1 = true;
          }
          else {
            if ((*(char *)(local_a * 0x20 + 0x55b3) == 'G') ||
               (*(char *)(local_a * 0x20 + 0x55b3) == 'P')) {
              FUN_0000_3270(local_a * 0x20 + 0x55a8);
              iVar4 = FUN_0000_3932();
              if (iVar4 != 0) {
                FUN_0000_30da(10);
              }
              goto LAB_0000_6432;
            }
            FUN_0000_3270(0xa3ce);
          }
        } while (!bVar1);
      }
      goto LAB_0000_647f;
    }
    bVar2 = *(byte *)0x587b;
  }
  else {
    bVar2 = *(byte *)((uint)*(byte *)0x589e * 8 + -0x45e9);
  }
  local_a = (uint)bVar2;
LAB_0000_647f:
  if (local_a == 0xffff) {
    FUN_0000_3270(0xa3da);
  }
  else if (local_a == 0xfffe) {
    FUN_0000_30da(10);
  }
  return local_a;
}



void __cdecl16near FUN_0000_64a4(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 uVar6;
  undefined2 local_12 [6];
  undefined local_6;
  int local_4;
  
  if (*(byte *)0x5893 < 0x21) {
    puVar5 = local_12;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = (int)&LAB_0000_2020;
    }
    local_6 = 0;
    uVar1 = *(undefined2 *)0x5386;
    FUN_0000_35b4(0);
    FUN_0000_36be(1);
    iVar4 = *(byte *)0x587f - 0x11;
    iVar3 = -iVar4;
    if ((iVar3 < 0xc) && (iVar4 < 1)) {
      *(undefined *)((int)local_12 + iVar3) = 0x2a;
    }
    *(undefined *)0x5885 = *(undefined *)((uint)*(byte *)0x587e * 2 + 0x1ed8);
    local_4 = -(*(byte *)0x587f - 8);
    if (local_4 < -0xc) {
      local_4 = local_4 + 0x18;
    }
    if ((local_4 < 0xc) && (-1 < local_4)) {
      *(undefined *)((int)local_12 + local_4) = *(undefined *)0x5885;
    }
    *(undefined *)0x5886 = *(undefined *)((uint)*(byte *)0x587e * 2 + 0x1ed9);
    local_4 = -(*(byte *)0x587f - 2);
    if (local_4 < -0xc) {
      local_4 = local_4 + 0x18;
    }
    if ((local_4 < 0xc) && (-1 < local_4)) {
      *(undefined *)((int)local_12 + local_4) = *(undefined *)0x5886;
    }
    FUN_0000_3612(0,6);
    if ((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) {
      FUN_0000_2490(*(undefined2 *)0x13b2);
      FUN_0000_24c6(6,0x98,0,0x28);
      FUN_0000_2490(*(undefined2 *)0x13b0);
      FUN_0000_2530(7,0x98,7,0x28);
    }
    else {
      for (iVar4 = 0; *(char *)((int)local_12 + iVar4) != '\0'; iVar4 = iVar4 + 1) {
        if (*(char *)((int)local_12 + iVar4) == '*') {
          uVar6 = *(undefined2 *)0x13b8;
        }
        else {
          uVar6 = *(undefined2 *)0x13ba;
        }
        FUN_0000_36ea(uVar6);
        FUN_0000_30da(*(undefined *)((int)local_12 + iVar4));
      }
      FUN_0000_36ea(*(undefined2 *)0x13b0);
    }
    FUN_0000_35b4(uVar1);
    FUN_0000_36be(0);
  }
  return;
}



void __cdecl16near FUN_0000_6608(void)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)0x5386;
  FUN_0000_35b4(0,uVar1);
  if ((*(char *)0x5893 != '\x19') && (*(byte *)0x5895 < 0x80)) {
    FUN_0000_3612(0,5);
    FUN_0000_664a();
    FUN_0000_3270(0xa3e2);
    FUN_0000_66ee();
  }
  FUN_0000_35b4(uVar1);
  return;
}



void __cdecl16near FUN_0000_664a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x5386 * 8;
  iVar2 = FUN_0000_3932();
  iVar4 = ((uint)*(byte *)(iVar1 + 0x535e) + iVar2) * 8;
  iVar2 = FUN_0000_370e();
  iVar2 = ((uint)*(byte *)(iVar1 + 0x535f) + iVar2) * 8;
  uVar3 = (uint)*(byte *)(iVar1 + 0x5364);
  FUN_0000_36ea(*(undefined2 *)0x13b2);
  FUN_0000_3946(0);
  FUN_0000_30da(2);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_2530(iVar2 + 3,iVar4 + 5,iVar2,iVar4);
  FUN_0000_2530(iVar2 + 7,iVar4,iVar2 + 4,iVar4 + 5);
  FUN_0000_36ea(uVar3 & 0xf);
  FUN_0000_3946((int)uVar3 >> 4);
  return;
}



void __cdecl16near FUN_0000_66ee(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x5386 * 8;
  iVar2 = FUN_0000_3932();
  iVar4 = ((uint)*(byte *)(iVar1 + 0x535e) + iVar2) * 8;
  iVar2 = FUN_0000_370e();
  iVar2 = ((uint)*(byte *)(iVar1 + 0x535f) + iVar2) * 8;
  uVar3 = (uint)*(byte *)(iVar1 + 0x5364);
  FUN_0000_36ea(*(undefined2 *)0x13b2);
  FUN_0000_3946(0);
  FUN_0000_30da(1);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  iVar1 = iVar4 + 2;
  iVar4 = iVar4 + 7;
  FUN_0000_2530(iVar2 + 3,iVar1,iVar2,iVar4);
  FUN_0000_2530(iVar2 + 7,iVar4,iVar2 + 4,iVar1);
  FUN_0000_36ea(uVar3 & 0xf);
  FUN_0000_3946((int)uVar3 >> 4);
  return;
}



int FUN_0000_6796(uint param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  while ((*(char *)(iVar1 + param_2) != '\0' && (*(byte *)(iVar1 + param_2) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



void FUN_0000_680a(undefined2 param_1)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)0x5386;
  FUN_0000_35b4(0,uVar1);
  FUN_0000_3612(10,0x1e);
  FUN_0000_664a();
  FUN_0000_30da(param_1);
  FUN_0000_66ee();
  FUN_0000_35b4(uVar1);
  return;
}



void __cdecl16near FUN_0000_6840(void)

{
  undefined2 unaff_DS;
  
  FUN_0000_2490(*(undefined2 *)0x13b2);
  FUN_0000_24c6(6,0x137,0,0xc0);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_26bc(0x137,7,0xc0);
  return;
}



void FUN_0000_6870(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar2 = FUN_0000_3b8c(param_1);
  iVar2 = iVar2 / 2 + -0x1e;
  iVar3 = -iVar2;
  iVar4 = FUN_0000_3b8c(param_1);
  FUN_0000_2490(*(undefined2 *)0x13b2);
  iVar2 = iVar2 * -8;
  FUN_0000_24c6(6,iVar2,0,0xc0);
  iVar4 = (iVar4 + iVar3 + 2) * 8;
  FUN_0000_24c6(6,0x137,0,iVar4);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_26bc(iVar2,7,0xc0);
  FUN_0000_26bc(0x137,7,iVar4);
  uVar1 = *(undefined2 *)0x5386;
  FUN_0000_35b4(0);
  FUN_0000_3612(0,iVar3);
  FUN_0000_664a();
  FUN_0000_3270(param_1);
  FUN_0000_66ee();
  FUN_0000_35b4(uVar1);
  return;
}



void __cdecl16near FUN_0000_695c(void)

{
  undefined2 unaff_DS;
  
  FUN_0000_2490(*(undefined2 *)0x13b2);
  FUN_0000_24c6(0x3e,0x138,0x39,0xbf);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_26bc(0x137,0x38,0xc0);
  FUN_0000_26bc(0x137,0x3f,0xc0);
  return;
}



void FUN_0000_699c(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined2 unaff_DS;
  int local_6;
  undefined local_4;
  
  if (param_1 != 0) {
    if ((*(char *)0x587a == 'Q') && (param_1 = param_1 >> 1, param_1 == 0)) {
      param_1 = 1;
    }
    *(undefined *)0x5880 = *(undefined *)0x587f;
    if (*(char *)0x587a != 'T') {
      pcVar1 = (char *)0x5881;
      *pcVar1 = *pcVar1 + (char)param_1;
      FUN_0000_5956(param_1,0x58a7);
      FUN_0000_5956(param_1,0x58a6);
    }
    if (0x3b < *(byte *)0x5881) {
      pcVar1 = (char *)0x5881;
      *pcVar1 = *pcVar1 + -0x3c;
      FUN_0000_5956(1,0x588c);
      pcVar1 = (char *)0x587f;
      *pcVar1 = *pcVar1 + '\x01';
      if (0x17 < *(byte *)0x587f) {
        *(undefined *)0x587f = 0;
        local_6 = 0;
        do {
          if (*(byte *)(local_6 + 0x58c8) < 0x80) {
            do {
              uVar5 = FUN_0000_3ab2(8,1);
              if (*(byte *)0x5893 == uVar5) {
                uVar5 = 0;
              }
              iVar6 = 0;
              do {
                if (*(byte *)(iVar6 + 0x58c8) == uVar5) {
                  uVar5 = 0;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 3);
            } while (uVar5 == 0);
            local_4 = (undefined)uVar5;
            *(undefined *)(local_6 + 0x58c8) = local_4;
          }
          local_6 = local_6 + 1;
        } while (local_6 < 3);
        pcVar1 = (char *)0x587e;
        *pcVar1 = *pcVar1 + '\x01';
        if (0x1c < *(byte *)0x587e) {
          *(undefined *)0x585a = 0;
          *(undefined *)0x5859 = 0;
          *(undefined *)0x5858 = 0;
          *(undefined *)0x57b2 = 0;
          *(undefined *)0x587e = 1;
          *(undefined *)0x5959 = 0;
          pbVar7 = (byte *)((int)FUN_0000_55be + 1);
          do {
            if (*pbVar7 < 0x19) {
              pbVar2 = pbVar7;
              *pbVar2 = *pbVar2 + 1;
            }
            pbVar7 = pbVar7 + 0x20;
          } while (pbVar7 < (byte *)0x57bf);
          pcVar1 = (char *)0x587d;
          *pcVar1 = *pcVar1 + '\x01';
          if (0xd < *(byte *)0x587d) {
            *(undefined *)0x587d = 1;
            piVar3 = (int *)0x5874;
            *piVar3 = *piVar3 + 1;
          }
        }
        FUN_0000_4320();
      }
    }
  }
  if (0x32 < *(byte *)0x58a5) goto LAB_0000_6b6a;
  cVar4 = *(char *)0x58a5;
  if ((((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) || (*(byte *)0x587f < 5)) ||
     (0x13 < *(byte *)0x587f)) {
    *(undefined *)0x58a5 = 2;
  }
  else {
    if (*(char *)0x587f == '\x05') {
      uVar5 = (uint)*(byte *)0x5881;
    }
    else {
      if (*(char *)0x587f != '\x13') {
        *(undefined *)0x58a5 = 0x32;
        goto LAB_0000_6b35;
      }
      uVar5 = -(*(byte *)0x5881 - 0x3b);
    }
    *(undefined *)0x58a5 = *(undefined *)(uVar5 / 10 + 0x6a80);
  }
LAB_0000_6b35:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(undefined *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(undefined *)0x58a5 = 10;
  }
  if (cVar4 != *(char *)0x58a5) {
    *(undefined *)0x24e6 = 1;
  }
LAB_0000_6b6a:
  if (*(char *)0x587f != *(char *)0x5880) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      FUN_0000_64a4();
    }
    if (*(char *)0x587f == '\0') {
      *(undefined *)0x5884 = 0xc;
    }
    else {
      if (*(byte *)0x587f < 0xd) {
        cVar4 = *(char *)0x587f;
      }
      else {
        cVar4 = *(char *)0x587f + -0xc;
      }
      *(char *)0x5884 = cVar4;
    }
  }
  if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
    FUN_0000_8bca();
  }
  return;
}



undefined2 __cdecl16near FUN_0000_6bc0(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x587a == 'T') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0000_3ab2(3,0);
  }
  return uVar1;
}



void FUN_0000_6bd8(int param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  if ((param_1 != 0x1c) &&
     ((((param_1 < 0x12 || (0x15 < param_1)) && (param_1 < 0x40)) &&
      ((param_1 < 0x28 || (0x2b < param_1)))))) goto LAB_0000_6d90;
  pbVar1 = (byte *)FUN_0000_5e22(param_2,param_3);
  uVar2 = (uint)*pbVar1;
  if (uVar2 == 0xec) {
    return;
  }
  if (uVar2 == 10) {
    return;
  }
  if (uVar2 == 0x57) {
    *(undefined *)(param_5 + param_4 * 0x20 + -0x54fe) = 0x38;
    return;
  }
  if ((uVar2 == 0x6a) || (uVar2 == 0x6b)) {
    if (((byte)param_1 & 0xf0) == 0x80) {
      return;
    }
    if (((byte)param_1 & 0xfc) == 0x28) {
      return;
    }
    goto LAB_0000_6d90;
  }
  if (0x7f < param_1) goto LAB_0000_6d90;
  if (uVar2 == 0x92) {
    pcVar3 = (char *)FUN_0000_5e22(param_2 + 1,param_3);
    if ((*pcVar3 == -0x66) || (pcVar3 = (char *)FUN_0000_5e22(param_2 + 1,param_3), *pcVar3 == -100)
       ) {
      param_1 = FUN_0000_6bc0();
      param_1 = param_1 + 0x34;
    }
    else {
      param_1 = 0x32;
    }
    goto LAB_0000_6d90;
  }
  if (uVar2 < 0x93) {
    if (uVar2 == 0x84) {
      param_1 = FUN_0000_6bc0();
      param_1 = param_1 + 0x60;
      goto LAB_0000_6d90;
    }
    if (uVar2 == 0x85) {
      param_1 = FUN_0000_6bc0();
      param_1 = param_1 + 100;
      goto LAB_0000_6d90;
    }
    if (uVar2 == 0x90) {
      pcVar3 = (char *)FUN_0000_5e22(param_2 + -1,param_3);
      if ((*pcVar3 == -0x65) ||
         (pcVar3 = (char *)FUN_0000_5e22(param_2 + -1,param_3), *pcVar3 == -100)) {
        param_1 = FUN_0000_6bc0();
        param_1 = param_1 + 0x38;
      }
      else {
        param_1 = 0x30;
      }
      goto LAB_0000_6d90;
    }
    bVar4 = uVar2 == 0x91;
LAB_0000_6d4a:
    if (bVar4) {
      param_1 = (uVar2 & 3) + 0x30;
      goto LAB_0000_6d90;
    }
  }
  else {
    if (uVar2 < 0x9f) {
      if (0x9c < uVar2) {
        param_1 = FUN_0000_6bc0();
        param_1 = param_1 + 0x3c;
        goto LAB_0000_6d90;
      }
      bVar4 = uVar2 == 0x93;
      goto LAB_0000_6d4a;
    }
    if (uVar2 == 0xab) {
      param_1 = 0x1a;
      goto LAB_0000_6d90;
    }
    if (uVar2 == 200) {
      param_1 = 0x17;
      goto LAB_0000_6d90;
    }
    if (uVar2 == 0xc9) {
      param_1 = 0x18;
      goto LAB_0000_6d90;
    }
  }
  pcVar3 = (char *)FUN_0000_5e22(param_2 + -1,param_3);
  if ((*pcVar3 == -99) && (param_4 != 0)) {
    *(undefined *)(param_5 + param_4 * 0x20 + -0x551e) = 0x9e;
  }
LAB_0000_6d90:
  *(undefined *)(param_5 + param_4 * 0x10 + -0x539c) = (byte)param_1;
  *(undefined *)(param_5 + param_4 * 0x20 + -0x54fe) = 0;
  return;
}



void __cdecl16near FUN_0000_6db4(void)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined2 unaff_DS;
  byte *local_28;
  byte *local_26;
  undefined *local_24;
  char *local_22;
  undefined *local_20;
  undefined *local_1c;
  char *local_18;
  char *local_16;
  char *local_14;
  byte *local_12;
  byte *local_10;
  int local_e;
  byte local_a;
  byte local_8;
  
  if (*(byte *)0x5893 < 0x80) {
    *(undefined *)0x5c5c = *(undefined *)0x5896;
    *(undefined *)0x5c5d = *(undefined *)0x5897;
    *(undefined *)0x5c5e = *(undefined *)0x5895;
    uVar1 = *(undefined *)0x587c;
    *(undefined *)0x5c5a = uVar1;
    *(undefined *)0x5c5b = uVar1;
    local_e = 0;
    local_14 = (char *)0x0;
    do {
      iVar6 = 0;
      do {
        if ((*(char *)((int)local_14 + iVar6 + -0x54fe) == -0x23) &&
           (iVar4 = FUN_0000_8a10(local_e,iVar6), 5 < iVar4)) {
          *(undefined *)((int)local_14 + iVar6 + -0x54fe) = 0x1c;
        }
        else if ((*(char *)((int)local_14 + iVar6 + -0x54fe) == '\x1c') &&
                (iVar4 = FUN_0000_8a10(local_e,iVar6), iVar4 < 6)) {
          *(undefined *)((int)local_14 + iVar6 + -0x54fe) = 0xdd;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xb);
      local_14 = (char *)((int)local_14 + 0x20);
      local_e = local_e + 1;
    } while (local_e < 0xb);
  }
  local_14 = (char *)0x5d52;
  local_12 = (byte *)0x5d54;
  local_10 = (byte *)0x5d55;
  local_16 = "";
  local_18 = "\x064j";
  pbVar7 = (byte *)0x5d52;
  local_1c = (undefined *)0x5d53;
  pcVar8 = "\x064j";
  local_20 = (undefined *)0x5d53;
  local_22 = (char *)0x5d52;
  local_24 = (undefined *)0x5d53;
  local_26 = (byte *)0x5d53;
  local_28 = (byte *)0x5d53;
  do {
    if (*local_14 != '\0') {
      bVar2 = *local_12;
      bVar3 = *local_10;
      local_a = bVar3;
      local_8 = bVar2;
      if (*(byte *)0x5893 < 0x80) {
        local_8 = bVar2 - (*(char *)0x5896 + -5);
        local_a = bVar3 - (*(char *)0x5897 + -5);
        if (((*local_16 != *(char *)0x5895) || (10 < local_8)) || (10 < local_a))
        goto LAB_0000_7021;
      }
      if (((*local_18 != '\0') && (*(char *)((uint)local_a * 0x20 + (uint)local_8 + -0x54fe) != -1))
         && (*(char *)((uint)local_a * 0x20 + (uint)local_8 + -0x54fe) != -0x79)) {
        if ((((*pbVar7 & 0xfc) == 0xe8) || (*pbVar7 == 0x1e)) || (*pbVar7 == 0x1f)) {
          uVar5 = (uint)local_8;
          if (*(char *)((uint)local_a * 0x20 + uVar5 + -0x54fe) != '\0') {
            *(undefined *)((uint)local_a * 0x10 + uVar5 + -0x539c) = *local_1c;
            iVar6 = (uint)local_a * 0x20 + uVar5;
            goto LAB_0000_6f62;
          }
        }
        else if ((*pcVar8 == '\x1d') || (*pcVar8 == '\x1e')) {
          *(undefined *)((uint)local_a * 0x10 + (uint)local_8 + -0x539c) = *local_20;
          iVar6 = (uint)local_a * 0x20 + (uint)local_8;
LAB_0000_6f62:
          *(undefined *)(iVar6 + -0x54fe) = 0;
        }
        else {
          if (*local_22 == '\\') {
            uVar5 = (uint)local_8;
            if (*(char *)((uint)local_a * 0x20 + uVar5 + -0x54fe) == -0x6e) {
              *(undefined *)((uint)local_a * 0x10 + uVar5 + -0x539c) = *local_24;
              iVar6 = (uint)local_a * 0x20 + uVar5;
              goto LAB_0000_6f62;
            }
            uVar5 = *local_26 - 8;
          }
          else {
            uVar5 = (uint)*local_28;
          }
          FUN_0000_6bd8(uVar5,bVar3,bVar2,local_a,local_8);
        }
      }
    }
LAB_0000_7021:
    local_14 = local_14 + -8;
    local_12 = local_12 + -8;
    local_10 = local_10 + -8;
    local_16 = local_16 + -8;
    local_18 = local_18 + -8;
    pbVar7 = pbVar7 + -8;
    local_1c = local_1c + -8;
    pcVar8 = pcVar8 + -8;
    local_20 = local_20 + -8;
    local_22 = local_22 + -8;
    local_24 = local_24 + -8;
    local_26 = local_26 + -8;
    local_28 = local_28 + -8;
    if (local_28 < (byte *)0x5c5b) {
      return;
    }
  } while( true );
}



bool FUN_0000_7066(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  bVar1 = *(byte *)(param_1 * 8 + -0x45ea);
  uVar2 = (uint)*(byte *)(param_1 * 8 + -0x45e9);
  if ((bVar1 & 0x20) == 0) {
    if ((bVar1 & 0x80) == 0) {
      bVar3 = (bVar1 & 1) == 0;
    }
    else if ((uVar2 == 0) || (*(char *)(uVar2 * 0x20 + 0x55ac) != 'j')) {
      bVar3 = (bool)(bVar1 & 1);
    }
    else {
      bVar3 = true;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



void __cdecl16near FUN_0000_70cc(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_DS;
  bool bVar8;
  int local_18;
  int local_16;
  int local_12;
  int local_10;
  int local_c;
  int local_a;
  int local_8;
  
  iVar7 = 0;
  local_c = 0;
  local_10 = 0;
  do {
    iVar5 = 0;
    do {
      if (*(char *)(local_c + iVar5 + -0x54fe) == '\0') {
        if (*(char *)(local_10 + iVar5 + -0x539c) != '\x16') {
          uVar1 = CONCAT11(1,*(undefined *)(local_10 + iVar5 + -0x539c));
LAB_0000_713b:
          FUN_0000_2b00(iVar7,iVar5,uVar1);
        }
      }
      else {
        if (((*(char *)(local_c + iVar5 + -0x54fe) != -0x24) || (*(char *)0x5887 == '\0')) ||
           (0xf < *(byte *)0x5887)) {
          uVar1 = (uint)*(byte *)(*(byte *)(local_c + iVar5 + -0x54fe) + 0xb11e);
          goto LAB_0000_713b;
        }
        FUN_0000_2b32(iVar7,iVar5,*(undefined *)0x5887);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb);
    local_c = local_c + 0x20;
    local_10 = local_10 + 0x10;
    iVar7 = iVar7 + 1;
    if (10 < iVar7) {
      if (((0x7f < *(byte *)0x5893) &&
          (bVar8 = *(char *)0x589f == '\0', *(bool *)0x589f = bVar8, bVar8)) &&
         ((*(char *)0x589e != -1 && (iVar7 = FUN_0000_7066(*(undefined *)0x589e), iVar7 == 0)))) {
        iVar7 = (uint)*(byte *)0x589e * 8;
        iVar5 = (uint)*(byte *)(iVar7 + -0x45e6) * 0x10;
        iVar2 = iVar5 + 8;
        iVar7 = (uint)*(byte *)(iVar7 + -0x45e5) * 0x10;
        iVar3 = iVar7 + 8;
        FUN_0000_2490(*(undefined2 *)0x13b0);
        local_8 = 0;
        do {
          iVar6 = 0;
          do {
            FUN_0000_26bc(iVar5 + 0x17,iVar3 + local_8 + iVar6,iVar2);
            FUN_0000_2712(iVar7 + 0x17,iVar3,iVar2 + local_8 + iVar6);
            iVar6 = iVar6 + 0xe;
          } while (iVar6 < 0xf);
          local_8 = local_8 + 1;
        } while (local_8 < 2);
        if (*(char *)0x5898 != '\0') {
          iVar7 = (uint)*(byte *)0x5899 * 0x10;
          iVar5 = (uint)*(byte *)0x589a * 0x10;
          local_8 = 0;
          local_18 = iVar5 + 10;
          local_16 = iVar5 + 0xe;
          local_12 = iVar5 + 0xd;
          do {
            local_a = 0;
            iVar6 = iVar5 + local_8 + 0xf;
            iVar2 = iVar7 + 10;
            iVar3 = iVar7 + 0xe;
            local_c = iVar7 + 0xd;
            do {
              FUN_0000_2490(*(undefined2 *)0x13b0);
              FUN_0000_2530(local_16,iVar3,local_16,iVar2);
              FUN_0000_29b0(local_18,iVar3);
              FUN_0000_2490(0);
              FUN_0000_2530(local_12,local_c,local_12,iVar2);
              FUN_0000_29b0(local_18,local_c);
              FUN_0000_2530(iVar6,iVar3,iVar6,iVar2);
              iVar4 = iVar7 + local_a + 0xf;
              FUN_0000_2530(local_18,iVar4,local_16,iVar4);
              iVar2 = iVar2 + 0xb;
              iVar3 = iVar3 + 3;
              local_c = local_c + 5;
              local_a = local_a + 1;
            } while (local_a < 2);
            local_18 = local_18 + 0xb;
            local_16 = local_16 + 3;
            local_12 = local_12 + 5;
            local_8 = local_8 + 1;
          } while (local_8 < 2);
        }
      }
      return;
    }
  } while( true );
}



void __cdecl16near FUN_0000_7330(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  int local_c;
  uint local_6;
  
  *(undefined *)0x545e = 0xff;
  if (*(char *)0x587a == 'T') {
    *(undefined *)0x5891 = 0;
  }
  if (*(char *)0x58a4 != '\0') {
    if (*(char *)0x5891 != '\0') {
      if (*(char *)0x5891 != -1) {
        FUN_0000_5f72();
      }
      FUN_0000_4982();
      if (*(byte *)0x5893 < 0x80) {
        FUN_0000_617a();
        FUN_0000_8ac6();
      }
    }
    if (*(byte *)0x5893 < 0x80) {
      if (*(char *)0x24e6 == '\0') {
        local_6 = 0;
        local_c = 0;
        do {
          uVar5 = 0;
          do {
            if (*(char *)(local_c + uVar5 + -0x54fe) == '\0') {
              puVar3 = (undefined *)
                       FUN_0000_5e22((local_6 & 0xff) + (uint)*(byte *)0x5897 + -5,
                                     (uVar5 & 0xff) + (uint)*(byte *)0x5896 + -5);
              *(undefined *)(local_c + uVar5 + -0x54fe) = *puVar3;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 0xb);
          local_c = local_c + 0x20;
          local_6 = local_6 + 1;
        } while ((int)local_6 < 0xb);
      }
      else {
        FUN_0000_772a(0xb,(uint)*(byte *)0x5897 - (uint)*(byte *)0x589c,
                      (uint)*(byte *)0x5896 - (uint)*(byte *)0x589b,*(undefined *)0x58a5);
        *(undefined *)0x24e6 = 0;
      }
    }
    else {
      puVar7 = (undefined2 *)0xab02;
      puVar6 = (undefined2 *)((int)FUN_0000_ad0e + 6);
      for (iVar4 = 0xb0; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = (undefined2 *)((int)puVar7 + 1);
        puVar1 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        *(undefined *)puVar2 = *(undefined *)puVar1;
      }
    }
    FUN_0000_6db4();
    FUN_0000_70cc();
    if (*(char *)0x5891 != '\0') {
      FUN_0000_5b22();
    }
  }
  *(undefined *)0x5891 = 1;
  return;
}


/*
Unable to decompile 'FUN_0000_7448'
Cause: Exception while decompiling 0000:7448: Decompiler process died

*/


void FUN_0000_772a(undefined2 param_1_00,int param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined *puVar8;
  undefined2 unaff_DS;
  int local_e;
  int local_c;
  
  puVar4 = (undefined *)0xab02;
  iVar7 = 0xb;
  do {
    puVar8 = puVar4;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      *puVar2 = 0xff;
    }
    puVar4 = puVar4 + 0x20;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (0 < param_3) {
    FUN_0000_7448(0xab02,0x20,0,(int)&DAT_0000_ff91,param_2 + -5,param_1 + -5,param_3);
    pcVar5 = (char *)0xab02;
    iVar7 = 0xb;
    do {
      iVar3 = 0xb;
      do {
        pcVar6 = pcVar5;
        if (*pcVar6 == '\0') {
          pcVar1 = pcVar6;
          *pcVar1 = *pcVar1 + -1;
        }
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar6 + 1;
      } while (iVar3 != 0);
      pcVar5 = pcVar6 + 0x16;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (param_3 < 0) {
    local_c = 0;
    local_e = 0;
    do {
      iVar7 = 0;
      do {
        puVar4 = (undefined *)
                 FUN_0000_5e22((uint)*(byte *)0x589c + param_1 + -5 + local_c,
                               param_2 + -5 + iVar7 + (uint)*(byte *)0x589b);
        *(undefined *)(local_e + iVar7 + -0x54fe) = *puVar4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0xb);
      local_e = local_e + 0x20;
      local_c = local_c + 1;
    } while (local_c < 0xb);
  }
  return;
}



bool FUN_0000_781e(int param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((((param_2 == 'K') || (param_2 == 'J')) || (param_2 == -0x46)) ||
     ((param_2 == -0x45 || (param_2 == -0x68)))) {
    bVar2 = param_1 == 1;
  }
  else {
    iVar1 = FUN_0000_1e22(0x6a86,param_2,0x13);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



void __cdecl16near FUN_0000_786a(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined2 unaff_DS;
  int local_90;
  int aiStack_8e [64];
  int local_e;
  int local_c;
  undefined2 local_a;
  int local_8;
  int local_6;
  undefined *local_4;
  
  local_90 = 0;
  local_4 = (undefined *)((int)FUN_0000_ad0e + 6);
  puVar4 = (undefined *)((int)FUN_0000_ad0e + 6);
  for (iVar6 = 0x400; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = 0xff;
  }
  local_8 = 0;
  do {
    iVar6 = 0;
    do {
      puVar4 = (undefined *)
               FUN_0000_5e22(local_8 + (uint)*(byte *)0x589c,(uint)*(byte *)0x589b + iVar6);
      uVar3 = *puVar4;
      iVar5 = FUN_0000_1e22(0x6a9a,uVar3,10);
      if (iVar5 != 0) {
        aiStack_8e[local_90] = local_8;
        aiStack_8e[local_90 + 1] = iVar6;
        local_90 = local_90 + 2;
        *local_4 = uVar3;
      }
      local_4 = local_4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x20);
    local_8 = local_8 + 1;
    local_6 = iVar6;
  } while (local_8 < 0x20);
  local_6 = local_90;
  local_8 = 0;
  if (0 < local_90) {
    local_a = 0xb;
    do {
      local_e = aiStack_8e[local_8] + -5;
      local_8 = local_8 + 1;
      local_c = aiStack_8e[local_8] + -5;
      puVar4 = (undefined *)0xab02;
      iVar6 = 0xb;
      do {
        puVar8 = puVar4;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = 0xff;
        }
        puVar4 = puVar4 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FUN_0000_7448(0xad14,0x20,local_c,local_e,local_c,local_e,10);
      local_8 = local_8 + 1;
    } while (local_8 < local_6);
  }
  pcVar7 = (char *)((int)FUN_0000_ad0e + 6);
  iVar6 = 0x400;
  do {
    if (*pcVar7 == -1) {
      pcVar1 = pcVar7;
      *pcVar1 = *pcVar1 + '\x01';
    }
    pcVar7 = pcVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}



void FUN_0000_79a6(undefined2 param_1,int param_2,uint param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  *(undefined *)0x58a1 = (undefined)param_3;
  uVar1 = *(undefined *)0x5896;
  uVar2 = *(undefined *)0x5897;
  uVar3 = *(undefined *)0x5895;
  *(undefined *)0x5894 = *(undefined *)0x5893;
  bVar4 = *(byte *)0x587b;
  *(undefined *)0x5893 = 0xff;
  puVar8 = (undefined2 *)0xa9fc;
  puVar7 = (undefined2 *)0x5c5a;
  do {
    *puVar8 = *puVar7;
    puVar8[1] = puVar7[1];
    puVar8[2] = puVar7[2];
    puVar8[3] = puVar7[3];
    puVar8 = puVar8 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar7 < (undefined2 *)0x5d5a);
  if (param_3 == 0) {
    if ((*(byte *)(param_2 * 8 + 0x5c5a) & 0xfc) == 0x2c) {
      local_6 = 1;
    }
    else {
      local_6 = *(byte *)(param_2 * 8 + 0x5c5a) - 0x40 >> 2;
    }
    if (0x7f < *(byte *)(param_2 * 8 + 0x5c5f)) {
      local_6 = CONCAT11(local_6._1_1_ + '\x01',(undefined)local_6);
    }
    FUN_0000_85e2(local_6,1);
  }
  else if ((param_3 & 4) == 0) {
    if ((param_3 & 2) == 0) goto LAB_0000_7a8c;
    func_0x0000965e(2,0);
  }
  else {
    iVar6 = func_0x00009a96(param_1,param_2,param_3);
    if (iVar6 == 0) goto LAB_0000_7a8c;
  }
  *(undefined *)0x587b = 0xff;
  *(undefined *)0x589e = 0xff;
  *(undefined *)0x58a3 = 0;
  FUN_0000_9652();
LAB_0000_7a8c:
  if (*(char *)0xbb16 != '\0') {
    *(undefined *)0xbb16 = 0;
    FUN_0000_89dc(1);
  }
  *(undefined *)0x5896 = uVar1;
  *(undefined *)0x5897 = uVar2;
  *(undefined *)0x5895 = uVar3;
  *(undefined *)0x5893 = *(undefined *)0x5894;
  *(undefined *)0x24e6 = 1;
  FUN_0000_4320();
  cVar5 = *(char *)((uint)bVar4 * 0x20 + 0x55b3);
  if ((cVar5 == 'D') || (cVar5 == 'S')) {
    *(undefined *)0x587b = 0xff;
  }
  else {
    *(byte *)0x587b = bVar4;
  }
  puVar8 = (undefined2 *)0x5c5a;
  puVar7 = (undefined2 *)0xa9fc;
  do {
    *puVar8 = *puVar7;
    puVar8[1] = puVar7[1];
    puVar8[2] = puVar7[2];
    puVar8[3] = puVar7[3];
    puVar8 = puVar8 + 4;
    puVar7 = puVar7 + 4;
  } while (puVar7 < (undefined2 *)0xaafc);
  return;
}



void FUN_0000_7b0c(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_0000_3f8e(param_1 * 0x160,0x160,0xad14,0xa3f0);
  puVar5 = (undefined2 *)0x1724;
  puVar4 = (undefined2 *)0xad7f;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (undefined2 *)0x172c;
  puVar4 = (undefined2 *)0xad85;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (undefined2 *)0x1704;
  puVar4 = (undefined2 *)0xaddf;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (undefined2 *)0x1714;
  puVar4 = (undefined2 *)0xadff;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


/*
Unable to decompile 'FUN_0000_7b70'
Cause: Exception while decompiling 0000:7b70: Decompiler process died

*/


void FUN_0000_7d80(undefined2 param_1,undefined2 param_2)

{
  FUN_0000_7b0c(0);
  FUN_0000_79a6(param_1,param_2,4);
  FUN_0000_786a();
  return;
}



void __cdecl16near FUN_0000_7d9e(void)

{
  undefined2 unaff_DS;
  
  FUN_0000_2490(0);
  FUN_0000_24c6(199,0x13f,0,0);
  FUN_0000_2490(*(undefined2 *)0x13b2);
  FUN_0000_24c6(6,0x13f,0,0);
  FUN_0000_24c6(0xbf,0xbf,0xb9,0);
  FUN_0000_24c6(0xbf,6,0,0);
  FUN_0000_24c6(0xbf,0xbf,0,0xb9);
  FUN_0000_24c6(0x57,0x13f,0,0x139);
  FUN_0000_24c6(0x57,0x138,0x50,0xc0);
  FUN_0000_24c6(0x3f,0x138,0x39,0xc0);
  FUN_0000_36ea(*(undefined2 *)0x13b2);
  FUN_0000_3612(0,0);
  FUN_0000_30da(0x7b);
  FUN_0000_3612(0,0x27);
  FUN_0000_30da(0x7c);
  FUN_0000_3612(0x17,0);
  FUN_0000_30da(0x7d);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_2530(0xb8,7,7,7);
  FUN_0000_29b0(0xb8,0xb8);
  FUN_0000_29b0(7,0xb8);
  FUN_0000_29b0(7,7);
  FUN_0000_2530(0x57,0xbf,0xbf,0xbf);
  FUN_0000_29b0(0x57,0x13f);
  FUN_0000_2530(7,0x138,7,0xbf);
  FUN_0000_29b0(0x38,0x138);
  FUN_0000_29b0(0x38,0xbf);
  FUN_0000_29b0(7,0xbf);
  FUN_0000_2530(0x3f,0x138,0x3f,0xbf);
  FUN_0000_29b0(0x50,0x138);
  FUN_0000_29b0(0x50,0xbf);
  FUN_0000_29b0(0x3f,0xbf);
  FUN_0000_36ea(*(undefined2 *)0x13b0);
  return;
}



uint FUN_0000_7f26(undefined param_1,undefined param_2,undefined param_3,int param_4,int param_5)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined2 unaff_DS;
  char *local_22;
  char *local_20;
  undefined *local_1e;
  undefined *local_1c;
  undefined *local_1a;
  undefined *local_18;
  char *local_10;
  char *local_e;
  char *local_c;
  uint local_a;
  uint local_8;
  char *local_4;
  
  local_a = 0;
  local_8 = 0xffff;
  if (param_4 != 2) {
    if (param_4 == 0) {
      local_a = 6;
    }
    if (local_a < 0x20) {
      pcVar10 = (char *)(param_5 * 8 + 0x13bd);
      pcVar6 = (char *)(param_5 * 0x20 + 0x55b3);
      do {
        if (*(char *)(local_a * 8 + -0x45ea) == '\0') {
          iVar7 = local_a * 8;
          local_4 = (char *)(iVar7 + -0x45ec);
          if ((param_4 == 1) && (*pcVar6 != 'D')) {
            *(undefined *)(iVar7 + -0x45eb) = *(undefined *)(param_5 * 0x20 + 0x55b5);
            *(char *)(iVar7 + -0x45e7) = '$' - *(char *)(iVar7 + -0x45eb);
            *(undefined *)(iVar7 + -0x45ea) = 0x80;
            if ((*pcVar6 != 'G') && (*pcVar6 != 'P')) {
              pbVar1 = (byte *)(iVar7 + -0x45ea);
              *pbVar1 = *pbVar1 | 8;
            }
          }
          if (param_4 == 0) {
            *local_4 = *(char *)(param_5 * 8 + 0x13c1);
            cVar2 = FUN_0000_54ce(7);
            bVar3 = cVar2 + -4 + *pcVar10;
            *(byte *)(iVar7 + -0x45eb) = bVar3;
            if (0x1e < bVar3) {
              *(char *)(iVar7 + -0x45eb) = *pcVar10;
            }
            *(char *)(iVar7 + -0x45e7) = '$' - *(char *)(iVar7 + -0x45eb);
            *(undefined *)(iVar7 + -0x45ea) = 0x40;
            if ((param_5 == 8) || (param_5 == 9)) {
              *(undefined *)(iVar7 + -0x45ea) = 0x20;
            }
          }
          *(char *)(iVar7 + -0x45e9) = (char)param_5;
          *(undefined *)(iVar7 + -0x45e6) = param_3;
          *(undefined *)(iVar7 + -0x45e5) = param_2;
          local_8 = local_a;
          break;
        }
        local_a = local_a + 1;
      } while ((int)local_a < 0x20);
    }
  }
  if ((local_8 < 0x8000) || (param_4 == 2)) {
    uVar8 = 0;
    cVar2 = *local_4;
    cVar4 = (char)param_5 * '\x04' + '@';
    pcVar10 = (char *)0x5c5a;
    local_10 = (char *)0x5c5b;
    local_e = (char *)0x5c5b;
    local_c = (char *)0x5c5a;
    local_18 = (undefined *)0x5c5c;
    local_1a = (undefined *)0x5c5d;
    local_1c = (undefined *)0x5c5e;
    local_1e = (undefined *)0x5c61;
    local_20 = (char *)0x5c5f;
    local_22 = (char *)0x5c5f;
    do {
      if (*pcVar10 == '\0') {
        cVar5 = (char)uVar8;
        if (param_4 == 0) {
          local_4[4] = cVar5;
          *pcVar10 = cVar4;
          *local_10 = cVar4;
        }
        if (param_4 == 1) {
          local_4[4] = cVar5;
        }
        if (param_4 == 2) {
          *local_c = (char)param_5;
          *local_e = (char)param_5;
          local_8 = uVar8;
        }
        *local_18 = param_3;
        *local_1a = param_2;
        *local_1c = param_1;
        *local_1e = 0xff;
        if (param_4 == 0) {
          local_22 = local_20;
          param_5._0_1_ = cVar2;
        }
        *local_22 = (char)param_5;
        if (param_4 != 2) {
          local_4[4] = cVar5;
        }
        break;
      }
      pcVar10 = pcVar10 + 8;
      local_10 = local_10 + 8;
      local_e = local_e + 8;
      local_c = local_c + 8;
      local_18 = local_18 + 8;
      local_1a = local_1a + 8;
      local_1c = local_1c + 8;
      local_1e = local_1e + 8;
      local_20 = local_20 + 8;
      local_22 = local_22 + 8;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0x20);
    if (((param_4 == 2) || (uVar8 != 0x20)) || (0x7fff < local_8)) goto LAB_0000_8171;
  }
  local_8 = 0xffff;
LAB_0000_8171:
  if (-1 < (int)local_8) {
    pbVar9 = (byte *)0xba18;
    do {
      if (*(byte *)((uint)*pbVar9 * 8 + 0x5c61) == local_8) {
        *(undefined *)((uint)*pbVar9 * 8 + 0x5c61) = 0xff;
      }
      pbVar9 = pbVar9 + 8;
    } while (pbVar9 < (byte *)0xbb18);
  }
  return local_8;
}



void FUN_0000_81b4(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 8;
  if (((*(byte *)(param_1 + -0x45ea) & 0x80) != 0) && ((*(byte *)(param_1 + -0x45ea) & 0x28) == 0))
  {
    if (*(char *)((int)FUN_0000_55be + 7 + (uint)*(byte *)(param_1 + -0x45e9) * 0x20) == '*') {
      *(undefined *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c5b) = 0x1d;
      pbVar1 = (byte *)(param_1 + -0x45ea);
      *pbVar1 = *pbVar1 | 0x10;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + -0x45e9);
      if (*(char *)((int)FUN_0000_55be + 7 + uVar2 * 0x20) == ',') {
        FUN_0000_5a2c(uVar2);
      }
    }
  }
  return;
}



void FUN_0000_8220(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 8;
  if ((*(byte *)(param_1 + -0x45ea) & 8) != 0) {
    if ((*(byte *)(param_1 + -0x45ea) & 0x80) == 0) {
      *(undefined *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c60) = 0;
    }
    else {
      *(undefined *)((uint)*(byte *)(param_1 + -0x45e9) * 0x20 + 0x55b3) = 0x47;
      if ((*(byte *)(param_1 + -0x45ea) & 0x10) == 0) {
        iVar2 = (uint)*(byte *)(param_1 + -0x45e8) * 8;
        *(undefined *)(iVar2 + 0x5c5b) = *(undefined *)(iVar2 + 0x5c5a);
      }
      else {
        *(undefined *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c5b) = 0x1d;
      }
    }
    pbVar1 = (byte *)(param_1 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  FUN_0000_4320();
  return;
}



void FUN_0000_82a0(int param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) ||
     (*(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55b3) != 'P')) {
    FUN_0000_82ce(param_1);
  }
  return;
}



void FUN_0000_82ce(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  iVar2 = param_1 * 8;
  if ((*(byte *)(iVar2 + -0x45ea) & 0x80) == 0) {
    pbVar1 = (byte *)(iVar2 + -0x45ea);
    *pbVar1 = *pbVar1 | 8;
    *(undefined *)0x58a2 = 4;
    *(undefined *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c60) = 0xff;
  }
  else {
    pcVar3 = (char *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b3);
    if (*pcVar3 == 'D') {
      return;
    }
    *pcVar3 = 'S';
    pbVar1 = (byte *)(iVar2 + -0x45ea);
    *pbVar1 = *pbVar1 | 8;
    *(undefined *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c5b) = 0x1e;
    if (param_1 == *(byte *)0x587b) {
      *(undefined *)0x587b = 0xff;
    }
    *(undefined *)0x58a2 = 4;
    FUN_0000_4320();
    if ((*(byte *)0x58a1 & 4) != 0) {
      return;
    }
  }
  FUN_0000_7330();
  return;
}


/*
Unable to decompile 'FUN_0000_8356'
Cause: Exception while decompiling 0000:8356: Decompiler process died

*/


void FUN_0000_85e2(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined2 unaff_DS;
  int *local_36;
  int local_28 [15];
  int local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  bVar1 = (int)param_1 < 0x100;
  if (!bVar1) {
    param_1 = param_1 - 0x100;
  }
  local_8 = (uint)bVar1;
  *(undefined *)0x58a0 = 0;
  if ((param_2 & 4) == 0) {
    FUN_0000_8356();
  }
  iVar4 = 0;
  piVar5 = local_28;
  do {
    *piVar5 = iVar4;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  if ((param_2 & 4) != 0) {
    piVar5 = local_28;
    do {
      iVar4 = FUN_0000_3ab2(0xf,0);
      local_6 = *piVar5;
      *piVar5 = local_28[iVar4];
      local_28[iVar4] = local_6;
      piVar5 = piVar5 + 1;
    } while (piVar5 < &local_a);
  }
  FUN_0000_3270(0xa438);
  if ((((*(char *)0x5894 == '\0') || (0x20 < *(byte *)0x5894)) || (param_1 == 0xc)) ||
     (local_8 == 0)) {
    local_6 = (uint)*(byte *)(param_1 * 8 + 0x13c2);
  }
  else {
    local_6 = 1;
  }
  if (((local_6 != 8) && (local_6 != 0x10)) && (local_6 != 1)) {
    local_6 = FUN_0000_3ab2(local_6,1);
    if (*(char *)((int)FUN_0000_5956 + 3) != '\0') {
      local_6 = FUN_0000_3ab2(local_6,1);
    }
    FUN_0000_7330();
    if (0x19 < (int)local_6) {
      local_6 = 0x1a;
    }
  }
  FUN_0000_7f26(*(undefined *)0x5895,*(undefined *)(local_28[0] + 0x1714),
                *(undefined *)(local_28[0] + 0x1704),0,param_1);
  uVar3 = (int)local_6 >> 0xf;
  uVar2 = local_6 ^ uVar3;
  if (1 < (int)local_6) {
    local_36 = local_28;
    uVar6 = 1;
    do {
      local_36 = local_36 + 1;
      local_4 = param_1;
      if (((int)uVar6 < (int)((((int)(uVar2 - uVar3) >> 2 ^ uVar3) - uVar3) + 1)) &&
         (iVar4 = FUN_0000_54ce(8), iVar4 == 0)) {
        local_4 = (uint)*(byte *)(param_1 + 0x16d4);
      }
      iVar4 = *local_36;
      FUN_0000_7f26(*(undefined *)0x5895,*(undefined *)(iVar4 + 0x1714),
                    *(undefined *)(iVar4 + 0x1704),0,local_4);
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_6);
  }
  return;
}



undefined2 FUN_0000_87a2(uint param_1,uint param_2)

{
  undefined2 uVar1;
  
  if ((((param_2 < 0x8000) && ((int)param_2 < 0xb)) && (param_1 < 0x8000)) && ((int)param_1 < 0xb))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00008851)
// WARNING: Removing unreachable block (ram,0x0000882b)
// WARNING: Removing unreachable block (ram,0x00008805)
// WARNING: Removing unreachable block (ram,0x00008818)
// WARNING: Removing unreachable block (ram,0x0000883e)
// WARNING: Removing unreachable block (ram,0x00008864)

undefined2 FUN_0000_87c8(int param_1)

{
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0;
  if ((*(char *)0x5894 == '(') && (*(char *)((int)FUN_0000_55be + 4 + param_1 * 0x20) != '\x0f')) {
    local_6 = 0;
  }
  else if (*(char *)0x587a == 'P') {
    local_6 = 3;
  }
  return local_6;
}



undefined2 FUN_0000_8880(uint param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 1;
  pbVar2 = (byte *)((int)FUN_0000_55be + 3 + param_2 * 0x20);
  if ((((param_1 != *pbVar2) && (pbVar2 = (byte *)(param_2 * 0x20 + 0x55c2), param_1 != *pbVar2)) &&
      (pbVar2 = (byte *)(param_2 * 0x20 + 0x55c3), param_1 != *pbVar2)) &&
     (pbVar2 = (byte *)(param_2 * 0x20 + 0x55c4), param_1 != *pbVar2)) {
    pbVar2 = (byte *)(param_2 * 0x20 + 0x55c5);
    if (param_1 == *pbVar2) {
      *pbVar2 = 0xff;
      if (((param_1 == 0x2a) && (0x7f < *(byte *)0x5893)) && (*(byte *)0x589e < 0x20)) {
        pbVar1 = (byte *)((uint)*(byte *)0x589e * 8 + -0x45ea);
        *pbVar1 = *pbVar1 & 0xef;
      }
      goto LAB_0000_892e;
    }
    pbVar2 = (byte *)(param_2 * 0x20 + 0x55c6);
    if (param_1 != *pbVar2) {
      local_4 = 0;
      goto LAB_0000_892e;
    }
  }
  *pbVar2 = 0xff;
LAB_0000_892e:
  FUN_0000_87c8(param_2);
  return local_4;
}



int FUN_0000_893e(int param_1,undefined *param_2)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 unaff_DS;
  
  FUN_0000_89b0();
  *(undefined2 *)0x6aa4 = param_2;
  FUN_0000_89b0();
  piVar1 = (int *)0x6aa4;
  if (*piVar1 == param_1 || *piVar1 < param_1) {
    *(int *)0x6aa6 = param_1 - *(int *)0x6aa4;
    iVar6 = 0;
    do {
      iVar5 = *(int *)0x6aa4;
      puVar8 = (undefined *)(param_1 + iVar6);
      puVar7 = param_2;
      while( true ) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        if (puVar7 == (undefined *)0x0) {
          return iVar6;
        }
        uVar3 = CONCAT11(*puVar8,*puVar2);
        puVar8 = puVar8 + 1;
        uVar4 = uVar3 & 0x7f7f;
        if (0x60 < (byte)(uVar4 >> 8)) {
          uVar4 = uVar3 & 0x5f7f;
        }
        if (0x60 < (byte)uVar4) {
          uVar4 = uVar4 & 0xff5f;
        }
        if ((char)(uVar4 >> 8) != (char)uVar4) break;
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          return iVar6;
        }
      }
      iVar6 = iVar6 + (*(int *)0x6aa4 - iVar5) + 1;
    } while (iVar6 <= *(int *)0x6aa6);
  }
  return -1;
}



void __cdecl16near FUN_0000_89b0(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}



void FUN_0000_89be(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_89dc(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void __cdecl16near FUN_0000_89f6(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x60;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



undefined FUN_0000_8a10(int param_1,int param_2)

{
  undefined uVar1;
  undefined2 unaff_DS;
  
  if ((param_2 < 0xb) && (param_1 < 0xb)) {
    if ((5 < param_2) || (5 < param_1)) {
      if (5 < param_2) {
        param_2 = 10 - param_2;
      }
      if (5 < param_1) {
        param_1 = 10 - param_1;
      }
    }
    uVar1 = *(undefined *)(param_2 + param_1 * 6 + 0x6aa8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_0000_8a60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  undefined local_8;
  
  local_8 = 0;
  if (param_3 == 1) {
    local_8 = 0xff;
  }
  pcVar2 = (char *)((int)FUN_0000_1f7d + 1 + (param_4 % 0x10) * 0x20);
  iVar1 = 0x10;
  do {
    *(undefined *)((int)FUN_0000_ad0e + 6 + (pcVar2[1] + param_1) * 0x20 + (int)*pcVar2 + param_2) =
         local_8;
    pcVar2 = pcVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void __cdecl16near FUN_0000_8ac6(void)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((0x31 < *(byte *)0x58a5) || (*(int *)0x217e == -1)) {
    *(undefined *)0x2186 = 0xff;
    return;
  }
  *(undefined *)0x24e6 = 1;
  if (*(char *)0x2186 == -1) {
    pcVar1 = (char *)0x2186;
    *pcVar1 = *pcVar1 + '\x01';
    FUN_0000_8a60(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,0);
    FUN_0000_8a60(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,1);
    FUN_0000_8a60(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,2);
    if (*(int *)0x2182 == -1) goto LAB_0000_8bbc;
    FUN_0000_8a60(*(undefined2 *)0x2184,*(undefined2 *)0x2182,1,0);
    FUN_0000_8a60(*(undefined2 *)0x2184,*(undefined2 *)0x2182,1,1);
    iVar2 = 2;
  }
  else {
    FUN_0000_8a60(*(undefined2 *)0x2180,*(undefined2 *)0x217e,0,*(undefined *)0x2186);
    if (*(int *)0x2182 != -1) {
      FUN_0000_8a60(*(undefined2 *)0x2184,*(undefined2 *)0x2182,0,*(undefined *)0x2186);
    }
    pcVar1 = (char *)0x2186;
    *pcVar1 = *pcVar1 + '\x01';
    FUN_0000_8a60(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,*(byte *)0x2186 + 2);
    if (*(int *)0x2182 == -1) goto LAB_0000_8bbc;
    iVar2 = *(byte *)0x2186 + 2;
  }
  FUN_0000_8a60(*(undefined2 *)0x2184,*(undefined2 *)0x2182,1,iVar2);
LAB_0000_8bbc:
  if (0xf < *(byte *)0x2186) {
    *(undefined *)0x2186 = 0;
  }
  return;
}



void __cdecl16near FUN_0000_8bca(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_8bea(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_0000_2306();
  *(undefined2 *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_8c20(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_0000_2306();
  *(undefined2 *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



undefined2 FUN_0000_8c54(int param_1)

{
  code **ppcVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_BP;
  undefined2 unaff_DS;
  undefined in_CF;
  bool bVar4;
  
  *(undefined2 *)0x535c = 0;
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (((bool)in_CF) || (*(int *)0x535c != 0)) goto LAB_0000_8ca6;
  if (param_1 == 0) {
LAB_0000_8c85:
    bVar4 = false;
    pcVar2 = (code *)swi(0x21);
    uVar3 = (*pcVar2)();
    if (!bVar4) {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
      return unaff_BP;
    }
  }
  else {
    bVar4 = false;
    pcVar2 = (code *)swi(0x21);
    uVar3 = (*pcVar2)();
    if (!bVar4) goto LAB_0000_8c85;
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
LAB_0000_8ca6:
  *(undefined2 *)0x535c = uVar3;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



undefined2 FUN_0000_8cb6(void)

{
  code **ppcVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 unaff_DI;
  uint unaff_DS;
  bool bVar4;
  
  bVar4 = false;
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (!bVar4) {
    pcVar2 = (code *)swi(0x21);
    uVar3 = (*pcVar2)();
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)(uVar3);
    bVar4 = (unaff_DS & 1) == 0;
    uVar3 = unaff_DI;
    if ((bVar4) && (*(undefined2 *)0x535c = 0, bVar4)) {
      return unaff_DI;
    }
  }
  *(undefined2 *)0x535c = uVar3;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



void __cdecl16near FUN_0000_8d10(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_0000_8d15(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_0000_8d1a(void)

{
  FUN_0000_8d15();
  FUN_0000_8d10();
  return;
}



void __cdecl16near FUN_0000_8d35(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_DI;
  undefined2 unaff_ES;
  
  for (iVar5 = 0; *(int *)(iVar5 + 6) != -1; iVar5 = iVar5 + 0x10) {
    uVar2 = *(uint *)(iVar5 + 10);
    uVar3 = *(uint *)(unaff_DI + 10);
    if (uVar3 < uVar2) {
      uVar4 = *(uint *)(unaff_DI + 0xc);
      uVar3 = uVar2;
    }
    else {
      uVar4 = *(uint *)(iVar5 + 0xc);
    }
    if (uVar3 < uVar4) {
      puVar1 = (uint *)(iVar5 + 6);
      *puVar1 = *puVar1 & 0x7fff;
    }
  }
  return;
}



void __cdecl16far FUN_0000_8d7b(void)

{
  code *pcVar1;
  
  if (DAT_0000_916c != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    DAT_0000_916c = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00008df6)

void __cdecl16near FUN_0000_8d9f(void)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  char cVar3;
  undefined2 uVar4;
  char *pcVar5;
  int unaff_DI;
  char *pcVar6;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar7;
  
  if ((in_AL == '\0') && (*(int *)0x8c == *(int *)(unaff_DI + 0xe))) {
    return;
  }
  FUN_0000_8d7b();
  *(undefined2 *)0x8e = *(undefined2 *)(unaff_DI + 0xe);
  while( true ) {
    pcVar5 = *(char **)0x8e;
    pcVar6 = (char *)0x92;
    do {
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
      cVar3 = *pcVar1;
      *pcVar6 = cVar3;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    cVar3 = FUN_0000_90b0();
    if (cVar3 != '\0') break;
    bVar7 = false;
    pcVar2 = (code *)swi(0x21);
    uVar4 = (*pcVar2)();
    if (!bVar7) {
      *(undefined2 *)0x2 = uVar4;
      return;
    }
  }
  return;
}



void __cdecl16near FUN_0000_8dfa(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// WARNING: Removing unreachable block (ram,0x00008e7b)

int __cdecl16near FUN_0000_8e23(void)

{
  code *pcVar1;
  int in_AX;
  int iVar2;
  uint in_CX;
  int iVar3;
  undefined2 in_DX;
  undefined2 unaff_DS;
  bool bVar4;
  int iStack_4;
  int iStack_2;
  
  iStack_2 = (int)(((ulong)in_CX * 0x10) / 0xfff0);
  iStack_4 = (int)(((ulong)in_CX * 0x10) % 0xfff0);
  while( true ) {
    if (iStack_2 == 0) {
      if (iStack_4 == 0) {
        return iStack_2;
      }
      iVar3 = iStack_4;
      iStack_4 = 0;
    }
    else {
      iStack_2 = iStack_2 + -1;
      iVar3 = -0x10;
    }
    bVar4 = false;
    pcVar1 = (code *)swi(0x21);
    iVar2 = (*pcVar1)(unaff_DS,iVar3,in_AX,in_DX);
    if ((bVar4) || (iVar2 != iVar3)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    in_AX = in_AX + 0xfff;
  }
  return CONCAT11((char)((uint)iStack_2 >> 8),3);
}



undefined2 __cdecl16near FUN_0000_8ec1(void)

{
  int unaff_DI;
  undefined2 unaff_DS;
  undefined in_CF;
  
  FUN_0000_8d1a();
  while (FUN_0000_8d9f(), !(bool)in_CF) {
    *(undefined2 *)0x8c = *(undefined2 *)(unaff_DI + 0xe);
    FUN_0000_8dfa();
    in_CF = false;
    FUN_0000_8e23();
    if (!(bool)in_CF) {
      FUN_0000_8dfa();
      in_CF = false;
      if ((*(int *)(unaff_DI + 8) == 0) || (FUN_0000_8f46(), !(bool)in_CF)) break;
    }
  }
  FUN_0000_8d10();
  return 0x90e;
}



void __cdecl16near FUN_0000_8f46(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint in_CX;
  int in_DX;
  uint in_BX;
  int **unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar4;
  
  do {
    if (in_BX == 0) {
      in_BX = in_CX;
      if (0x20 < in_CX) {
        in_BX = 0x20;
      }
      bVar4 = (in_BX + 3 >> 1 & 1) != 0;
      FUN_0000_8e23();
      if (bVar4) {
        return;
      }
      unaff_SI = (int **)0x4;
    }
    in_BX = in_BX - 1;
    piVar2 = *unaff_SI;
    piVar3 = unaff_SI[1];
    if ((piVar2 != (int *)0x0) || (piVar3 != (int *)0x0)) {
      piVar1 = piVar2;
      *piVar1 = *piVar1 + *(int *)0x0;
    }
    unaff_SI = unaff_SI + 2;
    in_CX = in_CX - 1;
  } while (in_CX != 0);
  return;
}



void __cdecl16far thunk_FUN_0000_8f97(void)

{
  uint *puVar1;
  int iVar2;
  undefined2 in_AX;
  uint in_CX;
  undefined uVar3;
  
  DAT_0000_9170 = (char)((uint)in_AX >> 8);
  do {
    iVar2 = (in_CX - 1) * 0x10;
    uVar3 = 0;
    if ((*(uint *)(iVar2 + 6) & 0x8000) == 0) {
      FUN_0000_8d35(in_CX - 1);
      FUN_0000_8ec1();
      if ((bool)uVar3) {
        if (DAT_0000_9170 == '\0') {
          FUN_0000_90d4();
        }
        break;
      }
    }
    puVar1 = (uint *)(iVar2 + 6);
    *puVar1 = *puVar1 | 0x8000;
    in_CX = *(uint *)(iVar2 + 6) & 0x1fff;
  } while (in_CX != 0);
  FUN_0000_90cc();
  return;
}



void __cdecl16far FUN_0000_8f97(void)

{
  uint *puVar1;
  int iVar2;
  undefined2 in_AX;
  uint in_CX;
  undefined uVar3;
  
  DAT_0000_9170 = (char)((uint)in_AX >> 8);
  do {
    iVar2 = (in_CX - 1) * 0x10;
    uVar3 = 0;
    if ((*(uint *)(iVar2 + 6) & 0x8000) == 0) {
      FUN_0000_8d35(in_CX - 1);
      FUN_0000_8ec1();
      if ((bool)uVar3) {
        if (DAT_0000_9170 == '\0') {
          FUN_0000_90d4();
        }
        break;
      }
    }
    puVar1 = (uint *)(iVar2 + 6);
    *puVar1 = *puVar1 | 0x8000;
    in_CX = *(uint *)(iVar2 + 6) & 0x1fff;
  } while (in_CX != 0);
  FUN_0000_90cc();
  return;
}



undefined2 __cdecl16far FUN_0000_8fec(void)

{
  undefined2 in_AX;
  
  thunk_FUN_0000_8f97();
  return in_AX;
}



char __cdecl16near FUN_0000_90b0(void)

{
  code **ppcVar1;
  char in_AL;
  undefined2 unaff_SS;
  
  if (in_AL != '\0') {
    ppcVar1 = (code **)0x5394;
    (**ppcVar1)();
    in_AL = '\0';
  }
  return in_AL;
}



void __cdecl16near FUN_0000_90cc(void)

{
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  FUN_0000_8d7b((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  return;
}



void __cdecl16near FUN_0000_90d4(void)

{
  code *pcVar1;
  
  FUN_0000_8d7b();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/*
Unable to decompile 'FUN_0000_9442'
Cause: Exception while decompiling 0000:9442: process: timeout

*/


void FUN_0000_9466(void)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar4 = FUN_0000_8fec();
  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + iVar4;
  bVar2 = *(byte *)(*(int *)(unaff_BP + -6) + 0x2e26);
  *(uint *)(unaff_BP + -4) = (uint)(bVar2 >> 1);
  *(uint *)(unaff_BP + -0xc) = bVar2 & 1;
  if (*(int *)(unaff_BP + -8) != 0) {
    *(uint *)(unaff_BP + -0xc) = (uint)(*(int *)(unaff_BP + -8) == 0x90) ^ *(uint *)(unaff_BP + -4);
  }
  if (*(int *)0xa9c6 == 0) {
    FUN_0000_3270(0x6c4e);
  }
  else {
    iVar4 = *(int *)(unaff_BP + 4) * 2;
    uVar3 = *(undefined2 *)(*(int *)((int)&DAT_0000_fff6 + unaff_BP) * 8 + iVar4 + 0x2e32);
    FUN_0000_276c(*(undefined2 *)((int)&DAT_0000_fff6 + unaff_BP),uVar3,
                  *(undefined2 *)(iVar4 + 0x2e2a),
                  *(int *)(unaff_BP + -4) * 3 + *(int *)(unaff_BP + 4) + -1,*(undefined2 *)0xa9c6);
    FUN_0000_261c(*(undefined2 *)((int)&DAT_0000_fff6 + unaff_BP),uVar3,0x60,
                  *(int *)(unaff_BP + -0xc) * 3 + *(int *)(unaff_BP + 4) + -1,*(undefined2 *)0xa9c6)
    ;
    *(char *)0x5c68 = *(char *)(unaff_BP + -2) + *(char *)(unaff_BP + -8) + *(char *)(unaff_BP + -6)
    ;
  }
  return;
}



void FUN_0000_947e(void)

{
  byte *pbVar1;
  byte bVar2;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  bVar2 = FUN_0000_8fec();
  pbVar1 = (byte *)(in_BX + unaff_SI);
  *pbVar1 = *pbVar1 | bVar2;
  FUN_0000_c5c0();
  return;
}



void FUN_0000_950e(void)

{
  int *piVar1;
  int iVar2;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  iVar2 = FUN_0000_8fec();
  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + iVar2;
  FUN_0000_a5d6();
  return;
}



undefined2 __cdecl16near FUN_0000_9586(void)

{
  int iVar1;
  int iVar2;
  int unaff_BP;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_0000_8fec();
  *(undefined2 *)(unaff_BP + -0x12) = unaff_SI;
  if (*(int *)(unaff_BP + -0xc) == 900) {
    iVar1 = *(int *)(unaff_BP + -0x16);
    iVar2 = *(int *)(unaff_BP + -2);
    *(undefined *)(iVar1 + 2) = *(undefined *)(iVar2 + 2);
    *(undefined *)(iVar1 + 3) = *(undefined *)(iVar2 + 3);
    *(undefined *)(iVar2 + 2) = *(undefined *)(unaff_BP + -0x10);
    *(undefined *)(iVar2 + 3) = *(undefined *)(unaff_BP + -0x12);
  }
  iVar1 = *(int *)(unaff_BP + -2);
  if ((*(char *)(iVar1 + 2) == *(char *)0x5896) && (*(char *)(iVar1 + 3) == *(char *)0x5897)) {
    *(undefined2 *)(unaff_BP + -0xe) = 1;
    iVar2 = *(int *)(unaff_BP + -0x16);
    *(undefined *)(iVar1 + 2) = *(undefined *)(iVar2 + 2);
    *(undefined *)(iVar1 + 3) = *(undefined *)(iVar2 + 3);
  }
  return *(undefined2 *)(unaff_BP + -0xe);
}



void FUN_0000_9592(void)

{
  char *pcVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_0000_8fec();
  if ((*(byte *)(unaff_BP + 6) & 7) == *(byte *)0x5c65) {
    FUN_0000_ad0e(*(undefined2 *)(unaff_BP + 4));
  }
  if ((*(int *)(unaff_BP + 4) == 0) &&
     (pcVar1 = (char *)0x2f26, *pcVar1 = *pcVar1 + '\x01', 2 < *(byte *)0x2f26)) {
    *(undefined *)0x2f26 = 0;
  }
  return;
}



void FUN_0000_959e(void)

{
  FUN_0000_8fec();
  FUN_0000_9bf0();
  return;
}



void FUN_0000_95c2(void)

{
  FUN_0000_8fec();
  FUN_0000_9c6a();
  return;
}



void FUN_0000_95ce(void)

{
  FUN_0000_8fec();
  FUN_0000_a2dc();
  return;
}



void FUN_0000_9616(void)

{
  FUN_0000_8fec();
  FUN_0000_b7d0();
  return;
}



void FUN_0000_9622(void)

{
  FUN_0000_8fec();
  FUN_0000_cde0();
  return;
}



void FUN_0000_962e(void)

{
  FUN_0000_8fec();
  FUN_0000_cd4e();
  return;
}



void FUN_0000_963a(void)

{
  FUN_0000_8fec();
  FUN_0000_c5ea();
  return;
}



void FUN_0000_9646(void)

{
  FUN_0000_8fec();
  FUN_0000_c9ee();
  return;
}



void FUN_0000_9652(void)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte in_CL;
  char in_CH;
  undefined2 in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  bVar3 = FUN_0000_8fec();
  *(byte *)0x9a01 = bVar3 & 0xae;
  in(CONCAT11((char)((uint)in_DX >> 8),(char)in_DX + in_CH));
  pbVar1 = (byte *)(unaff_BP + unaff_SI);
  *pbVar1 = *pbVar1 | in_CL;
  piVar2 = (int *)(unaff_BP + unaff_SI + 0x2ec);
  *piVar2 = *piVar2 + in_BX;
  pbVar1 = (byte *)(in_BX + unaff_SI);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  FUN_0000_8fec();
  FUN_0000_b680();
  return;
}



void FUN_0000_9682(void)

{
  FUN_0000_8fec();
  FUN_0000_c4f4();
  return;
}



void FUN_0000_968e(void)

{
  FUN_0000_8fec();
  FUN_0000_cc8a();
  return;
}



void FUN_0000_969a(void)

{
  FUN_0000_8fec();
  FUN_0000_9d24();
  return;
}



void FUN_0000_96be(void)

{
  FUN_0000_8fec();
  FUN_0000_b8f8();
  return;
}



void FUN_0000_96ca(void)

{
  FUN_0000_8fec();
  FUN_0000_b93a();
  return;
}



void FUN_0000_96d6(void)

{
  FUN_0000_8fec();
  FUN_0000_c91c();
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000_972a(void)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  undefined extraout_AH;
  byte in_CL;
  char in_CH;
  undefined2 extraout_DX;
  byte *in_BX;
  int iVar5;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_0000_8fec();
  verw();
  func_0x000a42e5(0x8d0);
  cVar3 = in(extraout_DX);
  pbVar2 = (byte *)0xea00;
  *pbVar2 = *pbVar2 | in_CL;
  convert_bcd(*(unkbyte10 *)(unaff_BP + unaff_SI + -0x65ff));
  bVar4 = in(CONCAT11(extraout_AH,cVar3));
  pbVar2 = in_BX;
  *pbVar2 = *pbVar2 | bVar4;
  iVar5 = CONCAT11(0xa2,(char)in_BX);
  piVar1 = (int *)(unaff_BP + unaff_SI + 0x2ec);
  *piVar1 = *piVar1 + iVar5;
  pbVar2 = (byte *)(iVar5 + unaff_SI);
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  *(char *)0x9a01 = bVar4 + 0xb8;
  in(CONCAT11(extraout_AH,cVar3 + bVar4 + in_CH * '\x02'));
  pbVar2 = (byte *)0xea00;
  *pbVar2 = *pbVar2 | in_CL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000_978a(void)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte in_CL;
  undefined2 in_DX;
  byte *in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_0000_8fec();
  verw();
  piVar1 = (int *)(unaff_BP + unaff_SI + -0x65ff);
  *piVar1 = *piVar1 << (in_CL & 0x1f);
  bVar3 = in(in_DX);
  pbVar2 = in_BX;
  *pbVar2 = *pbVar2 | bVar3;
  *(byte *)&DAT_0000_01a2 = bVar3;
  FUN_0000_8fec();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000_983e(void)

{
  FUN_0000_8fec();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000_984a(void)

{
  byte *pbVar1;
  undefined uVar2;
  char cVar3;
  char extraout_AH;
  byte in_CL;
  byte in_CH;
  byte bVar4;
  char cVar5;
  byte bVar6;
  undefined2 in_DX;
  undefined uVar8;
  undefined2 uVar7;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  uVar2 = FUN_0000_8fec();
  uVar8 = (undefined)((uint)in_DX >> 8);
  cVar5 = (char)in_DX + in_CH;
  *(undefined *)0x9a01 = uVar2;
  cVar3 = in(CONCAT11(uVar8,cVar5));
  bVar6 = cVar5 + cVar3;
  pbVar1 = (byte *)(unaff_BP + unaff_DI);
  *pbVar1 = *pbVar1 | bVar6;
  bVar4 = (in_CH - extraout_AH) - CARRY1(bVar6,in_CH);
  *(char *)0x9a01 = cVar3;
  cVar3 = in(CONCAT11(uVar8,bVar6 + in_CH));
  bVar6 = bVar6 + in_CH + cVar3;
  pbVar1 = (byte *)(in_BX + unaff_SI);
  *pbVar1 = *pbVar1 | bVar6;
  uVar7 = CONCAT11(uVar8,bVar6 + bVar4 + (char)((uint)in_BX >> 8) + CARRY1(bVar6,bVar4));
  do {
    *(char *)0x9a01 = cVar3;
    cVar3 = in(uVar7);
    uVar2 = (undefined)((uint)uVar7 >> 8);
    bVar6 = (char)uVar7 + cVar3;
    pbVar1 = (byte *)(unaff_BP + unaff_DI);
    *pbVar1 = *pbVar1 | bVar6;
    cVar5 = bVar6 + bVar4;
    uVar7 = CONCAT11(uVar2,cVar5);
  } while (CARRY1(bVar6,bVar4) || cVar5 == '\0');
  *(char *)0x9a01 = cVar3;
  cVar3 = in(uVar7);
  pbVar1 = (byte *)(in_BX + unaff_SI);
  *pbVar1 = *pbVar1 | cVar5 + cVar3;
  cVar5 = cVar5 + cVar3 + bVar4;
  *(char *)0x9a01 = cVar3;
  bVar4 = in(CONCAT11(uVar2,cVar5));
  pbVar1 = (byte *)0xea00;
  *pbVar1 = *pbVar1 | in_CL;
  *(byte *)0x9a01 = bVar4 & 0xde;
  in(CONCAT11(uVar2,cVar5 + bVar4));
  pbVar1 = (byte *)0xea00;
  *pbVar1 = *pbVar1 | in_CL;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Stack frame is not setup normally: Input value of stackpointer is not used

void FUN_0000_992e(void)

{
  uint *puVar1;
  uint uVar2;
  int in_BX;
  int iVar3;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined4 in_ESP;
  undefined2 uVar10;
  int unaff_SI;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined *puVar4;
  
  iVar3 = (int)in_ESP;
  uVar10 = (undefined2)((ulong)in_ESP >> 0x10);
  *(undefined2 *)(iVar3 + -2) = unaff_CS;
  puVar4 = (undefined *)(iVar3 + -4);
  *(undefined2 *)(iVar3 + -4) = 0x9933;
  uVar2 = FUN_0000_8fec();
  puVar1 = (uint *)(in_BX + unaff_SI);
  *puVar1 = *puVar1 | uVar2;
  puVar5 = *(undefined2 **)CONCAT22(uVar10,(int)puVar4 + 4);
  *puVar5 = 0;
  puVar6 = puVar5 + -1;
  puVar5[-1] = 0xcdb4;
  FUN_0000_2490();
  puVar6[1] = 8;
  *puVar6 = 8;
  puVar6[-1] = 0xb7;
  puVar6[-2] = 0xb7;
  puVar7 = puVar6 + -3;
  puVar6[-3] = 0xcdc1;
  FUN_0000_24c6();
  *(undefined2 *)((int)puVar7 + 8) = 1;
  puVar8 = (undefined2 *)((int)puVar7 + 6);
  *(undefined2 *)((int)puVar7 + 6) = 0xcdc8;
  FUN_0000_2642();
  puVar8[1] = 8;
  *puVar8 = 8;
  puVar8[-1] = 0xb7;
  puVar8[-2] = 0xb7;
  puVar9 = puVar8 + -3;
  puVar8[-3] = 0xcdd5;
  FUN_0000_24c6();
  *(undefined2 *)((int)puVar9 + 8) = 0;
  *(undefined2 *)((int)puVar9 + 6) = 0xcddb;
  FUN_0000_2642();
  return;
}



void FUN_0000_996a(void)

{
  FUN_0000_8fec();
  FUN_0000_c358();
  return;
}



// WARNING: Unable to track spacebase fully for stack
// WARNING: Type propagation algorithm not settling

void FUN_0000_9a5a(void)

{
  byte **ppbVar1;
  byte *pbVar2;
  code *pcVar3;
  undefined uVar4;
  char cVar5;
  byte in_CL;
  byte in_CH;
  char cVar6;
  byte bVar7;
  char cVar8;
  undefined2 in_DX;
  undefined uVar9;
  undefined2 extraout_DX;
  byte *in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined in_CF;
  bool bVar10;
  
  uVar4 = FUN_0000_8fec();
  bVar10 = (bool)verw();
  uVar9 = (undefined)((uint)in_DX >> 8);
  if (!(bool)in_CF && !bVar10) {
    *(undefined *)0x9a01 = uVar4;
    cVar5 = in(in_DX);
    pbVar2 = in_BX;
    *pbVar2 = *pbVar2 | in_CL;
    cVar6 = (char)in_DX + cVar5 + in_CH;
    *(char *)0x9a01 = cVar5;
    cVar5 = in(CONCAT11(uVar9,cVar6));
    bVar7 = cVar6 + cVar5;
    pbVar2 = in_BX;
    *pbVar2 = *pbVar2 | in_CL;
    cVar6 = (in_CH - in_CL) - CARRY1(bVar7,in_CH);
    *(char *)0x9a01 = cVar5;
    in(CONCAT11(uVar9,bVar7 + in_CH));
    pbVar2 = in_BX;
    *pbVar2 = *pbVar2 | in_CL;
    pcVar3 = (code *)swi(0xa2);
    bVar7 = (*pcVar3)();
    ppbVar1 = (byte **)(unaff_BP + unaff_SI + 0x2ec);
    *ppbVar1 = *ppbVar1 + (int)in_BX;
    pbVar2 = in_BX + unaff_SI;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
    verw();
    *(byte *)0x9a01 = bVar7 ^ 0xce;
    cVar5 = in(extraout_DX);
    uVar4 = (undefined)((uint)extraout_DX >> 8);
    pbVar2 = in_BX;
    *pbVar2 = *pbVar2 | in_CL;
    cVar8 = (char)extraout_DX + cVar5 + cVar6;
    cVar5 = in(CONCAT11(uVar4,cVar8));
    pbVar2 = in_BX;
    *pbVar2 = *pbVar2 | in_CL;
    cVar6 = cVar8 + cVar5 + cVar6;
    cVar5 = in(CONCAT11(uVar4,cVar6));
    pbVar2 = (byte *)(unaff_BP + unaff_SI);
    *pbVar2 = *pbVar2 | cVar6 + cVar5;
    ppbVar1 = (byte **)(unaff_BP + -0x5a32);
    *ppbVar1 = *ppbVar1 + (int)in_BX;
    pbVar2 = in_BX + -0x5d1e;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
    verw();
    ppbVar1 = (byte **)(unaff_BP + -0x5a32);
    *ppbVar1 = *ppbVar1 + (int)in_BX;
    pbVar2 = in_BX + -0x5d1e;
    *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
    FUN_1000_03bc();
    return;
  }
  cVar5 = in(in_DX);
  pbVar2 = (byte *)0xea00;
  *pbVar2 = *pbVar2 | in_CL;
  *(char *)0x9a01 = cVar5;
  in(CONCAT11(uVar9,(char)in_DX + cVar5));
  pbVar2 = (byte *)0xea00;
  *pbVar2 = *pbVar2 | in_CL;
  ppbVar1 = (byte **)(unaff_BP + -0x5a35);
  *ppbVar1 = *ppbVar1 + (int)in_BX;
  pbVar2 = in_BX + -0x5d21;
  *pbVar2 = *pbVar2 >> 1 | *pbVar2 << 7;
  FUN_0000_fc56();
  return;
}



void FUN_0000_9bb6(void)

{
  int *piVar1;
  int iVar2;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  byte in_CF;
  
  iVar2 = FUN_0000_8fec();
  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + iVar2 + (uint)in_CF;
  FUN_0000_ddbc();
  return;
}



void FUN_0000_9bce(void)

{
  FUN_0000_8fec();
  FUN_1000_0cfe();
  return;
}



void FUN_0000_9bda(void)

{
  int *piVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  undefined2 in_CX;
  char cVar7;
  undefined2 in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined *puVar8;
  undefined2 unaff_DS;
  undefined2 in_stack_00000000;
  
  cVar7 = (char)((uint)in_CX >> 8);
  cVar5 = FUN_0000_8fec();
  cVar7 = (char)in_DX + cVar7;
  *(char *)0x1 = cVar5;
  pcVar2 = (char *)(in_BX + unaff_SI);
  *pcVar2 = *pcVar2 + cVar5;
  pcVar2 = (char *)(in_BX + unaff_SI);
  *pcVar2 = *pcVar2 + cVar5;
  pcVar2 = (char *)(in_BX + unaff_SI);
  *pcVar2 = *pcVar2 + cVar5;
  pcVar2 = (char *)(in_BX + unaff_SI);
  *pcVar2 = *pcVar2 + cVar5;
  pcVar2 = (char *)(unaff_DI + -0x75);
  *pcVar2 = *pcVar2 + cVar7;
  in(CONCAT11((char)((uint)in_DX >> 8),cVar7));
  FUN_0000_3270((int)&LAB_0000_2c58);
  *(undefined *)0x6603 = *(undefined *)(*(byte *)0x6602 + 0x2c76);
  FUN_0000_3536();
  *(uint *)(unaff_BP + -0x1a) = *(byte *)(unaff_BP + 4) & 0xf;
  *(uint *)(unaff_BP + -2) = (uint)*(byte *)0x587b;
  *(undefined *)0x587b = 0xff;
  *(undefined *)0x589e = 0xff;
  iVar6 = *(byte *)0x5893 - 0x21;
  *(int *)(unaff_BP + -0x1c) = iVar6;
  if (0 < iVar6) {
    piVar1 = (int *)(unaff_BP + -0x1c);
    *piVar1 = *piVar1 + -1;
  }
  *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -0x1c) * 0x1600 + *(int *)(unaff_BP + -0x1a) * 0x160
  ;
  puVar8 = (undefined *)((int)FUN_0000_ad0e + 6);
  for (iVar6 = 0x160; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = 0;
  }
  FUN_0000_3f8e(*(undefined2 *)(unaff_BP + -8),0x160,0xad14,0x2c6a);
  *(undefined *)0x5894 = *(undefined *)0x5893;
  *(uint *)(unaff_BP + -4) = (uint)*(byte *)0x5896;
  *(uint *)(unaff_BP + -6) = (uint)*(byte *)0x5897;
  *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)0x5c62;
  *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)0x5c64;
  *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)0x5c66;
  *(undefined2 *)((int)&DAT_0000_fff6 + unaff_BP) = *(undefined2 *)0x5c68;
  *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x5c6a;
  *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)0x5c6c;
  *(undefined2 *)(unaff_BP + -0x14) = *(undefined2 *)0x5c6e;
  *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)0x5c70;
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x58a0 = 0;
  func_0x0000965e(3,*(undefined *)(unaff_BP + 4));
  FUN_0000_7330();
  *(undefined *)0x58a1 = 0x82;
  iVar6 = FUN_0000_9652();
  if (iVar6 == 0) {
    if (*"\x02" == 'M') {
      func_0x0000966a();
    }
    *(undefined *)0x5893 = *(undefined *)0x5894;
    FUN_0000_9682(*(undefined2 *)(unaff_BP + -0x1a));
    pbVar3 = (byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5895 * 0x40 +
                     *(int *)(unaff_BP + -6) * 8 + *(int *)(unaff_BP + -4));
    *pbVar3 = *pbVar3 & 0xaf;
  }
  *(undefined *)0x5897 = *(undefined *)(unaff_BP + -6);
  *(undefined *)0x5896 = *(undefined *)(unaff_BP + -4);
  *(undefined *)0x5893 = *(undefined *)0x5894;
  FUN_0000_968e();
  *(undefined2 *)0x5c62 = *(undefined2 *)(unaff_BP + -0x10);
  *(undefined2 *)0x5c64 = *(undefined2 *)(unaff_BP + -0xe);
  *(undefined2 *)0x5c66 = *(undefined2 *)(unaff_BP + -0xc);
  *(undefined2 *)0x5c68 = *(undefined2 *)((int)&DAT_0000_fff6 + unaff_BP);
  *(undefined2 *)0x5c6a = *(undefined2 *)(unaff_BP + -0x18);
  *(undefined2 *)0x5c6c = *(undefined2 *)(unaff_BP + -0x16);
  *(undefined2 *)0x5c6e = *(undefined2 *)(unaff_BP + -0x14);
  *(undefined2 *)0x5c70 = *(undefined2 *)(unaff_BP + -0x12);
  *(undefined *)0x587b = *(undefined *)(unaff_BP + -2);
  return;
}



void FUN_0000_9bf0(byte param_1)

{
  byte *pbVar1;
  undefined uVar2;
  byte bVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  undefined2 unaff_DS;
  int local_1e;
  
  FUN_0000_3270((int)&LAB_0000_2c58);
  *(undefined *)0x6603 = *(undefined *)(*(byte *)0x6602 + 0x2c76);
  FUN_0000_3536();
  uVar2 = *(undefined *)0x587b;
  *(undefined *)0x587b = 0xff;
  *(undefined *)0x589e = 0xff;
  uVar14 = (uint)*(byte *)0x5893;
  local_1e = uVar14 - 0x21;
  if (0 < local_1e) {
    local_1e = uVar14 - 0x22;
  }
  puVar16 = (undefined *)((int)FUN_0000_ad0e + 6);
  for (iVar15 = 0x160; iVar15 != 0; iVar15 = iVar15 + -1) {
    puVar13 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar13 = 0;
  }
  FUN_0000_3f8e(local_1e * 0x1600 + (param_1 & 0xf) * 0x160,0x160,0xad14,0x2c6a);
  *(undefined *)0x5894 = *(undefined *)0x5893;
  bVar3 = *(byte *)0x5896;
  bVar4 = *(byte *)0x5897;
  uVar5 = *(undefined2 *)0x5c62;
  uVar6 = *(undefined2 *)0x5c64;
  uVar7 = *(undefined2 *)0x5c66;
  uVar8 = *(undefined2 *)0x5c68;
  uVar9 = *(undefined2 *)0x5c6a;
  uVar10 = *(undefined2 *)0x5c6c;
  uVar11 = *(undefined2 *)0x5c6e;
  uVar12 = *(undefined2 *)0x5c70;
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x58a0 = 0;
  func_0x0000965e(3,param_1);
  FUN_0000_7330();
  *(undefined *)0x58a1 = 0x82;
  iVar15 = FUN_0000_9652();
  if (iVar15 == 0) {
    if (*"\x02" == 'M') {
      func_0x0000966a();
    }
    *(undefined *)0x5893 = *(undefined *)0x5894;
    FUN_0000_9682(param_1 & 0xf);
    pbVar1 = (byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5895 * 0x40 + (uint)bVar4 * 8 + (uint)bVar3);
    *pbVar1 = *pbVar1 & 0xaf;
  }
  *(byte *)0x5897 = bVar4;
  *(byte *)0x5896 = bVar3;
  *(undefined *)0x5893 = *(undefined *)0x5894;
  FUN_0000_968e();
  *(undefined2 *)0x5c62 = uVar5;
  *(undefined2 *)0x5c64 = uVar6;
  *(undefined2 *)0x5c66 = uVar7;
  *(undefined2 *)0x5c68 = uVar8;
  *(undefined2 *)0x5c6a = uVar9;
  *(undefined2 *)0x5c6c = uVar10;
  *(undefined2 *)0x5c6e = uVar11;
  *(undefined2 *)0x5c70 = uVar12;
  *(undefined *)0x587b = uVar2;
  return;
}



void FUN_0000_9c6a(void)

{
  byte *pbVar1;
  int iVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_0000_3f8e();
  *(undefined *)0x5894 = *(undefined *)0x5893;
  *(uint *)(unaff_BP + -4) = (uint)*(byte *)0x5896;
  *(uint *)(unaff_BP + -6) = (uint)*(byte *)0x5897;
  *(undefined2 *)(unaff_BP + -0x10) = *(undefined2 *)0x5c62;
  *(undefined2 *)(unaff_BP + -0xe) = *(undefined2 *)0x5c64;
  *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)0x5c66;
  *(undefined2 *)((int)&DAT_0000_fff6 + unaff_BP) = *(undefined2 *)0x5c68;
  *(undefined2 *)(unaff_BP + -0x18) = *(undefined2 *)0x5c6a;
  *(undefined2 *)(unaff_BP + -0x16) = *(undefined2 *)0x5c6c;
  *(undefined2 *)(unaff_BP + -0x14) = *(undefined2 *)0x5c6e;
  *(undefined2 *)(unaff_BP + -0x12) = *(undefined2 *)0x5c70;
  *(undefined *)0x5893 = 0xff;
  *(undefined *)0x58a0 = 0;
  func_0x0000965e();
  FUN_0000_7330();
  *(undefined *)0x58a1 = 0x82;
  iVar2 = FUN_0000_9652();
  if (iVar2 == 0) {
    if (*"\x02" == 'M') {
      func_0x0000966a();
    }
    *(undefined *)0x5893 = *(undefined *)0x5894;
    FUN_0000_9682();
    pbVar1 = (byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5895 * 0x40 +
                     *(int *)(unaff_BP + -6) * 8 + *(int *)(unaff_BP + -4));
    *pbVar1 = *pbVar1 & 0xaf;
  }
  *(undefined *)0x5897 = *(undefined *)(unaff_BP + -6);
  *(undefined *)0x5896 = *(undefined *)(unaff_BP + -4);
  *(undefined *)0x5893 = *(undefined *)0x5894;
  FUN_0000_968e();
  *(undefined2 *)0x5c62 = *(undefined2 *)(unaff_BP + -0x10);
  *(undefined2 *)0x5c64 = *(undefined2 *)(unaff_BP + -0xe);
  *(undefined2 *)0x5c66 = *(undefined2 *)(unaff_BP + -0xc);
  *(undefined2 *)0x5c68 = *(undefined2 *)((int)&DAT_0000_fff6 + unaff_BP);
  *(undefined2 *)0x5c6a = *(undefined2 *)(unaff_BP + -0x18);
  *(undefined2 *)0x5c6c = *(undefined2 *)(unaff_BP + -0x16);
  *(undefined2 *)0x5c6e = *(undefined2 *)(unaff_BP + -0x14);
  *(undefined2 *)0x5c70 = *(undefined2 *)(unaff_BP + -0x12);
  *(undefined *)0x587b = *(undefined *)(unaff_BP + -2);
  return;
}



void FUN_0000_9d24(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined local_8;
  
  cVar1 = *(char *)0x5c67;
  if (param_1 != 0) {
    iVar2 = FUN_0000_3ab2(7,0);
    local_8 = (undefined)iVar2;
    *(undefined *)0x5c63 = local_8;
    *(undefined *)0x5c62 = local_8;
    *(undefined *)0x5c69 = 0;
    *(undefined *)0x5c68 = *(undefined *)(iVar2 + 0x1744);
    *(undefined *)0x5c67 = *(undefined *)(iVar2 + 0x173c);
    *(undefined *)0x5c66 = *(undefined *)0x5895;
    if (cVar1 != -1) {
      FUN_0000_2604(*(undefined2 *)0xa9c6);
    }
    *(undefined2 *)0xa9c6 = 0;
    iVar2 = FUN_0000_9e42();
    if (iVar2 == 0) {
      *(undefined *)0x5c63 = 0;
      *(undefined *)0x5c62 = 0;
      *(undefined *)0x5c67 = 0xff;
    }
  }
  if (*(char *)0x5c67 != -1) {
    do {
      iVar2 = FUN_0000_25ce(*(undefined2 *)((uint)*(byte *)0x5c62 * 2 + 0x25fa));
      *(int *)0xa9c6 = iVar2;
    } while (iVar2 == 0);
  }
  return;
}



void __cdecl16near FUN_0000_9dc2(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  uVar2 = *(undefined2 *)0x5386;
  FUN_0000_35b4(0);
  FUN_0000_3612(0,0xc);
  iVar3 = *(byte *)0x5895 + 1;
  FUN_0000_345e(0x20,1,iVar3);
  FUN_0000_3612(0x17,0xc);
  cVar1 = *(char *)0x6603;
  if (cVar1 == '\0') {
    uVar4 = 0x2c7c;
  }
  else if (cVar1 == '\x01') {
    uVar4 = 0x2c82;
  }
  else if (cVar1 == '\x02') {
    uVar4 = 0x2c88;
  }
  else if (cVar1 == '\x03') {
    uVar4 = 0x2c8e;
  }
  else {
    uVar4 = 0x2c94;
  }
  FUN_0000_3270(uVar4,iVar3);
  FUN_0000_35b4(uVar2);
  return;
}



uint __cdecl16near FUN_0000_9e42(void)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  uint local_a;
  int local_8;
  undefined local_6;
  
  local_8 = 0;
  do {
    bVar1 = *(byte *)0x5895;
    local_a = FUN_0000_3ab2(0x3f,0);
    bVar1 = *(byte *)((uint)bVar1 * 0x40 + 0x595a + local_a) & 0xf0;
    if ((bVar1 < 0x60) || (bVar1 == 0x70)) {
      uVar4 = (int)local_a >> 0xf;
      uVar4 = ((int)((local_a ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
      if (((int)local_a % 8 != (uint)*(byte *)0x5896) && (uVar4 != *(byte *)0x5897)) {
        uVar2 = (undefined)((int)local_a % 8);
        *(undefined *)0x5c6c = uVar2;
        *(undefined *)0x5c64 = uVar2;
        local_6 = (undefined)uVar4;
        *(undefined *)0x5c6d = local_6;
        *(undefined *)0x5c65 = local_6;
        if (((*(char *)0x5c67 == '\x16') || (*(char *)0x5c67 == '\x18')) &&
           (iVar3 = FUN_0000_3ab2(99,0), 0x30 < iVar3)) {
          *(undefined *)0x5c69 = 0xff;
        }
        local_a = 1;
        goto LAB_0000_9eeb;
      }
    }
    local_8 = local_8 + 1;
    if (7 < local_8) {
LAB_0000_9eeb:
      if (local_8 == 8) {
        *(undefined *)0x5c6d = 0xff;
        *(undefined *)0x5c65 = 0xff;
        *(undefined *)0x5c6c = 0xff;
        *(undefined *)0x5c64 = 0xff;
        local_a = 0;
      }
      return local_a;
    }
  } while( true );
}



void __cdecl16near FUN_0000_9f22(void)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)0x5386;
  FUN_0000_2490(*(undefined2 *)0x13b2,uVar1);
  FUN_0000_24c6(7,0x98,0,0x28);
  FUN_0000_24c6(0xbf,0x98,0xb9,0x30);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_2530(7,0x98,7,0x28);
  FUN_0000_2530(0xb8,0x98,0xb8,0x30);
  FUN_0000_35b4(0);
  FUN_0000_3612(0,10);
  FUN_0000_664a();
  FUN_0000_3270(0x2c9a);
  FUN_0000_66ee();
  FUN_0000_3612(0x17,6);
  FUN_0000_664a();
  FUN_0000_3270(0x2c9d);
  FUN_0000_66ee();
  FUN_0000_35b4(uVar1);
  return;
}



int __cdecl16near FUN_0000_9fc6(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 uVar4;
  
  if (*(char *)0xa9fa != '\0') {
    FUN_0000_4320();
    *(undefined *)0xa9fa = 0;
  }
  FUN_0000_30da(10);
  FUN_0000_664a();
  iVar3 = 1;
  do {
    uVar1 = FUN_0000_3558();
    iVar2 = FUN_0000_3a52(uVar1);
    if (((iVar2 != 0) && (iVar2 < 5)) && (*(int *)0x538a == 0)) {
      iVar2 = iVar2 + 0xfa;
    }
    if (iVar2 == 0) {
      FUN_0000_b680(iVar3);
      if (iVar3 == 0) {
        uVar4 = 0x28;
        uVar1 = 0x96;
      }
      else {
        uVar4 = 0x10;
        uVar1 = 0xaf;
      }
      FUN_0000_24ee(0xb2,uVar1,0xe,uVar4,0,1);
      if (*(char *)0x6604 != '\x01') {
        iVar3 = 0;
      }
      FUN_0000_ac10();
    }
  } while (iVar2 == 0);
  return iVar2;
}



void FUN_0000_a060(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_0000_b7d0();
  FUN_0000_3270(0x2ca8);
  FUN_0000_3270(0x2caf);
  FUN_0000_2490(*(undefined2 *)0x13b0);
  FUN_0000_25a6(0xb7,0xb7,8,8);
  FUN_0000_3b1a(1);
  FUN_0000_25a6(0xb7,0xb7,8,8);
  FUN_0000_3c5c(20000,500,1);
  if (param_1 < 1) {
    iVar2 = (uint)*(byte *)0x6603 * 2;
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + *(char *)(iVar2 + 0x24d6);
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + *(char *)(iVar2 + 0x24de);
  }
  else {
    iVar2 = (uint)*(byte *)0x6603 * 2;
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 - *(char *)(iVar2 + 0x24d6);
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 - *(char *)(iVar2 + 0x24de);
  }
  FUN_0000_44c8();
  FUN_0000_b7d0();
  return;
}



undefined2 FUN_0000_a0f2(byte param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  uint local_a;
  uint local_8;
  int local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  if (param_2 == 1) {
    if ((param_1 & 0xf0) == 0xe0) {
      uVar2 = 0x2cef;
LAB_0000_a256:
      FUN_0000_3270(uVar2);
    }
    else {
      FUN_0000_3270(0x2d00);
      bVar1 = *(char *)0x6603 + 3;
LAB_0000_a232:
      *(byte *)0x6603 = bVar1 & 3;
    }
  }
  else {
    if (param_2 == 2) {
      if ((param_1 & 0xf0) != 0xe0) {
        FUN_0000_3270(0x2cda);
        bVar1 = *(char *)0x6603 + 1;
        goto LAB_0000_a232;
      }
      uVar2 = 0x2cc9;
      goto LAB_0000_a256;
    }
    if (param_2 == 3) {
      FUN_0000_3270(0x2cc0);
      local_6 = 1;
    }
    else {
      if (param_2 != 4) {
        FUN_0000_3270(0x2d0b);
        bVar1 = *(char *)0x6603 + 2;
        goto LAB_0000_a232;
      }
      FUN_0000_3270(0x2ce6);
      local_6 = -1;
    }
  }
  bVar1 = *(byte *)0x6603;
  *(byte *)0x6602 = bVar1;
  if (local_6 != 0) {
    local_4 = 1;
    local_8 = *(int *)((uint)bVar1 * 2 + 0x24d6) * local_6 + (uint)*(byte *)0x5896;
    if ((int)local_8 < 0) {
      local_8 = 7;
    }
    if (7 < (int)local_8) {
      local_8 = 0;
    }
    local_a = *(int *)((uint)*(byte *)0x6603 * 2 + 0x24de) * local_6 + (uint)*(byte *)0x5897;
    if ((int)local_a < 0) {
      local_a = 7;
    }
    if (7 < (int)local_a) {
      local_a = 0;
    }
    bVar1 = *(byte *)((int)FUN_0000_5956 + 4 + (uint)*(byte *)0x5895 * 0x40 + local_a * 8 + local_8)
    ;
    if (bVar1 == 0x83) {
      *(undefined *)0x5896 = (byte)local_8;
      *(undefined *)0x5897 = (byte)local_a;
      FUN_0000_a060(local_6);
      local_8 = (uint)*(byte *)0x5896;
      local_a = (uint)*(byte *)0x5897;
    }
    bVar1 = bVar1 & 0xf0;
    if (((bVar1 < 0xa1) || (0xdf < bVar1)) &&
       ((local_6 != -1 || ((bVar1 != 0xa0 && (bVar1 != 0xf0)))))) {
      if ((local_8 != *(byte *)0x5c64) || (local_a != *(byte *)0x5c65)) {
        *(undefined *)0xa9fb = 0xf;
        *(undefined *)0x24e7 = 0;
        FUN_0000_ac10();
        *(undefined *)0x24e7 = 0;
        *(byte *)0x5896 = (byte)local_8 & 7;
        *(byte *)0x5897 = (byte)local_a & 7;
        goto LAB_0000_a2a6;
      }
      uVar2 = 0x2d23;
    }
    else {
      uVar2 = 0x2d19;
    }
    FUN_0000_3270(uVar2);
  }
LAB_0000_a2a6:
  FUN_0000_b7d0();
  return local_4;
}



void FUN_0000_a2b4(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 0xb) {
    FUN_0000_345e(0x20,1,*(undefined *)0x5888);
    FUN_0000_30da(10);
    goto LAB_0000_a2fa;
  }
  if (0xb < (int)param_1) {
    FUN_0000_a398();
    return;
  }
  if (0 < (int)param_1) {
    if ((int)param_1 < 5) {
      FUN_0000_a0f2(*(undefined *)
                     ((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5896 +
                     (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8),param_1);
      goto LAB_0000_a2fa;
    }
    if (param_1 == 5) {
      FUN_0000_3270(0x2d2d);
      iVar1 = FUN_0000_408c();
      if (iVar1 == 0x59) {
        func_0x00002298();
        FUN_0000_1d14(0);
      }
      else {
        FUN_0000_3270(0x2d3b);
      }
      goto LAB_0000_a2fa;
    }
  }
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    FUN_0000_4b98(param_1);
  }
  else {
    FUN_0000_5aa0(param_1);
  }
LAB_0000_a2fa:
  FUN_0000_a3ca();
  return;
}



void FUN_0000_a2dc(void)

{
  char *pcVar1;
  undefined2 uVar2;
  char in_DH;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)(unaff_SI + 0x21);
  *pcVar1 = *pcVar1 + in_DH;
  if ((*(uint *)(unaff_BP + 4) < 0x30) || (0x39 < *(uint *)(unaff_BP + 4))) {
    uVar2 = FUN_0000_4b98(*(undefined2 *)(unaff_BP + 4));
    *(undefined2 *)(unaff_BP + -2) = uVar2;
  }
  else {
    uVar2 = FUN_0000_5aa0(*(undefined2 *)(unaff_BP + 4));
    *(undefined2 *)(unaff_BP + -2) = uVar2;
    *(undefined2 *)(unaff_BP + -2) = 0;
  }
  FUN_0000_a3ca();
  return;
}



void FUN_0000_a398(void)

{
  undefined uVar1;
  int in_AX;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (in_AX == 0xd) {
LAB_0000_a334:
    uVar1 = *(undefined *)
             ((int)FUN_0000_5956 + 4 +
             (uint)*(byte *)0x5896 + (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
    *(undefined *)(unaff_BP + -4) = uVar1;
    uVar2 = FUN_0000_a0f2(uVar1,*(undefined2 *)(unaff_BP + 4));
  }
  else {
    if (in_AX == 0x13) {
      FUN_0000_3270(0x2d43);
      if (*(char *)0xa9ce == '\0') {
        uVar2 = 0x2d4f;
      }
      else {
        uVar2 = 0x2d4a;
      }
      FUN_0000_3270(uVar2);
      *(bool *)0xa9ce = *(char *)0xa9ce == '\0';
      goto LAB_0000_a2fa;
    }
    if (in_AX == 0x16) {
      FUN_0000_3270(0x2d3e);
      FUN_0000_30da(10);
      goto LAB_0000_a2fa;
    }
    if (in_AX == 0x2e) goto LAB_0000_a334;
    if ((0x2f < *(uint *)(unaff_BP + 4)) && (*(uint *)(unaff_BP + 4) < 0x3a)) {
      uVar2 = FUN_0000_5aa0(*(undefined2 *)(unaff_BP + 4));
      *(undefined2 *)(unaff_BP + -2) = uVar2;
      *(undefined2 *)(unaff_BP + -2) = 0;
      goto LAB_0000_a2fa;
    }
    uVar2 = FUN_0000_4b98(*(undefined2 *)(unaff_BP + 4));
  }
  *(undefined2 *)(unaff_BP + -2) = uVar2;
LAB_0000_a2fa:
  FUN_0000_a3ca();
  return;
}



void FUN_0000_a3ca(void)

{
  return;
}



undefined2 __cdecl16near FUN_0000_a3d2(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 unaff_DS;
  undefined uStack_14;
  undefined local_12;
  undefined2 local_10;
  int local_e;
  int local_c;
  
  local_10 = 0;
  local_e = 999;
  if (*(char *)0x5c67 != -1) {
    if (*(char *)0x5c67 != '\x1b') {
      local_c = 0;
      bVar2 = *(byte *)0x5c6d;
      bVar3 = *(byte *)0x5c6c;
      bVar4 = *(byte *)0x5c65;
      bVar5 = *(byte *)0x5c64;
      do {
        iVar6 = FUN_0000_3ab2(3,0);
        uVar7 = *(int *)(iVar6 * 2 + 0x24d6) + (uint)bVar5;
        if (7 < (int)uVar7) {
          uVar7 = 0;
        }
        if ((int)uVar7 < 0) {
          uVar7 = 7;
        }
        uVar8 = *(int *)(iVar6 * 2 + 0x24de) + (uint)bVar4;
        if (7 < (int)uVar8) {
          uVar8 = 0;
        }
        if ((int)uVar8 < 0) {
          uVar8 = 7;
        }
        bVar1 = *(byte *)((int)FUN_0000_5956 + 4 + uVar8 * 8 + uVar7 + (uint)*(byte *)0x5895 * 0x40)
                & 0xf0;
        if ((((bVar1 != 0x60) && (bVar1 != 0x80)) && (bVar1 < 0xa0)) &&
           (((uVar7 != bVar3 || (uVar8 != bVar2)) || (iVar6 = FUN_0000_3ab2(7,0), iVar6 == 1)))) {
          local_e = 900;
          break;
        }
        local_c = local_c + 1;
      } while (local_c < 8);
      if (local_e == 900) {
        *(undefined *)0x5c6c = *(undefined *)0x5c64;
        *(undefined *)0x5c6d = *(undefined *)0x5c65;
        local_12 = (undefined)uVar7;
        *(undefined *)0x5c64 = local_12;
        uStack_14 = (undefined)uVar8;
        *(undefined *)0x5c65 = uStack_14;
      }
    }
    if ((*(char *)0x5c64 == *(char *)0x5896) && (*(char *)0x5c65 == *(char *)0x5897)) {
      local_10 = 1;
      *(undefined *)0x5c64 = *(undefined *)0x5c6c;
      *(undefined *)0x5c65 = *(undefined *)0x5c6d;
    }
  }
  return local_10;
}



void __cdecl16near FUN_0000_a538(void)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 unaff_DS;
  byte *local_6;
  
  FUN_0000_3270(0x2d53);
  if (*(char *)0x585b != '\0') {
    local_6 = (byte *)0x55b5;
    pcVar3 = (char *)0x55b3;
    uVar4 = 0;
    do {
      uVar2 = FUN_0000_3ab2(0x1e,1);
      if ((*local_6 <= uVar2) && (*pcVar3 != 'D')) {
        *pcVar3 = 'S';
        FUN_0000_4448(uVar4);
        FUN_0000_3c5c(0xdac,0x32,1);
        *(undefined *)0xa9fa = 1;
      }
      local_6 = local_6 + 0x20;
      pcVar3 = pcVar3 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)0x585b);
  }
  pbVar1 = (byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 +
                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
  *pbVar1 = *pbVar1 & 8;
  return;
}



void __cdecl16near FUN_0000_a5d6(void)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  uint local_4;
  
  FUN_0000_3270(0x2d61);
  local_4 = 0;
  if (*(char *)0x585b != '\0') {
    pbVar3 = (byte *)0x55b5;
    pcVar2 = (char *)0x55b3;
    do {
      uVar1 = FUN_0000_3ab2(0x1e,1);
      if ((*pbVar3 <= uVar1) && (*pcVar2 != 'D')) {
        *pcVar2 = 'P';
        FUN_0000_3c5c(0xdac,0x32,1);
      }
      pbVar3 = pbVar3 + 0x20;
      pcVar2 = pcVar2 + 0x20;
      local_4 = local_4 + 1;
    } while (local_4 < *(byte *)0x585b);
  }
  return;
}



void FUN_0000_a63c(byte param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  *(undefined *)0x6602 = 5;
  while (((param_1 == 0x61 || (param_1 == 0x69)) && (*(byte *)0x5895 < 8))) {
    FUN_0000_3270(0x2d6a);
    FUN_0000_3270(0x2d75);
    uVar4 = (uint)*(byte *)0x5896;
    iVar5 = (uint)*(byte *)0x5897 * 8;
    pbVar1 = (byte *)((int)FUN_0000_5956 + 4 + (uint)*(byte *)0x5895 * 0x40 + iVar5 + uVar4);
    *pbVar1 = *pbVar1 & 0xf8;
    pcVar2 = (char *)0x5895;
    *pcVar2 = *pcVar2 + '\x01';
    param_1 = *(byte *)((int)FUN_0000_5956 + 4 + (uint)*(byte *)0x5895 * 0x40 + iVar5 + uVar4);
    if (param_1 < 0x90) {
      param_1 = param_1 | 8;
      *(byte *)((int)FUN_0000_5956 + 4 +
               (uint)*(byte *)0x5895 * 0x40 + (uint)*(byte *)0x5897 * 8 + (uint)*(byte *)0x5896) =
           param_1;
    }
    FUN_0000_b7d0();
    FUN_0000_3270(0x2d81);
    FUN_0000_44c8();
  }
  if (*(char *)0x5895 == '\b') {
    *(undefined *)0x5893 = 0;
  }
  if (*(char *)0x5893 != '\0') {
    bVar3 = *(byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5896 +
                     (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8) & 0xf0;
    if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
      FUN_0000_9622();
      FUN_0000_9bf0(*(undefined *)
                     ((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5896 +
                     (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8));
      if (*(char *)0x5893 == '\0') {
        return;
      }
      FUN_0000_962e(1);
    }
    FUN_0000_9d24(1);
  }
  return;
}



void __cdecl16near FUN_0000_a76e(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  FUN_0000_3270(0x2d92);
  if ((*"" - 1U & 7) == *(byte *)0x5896) {
    *(undefined *)0x6602 = 1;
  }
  else if ((*"" + 1U & 7) == *(byte *)0x5896) {
    *(undefined *)0x6602 = 3;
  }
  else if ((*"t\x13=\x02" - 1U & 7) == *(byte *)0x5897) {
    *(undefined *)0x6602 = 2;
  }
  else {
    *(undefined *)0x6602 = 0;
  }
  if (*(char *)0x6602 == *(char *)0x6603) goto LAB_0000_a812;
  FUN_0000_3270(0x2d9b);
  cVar1 = *(char *)0x6602;
  if (cVar1 == '\0') {
    uVar2 = 0x2da6;
LAB_0000_a7f3:
    FUN_0000_3270(uVar2);
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = 0x2dac;
      goto LAB_0000_a7f3;
    }
    if (cVar1 == '\x02') {
      uVar2 = 0x2db1;
      goto LAB_0000_a7f3;
    }
    if (cVar1 == '\x03') {
      uVar2 = 0x2db7;
      goto LAB_0000_a7f3;
    }
  }
  *(undefined *)0x6603 = *(undefined *)0x6602;
LAB_0000_a812:
  FUN_0000_3270(0x2dbc);
  FUN_0000_b7d0();
  FUN_0000_3536();
  FUN_0000_3b1a(2);
  FUN_0000_9622();
  *(undefined *)0x58a0 = 0;
  *(undefined *)0x58a1 = 2;
  FUN_0000_9646();
  FUN_0000_79a6(0,*(undefined *)0x5c67,2);
  FUN_0000_968e();
  FUN_0000_962e();
  FUN_0000_9d24();
  if (*(char *)0x5893 != '\0') {
    FUN_0000_b7d0();
  }
  return;
}



void FUN_0000_a866(int param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined2 unaff_DS;
  int local_a;
  char local_8;
  byte local_4;
  
  local_a = 0;
  local_4 = param_2 & 0xf0;
  local_8 = '\0';
  if (*(char *)0x585b != '\0') {
    pcVar3 = (char *)0x55b3;
    uVar4 = 0;
    do {
      if ((*pcVar3 == 'S') && (iVar2 = FUN_0000_3ab2(0x3f,0), iVar2 < 4)) {
        *pcVar3 = 'G';
        local_8 = local_8 + '\x01';
      }
      pcVar3 = pcVar3 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)0x585b);
  }
  if (local_8 != '\0') {
    FUN_0000_4320();
  }
  if (param_1 != 0) {
    local_a = FUN_0000_a3d2();
  }
  if (local_a != 0) {
    FUN_0000_a76e();
    param_2 = *(byte *)((int)FUN_0000_5956 + 4 +
                       (uint)*(byte *)0x5896 +
                       (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
    local_4 = param_2 & 0xf0;
  }
  if ((local_4 == 0xf0) || (local_4 == 0xa0)) {
    FUN_0000_9622();
    while ((((local_4 == 0xf0 || (local_4 == 0xa0)) && (iVar2 = FUN_0000_541c(), -1 < iVar2)) &&
           (FUN_0000_9bf0(param_2), *(char *)0x5893 != '\0'))) {
      param_2 = *(byte *)((int)FUN_0000_5956 + 4 +
                         (uint)*(byte *)0x5896 +
                         (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
      local_4 = param_2 & 0xf0;
    }
    FUN_0000_962e(1);
    if (0x20 < *(byte *)0x5893) {
      FUN_0000_b7d0();
    }
    goto LAB_0000_aa12;
  }
  if (param_2 == 0x80) {
LAB_0000_a9a0:
    FUN_0000_a538();
  }
  else if (param_2 < 0x81) {
    if (param_2 == 0x61) {
LAB_0000_a9ea:
      FUN_0000_a63c(param_2);
    }
    else {
      if (param_2 != 0x62) {
        if (param_2 == 0x69) goto LAB_0000_a9ea;
        if (param_2 != 0x6a) goto LAB_0000_aa0f;
      }
      FUN_0000_3270(0x2dc7);
      FUN_0000_3270(0x2dd3);
      pbVar1 = (byte *)((int)FUN_0000_5956 + 4 +
                       (uint)*(byte *)0x5896 +
                       (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
      *pbVar1 = *pbVar1 & 8;
LAB_0000_a9b3:
      FUN_0000_44c8();
    }
  }
  else {
    if (param_2 != 0x81) {
      if (param_2 != 0x82) {
        if (param_2 == 0x88) goto LAB_0000_a9a0;
        if (param_2 == 0x89) goto LAB_0000_a9a6;
        if (param_2 != 0x8a) goto LAB_0000_aa0f;
      }
      FUN_0000_3270(0x2dbf);
      goto LAB_0000_a9b3;
    }
LAB_0000_a9a6:
    FUN_0000_a5d6();
  }
LAB_0000_aa0f:
  FUN_0000_4320();
LAB_0000_aa12:
  FUN_0000_4508();
  return;
}



void FUN_0000_aa1e(undefined2 param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined2 unaff_DS;
  int iVar5;
  int iVar6;
  uint in_stack_0000fff4;
  uint uVar7;
  
  iVar6 = 1;
  iVar5 = 0;
  uVar7 = 0;
  *(undefined *)0xbb17 = 2;
  FUN_0000_963a();
  bVar3 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 +
                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8) & 0xf0;
  FUN_0000_9f22();
  FUN_0000_9dc2();
  iVar4 = *(byte *)0x5893 - 0x20;
  if (((iVar4 == 1) || (iVar4 == 4)) || (iVar4 == 5)) {
    *(undefined *)0xbb14 = 0x4f;
    *(undefined *)0xbb15 = 0x45;
    *(undefined *)0x6604 = 3;
  }
  else {
    *(undefined *)0xbb14 = 0x4d;
    *(undefined *)0xbb15 = 5;
    if ((iVar4 == 6) || (iVar4 == 7)) {
      *(undefined *)0x6604 = 2;
    }
    else {
      *(undefined *)0x6604 = 1;
    }
  }
  if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
    FUN_0000_9622();
    FUN_0000_9bf0(*(undefined *)
                   ((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 +
                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8));
  }
  if (0x20 < *(byte *)0x5893) {
    FUN_0000_962e(param_1);
    FUN_0000_9d24(param_1);
    FUN_0000_b7d0();
  }
  do {
    do {
      if ((iVar6 == 0) || (*(byte *)0x5893 < 0x21)) {
        if ((*(byte *)0xbb17 & 2) == 0) {
          pbVar1 = (byte *)0xbb17;
          *pbVar1 = *pbVar1 | 4;
        }
        else {
          pbVar1 = (byte *)0xbb17;
          *pbVar1 = *pbVar1 & 0xfb;
        }
        FUN_0000_9622();
        if (iVar5 < 0) {
          FUN_0000_947e(iVar5,iVar6,in_stack_0000fff4,iVar4,bVar3,uVar7);
        }
        return;
      }
      iVar6 = 1;
      iVar5 = FUN_0000_541c();
      if (iVar5 == 1) {
        FUN_0000_30da(10);
        FUN_0000_664a();
        FUN_0000_3270(0x2ddd);
      }
      if (-1 >= iVar5) {
        iVar6 = 0;
      }
      in_stack_0000fff4 = (uint)(-1 < iVar5);
    } while (iVar5 != 0);
    if ((*(char *)0x587a == 'T') || (*(char *)0x587a == 'Q')) {
      if (*(char *)0x587a == 'Q') {
        uVar7 = uVar7 ^ 1;
        if (uVar7 != 0) goto LAB_0000_ab1e;
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 1;
LAB_0000_ab1e:
      FUN_0000_699c(1);
    }
    iVar4 = FUN_0000_9fc6();
    if (-1 < iVar4) {
      in_stack_0000fff4 = FUN_0000_a2b4(iVar4);
    }
    if (*(byte *)0x5893 < 0x21) {
      in_stack_0000fff4 = 0;
      iVar6 = 0;
    }
    bVar2 = *(byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5895 * 0x40 + (uint)*(byte *)0x5897 * 8 +
                     (uint)*(byte *)0x5896);
    bVar3 = bVar2 & 0xf0;
    if (in_stack_0000fff4 != 0) {
      FUN_0000_a866(uVar7,bVar2);
    }
    if (*(byte *)0x5893 < 0x21) {
      in_stack_0000fff4 = 0;
      iVar6 = 0;
    }
  } while( true );
}



void __cdecl16near FUN_0000_ac10(void)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  pbVar1 = (byte *)0x24e7;
  *pbVar1 = *pbVar1 ^ 1;
  if ((*pbVar1 != 0) && (*(char *)0xa9fb != '\0')) {
    FUN_0000_3c5c(20000,*(undefined *)0xa9fb,1);
    FUN_0000_5956(4,0xa9fb);
  }
  return;
}



void FUN_0000_ac3c(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (uint)*(byte *)0x5893;
  if (param_1 <= *(byte *)(uVar2 + 0x2dcf)) {
    iVar1 = *(byte *)(uVar2 + 0x2dc7) + param_1;
    FUN_0000_3642(0x18,0x27,*(undefined *)(iVar1 + 0x2e03),*(undefined *)(iVar1 + 0x2df7),0);
    FUN_0000_35b4(0);
    FUN_0000_36be(1);
    FUN_0000_3612(0,0);
    FUN_0000_30da(0xfd);
    FUN_0000_3270(*(undefined2 *)((iVar1 + -1) * 2 + 0x2e10));
    FUN_0000_30da(0xfd);
    FUN_0000_36be(0);
    FUN_0000_35b4(2);
    FUN_0000_3642(0x18,0x27,0,0,0);
  }
  return;
}



byte FUN_0000_accc(uint param_1,uint param_2)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5895 * 0x40 + (param_1 & 7) * 8 + (param_2 & 7));
  if (bVar1 < 0x90) {
    bVar1 = bVar1 & 0xf7;
  }
  return bVar1;
}



void FUN_0000_ad0e(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 unaff_DS;
  uint local_e;
  char local_a;
  uint local_8;
  uint local_6;
  char local_4;
  
  if (*(char *)0x587a == 'T') {
    *(undefined *)0x5c68 = *(undefined *)(*(byte *)0x5c62 + 0x1744);
  }
  uVar4 = (uint)(*(char *)0x5c69 == -1);
  bVar1 = *(byte *)0x5c68;
  uVar5 = (uint)bVar1;
  uVar6 = uVar5 & 0x60;
  local_8 = uVar5 & 0xf;
  if (*(char *)0x587a == 'T') {
    local_e = 1;
    local_6 = 1;
  }
  else {
    iVar7 = FUN_0000_3ab2(100,0);
    local_6 = (uint)(iVar7 < 0x32);
    iVar7 = FUN_0000_3ab2(100,0);
    local_e = (uint)(iVar7 < 0x32);
    if (uVar6 == 0x20) {
      local_e = (uint)((bVar1 & 0xf) == 0);
      local_8 = local_e;
      local_6 = local_e;
    }
    else if ((uVar6 != 0x40) && (uVar6 == 0x60)) {
      local_8 = local_8 - 1;
      if ((int)local_8 < 0) {
        local_8 = 3;
      }
      bVar2 = *(byte *)(local_8 + 0x2e26);
      local_6 = (uint)(bVar2 >> 1);
      local_e = bVar2 & 1;
    }
  }
  if ((bVar1 & 0x90) != 0) {
    local_e = (uVar5 & 0x90) == 0x90 ^ local_6;
  }
  if (*(int *)0xa9c6 == 0) {
    FUN_0000_3270(0x6c4e);
  }
  else {
    uVar3 = *(undefined2 *)(uVar4 * 8 + param_1 * 2 + 0x2e32);
    FUN_0000_276c(uVar4,uVar3,*(undefined2 *)(param_1 * 2 + 0x2e2a),local_6 * 3 + param_1 + -1,
                  *(undefined2 *)0xa9c6);
    FUN_0000_261c(uVar4,uVar3,0x60,local_e * 3 + param_1 + -1,*(undefined2 *)0xa9c6);
    local_4 = (char)uVar6;
    local_a = (char)(uVar5 & 0x90);
    *(char *)0x5c68 = local_4 + local_a + (char)local_8;
  }
  return;
}



void FUN_0000_ae6e(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)0x52c4;
  *(undefined2 *)0x52c4 = 0;
  if (param_1 == 0) {
    iVar7 = *(int *)0x13b6;
  }
  else if (param_1 == 1) {
    iVar7 = *(int *)0x13b4;
  }
  else if (param_1 == 2) {
    iVar7 = *(int *)0x13ae;
  }
  else {
    if (param_1 != 3) goto LAB_0000_aeae;
    iVar7 = *(int *)0x13b2;
  }
  FUN_0000_2490(iVar7 + 8);
LAB_0000_aeae:
  if (0 < *(int *)(param_2 * 2 + 0x2e52)) {
    param_2 = param_2 * 2;
    iVar7 = *(int *)(param_2 + 0x2e52);
    iVar2 = *(int *)(param_2 + 0x2e5a);
    iVar3 = *(int *)(param_2 + 0x2e4a);
    uVar4 = *(undefined2 *)(param_2 + 0x2e42);
    do {
      iVar5 = FUN_0000_3ab2(iVar3 - iVar2,uVar4);
      uVar6 = FUN_0000_3ab2(iVar3,uVar4);
      FUN_0000_26bc(iVar2 + iVar5,uVar6,iVar5);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined2 *)0x52c4 = uVar1;
  return;
}



void FUN_0000_af3a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 local_8;
  
  if ((int)param_3 < 0x1f) {
    local_8 = *(undefined2 *)((param_3 & 3) * 2 + param_1 * 8 + 0x2e62);
    if ((param_1 != 0) && ((((byte)param_3 & 0xf8) == 8 || (((byte)param_3 & 0xfc) == 0x18)))) {
      local_8 = 0x60;
    }
    if (param_1 == 0) {
      uVar3 = *(undefined2 *)0xa9c0;
      uVar2 = 0xe;
      param_2 = 0;
LAB_0000_b042:
      FUN_0000_276c(param_2,uVar2,local_8,param_3,uVar3);
      return;
    }
    uVar3 = *(undefined2 *)0xa9c0;
    uVar2 = 0xe;
    param_2 = 0;
  }
  else {
    uVar1 = param_3 + 1;
    param_3 = ((int)uVar1 >> 1) - 0x10;
    uVar1 = uVar1 & 6;
    if (param_1 == 0) {
      local_8 = *(undefined2 *)(uVar1 + 0x2e72);
    }
    else {
      local_8 = 0x60;
    }
    if ((int)param_3 < 8) {
      if (param_2 == 0) {
        uVar2 = 0x60;
      }
      else {
        uVar2 = *(undefined2 *)(uVar1 + 0x2e82);
      }
    }
    else {
      uVar2 = *(undefined2 *)(uVar1 + param_2 * 8 + 0x2e7a);
    }
    if (param_1 == 0) {
      uVar3 = *(undefined2 *)0xa9c4;
      goto LAB_0000_b042;
    }
    uVar3 = *(undefined2 *)0xa9c4;
  }
  FUN_0000_261c(param_2,uVar2,local_8,param_3,uVar3);
  return;
}



int FUN_0000_b04c(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if (param_2 == 5) {
    param_2 = 0;
    FUN_0000_5dce(-(param_1 * 8 + -0x14),1,0xdac,0xc80);
  }
  else {
    if (param_2 == 4) {
      if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
        uVar1 = 3;
      }
      else {
        uVar1 = 0xb;
      }
    }
    else {
      uVar1 = *(undefined2 *)0x13b2;
    }
    FUN_0000_2490(uVar1);
    FUN_0000_26bc(param_4 + 1,param_3,param_4 + -1);
    FUN_0000_2712(param_3 + 1,param_3 + -1,param_4);
    if (param_2 < 4) {
      FUN_0000_2490(*(int *)0x13b2 + 8);
      FUN_0000_2684(param_3,param_4);
    }
    if ((param_2 != 0) || (iVar2 = FUN_0000_3ab2(0x40,0), iVar2 < 4)) {
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}



undefined2 FUN_0000_b0fa(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  byte local_6;
  int local_4;
  
  uVar3 = FUN_0000_accc(param_2,param_3);
  if (0x9f < (int)uVar3) {
    local_4 = (uint)*(byte *)(((int)uVar3 >> 4) + 0x2e80) + param_1;
    if (param_1 == 0) {
      local_4 = 0xc;
    }
    FUN_0000_af3a(0,0,local_4);
    FUN_0000_af3a(1,0,local_4);
    local_6 = (byte)uVar3;
    if ((((param_1 == 1) || (param_1 == 2)) && (*(char *)0x6604 == '\x01')) &&
       ((local_6 & 0xf0) == 0xc0)) {
      cVar2 = FUN_0000_b04c(param_1,uVar3 & 7,*(byte *)((uVar3 & 7) + param_1 * 5 + 0x2e8b) + 0xe,
                            0x5f);
      pbVar5 = (byte *)((int)FUN_0000_5956 + 4 +
                       (uint)*(byte *)0x5895 * 0x40 + (param_2 & 7) * 8 + (param_3 & 7));
      pbVar1 = pbVar5;
      *pbVar1 = *pbVar1 & 0xf8;
      pbVar1 = pbVar5;
      *pbVar1 = *pbVar1 + cVar2;
    }
    if (param_1 == 1) {
      if (((local_6 & 0xf0) == 0xb0) && ((uVar3 & 0xf) != 0)) {
        FUN_0000_ac3c(uVar3 & 0xf);
      }
      else if ((*(char *)0x6604 == '\x03') &&
              (((local_6 & 0xf0) == 0xc0 && (iVar4 = FUN_0000_3ab2(0x40,0), iVar4 < 4)))) {
        FUN_0000_2490(*(int *)0x13ae + 8);
        FUN_0000_26bc(0x5d,0x57,0x5c);
        FUN_0000_26bc(0x5d,0x58,0x5b);
        FUN_0000_26bc(0x62,0x57,0x61);
        FUN_0000_26bc(99,0x58,0x61);
      }
    }
    if (((local_6 & 0xf0) != 0xe0) || (param_1 != 0)) {
      return 0;
    }
    *(undefined2 *)0x52c4 = 1;
  }
  return 1;
}



void FUN_0000_b272(int param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  int local_6;
  
  uVar3 = FUN_0000_accc(param_3,param_4);
  if ((int)uVar3 < 0xa0) {
    param_1 = param_1 + 0x10;
  }
  else {
    uVar4 = uVar3 & 0xf0;
    if (uVar4 != 0xa0) {
      if (uVar4 == 0xc0) {
        FUN_0000_af3a(param_2,0,param_1 + 0x14);
        if (1 < param_1) {
          return;
        }
        if (*(char *)0x6604 != '\x01') {
          return;
        }
        if (param_1 == 0) {
          local_6 = 0x21;
        }
        else {
          local_6 = 0x43;
        }
        if (param_2 != 0) {
          local_6 = 0xbe - local_6;
        }
        cVar2 = FUN_0000_b04c(param_1,uVar3 & 7,*(byte *)((uVar3 & 7) + param_1 * 5 + 0x2e9a) + 0xe,
                              local_6);
        pbVar5 = (byte *)((int)FUN_0000_5956 + 4 +
                         (uint)*(byte *)0x5895 * 0x40 + (param_3 & 7) * 8 + (param_4 & 7));
        pbVar1 = pbVar5;
        *pbVar1 = *pbVar1 & 0xf8;
        pbVar1 = pbVar5;
        *pbVar1 = *pbVar1 + cVar2;
        return;
      }
      if ((uVar4 != 0xe0) && (uVar4 != 0xf0)) goto LAB_0000_b365;
    }
    param_1 = param_1 + 4;
  }
LAB_0000_b365:
  FUN_0000_af3a(param_2,0,param_1);
  return;
}



void FUN_0000_b376(int param_1,int param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  byte *pbVar6;
  undefined2 unaff_DS;
  undefined2 uVar7;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
  if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined2 *)0x13b2;
  }
  FUN_0000_2490(uVar7);
  if (param_2 == 0) {
    if ((*(int *)0x52c8 != 0) && (*(int *)0x52c8 != 3)) {
      FUN_0000_2490(*(int *)0x13b2 + 8);
    }
    iVar3 = param_1 * 0x10;
    local_8 = (byte *)(iVar3 + 0x2ea4);
    puVar5 = (undefined *)(iVar3 + 0x2ea5);
    do {
      uVar1 = *puVar5;
      uVar2 = (uint)*local_8;
      FUN_0000_2684(uVar1,uVar2);
      FUN_0000_2684(uVar1,0xbe - uVar2);
      local_8 = local_8 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 < (undefined *)(iVar3 + 0x2eb5));
    uVar4 = (uint)*(byte *)(param_1 * 2 + 0x2f11);
    uVar2 = (uint)*(byte *)(param_1 * 2 + 0x2f10);
    FUN_0000_2684(uVar4,uVar2);
    iVar3 = 0xbe - uVar2;
  }
  else {
    if (param_2 == 1) {
      param_1 = param_1 * 10;
      local_c = (byte *)(param_1 + 0x2ed4);
      pbVar6 = (byte *)(param_1 + 0x2ed5);
      do {
        iVar3 = *pbVar6 + 0x60;
        uVar2 = (uint)*local_c;
        FUN_0000_2684(iVar3,uVar2 + 0x48);
        FUN_0000_2684(iVar3,0x76 - uVar2);
        local_c = local_c + 2;
        pbVar6 = pbVar6 + 2;
      } while (pbVar6 < (byte *)(param_1 + 11999));
      return;
    }
    if (param_2 == 2) {
      param_1 = param_1 * 8;
      local_10 = (byte *)(param_1 + 0x2ef2);
      pbVar6 = (byte *)(param_1 + 0x2ef3);
      do {
        iVar3 = *pbVar6 + 0x60;
        uVar2 = (uint)*local_10;
        FUN_0000_2684(iVar3,uVar2 + 0x50);
        FUN_0000_2684(iVar3,0x6e - uVar2);
        local_10 = local_10 + 2;
        pbVar6 = pbVar6 + 2;
      } while (pbVar6 < (byte *)(param_1 + 0x2efb));
      return;
    }
    if (param_2 != 3) {
      return;
    }
    uVar4 = *(byte *)(param_1 * 2 + 0x2f0b) + 0x60;
    uVar2 = (uint)*(byte *)(param_1 * 2 + 0x2f0a);
    FUN_0000_2684(uVar4,uVar2 + 0x58);
    iVar3 = 0x66 - uVar2;
  }
  FUN_0000_2684(uVar4,iVar3);
  return;
}



void FUN_0000_b542(int param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar2 = FUN_0000_accc(param_2,param_3);
  iVar3 = (int)uVar2 >> 4;
  if (((iVar3 < 1) || (7 < iVar3)) || ((iVar3 == 6 && ((uVar2 & 7) != 0)))) {
    if (iVar3 == 8) {
      FUN_0000_ae6e(uVar2 & 7,param_1);
    }
  }
  else {
    if (*(char *)(iVar3 + 0x2f16) != '\0') {
      iVar4 = (uint)*(byte *)(iVar3 + 0x2f16) + param_1 * 2;
      FUN_0000_af3a(0,1,iVar4);
      FUN_0000_af3a(1,1,iVar4);
    }
    if (*(char *)(iVar3 + 0x2f1e) != '\0') {
      iVar4 = (uint)*(byte *)(iVar3 + 0x2f1e) + param_1 * 2;
      FUN_0000_af3a(0,0,iVar4);
      FUN_0000_af3a(1,0,iVar4);
    }
    if (iVar3 == 5) {
      FUN_0000_b376(*(undefined *)0x2f26,param_1);
    }
  }
  if ((iVar3 < 9) &&
     ((*(byte *)((int)FUN_0000_5956 + 4 +
                (uint)*(byte *)0x5895 * 0x40 + (param_2 & 7) * 8 + (param_3 & 7)) & 8) != 0)) {
    iVar3 = param_1 * 2 + (uint)*(byte *)0x2f24;
    FUN_0000_af3a(0,1,iVar3);
    FUN_0000_af3a(1,1,iVar3);
  }
  if (((param_1 != 0) && (((byte)param_3 & 7) == *(byte *)0x5c64)) &&
     (((byte)param_2 & 7) == *(byte *)0x5c65)) {
    FUN_0000_ad0e(param_1);
  }
  if ((param_1 == 0) && (pcVar1 = (char *)0x2f26, *pcVar1 = *pcVar1 + '\x01', 2 < *(byte *)0x2f26))
  {
    *(undefined *)0x2f26 = 0;
  }
  return;
}



void FUN_0000_b680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_DS;
  uint local_8;
  
  *(undefined *)0x545e = 0xff;
  FUN_0000_2642(1);
  FUN_0000_2490(0);
  FUN_0000_24c6(0xb2,0xaf,0xe,0x60);
  FUN_0000_265c(0xb7,0x98,0x2a,0x28);
  *(undefined2 *)0x52c4 = 0;
  if ((*(char *)0x58a6 == '\0') && (*(char *)0x58a7 == '\0')) {
    FUN_0000_24c6(0xb7,0xb7,8,8);
  }
  else {
    uVar6 = (uint)*(byte *)0x5896;
    local_8 = (uint)*(byte *)0x5897;
    iVar2 = (uint)*(byte *)0x6603 * 2;
    iVar1 = *(int *)(iVar2 + 0x24d6);
    iVar2 = *(int *)(iVar2 + 0x24de);
    iVar5 = 0;
    do {
      iVar3 = FUN_0000_b0fa(iVar5,local_8,uVar6);
      if (iVar3 == 0) break;
      if ((iVar5 != 0) ||
         ((iVar3 = FUN_0000_accc(*(undefined *)0x5897,*(undefined *)0x5896), iVar3 != 0xe0 &&
          (param_1 != 0)))) {
        uVar4 = (uint)*(byte *)0x6603;
        FUN_0000_b272(iVar5,0,*(byte *)(uVar4 + 0x2f2c) + local_8,*(byte *)(uVar4 + 0x2f28) + uVar6)
        ;
        uVar4 = (uint)*(byte *)0x6603;
        FUN_0000_b272(iVar5,1,local_8 - *(byte *)(uVar4 + 0x2f2c),uVar6 - *(byte *)(uVar4 + 0x2f28))
        ;
      }
      uVar6 = uVar6 + iVar1;
      local_8 = local_8 + iVar2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      uVar6 = uVar6 - iVar1;
      local_8 = local_8 - iVar2;
      FUN_0000_b542(iVar5,local_8,uVar6);
    }
  }
  FUN_0000_2642(0);
  *(undefined2 *)0x52c4 = 0;
  return;
}



void __cdecl16near FUN_0000_b7d0(void)

{
  FUN_0000_4320();
  FUN_0000_b680(1);
  FUN_0000_24ee(0xb2,0xaf,0xe,0x10,0,1);
  FUN_0000_ac10();
  FUN_0000_9dc2();
  return;
}



undefined2 FUN_0000_b7fc(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 1;
  bVar1 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 + param_2 * 0x40 + (uint)*(byte *)0x5897 * 8);
  bVar2 = bVar1 & 0xf0;
  if ((param_1 != 0) &&
     (((((bVar1 & 0xf0) != 0 || (bVar2 == 0xe0)) || (bVar2 == 0xd0)) ||
      ((bVar2 == 0xc0 || (bVar2 == 0xb0)))))) {
    local_4 = 0;
  }
  return local_4;
}



undefined2 FUN_0000_b85a(undefined2 param_1,int param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 0;
  if (param_2 < 1) {
    uVar2 = 0x6c74;
  }
  else {
    uVar2 = 0x6c6c;
  }
  FUN_0000_3270(uVar2);
  if (((param_2 < 1) || (*(char *)0x5895 != '\a')) && ((-1 < param_2 || (*(char *)0x5895 != '\0'))))
  {
    iVar3 = FUN_0000_b7fc(param_1,param_2 + (uint)*(byte *)0x5895);
    if (iVar3 == 0) {
      FUN_0000_3270(0x6c7a);
      FUN_0000_5dce(0x32,1,2000,800);
    }
    else {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + (char)param_2;
      if (param_2 < 1) {
        *(undefined *)0x6602 = 4;
      }
      else {
        *(undefined *)0x6602 = 5;
      }
      FUN_0000_9d24(1);
      FUN_0000_b7d0();
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



void __cdecl16near FUN_0000_b8f8(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)0x5893;
  *(undefined *)0x5896 = *(undefined *)(uVar1 + 0x1e89);
  *(undefined *)0x5897 = *(undefined *)(uVar1 + 0x1eb1);
  FUN_0000_3270(0x6c84);
  if (*(char *)0x5895 == '\0') {
    *(undefined *)0x5895 = 0;
    uVar2 = 0x6c9c;
  }
  else {
    *(undefined *)0x5895 = 0xff;
    uVar2 = 0x6c8e;
  }
  FUN_0000_3270(uVar2);
  *(undefined *)0x5893 = 0;
  return;
}



undefined2 __cdecl16near FUN_0000_b93a(void)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_0000_3270(0x6caa);
  iVar2 = (uint)*(byte *)0x6603 * 2;
  if (((*(int *)(iVar2 + 0x24d6) + (uint)*(byte *)0x5896 & 7) != (uint)*(byte *)0x5c64) ||
     ((*(int *)(iVar2 + 0x24de) + (uint)*(byte *)0x5897 & 7) != (uint)*(byte *)0x5c65)) {
    FUN_0000_3270(0x6cb2);
    return 0;
  }
  *(undefined *)0x58a1 = 2;
  FUN_0000_9622();
  FUN_0000_96d6();
  FUN_0000_9646();
  FUN_0000_79a6(0,*(undefined *)0x5c67,2);
  if (*"\x02" == '\x05') {
    if (*(char *)0x5895 != '\0') {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + -1;
      goto LAB_0000_b9c1;
    }
  }
  else {
    if (*"\x02" != '\x06') goto LAB_0000_b9c1;
    if (*(byte *)0x5895 < 7) {
      pcVar1 = (char *)0x5895;
      *pcVar1 = *pcVar1 + '\x01';
      goto LAB_0000_b9c1;
    }
  }
  FUN_0000_b8f8();
LAB_0000_b9c1:
  FUN_0000_962e(1);
  if (*(char *)0x5893 != '\0') {
    FUN_0000_9d24(1);
    FUN_0000_b7d0();
  }
  return 0;
}



undefined2 __cdecl16near FUN_0000_ba00(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  bVar2 = false;
  bVar3 = false;
  uVar4 = FUN_0000_accc(*(undefined *)0x5897,*(undefined *)0x5896);
  uVar4 = uVar4 & 0xf0;
  bVar1 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 +
                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
  if (((uVar4 == 0x10) || (uVar4 == 0x30)) || (((bVar1 & 8) != 0 && (*(char *)0x57af != '\0')))) {
    bVar2 = true;
  }
  if (((uVar4 == 0x20) || (uVar4 == 0x30)) || (uVar4 == 0x60)) {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    FUN_0000_3270(0x6cba);
    while ((bVar2 && (bVar3))) {
      iVar5 = FUN_0000_408c();
      if (iVar5 == 3) {
LAB_0000_babc:
        bVar3 = false;
      }
      else if (iVar5 == 4) {
LAB_0000_bac4:
        bVar2 = false;
      }
      else if (iVar5 == 0x20) {
        FUN_0000_3270(0x6cc6);
        bVar3 = false;
        bVar2 = false;
      }
      else {
        if (iVar5 == 0x44) goto LAB_0000_bac4;
        if (iVar5 == 0x55) goto LAB_0000_babc;
      }
    }
  }
  else {
    if ((!bVar2) && (!bVar3)) {
      if ((bVar1 & 8) == 0) {
        uVar6 = 0x6cea;
      }
      else {
        uVar6 = 0x6cd6;
      }
      FUN_0000_3270(uVar6);
      return 0;
    }
    FUN_0000_3270(0x6cce);
  }
  if (((bVar2) && (iVar5 = FUN_0000_b85a(0,0xffff), iVar5 != 0)) ||
     ((bVar3 && (iVar5 = FUN_0000_b85a(0,1), iVar5 != 0)))) {
    FUN_0000_b8f8();
  }
  return 1;
}



void __cdecl16near FUN_0000_bc70(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_0000_3b1a(1);
  *(undefined2 *)0x5350 = 0x69;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_bf34(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_0000_2490(*(int *)0x13b6 + 8);
  iVar1 = param_2 + 6;
  param_2 = param_2 + 1;
  FUN_0000_2530(param_1,iVar1,param_1,param_2);
  FUN_0000_2530(param_1 + 1,iVar1,param_1 + 1,param_2);
  FUN_0000_2490(*(int *)0x13ae + 8);
  FUN_0000_2530(param_1 + 2,iVar1,param_1 + 2,param_2);
  FUN_0000_2530(param_1 + 3,iVar1,param_1 + 3,param_2);
  FUN_0000_2490(*(int *)0x13b2 + 8);
  FUN_0000_2530(param_1 + 4,iVar1,param_1 + 4,param_2);
  FUN_0000_2530(param_1 + 5,iVar1,param_1 + 5,param_2);
  FUN_0000_2490(*(int *)0x13b4 + 8);
  FUN_0000_2530(param_1 + 6,iVar1,param_1 + 6,param_2);
  FUN_0000_2530(param_1 + 7,iVar1,param_1 + 7,param_2);
  return;
}


/*
Unable to decompile 'FUN_0000_bff0'
Cause: Exception while decompiling 0000:bff0: process: timeout

*/

/*
Unable to decompile 'FUN_0000_c358'
Cause: Exception while decompiling 0000:c358: Decompiler process died

*/


void FUN_0000_c4f4(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  byte local_a;
  int local_4;
  
  uVar2 = (uint)*(byte *)0x3840;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if ((uint)*(byte *)(uVar3 + 0x383a) == (*(byte *)0x5893 & 0xf) * 0x10 + param_1) {
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = (uint)*(byte *)0x5893;
  local_4 = uVar2 - 0x21;
  if (0 < local_4) {
    local_4 = uVar2 - 0x22;
  }
  uVar2 = local_4 * 0x10 + param_1;
  uVar3 = (int)uVar2 >> 0xf;
  local_a = (byte)uVar2;
  pbVar1 = (byte *)((((int)((uVar2 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3) + 0x58e0);
  *pbVar1 = *pbVar1 | '\x01' << (local_a & 7);
  return;
}



bool FUN_0000_c584(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  byte local_c;
  int local_6;
  
  uVar1 = (uint)*(byte *)0x5893;
  local_6 = uVar1 - 0x21;
  if (0 < local_6) {
    local_6 = uVar1 - 0x22;
  }
  uVar1 = local_6 * 0x10 + param_1;
  uVar2 = (int)uVar1 >> 0xf;
  local_c = (byte)uVar1;
  return (*(byte *)((((int)((uVar1 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2) + 0x58e0) &
         '\x01' << (local_c & 7)) != 0;
}



bool FUN_0000_c5c0(void)

{
  byte bVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined in_stack_00000000;
  
  *(undefined *)(unaff_BP + -2) = in_stack_00000000;
  bVar1 = '\x01' << (*(byte *)((int)&DAT_0000_fff6 + unaff_BP) & 7);
  *(byte *)(unaff_BP + -6) = bVar1;
  return (*(byte *)(unaff_BP + -2) & bVar1) != 0;
}



void __cdecl16near FUN_0000_c5ea(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  pbVar4 = (byte *)((int)FUN_0000_5956 + 4);
  iVar5 = 0x200;
  do {
    bVar2 = *pbVar4;
    if ((bVar2 & 0xf0) == 0xf0) {
      iVar3 = FUN_0000_c584(bVar2 & 0xf);
      if (iVar3 != 0) {
        pbVar1 = pbVar4;
        *pbVar1 = *pbVar1 & 0xaf;
      }
    }
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



void FUN_0000_c62e(int param_1,char param_2)

{
  undefined uVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  int local_4;
  
  local_a = 0;
  local_c = 0;
  local_4 = 0;
  local_6 = 0;
  if (param_1 == 0) {
    local_a = 1;
  }
  else if (param_1 == 1) {
    local_c = 1;
    local_4 = 10;
  }
  else if (param_1 == 2) {
    local_a = 1;
    local_6 = 10;
  }
  else if (param_1 == 3) {
    local_c = 1;
  }
  local_6 = local_6 << 5;
  iVar2 = 0xb;
  do {
    *(undefined *)((int)FUN_0000_ad0e + 6 + local_6 + local_4) = 0xff;
    local_4 = local_4 + local_a;
    local_6 = local_6 + local_c * 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_1 == 0) && (param_2 == -0x20)) {
    uVar1 = *(undefined *)0xbb14;
    *(undefined *)0xae19 = uVar1;
    *(undefined *)0xad59 = uVar1;
  }
  if ((param_1 == 3) && (param_2 == -0x20)) {
    uVar1 = *(undefined *)0xbb14;
    *(undefined *)0xadbc = uVar1;
    *(undefined *)0xadb6 = uVar1;
  }
  return;
}



void FUN_0000_c6f8(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  int local_4;
  
  local_a = 0;
  local_c = 0;
  local_4 = 3;
  local_6 = 3;
  if (param_1 == 0) {
    local_a = 1;
    local_6 = 1;
  }
  else if (param_1 == 1) {
    local_c = 1;
    local_4 = 9;
  }
  else if (param_1 == 2) {
    local_a = 1;
    local_6 = 9;
  }
  else if (param_1 == 3) {
    local_c = 1;
    local_4 = 1;
  }
  local_6 = local_6 << 5;
  iVar1 = 5;
  do {
    *(undefined *)((int)FUN_0000_ad0e + 6 + local_6 + local_4) = *(undefined *)0xbb15;
    local_4 = local_4 + local_a;
    local_6 = local_6 + local_c * 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_0000_c79e(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_c;
  int local_a;
  int local_6;
  int local_4;
  
  local_a = 0;
  local_c = 0;
  if (param_1 == 0) {
    local_a = 1;
    local_4 = 2;
    local_6 = 1;
    goto LAB_0000_c7d5;
  }
  if (param_1 == 1) {
    local_4 = 9;
  }
  else {
    if (param_1 == 2) {
      local_a = 1;
      local_4 = 2;
      local_6 = 9;
      goto LAB_0000_c7d5;
    }
    if (param_1 != 3) goto LAB_0000_c7d5;
    local_4 = 1;
  }
  local_c = 1;
  local_6 = 2;
LAB_0000_c7d5:
  iVar1 = local_6 << 5;
  iVar2 = 7;
  do {
    *(undefined *)((int)FUN_0000_ad0e + 6 + iVar1 + local_4) = *(undefined *)0xbb15;
    local_4 = local_4 + local_a;
    iVar1 = iVar1 + local_c * 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_0000_c84e(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  uint local_6;
  uint local_4;
  
  local_4 = (uint)*(byte *)0x5896;
  local_6 = (uint)*(byte *)0x5897;
  if (param_1 == 0) {
    local_6 = local_6 - 1;
  }
  else if (param_1 == 1) {
    local_4 = local_4 + 1;
  }
  else if (param_1 == 2) {
    local_6 = local_6 + 1;
  }
  else if (param_1 == 3) {
    local_4 = local_4 - 1;
  }
  bVar1 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5895 * 0x40 + (local_6 & 7) * 8 + (local_4 & 7)) & 0xf0;
  if (bVar1 < 0xa0) {
    FUN_0000_c79e(param_1);
  }
  if (((bVar1 == 0xb0) || (bVar1 == 0xc0)) || (bVar1 == 0xd0)) {
    FUN_0000_c62e(param_1,*(byte *)((int)FUN_0000_5956 + 4 +
                                   (uint)*(byte *)0x5896 +
                                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8) &
                          0xf0);
  }
  else {
    FUN_0000_c6f8(param_1);
  }
  return;
}



void __cdecl16near FUN_0000_c91c(void)

{
  byte bVar1;
  undefined uVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined2 unaff_DS;
  
  puVar7 = (undefined *)0xad34;
  uVar2 = *(undefined *)0xbb14;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = uVar2;
  }
  puVar7 = (undefined *)0xae34;
  uVar2 = *(undefined *)0xbb14;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = uVar2;
  }
  puVar8 = (undefined *)0xad15;
  puVar7 = (undefined *)0xad1d;
  do {
    uVar2 = *(undefined *)0xbb14;
    *puVar7 = uVar2;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 0x20;
    puVar7 = puVar7 + 0x20;
  } while (puVar7 < (undefined *)0xae7d);
  *(undefined *)0xae5e = 0xff;
  *(undefined *)0xae54 = 0xff;
  *(undefined *)0xad1e = 0xff;
  *(undefined *)((int)FUN_0000_ad0e + 6) = 0xff;
  bVar4 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 +
                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
  bVar1 = bVar4 & 0xf0;
  if ((bVar1 != 0) && (bVar1 < 0x80)) {
    bVar4 = bVar4 >> 4;
    cVar5 = *(char *)(bVar4 + 0x244a);
    if (cVar5 != '\0') {
      *(char *)0xadb9 = cVar5;
    }
    if (bVar4 == 3) {
      *(undefined *)0xbb16 = 1;
      FUN_0000_89dc(0);
    }
    else {
      *(undefined *)0xbb16 = 0;
    }
  }
  iVar6 = 0;
  do {
    FUN_0000_c84e(iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return;
}



void __cdecl16near FUN_0000_c9ee(void)

{
  char cVar1;
  undefined *puVar2;
  undefined uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  char *pcVar8;
  int *piVar9;
  undefined *puVar10;
  undefined2 unaff_DS;
  int local_2e [16];
  undefined *local_e;
  undefined *local_c;
  undefined *local_a;
  undefined *local_8;
  undefined *local_6;
  uint local_4;
  
  puVar7 = (undefined *)((int)FUN_0000_ad0e + 6);
  do {
    uVar3 = *(undefined *)0xbb15;
    puVar10 = puVar7;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = uVar3;
    }
    puVar7 = puVar7 + 0x20;
  } while (puVar7 < (undefined *)((int)FUN_0000_ae6e + 6));
  if ((*(byte *)0x58a1 & 4) != 0) {
    *(undefined *)0xadb9 = 0xb3;
  }
  FUN_0000_c91c();
  iVar6 = 0;
  do {
    *(undefined *)(iVar6 + -0x51d9) = 0xff;
    *(undefined *)(iVar6 + -0x51e1) = 0xff;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  puVar7 = (undefined *)0xad7f;
  local_a = (undefined *)0xad5f;
  local_6 = (undefined *)0xad9f;
  local_e = (undefined *)0xad3f;
  iVar6 = 0;
  bVar4 = *(byte *)0x58a1;
  do {
    if ((bVar4 & 4) == 0) {
      *puVar7 = *(undefined *)(iVar6 + 0x2470);
      *local_a = *(undefined *)(iVar6 + 0x246a);
      *local_6 = *(undefined *)(iVar6 + 0x245e);
      *local_e = *(undefined *)(iVar6 + 0x2464);
    }
    else {
      uVar3 = *(undefined *)(iVar6 + 0x2452);
      *local_e = uVar3;
      *local_6 = uVar3;
      *local_a = uVar3;
      *puVar7 = uVar3;
    }
    puVar7 = puVar7 + 1;
    local_a = local_a + 1;
    local_6 = local_6 + 1;
    local_e = local_e + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  iVar6 = 0;
  bVar4 = *(byte *)0x58a1;
  do {
    if ((bVar4 & 4) == 0) {
      *puVar7 = *(undefined *)(iVar6 + 0x2464);
      *local_a = *(undefined *)(iVar6 + 0x245e);
      *local_6 = *(undefined *)(iVar6 + 0x246a);
      *local_e = *(undefined *)(iVar6 + 0x2470);
    }
    else {
      uVar3 = *(undefined *)(iVar6 + 0x2458);
      *local_e = uVar3;
      *local_6 = uVar3;
      *local_a = uVar3;
      *puVar7 = uVar3;
    }
    puVar7 = puVar7 + 1;
    local_a = local_a + 1;
    local_6 = local_6 + 1;
    local_e = local_e + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  local_8 = (undefined *)0xaddf;
  local_c = (undefined *)0xadff;
  iVar6 = 0;
  cVar1 = *(char *)0x6603;
  bVar4 = *(byte *)0x58a1;
  do {
    if ((bVar4 & 4) == 0) {
      if (cVar1 == '\0') {
        *local_8 = *(undefined *)(iVar6 + 0x2476);
        uVar3 = *(undefined *)((int)FUN_0000_2490 + 6 + iVar6);
      }
      else if (cVar1 == '\x01') {
        *local_8 = *(undefined *)(iVar6 + 0x2486);
        uVar3 = *(undefined *)(iVar6 + 0x24a6);
      }
      else if (cVar1 == '\x02') {
        *local_8 = *(undefined *)(iVar6 + 0x24a6);
        uVar3 = *(undefined *)(iVar6 + 0x2486);
      }
      else {
        if (cVar1 != '\x03') goto LAB_0000_cb55;
        *local_8 = *(undefined *)((int)FUN_0000_2490 + 6 + iVar6);
        uVar3 = *(undefined *)(iVar6 + 0x2476);
      }
      *local_c = uVar3;
    }
    else {
      *local_c = *(undefined *)((int)FUN_0000_24c6 + iVar6);
      *local_8 = *(undefined *)(iVar6 + 0x24b6);
    }
LAB_0000_cb55:
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    iVar6 = iVar6 + 1;
    if (0xf < iVar6) {
      iVar6 = 0;
      piVar9 = local_2e;
      do {
        *piVar9 = iVar6;
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      iVar6 = 0;
      piVar9 = local_2e;
      do {
        iVar5 = FUN_0000_3ab2(0xf,0);
        local_4 = *piVar9;
        *piVar9 = local_2e[iVar5];
        local_2e[iVar5] = local_4;
        *(undefined *)(iVar6 + -0x5241) = 0;
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      if ((*(byte *)0x58a1 & 4) == 0) {
        bVar4 = *(byte *)0x5c67;
      }
      else {
        iVar6 = FUN_0000_3ab2(7,0);
        bVar4 = *(byte *)(iVar6 + 0x173c);
      }
      pcVar8 = (char *)((uint)bVar4 * 8 + 0x13c2);
      local_4 = FUN_0000_3ab2(*pcVar8,1);
      if ((*pcVar8 == '\b') || (*pcVar8 == '\x10')) {
        local_4 = (uint)*(byte *)((uint)bVar4 * 8 + 0x13c2);
      }
      if (0 < (int)local_4) {
        piVar9 = local_2e;
        do {
          *(char *)(*piVar9 + -0x5241) = bVar4 * '\x04' + '@';
          piVar9 = piVar9 + 1;
        } while (piVar9 != local_2e + local_4);
      }
      return;
    }
  } while( true );
}



void __cdecl16near FUN_0000_cc8a(void)

{
  char *pcVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  cVar2 = *"\x02";
  if (cVar2 == '\x01') {
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + -1;
    *(undefined *)0x6603 = 3;
    *(undefined *)0x6602 = 3;
    if (7 < *(byte *)0x5896) {
      *(undefined *)0x5896 = 7;
    }
  }
  else if (cVar2 == '\x02') {
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined *)0x6603 = 1;
    *(undefined *)0x6602 = 1;
    if (7 < *(byte *)0x5896) {
      *(undefined *)0x5896 = 0;
    }
  }
  else if (cVar2 == '\x03') {
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + -1;
    *(undefined *)0x6603 = 0;
    *(undefined *)0x6602 = 0;
    if (7 < *(byte *)0x5897) {
      *(undefined *)0x5897 = 7;
    }
  }
  else if (cVar2 == '\x04') {
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + '\x01';
    *(undefined *)0x6603 = 2;
    *(undefined *)0x6602 = 2;
    if (7 < *(byte *)0x5897) {
      *(undefined *)0x5897 = 0;
    }
  }
  else {
    if (cVar2 == '\x05') {
      if (*(char *)0x5895 != '\0') {
        pcVar1 = (char *)0x5895;
        *pcVar1 = *pcVar1 + -1;
        *(undefined *)0x6602 = 4;
        return;
      }
    }
    else {
      if (cVar2 != '\x06') {
        return;
      }
      if (*(char *)0x5895 != '\a') {
        pcVar1 = (char *)0x5895;
        *pcVar1 = *pcVar1 + '\x01';
        *(undefined *)0x6602 = 5;
        return;
      }
    }
    FUN_0000_96be();
    *(undefined *)0x5893 = 0;
  }
  return;
}



void FUN_0000_cd4e(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x5893 != '\0') {
    if ((*(byte *)0xbb17 & 2) != 0) {
      FUN_0000_2a4e();
    }
    if ((*(byte *)0xbb17 & 1) == 0) {
      do {
        iVar1 = FUN_0000_25ce(*(undefined2 *)((uint)*(byte *)0x6604 * 2 + 0x25f2));
        *(int *)0xa9c0 = iVar1;
      } while (iVar1 == 0);
      do {
        iVar1 = FUN_0000_25ce(*(undefined2 *)0x25f2);
        *(int *)0xa9c4 = iVar1;
      } while (iVar1 == 0);
    }
    *(undefined *)0xbb17 = 1;
    if (param_1 != 0) {
      *(undefined *)0x5c63 = 0;
      *(undefined *)0x5c62 = 0;
      *(undefined *)0x5c65 = 0xff;
      *(undefined *)0x5c64 = 0xff;
      *(undefined *)0x5c67 = 0xff;
    }
    FUN_0000_2490(0);
    FUN_0000_24c6(0xb7,0xb7,8,8);
    FUN_0000_2642(1);
    FUN_0000_24c6(0xb7,0xb7,8,8);
    FUN_0000_2642(0);
  }
  return;
}



void __cdecl16near FUN_0000_cde0(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((*(byte *)0xbb17 & 1) != 0) {
    if (*(char *)0x5c67 != -1) {
      FUN_0000_2604(*(undefined2 *)0xa9c6);
    }
    *(undefined2 *)0xa9c6 = 0;
    FUN_0000_2604(*(undefined2 *)0xa9c4);
    FUN_0000_2604(*(undefined2 *)0xa9c0);
  }
  if ((*(byte *)0xbb17 & 2) == 0) {
    do {
      iVar1 = FUN_0000_2a14(*(undefined2 *)0x25f0);
    } while (iVar1 == 0);
  }
  if ((*(byte *)0xbb17 & 4) == 0) {
    FUN_0000_89be(0);
  }
  *(undefined *)0xbb17 = 6;
  return;
}



void FUN_0000_ce2e(int param_1,int param_2)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined *local_22;
  undefined *local_20;
  int local_14;
  uint local_10;
  int local_e;
  int local_c;
  byte local_8 [4];
  int local_4;
  
  local_4 = 4;
  if (param_1 == 1) goto LAB_0000_cef8;
  cVar3 = *(char *)0x6603;
  if (cVar3 == '\0') {
LAB_0000_ce6c:
    local_4 = 3;
  }
  else if (cVar3 == '\x01') {
    local_4 = 2;
  }
  else if (cVar3 == '\x03') {
    local_4 = 1;
  }
  else if (cVar3 == '\x05') goto LAB_0000_ce6c;
  FUN_0000_8356();
  local_10 = 0;
  uVar5 = (uint)*(byte *)0x585b;
  if (uVar5 != 0) {
    puVar6 = (undefined *)0xba1a;
    puVar8 = (undefined *)0x5c5c;
    local_20 = (undefined *)0xba1b;
    local_22 = (undefined *)0x5c5d;
    iVar7 = 0x11;
    iVar4 = 0xb;
    do {
      uVar1 = *(undefined *)((int)FUN_0000_ad0e + 6 + local_4 * 0x20 + iVar4);
      *puVar8 = uVar1;
      *puVar6 = uVar1;
      uVar1 = *(undefined *)((int)FUN_0000_ad0e + 6 + local_4 * 0x20 + iVar7);
      *local_22 = uVar1;
      *local_20 = uVar1;
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 8;
      puVar8 = puVar8 + 8;
      local_20 = local_20 + 8;
      local_22 = local_22 + 8;
      local_10 = local_10 + 1;
    } while (local_10 != uVar5);
  }
LAB_0000_cef8:
  if ((0 < param_1) && (((0xef < param_2 && (param_1 == 3)) || (param_1 < 3)))) {
    local_c = 0xb;
    local_e = 0xb;
    local_4 = 0xb;
    iVar7 = 0;
    do {
      iVar4 = FUN_0000_3ab2(7,0);
      local_8[iVar7] = *(byte *)((int)FUN_0000_3858 + 6 + iVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    local_22 = (undefined *)0x10;
    do {
      bVar2 = *(byte *)(local_4 + -0x524c);
      if (bVar2 != 0) {
        if (((bVar2 < 0x40) || ((bVar2 & 0xfc) == 0xb4)) || ((bVar2 & 0xfc) == 0xe8)) {
          local_14 = 2;
          uVar5 = (uint)bVar2;
        }
        else {
          local_14 = 0;
          uVar5 = bVar2 - 0x40 >> 2;
        }
        if ((bVar2 & 0xfc) == 0xec) {
          uVar5 = (uint)local_8[bVar2 & 3];
        }
        iVar7 = FUN_0000_7f26(*(undefined *)0x5895,*(undefined *)(local_e + -0x520c),
                              *(undefined *)(local_c + -0x522c),local_14,uVar5);
        if (local_14 == 2) {
          if (uVar5 == 1) {
            cVar3 = *(char *)0x5895 * '\x03' + '\a';
          }
          else if (uVar5 == 2) {
            cVar3 = FUN_0000_3ab2((uint)*(byte *)0x5895 * 10 + 10,1);
          }
          else {
            if (0xf < uVar5) goto LAB_0000_d035;
            cVar3 = FUN_0000_3ab2(*(byte *)(uVar5 + 0x383f) - 1,0);
            cVar3 = *(char *)(uVar5 + 0x384d) + cVar3;
          }
          *(char *)(iVar7 * 8 + 0x5c5f) = cVar3;
        }
      }
LAB_0000_d035:
      local_4 = local_4 + 1;
      local_c = local_c + 1;
      local_e = local_e + 1;
      local_22 = (undefined *)((int)local_22 + -1);
    } while (local_22 != (undefined *)0x0);
  }
  return;
}


/*
Unable to decompile 'FUN_0000_ddbc'
Cause: Exception while decompiling 0000:ddbc: process: timeout

*/

/*
Unable to decompile 'FUN_0000_fc56'
Cause: Exception while decompiling 0000:fc56: process: timeout

*/
