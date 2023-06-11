


void FUN_0000_1d70(int param_1)

{
  code **ppcVar1;
  code *pcVar2;
  int unaff_DS;

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



void FUN_0000_1d9d(void)

{
  code *pcVar1;
  code **unaff_SI;
  code **unaff_DI;
  int unaff_DS;

  while (unaff_SI < unaff_DI) {
    unaff_DI = unaff_DI + -1;
    pcVar1 = *unaff_DI;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
  }
  return;
}



void FUN_0000_1dac(void)

{
  code **ppcVar1;
  code **ppcVar2;
  code **unaff_SI;
  code **unaff_DI;
  code **ppcVar3;
  int unaff_DS;

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



char * FUN_0000_1e22(char *param_1,char param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int unaff_DS;
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



int * FUN_0000_1f52(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_DS;

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



void FUN_0000_1f7d(int param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  int unaff_ES;

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



void FUN_0000_1fa6(void)

{
  int unaff_DS;

  FUN_0000_1f7d(0xfc);
  if (*(int *)0x52b6 != 0) {
    (**(code **)0x52b6)();
  }
  FUN_0000_1f7d(0xff);
  return;
}



uint FUN_0000_21c2(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar4;
  uint uVar3;
  int iVar5;
  byte *pbVar6;
  int unaff_DS;

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



byte * FUN_0000_21f6(void)

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
  int unaff_DS;
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



void FUN_0000_224a(void)

{
  uint in_CX;
  uint uVar1;

  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void FUN_0000_22ea(void)

{
  int in_AX;
  int in_BX;
  int unaff_DS;

  if ((((*(int *)0x52d0 <= in_AX) && (in_AX <= *(int *)0x52d2)) && (*(int *)0x52d4 <= in_BX)) &&
     (in_BX <= *(int *)0x52d6)) {
    return;
  }
  return;
}



void FUN_0000_2306(void)

{
  return;
}



int FUN_0000_2355(void)

{
  int uVar1;
  int in_CX;
  int in_BX;
  int uVar2;
  uint unaff_SI;
  uint unaff_DI;
  int unaff_DS;
  int uVar3;

  uVar3 = FUN_0000_2442();
  uVar2 = (int)((ulong)uVar3 >> 0x10);
  uVar1 = (int)uVar3;
  if ((unaff_SI == 0) && (unaff_DI == 0)) {
    return uVar1;
  }
  if ((unaff_DI & unaff_SI) != 0) {
    return uVar1;
  }
  *(int *)0x52fa = uVar1;
  *(int *)0x52fc = in_BX;
  *(int *)0x52fe = in_CX;
  *(int *)0x5300 = uVar2;
  if (unaff_SI != 0) {
    uVar1 = FUN_0000_23b1();
    *(int *)0x52fa = uVar1;
    *(int *)0x52fc = uVar2;
    in_BX = uVar2;
  }
  if (unaff_DI != 0) {
    uVar1 = FUN_0000_23b1();
    *(int *)0x52fe = uVar1;
    *(int *)0x5300 = in_BX;
  }
  return *(int *)0x52fa;
}



void FUN_0000_23b1(void)

{
  int in_AX;
  uint uVar1;
  int in_CX;
  int in_DX;
  uint in_BX;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;
  int uVar5;

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



void FUN_0000_2442(void)

{
  return;
}



void FUN_0000_2490(uint param_1)

{
  code **ppcVar1;
  uint uVar2;
  int unaff_DS;

  if (param_1 != 0xffff) {
    uVar2 = 0xf;
    if (*(int *)0x52c8 == 0) {
      uVar2 = 3;
    }
    param_1 = param_1 & uVar2;
  }
  *(uint *)0x52da = param_1;
  if (param_1 != 0xffff) {
    *(int *)0x5350 = 0x2d;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_24c6(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_2306();
  *(int *)0x5350 = 0x3f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_24ee(void)

{
  code **ppcVar1;
  int unaff_DS;
  int in_stack_00000008;
  uint in_stack_0000000a;
  uint in_stack_0000000c;

  if (((in_stack_0000000c != in_stack_0000000a) && (in_stack_0000000c < 2)) &&
     (in_stack_0000000a < 2)) {
    FUN_0000_2306();
    *(int *)0x5350 = 0x18;
    ppcVar1 = (code **)0x5350;
    in_stack_00000008 = (**ppcVar1)();
  }
  return in_stack_00000008;
}



void FUN_0000_2530(void)

{
  FUN_0000_254d();
  return;
}



void FUN_0000_254d(void)

{
  code **ppcVar1;
  int in_AX;
  int in_CX;
  int in_DX;
  int in_BX;
  int unaff_DS;
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
  int uVar3;

  uVar3 = CONCAT22(in_DX,in_AX);
  *(int *)0x52cc = in_CX;
  *(int *)0x52ce = in_DX;
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
      *(int *)0x5350 = 0x39;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)();
      return;
    }
    *(int *)0x5350 = 0x30;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    return;
  }
  if ((int)uVar3 == in_CX) {
    FUN_0000_2306();
    *(int *)0x5350 = 0x3c;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    return;
  }
  *(int *)0x5350 = 0x33;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_25a6(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_2306();
  *(int *)0x5350 = 0x3f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2642(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0xf;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_26bc(int param_1)

{
  code **ppcVar1;
  int unaff_DS;
  bool bVar2;

  *(int *)0x52cc = param_1;
  bVar2 = false;
  if ((*(int *)0x52c4 != 0) && (FUN_0000_26ed(), bVar2)) {
    return;
  }
  *(int *)0x5350 = 0x39;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_26ed(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  int unaff_DS;

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



void FUN_0000_2712(int param_1)

{
  code **ppcVar1;
  int unaff_DS;
  bool bVar2;

  *(int *)0x52ce = param_1;
  bVar2 = false;
  if ((*(int *)0x52c4 == 0) || (FUN_0000_274b(), !bVar2)) {
    *(int *)0x5350 = 0x3c;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_274b(void)

{
  int in_DX;
  int in_BX;
  int unaff_DS;

  if ((((*(int *)0x52d4 <= in_BX) && (in_DX <= *(int *)0x52d6)) && (-1 < in_BX)) &&
     ((in_BX < 200 && (in_DX < 200)))) {
    return;
  }
  return;
}



void FUN_0000_298e(int param_1,int param_2)

{
  code **ppcVar1;
  int unaff_DS;

  if (param_2 != param_1) {
    *(int *)0x5350 = 0x1b;
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



void FUN_0000_2a64(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x4e;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_2a88(void)

{
  code **ppcVar1;
  uint uVar2;
  int unaff_DS;

  uVar2 = 0;
  while( true ) {
    do {
      *(int *)0x5350 = 0x66;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)();
      *(int *)0x5350 = 0x66;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)();
      uVar2 = uVar2 + 2;
      if (uVar2 == 0x100) {
        return 0;
      }
    } while ((uVar2 & 7) != 0);
    if (*(char *)0x5893 == 'B') break;
    FUN_0000_7330();
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(1);
}



void FUN_0000_2b32(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x60;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2b60(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x6f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2ba4(void)

{
  int iVar1;
  int *puVar2;
  int unaff_DS;

  puVar2 = (int *)0x535e;
  *(int *)0x539a = 0x535e;
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
  *(int *)0x5386 = 0;
  return;
}



void FUN_0000_2bd4(void)

{
  int *piVar1;
  code *pcVar2;
  int uVar3;
  int unaff_ES;
  int unaff_DS;
  int in_stack_0000000a;

  *(int *)0x5356 = 0;
  *(int *)0x535a = 0;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  do {
  } while (*(int *)0x535a == 0);
  *(int *)0x535a = 0;
  do {
    piVar1 = (int *)0x5356;
    *piVar1 = *piVar1 + 1;
  } while (*(int *)0x535a == 0);
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  *(int *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
  pcVar2 = (code *)swi(0x12);
  uVar3 = (*pcVar2)();
  *(int *)0x5358 = uVar3;
  return;
}



void FUN_0000_2c46(void)

{
  int unaff_DS;

  *(int *)0x53a4 = 0;
  *(int *)0x53a6 = 0;
  *(int *)0x53a8 = 0;
  return;
}



int FUN_0000_2c7d(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_DS;
  byte in_CF;
  bool bVar6;
  int uVar7;
  int uVar8;

  FUN_0000_2fa8();
  if ((bool)in_CF) {
    *(int *)0x53ba = 0;
    *(int *)0x53bc = 0;
    *(int *)0x53be = 0;
    *(int *)0x53b8 = 0;
    pcVar1 = (code *)swi(0x21);
    iVar3 = (*pcVar1)();
    if (!(bool)in_CF) {
      *(int *)0x53b8 = iVar3;
      uVar7 = 0;
      pcVar1 = (code *)swi(0x21);
      iVar3 = (*pcVar1)();
      if (!(bool)in_CF) {
        uVar5 = *(uint *)0x53b4;
        uVar4 = *(uint *)0x53b6;
        iVar3 = CONCAT11(uVar7,4);
        do {
          uVar2 = uVar4 & 1;
          uVar4 = uVar4 >> 1;
          in_CF = (uVar5 & 1) != 0;
          uVar5 = uVar5 >> 1 | (uint)(uVar2 != 0) << 0xf;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar3 = FUN_0000_2fe6();
        if ((bool)in_CF) {
          *(int *)0x53ba = 0xffff;
        }
        else {
          *(int *)0x53ba = iVar3;
          *(int *)0x53bc = iVar3;
          iVar3 = FUN_0000_2fe6();
          if ((bool)in_CF) {
            *(int *)0x53ba = 0xffff;
          }
          else {
            *(int *)0x53be = iVar3;
            FUN_0000_2d7a();
            iVar3 = *(int *)0x53b4;
            in_CF = 0;
            if (iVar3 == 0) {
              iVar3 = -1;
            }
          }
        }
      }
    }
    uVar7 = *(int *)0x53be == 0;
    if (!(bool)uVar7) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    if (!(bool)uVar7) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
    }
    if (*(int *)0x53ba != -1) {
      if ((in_CF & 1) != 0) {
        return iVar3;
      }
      return iVar3;
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
  uVar8 = FUN_0000_3074();
  iVar3 = (int)uVar8;
  if (!(bool)in_CF) {
    if (iVar3 == 0) {
      if ((int)((ulong)uVar8 >> 0x10) == 0) {
        return 0;
      }
      iVar3 = -1;
    }
    bVar6 = false;
    if (iVar3 != 0) {
      bVar6 = (iVar3 - 1U >> 3 & 1) != 0;
    }
    FUN_0000_2fe6();
    if (bVar6) goto LAB_0000_2c6a;
    FUN_0000_302e();
    if (!bVar6) {
      return param_3;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    iVar3 = param_5;
  }
  return iVar3;
}



void FUN_0000_2d7a(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *puVar3;
  int *puVar4;
  int uVar5;
  code *pcVar6;
  byte bVar7;
  int uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int *puVar13;
  int *puVar14;
  int unaff_DS;
  byte bVar15;

  *(int *)0x53d2 = 9;
  *(int *)0x53c2 = 0;
  *(int *)0x53c4 = 0;
  *(int *)0x53cc = 0x102;
  *(int *)0x53d0 = 0x200;
  *(int *)0x53c0 = *(int *)0x5354;
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
      uVar5 = *(int *)0x53be;
      puVar13 = (int *)0x0;
      for (iVar10 = 0x400 - (int)puVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar3 = puVar13;
        puVar13 = puVar13 + 1;
        puVar1 = puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        *puVar3 = *(int *)puVar1;
      }
      pcVar6 = (code *)swi(0x21);
      (*pcVar6)();
      puVar9 = (uint *)0x0;
    }
    uVar5 = *(int *)0x53be;
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
      *(int *)0x53d2 = 9;
      *(int *)0x53d0 = 0x200;
      *(int *)0x53cc = 0x102;
      LOCK();
      puVar1 = (uint *)0x53c4;
      uVar11 = *puVar1;
      *puVar1 = *(int *)0x53c4 + *(int *)0x53d2;
      UNLOCK();
      puVar9 = (uint *)(uVar11 / 8);
      uVar11 = uVar11 % 8;
      if ((uint *)0x3fc < puVar9) {
        *(int *)0x53c4 = uVar11 + *(int *)0x53d2;
        uVar5 = *(int *)0x53be;
        puVar13 = (int *)0x0;
        for (iVar10 = 0x400 - (int)puVar9; iVar10 != 0; iVar10 = iVar10 + -1) {
          puVar3 = puVar13;
          puVar13 = puVar13 + 1;
          puVar1 = puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
          *puVar3 = *(int *)puVar1;
        }
        pcVar6 = (code *)swi(0x21);
        (*pcVar6)();
        puVar9 = (uint *)0x0;
      }
      uVar5 = *(int *)0x53be;
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
      uVar8 = (int)uVar12;
      *(int *)0x53d5 = uVar8;
      *(int *)0x53d4 = uVar8;
      puVar13 = (int *)*(int *)0x53c2;
      *puVar13 = uVar8;
      piVar2 = (int *)0x53c2;
      *piVar2 = *piVar2 + 1;
      if (puVar13 == (int *)0xf) {
        piVar2 = (int *)0x53ba;
        *piVar2 = *piVar2 + 1;
        *(int *)0x53c2 = 0;
      }
    }
    else {
      *(uint *)0x53c6 = uVar12;
      *(uint *)0x53ca = uVar12;
      uVar5 = *(int *)0x53c0;
      if (*(int *)0x53cc <= (int)uVar12) {
        *(int *)0x53c6 = *(int *)0x53c8;
        piVar2 = (int *)0x53ce;
        *piVar2 = *piVar2 + 1;
      }
      while (0xff < *(int *)0x53c6) {
        iVar10 = *(int *)0x53c6;
        piVar2 = (int *)0x53ce;
        *piVar2 = *piVar2 + 1;
        *(int *)0x53c6 = *(int *)(iVar10 * 3);
      }
      uVar5 = *(int *)0x53c6;
      uVar8 = (int)uVar5;
      *(int *)0x53d4 = uVar8;
      *(int *)0x53d5 = uVar8;
      piVar2 = (int *)0x53ce;
      *piVar2 = *piVar2 + 1;
      for (iVar10 = *(int *)0x53ce; iVar10 != 0; iVar10 = iVar10 + -1) {
        puVar13 = (int *)*(int *)0x53c2;
        *puVar13 = (char)uVar5;
        piVar2 = (int *)0x53c2;
        *piVar2 = *piVar2 + 1;
        if (puVar13 == (int *)0xf) {
          piVar2 = (int *)0x53ba;
          *piVar2 = *piVar2 + 1;
          *(int *)0x53c2 = 0;
        }
        uVar5 = param_1;
      }
      *(int *)0x53ce = 0;
      puVar14 = (int *)(*(int *)0x53cc * 3);
      uVar5 = *(int *)0x53c0;
      *(int *)(puVar14 + 1) = *(int *)0x53d5;
      *puVar14 = *(int *)0x53c8;
      piVar2 = (int *)0x53cc;
      *piVar2 = *piVar2 + 1;
      *(int *)0x53c8 = *(int *)0x53ca;
      if ((*(int *)0x53d0 <= *(int *)0x53cc) && (*(int *)0x53d2 != 0xc)) {
        piVar2 = (int *)0x53d2;
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)0x53d0;
        *piVar2 = *piVar2 << 1;
      }
    }
  }
  uVar5 = *(int *)0x53c0;
  puVar14 = (int *)0x0;
  for (iVar10 = 0x1800; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = 0;
  }
  return;
}



void FUN_0000_2fa8(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char *in_DX;
  int **ppiVar4;
  int *piVar5;
  char *pcVar6;
  int unaff_DS;

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



int FUN_0000_2fe6(void)

{
  code *pcVar1;
  char cVar2;
  int in_stack_00000012;

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



int FUN_0000_302e(uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int uVar2;
  uint uVar3;
  int in_CF;
  bool bVar4;

  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    bVar4 = false;
    uVar3 = FUN_0000_3069();
    if (((!bVar4) && (param_1 <= uVar3)) && (param_1 == 0xffff)) {
      FUN_0000_3069();
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    return param_3;
  }
  return uVar2;
}



void FUN_0000_3069(void)

{
  code *pcVar1;

  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



int FUN_0000_3074(void)

{
  code *pcVar1;
  int uVar2;
  int in_CF;
  int in_stack_0000000a;

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
  int uVar3;
  int unaff_DS;
  int in_CF;

  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if ((bool)in_CF) {
    *(int *)0x535c = uVar3;
    ppcVar1 = (code **)0x5394;
    (**ppcVar1)();
  }
  else {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    *(int *)0x535c = 0;
  }
  return !(bool)in_CF;
}



char FUN_0000_30c6(void)

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
  int *puVar4;
  int *puVar5;
  int uVar6;
  code **ppcVar7;
  int iVar8;
  byte bVar9;
  int *puVar10;
  char *pcVar11;
  int *puVar12;
  int unaff_DS;

  param_1 = param_1 & 0xff;
  bVar9 = (byte)param_1;
  pcVar11 = *(char **)0x539a;
  if (0x7f < bVar9) {
    if (bVar9 == 0xff) {
      pcVar11[4] = '\0';
      pcVar11[5] = '\0';
      *(int *)0x5350 = 0x2d;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)();
      FUN_0000_3997();
      *(int *)0x5350 = 0x3f;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)();
      *(int *)0x5350 = 0x2d;
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
      *(int *)0x53a6 = 1;
      pbVar2 = (byte *)(pcVar11 + 7);
      *pbVar2 = *pbVar2 | 2;
      return;
    }
    if (bVar9 == 0xfb) {
      *(int *)0x53a6 = 0;
      pbVar2 = (byte *)(pcVar11 + 7);
      *pbVar2 = *pbVar2 & 0xfd;
      return;
    }
    bVar9 = bVar9 & 0x7f;
  }
  if (bVar9 != 10) {
    if (bVar9 == 0xd) goto LAB_0000_3165;
    puVar12 = (int *)(param_1 * 8);
    if (*(int *)0x52c8 == 3) {
      puVar12 = (int *)(param_1 * 0x18);
    }
    uVar6 = *(int *)0x5398;
    FUN_0000_3214();
    *(int *)0x5350 = 0x5d;
    ppcVar7 = (code **)0x5350;
    (**ppcVar7)();
    puVar10 = (int *)0x53ea;
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
    *(int *)0x5350 = 0x27;
    ppcVar7 = (code **)0x5350;
    (**ppcVar7)();
  }
  return;
}



void FUN_0000_3214(void)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *unaff_DI;
  uint *puVar4;
  int unaff_ES;
  int unaff_DS;

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
      *(int *)((int)unaff_DI + 7) = 0xff;
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


// I think this prints preset strings
void FUN_0000_3270(char *param_1)

{
  int iVar1;
  int iVar2;
  int uVar3;
  int iVar4;
  int unaff_SS;
  int unaff_DS;
  int uStack_44;
  char acStack_42 [40];
  uint uStack_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  byte *pbStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;

  iStack_8 = 0;
  iStack_a = 0;
  iStack_4 = 0;
  if (*param_1 != '\0') {
    iVar1 = *(int *)0x5386 * 8;
    pbStack_12 = (byte *)(iVar1 + 0x535e);
    uStack_1a = *(byte *)(iVar1 + 0x5365) & 2;
    uStack_44 = (uint)*(byte *)(iVar1 + 0x5360) - (uint)*pbStack_12;
    do {
      if (iStack_4 != 0) {
        FUN_0000_30da(10);
      }
      iStack_14 = 0;
      iStack_6 = 0;
      iStack_4 = 0;
      iVar2 = FUN_0000_3932();
      iStack_10 = uStack_44 - iVar2;
      iVar1 = iStack_8;
      for (iVar4 = 0;
          (((param_1[iVar1] != '\n' && (param_1[iVar1] != '\r')) && (param_1[iVar1] != '\0')) &&
          (iVar4 <= uStack_44 - iVar2)); iVar4 = iVar4 + 1) {
        acStack_42[iVar4] = param_1[iVar1];
        iVar1 = iVar1 + 1;
      }
      iStack_8 = iVar1;
      iStack_c = iVar4;
      if (iVar4 == 0) {
        if (param_1[iVar1] == '\0') {
          iStack_a = iStack_a + 1;
          iVar2 = iStack_e;
        }
        else {
          iStack_8 = iVar1 + 1;
          FUN_0000_30da(param_1[iVar1]);
          iVar2 = iStack_e;
        }
      }
      else {
        if (iStack_10 < iVar4) {
          iStack_18 = iVar4;
          iStack_16 = iVar1;
          for (; ((param_1[iStack_8] != ' ' && (iStack_c != 0)) &&
                 ((param_1[iStack_8] != '\n' &&
                  ((param_1[iStack_8] != '\0' && (param_1[iStack_8] != '\r'))))));
              iStack_8 = iStack_8 + -1) {
            iStack_c = iStack_c + -1;
          }
          if (iStack_c == 0) {
            iStack_c = iVar4;
            iStack_8 = iVar1;
            if (pbStack_12[4] != 0) {
              FUN_0000_30da(10);
              iStack_6 = 1;
            }
          }
          else {
            do {
              do {
                iVar1 = iStack_c;
                iStack_c = iVar1 + -1;
              } while (acStack_42[iVar1 + -1] == ' ');
            } while ((acStack_42[iVar1 + -1] == '\r') || (acStack_42[iVar1 + -1] == '\n'));
            if (param_1[iStack_8] != '\0') {
              iStack_8 = iStack_8 + 1;
            }
            if (iStack_c < iStack_10) {
              iStack_4 = iStack_4 + 1;
            }
          }
          if (iStack_10 < iStack_c) goto LAB_0000_33f2;
        }
        else {
LAB_0000_33f2:
          iStack_c = iStack_c + -1;
        }
        if (uStack_1a != 0) {
          if (uStack_44 < iStack_c) {
            FUN_0000_30da(10);
          }
          uVar3 = FUN_0000_370e((iStack_10 - iStack_c) / 2);
          FUN_0000_3612(uVar3);
        }
        iVar1 = iStack_c;
        iVar2 = iStack_14;
        if (iStack_6 != 0) {
          for (; acStack_42[iStack_14] == ' '; iStack_14 = iStack_14 + 1) {
          }
          iVar2 = iStack_14;
        }
        for (; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
          FUN_0000_30da(acStack_42[iVar2]);
        }
      }
      iStack_e = iVar2;
    } while (iStack_a == 0);
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
  int unaff_SS;
  int unaff_DS;
  bool bVar6;
  int iStack_2e;
  int iStack_2c;
  char acStack_2a [40];

  if (0x27 < param_2) {
    param_2 = 0x27;
  }
  bVar6 = param_3 < 0;
  if (bVar6) {
    param_3 = -param_3;
  }
  piVar4 = (int *)0x5404;
  iStack_2c = 1;
  do {
    piVar1 = piVar4;
    if (*piVar1 == param_3 || *piVar1 < param_3) {
      iStack_2c = iStack_2c + 1;
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 < (int *)0x540c);
  if (bVar6) {
    iStack_2c = iStack_2c + 1;
  }
  iStack_2e = param_2 - iStack_2c;
  if (iStack_2e < 1) {
    iStack_2e = 0;
  }
  else {
    for (iVar3 = 0; iVar3 != iStack_2e; iVar3 = iVar3 + 1) {
      acStack_2a[iVar3] = param_1;
    }
  }
  if (bVar6) {
    acStack_2a[iStack_2e] = '-';
    iStack_2c = iStack_2c + -1;
    iStack_2e = iStack_2e + 1;
  }
  do {
    iVar5 = iStack_2e;
    iVar3 = *(int *)(iStack_2c * 2 + 0x5400);
    iVar2 = param_3 / iVar3;
    acStack_2a[iVar5] = (char)iVar2 + '0';
    param_3 = param_3 - iVar3 * iVar2;
    iStack_2c = iStack_2c + -1;
    iStack_2e = iVar5 + 1;
  } while (iStack_2c != 0);
  acStack_2a[iVar5 + 1] = '\0';
  FUN_0000_3270(acStack_2a);
  return;
}



void FUN_0000_3536(void)

{
  FUN_0000_3544();
  return;
}



void FUN_0000_3544(void)

{
  uRam0000041a = 0x1e;
  uRam0000041c = 0x1e;
  return;
}



int FUN_0000_3558(void)

{
  int *piVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;
  int uStack_6;

  uVar2 = *(int *)0x538e;
  *(int *)0x538e = 0;
  iVar4 = *(int *)0x5390;
  iVar3 = *(int *)0x540c;
  piVar1 = (int *)0x540c;
  *piVar1 = *piVar1 + 1;
  FUN_0000_30da(iVar4 + iVar3);
  iVar4 = FUN_0000_377e();
  if (*(int *)0x5392 <= *(int *)0x540c) {
    *(int *)0x540c = 0;
  }
  if (iVar4 == 0) {
    uStack_6 = 1;
    FUN_0000_3b1a();
  }
  else {
    uStack_6 = 0x20;
    FUN_0000_30da();
  }
  *(int *)0x538e = uVar2;
  return uStack_6;
}



void FUN_0000_35b4(uint param_1)

{
  int uVar1;
  uint uVar2;
  int iVar3;
  int unaff_DS;

  if (param_1 < 4) {
    *(uint *)0x5386 = param_1;
    iVar3 = param_1 * 8;
    *(int *)0x539a = iVar3 + 0x535e;
    uVar1 = *(int *)(iVar3 + 0x5364);
    uVar2 = CONCAT11(uVar1,uVar1) & 0xff0f;
    *(int *)0x53aa = (char)uVar2;
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
  int unaff_DS;

  pcVar1 = *(char **)0x539a;
  if (((byte)(param_2 + *pcVar1) < 0x28) && ((byte)(param_1 + pcVar1[1]) < 0x19)) {
    pcVar1[4] = param_2;
    pcVar1[5] = param_1;
  }
  return;
}



void FUN_0000_3642(int param_1,int param_2,int param_3,int param_4,
                  uint param_5)

{
  int uVar1;
  int extraout_DL;
  int iVar2;
  int unaff_DS;

  if (param_5 < 4) {
    iVar2 = param_5 * 8;
    uVar1 = FUN_0000_367b();
    *(int *)(iVar2 + 0x535e) = uVar1;
    *(int *)(iVar2 + 0x535f) = param_3;
    *(int *)(iVar2 + 0x5360) = param_2;
    *(int *)(iVar2 + 0x5361) = extraout_DL;
  }
  return;
}



void FUN_0000_367b(void)

{
  return;
}



void FUN_0000_36be(uint param_1)

{
  int unaff_DS;

  if ((param_1 < 4) && (*(int *)(param_1 * 2 + 0x539c) != 0)) {
    *(int *)0x5398 = *(int *)(param_1 * 2 + 0x539c);
    *(uint *)0x5388 = param_1 & 0x7fff;
  }
  return;
}



void FUN_0000_36ea(byte param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_DS;

  iVar1 = *(int *)0x539a;
  *(byte *)0x53aa = param_1 & 0xf;
  uVar2 = CONCAT11(*(int *)(iVar1 + 6),param_1) & 0xf00f;
  *(byte *)(iVar1 + 6) = (byte)(uVar2 >> 8) | (byte)uVar2;
  return;
}



int FUN_0000_370e(void)

{
  int unaff_DS;

  return *(int *)(*(int *)0x539a + 5);
}



uint FUN_0000_377e(void)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int unaff_DS;
  int in_ZF;
  bool bVar6;

  *(int *)0x538a = 0;
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
  int unaff_DS;
  int uStack_6;
  int iStack_4;

  iStack_4 = -1;
  if (param_1 != 0) {
    iStack_4 = 0;
  }
  if (1 < param_1) {
    uStack_6 = *(int *)0x5356;
    *(int *)0x5356 = 500;
  }
  do {
    iVar1 = FUN_0000_3558();
    if (param_1 != 0) {
      iStack_4 = iStack_4 + 1;
    }
  } while ((iStack_4 < param_1) && (iVar1 == 0));
  if (1 < param_1) {
    *(int *)0x5356 = uStack_6;
  }
  return iVar1;
}



int FUN_0000_38cc(void)

{
  code **ppcVar1;
  code *pcVar2;
  char cVar3;
  int extraout_DL;
  int unaff_DS;
  int in_CF;

  *(int *)0x535c = 0;
  FUN_0000_3917();
  if (!(bool)in_CF) {
    *(int *)((int)FUN_0000_541c + 2) = extraout_DL;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (*(int *)0x535c == 0) {
      pcVar2 = (code *)swi(0x21);
      cVar3 = (*pcVar2)();
      if (*(char *)((int)FUN_0000_541c + 2) == cVar3) {
        *(int *)0x535c = 0;
        return 1;
      }
    }
  }
  *(int *)0x535c = 1;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



void FUN_0000_3917(void)

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



int FUN_0000_3932(void)

{
  int unaff_DS;

  return *(int *)(*(int *)0x539a + 4);
}



void FUN_0000_3946(byte param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_DS;

  iVar1 = *(int *)0x539a;
  *(byte *)0x53ab = param_1 & 0xf;
  uVar2 = CONCAT11(*(int *)(iVar1 + 6),(param_1 & 0xf) << 4) & 0xfff;
  *(byte *)(iVar1 + 6) = (byte)(uVar2 >> 8) | (byte)uVar2;
  return;
}



int FUN_0000_3997(void)

{
  byte *unaff_SI;
  int unaff_DS;

  return CONCAT22((uint)unaff_SI[3] * 8 + 7,(uint)*unaff_SI << 3);
}



void FUN_0000_39c0(int param_1)

{
  int uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int unaff_DS;

  iVar4 = FUN_0000_3932();
  if (((iVar4 != 0) || (iVar4 = FUN_0000_370e(), iVar4 != 0)) && (param_1 != 0)) {
    uVar1 = *(int *)0x538e;
    iVar4 = *(int *)0x5386 * 8;
    *(int *)0x538e = 0;
    if (0 < param_1) {
      bVar2 = *(byte *)(iVar4 + 0x5360);
      bVar3 = *(byte *)(iVar4 + 0x535e);
      do {
        iVar4 = FUN_0000_3932();
        FUN_0000_30da(0x20);
        if (iVar4 == 0) {
          iVar4 = FUN_0000_370e((uint)bVar2 - (uint)bVar3);
          iVar4 = iVar4 + -1;
        }
        else {
          iVar4 = FUN_0000_370e(iVar4 + -1);
        }
        FUN_0000_3612(iVar4);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(int *)0x538e = uVar1;
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


// Was: FUN_0000_3ab2()
// Returns a random number between param_2 and param_1.
// Note that param_2 must always be < param_1 or you could
// get a division-by-zero error.
int RANDOM(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_DS;

  uVar1 = *(int *)((int)FUN_0000_541c + 4) + 0x9248;
  uVar2 = uVar1 >> 1;
  uVar2 = ((((uVar2 | (uint)((uVar1 & 1) != 0) << 0xf) >> 1 | (uint)((uVar2 & 1) != 0) << 0xf) >> 1
           | (uint)((uVar2 & 2) != 0) << 0xf) ^ 0x9248) + 0x11;
  *(uint *)((int)FUN_0000_541c + 4) = uVar2;
  return (uVar2 & 0x7fff) % ((param_1 - param_2) + 1U) + param_2;
}



void FUN_0000_3ae8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_DS;

  uVar3 = *(uint *)0x5356;
  iVar2 = *(int *)(param_2 + 0x5426);
  if (iVar2 != 0) {
    uVar3 = uVar3 >> ((byte)iVar2 & 0x1f);
  }
  *(int *)0x5424 = param_1;
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
  int in_BX;
  int unaff_BP;
  int unaff_ES;
  int unaff_DS;

  if ((param_1 != 1) || (0xf0 < *(int *)0x5356)) {
    *(int *)0x544a = param_1;
    *(int *)0x5448 = 0;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(int *)0x544e = in_BX;
    *(int *)0x544c = unaff_ES;
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
  int unaff_DS;

  iVar1 = 0;
  while (*param_1 != '\0') {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  }
  return iVar1;
}



uint FUN_0000_3bb2(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  byte bVar2;
  int uVar3;
  int iVar4;
  uint uVar5;
  int unaff_DS;

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
        *(int *)0x5450 = param_4;
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
        *(int *)0x5450 = param_4;
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
  int uVar5;
  uint uVar6;
  int unaff_DS;

  *(int *)0x5456 = 0;
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



void FUN_0000_3ce0(int param_1,int param_2)

{
  int unaff_DS;

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
  int unaff_DS;

  if (*(int *)0xa9ce != 0) {
    out(0x42,(char)(0x1234de / (ulong)param_1));
    out(0x42,(char)(0x1234de / (ulong)param_1 >> 8));
    bVar1 = in(0x61);
    out(0x61,bVar1 | 3);
  }
  return;
}



byte FUN_0000_3d2e(void)

{
  byte bVar1;

  bVar1 = in(0x61);
  out(0x61,bVar1 & 0xfc);
  return bVar1 & 0xfc;
}



void FUN_0000_3d42(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int uVar6;
  int iVar7;
  byte *pbVar8;
  int unaff_DS;

  *(int *)0x5394 = 0x2320;
  *(int *)0x5396 = 0x1a2;
  bVar2 = *(byte *)0xa9bd;
  bVar3 = *(byte *)(bVar2 + 0xa9c8);
  if ((bVar3 == 0xff) || (*(byte *)0x545e == bVar2)) {
LAB_0000_3d94:
    pbVar8 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
    if ((*pbVar8 < 0x43) && (1 < *(byte *)0xa9c2)) {
      pbVar1 = pbVar8;
      *pbVar1 = *pbVar1 ^ 3;
      FUN_0000_38cc(*pbVar8);
      cVar4 = *(char *)0xa9bd;
      if (*(char *)0x545e != cVar4) goto LAB_0000_3d8d;
    }
    pbVar8 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
    if ((*pbVar8 < 0x43) || (*pbVar8 == 0xff)) {
      if (*(char *)0xa9be == '\x02') {
        FUN_0000_2642(0);
        FUN_0000_3642(0xd,0x21,0xc,6,0);
        FUN_0000_2490(0);
        FUN_0000_24c6(0x77,0x117,0x58,0x28);
      }
      *(int *)0x545e = 0xff;
      cVar4 = FUN_0000_30c6();
      while (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
        iVar7 = FUN_0000_38cc(cVar4);
        if (iVar7 != 0) break;
        uVar6 = FUN_0000_37fa(0);
        cVar4 = FUN_0000_3a52(uVar6);
      }
      if (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
        if (cVar4 == 'B') {
          *(int *)0xa9c2 = 2;
        }
        bVar2 = *(byte *)0xa9bd;
        *(char *)(bVar2 + 0xa9c8) = cVar4;
        if ((bVar2 == 3) && (*(char *)0xa9c9 == -1)) {
          *(char *)0xa9c9 = cVar4;
        }
      }
      if (*(char *)0xa9be == '\0') {
        FUN_0000_30da(10);
      }
      else if (*(char *)0xa9be == '\x02') {
        FUN_0000_2642(1);
        FUN_0000_3642(0x18,0x27,0,0,0);
        FUN_0000_298e(0,1);
      }
    }
    else {
      *pbVar8 = 0x41;
      FUN_0000_38cc(0x41);
      *(int *)0x545e = 0xff;
    }
  }
  else {
    uVar5 = FUN_0000_30c6();
    if (uVar5 == bVar3) goto LAB_0000_3d94;
    FUN_0000_38cc(*(int *)(*(byte *)0xa9bd + 0xa9c8));
    cVar4 = *(char *)0xa9bd;
LAB_0000_3d8d:
    *(char *)0x545e = cVar4;
  }
  *(int *)0x5394 = 0x2322;
  *(int *)0x5396 = 0x1a2;
  return;
}



void FUN_0000_3f3e(int param_1)

{
  int unaff_DS;

  *(int *)0x5394 = 0x2320;
  *(int *)0x5396 = 0x1a2;
  if ((param_1 == 2) || (param_1 == 5)) {
    param_1 = 1;
  }
  *(int *)0xa9bd = (int)param_1;
  if (*(char *)(param_1 + -0x5638) != -1) {
    FUN_0000_38cc(*(int *)(param_1 + -0x5638));
    *(int *)0x545e = 0xff;
  }
  *(int *)0x5394 = 0x2322;
  *(int *)0x5396 = 0x1a2;
  return;
}



void FUN_0000_3f8e(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_DS;

  if ((*(char *)0xa9bd == '\x03') && (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1)) {
    FUN_0000_3d42();
  }
  FUN_0000_38cc(*(int *)(*(byte *)0xa9bd + 0xa9c8));
  iVar1 = 0;
  while (iVar1 == 0) {
    iVar1 = FUN_0000_8c54(param_1,param_2,param_3,param_4);
  }
  return;
}


/*
Unable to decompile 'FUN_0000_408c'
Cause:
Low-level Error: Cannot marshal address space: NO ADDRESS
*/


void FUN_0000_4146(uint param_1)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int uVar4;
  int iVar5;
  int unaff_DS;

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
      *(int *)0x587b = 0xff;
      goto LAB_0000_421d;
    }
    uVar4 = 0x1a;
  }
  else {
    uVar4 = 0x20;
  }
  FUN_0000_30da(uVar4);
LAB_0000_421d:
  FUN_0000_345e(0x20,4,*(int *)(param_1 * 0x20 + 0x55b8));
  if (*(byte *)0x5893 < 0x80) {
    uVar2 = *(int *)(param_1 * 0x20 + 0x55b3);
  }
  else {
    if (((*(byte *)(param_1 * 8 + -0x45ea) & 0xe1) == 0x81) &&
       (*(byte *)(param_1 * 8 + -0x45e9) == param_1)) {
      uVar2 = 0x43;
    }
    else {
      uVar2 = *(int *)(param_1 * 0x20 + 0x55b3);
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



void FUN_0000_42a4(void)

{
  int iVar1;
  int unaff_DS;
  int uVar2;

  uVar2 = *(int *)0x5386;
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
  FUN_0000_345e(0x20,1,*(int *)0x57aa);
  while( true ) {
    iVar1 = FUN_0000_3932();
    if (0xe < iVar1) break;
    FUN_0000_30da(0x20);
  }
  FUN_0000_35b4(uVar2);
  return;
}



void FUN_0000_4320(void)

{
  int iVar1;
  int unaff_DS;
  int uVar2;
  uint uVar3;

  FUN_0000_35b4(1);
  iVar1 = 0;
  do {
    FUN_0000_4146(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  FUN_0000_3612(7,0);
  FUN_0000_3270(0x54ba);
  uVar2 = 0x435d;
  FUN_0000_345e(0x20,1,*(int *)0x57a8);
  while( true ) {
    iVar1 = FUN_0000_3932();
    if (7 < iVar1) break;
    uVar2 = 0x4367;
    FUN_0000_30da(0x20);
  }
  if ((*(byte *)0x5893 < 0x80) && ((*(byte *)0x587c & 0xf8) == 0x20)) {
    FUN_0000_3270(0x54bd);
    uVar3 = (uint)*(byte *)0x5c5f;
    uVar2 = 1;
    FUN_0000_345e(0x20,1,uVar3);
    if (*(byte *)0x5c5f < 10) {
      FUN_0000_30da(0x20);
    }
  }
  else {
    uVar3 = 0x43ab;
    FUN_0000_42a4();
  }
  FUN_0000_3270(0x54c3,uVar2,uVar3);
  if ((*(byte *)0x587d < 10) && (*(byte *)0x587e < 10)) {
    FUN_0000_30da(0x20);
  }
  FUN_0000_345e(0x20,1,*(int *)0x587d);
  FUN_0000_30da(0x2d);
  FUN_0000_345e(0x20,1,*(int *)0x587e);
  FUN_0000_30da(0x2d);
  FUN_0000_345e(0x30,3,*(int *)0x5874);
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
    FUN_0000_30da(*(int *)0x587a);
    FUN_0000_66ee();
  }
  FUN_0000_35b4(2);
  return;
}



void FUN_0000_4448(int param_1)

{
  int unaff_DS;

  FUN_0000_2490(*(int *)0x13b0);
  FUN_0000_25a6(param_1 * 8 + 0xf,0x137,param_1 * 8 + 8,0xc0);
  return;
}



void FUN_0000_4472(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_DS;

  FUN_0000_4448(param_2);
  FUN_0000_3c5c(2000,0x640,10);
  FUN_0000_4448(param_2);
  iVar2 = param_2 * 0x20;
  piVar1 = (int *)(iVar2 + 0x55b8);
  *piVar1 = *piVar1 - param_1;
  if (*(int *)(iVar2 + 0x55b8) < 1) {
    *(int *)(iVar2 + 0x55b8) = 0;
    *(int *)(iVar2 + 0x55b3) = 0x44;
    if (param_2 == *(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
  }
  FUN_0000_4320();
  return;
}



void FUN_0000_44c8(void)

{
  int uVar1;
  uint uVar2;
  char *pcVar3;
  int unaff_DS;

  uVar2 = 0;
  pcVar3 = (char *)0x55b3;
  do {
    if ((uVar2 < *(byte *)0x585b) && (*pcVar3 != 'D')) {
      uVar1 = RANDOM(8,1,uVar2);
      FUN_0000_4472(uVar1);
    }
    pcVar3 = pcVar3 + 0x20;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}



void FUN_0000_4508(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int unaff_DS;
  char *pcStack_a;
  int iStack_4;

  iStack_4 = 0;
  if (*(char *)0x585b != '\0') {
    pcStack_a = (char *)0x55b3;
    uVar3 = 0;
    do {
      cVar2 = *pcStack_a;
      if ((cVar2 == 'D') && (uVar3 == *(byte *)0x587b)) {
        *(int *)0x587b = 0xff;
      }
      if ((cVar2 != 'D') && (cVar2 != 'S')) {
        if (cVar2 == 'P') {
          FUN_0000_4472(1,uVar3);
        }
        iStack_4 = iStack_4 + 1;
      }
      pcStack_a = pcStack_a + 0x20;
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
      FUN_0000_5974(iStack_4,0x57a8);
    }
    *(int *)0x5880 = *(int *)0x587f;
  }
  FUN_0000_5910(0xff,1,0x588b);
  if ((*(char *)0x588e != '\0') && (*(char *)0x588e != -1)) {
    pcVar1 = (char *)0x588e;
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      *(int *)0x587a = 0;
      FUN_0000_4320();
    }
  }
  FUN_0000_5a2c();
  return;
}



uint FUN_0000_479a(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_DS;
  uint uStack_4;

  uStack_4 = 0;
  bVar1 = false;
  if ((0x7f < *(byte *)0x5893) &&
     (iVar3 = (uint)*(byte *)0x589e * 8, (*(byte *)(iVar3 + -0x45ea) & 0x80) != 0)) {
    FUN_0000_4448(*(int *)(iVar3 + -0x45e9));
  }
  FUN_0000_6870(0x5554);
  uVar4 = 0xffff;
  do {
    if (uVar4 != uStack_4) {
      FUN_0000_4448(uStack_4);
      uVar4 = uStack_4;
    }
    do {
      uVar2 = FUN_0000_408c();
    } while (0x37 < uVar2);
    if (((uVar2 < 0x31) || (0x36 < uVar2)) || ((uint)*(byte *)0x585b <= uVar2 - 0x31)) {
      if (uVar2 == 4) {
LAB_0000_484a:
        FUN_0000_5934(*(byte *)0x585b - 1,1,&uStack_4);
      }
      else if ((int)uVar2 < 5) {
        if (uVar2 != 1) {
          if (uVar2 == 2) goto LAB_0000_484a;
          if (uVar2 != 3) goto LAB_0000_4839;
        }
        FUN_0000_5974(1,&uStack_4);
      }
      else {
        if (uVar2 != 0xd) {
          if (uVar2 == 0x1b) {
            uStack_4 = 0xffff;
          }
          else if (uVar2 != 0x20) {
            if ((uVar2 != 0x30) || (param_1 == 0)) goto LAB_0000_4839;
            uStack_4 = 0xfffe;
          }
        }
        bVar1 = true;
      }
    }
    else {
      uStack_4 = uVar2 - 0x31;
    }
LAB_0000_4839:
    if (uVar4 != uStack_4) {
      FUN_0000_4448(uVar4);
    }
    if (bVar1) {
      if (uStack_4 < 0x8000) {
        FUN_0000_4448(uStack_4);
      }
      FUN_0000_6840();
      return uStack_4;
    }
  } while( true );
}



void FUN_0000_48ae(void)

{
  FUN_0000_479a(0);
  return;
}



void FUN_0000_48b6(int param_1)

{
  char cVar1;
  int uVar2;
  int unaff_DS;

  if (param_1 != -1) {
    *(int *)0x5892 = (int)param_1;
    *(int *)0x5883 = 0;
  }
  if (0x20 < *(byte *)0x5893) {
    return;
  }
  if (*(char *)0x5893 == '\x19') {
    return;
  }
  if (0x7f < *(byte *)0x5895) {
    FUN_0000_2490(*(int *)0x13b0);
    FUN_0000_2530(0xb8,0x98,0xb8,0x30);
    FUN_0000_2490(*(int *)0x13b2);
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
    uVar2 = SUB42(&LAB_0000_556e,0);
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



void FUN_0000_4982(void)

{
  int iVar1;
  int iVar2;

  iVar1 = RANDOM(0x3f,0);
  if (iVar1 == 0) {
    do {
      iVar1 = RANDOM(4,0);
      if (iVar1 != 0) break;
      iVar2 = RANDOM(0xff,0);
    } while (iVar2 < 0xc0);
    FUN_0000_48b6(iVar1);
  }
  return;
}



void FUN_0000_49c6(uint param_1)

{
  char *pcVar1;
  int unaff_DS;

  if ((param_1 < *(byte *)0x585b) && (pcVar1 = (char *)(param_1 * 0x20 + 0x55b3), *pcVar1 != 'D')) {
    *pcVar1 = 'P';
    FUN_0000_4320();
  }
  return;
}



void FUN_0000_49f0(int param_1)

{
  uint uVar1;
  int uVar2;
  int iVar3;
  int unaff_DS;

  FUN_0000_3c5c(500,3000,0x28);
  if (*(byte *)0x5893 < 0x80) {
    iVar3 = RANDOM(7,0);
    uVar1 = (uint)*(byte *)(iVar3 + 0x559e);
  }
  else {
    uVar1 = RANDOM(1,0);
  }
  if (uVar1 == 0) {
    FUN_0000_3270(0x5581);
    uVar2 = FUN_0000_54de(param_1);
    FUN_0000_4472(uVar2);
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



void FUN_0000_4a92(void)

{
  int uVar1;
  int iVar2;
  int iStack_8;

  FUN_0000_298e(1,0);
  FUN_0000_2642(1);
  iStack_8 = 8;
  do {
    iVar2 = 8;
    do {
      switchD_0000:e499::caseD_11(2,iVar2 + 4,0xb7,iVar2,8);
      uVar1 = RANDOM(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + 3;
    } while (iVar2 < 0xb4);
    iVar2 = 8;
    do {
      FUN_0000_24ee(iVar2 + 4,0xb7,iVar2,8,0,1);
      uVar1 = RANDOM(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + 3;
    } while (iVar2 < 0xb4);
    iVar2 = 0xb3;
    do {
      FUN_0000_8c20(2,iVar2 + 4,0xb7,iVar2,8);
      uVar1 = RANDOM(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + -3;
    } while (7 < iVar2);
    iVar2 = 0xb3;
    do {
      FUN_0000_24ee(iVar2 + 4,0xb7,iVar2,8,0,1);
      uVar1 = RANDOM(0x96,0x13);
      FUN_0000_3d02(uVar1);
      iVar2 = iVar2 + -3;
    } while (7 < iVar2);
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  FUN_0000_2642(0);
  FUN_0000_3d2e();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack
// WARNING: Restarted to delay deadcode elimination for space: stack

uint FUN_0000_4b98(uint param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  int *piVar2;
  uint *puVar3;
  char *pcVar4;
  int uVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int *puVar13;
  byte bVar14;
  int in_CX;
  char cVar15;
  int *in_DX;
  int iVar16;
  uint in_BX;
  int *puVar17;
  int iVar18;
  int unaff_SI;
  int unaff_DI;
  int unaff_ES;
  int unaff_SS;
  int unaff_DS;
  int iStack_6;

  if (param_1 == 0x4d) {
    FUN_0000_3270();
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if ((int)param_1 < 0x4e) {
    if (param_1 != 0x45) {
      if ((int)param_1 < 0x46) {
        if (param_1 == 0x20) {
          if ((*(char *)0x5893 == '\0') && (*(char *)0x5955 != '\0')) {
            FUN_0000_3270();
            *(int *)0x5955 = 0;
            return 1;
          }
          goto LAB_0000_4e0a;
        }
        if (param_1 == 0x41) {
          if (*(char *)0x5893 == '\0') {
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (*(byte *)0x5893 < 0x21) {
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (param_1 == 0x42) {
          FUN_0000_3270();
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (param_1 == 0x43) {
          FUN_0000_3270();
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
      }
      else if (param_1 - 0x46 < 7) {
        iVar12 = (param_1 - 0x46) * 2;
        bVar10 = (byte)in_BX;
        switch(param_1) {
        case 0x47:
          puVar13 = (int *)FUN_0000_5e22(param_1 & 0xff);
          *puVar13 = (int)param_3;
          return param_3 & 0xff;
        case 0x48:
          return in_BX;
        case 0x49:
          pbVar1 = (byte *)(iVar12 + unaff_DI);
          *pbVar1 = *pbVar1 & 0xe8;
          piVar2 = (int *)(iVar12 + unaff_SI + 2);
          *piVar2 = *piVar2 + 1;
          uVar11 = FUN_0000_8a60(*(int *)0x2180,*(int *)0x217e,1);
          if (*(int *)0x2182 != -1) {
            FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,1,0);
            FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,1,1);
            uVar11 = FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,1,2);
          }
          if (0xf < *(byte *)0x2186) {
            *(int *)0x2186 = 0;
          }
          return uVar11;
        case 0x4a:
          uVar11 = in_BX & 0xff;
          bVar7 = false;
          if (((iStack_6 != 0) && (*(char *)(param_1 * 8 + -0x45e9) == '\x1c')) &&
             ((*(byte *)(param_2 * 8 + -0x45ea) & 8) == 0)) {
            uVar11 = FUN_0000_82ce();
            bVar7 = true;
          }
          if (!bVar7) {
            if ((*(char *)0x5890 == '\0') || (*(char *)0x589d != '4')) {
              if ((*(char *)0x5890 == '\0') || (*(char *)0x589d != '3')) {
                uVar11 = FUN_0000_cf60();
                if (((int)uVar11 < 0) && ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) != 0)) {
                  *(int *)0x58a2 = 0x20;
                }
                else {
                  uVar11 = FUN_0000_d224(uVar11);
                  if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) != 0) {
                    uVar11 = FUN_0000_5934(9999,uVar11,
                                           (uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55bc);
                  }
                }
              }
              else {
                uVar11 = FUN_0000_d56a();
              }
            }
            else {
              uVar11 = FUN_0000_82ce();
            }
          }
          return uVar11;
        case 0x4b:
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(unaff_DI + 8);
          cVar9 = (char)in_CX;
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + unaff_DI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(unaff_DI + 0x40);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          cVar15 = (char)in_DX;
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          piVar2 = (int *)(iVar12 + unaff_DI);
          *piVar2 = *piVar2 + in_CX;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + cVar15;
          pcVar4 = &stack0x004b + unaff_DI;
          bVar8 = (byte)((int)in_DX + -1);
          *pcVar4 = *pcVar4 + bVar8;
          iVar18 = unaff_SI + -1;
          iVar16 = iVar12 + 3;
          pcVar4 = &stack0x0044 + unaff_SI;
          *pcVar4 = *pcVar4 + bVar8;
          bVar14 = cVar9 + 3;
          *in_DX = iVar16;
          in_DX[-1] = (int)in_DX;
          in_DX[-2] = in_BX;
          pbVar1 = (byte *)(iVar16 + unaff_DI + 0x35);
          *pbVar1 = *pbVar1 & bVar14;
          pbVar1 = (byte *)(unaff_SI + 0x30);
          *pbVar1 = *pbVar1 & bVar8;
          pbVar1 = (byte *)(iVar16 + iVar18 + 0x35);
          *pbVar1 = *pbVar1 & bVar14;
          pbVar1 = (byte *)(unaff_SI + 0x35);
          *pbVar1 = *pbVar1 & bVar10;
          pcVar4 = (char *)(iVar16 + iVar18);
          *pcVar4 = *pcVar4 + bVar8;
          piVar2 = (int *)(iVar16 + iVar18);
          *piVar2 = *piVar2 + (int)in_DX + -1;
          iVar12 = iVar12 + 4;
          *(int *)((int)in_DX + -7) = (int)in_DX + -5;
          pcVar4 = (char *)(iVar12 + iVar18);
          cVar9 = (char)*(int *)((int)in_DX + -7);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(unaff_DI + -0x70);
          *pcVar4 = *pcVar4 + bVar14;
          piVar2 = (int *)(unaff_SI + 0x1e);
          *piVar2 = *piVar2 + iVar18;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar4 = (char *)(unaff_DI + 0x4a);
          *pcVar4 = *pcVar4 + bVar10;
          puVar17 = (int *)((int)in_DX + -7);
          *(int *)((int)in_DX + -7) = (int)in_DX + -5;
          pcVar4 = (char *)(iVar12 + iVar18);
          *pcVar4 = *pcVar4 + cVar9;
          pcVar6 = (code *)swi(0x20);
          uVar11 = (*pcVar6)();
          *(int *)(puVar17 + -2) = unaff_ES;
          puVar3 = (uint *)(iVar12 + iVar18);
          *puVar3 = *puVar3 & uVar11;
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 0x4c:
          LOCK();
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          UNLOCK();
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10;
          pbVar1 = (byte *)(iVar12 + unaff_SI);
          bVar8 = *pbVar1;
          *pbVar1 = *pbVar1 + bVar10;
          pcVar4 = (char *)(iVar12 + unaff_SI);
          *pcVar4 = *pcVar4 + bVar10 + CARRY1(bVar8,bVar10);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        in(in_DX);
        uVar11 = (uint)*(byte *)(param_3 * 8 + -0x45e9);
        uVar5 = *(int *)(uVar11 + 0x15cc);
        if (((uVar11 == 0x1a) || (iVar12 = RANDOM(0xff,0), iVar12 < 0x80)) &&
           (((*(uint *)(uVar11 * 2 + 0x153c) & 0x8000) == 0 ||
            ((*(char *)0x587a != 'N' && (*(char *)0x587a != '\x1c')))))) {
          FUN_0000_5dce(0x96,5,400,0x2ee);
          if (param_1 == 0) {
            iStack_6 = FUN_0000_d186(0,-(uint)*(byte *)0x588f,param_3,param_2);
          }
          else {
            iStack_6 = 0;
          }
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec(uVar5,iStack_6,*(int *)(param_2 * 8 + -0x45e5),
                              *(int *)(param_2 * 8 + -0x45e6),param_3);
        }
        return 0;
      }
LAB_0000_4c05:
      FUN_0000_3270();
      return 0;
    }
    if (*(char *)0x5893 == '\0') {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
  }
  else {
    if (param_1 != 0x54) {
      if ((int)param_1 < 0x55) {
        if (param_1 == 0x4e) {
          FUN_0000_3270();
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (param_1 == 0x4f) {
          FUN_0000_3270();
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (param_1 == 0x50) {
          if ((*(byte *)0x5893 < 0x21) || (0x28 < *(byte *)0x5893)) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
        }
        else {
          if (param_1 == 0x51) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (param_1 == 0x52) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (param_1 == 0x53) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            switchD_0000:b23f::switchdataD_0000_984a();
          }
        }
      }
      else if (param_1 != 0x57) {
        if ((int)param_1 < 0x58) {
          if (param_1 == 0x55) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (param_1 == 0x56) {
            FUN_0000_3270();
            if (*(char *)0x57ad != '\0') {
              pcVar4 = (char *)0x57ad;
              *pcVar4 = *pcVar4 + -1;
              if (*(byte *)0x5893 < 0x21) {
                    // WARNING: Subroutine does not return
                thunk_FUN_0000_8fec();
              }
                    // WARNING: Subroutine does not return
              thunk_FUN_0000_8fec();
            }
            goto LAB_0000_4e0a;
          }
        }
        else {
          if (param_1 == 0x58) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (param_1 == 0x59) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (param_1 == 0x5a) {
            FUN_0000_3270();
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec();
          }
          if (param_1 == 0xfc) {
            FUN_0000_3270();
            *(uint *)0x538c = (uint)(*(int *)0x538c == 0);
          }
        }
      }
      goto LAB_0000_4c05;
    }
    if (*(char *)0x5893 == '\0') {
      FUN_0000_3270();
      iVar12 = FUN_0000_500c();
      if (iVar12 == 0) {
        return 1;
      }
    }
    else if (*(byte *)0x5893 < 0x21) {
      FUN_0000_3270();
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
  }
LAB_0000_4e0a:
  FUN_0000_3270();
  return 1;
}



void FUN_0000_4f42(int param_1,int param_2)

{
  int unaff_DS;

  if (*(byte *)0x5893 < 0x80) {
    param_2 = param_2 - (*(byte *)0x5896 - 5);
    param_1 = param_1 - (*(byte *)0x5897 - 5);
  }
  switchD_0000:606a::caseD_3(param_1,param_2,0);
  FUN_0000_3c5c(2000,3000,10);
  FUN_0000_7330();
  return;
}



void FUN_0000_4f84(uint param_1)

{
  int uVar1;
  int unaff_DS;
  int iStack_4;

  if (0x7f < *(byte *)0x5893) {
    iStack_4 = param_1 * 8 + -0x45ec;
    param_1 = (uint)*(byte *)(param_1 * 8 + -0x45e8);
  }
  switchD_0000:606a::caseD_3
            (*(int *)(param_1 * 8 + 0x5c5d),*(int *)(param_1 * 8 + 0x5c5c),0);
  if ((*(byte *)0x5893 < 0x80) || ((*(byte *)(iStack_4 + 2) & 0x80) == 0)) {
    FUN_0000_3c5c(2000,3000,10);
  }
  else {
    uVar1 = *(int *)(iStack_4 + 3);
    FUN_0000_4448(uVar1);
    FUN_0000_3c5c(500,3000,0x28);
    FUN_0000_4448(uVar1);
  }
  FUN_0000_7330();
  return;
}



char FUN_0000_500c(void)

{
  int *piVar1;
  char cVar2;
  int unaff_DS;

  *(int *)0x5876 = 0;
  *(int *)0x5878 = 0;
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



int FUN_0000_50ae(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  byte *pbVar5;
  int unaff_DS;
  byte *pbStack_8;
  byte *pbStack_6;

  iVar3 = 1;
  pbVar5 = (byte *)0x5c64;
  pbStack_6 = (byte *)0x5c65;
  pbStack_8 = (byte *)0x5c66;
  puVar4 = (int *)0x5c62;
  bVar1 = *(byte *)0x5893;
  while (((*pbVar5 != param_3 || (*pbStack_6 != param_2)) ||
         ((bVar1 < 0x80 && ((0x7f < bVar1 || (*pbStack_8 != param_1))))))) {
    pbVar5 = pbVar5 + 8;
    pbStack_6 = pbStack_6 + 8;
    pbStack_8 = pbStack_8 + 8;
    puVar4 = puVar4 + 8;
    iVar3 = iVar3 + 1;
    if ((int *)0x5d59 < puVar4) {
      *(int *)0x5876 = iVar3;
      return 0;
    }
  }
  uVar2 = *puVar4;
  *(int *)0x5876 = iVar3;
  return uVar2;
}



int FUN_0000_5122(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int *puVar4;
  byte *pbVar5;
  int unaff_DS;
  byte *pbStack_8;
  byte *pbStack_6;

  iVar3 = 0x1f;
  pbVar5 = (byte *)0x5d54;
  pbStack_6 = (byte *)0x5d55;
  pbStack_8 = (byte *)0x5d56;
  puVar4 = (int *)0x5d52;
  bVar1 = *(byte *)0x5893;
  while (((*pbVar5 != param_3 || (*pbStack_6 != param_2)) ||
         ((bVar1 < 0x80 && ((0x7f < bVar1 || (*pbStack_8 != param_1))))))) {
    pbVar5 = pbVar5 + -8;
    pbStack_6 = pbStack_6 + -8;
    pbStack_8 = pbStack_8 + -8;
    puVar4 = puVar4 + -8;
    iVar3 = iVar3 + -1;
    if (puVar4 < (int *)0x5c5a) {
      *(int *)0x5876 = iVar3;
      return 0;
    }
  }
  uVar2 = *puVar4;
  *(int *)0x5876 = iVar3;
  return uVar2;
}



int FUN_0000_5288(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char *pcVar4;
  int unaff_DS;
  char *pcStack_e;

  iVar2 = 1;
  pbVar3 = (byte *)0x5c62;
  pcVar4 = (char *)0x5c64;
  pcStack_e = (char *)0x5c65;
  do {
    bVar1 = *pbVar3;
    if (((param_3 <= bVar1) && (bVar1 <= param_2)) && (bVar1 != 0xb5)) {
      if (param_1 == 0) {
        return iVar2;
      }
      if (10 < (byte)((*pcVar4 - *(char *)0x5896) + 5U)) {
        return iVar2;
      }
      if (10 < (byte)((*pcStack_e - *(char *)0x5897) + 5U)) {
        return iVar2;
      }
    }
    pbVar3 = pbVar3 + 8;
    pcVar4 = pcVar4 + 8;
    pcStack_e = pcStack_e + 8;
    iVar2 = iVar2 + 1;
    if (0x17 < iVar2) {
      return 0;
    }
  } while( true );
}



int FUN_0000_5304(void)

{
  int iStack_4;

  iStack_4 = FUN_0000_5288(0,0,0);
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(1,0xf,1);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(1,0xff,0x80);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(1,0x11,0x10);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(1,0x7f,0x30);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(0,0xf,1);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(0,0xff,0x80);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(0,0x11,0x10);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(0,0x7f,0x30);
  }
  if (iStack_4 == 0) {
    iStack_4 = FUN_0000_5288(0,0xff,0);
  }
  return iStack_4;
}



void FUN_0000_53ec(int param_1,int param_2,char param_3)

{
  char *pcVar1;
  int unaff_DS;

  if (((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) && (param_3 != '\0')) {
    pcVar1 = (char *)FUN_0000_5e22(param_1,param_2);
    *pcVar1 = param_3;
  }
  return;
}



int FUN_0000_541c(void)

{
  char cVar1;
  uint uVar2;
  int uVar3;
  uint uVar4;
  char *pcVar5;
  int unaff_DS;
  int iStack_8;

  iStack_8 = 0;
  uVar2 = (uint)*(byte *)0x585b;
  if (uVar2 != 0) {
    pcVar5 = (char *)0x55b3;
    uVar4 = 0;
    iStack_8 = 0;
    do {
      cVar1 = *pcVar5;
      if ((cVar1 == 'G') || (cVar1 == 'P')) {
        *(uint *)0x5876 = uVar4;
        return 0;
      }
      if (cVar1 == 'S') {
        iStack_8 = iStack_8 + 1;
      }
      pcVar5 = pcVar5 + 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (iStack_8 == 0) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



void FUN_0000_5494(int param_1,int param_2,int param_3,int param_4,
                  int param_5,int param_6,int param_7)

{
  int unaff_DS;

  param_1 = param_1 * 8;
  *(int *)(param_1 + 0x5c5a) = param_7;
  *(int *)(param_1 + 0x5c5b) = param_6;
  *(int *)(param_1 + 0x5c5c) = param_5;
  *(int *)(param_1 + 0x5c5d) = param_4;
  *(int *)(param_1 + 0x5c5e) = param_3;
  *(int *)(param_1 + 0x5c5f) = param_2;
  return;
}



void FUN_0000_54ce(int param_1)

{
  RANDOM(param_1,0);
  return;
}



int FUN_0000_54de(void)

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
  int unaff_DS;

  if ((*(char *)0x58a4 != '\0') && (0 < param_1)) {
    do {
      FUN_0000_7330();
      FUN_0000_3b1a(1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_0000_5910(uint param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  int unaff_DS;

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
  int unaff_DS;

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
  int unaff_DS;

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
  int unaff_DS;

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



void FUN_0000_5a2c(void)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int unaff_DS;
  int *puStack_c;
  int iStack_a;
  uint uStack_4;

  uStack_4 = 0;
  if (*(char *)0x585b != '\0') {
    pcVar2 = (char *)0x55b3;
    pcVar3 = (char *)0x55c5;
    iStack_a = 0x55b8;
    puStack_c = (int *)0x55ba;
    do {
      if ((*pcVar2 != 'D') && (*pcVar3 == ',')) {
        iVar1 = RANDOM(7,0);
        if (iVar1 == 7) {
          FUN_0000_5934(*puStack_c,1,iStack_a);
          *(int *)((int)FUN_0000_a9f4 + 6) = 1;
        }
      }
      pcVar2 = pcVar2 + 0x20;
      pcVar3 = pcVar3 + 0x20;
      iStack_a = iStack_a + 0x20;
      puStack_c = puStack_c + 0x10;
      uStack_4 = uStack_4 + 1;
    } while (uStack_4 < *(byte *)0x585b);
  }
  return;
}



int FUN_0000_5aa0(int param_1)

{
  uint uVar1;
  int iVar2;
  int unaff_DS;
  int uStack_6;

  uVar1 = param_1 - 0x31;
  FUN_0000_3270(0xa396);
  if (param_1 == 0x30) {
    FUN_0000_3270(0xa3a8);
    *(int *)0x587b = 0xff;
  }
  else {
    if (((*(byte *)0x585b <= uVar1) || (iVar2 = uVar1 * 0x20, *(char *)(iVar2 + 0x55b3) == 'D')) ||
       (*(char *)(iVar2 + 0x55b3) == 'S')) {
      FUN_0000_3270(0xa3b0);
      return 1;
    }
    uStack_6 = (int)uVar1;
    *(int *)0x587b = uStack_6;
    FUN_0000_3270(iVar2 + 0x55a8);
    FUN_0000_30da(10);
  }
  FUN_0000_4320();
  return 0;
}



void FUN_0000_5b22(void)

{
  char *pcVar1;
  byte bVar2;
  byte *pbVar3;
  int uVar4;
  int iVar5;
  int unaff_DS;
  int uVar6;
  int uVar7;
  byte *pbStack_1e;
  char *pcStack_1c;
  int iStack_12;
  int iStack_e;
  int iStack_c;
  uint uStack_a;
  uint uStack_8;
  int iStack_6;
  int iStack_4;

  iStack_e = 0;
  iStack_4 = 0x33;
  if (*(byte *)0x5893 < 0x80) {
    uStack_8 = (uint)*(byte *)0x5896;
    uStack_a = (uint)*(byte *)0x5897;
  }
  else {
    uStack_a = 5;
    uStack_8 = 5;
  }
  iStack_c = uStack_8 - 5;
  iStack_12 = 0;
  if (iStack_c < (int)(uStack_8 + 6)) {
    do {
      if ((int)(uStack_a - 5) < (int)(uStack_a + 6)) {
        pcStack_1c = (char *)(iStack_12 + -0x54fe);
        pbStack_1e = (byte *)(iStack_12 + -0x539c);
        iVar5 = uStack_a - 5;
        do {
          iStack_6 = (iVar5 - uStack_a) * (iVar5 - uStack_a) +
                     (iStack_c - uStack_8) * (iStack_c - uStack_8);
          if (iStack_6 < iStack_4) {
            pbVar3 = (byte *)FUN_0000_5e22(iVar5,iStack_c);
            bVar2 = *pbVar3;
            if ((bVar2 & 0xfe) == 0xfa) {
              iStack_e = 1;
            }
            else if ((bVar2 & 0xfc) == 0xd4) {
              iStack_e = 2;
            }
            else if ((bVar2 & 0xfc) == 0xd8) {
              iStack_e = 3;
            }
            else if ((*pcStack_1c == '\0') && ((*pbStack_1e & 0xfc) == 0x5c)) {
              iStack_e = 4;
            }
            else {
              iStack_6 = iStack_4;
            }
            iStack_4 = iStack_6;
          }
          iVar5 = iVar5 + 1;
          pcStack_1c = pcStack_1c + 0x20;
          pbStack_1e = pbStack_1e + 0x10;
        } while (iVar5 < (int)(uStack_a + 6));
      }
      iStack_c = iStack_c + 1;
      iStack_12 = iStack_12 + 1;
    } while (iStack_c != uStack_8 + 6);
  }
  if (iStack_e == 1) {
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
      FUN_0000_3bb2(0xfff6,20000,2000,1,0xc2c);
    }
  }
  else {
    if (iStack_e == 2) {
      uVar7 = 0x14;
      uVar6 = 0x3c;
      uVar4 = 10000;
    }
    else {
      if (iStack_e != 3) {
        if (iStack_e == 4) {
          bVar2 = *(byte *)(*(byte *)0x6a08 + 0x6a48);
          if (bVar2 != 0) {
            FUN_0000_3bb2(0xfff6,20000,2000,1,*(int *)((uint)bVar2 * 2 + 0x6a34));
          }
          pcVar1 = (char *)0x6a08;
          *pcVar1 = *pcVar1 + '\x01';
          if (0x34 < *(byte *)0x6a08) {
            *(int *)0x6a08 = 0;
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
    *(int *)0x6a34 = 0;
  }
  return;
}



void FUN_0000_5d5e(void)

{
  FUN_0000_3c5c(1000,0x19,1);
  FUN_0000_3ae8(0x14,1);
  FUN_0000_3c5c(0x5dc,0x19,1);
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
  int unaff_DS;
  byte bStack_6;
  int iStack_4;

  if (*(byte *)0x5893 < 0x80) {
    if (*(char *)0x5893 == '\0') {
      param_2 = param_2 - *(byte *)0x589b & 0x1f;
      param_1 = param_1 - *(byte *)0x589c & 0x1f;
      bStack_6 = 0;
      if (0xf < param_1) {
        bStack_6 = 2;
        param_1 = param_1 - 0x10;
      }
      if (0xf < param_2) {
        bStack_6 = bStack_6 + 1;
        param_2 = param_2 - 0x10;
      }
      iStack_4 = (int)FUN_0000_6608 + (uint)bStack_6 * 0x100 + param_1 * 0x10 + param_2;
    }
    else if (((((int)param_2 < 0) || ((int)param_1 < 0)) || (0x1f < (int)param_2)) ||
            (0x1f < (int)param_1)) {
      iStack_4 = 0x6a07;
    }
    else {
      iStack_4 = (int)FUN_0000_6608 + param_1 * 0x20 + param_2;
    }
  }
  else {
    iStack_4 = param_1 * 0x20 + param_2 + -0x52ec;
  }
  return iStack_4;
}



void FUN_0000_5ed8(void)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  int unaff_DS;

  iVar3 = 0xd4;
  do {
    pcVar1 = (char *)(iVar3 + -0x4ee2);
    *pcVar1 = *pcVar1 + '\x01';
    if (*(char *)(iVar3 + -0x4ee2) == -0x28) {
      *(int *)(iVar3 + -0x4ee2) = 0xd4;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd8);
  iVar3 = 0xd8;
  do {
    pcVar1 = (char *)(iVar3 + -0x4ee2);
    *pcVar1 = *pcVar1 + '\x01';
    if (*(char *)(iVar3 + -0x4ee2) == -0x24) {
      *(int *)(iVar3 + -0x4ee2) = 0xd8;
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
        *(int *)(iVar3 + -0x4ee2) = 0xec;
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



int FUN_0000_6122(int param_1)

{
  int unaff_DS;
  int uStack_4;

  uStack_4 = 0;
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
    uStack_4 = 1;
  }
  return uStack_4;
}



void FUN_0000_617a(void)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int unaff_DS;

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
      pcVar5 = (char *)FUN_0000_5e22(*(int *)(iVar6 + 0x5838),*(int *)(iVar6 + 0x5830));
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



int FUN_0000_6214(int param_1)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  int unaff_DS;

  if (*(char *)(param_1 + 0x5840) == -1) {
    uVar2 = 0;
  }
  else {
    if (*(char *)0x5893 == '\0') {
      FUN_0000_3f3e(1);
      do {
        iVar3 = FUN_0000_3094(0xa3ba);
      } while (iVar3 == 0);
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    bVar1 = *(byte *)0x5893;
    *(int *)0x5893 = *(int *)(param_1 + 0x5840);
    *(int *)0x5896 = *(int *)(param_1 + 0x5830);
    *(int *)0x5897 = *(int *)(param_1 + 0x5838);
    *(int *)0x5895 = *(int *)(param_1 + 0x5848);
    if ((((*(char *)0x5893 != '\0') && (bVar1 != 0)) && (*(byte *)0x5893 < 0x21)) && (bVar1 < 0x21))
    {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec(1);
    }
    if ((*(char *)0x5893 == '\0') && (bVar1 == 0)) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    uVar2 = 1;
  }
  return uVar2;
}



int FUN_0000_62c8(void)

{
  char *pcVar1;
  byte *pbVar2;
  int uVar3;
  byte bVar4;
  char *pcVar5;
  int *puVar6;
  int unaff_DS;
  int uStack_8;

  uStack_8 = 0;
  pcVar5 = (char *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
  if (*pcVar5 == -0x24) {
    FUN_0000_5506(1);
    FUN_0000_3bb2(2,2000,30000,1,0x170c);
    uVar3 = *(int *)0x587c;
    *(int *)0x587c = 0x16;
    FUN_0000_2a88(5,5,0xdc);
    *(int *)0x587c = 0;
    FUN_0000_5506(1);
    *(int *)0x5887 = 0xf;
    do {
      FUN_0000_2b32(5,5,*(int *)0x5887);
      FUN_0000_3b1a(2);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 != '\0');
    puVar6 = (int *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
    *puVar6 = 5;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    switchD_0000:606a::caseD_3(5,5,5);
    if ((*(char *)0x587f == '\0') && (*(byte *)0x5881 < 10)) {
      uStack_8 = 1;
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
    *(int *)0x587c = uVar3;
  }
  return uStack_8;
}



uint FUN_0000_63a8(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int unaff_DS;
  uint uStack_a;
  int iStack_8;

  uStack_a = 0xffff;
  if (*(byte *)0x5893 < 0x81) {
    if (*(char *)0x587b == -1) {
      iStack_8 = 0;
      uVar3 = (uint)*(byte *)0x585b;
      if (uVar3 != 0) {
        pcVar5 = (char *)0x55b3;
        uVar6 = 0;
        iStack_8 = 0;
        do {
          if ((*pcVar5 == 'G') || (*pcVar5 == 'P')) {
            iStack_8 = iStack_8 + 1;
            uStack_a = uVar6;
          }
          pcVar5 = pcVar5 + 0x20;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar3);
      }
      if (1 < iStack_8) {
        bVar1 = false;
        do {
          FUN_0000_3270(0xa3c4);
          uStack_a = FUN_0000_48ae();
          if ((int)uStack_a < 0) {
LAB_0000_6432:
            bVar1 = true;
          }
          else {
            if ((*(char *)(uStack_a * 0x20 + 0x55b3) == 'G') ||
               (*(char *)(uStack_a * 0x20 + 0x55b3) == 'P')) {
              FUN_0000_3270(uStack_a * 0x20 + 0x55a8);
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
  uStack_a = (uint)bVar2;
LAB_0000_647f:
  if (uStack_a == 0xffff) {
    FUN_0000_3270(0xa3da);
  }
  else if (uStack_a == 0xfffe) {
    FUN_0000_30da(10);
  }
  return uStack_a;
}



void FUN_0000_64a4(void)

{
  int uVar1;
  int *puVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int unaff_SS;
  int unaff_DS;
  int uVar6;
  int auStack_12 [6];
  int uStack_6;
  int iStack_4;

  if (*(byte *)0x5893 < 0x21) {
    puVar5 = auStack_12;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = 0x2020;
    }
    uStack_6 = 0;
    uVar1 = *(int *)0x5386;
    FUN_0000_35b4(0);
    FUN_0000_36be(1);
    iVar4 = *(byte *)0x587f - 0x11;
    iVar3 = -iVar4;
    if ((iVar3 < 0xc) && (iVar4 < 1)) {
      *(int *)((int)auStack_12 + iVar3) = 0x2a;
    }
    *(int *)0x5885 = *(int *)((uint)*(byte *)0x587e * 2 + 0x1ed8);
    iStack_4 = -(*(byte *)0x587f - 8);
    if (iStack_4 < -0xc) {
      iStack_4 = iStack_4 + 0x18;
    }
    if ((iStack_4 < 0xc) && (-1 < iStack_4)) {
      *(int *)((int)auStack_12 + iStack_4) = *(int *)0x5885;
    }
    *(int *)0x5886 = *(int *)((uint)*(byte *)0x587e * 2 + 0x1ed9);
    iStack_4 = -(*(byte *)0x587f - 2);
    if (iStack_4 < -0xc) {
      iStack_4 = iStack_4 + 0x18;
    }
    if ((iStack_4 < 0xc) && (-1 < iStack_4)) {
      *(int *)((int)auStack_12 + iStack_4) = *(int *)0x5886;
    }
    FUN_0000_3612(0,6);
    if ((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) {
      FUN_0000_2490(*(int *)0x13b2);
      FUN_0000_24c6(6,0x98,0,0x28);
      FUN_0000_2490(*(int *)0x13b0);
      FUN_0000_2530(7,0x98,7,0x28);
    }
    else {
      for (iVar4 = 0; *(char *)((int)auStack_12 + iVar4) != '\0'; iVar4 = iVar4 + 1) {
        if (*(char *)((int)auStack_12 + iVar4) == '*') {
          uVar6 = *(int *)0x13b8;
        }
        else {
          uVar6 = *(int *)0x13ba;
        }
        FUN_0000_36ea(uVar6);
        FUN_0000_30da(*(int *)((int)auStack_12 + iVar4));
      }
      FUN_0000_36ea(*(int *)0x13b0);
    }
    FUN_0000_35b4(uVar1);
    FUN_0000_36be(0);
  }
  return;
}



void FUN_0000_6608(void)

{
  int unaff_DS;
  int uVar1;

  uVar1 = *(int *)0x5386;
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



void FUN_0000_664a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_DS;

  iVar1 = *(int *)0x5386 * 8;
  iVar2 = FUN_0000_3932();
  iVar2 = ((uint)*(byte *)(iVar1 + 0x535e) + iVar2) * 8;
  FUN_0000_370e();
  uVar3 = (uint)*(byte *)(iVar1 + 0x5364);
  FUN_0000_36ea(*(int *)0x13b2,iVar2,uVar3);
  FUN_0000_3946(0);
  FUN_0000_30da(2);
  FUN_0000_2490(*(int *)0x13b0);
  iVar4 = iVar2 + 5;
  iVar1 = iVar2;
  FUN_0000_2530(iVar2 + 3,iVar4,iVar2);
  FUN_0000_2530(iVar2 + 7,iVar1,iVar2 + 4,iVar4);
  FUN_0000_36ea(uVar3 & 0xf);
  FUN_0000_3946((int)uVar3 >> 4);
  return;
}



void FUN_0000_66ee(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_DS;

  iVar1 = *(int *)0x5386 * 8;
  iVar2 = FUN_0000_3932();
  iVar4 = ((uint)*(byte *)(iVar1 + 0x535e) + iVar2) * 8;
  iVar2 = FUN_0000_370e();
  iVar2 = ((uint)*(byte *)(iVar1 + 0x535f) + iVar2) * 8;
  uVar3 = (uint)*(byte *)(iVar1 + 0x5364);
  FUN_0000_36ea(*(int *)0x13b2,iVar2,iVar4,uVar3);
  FUN_0000_3946(0);
  FUN_0000_30da(1);
  FUN_0000_2490(*(int *)0x13b0);
  FUN_0000_2530(iVar2 + 3,iVar4 + 2,iVar2,iVar4 + 7);
  FUN_0000_2530(iVar2 + 7,iVar4 + 7,iVar2 + 4,iVar4 + 2);
  FUN_0000_36ea(uVar3 & 0xf);
  FUN_0000_3946((int)uVar3 >> 4);
  return;
}



void FUN_0000_6840(void)

{
  int unaff_DS;

  FUN_0000_2490(*(int *)0x13b2);
  FUN_0000_24c6(6,0x137,0,0xc0);
  FUN_0000_2490(*(int *)0x13b0);
  FUN_0000_26bc(0x137,7,0xc0);
  return;
}



void FUN_0000_6870(int param_1)

{
  int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;

  iVar2 = FUN_0000_3b8c(param_1);
  iVar2 = iVar2 / 2 + -0x1e;
  iVar3 = -iVar2;
  iVar4 = FUN_0000_3b8c(param_1);
  FUN_0000_2490(*(int *)0x13b2);
  iVar2 = iVar2 * -8;
  FUN_0000_24c6(6,iVar2,0,0xc0);
  iVar4 = (iVar4 + iVar3 + 2) * 8;
  FUN_0000_24c6(6,0x137,0,iVar4);
  FUN_0000_2490(*(int *)0x13b0);
  FUN_0000_26bc(iVar2,7,0xc0);
  FUN_0000_26bc(0x137,7,iVar4);
  uVar1 = *(int *)0x5386;
  FUN_0000_35b4(0);
  FUN_0000_3612(0,iVar3);
  FUN_0000_664a();
  FUN_0000_3270(param_1);
  FUN_0000_66ee();
  FUN_0000_35b4(uVar1);
  return;
}



void FUN_0000_695c(void)

{
  int unaff_DS;

  FUN_0000_2490(*(int *)0x13b2);
  FUN_0000_24c6(0x3e,0x138,0x39,0xbf);
  FUN_0000_2490(*(int *)0x13b0);
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
  int unaff_DS;
  int iStack_6;
  int uStack_4;

  if (param_1 != 0) {
    if ((*(char *)0x587a == 'Q') && (param_1 = param_1 >> 1, param_1 == 0)) {
      param_1 = 1;
    }
    *(int *)0x5880 = *(int *)0x587f;
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
        *(int *)0x587f = 0;
        iStack_6 = 0;
        do {
          if (*(byte *)(iStack_6 + 0x58c8) < 0x80) {
            do {
              uVar5 = RANDOM(8,1);
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
            uStack_4 = (int)uVar5;
            *(int *)(iStack_6 + 0x58c8) = uStack_4;
          }
          iStack_6 = iStack_6 + 1;
        } while (iStack_6 < 3);
        pcVar1 = (char *)0x587e;
        *pcVar1 = *pcVar1 + '\x01';
        if (0x1c < *(byte *)0x587e) {
          *(int *)0x585a = 0;
          *(int *)0x5859 = 0;
          *(int *)0x5858 = 0;
          *(int *)0x57b2 = 0;
          *(int *)0x587e = 1;
          *(int *)0x5959 = 0;
          pbVar7 = (byte *)0x55bf;
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
            *(int *)0x587d = 1;
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
    *(int *)0x58a5 = 2;
  }
  else {
    if (*(char *)0x587f == '\x05') {
      uVar5 = (uint)*(byte *)0x5881;
    }
    else {
      if (*(char *)0x587f != '\x13') {
        *(int *)0x58a5 = 0x32;
        goto LAB_0000_6b35;
      }
      uVar5 = -(*(byte *)0x5881 - 0x3b);
    }
    *(int *)0x58a5 = *(int *)(uVar5 / 10 + 0x6a80);
  }
LAB_0000_6b35:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(int *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(int *)0x58a5 = 10;
  }
  if (cVar4 != *(char *)0x58a5) {
    *(int *)0x24e6 = 1;
  }
LAB_0000_6b6a:
  if (*(char *)0x587f != *(char *)0x5880) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      FUN_0000_64a4();
    }
    if (*(char *)0x587f == '\0') {
      *(int *)0x5884 = 0xc;
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



int FUN_0000_6bc0(void)

{
  int uVar1;
  int unaff_DS;

  if (*(char *)0x587a == 'T') {
    uVar1 = 0;
  }
  else {
    uVar1 = RANDOM(3,0);
  }
  return uVar1;
}



void FUN_0000_6bd8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  int unaff_DS;
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
    *(int *)(param_5 + param_4 * 0x20 + -0x54fe) = 0x38;
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
    *(int *)(param_5 + param_4 * 0x20 + -0x551e) = 0x9e;
  }
LAB_0000_6d90:
  *(int *)(param_5 + param_4 * 0x10 + -0x539c) = (byte)param_1;
  *(int *)(param_5 + param_4 * 0x20 + -0x54fe) = 0;
  return;
}



void FUN_0000_6db4(void)

{
  int uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int unaff_DS;
  byte *pbStack_28;
  byte *pbStack_26;
  int *puStack_24;
  char *pcStack_22;
  int *puStack_20;
  int *puStack_1c;
  char *pcStack_18;
  char *pcStack_16;
  char *pcStack_14;
  byte *pbStack_12;
  byte *pbStack_10;
  int iStack_e;
  byte bStack_a;
  byte bStack_8;

  if (*(byte *)0x5893 < 0x80) {
    *(int *)0x5c5c = *(int *)0x5896;
    *(int *)0x5c5d = *(int *)0x5897;
    *(int *)0x5c5e = *(int *)0x5895;
    uVar1 = *(int *)0x587c;
    *(int *)0x5c5a = uVar1;
    *(int *)0x5c5b = uVar1;
    iStack_e = 0;
    pcStack_14 = (char *)0x0;
    do {
      iVar6 = 0;
      do {
        if ((*(char *)((int)pcStack_14 + iVar6 + -0x54fe) == -0x23) &&
           (iVar4 = FUN_0000_8a10(iStack_e,iVar6), 5 < iVar4)) {
          *(int *)((int)pcStack_14 + iVar6 + -0x54fe) = 0x1c;
        }
        else if ((*(char *)((int)pcStack_14 + iVar6 + -0x54fe) == '\x1c') &&
                (iVar4 = FUN_0000_8a10(iStack_e,iVar6), iVar4 < 6)) {
          *(int *)((int)pcStack_14 + iVar6 + -0x54fe) = 0xdd;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xb);
      pcStack_14 = (char *)((int)pcStack_14 + 0x20);
      iStack_e = iStack_e + 1;
    } while (iStack_e < 0xb);
  }
  pcStack_14 = (char *)0x5d52;
  pbStack_12 = (byte *)0x5d54;
  pbStack_10 = (byte *)0x5d55;
  pcStack_16 = "";
  pcStack_18 = "\x064j";
  pbVar7 = (byte *)0x5d52;
  puStack_1c = (int *)0x5d53;
  pcVar8 = "\x064j";
  puStack_20 = (int *)0x5d53;
  pcStack_22 = (char *)0x5d52;
  puStack_24 = (int *)0x5d53;
  pbStack_26 = (byte *)0x5d53;
  pbStack_28 = (byte *)0x5d53;
  do {
    if (*pcStack_14 != '\0') {
      bVar2 = *pbStack_12;
      bVar3 = *pbStack_10;
      bStack_a = bVar3;
      bStack_8 = bVar2;
      if (*(byte *)0x5893 < 0x80) {
        bStack_8 = bVar2 - (*(char *)0x5896 + -5);
        bStack_a = bVar3 - (*(char *)0x5897 + -5);
        if (((*pcStack_16 != *(char *)0x5895) || (10 < bStack_8)) || (10 < bStack_a))
        goto LAB_0000_7021;
      }
      if (((*pcStack_18 != '\0') &&
          (*(char *)((uint)bStack_a * 0x20 + (uint)bStack_8 + -0x54fe) != -1)) &&
         (*(char *)((uint)bStack_a * 0x20 + (uint)bStack_8 + -0x54fe) != -0x79)) {
        if ((((*pbVar7 & 0xfc) == 0xe8) || (*pbVar7 == 0x1e)) || (*pbVar7 == 0x1f)) {
          uVar5 = (uint)bStack_8;
          if (*(char *)((uint)bStack_a * 0x20 + uVar5 + -0x54fe) != '\0') {
            *(int *)((uint)bStack_a * 0x10 + uVar5 + -0x539c) = *puStack_1c;
            iVar6 = (uint)bStack_a * 0x20 + uVar5;
            goto LAB_0000_6f62;
          }
        }
        else if ((*pcVar8 == '\x1d') || (*pcVar8 == '\x1e')) {
          *(int *)((uint)bStack_a * 0x10 + (uint)bStack_8 + -0x539c) = *puStack_20;
          iVar6 = (uint)bStack_a * 0x20 + (uint)bStack_8;
LAB_0000_6f62:
          *(int *)(iVar6 + -0x54fe) = 0;
        }
        else {
          if (*pcStack_22 == '\\') {
            uVar5 = (uint)bStack_8;
            if (*(char *)((uint)bStack_a * 0x20 + uVar5 + -0x54fe) == -0x6e) {
              *(int *)((uint)bStack_a * 0x10 + uVar5 + -0x539c) = *puStack_24;
              iVar6 = (uint)bStack_a * 0x20 + uVar5;
              goto LAB_0000_6f62;
            }
            uVar5 = *pbStack_26 - 8;
          }
          else {
            uVar5 = (uint)*pbStack_28;
          }
          FUN_0000_6bd8(uVar5,bVar3,bVar2,bStack_a,bStack_8);
        }
      }
    }
LAB_0000_7021:
    pcStack_14 = pcStack_14 + -8;
    pbStack_12 = pbStack_12 + -8;
    pbStack_10 = pbStack_10 + -8;
    pcStack_16 = pcStack_16 + -8;
    pcStack_18 = pcStack_18 + -8;
    pbVar7 = pbVar7 + -8;
    puStack_1c = puStack_1c + -8;
    pcVar8 = pcVar8 + -8;
    puStack_20 = puStack_20 + -8;
    pcStack_22 = pcStack_22 + -8;
    puStack_24 = puStack_24 + -8;
    pbStack_26 = pbStack_26 + -8;
    pbStack_28 = pbStack_28 + -8;
    if (pbStack_28 < (byte *)0x5c5b) {
      return;
    }
  } while( true );
}



bool FUN_0000_7066(int param_1)

{
  byte bVar1;
  uint uVar2;
  int unaff_DS;
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



void FUN_0000_70cc(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_DS;
  bool bVar8;
  int iStack_18;
  int iStack_16;
  int iStack_12;
  int iStack_10;
  int iStack_c;
  int iStack_a;
  int iStack_8;

  iVar7 = 0;
  iStack_c = 0;
  iStack_10 = 0;
  do {
    iVar5 = 0;
    do {
      if (*(char *)(iStack_c + iVar5 + -0x54fe) == '\0') {
        if (*(char *)(iStack_10 + iVar5 + -0x539c) != '\x16') {
          uVar1 = CONCAT11(1,*(int *)(iStack_10 + iVar5 + -0x539c));
LAB_0000_713b:
          switchD_0000:606a::caseD_3(iVar7,iVar5,uVar1);
        }
      }
      else {
        if (((*(char *)(iStack_c + iVar5 + -0x54fe) != -0x24) || (*(char *)0x5887 == '\0')) ||
           (0xf < *(byte *)0x5887)) {
          uVar1 = (uint)*(byte *)(*(byte *)(iStack_c + iVar5 + -0x54fe) + 0xb11e);
          goto LAB_0000_713b;
        }
        FUN_0000_2b32(iVar7,iVar5,*(int *)0x5887);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb);
    iStack_c = iStack_c + 0x20;
    iStack_10 = iStack_10 + 0x10;
    iVar7 = iVar7 + 1;
    if (10 < iVar7) {
      if (((0x7f < *(byte *)0x5893) &&
          (bVar8 = *(char *)0x589f == '\0', *(bool *)0x589f = bVar8, bVar8)) &&
         ((*(char *)0x589e != -1 && (iVar7 = FUN_0000_7066(*(int *)0x589e), iVar7 == 0)))) {
        iVar7 = (uint)*(byte *)0x589e * 8;
        iVar5 = (uint)*(byte *)(iVar7 + -0x45e6) * 0x10;
        iVar2 = iVar5 + 8;
        iVar7 = (uint)*(byte *)(iVar7 + -0x45e5) * 0x10;
        iVar3 = iVar7 + 8;
        FUN_0000_2490(*(int *)0x13b0);
        iStack_8 = 0;
        do {
          iVar6 = 0;
          do {
            FUN_0000_26bc(iVar5 + 0x17,iVar3 + iStack_8 + iVar6,iVar2);
            FUN_0000_2712(iVar7 + 0x17,iVar3,iVar2 + iStack_8 + iVar6);
            iVar6 = iVar6 + 0xe;
          } while (iVar6 < 0xf);
          iStack_8 = iStack_8 + 1;
        } while (iStack_8 < 2);
        if (*(char *)0x5898 != '\0') {
          iVar7 = (uint)*(byte *)0x5899 * 0x10;
          iVar5 = (uint)*(byte *)0x589a * 0x10;
          iStack_8 = 0;
          iStack_18 = iVar5 + 10;
          iStack_16 = iVar5 + 0xe;
          iStack_12 = iVar5 + 0xd;
          do {
            iStack_a = 0;
            iVar6 = iVar5 + iStack_8 + 0xf;
            iVar2 = iVar7 + 10;
            iVar3 = iVar7 + 0xe;
            iStack_c = iVar7 + 0xd;
            do {
              FUN_0000_2490(*(int *)0x13b0);
              FUN_0000_2530(iStack_16,iVar3,iStack_16,iVar2);
              FUN_0000_29b0(iStack_18,iVar3);
              FUN_0000_2490(0);
              FUN_0000_2530(iStack_12,iStack_c,iStack_12,iVar2);
              FUN_0000_29b0(iStack_18,iStack_c);
              FUN_0000_2530(iVar6,iVar3,iVar6,iVar2);
              iVar4 = iVar7 + iStack_a + 0xf;
              FUN_0000_2530(iStack_18,iVar4,iStack_16,iVar4);
              iVar2 = iVar2 + 0xb;
              iVar3 = iVar3 + 3;
              iStack_c = iStack_c + 5;
              iStack_a = iStack_a + 1;
            } while (iStack_a < 2);
            iStack_18 = iStack_18 + 0xb;
            iStack_16 = iStack_16 + 3;
            iStack_12 = iStack_12 + 5;
            iStack_8 = iStack_8 + 1;
          } while (iStack_8 < 2);
        }
      }
      return;
    }
  } while( true );
}



void FUN_0000_7330(void)

{
  int *puVar1;
  int *puVar2;
  int *puVar3;
  int iVar4;
  uint uVar5;
  int *puVar6;
  int *puVar7;
  int unaff_DS;
  int iStack_c;
  uint uStack_6;

  *(int *)0x545e = 0xff;
  if (*(char *)0x587a == 'T') {
    *(int *)0x5891 = 0;
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
        uStack_6 = 0;
        iStack_c = 0;
        do {
          uVar5 = 0;
          do {
            if (*(char *)(iStack_c + uVar5 + -0x54fe) == '\0') {
              puVar3 = (int *)
                       FUN_0000_5e22((uStack_6 & 0xff) + (uint)*(byte *)0x5897 + -5,
                                     (uVar5 & 0xff) + (uint)*(byte *)0x5896 + -5);
              *(int *)(iStack_c + uVar5 + -0x54fe) = *puVar3;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 0xb);
          iStack_c = iStack_c + 0x20;
          uStack_6 = uStack_6 + 1;
        } while ((int)uStack_6 < 0xb);
      }
      else {
        FUN_0000_772a(0xb,(uint)*(byte *)0x5897 - (uint)*(byte *)0x589c,
                      (uint)*(byte *)0x5896 - (uint)*(byte *)0x589b,*(int *)0x58a5);
        *(int *)0x24e6 = 0;
      }
    }
    else {
      puVar7 = (int *)0xab02;
      puVar6 = (int *)0xad14;
      for (iVar4 = 0xb0; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar2 = *puVar1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        puVar2 = puVar7;
        puVar7 = (int *)((int)puVar7 + 1);
        puVar1 = puVar6;
        puVar6 = (int *)((int)puVar6 + 1);
        *(int *)puVar2 = *(int *)puVar1;
      }
    }
    FUN_0000_6db4();
    FUN_0000_70cc();
    if (*(char *)0x5891 != '\0') {
      FUN_0000_5b22();
    }
  }
  *(int *)0x5891 = 1;
  return;
}



void FUN_0000_772a(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *puVar2;
  int iVar3;
  int *puVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int *puVar8;
  int unaff_DS;
  int iStack_e;
  int iStack_c;

  puVar4 = (int *)0xab02;
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
  if (0 < param_4) {
    FUN_0000_7448(0xab02,0x20,0,0xff91,param_3 + -5,param_2 + -5,param_4);
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
  if (param_4 < 0) {
    iStack_c = 0;
    iStack_e = 0;
    do {
      iVar7 = 0;
      do {
        puVar4 = (int *)
                 FUN_0000_5e22((uint)*(byte *)0x589c + param_2 + -5 + iStack_c,
                               param_3 + -5 + iVar7 + (uint)*(byte *)0x589b);
        *(int *)(iStack_e + iVar7 + -0x54fe) = *puVar4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0xb);
      iStack_e = iStack_e + 0x20;
      iStack_c = iStack_c + 1;
    } while (iStack_c < 0xb);
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



void FUN_0000_786a(void)

{
  char *pcVar1;
  int *puVar2;
  int uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *puVar7;
  int *puVar8;
  int unaff_DS;
  int iStack_90;
  int aiStack_8e [64];
  int iStack_e;
  int iStack_c;
  int uStack_a;
  int iStack_8;
  int iStack_6;
  int *puStack_4;

  iStack_90 = 0;
  puStack_4 = (int *)0xad14;
  puVar7 = (int *)0xad14;
  for (iVar5 = 0x400; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = 0xff;
  }
  iStack_8 = 0;
  do {
    iVar5 = 0;
    do {
      puVar7 = (int *)
               FUN_0000_5e22(iStack_8 + (uint)*(byte *)0x589c,(uint)*(byte *)0x589b + iVar5);
      uVar3 = *puVar7;
      iVar4 = FUN_0000_1e22(0x6a9a,uVar3,10);
      if (iVar4 != 0) {
        aiStack_8e[iStack_90] = iStack_8;
        aiStack_8e[iStack_90 + 1] = iVar5;
        iStack_90 = iStack_90 + 2;
        *puStack_4 = uVar3;
      }
      puStack_4 = puStack_4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    iStack_8 = iStack_8 + 1;
    iStack_6 = iVar5;
  } while (iStack_8 < 0x20);
  iStack_6 = iStack_90;
  iStack_8 = 0;
  if (0 < iStack_90) {
    uStack_a = 0xb;
    do {
      iStack_e = aiStack_8e[iStack_8] + -5;
      iStack_8 = iStack_8 + 1;
      iStack_c = aiStack_8e[iStack_8] + -5;
      puVar7 = (int *)0xab02;
      iVar5 = 0xb;
      do {
        puVar8 = puVar7;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + 1;
          *puVar2 = 0xff;
        }
        puVar7 = puVar7 + 0x20;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_0000_7448(0xad14,0x20,iStack_c,iStack_e,iStack_c,iStack_e,10);
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < iStack_6);
  }
  pcVar6 = "";
  iVar5 = 0x400;
  do {
    if (*pcVar6 == -1) {
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 + '\x01';
    }
    pcVar6 = pcVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



void FUN_0000_79a6(int param_1,int param_2,uint param_3)

{
  int uVar1;
  int uVar2;
  int uVar3;
  byte bVar4;
  char cVar5;
  int *puVar6;
  int *puVar7;
  int unaff_DS;
  int uStack_6;

  *(int *)0x58a1 = (int)param_3;
  uVar1 = *(int *)0x5896;
  uVar2 = *(int *)0x5897;
  uVar3 = *(int *)0x5895;
  *(int *)0x5894 = *(int *)0x5893;
  bVar4 = *(byte *)0x587b;
  *(int *)0x5893 = 0xff;
  puVar7 = (int *)0xa9fc;
  puVar6 = (int *)0x5c5a;
  do {
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
    puVar7[2] = puVar6[2];
    puVar7[3] = puVar6[3];
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar6 < (int *)0x5d5a);
  if (param_3 == 0) {
    if ((*(byte *)(param_2 * 8 + 0x5c5a) & 0xfc) == 0x2c) {
      uStack_6 = 1;
    }
    else {
      uStack_6 = *(byte *)(param_2 * 8 + 0x5c5a) - 0x40 >> 2;
    }
    if (0x7f < *(byte *)(param_2 * 8 + 0x5c5f)) {
      uStack_6 = CONCAT11(uStack_6._1_1_ + '\x01',(int)uStack_6);
    }
    FUN_0000_85e2(uStack_6,1);
    *(int *)0x587b = 0xff;
    *(int *)0x589e = 0xff;
    *(int *)0x58a3 = 0;
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if ((param_3 & 4) != 0) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec(param_1,param_2,param_3);
  }
  if ((param_3 & 2) != 0) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec(2,0);
  }
  if (*(char *)0xbb16 != '\0') {
    *(int *)0xbb16 = 0;
    FUN_0000_89dc(1);
  }
  *(int *)0x5896 = uVar1;
  *(int *)0x5897 = uVar2;
  *(int *)0x5895 = uVar3;
  *(int *)0x5893 = *(int *)0x5894;
  *(int *)0x24e6 = 1;
  FUN_0000_4320();
  cVar5 = *(char *)((uint)bVar4 * 0x20 + 0x55b3);
  if ((cVar5 == 'D') || (cVar5 == 'S')) {
    *(int *)0x587b = 0xff;
  }
  else {
    *(byte *)0x587b = bVar4;
  }
  puVar7 = (int *)0x5c5a;
  puVar6 = (int *)0xa9fc;
  do {
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
    puVar7[2] = puVar6[2];
    puVar7[3] = puVar6[3];
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar6 < (int *)0xaafc);
  return;
}



void FUN_0000_7b0c(int param_1)

{
  int *puVar1;
  int *puVar2;
  int iVar3;
  int *puVar4;
  int *puVar5;
  int unaff_DS;

  FUN_0000_3f8e(param_1 * 0x160,0x160,0xad14,0xa3f0);
  puVar5 = (int *)0x1724;
  puVar4 = (int *)0xad7f;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (int *)0x172c;
  puVar4 = (int *)0xad85;
  for (iVar3 = 3; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (int *)0x1704;
  puVar4 = (int *)0xaddf;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  puVar5 = (int *)0x1714;
  puVar4 = (int *)0xadff;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  return;
}



void FUN_0000_7d80(int param_1,int param_2)

{
  FUN_0000_7b0c(0);
  FUN_0000_79a6(param_1,param_2,4);
  FUN_0000_786a();
  return;
}



uint FUN_0000_7f26(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  int unaff_DS;
  char *pcStack_22;
  char *pcStack_20;
  int *puStack_1e;
  int *puStack_1c;
  int *puStack_1a;
  int *puStack_18;
  char *pcStack_10;
  char *pcStack_e;
  char *pcStack_c;
  uint uStack_a;
  uint uStack_8;
  char *pcStack_4;

  uStack_a = 0;
  uStack_8 = 0xffff;
  if (param_4 != 2) {
    if (param_4 == 0) {
      uStack_a = 6;
    }
    if (uStack_a < 0x20) {
      pcVar10 = (char *)(param_5 * 8 + 0x13bd);
      pcVar6 = (char *)(param_5 * 0x20 + 0x55b3);
      do {
        if (*(char *)(uStack_a * 8 + -0x45ea) == '\0') {
          iVar7 = uStack_a * 8;
          pcStack_4 = (char *)(iVar7 + -0x45ec);
          if ((param_4 == 1) && (*pcVar6 != 'D')) {
            *(int *)(iVar7 + -0x45eb) = *(int *)(param_5 * 0x20 + 0x55b5);
            *(char *)(iVar7 + -0x45e7) = '$' - *(char *)(iVar7 + -0x45eb);
            *(int *)(iVar7 + -0x45ea) = 0x80;
            if ((*pcVar6 != 'G') && (*pcVar6 != 'P')) {
              pbVar1 = (byte *)(iVar7 + -0x45ea);
              *pbVar1 = *pbVar1 | 8;
            }
          }
          if (param_4 == 0) {
            *pcStack_4 = *(char *)(param_5 * 8 + 0x13c1);
            cVar2 = FUN_0000_54ce(7);
            bVar3 = cVar2 + -4 + *pcVar10;
            *(byte *)(iVar7 + -0x45eb) = bVar3;
            if (0x1e < bVar3) {
              *(char *)(iVar7 + -0x45eb) = *pcVar10;
            }
            *(char *)(iVar7 + -0x45e7) = '$' - *(char *)(iVar7 + -0x45eb);
            *(int *)(iVar7 + -0x45ea) = 0x40;
            if ((param_5 == 8) || (param_5 == 9)) {
              *(int *)(iVar7 + -0x45ea) = 0x20;
            }
          }
          *(char *)(iVar7 + -0x45e9) = (char)param_5;
          *(int *)(iVar7 + -0x45e6) = param_3;
          *(int *)(iVar7 + -0x45e5) = param_2;
          uStack_8 = uStack_a;
          break;
        }
        uStack_a = uStack_a + 1;
      } while ((int)uStack_a < 0x20);
    }
  }
  if ((uStack_8 < 0x8000) || (param_4 == 2)) {
    uVar8 = 0;
    cVar2 = *pcStack_4;
    cVar4 = (char)param_5 * '\x04' + '@';
    pcVar10 = (char *)0x5c5a;
    pcStack_10 = (char *)0x5c5b;
    pcStack_e = (char *)0x5c5b;
    pcStack_c = (char *)0x5c5a;
    puStack_18 = (int *)0x5c5c;
    puStack_1a = (int *)0x5c5d;
    puStack_1c = (int *)0x5c5e;
    puStack_1e = (int *)0x5c61;
    pcStack_20 = (char *)0x5c5f;
    pcStack_22 = (char *)0x5c5f;
    do {
      if (*pcVar10 == '\0') {
        cVar5 = (char)uVar8;
        if (param_4 == 0) {
          pcStack_4[4] = cVar5;
          *pcVar10 = cVar4;
          *pcStack_10 = cVar4;
        }
        if (param_4 == 1) {
          pcStack_4[4] = cVar5;
        }
        if (param_4 == 2) {
          *pcStack_c = (char)param_5;
          *pcStack_e = (char)param_5;
          uStack_8 = uVar8;
        }
        *puStack_18 = param_3;
        *puStack_1a = param_2;
        *puStack_1c = param_1;
        *puStack_1e = 0xff;
        if (param_4 == 0) {
          pcStack_22 = pcStack_20;
          param_5._0_1_ = cVar2;
        }
        *pcStack_22 = (char)param_5;
        if (param_4 != 2) {
          pcStack_4[4] = cVar5;
        }
        break;
      }
      pcVar10 = pcVar10 + 8;
      pcStack_10 = pcStack_10 + 8;
      pcStack_e = pcStack_e + 8;
      pcStack_c = pcStack_c + 8;
      puStack_18 = puStack_18 + 8;
      puStack_1a = puStack_1a + 8;
      puStack_1c = puStack_1c + 8;
      puStack_1e = puStack_1e + 8;
      pcStack_20 = pcStack_20 + 8;
      pcStack_22 = pcStack_22 + 8;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 0x20);
    if (((param_4 == 2) || (uVar8 != 0x20)) || (0x7fff < uStack_8)) goto LAB_0000_8171;
  }
  uStack_8 = 0xffff;
LAB_0000_8171:
  if (-1 < (int)uStack_8) {
    pbVar9 = (byte *)0xba18;
    do {
      if (*(byte *)((uint)*pbVar9 * 8 + 0x5c61) == uStack_8) {
        *(int *)((uint)*pbVar9 * 8 + 0x5c61) = 0xff;
      }
      pbVar9 = pbVar9 + 8;
    } while (pbVar9 < (byte *)0xbb18);
  }
  return uStack_8;
}



void FUN_0000_81b4(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int unaff_DS;

  param_1 = param_1 * 8;
  if (((*(byte *)(param_1 + -0x45ea) & 0x80) != 0) && ((*(byte *)(param_1 + -0x45ea) & 0x28) == 0))
  {
    if (*(char *)((int)FUN_0000_55be + 7 + (uint)*(byte *)(param_1 + -0x45e9) * 0x20) == '*') {
      *(int *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c5b) = 0x1d;
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
  int unaff_DS;

  param_1 = param_1 * 8;
  if ((*(byte *)(param_1 + -0x45ea) & 8) != 0) {
    if ((*(byte *)(param_1 + -0x45ea) & 0x80) == 0) {
      *(int *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c60) = 0;
    }
    else {
      *(int *)((uint)*(byte *)(param_1 + -0x45e9) * 0x20 + 0x55b3) = 0x47;
      if ((*(byte *)(param_1 + -0x45ea) & 0x10) == 0) {
        iVar2 = (uint)*(byte *)(param_1 + -0x45e8) * 8;
        *(int *)(iVar2 + 0x5c5b) = *(int *)(iVar2 + 0x5c5a);
      }
      else {
        *(int *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c5b) = 0x1d;
      }
    }
    pbVar1 = (byte *)(param_1 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  FUN_0000_4320();
  return;
}



void FUN_0000_82ce(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  int unaff_DS;

  iVar2 = param_1 * 8;
  if ((*(byte *)(iVar2 + -0x45ea) & 0x80) == 0) {
    pbVar1 = (byte *)(iVar2 + -0x45ea);
    *pbVar1 = *pbVar1 | 8;
    *(int *)0x58a2 = 4;
    *(int *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c60) = 0xff;
  }
  else {
    pcVar3 = (char *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b3);
    if (*pcVar3 == 'D') {
      return;
    }
    *pcVar3 = 'S';
    pbVar1 = (byte *)(iVar2 + -0x45ea);
    *pbVar1 = *pbVar1 | 8;
    *(int *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c5b) = 0x1e;
    if (param_1 == *(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
    *(int *)0x58a2 = 4;
    FUN_0000_4320();
    if ((*(byte *)0x58a1 & 4) != 0) {
      return;
    }
  }
  FUN_0000_7330();
  return;
}



void FUN_0000_85e2(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_DS;
  int *piStack_36;
  int aiStack_28 [15];
  int iStack_a;
  uint uStack_8;
  uint uStack_6;
  uint uStack_4;

  bVar1 = (int)param_1 < 0x100;
  if (!bVar1) {
    param_1 = param_1 - 0x100;
  }
  uStack_8 = (uint)bVar1;
  *(int *)0x58a0 = 0;
  if ((param_2 & 4) == 0) {
    switchD_0000:c779::caseD_42();
  }
  iVar4 = 0;
  piVar5 = aiStack_28;
  do {
    *piVar5 = iVar4;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  if ((param_2 & 4) != 0) {
    piVar5 = aiStack_28;
    do {
      iVar4 = RANDOM(0xf,0);
      uStack_6 = *piVar5;
      *piVar5 = aiStack_28[iVar4];
      aiStack_28[iVar4] = uStack_6;
      piVar5 = piVar5 + 1;
    } while (piVar5 < &iStack_a);
  }
  FUN_0000_3270(0xa438);
  if ((((*(char *)0x5894 == '\0') || (0x20 < *(byte *)0x5894)) || (param_1 == 0xc)) ||
     (uStack_8 == 0)) {
    uStack_6 = (uint)*(byte *)(param_1 * 8 + 0x13c2);
  }
  else {
    uStack_6 = 1;
  }
  if (((uStack_6 != 8) && (uStack_6 != 0x10)) && (uStack_6 != 1)) {
    uStack_6 = RANDOM(uStack_6,1);
    if (*(char *)((int)FUN_0000_5956 + 3) != '\0') {
      uStack_6 = RANDOM(uStack_6,1);
    }
    FUN_0000_7330();
    if (0x19 < (int)uStack_6) {
      uStack_6 = 0x1a;
    }
  }
  FUN_0000_7f26(*(int *)0x5895,*(int *)(aiStack_28[0] + 0x1714),
                *(int *)(aiStack_28[0] + 0x1704),0,param_1);
  uVar3 = (int)uStack_6 >> 0xf;
  uVar2 = uStack_6 ^ uVar3;
  if (1 < (int)uStack_6) {
    piStack_36 = aiStack_28;
    uVar6 = 1;
    do {
      piStack_36 = piStack_36 + 1;
      uStack_4 = param_1;
      if (((int)uVar6 < (int)((((int)(uVar2 - uVar3) >> 2 ^ uVar3) - uVar3) + 1)) &&
         (iVar4 = FUN_0000_54ce(8), iVar4 == 0)) {
        uStack_4 = (uint)*(byte *)(param_1 + 0x16d4);
      }
      iVar4 = *piStack_36;
      FUN_0000_7f26(*(int *)0x5895,*(int *)(iVar4 + 0x1714),
                    *(int *)(iVar4 + 0x1704),0,uStack_4);
      uVar6 = uVar6 + 1;
    } while (uVar6 != uStack_6);
  }
  return;
}



int FUN_0000_87a2(uint param_1,uint param_2)

{
  int uVar1;

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

int FUN_0000_87c8(int param_1)

{
  int unaff_DS;
  int uStack_6;

  uStack_6 = 0;
  if ((*(char *)0x5894 == '(') && (*(char *)((int)FUN_0000_55be + 4 + param_1 * 0x20) != '\x0f')) {
    uStack_6 = 0;
  }
  else if (*(char *)0x587a == 'P') {
    uStack_6 = 3;
  }
  return uStack_6;
}



int FUN_0000_8880(uint param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int unaff_DS;
  int uStack_4;

  uStack_4 = 1;
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
      uStack_4 = 0;
      goto LAB_0000_892e;
    }
  }
  *pbVar2 = 0xff;
LAB_0000_892e:
  FUN_0000_87c8(param_2);
  return uStack_4;
}



void FUN_0000_89b0(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  int unaff_ES;

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



void FUN_0000_89dc(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_89f6(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x60;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_8a10(int param_1,int param_2)

{
  int uVar1;
  int unaff_DS;

  if ((param_2 < 0xb) && (param_1 < 0xb)) {
    if ((5 < param_2) || (5 < param_1)) {
      if (5 < param_2) {
        param_2 = 10 - param_2;
      }
      if (5 < param_1) {
        param_1 = 10 - param_1;
      }
    }
    uVar1 = *(int *)(param_2 + param_1 * 6 + 0x6aa8);
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
  int unaff_DS;
  int uStack_8;

  uStack_8 = 0;
  if (param_3 == 1) {
    uStack_8 = 0xff;
  }
  pcVar2 = (char *)((int)FUN_0000_1f7d + 1 + (param_4 % 0x10) * 0x20);
  iVar1 = 0x10;
  do {
    *(int *)((pcVar2[1] + param_1) * 0x20 + (int)*pcVar2 + param_2 + -0x52ec) = uStack_8;
    pcVar2 = pcVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_0000_8ac6(void)

{
  char *pcVar1;
  int iVar2;
  int unaff_DS;

  if ((0x31 < *(byte *)0x58a5) || (*(int *)0x217e == -1)) {
    *(int *)0x2186 = 0xff;
    return;
  }
  *(int *)0x24e6 = 1;
  if (*(char *)0x2186 == -1) {
    pcVar1 = (char *)0x2186;
    *pcVar1 = *pcVar1 + '\x01';
    FUN_0000_8a60(*(int *)0x2180,*(int *)0x217e,1,0);
    FUN_0000_8a60(*(int *)0x2180,*(int *)0x217e,1,1);
    FUN_0000_8a60(*(int *)0x2180,*(int *)0x217e,1,2);
    if (*(int *)0x2182 == -1) goto LAB_0000_8bbc;
    FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,1,0);
    FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,1,1);
    iVar2 = 2;
  }
  else {
    FUN_0000_8a60(*(int *)0x2180,*(int *)0x217e,0,*(int *)0x2186);
    if (*(int *)0x2182 != -1) {
      FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,0,*(int *)0x2186);
    }
    pcVar1 = (char *)0x2186;
    *pcVar1 = *pcVar1 + '\x01';
    FUN_0000_8a60(*(int *)0x2180,*(int *)0x217e,1,*(byte *)0x2186 + 2);
    if (*(int *)0x2182 == -1) goto LAB_0000_8bbc;
    iVar2 = *(byte *)0x2186 + 2;
  }
  FUN_0000_8a60(*(int *)0x2184,*(int *)0x2182,1,iVar2);
LAB_0000_8bbc:
  if (0xf < *(byte *)0x2186) {
    *(int *)0x2186 = 0;
  }
  return;
}



void FUN_0000_8bca(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_8c20(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_2306();
  *(int *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_8c54(int param_1)

{
  code **ppcVar1;
  code *pcVar2;
  int uVar3;
  int unaff_BP;
  int unaff_DS;
  int in_CF;
  bool bVar4;

  *(int *)0x535c = 0;
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
  *(int *)0x535c = uVar3;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



int FUN_0000_8cb6(void)

{
  code **ppcVar1;
  code *pcVar2;
  int uVar3;
  int unaff_DI;
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
    if ((bVar4) && (*(int *)0x535c = 0, bVar4)) {
      return unaff_DI;
    }
  }
  *(int *)0x535c = uVar3;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



void FUN_0000_8d10(void)

{
  code *pcVar1;

  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void FUN_0000_8d15(void)

{
  code *pcVar1;

  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void FUN_0000_8d1a(void)

{
  FUN_0000_8d15();
  FUN_0000_8d10();
  return;
}



void FUN_0000_8d35(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_DI;
  int unaff_ES;

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



void FUN_0000_8d7b(void)

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

void FUN_0000_8d9f(void)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  char cVar3;
  int uVar4;
  char *pcVar5;
  int unaff_DI;
  char *pcVar6;
  int unaff_ES;
  int unaff_DS;
  bool bVar7;

  if ((in_AL == '\0') && (*(int *)0x8c == *(int *)(unaff_DI + 0xe))) {
    return;
  }
  FUN_0000_8d7b();
  *(int *)0x8e = *(int *)(unaff_DI + 0xe);
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
      *(int *)0x2 = uVar4;
      return;
    }
  }
  return;
}



void FUN_0000_8dfa(void)

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

int FUN_0000_8e23(void)

{
  code *pcVar1;
  int in_AX;
  int iVar2;
  uint in_CX;
  int iVar3;
  int in_DX;
  int unaff_DS;
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



int FUN_0000_8ec1(void)

{
  int unaff_DI;
  int unaff_DS;
  int in_CF;

  FUN_0000_8d1a();
  while (FUN_0000_8d9f(), !(bool)in_CF) {
    *(int *)0x8c = *(int *)(unaff_DI + 0xe);
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



void FUN_0000_8f46(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint in_CX;
  int in_DX;
  uint in_BX;
  int **unaff_SI;
  int unaff_ES;
  int unaff_DS;
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


// I think this gets called when you go over a waterfall.
// The code that checks for that tile calls thunk_FUN_0000_8fec();
// and that calls FUN_0000_8fec()
// and that calls this
void thunk_FUN_0000_8f97(void)

{
  uint *puVar1;
  int iVar2;
  int in_AX;
  uint in_CX;
  int uVar3;

  cRam00009170 = (char)((uint)in_AX >> 8);
  do {
    iVar2 = (in_CX - 1) * 0x10;
    uVar3 = 0;
    if ((*(uint *)(iVar2 + 6) & 0x8000) == 0) {
      FUN_0000_8d35(in_CX - 1);
      FUN_0000_8ec1();
      if ((bool)uVar3) {
        if (cRam00009170 == '\0') {
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



void FUN_0000_8f97(void)

{
  uint *puVar1;
  int iVar2;
  int in_AX;
  uint in_CX;
  int uVar3;

  cRam00009170 = (char)((uint)in_AX >> 8);
  do {
    iVar2 = (in_CX - 1) * 0x10;
    uVar3 = 0;
    if ((*(uint *)(iVar2 + 6) & 0x8000) == 0) {
      FUN_0000_8d35(in_CX - 1);
      FUN_0000_8ec1();
      if ((bool)uVar3) {
        if (cRam00009170 == '\0') {
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



int FUN_0000_8fec(void)

{
  int in_AX;

  thunk_FUN_0000_8f97();
  return in_AX;
}



char FUN_0000_90b0(void)

{
  code **ppcVar1;
  char in_AL;
  int unaff_SS;

  if (in_AL != '\0') {
    ppcVar1 = (code **)0x5394;
    (**ppcVar1)();
    in_AL = '\0';
  }
  return in_AL;
}



void FUN_0000_90cc(void)

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



void FUN_0000_90d4(void)

{
  code *pcVar1;

  FUN_0000_8d7b();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void thunk_FUN_0000_8fec(void)

{
                    // WARNING: Subroutine does not return
  FUN_0000_8fec();
}



void switchD_0000:b23f::switchdataD_0000_984a(void)

{
                    // WARNING: Subroutine does not return
  FUN_0000_8fec();
}



void FUN_0000_9bf0(void)

{
  int unaff_DS;

  FUN_0000_6608();
  FUN_0000_699c(0);
  *(int *)0x24e6 = 1;
  *(int *)FUN_0000_5956 = 1;
  *(int *)0x58a4 = 1;
  *(int *)0x5955 = 0;
  *(byte *)0x589b = *(byte *)0x5896 & 0xf0;
  if ((*(byte *)0x5896 & 0xf) < 8) {
    *(byte *)0x589b = *(char *)0x589b - 0x10U & 0xf0;
  }
  *(byte *)0x589c = *(byte *)0x5897 & 0xf0;
  if ((*(byte *)0x5897 & 0xf) < 8) {
    *(byte *)0x589c = *(char *)0x589c - 0x10U & 0xf0;
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(0);
}



void FUN_0000_9c6a(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_DS;

  uVar1 = (uint)*(byte *)0x5896 - (uint)*(byte *)0x5c64;
  uVar3 = (int)uVar1 >> 0xf;
  uVar2 = (uint)*(byte *)0x5897 - (uint)*(byte *)0x5c65;
  uVar4 = (int)uVar2 >> 0xf;
  if ((((*(char *)0x5c62 != '\0') && (*(char *)0x5c66 == *(char *)0x5895)) &&
      ((int)((uVar1 ^ uVar3) - uVar3) < 6)) && ((int)((uVar2 ^ uVar4) - uVar4) < 6)) {
    FUN_0000_5506(1);
  }
  return;
}



int FUN_0000_9cca(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int uVar4;
  int unaff_DS;

  bVar2 = *(byte *)0x587c & 0xfc;
  if (bVar2 == 0x10) {
    FUN_0000_3270((int)&LAB_0000_2946);
    if (param_1 == 1) {
      *(int *)0x587c = 0x12;
      return 0;
    }
    if (param_1 != 3) {
      return 0;
    }
    *(int *)0x587c = 0x13;
    return 0;
  }
  if (bVar2 == 0x14) {
    FUN_0000_3270((int)&DAT_0000_294c);
    if (param_1 == 1) {
      *(int *)0x587c = 0x14;
      return 0;
    }
    if (param_1 != 3) {
      return 0;
    }
    *(int *)0x587c = 0x15;
    return 0;
  }
  if ((bVar2 != 0x20) && (bVar2 != 0x24)) {
    if (bVar2 != 0x28) {
      return 0;
    }
    FUN_0000_3270((int)&DAT_0000_2951);
    *(char *)0x587c = (char)param_1 + (*(byte *)0x587c & 0xfc);
    return 0;
  }
  cVar1 = *(char *)0x587c;
  cVar3 = (char)param_1 + (*(byte *)0x587c & 0xfc);
  *(char *)0x587c = cVar3;
  if (cVar1 == cVar3) {
    if (0x23 < *(byte *)0x587c) {
      return 0;
    }
    if (*(char *)0x5892 != '\0') {
      return 0;
    }
    return 1;
  }
  FUN_0000_3270((int)&DAT_0000_2956);
  if (param_1 == 0) {
    uVar4 = SUB42(&DAT_0000_295c,0);
  }
  else if (param_1 == 1) {
    uVar4 = SUB42(&DAT_0000_296a,0);
  }
  else if (param_1 == 2) {
    uVar4 = SUB42(&LAB_0000_2963,0);
  }
  else {
    if (param_1 != 3) goto LAB_0000_9d9d;
    uVar4 = SUB42(&DAT_0000_2970,0);
  }
  FUN_0000_3270(uVar4);
LAB_0000_9d9d:
  *(int *)FUN_0000_5956 = 1;
  if (*(byte *)0x5c5f < 0x32) {
    FUN_0000_3270((int)&DAT_0000_2976);
  }
  return 1;
}



int FUN_0000_9dee(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int uVar5;
  int unaff_DS;
  byte bStack_6;

  if ((*(byte *)0x587c & 0xfc) == 0x24) {
    FUN_0000_3270((int)&DAT_0000_2982);
  }
  bVar3 = true;
  iVar4 = FUN_0000_50ae(*(int *)0x5895,param_1 + (uint)*(byte *)0x5897,
                        param_2 + (uint)*(byte *)0x5896);
  bStack_6 = (byte)iVar4;
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(byte *)0x587c < 0x30) && (0x1f < *(byte *)0x587c)) {
      if ((0x27 < *(byte *)0x587c) && ((0x23 < iVar4 && (iVar4 < 0x28)))) {
LAB_0000_9e73:
        bVar3 = true;
      }
    }
    else if (((0x23 < iVar4) && (iVar4 < 0x2c)) || ((iVar4 == 0x1b || ((bStack_6 & 0xfe) == 0x10))))
    goto LAB_0000_9e73;
  }
  cVar2 = *(char *)(param_2 + param_1 * 0x20 + -0x5459);
  if ((bVar3) && (iVar4 = FUN_0000_466c(cVar2,*(int *)0x587c), iVar4 != 0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*(char *)0x5955 == '\0') {
    if ((0x1f < *(byte *)0x587c) && ((bStack_6 & 0xfc) == 0xec)) {
      return 0;
    }
    FUN_0000_3270(0x29ae);
    if (cVar2 == '/') {
      FUN_0000_3270(0x29b8);
      FUN_0000_44c8();
    }
    else {
      FUN_0000_3ce0(200,0xa5);
    }
    FUN_0000_3536();
    return 0;
  }
  if (cVar2 == '\x03') {
    uVar5 = SUB42(&DAT_0000_298b,0);
  }
  else {
    if (cVar2 == 'G') goto LAB_0000_9ecf;
    uVar5 = 0x2999;
  }
  FUN_0000_3270(uVar5);
LAB_0000_9ecf:
  if (cVar2 == 'G') {
    FUN_0000_3270(0x29a5);
    pcVar1 = (char *)0x587c;
    *pcVar1 = *pcVar1 + '\x04';
  }
  else {
    FUN_0000_3c5c(300,2000,100);
    FUN_0000_ac8e();
  }
  *(int *)0x5955 = 0;
  *(int *)FUN_0000_5956 = 1;
  return 0;
}



void FUN_0000_9f44(char param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int unaff_DS;

  pcVar1 = (char *)0x5896;
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)0x5897;
  *pcVar1 = *pcVar1 + param_1;
  *(int *)0x24e6 = 1;
  bVar2 = *(char *)0x5896 - *(char *)0x589b & 0x1f;
  bVar3 = *(char *)0x5897 - *(char *)0x589c & 0x1f;
  if ((((4 < bVar2) && (bVar2 < 0x1b)) && (4 < bVar3)) && (bVar3 < 0x1b)) {
    return;
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(param_2,bVar3);
}



void FUN_0000_9fd0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  int unaff_DS;
  int iStack_6;

  pbVar2 = (byte *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
  bVar1 = *pbVar2;
  if (bVar1 == 5) {
LAB_0000_9ff6:
    iStack_6 = 0;
  }
  else {
    if ((bVar1 != 0x1e) && (bVar1 != 0x1f)) {
      if ((bVar1 < 4) || (0xf < bVar1)) goto LAB_0000_9ff6;
      if (8 < bVar1) {
        iStack_6 = 2;
        goto LAB_0000_a00f;
      }
    }
    iStack_6 = 1;
  }
LAB_0000_a00f:
  if (iStack_6 == 1) {
    iVar3 = FUN_0000_b650();
    FUN_0000_9c6a();
    if (iVar3 == 0) {
      FUN_0000_3270(0x29bf);
    }
    uVar5 = 2;
  }
  else {
    if (iStack_6 != 2) {
      return;
    }
    iVar3 = FUN_0000_b650();
    FUN_0000_9c6a();
    iVar4 = FUN_0000_b650();
    FUN_0000_9c6a();
    if (iVar3 + iVar4 == 0) {
      FUN_0000_3270(0x29cf);
    }
    uVar5 = 4;
  }
  FUN_0000_699c(uVar5);
  return;
}



uint FUN_0000_a188(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int uVar4;
  uint uVar5;
  int unaff_DS;
  uint uStack_6;

  FUN_0000_7330();
  if (*(char *)((int)FUN_0000_a9f4 + 6) != '\0') {
    FUN_0000_4320();
    *(int *)((int)FUN_0000_a9f4 + 6) = 0;
  }
  if ((*(byte *)0xabc7 & 0xfc) == 0xd4) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if (*(char *)FUN_0000_5956 != '\0') {
    FUN_0000_30da(10);
    FUN_0000_664a();
  }
  *(int *)FUN_0000_5956 = 1;
  do {
    if (*(char *)0x5955 == '\0') {
LAB_0000_a2bf:
      if (*(char *)0x5955 == '\0') {
        uStack_6 = FUN_0000_408c();
      }
      return uStack_6;
    }
    uVar4 = FUN_0000_3558();
    uStack_6 = FUN_0000_3a52(uVar4);
    if ((uStack_6 != 0) && (uStack_6 != *(byte *)0x5955)) goto LAB_0000_a2bf;
    uStack_6 = (uint)*(byte *)0x5955;
    if (*(char *)0x5892 != '\0') {
      cVar3 = '\0';
      cVar2 = '\0';
      if (uStack_6 == 1) {
        cVar2 = -1;
      }
      else if (uStack_6 == 2) {
        cVar2 = '\x01';
      }
      else if (uStack_6 == 3) {
        cVar3 = -1;
      }
      else if (uStack_6 == 4) {
        cVar3 = '\x01';
      }
      uVar5 = 1;
      if (*(char *)(*(byte *)0x5892 + 0x29f5) != cVar2) {
        uVar5 = 2;
      }
      if (*(char *)(*(byte *)0x5892 + 0x29f9) != cVar3) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 % 3 <= (uint)*(byte *)0x5883) {
        *(int *)0x5883 = 0;
        goto LAB_0000_a2bf;
      }
    }
    if (*(byte *)0x57bb < 0x80) {
      uVar4 = 2;
    }
    else {
      *(uint *)0xa524 = (uint)(*(int *)0xa524 == 0);
      uVar4 = 1;
    }
    FUN_0000_699c(uVar4);
    if ((*(int *)0xa524 == 0) || (*(byte *)0x57bb < 0x80)) {
      FUN_0000_b650();
    }
    FUN_0000_5506(1);
    pcVar1 = (char *)0x5883;
    *pcVar1 = *pcVar1 + '\x01';
  } while( true );
}



int FUN_0000_a380(int param_1)

{
  int uVar1;
  int iVar2;
  int unaff_DS;

  FUN_0000_3270(param_1);
  iVar2 = 0x20;
  do {
    if ((*(char *)(iVar2 + 0x1e8a) == *(char *)0x5896) &&
       (*(char *)(iVar2 + 0x1eb2) == *(char *)0x5897)) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x28);
  if (iVar2 < 0x28) {
    if (*(char *)0x587c == '\x1c') {
      if (iVar2 == 0x27) {
        if ((*(byte *)0x58c8 & *(byte *)0x58c9 & *(byte *)0x58ca) < 0x80) {
          FUN_0000_3270(0x2a2f);
          iVar2 = FUN_0000_5304();
          *(int *)(iVar2 * 8 + 0x5c5a) = 0xfc;
          uVar1 = FUN_0000_7b70(iVar2);
          return uVar1;
        }
      }
      else {
        FUN_0000_3270(0x2a47);
        FUN_0000_30da(0xfc);
        FUN_0000_3270(*(int *)(iVar2 * 2 + 0x1e3a));
        FUN_0000_30da(0xfb);
      }
      FUN_0000_30da(10);
      if (*(char *)0xa9bd != '\x01') {
        FUN_0000_3f3e(1);
        do {
          iVar2 = FUN_0000_3094(0x2a4a);
        } while (iVar2 == 0);
      }
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    uVar1 = FUN_0000_3270(0x2a24);
  }
  else {
    FUN_0000_3270(0x2a5f);
    uVar1 = 1;
  }
  return uVar1;
}



int FUN_0000_a4ce(void)

{
  byte bVar1;
  byte *pbVar2;
  int uVar3;
  int iVar4;
  int unaff_DS;

  FUN_0000_3270(0x2a6f);
  pbVar2 = (byte *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
  bVar1 = *pbVar2;
  if (bVar1 == 0x16) {
    uVar3 = 0x2abd;
    goto LAB_0000_a59b;
  }
  if (bVar1 < 0x17) {
    if (bVar1 != 0x10) {
      if (bVar1 == 0x11) {
        FUN_0000_3270(0x2a89);
        goto LAB_0000_a558;
      }
      if ((((bVar1 != 0x12) && (bVar1 != 0x13)) && (bVar1 != 0x14)) && (bVar1 != 0x15))
      goto LAB_0000_a5de;
    }
LAB_0000_a56d:
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if (bVar1 == 0x19) {
    FUN_0000_3270(0x2a76);
    iVar4 = 0;
    do {
      if ((*(char *)(iVar4 + 0x1f6e) == *(char *)0x5896) &&
         (*(char *)(iVar4 + 0x1f76) == *(char *)0x5897)) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    FUN_0000_3270(*(int *)(iVar4 * 2 + 0x1f4e));
    FUN_0000_30da(10);
LAB_0000_a558:
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if (0x19 < bVar1) {
    if (bVar1 == 0x1a) {
      FUN_0000_3270(0x2acf);
      return 1;
    }
    if (((bVar1 == 0x1b) || (bVar1 == 0x39)) || (bVar1 == 0x3e)) goto LAB_0000_a56d;
LAB_0000_a5de:
    FUN_0000_3270(0x2b16);
    return 0;
  }
  if (bVar1 == 0x17) {
    uVar3 = 0x2ac2;
  }
  else {
    if (bVar1 != 0x18) goto LAB_0000_a5de;
    uVar3 = 0x2ac7;
  }
LAB_0000_a59b:
  uVar3 = FUN_0000_a380(uVar3);
  return uVar3;
}



int FUN_0000_a60a(int param_1)

{
  char *pcVar1;
  int unaff_DS;

  pcVar1 = (char *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
  if ((*pcVar1 == -1) && (*(char *)0x587a != '\x0e')) {
    *(int *)0x58a5 = 0;
    if (param_1 == 0) {
      FUN_0000_7330();
      param_1 = 1;
    }
  }
  else {
    param_1 = 0;
    FUN_0000_699c(0);
  }
  return param_1;
}



void FUN_0000_a650(void)

{
  int iVar1;
  int unaff_DS;

  if (*(char *)0x5895 != '\0') {
    iVar1 = RANDOM(0xff,0);
    if (iVar1 == 0x69) {
      FUN_0000_3270(0x2b1d);
      FUN_0000_4a92();
      FUN_0000_44c8();
    }
  }
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Removing unreachable block (ram,0x0000a826)

byte * FUN_0000_a674(char param_1)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  byte bVar13;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *in_CX;
  byte bVar14;
  byte bVar15;
  byte *in_BX;
  byte **ppbVar16;
  int *unaff_SI;
  byte *unaff_DI;
  int unaff_ES;
  int unaff_SS;
  int unaff_DS;
  bool bVar17;
  ulong uVar18;
  byte abStack_2001 [8145];
  char *pcStack_1e;
  byte *pbStack_1c;
  byte *pbStack_18;
  char *pcVar19;
  char *pcStack_12;
  int iStack_10;
  int iStack_e;
  byte *pbStack_4;

  ppbVar16 = (byte **)&stack0xfffe;
  do {
    bVar17 = false;
    cVar8 = '\0';
    FUN_0000_a60a();
    iVar10 = FUN_0000_541c();
    if (iVar10 == 1) {
      FUN_0000_30da();
      FUN_0000_664a();
    }
    else {
      if (iVar10 == -1) {
        if (*(char *)0xa9bd != '\x01') {
          FUN_0000_3f3e();
          do {
            iVar10 = FUN_0000_3094();
          } while (iVar10 == 0);
        }
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      iVar10 = FUN_0000_62c8();
      if (iVar10 != 0) {
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      if (*(char *)0x5893 != '\0') {
        pbVar12 = (byte *)FUN_0000_a90d();
        return pbVar12;
      }
      pcVar19 = (char *)0xa707;
      uVar18 = FUN_0000_a188();
      if (0x1f < (byte)uVar18) {
        pbVar12 = (byte *)FUN_0000_a7de();
        return pbVar12;
      }
      uVar11 = (uint)uVar18 & 0xff;
      if (uVar11 < 0x17) {
        iVar10 = uVar11 * 2;
        cVar9 = (char)in_BX;
        bVar7 = (byte)((uint)in_BX >> 8);
        pbStack_4 = in_BX;
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
        switch(uVar11) {
        case 0:
          do {
            bVar7 = *(byte *)0x5897;
            pbVar1 = unaff_DI;
            if (*pbVar1 < bVar7 || *pbVar1 == bVar7) {
              iVar10 = -(uint)*unaff_DI;
            }
            else {
              iVar10 = ~(1 - *pbStack_1c) + 1;
            }
            cVar8 = *(char *)0x5895;
            if ((*pcStack_1e != cVar8) ||
               (((*pcStack_1e == cVar8 && (5 < (int)pbStack_4)) && (5 < iVar10)))) {
              return in_CX;
            }
            do {
              pcStack_12 = pcStack_12 + -8;
              pcVar19 = pcVar19 + -8;
              unaff_SI = unaff_SI + -4;
              pbStack_18 = pbStack_18 + -8;
              unaff_DI = unaff_DI + -8;
              pbStack_1c = pbStack_1c + -8;
              pcStack_1e = pcStack_1e + -8;
              in_CX = in_CX + -1;
              if ((int)in_CX < 0) {
                return (byte *)0xffff;
              }
              if (*pcStack_12 == '\0') {
                return in_CX;
              }
            } while (*pcVar19 != param_1);
            bVar7 = *(byte *)0x5896;
            piVar2 = unaff_SI;
            if (*(byte *)piVar2 < bVar7 || *(byte *)piVar2 == bVar7) {
              pbStack_4 = (byte *)(iStack_10 - (uint)*(byte *)unaff_SI);
            }
            else {
              pbStack_4 = (byte *)(~(iStack_e - (uint)*pbStack_18) + 1);
            }
          } while( true );
        case 1:
          *(byte *)(unaff_SI + -0x12) = 0;
          piVar2 = (int *)((int)unaff_SI + iVar10 + -0x3741);
          *piVar2 = *piVar2 + 1;
          pbVar1 = (byte *)((int)unaff_SI + 0x28ef);
          *pbVar1 = *pbVar1 ^ (byte)in_CX;
          if (*"f" == 'B') {
            *(int *)0xa9c2 = 2;
          }
          bVar7 = *(byte *)0xa9bd;
          bVar13 = *(byte *)0x2aa7;
          pbVar12 = (byte *)(uint)bVar13;
          *(byte *)(bVar7 + 0xa9c8) = bVar13;
          if ((bVar7 == 3) && (*(char *)0xa9c9 == -1)) {
            *(byte *)0xa9c9 = bVar13;
          }
          if (*(char *)0xa9be == '\0') {
            pbVar12 = (byte *)FUN_0000_30da();
          }
          else if (*(char *)0xa9be == '\x02') {
            FUN_0000_2642();
            FUN_0000_3642();
            pbVar12 = (byte *)FUN_0000_298e();
          }
          *(int *)0x5394 = 0x2322;
          *(int *)0x5396 = 0x1a2;
          return pbVar12;
        case 2:
          in_CX = in_CX + -1;
          if (in_CX == (byte *)0x0 || (uVar18 & 0xff) == 0) {
            if (bVar7 != 0x55) {
              FUN_0000_1fa6();
              FUN_0000_1f7d();
              in_BX = (byte *)0x1;
            }
            return in_BX;
          }
          do {
            pbVar1 = unaff_DI;
            unaff_DI = unaff_DI + 1;
            *pbVar1 = (byte)in_BX;
            if ((byte)in_BX == 0) {
              in_CX = in_CX + -1;
              if (in_CX == (byte *)0x0) {
                *ppbVar16 = (byte *)0x0;
                return in_BX;
              }
              if (*unaff_SI != 0x433b) {
                *ppbVar16 = unaff_DI;
                ppbVar16 = ppbVar16 + 1;
              }
            }
            piVar2 = unaff_SI;
            unaff_SI = (int *)((int)unaff_SI + 1);
            in_BX = (byte *)(uint)*(byte *)piVar2;
          } while( true );
        case 3:
          pbStack_4._0_1_ = cVar8;
          break;
        case 4:
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + cVar9;
          iVar10 = CONCAT11((char)((uint)iVar10 >> 8) + (byte)in_CX,(char)iVar10);
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = unaff_DI + iVar10;
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
          pbVar1 = (byte *)(iVar10 + (int)unaff_SI);
          *pbVar1 = *pbVar1 + cVar9;
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        case 5:
          pbVar1 = &stack0x32ff + (int)unaff_SI;
          bVar13 = bVar7 + *pbVar1;
          bVar17 = CARRY1(bVar7,*pbVar1) || CARRY1(bVar13,CARRY2(uVar11,uVar11));
          bVar13 = bVar13 + CARRY2(uVar11,uVar11);
          pbVar1 = abStack_2001 + (int)unaff_SI;
          bVar7 = *pbVar1;
          bVar5 = bVar13 + *pbVar1;
          LOCK();
          pbVar1 = unaff_DI + 1;
          bVar14 = (byte)(uVar18 >> 0x10);
          *pbVar1 = *pbVar1 + bVar14;
          UNLOCK();
          bVar15 = (byte)(uVar18 >> 0x18);
          bVar7 = cVar9 + (CARRY1(bVar13,bVar7) || CARRY1(bVar5,bVar17)) + bVar15;
          pbVar1 = unaff_DI + 1;
          *pbVar1 = *pbVar1 & bVar14;
          iVar10 = CONCAT11(bVar5 + bVar17,bVar7 + bVar15);
          uVar4 = (uint)CARRY1(bVar7,bVar15);
          uVar6 = iVar10 - 0xfff;
          iVar10 = uVar6 + uVar4 + -0x1000 + (uint)(0xfff < iVar10 + 1U || CARRY2(uVar6,uVar4));
          if (in_CX != (byte *)0x1 && iVar10 != 0) {
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          bVar7 = (byte)iVar10;
          piVar2 = unaff_SI + uVar11;
          *(byte *)piVar2 = *(byte *)piVar2 + bVar7 + bVar15 + CARRY1(bVar7,bVar15);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        break;
      }
    }
    FUN_0000_3270();
    pbVar12 = (byte *)(*(byte *)0x587c & 0xfffc);
    if ((char)pbVar12 != ' ') {
      *(int *)0x5955 = 0;
    }
    if (*(char *)0x5893 == '\0') {
      FUN_0000_699c();
      pbStack_18 = (byte *)0xa83d;
      in_BX = (byte *)FUN_0000_5e22();
      bVar7 = *in_BX;
      pcStack_12 = (char *)(uint)bVar7;
      if ((bVar7 & 0xfe) == 0x6a) {
        FUN_0000_b7d8();
      }
      else {
        if ((pcStack_12 == "\b") && (*(char *)0x587c == '\x1c')) {
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (pcStack_12 == (char *)0x8f) {
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (((*(char *)0x5896 == -0x17) && (*(char *)0x5897 == -0x15)) &&
           ((*(char *)0x5895 == '\0' && (*(char *)0x5893 == '\0')))) {
          FUN_0000_3270();
          if (*(char *)0x58cc == '\0') {
            FUN_0000_3270();
            FUN_0000_3270();
            pcVar3 = (char *)0x5897;
            *pcVar3 = *pcVar3 + '\x01';
          }
          else {
            FUN_0000_3270();
          }
        }
      }
      FUN_0000_a650();
      FUN_0000_4508();
      if ((pcStack_12 == (char *)0x1) &&
         (((*(byte *)0x587c & 0xfc) == 0x28 || ((*(byte *)0x587c & 0xfe) == 0x14)))) {
        FUN_0000_3270();
        pbStack_18 = (byte *)0xa8f2;
        FUN_0000_4f42();
        FUN_0000_ac8e();
      }
      if ((bVar7 & 0xfc) == 0xd4) {
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      pbVar12 = (byte *)FUN_0000_b650();
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      return pbVar12;
    }
  } while( true );
  while (pbStack_4._0_1_ = FUN_0000_408c(), (char)pbStack_4 != 'Y') {
    if ((char)pbStack_4 == 'N') break;
  }
  if ((char)pbStack_4 == 'N') {
    FUN_0000_3270();
  }
  else {
    FUN_0000_3270();
    FUN_0000_3270();
    iVar10 = FUN_0000_48ae();
    FUN_0000_30da();
    if ((iVar10 == -1) || (*(char *)(iVar10 * 0x20 + 0x55b3) != 'G')) {
      FUN_0000_3270();
    }
  }
  if (*(byte *)0x5893 < 0x21) {
    pbVar12 = (byte *)FUN_0000_7d80();
    *(int *)0x24e6 = 1;
    return pbVar12;
  }
  *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec();
}



int FUN_0000_a97c(void)

{
  byte bVar1;
  byte *pbVar2;
  int unaff_DS;
  int iStack_4;

  if (*(byte *)0x5895 < 0x80) {
    pbVar2 = (byte *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
    bVar1 = *pbVar2;
    if ((bVar1 < 0x20) || (0x26 < bVar1)) {
      if ((bVar1 == 4) || ((8 < bVar1 && (bVar1 < 0x10)))) {
        iStack_4 = 2;
      }
      else {
        iStack_4 = 1;
      }
    }
    else {
      iStack_4 = 0;
    }
    if ((0x1f < *(byte *)0x587f) || (*(byte *)0x587f < 5)) {
      iStack_4 = iStack_4 + 3;
    }
  }
  else {
    iStack_4 = 3;
  }
  return iStack_4;
}



int FUN_0000_a9f4(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int unaff_DS;

  uVar1 = RANDOM(0xff,0);
  iVar2 = 0;
  for (; *(byte *)(iVar2 + param_1) <= uVar1; uVar1 = uVar1 - *pbVar3) {
    pbVar3 = (byte *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



int FUN_0000_aa3e(int param_1)

{
  int iVar1;
  int unaff_DS;

  if ((((param_1 < 4) || ((0x5f < param_1 && (param_1 < 0x70)))) ||
      ((0xd3 < param_1 && (param_1 < 0xd8)))) || ((0xe3 < param_1 && (param_1 < 0xe8)))) {
    iVar1 = RANDOM(0x40,0);
    if (iVar1 < 0x10) {
      if (0x7f < *(byte *)0x5895) {
        iVar1 = FUN_0000_a9f4(0x2bf6);
        return *(int *)(iVar1 + 0x2bda);
      }
      if ((param_1 == 1) && (iVar1 = RANDOM(7,0), iVar1 == 7)) {
        return 0xec;
      }
      iVar1 = FUN_0000_a9f4(0x2bf0);
      return *(int *)((int)FUN_0000_2bd4 + iVar1);
    }
  }
  else if (param_1 == 7) {
    iVar1 = RANDOM(3,0);
    if (iVar1 == 0) {
      return 0xe0;
    }
  }
  else {
    if ((param_1 == 4) && (*(char *)0x5895 == -1)) {
      return 0xf8;
    }
    if (((param_1 != 0xc) && (param_1 != 0xd)) &&
       ((param_1 < 0x10 || (((byte)param_1 & 0xfc) == 0x30)))) {
      if (*(byte *)0x5895 < 0x80) {
        iVar1 = FUN_0000_a9f4(0x2bdc);
        return *(int *)(iVar1 + 0x2bc0);
      }
      iVar1 = FUN_0000_a9f4(0x2be8);
      return *(int *)(iVar1 + 0x2bcc);
    }
  }
  return 0;
}



void FUN_0000_ab3e(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int unaff_DS;

  do {
    do {
      cVar1 = RANDOM(0x1f,0);
      *(uint *)0x5876 = (uint)(byte)(cVar1 + *(char *)0x589b);
      cVar1 = RANDOM(0x1f,0);
      *(uint *)0x5878 = (uint)(byte)(cVar1 + *(char *)0x589c);
      uVar2 = *(int *)0x5876 - (uint)*(byte *)0x5896;
      uVar3 = (int)uVar2 >> 0xf;
    } while ((int)((uVar2 ^ uVar3) - uVar3) < 7);
    uVar2 = *(int *)0x5878 - (uint)*(byte *)0x5897;
    uVar3 = (int)uVar2 >> 0xf;
  } while ((((int)((uVar2 ^ uVar3) - uVar3) < 7) ||
           (uVar2 = *(int *)0x5876 - (uint)*(byte *)0x5896, uVar3 = (int)uVar2 >> 0xf,
           0xf9 < (int)((uVar2 ^ uVar3) - uVar3))) ||
          (uVar2 = *(int *)0x5878 - (uint)*(byte *)0x5897, uVar3 = (int)uVar2 >> 0xf,
          0xf9 < (int)((uVar2 ^ uVar3) - uVar3)));
  return;
}



void FUN_0000_abb4(void)

{
  int uVar1;
  int uVar2;
  char cVar3;
  int *puVar4;
  byte *pbVar5;
  int iVar6;
  int unaff_DS;
  int iStack_6;

  iStack_6 = 0;
  do {
    FUN_0000_ab3e();
    uVar1 = *(int *)0x5876;
    uVar2 = *(int *)0x5878;
    puVar4 = (int *)FUN_0000_5e22(uVar2,uVar1);
    cVar3 = FUN_0000_aa3e(*puVar4);
    if ((cVar3 != '\0') &&
       ((cVar3 != ',' || (pbVar5 = (byte *)FUN_0000_5e22(uVar2,uVar1), (*pbVar5 & 0xf0) != 0x60))))
    break;
    iStack_6 = iStack_6 + 1;
  } while (iStack_6 < 0x80);
  if (iStack_6 != 0x80) {
    iVar6 = FUN_0000_5304();
    FUN_0000_5494(iVar6,0,*(int *)0x5895,uVar2,uVar1,cVar3,cVar3);
    if (cVar3 == ',') {
      *(int *)(iVar6 * 8 + 0x5c5f) = 100;
    }
  }
  return;
}



int FUN_0000_ac4c(int param_1)

{
  int uVar1;

  if (((param_1 < 0x2c) || (0x2f < param_1)) &&
     (((param_1 < 0x80 || ((0xb3 < param_1 && (param_1 < 0xb8)))) ||
      ((0xe7 < param_1 && (param_1 < 0xec)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void FUN_0000_ac8e(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_DS;
  char cStack_4;

  if ((*(byte *)0x587c & 0xf8) == 0x20) {
    uVar3 = RANDOM(0x1e,1);
    if (uVar3 < *(byte *)0x5c5f) {
      cStack_4 = (char)uVar3;
      pcVar1 = (char *)0x5c5f;
      *pcVar1 = *pcVar1 - cStack_4;
      FUN_0000_4320();
    }
    else {
      FUN_0000_3270(0x6ada);
      cVar2 = *(char *)0x5c61;
      if ((cVar2 == '\0') && (*(char *)0x57b0 == '\0')) {
        *(int *)0x587c = 0;
        FUN_0000_4320();
        FUN_0000_7330();
        FUN_0000_5dce((int)&LAB_0000_1e78,0x28,0x96,0x294);
        FUN_0000_3270(0x6af6);
        while( true ) {
          iVar4 = FUN_0000_541c();
          if (iVar4 == -1) break;
          FUN_0000_4f42(*(int *)0x5897,*(int *)0x5896);
          FUN_0000_44c8();
        }
      }
      else {
        FUN_0000_3270(0x6ae6);
        if (cVar2 == '\0') {
          pcVar1 = (char *)0x57b0;
          *pcVar1 = *pcVar1 + -1;
          cVar2 = RANDOM(1,0);
          cVar2 = cVar2 + '\x14';
        }
        else {
          cVar2 = (*(byte *)0x587c & 3) + 0x28;
        }
        *(char *)0x587c = cVar2;
        *(int *)((int)FUN_0000_a9f4 + 6) = 1;
      }
    }
  }
  else {
    FUN_0000_44c8();
  }
  return;
}



void FUN_0000_ad58(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int unaff_DS;

  if (param_2 == 0) {
    cVar1 = *(char *)(param_3 * 8 + 0x5c5b);
    if ((cVar1 == ',') || (cVar1 == '.')) {
      bVar2 = RANDOM(3,0);
      *(char *)(param_3 * 8 + 0x5c5b) = (bVar2 & 2) + 0x2d;
    }
  }
  if (param_1 == 0) {
    cVar1 = *(char *)(param_3 * 8 + 0x5c5b);
    if ((cVar1 == '-') || (cVar1 == '/')) {
      bVar2 = RANDOM(3,0);
      *(char *)(param_3 * 8 + 0x5c5b) = (bVar2 & 2) + 0x2c;
    }
  }
  FUN_0000_7330();
  FUN_0000_5dce(100,5,300,0x514);
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(5,5,(*(char *)(param_3 * 8 + 0x5c5d) - *(char *)0x5897) + '\x05',
                      (*(char *)(param_3 * 8 + 0x5c5c) - *(char *)0x5896) + '\x05');
}



void FUN_0000_ae38(int param_1)

{
  int uVar1;
  byte *pbVar2;
  int unaff_DS;

  if ((*(byte *)(param_1 * 8 + 0x5c5a) & 0xfc) == 0xec) {
    if (*(char *)0x587c != '\x1c') {
      *(int *)(param_1 * 8 + 0x5c5b) = 0;
      *(int *)(param_1 * 8 + 0x5c5a) = 0;
      FUN_0000_3270(0x6b04);
      uVar1 = *(int *)0x587c;
      *(int *)0x587c = 0xec;
      FUN_0000_7330();
      FUN_0000_5dce((int)&LAB_0000_1e78,0x28,0x96,0x294);
      *(int *)0x587c = uVar1;
      FUN_0000_ac8e();
      *(int *)0x5895 = 0xff;
      *(int *)0x5896 = 0x22;
      *(int *)0x5897 = 0x12;
      FUN_0000_9bf0();
      return;
    }
  }
  else if ((*(byte *)(param_1 * 8 + 0x5c5a) & 0xfc) != 0xe0) {
    FUN_0000_7330();
    FUN_0000_3270(0x6b12);
    pbVar2 = (byte *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
    if ((3 < *pbVar2) || (((*(byte *)0x587c & 0xfe) != 0x14 && ((*(byte *)0x587c & 0xfc) != 0x28))))
    {
      FUN_0000_7b70(param_1);
      return;
    }
  }
  FUN_0000_ac8e();
  return;
}



int FUN_0000_af0a(int param_1)

{
  byte bVar1;
  uint uVar2;
  int uVar3;
  int iVar4;
  uint uVar5;
  int unaff_DS;
  int iStack_8;
  int iStack_6;

  bVar1 = *(byte *)(param_1 * 8 + 0x5c5a);
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5c) - (uint)*(byte *)0x5896;
  uVar5 = (int)uVar2 >> 0xf;
  iStack_6 = (uVar2 ^ uVar5) - uVar5;
  if (0x7f < iStack_6) {
    iStack_6 = 0x100 - iStack_6;
  }
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5d) - (uint)*(byte *)0x5897;
  uVar5 = (int)uVar2 >> 0xf;
  iStack_8 = (uVar2 ^ uVar5) - uVar5;
  if (0x7f < iStack_8) {
    iStack_8 = 0x100 - iStack_8;
  }
  if (((iStack_6 == 1) && (iStack_8 == 0)) || ((iStack_6 == 0 && (iStack_8 == 1)))) {
    FUN_0000_ae38(param_1);
LAB_0000_af8c:
    uVar3 = 1;
  }
  else {
    if ((bVar1 == 0x88) || (bVar1 == 0xdc)) {
      if ((iStack_6 < 4) && ((iStack_8 < 4 && (iVar4 = RANDOM(7,0), iVar4 == 0)))) {
        FUN_0000_7330();
        FUN_0000_5dce(100,5,300,0x514);
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec(5,5,(*(char *)(param_1 * 8 + 0x5c5d) - *(char *)0x5897) + '\x05',
                            (*(char *)(param_1 * 8 + 0x5c5c) - *(char *)0x5896) + '\x05');
      }
    }
    else if (((bVar1 & 0xfc) == 0x2c) &&
            (((iStack_6 == 0 && (iStack_8 < 4)) || ((iStack_8 == 0 && (iStack_6 < 4)))))) {
      FUN_0000_3270(0x6b1e);
      FUN_0000_ad58(iStack_8,iStack_6,param_1);
      goto LAB_0000_af8c;
    }
    uVar3 = 0;
  }
  return uVar3;
}



int FUN_0000_b072(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *puVar2;
  int iVar3;
  int unaff_DS;

  uVar1 = (uint)*(byte *)(param_3 * 8 + 0x5c5a);
  puVar2 = (int *)FUN_0000_5e22(param_1,param_2);
  iVar3 = FUN_0000_466c(*puVar2,uVar1);
  if ((iVar3 != 0) && (iVar3 = FUN_0000_5122(*(int *)0x5895,param_1,param_2), iVar3 == 0)) {
    return 1;
  }
  return 0;
}



int FUN_0000_b0b8(uint param_1,uint param_2)

{
  int uVar1;
  int unaff_DS;

  if ((param_2 == *(byte *)0xa526) && (param_1 == *(byte *)0xa527)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int FUN_0000_b0da(int param_1)

{
  int uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_DS;
  int iStack_6;
  int iStack_4;

  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5c) - (uint)*(byte *)0x5896;
  uVar3 = (int)uVar2 >> 0xf;
  iStack_4 = (uVar2 ^ uVar3) - uVar3;
  if (0x7f < iStack_4) {
    iStack_4 = 0x100 - iStack_4;
  }
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5d) - (uint)*(byte *)0x5897;
  uVar3 = (int)uVar2 >> 0xf;
  iStack_6 = (uVar2 ^ uVar3) - uVar3;
  if (0x7f < iStack_6) {
    iStack_6 = 0x100 - iStack_6;
  }
  if ((iStack_4 < 6) && (iStack_6 < 6)) {
    uVar1 = *(int *)(iStack_4 + iStack_6 * 0xb + 0x2c18);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0000ec2c) overlaps instruction at (ram,0x0000ec2b)
//
// WARNING: Unable to track spacebase fully for stack
// WARNING: Type propagation algorithm not settling
// WARNING: Restarted to delay deadcode elimination for space: stack

int * FUN_0000_b168(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  char *pcVar2;
  byte **ppbVar3;
  char **ppcVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  int *piVar15;
  byte bVar16;
  int in_CX;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  char *pcVar20;
  int *piVar21;
  int *piVar22;
  char *unaff_DI;
  int unaff_ES;
  int unaff_SS;
  int unaff_DS;
  int uVar23;
  uint uStack_a;
  int *piStack_8;
  int *piStack_6;
  int *piStack_4;

  iVar17 = CONCAT11((char)((uint)in_CX >> 8),3);
  piVar21 = (int *)(param_3 * 8);
  piStack_6 = (int *)(uint)*(byte *)(piVar21 + 0x2e2d);
  piStack_8 = (int *)((uint)*(byte *)(piVar21 + 0x2e2e) + param_2);
  uStack_a = (uint)*(byte *)((int)piVar21 + 0x5c5d) + param_1;
  uVar23 = FUN_0000_5e22();
  piVar15 = (int *)((ulong)uVar23 >> 0x10);
  pbVar13 = (byte *)uVar23;
  uVar12 = (uint)*pbVar13;
  if (((byte)piStack_6 & 0xfc) == 0x2c) {
    if ((param_2 == 0) && (param_1 == -1)) {
      piStack_4 = (int *)0x0;
    }
    else if ((param_2 == 1) && (param_1 == 0)) {
      piStack_4 = (int *)0x1;
    }
    else if ((param_2 == 0) && (param_1 == 1)) {
      piStack_4 = (int *)0x2;
    }
    else if ((param_2 == -1) && (param_1 == 0)) {
      piStack_4 = (int *)0x3;
    }
    *(char *)(param_3 * 8 + 0x5c5b) = (char)piStack_4 + ',';
    *(char *)(param_3 * 8 + 0x5c5a) = (char)piStack_4 + ',';
LAB_0000_b2a2:
    param_3 = param_3 * 8;
    *(int *)0xa526 = *(int *)(param_3 + 0x5c5c);
    *(int *)0xa527 = *(int *)(param_3 + 0x5c5d);
    *(int *)(param_3 + 0x5c5c) = piStack_8._0_1_;
    *(int *)(param_3 + 0x5c5d) = (int)uStack_a;
    pbVar6 = (byte *)0x24e6;
    *pbVar6 = *pbVar6 | 2;
    piVar15 = (int *)FUN_0000_5e22();
    if (*(char *)piVar15 == -0x24) {
      piVar15 = (int *)((uint)piVar15 & 0xff00);
      *(int *)(param_3 + 0x5c5b) = 0;
      *(int *)(param_3 + 0x5c5a) = 0;
    }
    return piVar15;
  }
  if ((((piStack_6 == (int *)0xdc) || (piStack_6 == (int *)0x94)) || (piStack_6 == (int *)0xd8)) ||
     ((piStack_6 == (int *)0xf0 || (uVar14 = uVar12 - 4, 0x1b < uVar14)))) goto LAB_0000_b2a2;
  uVar18 = uVar14 * 2;
  bVar10 = (byte)uVar23;
  bVar16 = (byte)iVar17;
  switch(uVar14) {
  default:
    if (iVar17 != 0) {
      pcVar2 = &stack0x0057 + (int)piVar21;
      *pcVar2 = (*pcVar2 + -0x2a) - CARRY2(uVar14,uVar14);
      in(0x89);
      if (((byte)piStack_6 & 0xf0) == 0x40) {
        piStack_4 = (int *)FUN_0000_63a8();
        if (piStack_4 == (int *)0xffff) {
          return (int *)0x0;
        }
        if (((uint)piStack_6 & 7) != 0) {
          FUN_0000_49f0();
        }
        *(char *)((int)FUN_0000_5956 + 4 +
                 (uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7)) =
             ((byte)piStack_6 & 8) + 0x70;
      }
      piVar15 = (int *)FUN_0000_3270();
      return piVar15;
    }
    break;
  case 1:
  case 7:
  case 0xd:
  case 0x13:
  case 0x19:
    piStack_4 = (int *)(uint)*(byte *)(((uVar18 & 0xff) << (bVar16 & 0x1f)) + 0x13bf);
    piStack_6 = piStack_8;
    if (piStack_4 != (int *)0x0) {
      iVar17 = RANDOM();
      piStack_6 = (int *)((int)piStack_6 - iVar17);
    }
    return piStack_6;
  case 2:
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
  case 0xe:
  case 0x1a:
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    iVar17 = uVar18 + 1;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + bVar10;
    pbVar6 = (byte *)(iVar17 + (int)piVar21);
    bVar16 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar10;
    pbVar6 = (byte *)(unaff_DI + iVar17);
    bVar11 = *pbVar6;
    bVar7 = *pbVar6;
    *pbVar6 = (bVar7 - bVar10) - CARRY1(bVar16,bVar10);
    cVar9 = bVar10 + *(char *)(iVar17 + (int)piVar21) +
            (bVar11 < bVar10 || (byte)(bVar7 - bVar10) < CARRY1(bVar16,bVar10));
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = (char *)(iVar17 + (int)piVar21);
    *pcVar2 = *pcVar2 + cVar9;
    pbVar6 = (byte *)(iVar17 + (int)piVar21);
    *pbVar6 = *pbVar6 & (byte)iVar17;
    piVar1 = (int *)(iVar17 + (int)piVar21);
    *piVar1 = *piVar1 + CONCAT11((char)((ulong)uVar23 >> 8),cVar9);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 3:
  case 9:
  case 0xf:
  case 0x15:
  case 0x1b:
    do {
      piVar15 = (int *)FUN_0000_e928(param_1,param_5,param_2,param_3,param_4);
      do {
        piVar22 = piVar21;
        piVar21 = (int *)((int)piVar22 + -1);
        if ((int)piVar21 < 0) {
          return piVar15;
        }
        piVar15 = (int *)(uint)*(byte *)((int)piVar22 + 0x412b);
      } while ((param_5 < piVar15) ||
              (piVar15 = (int *)RANDOM(),
              piVar15 < (int *)(uint)*(byte *)((int)piVar22 + 0x412b)));
      if (*(char *)((int)piVar22 + 0x4133) != '\x01') {
        RANDOM();
      }
    } while( true );
  case 4:
    do {
      if ((*(byte *)(uVar18 + *(byte *)(piVar21 + 3) + -0x52ec) & 0xfe) != 0x84) {
        pcVar2 = (char *)((int)piVar21 + 5);
        *pcVar2 = *pcVar2 + -1;
        if (*pcVar2 == '\0') {
          *(char *)((int)piVar21 + 5) = '$' - *(char *)((int)piVar21 + 1);
          *(int *)0x5898 = 0;
          *(int *)0x58a2 = 0;
          *(int *)0x588f = 0;
          *(int *)0x5890 = 0;
          *(int *)0x589d = 0;
          pcVar2 = (char *)0x5882;
          *pcVar2 = *pcVar2 + '\x01';
          if (*(char *)0x5882 == '\n') {
            *(int *)0x5882 = 0;
            FUN_0000_699c();
          }
          *(int *)0x589f = 1;
          iVar17 = FUN_0000_7066();
          if (iVar17 == 0) {
            FUN_0000_c2ee();
          }
          else {
            FUN_0000_c0a4();
          }
          *(int *)(*(byte *)0x589e + 0x58a8) = 0xff;
          FUN_0000_d7ce();
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
      }
      while( true ) {
        do {
          pcVar2 = (char *)0x589e;
          *pcVar2 = *pcVar2 + '\x01';
          if (0x1f < *(byte *)0x589e) {
            piStack_8 = piVar21;
            piStack_6 = (int *)unaff_DI;
            if (uStack_a != 0) {
              FUN_0000_3536();
              *(int *)0x2186 = 0xff;
              return piStack_4;
            }
            *(int *)0x589e = 0;
          }
          *(int *)0x594f = 0;
          iVar17 = (uint)*(byte *)0x589e * 8;
          piVar21 = (int *)(iVar17 + -0x45ec);
          bVar10 = *(byte *)(iVar17 + -0x45ea);
          unaff_DI = (char *)(uint)bVar10;
        } while (((bVar10 & 0xc0) == 0) || ((bVar10 & 0x20) != 0));
        if (((bVar10 & 0x80) == 0) ||
           (*(char *)((uint)*(byte *)(iVar17 + -0x45e9) * 0x20 + 0x55b3) != 'D')) break;
        pbVar6 = (byte *)(iVar17 + -0x45ea);
        *pbVar6 = *pbVar6 | 0x20;
        FUN_0000_4f84();
        FUN_0000_d224();
      }
      uVar18 = (uint)*(byte *)(iVar17 + -0x45e5) << 5;
    } while( true );
  case 5:
  case 0xb:
  case 0x11:
  case 0x17:
    bVar16 = (byte)((ulong)uVar23 >> 0x18);
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10 + bVar16 + CARRY1(bVar10,bVar16);
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 8:
  case 0x14:
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(byte *)piVar1 | bVar10;
    ppbVar3 = (byte **)(piVar21 + uVar14);
    *ppbVar3 = *ppbVar3 + (int)pbVar13;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    pcVar2 = unaff_DI;
    *pcVar2 = *pcVar2 + bVar16;
    piVar1 = piVar21;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    cVar9 = (char)((ulong)uVar23 >> 0x10);
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    piVar1 = piVar21 + uVar14;
    bVar10 = (byte)(pbVar13 + 1);
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = piVar21 + uVar14;
    *(byte *)piVar1 = *(char *)piVar1 + bVar10;
    piVar1 = (int *)(unaff_DI + uVar18);
    *piVar1 = *piVar1 + iVar17;
    piVar1 = piVar21 + uVar14;
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    piVar1 = piVar21 + uVar14;
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    piVar1 = piVar21 + uVar14;
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    piVar1 = piVar21 + uVar14;
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    piVar1 = piVar21 + uVar14;
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    piVar1 = piVar21 + uVar14;
    *(char *)piVar1 = *(char *)piVar1 + cVar9;
    pcVar2 = &stack0x004a + (int)unaff_DI;
    bVar11 = (byte)(char *)((int)piVar15 + -1);
    *pcVar2 = *pcVar2 + bVar11;
    pcVar20 = (char *)((int)piVar21 + -1);
    iVar17 = uVar18 + 3;
    pcVar2 = &stack0x0044 + (int)pcVar20;
    *pcVar2 = *pcVar2 + bVar11;
    bVar16 = bVar16 + 3;
    *piVar15 = iVar17;
    piVar15[-1] = (int)piVar15;
    piVar15[-2] = (int)(pbVar13 + 1);
    pbVar6 = (byte *)(unaff_DI + uVar18 + 0x38);
    *pbVar6 = *pbVar6 & bVar16;
    piVar1 = piVar21 + 0x18;
    *(byte *)piVar1 = *(byte *)piVar1 & bVar11;
    pbVar6 = (byte *)(pcVar20 + uVar18 + 0x38);
    *pbVar6 = *pbVar6 & bVar16;
    pbVar6 = (byte *)((int)piVar21 + 0x35);
    *pbVar6 = *pbVar6 & bVar10;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + bVar11;
    ppcVar4 = (char **)(pcVar20 + iVar17);
    *ppcVar4 = *ppcVar4 + (int)(char *)((int)piVar15 + -1);
    iVar17 = uVar18 + 4;
    *(char **)(char *)((int)piVar15 + -7) = (char *)((int)piVar15 + -5);
    pcVar2 = pcVar20 + iVar17;
    cVar9 = (char)*(int *)((int)piVar15 + -7);
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = unaff_DI + -0x70;
    *pcVar2 = *pcVar2 + bVar16;
    ppcVar4 = (char **)(piVar21 + 0xf);
    *ppcVar4 = *ppcVar4 + (int)pcVar20;
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar2 = unaff_DI + 0x4a;
    *pcVar2 = *pcVar2 + bVar10;
    pcVar19 = (char *)((int)piVar15 + -7);
    *(char **)(char *)((int)piVar15 + -7) = (char *)((int)piVar15 + -5);
    pcVar2 = pcVar20 + iVar17;
    *pcVar2 = *pcVar2 + cVar9;
    pcVar8 = (code *)swi(0x20);
    uVar12 = (*pcVar8)();
    *(int *)(pcVar19 + -2) = unaff_ES;
    puVar5 = (uint *)(pcVar20 + iVar17);
    *puVar5 = *puVar5 & uVar12;
    return;
  case 10:
    for (piVar21 = (int *)((int)piVar21 + 1); piStack_4 = piVar15, piVar21 < (int *)0xbb14;
        piVar21 = piVar21 + 4) {
      if (((*(byte *)(piVar21 + 1) & 0x80) != 0) && (*(byte *)((int)piVar21 + 3) == uVar12)) {
        piVar1 = piVar21 + 1;
        *(byte *)piVar1 = *(byte *)piVar1 | 0x20;
        iVar17 = (uint)*(byte *)(piVar21 + 2) * 8;
        *(int *)(iVar17 + 0x5c5b) = 0x1e;
        *(int *)(iVar17 + 0x5c5a) = 0x1e;
        piStack_4 = piVar21;
        break;
      }
      piStack_6 = (int *)((int)piStack_6 + 1);
      piVar15 = piVar21;
    }
    if (uVar12 != *(byte *)0x587b) goto LAB_0000_ec33;
    break;
  case 0x10:
    piStack_8 = (int *)0x0;
    param_1 = param_1 * 8;
    piStack_4 = (int *)(param_1 + -0x45ec);
    if ((*(byte *)(param_1 + -0x45ea) & 0x80) != 0) {
      return piStack_4;
    }
    uStack_a = (uint)(*(byte *)((uint)*(byte *)(param_1 + -0x45e9) * 8 + 0x13c1) >> 2);
    if (*(byte *)piStack_4 < uStack_a) {
      piStack_6 = (int *)0x1;
    }
    else {
      uStack_a = uStack_a << 1;
      if (uStack_a <= *(byte *)piStack_4) {
        if ((uint)*(byte *)piStack_4 < (uStack_a / 2) * 3) {
          piStack_6 = (int *)0x3;
        }
        else {
          piStack_6 = (int *)0x4;
        }
        goto LAB_0000_d7af;
      }
      piStack_6 = (int *)0x2;
      iVar17 = FUN_0000_54ce();
      if (iVar17 < 0xfc) goto LAB_0000_d7af;
    }
    piStack_8 = (int *)0x1;
LAB_0000_d7af:
    if (piStack_8 == (int *)0x0) {
      piVar1 = piStack_4 + 1;
      *(byte *)piVar1 = *(byte *)piVar1 & 0xfd;
    }
    else {
      piVar1 = piStack_4 + 1;
      *(byte *)piVar1 = *(byte *)piVar1 | 2;
    }
    return piStack_6;
  case 0x16:
    piVar15 = (int *)FUN_0000_3270();
    return piVar15;
  }
  *(int *)0x587b = 0xff;
LAB_0000_ec33:
  FUN_0000_7330();
  FUN_0000_e9e0(&uStack_a,param_1,param_2,param_3);
  piVar15 = (int *)FUN_0000_ea58(&uStack_a,param_1,param_2,param_3);
  if (uStack_a == 0) {
    piVar15 = (int *)FUN_0000_3270();
  }
  return piVar15;
}



void FUN_0000_b2ec(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int uVar4;
  int uVar5;
  int iVar6;
  int unaff_DS;

  uVar1 = (uint)*(byte *)(param_1 * 8 + 0x5c5c);
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5d);
  iVar6 = 0;
  while( true ) {
    iVar3 = RANDOM(3,0);
    if (iVar3 == 0) {
      iVar6 = FUN_0000_b072(uVar2 - 1,uVar1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0;
      uVar5 = 0xffff;
      goto LAB_0000_b365;
    }
    if (iVar3 == 1) break;
    if (iVar3 == 2) {
      iVar6 = FUN_0000_b072(uVar2 + 1,uVar1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0;
      uVar5 = 1;
      goto LAB_0000_b365;
    }
    if (iVar3 == 3) {
      iVar6 = FUN_0000_b072(uVar2,uVar1 - 1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0xffff;
      goto LAB_0000_b3aa;
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      return;
    }
  }
  iVar6 = FUN_0000_b072(uVar2,uVar1 + 1,param_1);
  if (iVar6 == 0) {
    return;
  }
  uVar4 = 1;
LAB_0000_b3aa:
  uVar5 = 0;
LAB_0000_b365:
  FUN_0000_b168(uVar5,uVar4,param_1);
  return;
}



void FUN_0000_b3c4(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_DS;
  uint uStack_e;
  uint uStack_a;
  int iStack_6;
  int iStack_4;

  bVar1 = *(byte *)(param_2 * 8 + 0x5c5c);
  uVar2 = (uint)bVar1;
  uVar3 = (uint)*(byte *)(param_2 * 8 + 0x5c5d);
  bVar1 = bVar1 - *(char *)0x5896;
  uStack_a = (uint)bVar1;
  if (0x7f < bVar1) {
    uStack_a = uStack_a - 0x100;
  }
  bVar1 = *(char *)(param_2 * 8 + 0x5c5d) - *(char *)0x5897;
  uStack_e = (uint)bVar1;
  if (0x7f < bVar1) {
    uStack_e = uStack_e - 0x100;
  }
  if (uStack_a == 0) {
    iStack_4 = 0;
  }
  else if ((int)uStack_a < 1) {
    if ((int)uStack_a < 0) {
      iStack_4 = 1;
    }
  }
  else {
    iStack_4 = -1;
  }
  if (uStack_e == 0) {
    iStack_6 = 0;
  }
  else if ((int)uStack_e < 1) {
    if ((int)uStack_e < 0) {
      iStack_6 = 1;
    }
  }
  else {
    iStack_6 = -1;
  }
  iVar4 = RANDOM(1,0);
  if (iVar4 == 1) {
    if (iStack_4 != 0) {
      iVar4 = FUN_0000_b072(uVar3,uVar2 + iStack_4,param_2);
      if ((iVar4 != 0) && (iVar4 = FUN_0000_b0b8(uVar3,uVar2 + iStack_4), iVar4 != 0))
      goto LAB_0000_b4d2;
    }
    if (iStack_6 == 0) {
LAB_0000_b56d:
      FUN_0000_b2ec(param_2);
      return;
    }
    iVar4 = FUN_0000_b072(uVar3 + iStack_6,uVar2,param_2);
    if ((iVar4 == 0) || (iVar4 = FUN_0000_b0b8(uVar3 + iStack_6,uVar2), iVar4 == 0))
    goto LAB_0000_b56d;
  }
  else {
    if (iStack_6 == 0) {
LAB_0000_b545:
      if (iStack_4 == 0) goto LAB_0000_b56d;
      iVar4 = FUN_0000_b072(uVar3,uVar2 + iStack_4,param_2);
      if ((iVar4 == 0) || (iVar4 = FUN_0000_b0b8(uVar3,uVar2 + iStack_4), iVar4 == 0))
      goto LAB_0000_b56d;
LAB_0000_b4d2:
      iStack_6 = 0;
      goto LAB_0000_b51a;
    }
    iVar4 = FUN_0000_b072(uVar3 + iStack_6,uVar2,param_2);
    if ((iVar4 == 0) || (iVar4 = FUN_0000_b0b8(uVar3 + iStack_6,uVar2), iVar4 == 0))
    goto LAB_0000_b545;
  }
  iStack_4 = 0;
LAB_0000_b51a:
  FUN_0000_b168(iStack_6,iStack_4,param_2);
  return;
}



void FUN_0000_b57c(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int uVar6;
  int unaff_DS;

  bVar3 = *(byte *)(param_1 * 8 + 0x5c5a);
  if ((bVar3 & 0xfc) == 0xec) {
    pbVar1 = (byte *)(param_1 * 8 + 0x5c5f);
    *pbVar1 = *pbVar1 ^ 1;
    if (*pbVar1 == 0) {
      return;
    }
    iVar5 = RANDOM(1,0);
    if (iVar5 == 0) {
      FUN_0000_b2ec(param_1);
      return;
    }
  }
  else if (bVar3 == 0xfc) {
    iVar5 = FUN_0000_b0da(param_1);
    if ((iVar5 != 0) &&
       (bVar3 = *(byte *)(param_1 * 8 + 0x5c5f), pcVar2 = (char *)(param_1 * 8 + 0x5c5f),
       *pcVar2 = *pcVar2 + '\x01', bVar3 < 0x14)) {
      uVar6 = 0;
      goto LAB_0000_b644;
    }
  }
  else if ((bVar3 & 0xfc) == 0x2c) {
    if (*(char *)0x5892 == '\0') {
      return;
    }
    iVar5 = param_1 * 8;
    uVar4 = *(uint *)((uint)*(byte *)0x5892 * 2 + (*(byte *)(iVar5 + 0x5c5a) - 0x2c) * 8 + 0x2bf6);
    if ((uVar4 != 4) &&
       (pcVar2 = (char *)(iVar5 + 0x5c61), *pcVar2 = *pcVar2 + '\x01',
       uVar4 < *(byte *)(iVar5 + 0x5c61))) {
      *(int *)(iVar5 + 0x5c61) = 0;
      return;
    }
  }
  uVar6 = 1;
LAB_0000_b644:
  FUN_0000_b3c4(uVar6,param_1);
  return;
}



int FUN_0000_b650(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *puVar5;
  int unaff_DS;
  char *pcStack_c;
  char *pcStack_8;
  int iStack_4;

  iStack_4 = 0;
  if (*(char *)0x587a == 'T') {
LAB_0000_b664:
    iStack_4 = 0;
  }
  else {
    if (*(char *)0x587a == 'Q') {
      pbVar1 = (byte *)0x2c55;
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 != 0) goto LAB_0000_b664;
    }
    bVar2 = *(byte *)0x587c & 0xfe;
    if ((bVar2 == 0x12) || (bVar2 == 0x14)) {
      pbVar1 = (byte *)0x2c57;
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 != 0) goto LAB_0000_b664;
    }
    iVar3 = RANDOM(0x1e,1);
    iVar4 = FUN_0000_a97c();
    if (iVar3 < iVar4) {
      FUN_0000_abb4();
    }
    iVar3 = 0x1f;
    puVar5 = (int *)0x5d52;
    do {
      iVar4 = FUN_0000_ac4c(*puVar5);
      if (iVar4 != 0) {
        iVar4 = FUN_0000_af0a(iVar3);
        iStack_4 = iStack_4 + iVar4;
        if (iStack_4 == 0) {
          FUN_0000_b57c(iVar3);
        }
      }
      puVar5 = puVar5 + -8;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 0x1f;
    puVar5 = (int *)0x5d52;
    pcStack_8 = "4j";
    pcStack_c = "j";
    do {
      iVar4 = FUN_0000_ac4c(*puVar5);
      if ((iVar4 != 0) &&
         ((0x1f < (byte)(*pcStack_8 - *(char *)0x589b) ||
          (0x1f < (byte)(*pcStack_c - *(char *)0x589c))))) {
        FUN_0000_5494(iVar3,0,0,0,0,0,0);
      }
      puVar5 = puVar5 + -8;
      pcStack_8 = pcStack_8 + -8;
      pcStack_c = pcStack_c + -8;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return iStack_4;
}



void FUN_0000_b72e(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int uVar5;
  int unaff_DS;

  FUN_0000_3270(0x6b2c);
  FUN_0000_541c();
  iVar3 = (uint)*(byte *)(*(int *)0x5876 * 0x20 + 0x55b4) * 3 + -99;
  iVar4 = -iVar3;
  FUN_0000_345e(0x20,2,iVar4);
  FUN_0000_3270(0x6b4a);
  do {
    cVar2 = FUN_0000_408c();
    if (cVar2 == 'Y') break;
  } while (cVar2 != 'N');
  FUN_0000_30da(cVar2);
  FUN_0000_30da(10);
  if (cVar2 == 'Y') {
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 + iVar3;
    *(int *)((int)FUN_0000_a9f4 + 6) = 1;
    if (-1 < *(int *)0x57aa) {
      return;
    }
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 + iVar4;
  }
  uVar5 = FUN_0000_5304();
  FUN_0000_5494(uVar5,0,0,*(int *)0x5897,*(int *)0x5896,0,0xe4);
  FUN_0000_7b70(uVar5);
  return;
}



void FUN_0000_b7d8(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int unaff_DS;
  byte *pbStack_e;
  int iStack_c;
  uint uStack_4;

  iVar1 = RANDOM(7,0);
  if ((iVar1 == 0) && (*(char *)0x587c == '\x1c')) {
    FUN_0000_7330();
    FUN_0000_3270(0x6b64);
    FUN_0000_5506(10);
    uStack_4 = 0;
    if (*(char *)0x585b != '\0') {
      pcVar3 = (char *)0x55b3;
      iStack_c = 0x55a8;
      pbStack_e = (byte *)0x55b5;
      do {
        if ((*pcVar3 != 'D') && (*pcVar3 != 'S')) {
          FUN_0000_3270(iStack_c);
          FUN_0000_3270(0x6b8c);
          iVar1 = 3;
          do {
            FUN_0000_5506(5);
            FUN_0000_30da(0x2e);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          FUN_0000_3270(0x6b9c);
          uVar2 = RANDOM(0x1e,1);
          if (*pbStack_e < uVar2) {
            FUN_0000_b72e();
            return;
          }
        }
        pcVar3 = pcVar3 + 0x20;
        iStack_c = iStack_c + 0x20;
        pbStack_e = pbStack_e + 0x20;
        uStack_4 = uStack_4 + 1;
      } while (uStack_4 < *(byte *)0x585b);
    }
    FUN_0000_3270(0x6ba0);
  }
  return;
}



int FUN_0000_d9a0(void)

{
  int iVar1;
  int unaff_DS;

  iVar1 = 0x20;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
  } while (*(char *)(iVar1 * 8 + 0x5c5a) != '\0');
  return iVar1;
}



void FUN_0000_d9ca(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int unaff_DS;

  *(int *)0x5876 = param_2;
  *(int *)0x5878 = param_1;
  if (param_3 == 0) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
  }
  else if (param_3 == 1) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_3 == 2) {
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + 1;
  }
  else if (param_3 == 3) {
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
  }
  return;
}



int FUN_0000_da0c(int param_1)

{
  char cVar1;
  int unaff_DS;

  FUN_0000_3270((int)&DAT_0000_84e6);
  while (((cVar1 = FUN_0000_408c(), cVar1 != ' ' && (cVar1 != '\x03')) && (cVar1 != '\x04'))) {
    if ((cVar1 == '\x02') || (cVar1 == '\x01')) break;
  }
  if (cVar1 == '\x01') {
    FUN_0000_3270((int)&DAT_0000_8508);
    param_1 = param_1 + 3;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        if (cVar1 == '\x04') {
          FUN_0000_3270((int)&DAT_0000_84fa);
          *(uint *)0x5876 = (uint)*(byte *)0x5896;
          *(uint *)0x5878 = (uint)*(byte *)0x5897;
          return 1;
        }
        if (cVar1 != ' ') {
          return 1;
        }
        FUN_0000_3270((int)&DAT_0000_84ec);
        return 0;
      }
      FUN_0000_3270((int)&DAT_0000_84f2);
      goto LAB_0000_da72;
    }
    FUN_0000_3270((int)&DAT_0000_8500);
    param_1 = param_1 + 1;
  }
  param_1 = param_1 % 4;
LAB_0000_da72:
  FUN_0000_d9ca(*(int *)0x5897,*(int *)0x5896,param_1);
  return 1;
}


/*
Unable to decompile 'FUN_0000_daca'
Cause: Exception while decompiling 0000:daca: process: timeout

*/


void FUN_0000_db92(int param_1,int param_2)

{
  byte *pbVar1;
  int uVar2;
  int iVar3;
  int uVar4;
  int unaff_DS;
  int uVar5;

  iVar3 = RANDOM(7,0);
  if (iVar3 == 0) {
    iVar3 = RANDOM(3,0);
    if (iVar3 == 0) {
      FUN_0000_3270(0x863a);
      uVar2 = 0xf;
    }
    else {
      FUN_0000_3270(0x8642);
      uVar2 = 2;
    }
    *(int *)(param_2 * 8 + 0x5c5b) = uVar2;
    *(int *)(param_2 * 8 + 0x5c5a) = uVar2;
    uVar2 = RANDOM(3,1);
    *(int *)(param_2 * 8 + 0x5c5f) = uVar2;
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    FUN_0000_7330();
  }
  else {
    FUN_0000_5494(param_2,0,0,0,0,0,0);
    iVar3 = RANDOM(0x1f,0);
    if (iVar3 == 0x13) {
      FUN_0000_3270(0x8606);
      FUN_0000_3c5c(500,3000,0x28);
      *(int *)(param_1 * 0x20 + 0x55b3) = 0x50;
      *(int *)((int)FUN_0000_a9f4 + 6) = 1;
    }
    else {
      uVar5 = 0;
      uVar4 = RANDOM(3,0);
      iVar3 = RANDOM(uVar4,uVar5);
      if (iVar3 == 0) {
        uVar4 = 0x8610;
      }
      else if (iVar3 == 1) {
        uVar4 = 0x861a;
      }
      else if (iVar3 == 2) {
        uVar4 = 0x8622;
      }
      else {
        if (iVar3 != 3) {
          return;
        }
        uVar4 = 0x862a;
      }
      FUN_0000_3270(uVar4);
    }
  }
  return;
}



void FUN_0000_dc8a(int param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int uVar5;
  int unaff_DS;

  bVar1 = *(byte *)(param_2 * 8 + 0x5c5f);
  if ((bVar1 & 0x80) == 0) {
    uVar3 = -(*(byte *)(param_1 * 0x20 + 0x55b6) - 0x1e);
  }
  else {
    uVar3 = ((bVar1 & 0x7f) - (uint)*(byte *)(param_1 * 0x20 + 0x55b6)) + 0x1e;
  }
  iVar4 = RANDOM(0x1e,1);
  bVar2 = (int)(uVar3 >> 1) <= iVar4;
  if (((bVar2) && ((bVar1 & 0x80) == 0)) || ((!bVar2 && ((bVar1 & 0x80) != 0)))) {
    uVar5 = 0x864a;
  }
  else {
    uVar3 = bVar1 & 0x7f;
    if ((bVar2) && (uVar3 < 10)) {
      uVar5 = 0x8654;
    }
    else if ((bVar2) && (0x14 < uVar3)) {
      uVar5 = 0x8664;
    }
    else {
      uVar5 = 0x8676;
    }
  }
  FUN_0000_3270(uVar5);
  return;
}



int FUN_0000_dd48(uint param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int uVar4;
  int iVar5;
  bool bVar6;
  int unaff_DS;
  uint uStack_6;

  uStack_6 = 8;
  uVar2 = uStack_6;
  do {
    do {
      uStack_6 = uVar2;
      uVar2 = uStack_6 - 1;
      if ((int)uVar2 < 0) {
        return 0;
      }
    } while ((((*(byte *)(uStack_6 + 0x582f) != param_3) ||
              (*(byte *)(uStack_6 + 0x5837) != param_2)) ||
             (*(byte *)(uStack_6 + 0x5847) != param_1)) ||
            (*(char *)(uStack_6 + 0x583f) != *(char *)0x5893));
    bVar6 = false;
    iVar5 = 0x20;
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      iVar3 = FUN_0000_50ae(param_1,param_2,param_3);
      if ((iVar3 == 0x19) && (*(byte *)(*(int *)0x5876 * 8 + 0x5c5f) == uVar2)) {
        bVar6 = true;
      }
    }
  } while (bVar6);
  uVar4 = FUN_0000_5304();
  FUN_0000_5494(uVar4,uVar2,param_1,param_2,param_3,0x19,0x19);
  FUN_0000_3270(0x8680);
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  return 1;
}



int FUN_0000_ddfa(uint param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int uVar4;
  int iVar5;
  int unaff_DS;
  int *puStack_a;

  iVar5 = 0;
  puStack_a = (int *)0x3e72;
  while ((((*(byte *)((int)FUN_0000_3e5f + 7 + iVar5) != param_2 ||
           (*(byte *)(iVar5 + 0x3e6a) != param_1)) || (*(char *)0x587f != '\0')) ||
         (cVar2 = *(char *)0x587e, *(char *)(iVar5 + 0x5858) == cVar2))) {
    puStack_a = puStack_a + 1;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return 0;
    }
  }
  *(char *)(iVar5 + 0x5858) = cVar2;
  uVar3 = (uint)*(byte *)(iVar5 + 0x3e6e);
  iVar5 = RANDOM(0xf,2);
  pcVar1 = (char *)(uVar3 + 0x5850);
  *pcVar1 = *pcVar1 + (char)iVar5;
  if (99 < *(byte *)(uVar3 + 0x5850)) {
    *(int *)(uVar3 + 0x5850) = 99;
  }
  if (iVar5 < 10) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  FUN_0000_345e(0x20,uVar4,iVar5);
  FUN_0000_3270(0x86be);
  FUN_0000_3270(*puStack_a);
  FUN_0000_3270(0x86ca);
  return 1;
}



void FUN_0000_deb4(uint param_1,uint param_2)

{
  byte *pbVar1;
  int uVar2;
  int iVar3;
  int uVar4;
  int unaff_SI;
  int iVar5;
  int unaff_DI;
  uint uVar6;
  int unaff_DS;
  int iVar7;

  iVar7 = 0;
  iVar5 = 0;
  while ((((*(char *)(iVar5 + 0x3f5c) != *(char *)0x5893 ||
           (*(char *)(iVar5 + 0x3fce) != *(char *)0x5895)) || (*(byte *)(iVar5 + 0x4040) != param_2)
          ) || (*(byte *)(iVar5 + 0x40b2) != param_1))) {
LAB_0000_dfca:
    iVar5 = iVar5 + 1;
    if (0x70 < iVar5) {
LAB_0000_df46:
      if (iVar5 == 0xe) {
        *(int *)0x57b2 = *(int *)0x587e;
      }
      if (iVar7 == 0) {
        FUN_0000_3270(0x86cc);
      }
      else {
        uVar4 = FUN_0000_5304();
        uVar2 = *(int *)(iVar5 + 0x3e78);
        FUN_0000_5494(uVar4,*(int *)(iVar5 + 0x3eea),*(int *)(iVar5 + 0x3fce),
                      *(int *)(iVar5 + 0x40b2),*(int *)(iVar5 + 0x4040),uVar2,uVar2);
        pbVar1 = (byte *)0x24e6;
        *pbVar1 = *pbVar1 | 2;
        FUN_0000_daca(uVar2,unaff_SI,unaff_DI,iVar7);
      }
      return;
    }
  }
  if (((((iVar5 != 0xd) || (*(char *)0x57ac != '\0')) ||
       (iVar3 = FUN_0000_50ae(*(int *)0x5895,param_1,param_2), iVar3 != 0)) &&
      ((iVar5 != 0xe || (*(char *)0x587e == *(char *)0x57b2)))) &&
     ((iVar5 != 0xf ||
      ((*(char *)0x57e7 != '\0' ||
       (iVar3 = FUN_0000_50ae(*(int *)0x5895,param_1,param_2), iVar3 != 0)))))) {
    uVar6 = 1 << ((byte)iVar5 & 7);
    if (((uVar6 & *(byte *)((iVar5 >> 3) + 0x585c)) != 0) || ((0xc < iVar5 && (iVar5 < 0x10))))
    goto LAB_0000_dfca;
    pbVar1 = (byte *)((iVar5 >> 3) + 0x585c);
    *pbVar1 = *pbVar1 | (byte)uVar6;
  }
  iVar7 = 1;
  goto LAB_0000_df46;
}



void FUN_0000_dfe6(void)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_DS;

  iVar6 = FUN_0000_63a8();
  if (iVar6 == -1) {
    return;
  }
  if ((*(char *)0x58a7 == '\0') && (*(char *)0x58a6 == '\0')) {
    uVar7 = 0x86de;
  }
  else {
    iVar8 = FUN_0000_da0c(*(int *)0x6603);
    if (iVar8 == 0) {
      return;
    }
    uVar10 = *(uint *)0x5876;
    uVar2 = *(uint *)0x5878;
    uVar9 = (uint)*(byte *)0x5895;
    bVar3 = *(byte *)((int)FUN_0000_5956 + 4 + uVar9 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7));
    uVar9 = (uVar9 * 2 - (uint)*(byte *)(iVar6 * 0x20 + 0x55b5)) + 0x1e >> 1;
    FUN_0000_3270(0x86f4);
    bVar4 = bVar3 & 0xf0;
    if (bVar4 == 0x70) {
      uVar7 = 0x87ca;
    }
    else if (bVar4 < 0x71) {
      if (bVar4 != 0x20) {
        if (bVar4 < 0x21) {
          if ((bVar3 & 0xf0) == 0) {
            uVar7 = 0x8700;
            goto LAB_0000_e00b;
          }
          if (bVar4 != 0x10) {
            return;
          }
        }
        else if (bVar4 != 0x30) {
          if (bVar4 == 0x40) {
            iVar6 = RANDOM(0x1e,1);
            if ((int)uVar9 < iVar6) {
              if (bVar3 == 0x40) {
                uVar7 = 0x8732;
                goto LAB_0000_e00b;
              }
              uVar10 = (uint)*(byte *)0x5895;
            }
            else {
              uVar10 = RANDOM(8,1);
            }
            if ((int)uVar10 < 4) {
              uVar7 = 0x873c;
            }
            else if ((int)uVar10 < 7) {
              uVar7 = 0x875c;
            }
            else {
              uVar7 = 0x874c;
            }
            goto LAB_0000_e00b;
          }
          if (bVar4 == 0x50) {
            uVar7 = 0x8764;
            goto LAB_0000_e00b;
          }
          if (bVar4 != 0x60) {
            return;
          }
          if (bVar3 == 0x60) {
            uVar7 = 0x8786;
            goto LAB_0000_e00b;
          }
          if (bVar3 != 0x61) {
            if (bVar3 != 0x62) {
              return;
            }
            iVar6 = RANDOM(0x1e,1);
            if ((int)uVar9 < iVar6) {
              FUN_0000_3270(0x87aa);
              pbVar1 = (byte *)((int)FUN_0000_5956 + 4 +
                               (uint)*(byte *)0x5895 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7));
              *pbVar1 = *pbVar1 & 8;
              return;
            }
            uVar7 = 0x87b8;
            goto LAB_0000_e00b;
          }
          FUN_0000_3270((int)FUN_0000_87a2);
          iVar6 = (uint)*(byte *)0x5895 * 0x40 + (uVar2 & 7) * 8 + (uVar10 & 7);
          *(int *)((int)FUN_0000_5956 + 4 + iVar6) = 0x60;
          if (*(byte *)0x5895 < 7) {
            pbVar1 = (byte *)(iVar6 + 0x599a);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_0000_e23e;
        }
      }
      uVar7 = 0x8712;
    }
    else if (bVar4 == 0xb0) {
      uVar7 = 0x886c;
    }
    else {
      if (0xb0 < bVar4) {
        if (bVar4 == 0xc0) {
          bVar4 = *(byte *)0x6604 & 0xf;
          if (bVar4 == 1) {
            uVar7 = 0x88ac;
            goto LAB_0000_e00b;
          }
          if (bVar4 == 2) {
            uVar7 = 0x888a;
            goto LAB_0000_e00b;
          }
          FUN_0000_3270(0x88c8);
          FUN_0000_3270(0x88ea);
          iVar6 = (uVar2 & 7) * 8 + (uVar10 & 7);
          bVar4 = *(byte *)0x5895;
          cVar5 = (bVar3 & 8) + 0xb0;
        }
        else {
          if (bVar4 != 0xd0) {
            if ((bVar4 != 0xe0) && (bVar4 != 0xf0)) {
              return;
            }
            uVar7 = 0x890e;
            goto LAB_0000_e00b;
          }
          FUN_0000_3270(0x88fe);
          iVar6 = (uVar2 & 7) * 8 + (uVar10 & 7);
          bVar4 = *(byte *)0x5895;
          cVar5 = (bVar3 & 8) - 0x20;
        }
        *(char *)((int)FUN_0000_5956 + 4 + (uint)bVar4 * 0x40 + iVar6) = cVar5;
LAB_0000_e23e:
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      if (bVar4 == 0x80) {
        if (bVar3 == 0x80) {
          uVar7 = 0x87d6;
        }
        else if (bVar3 == 0x81) {
          uVar7 = 0x87e6;
        }
        else if (bVar3 == 0x82) {
          uVar7 = 0x87fc;
        }
        else if (bVar3 == 0x83) {
          uVar7 = 0x880e;
        }
        else {
          uVar7 = 0x8822;
        }
      }
      else if (bVar4 == 0x90) {
        uVar7 = 0x8834;
      }
      else {
        if (bVar4 != 0xa0) {
          return;
        }
        uVar7 = 0x884e;
      }
    }
  }
LAB_0000_e00b:
  FUN_0000_3270(uVar7);
  return;
}



void FUN_0000_e54a(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int uVar6;
  uint uVar7;
  int unaff_DS;

  iVar5 = FUN_0000_63a8();
  if (iVar5 != -1) {
    bVar3 = *(byte *)(param_1 * 8 + 0x5c5f);
    if (bVar3 < 0x80) {
      uVar6 = 0x8a58;
    }
    else {
      bVar4 = *(byte *)(iVar5 * 0x20 + 0x55b5);
      uVar7 = RANDOM(0x1e,1);
      if ((((bVar3 & 0x7f) - (uint)bVar4) + 0x1e >> 1 & 0xff) < uVar7) {
        FUN_0000_3270(0x8a64);
        pbVar1 = (byte *)(param_1 * 8 + 0x5c5f);
        *pbVar1 = *pbVar1 & 0x7f;
        return;
      }
      uVar6 = 0x8a6e;
    }
    FUN_0000_3270(uVar6);
    FUN_0000_5dce(0x32,1,2000,800);
    pcVar2 = (char *)0x57ac;
    *pcVar2 = *pcVar2 + -1;
  }
  return;
}



void FUN_0000_e5de(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int uVar8;
  int unaff_DS;

  FUN_0000_3270(0x8a7a);
  iVar4 = FUN_0000_63a8();
  if (iVar4 == -1) {
    return;
  }
  uVar5 = (uint)*(byte *)0x5896;
  uVar6 = (uint)*(byte *)0x5897;
  uVar7 = (uint)*(byte *)0x5895;
  bVar2 = *(byte *)((int)FUN_0000_5956 + 4 + uVar7 * 0x40 + (uVar6 & 7) * 8 + (uVar5 & 7));
  bVar3 = *(byte *)(iVar4 * 0x20 + 0x55b5);
  if ((bVar2 & 0xf7) == 0x40) {
    if (*(char *)0x57ac != '\0') {
      uVar8 = 0x8a86;
LAB_0000_e665:
      FUN_0000_3270(uVar8);
      pcVar1 = (char *)0x57ac;
      *pcVar1 = *pcVar1 + -1;
      return;
    }
    uVar8 = 0x8a7c;
  }
  else if ((bVar2 & 0xf0) == 0x40) {
    if (*(char *)0x57ac != '\0') {
      iVar4 = RANDOM(0x1e,1);
      if ((int)((uVar7 * 2 - (uint)bVar3) + 0x1e >> 1) < iVar4) {
        FUN_0000_3270(0x8a9c);
        *(char *)((int)FUN_0000_5956 + 4 +
                 (uint)*(byte *)0x5895 * 0x40 + (uVar6 & 7) * 8 + (uVar5 & 7)) = (bVar2 & 8) + 0x40;
        return;
      }
      uVar8 = 0x8aac;
      goto LAB_0000_e665;
    }
    uVar8 = 0x8a92;
  }
  else if ((bVar2 & 0xf0) == 0x70) {
    uVar8 = 0x8ab8;
  }
  else {
    uVar8 = 0x8ac8;
  }
  FUN_0000_3270(uVar8);
  return;
}



void FUN_0000_e928(int *param_1,int param_2,int param_3,int param_4,int param_5
                  ,int param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  int unaff_SI;
  int unaff_DS;

  if ((param_7 == 3) || (param_7 == 4)) {
    param_6 = param_6 + -1;
  }
  if (param_7 != 1) {
    if (param_7 != 2) goto LAB_0000_e969;
    param_2 = param_2 * 3;
  }
  param_6 = RANDOM(param_2,1);
LAB_0000_e969:
  iVar2 = FUN_0000_d9a0();
  if (iVar2 != 0) {
    FUN_0000_5494(iVar2,param_6,param_3,param_4,param_5,param_7,param_7);
    if (*(byte *)0x5893 < 0x80) {
      *(int *)(iVar2 * 8 + 0x5c61) = 0;
      *(int *)(iVar2 * 8 + 0x5c5e) = (int)param_3;
    }
    else {
      *(int *)(iVar2 * 8 + 0x5c61) = 0x20;
    }
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    FUN_0000_7330();
    if (*param_1 == 0) {
      FUN_0000_3270(0x8b5c);
      *param_1 = 1;
    }
    FUN_0000_daca(param_7,unaff_SI,iVar2,param_6);
  }
  return;
}



void FUN_0000_e9e0(int param_1,int param_2,int param_3,int param_4,
                  uint param_5)

{
  uint uVar1;
  int iVar2;
  int uVar4;
  int unaff_DS;
  int iVar3;

  iVar2 = 8;
  while (iVar3 = iVar2, iVar2 = iVar3 + -1, -1 < iVar2) {
    if (*(byte *)(iVar3 + 0x412b) <= param_5) {
      uVar1 = RANDOM(0x1e,1);
      if (*(byte *)(iVar3 + 0x412b) <= uVar1) {
        if (*(char *)(iVar3 + 0x4133) == '\x01') {
          uVar4 = 1;
        }
        else {
          uVar4 = RANDOM(*(int *)(iVar3 + 0x4133),1);
        }
        FUN_0000_e928(param_1,param_5,param_2,param_3,param_4,uVar4,*(int *)(iVar3 + 0x4123));
      }
    }
  }
  return;
}



void FUN_0000_ea58(int param_1,int param_2,int param_3,int param_4,
                  uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_DS;
  int iStack_4;

  iStack_4 = (int)param_5 / 2;
  while (iVar1 = iStack_4 + -1, -1 < iStack_4) {
    iVar2 = RANDOM(0x2f,0);
    iStack_4 = iVar1;
    if (*(byte *)(iVar2 + 0x416c) <= param_5) {
      uVar3 = RANDOM(0x1e,1);
      if (*(byte *)(iVar2 + 0x416c) <= uVar3) {
        FUN_0000_e928(param_1,param_5,param_2,param_3,param_4,iVar2,*(int *)(iVar2 + 0x413c));
      }
    }
  }
  return;
}



void FUN_0000_eacc(uint param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int uVar5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  int unaff_DS;
  char *pcStack_14;
  byte *pbStack_12;
  byte *pbStack_10;
  int iStack_a;
  byte bStack_8;
  int iStack_6;
  uint uStack_4;

  iStack_a = 0;
  iStack_6 = 1;
  pbVar8 = (byte *)0x5c64;
  pbStack_10 = (byte *)0x5c65;
  pbStack_12 = (byte *)0x5c66;
  pcStack_14 = (char *)0x5c62;
  pcVar7 = (char *)0x5c62;
  do {
    if (((*pbVar8 == param_3) && (*pbStack_10 == param_2)) &&
       ((0x7f < *(byte *)0x5893 || ((*(byte *)0x5893 < 0x80 && (*pbStack_12 == param_1)))))) {
      if (*pcStack_14 == '\x01') break;
      if (*pcVar7 == '\x0e') {
        uVar5 = 0x8b64;
        goto LAB_0000_ec68;
      }
    }
    pbVar8 = pbVar8 + 8;
    pbStack_10 = pbStack_10 + 8;
    pbStack_12 = pbStack_12 + 8;
    pcStack_14 = pcStack_14 + 8;
    pcVar7 = pcVar7 + 8;
    iStack_6 = iStack_6 + 1;
  } while (pcVar7 < (char *)0x5d5a);
  if (iStack_6 == 0x20) {
    uVar5 = 0x8b6c;
  }
  else {
    uVar6 = FUN_0000_63a8();
    if (uVar6 == 0xffff) {
      return;
    }
    bStack_8 = *(byte *)(iStack_6 * 8 + 0x5c5f);
    FUN_0000_5494(iStack_6,0,0,0,0,0,0);
    pbVar1 = (byte *)0x24e6;
    *pbVar1 = *pbVar1 | 2;
    if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
      if (*(byte *)0x5888 < 3) {
        *(int *)0x5888 = 0;
      }
      else {
        pcVar2 = (char *)0x5888;
        *pcVar2 = *pcVar2 + -2;
      }
    }
    if (0x7f < bStack_8) {
      bStack_8 = bStack_8 & 0x7f;
      FUN_0000_3270(0x8b7e);
      FUN_0000_49f0(uVar6);
      if ((0x7f < *(byte *)0x5893) && (*(char *)(uVar6 * 0x20 + 0x55b3) == 'D')) {
        iStack_6 = 0;
        uVar4 = 0xba14;
        do {
          uStack_4 = uVar4;
          if (((*(byte *)(uStack_4 + 2) & 0x80) != 0) && (*(byte *)(uStack_4 + 3) == uVar6)) {
            pbVar1 = (byte *)(uStack_4 + 2);
            *pbVar1 = *pbVar1 | 0x20;
            iVar9 = (uint)*(byte *)(uStack_4 + 4) * 8;
            *(int *)(iVar9 + 0x5c5b) = 0x1e;
            *(int *)(iVar9 + 0x5c5a) = 0x1e;
            break;
          }
          iStack_6 = iStack_6 + 1;
          uVar4 = uStack_4 + 8;
        } while (uStack_4 + 8 < 0xbb14);
        if (uVar6 == *(byte *)0x587b) {
          *(int *)0x587b = 0xff;
        }
        FUN_0000_7330();
      }
    }
    bVar3 = bStack_8;
    FUN_0000_e9e0(&iStack_a,param_1,param_2,param_3,bStack_8);
    FUN_0000_ea58(&iStack_a,param_1,param_2,param_3,bVar3);
    if (iStack_a != 0) {
      return;
    }
    uVar5 = 0x8b88;
  }
LAB_0000_ec68:
  FUN_0000_3270(uVar5);
  return;
}



void FUN_0000_ec74(void)

{
  byte bVar1;
  int iVar2;
  int uVar3;
  int unaff_DS;

  bVar1 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7))
  ;
  if ((bVar1 & 0xf0) == 0x40) {
    iVar2 = FUN_0000_63a8();
    if (iVar2 == -1) {
      return;
    }
    if ((bVar1 & 7) != 0) {
      FUN_0000_49f0(iVar2);
    }
    *(char *)((int)FUN_0000_5956 + 4 +
             (uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7)) =
         (bVar1 & 8) + 0x70;
    uVar3 = 0x8b96;
  }
  else if ((bVar1 & 0xf0) == 0x70) {
    uVar3 = 0x8ba6;
  }
  else {
    uVar3 = 0x8bb6;
  }
  FUN_0000_3270(uVar3);
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00003359) overlaps instruction at (ram,0x00003358)
//
// WARNING: Possible PIC construction at 0x00001c12: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00001c15)
// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer
// WARNING: Type propagation algorithm not settling

uint * FUN_0000_edf8(uint *param_1,uint param_2,int param_3,int param_4,int param_5,uint *param_6,
                    int param_7)

{
  int *puVar1;
  int *piVar2;
  char **ppcVar3;
  uint *puVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  code *pcVar8;
  code **ppcVar9;
  code *pcVar10;
  code *pcVar11;
  int uVar12;
  char cVar13;
  byte bVar14;
  byte bVar22;
  int uVar15;
  int *puVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int uVar23;
  uint ******in_CX;
  byte bVar24;
  char cVar25;
  uint extraout_DX;
  int extraout_DX_00;
  uint in_DX;
  char in_BL;
  uint *puVar26;
  int *puVar27;
  int *puVar28;
  int *puVar30;
  int *puVar31;
  int *puVar32;
  int *piVar33;
  int *puVar34;
  int *puVar35;
  uint unaff_BP;
  byte *pbVar36;
  uint *unaff_SI;
  char *pcVar37;
  char *pcVar38;
  uint *unaff_DI;
  int unaff_ES;
  int uVar39;
  int uVar40;
  int unaff_SS;
  int uVar41;
  int unaff_DS;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  int uVar45;
  int in_stack_00000038;
  uint *puStack_218;
  uint ******ppppppuStack_214;
  uint *puStack_212;
  int iStack_210;
  uint *puStack_20e;
  uint ******ppppppuStack_20a;
  uint *puStack_208;
  uint *apuStack_206 [223];
  int uStack_48;
  byte abStack_46 [16];
  int *piStack_36;
  byte bStack_30;
  int iStack_2e;
  byte bStack_2c;
  int *puStack_26;
  char *pcStack_22;
  char *pcStack_20;
  int *puStack_1e;
  uint *puStack_1c;
  uint ******ppppppuStack_1a;
  uint *puStack_18;
  int *puStack_16;
  uint *puStack_14;
  uint *puStack_12;
  int uStack_10;
  char *pcStack_e;
  uint ******ppppppuStack_c;
  uint *******pppppppuStack_a;
  uint *in_stack_0000fff8;
  uint ******ppppppuVar46;
  int in_stack_0000fffa;
  int *puVar29;

  puVar35 = (int *)&stack0xfffe;
  if (param_3 < 0xd) {
    if (param_3 < 9) {
      if (7 < param_3 - 1U) {
LAB_0000_ee25:
        puVar21 = (uint *)FUN_0000_3270();
        return puVar21;
      }
      puVar17 = (uint *)((param_3 - 1U) * 2);
      puVar21 = unaff_SI;
      switch(param_3) {
      case 1:
switchD_0000_ee1d_caseD_1:
        puVar21 = (uint *)FUN_0000_3e5f();
        return puVar21;
      case 2:
        ppppppuStack_c = (uint ******)0x589f;
        FUN_0000_79a6();
        FUN_0000_3f3e();
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      case 3:
        do {
          unaff_SI = (uint *)((int)unaff_SI + 1);
          if (10 < (int)unaff_SI) {
            unaff_DI = (uint *)(ppppppuStack_c + 0x10);
            in_stack_0000fffa = in_stack_0000fffa + 1;
            ppppppuStack_c = (uint ******)unaff_DI;
            if (10 < in_stack_0000fffa) {
              FUN_0000_6db4();
              puVar21 = (uint *)FUN_0000_70cc();
              if (*(char *)0x5891 != '\0') {
                puVar21 = (uint *)FUN_0000_5b22();
              }
              *(int *)0x5891 = 1;
              return puVar21;
            }
            unaff_SI = (uint *)0x0;
          }
          if (((int *)((int)unaff_DI + (int)unaff_SI))[-0x54fe] == '\0') {
            in_stack_0000fffa = ((uint)unaff_SI & 0xff) + (uint)*(byte *)0x5896 + -5;
            pppppppuStack_a = (uint *******)0x73f4;
            puVar16 = (int *)FUN_0000_5e22();
            ((int *)((int)unaff_DI + (int)unaff_SI))[-0x54fe] = *puVar16;
          }
        } while( true );
      case 5:
        FUN_0000_3270();
        *(char *)0x587c = (char)param_1 + (*(byte *)0x587c & 0xfc);
        return unaff_SI;
      case 6:
        puVar32 = (int *)&stack0xfffa;
        cVar25 = '\x0f';
        do {
          puVar35 = puVar35 + -1;
          puVar32 = puVar32 + -1;
          *puVar32 = *puVar35;
          cVar25 = cVar25 + -1;
        } while ('\0' < cVar25);
        puStack_26 = &stack0xfffa;
        do {
          if (unaff_SI == (uint *)0x0) goto LAB_0000_3388;
          if (*(char *)((int)in_CX + in_DX) == '\n') goto LAB_0000_3388;
          if (*(char *)((int)in_CX + in_DX) == '\0') goto LAB_0000_3388;
          if (*(char *)((int)in_CX + in_DX) == '\r') goto LAB_0000_3388;
          unaff_SI = (uint *)((int)unaff_SI + -1);
          ppppppuStack_c = (uint ******)((int)in_CX + -1);
          while (in_CX = ppppppuStack_c, *(char *)((int)ppppppuStack_c + in_DX) == ' ') {
LAB_0000_3388:
            in_DX = unaff_BP;
            uStack_10 = unaff_SI;
            ppppppuStack_c = in_CX;
            if (unaff_SI == (uint *)0x0) {
              uStack_10 = puStack_1c;
              ppppppuStack_c = ppppppuStack_1a;
              if (puStack_16[4] != '\0') {
                FUN_0000_30da();
                pppppppuStack_a = (uint *******)0x1;
              }
            }
            else {
              do {
                do {
                  unaff_SI = (uint *)((int)unaff_SI + -1);
                } while (abStack_46[(int)unaff_SI] == 0x20);
              } while ((abStack_46[(int)unaff_SI] == 0xd) || (abStack_46[(int)unaff_SI] == 10));
              uStack_10 = unaff_SI;
              if (*(char *)((int)in_CX + in_DX) != '\0') {
                ppppppuStack_c = (uint ******)((int)in_CX + 1);
              }
              if ((int)unaff_SI < (int)puStack_14) {
                in_stack_0000fff8 = (uint *)((int)in_stack_0000fff8 + 1);
              }
            }
            if ((int)uStack_10 <= (int)puStack_14) goto LAB_0000_33f5;
            do {
              uStack_10 = (uint *)((int)uStack_10 + -1);
LAB_0000_33f5:
              puVar21 = puStack_14;
              if (puStack_1e != (int *)0x0) {
                if (uStack_48 < (int)uStack_10) {
                  FUN_0000_30da();
                }
                FUN_0000_370e();
                puVar21 = (uint *)FUN_0000_3612();
              }
              puVar17 = uStack_10;
              puVar26 = puStack_18;
              if (pppppppuStack_a != (uint *******)0x0) {
                for (; abStack_46[(int)puStack_18] == 0x20;
                    puStack_18 = (uint *)((int)puStack_18 + 1)) {
                }
                puVar26 = puStack_18;
              }
              for (; (int)puVar26 <= (int)puVar17; puVar26 = (uint *)((int)puVar26 + 1)) {
                puVar21 = (uint *)FUN_0000_30da();
              }
              while( true ) {
                puStack_12 = puVar26;
                if (pcStack_e != (char *)0x0) {
                  return puVar21;
                }
                uVar19 = in_DX;
                if (in_stack_0000fff8 != (uint *)0x0) {
                  FUN_0000_30da();
                  uVar19 = in_DX;
                }
                puStack_18 = (uint *)0x0;
                pppppppuStack_a = (uint *******)0x0;
                in_stack_0000fff8 = (uint *)0x0;
                puVar21 = (uint *)FUN_0000_3932();
                puVar17 = (uint *)(uStack_48 - (int)puVar21);
                puStack_14 = puVar17;
                in_DX = uVar19;
                for (unaff_SI = (uint *)0x0;
                    (((*(char *)((int)ppppppuStack_c + uVar19) != '\n' &&
                      (*(char *)((int)ppppppuStack_c + uVar19) != '\r')) &&
                     (*(char *)((int)ppppppuStack_c + uVar19) != '\0')) &&
                    ((int)unaff_SI <= (int)puVar17)); unaff_SI = (uint *)((int)unaff_SI + 1)) {
                  bVar14 = *(byte *)((int)ppppppuStack_c + uVar19);
                  puVar21 = (uint *)(uint)bVar14;
                  abStack_46[(int)unaff_SI] = bVar14;
                  ppppppuStack_c = (uint ******)((int)ppppppuStack_c + 1);
                }
                uStack_10 = unaff_SI;
                if (unaff_SI != (uint *)0x0) break;
                if (*(char *)((int)ppppppuStack_c + in_DX) == '\0') {
                  pcStack_e = (char *)((int)pcStack_e + 1);
                  puVar26 = puStack_12;
                }
                else {
                  ppppppuStack_c = (uint ******)((int)ppppppuStack_c + 1);
                  puVar21 = (uint *)FUN_0000_30da();
                  puVar26 = puStack_12;
                }
              }
            } while ((int)unaff_SI <= (int)puStack_14);
            puStack_1c = unaff_SI;
            ppppppuStack_1a = ppppppuStack_c;
            unaff_BP = in_DX;
          }
        } while( true );
      case 7:
        while( true ) {
          bVar14 = (byte)((uint)in_CX >> 8);
          uVar12 = (int)(in_DX >> 8);
          cVar25 = (byte)in_DX + bVar14;
          if (!CARRY1((byte)in_DX,bVar14) && cVar25 != '\0') break;
          *(char *)0x9a01 = in_BL;
          in_BL = in(CONCAT11(uVar12,cVar25));
          in_DX = CONCAT11(uVar12,cVar25 + in_BL);
          pbVar6 = &stack0xfffe + (int)unaff_DI;
          *pbVar6 = *pbVar6 | cVar25 + in_BL;
        }
        *(char *)0x9a01 = in_BL;
        cVar13 = in(CONCAT11(uVar12,cVar25));
        puVar4 = (uint *)((int)puVar17 + (int)unaff_SI);
        *(byte *)puVar4 = *(byte *)puVar4 | cVar25 + cVar13;
        cVar25 = cVar25 + cVar13 + bVar14;
        *(char *)0x9a01 = cVar13;
        bVar14 = in(CONCAT11(uVar12,cVar25));
        pbVar6 = (byte *)0xea00;
        *pbVar6 = *pbVar6 | (byte)in_CX;
        *(byte *)0x9a01 = bVar14 & 0xde;
        in(CONCAT11(uVar12,cVar25 + bVar14));
        pbVar6 = (byte *)0xea00;
        *pbVar6 = *pbVar6 | (byte)in_CX;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case 8:
        do {
          bVar43 = true;
          while ((uint *)0x7fff < puStack_218) {
            puStack_218 = (uint *)0x7;
            if (puStack_20e == puVar21) {
              return puVar21;
            }
            ppppppuStack_214 = (uint ******)apuStack_206[(int)puStack_20e];
            unaff_DI = (uint *)(((int)puStack_20e + 1) * 2);
            puStack_212 = apuStack_206[(int)puStack_20e + 1];
            puStack_20e = puStack_20e + 1;
            ppppppuStack_20a = ppppppuStack_214;
            puStack_208 = puStack_212;
          }
          bVar42 = puStack_218 < (uint *)0x7;
          bVar44 = puStack_218 == (uint *)0x7;
          puVar26 = puStack_218;
code_r0x00007513:
          if (bVar42 || bVar44) {
            bVar42 = CARRY2((uint)puVar26,(uint)puVar26);
            pcVar38 = (char *)((int)puVar26 * 2);
            cVar25 = (char)puVar17;
            switch((int)*(int *)(pcVar38 + 0x5b16)) {
            case 0x5de5:
              for (iVar18 = 0; iVar18 < (int)param_1; iVar18 = iVar18 + param_2) {
                FUN_0000_3d02();
                pppppppuStack_a = (uint *******)0x5e06;
                FUN_0000_3ae8();
              }
              puVar21 = (uint *)FUN_0000_3d2e();
              return puVar21;
            case 0x83ec:
              while (bVar42) {
                *(int *)ppppppuStack_1a = 0;
                *(int *)puStack_18 = 0;
                *puStack_16 = 0;
                *(int *)puStack_14 = 0;
                *(int *)unaff_DI = 0;
                *puStack_1e = 0;
                *(int *)puStack_1c = 0;
                *(int *)((int)puStack_12 + 3) = 0;
                *(int *)(puStack_12 + 1) = 0;
                *(int *)((int)puStack_12 + 1) = 0;
                *(int *)puStack_12 = 0;
                *(int *)((int)puStack_12 + 7) = 0;
                *(int *)(puStack_12 + 3) = 0;
                *(int *)((int)puStack_12 + 5) = 0;
                *(int *)(puStack_12 + 2) = 0;
                puStack_14 = puStack_14 + 4;
                puStack_16 = puStack_16 + 8;
                puStack_18 = puStack_18 + 4;
                ppppppuStack_1a = ppppppuStack_1a + 4;
                puStack_1c = puStack_1c + 4;
                puStack_1e = puStack_1e + 8;
                unaff_DI = unaff_DI + 4;
                bVar42 = unaff_DI < (uint *)((int)FUN_0000_5d5e + 1);
                unaff_SI = puStack_12;
                puStack_12 = puStack_12 + 4;
              }
              pppppppuStack_a = (uint *******)0x0;
              puVar21 = unaff_SI;
              do {
                ppppppuVar46 = (uint ******)(uint)*(byte *)0x585b;
                if (ppppppuVar46 <= pppppppuStack_a) {
                  if (*(char *)0xadb9 == -0x24) {
                    pppppppuStack_a = (uint *******)0x5;
                    ppppppuStack_c = (uint ******)0x5;
                    pcStack_e = (char *)(uint)*(byte *)0x5895;
                    uStack_10 = (uint *)0x85bb;
                    uVar19 = FUN_0000_7f26();
                    *(char *)((uVar19 & 0xff) * 8 + 0x5c5f) = *(char *)0x5895 * '\x03' + '\a';
                    bVar14 = *(byte *)0xbb15;
                    ppppppuVar46 = (uint ******)(uint)bVar14;
                    *(byte *)0xadb9 = bVar14;
                  }
                  return (uint *)ppppppuVar46;
                }
                uVar12 = (int)((uint)in_CX >> 8);
                in_CX = (uint ******)CONCAT11(uVar12,5);
                if (*(char *)((int)pppppppuStack_a * 0x20 + 0x55b3) != 'D') {
                  if (*(char *)((int)pppppppuStack_a * 0x20 + 0x55c5) == '*') {
                    uStack_10 = (uint *)CONCAT11(uStack_10._1_1_,0x2a);
                  }
                  if (*(char *)((int)pppppppuStack_a * 0x20 + 0x55c5) == ',') {
                    uStack_10 = (uint *)CONCAT11(uStack_10._1_1_,0x2c);
                  }
                  ppppppuVar46 = (uint ******)pppppppuStack_a;
                  if ((char)uStack_10 != '\0') {
                    ppppppuVar46 = (uint ******)0x0;
                    pppppppuStack_a = (uint *******)0x843d;
                    pppppppuStack_a = (uint *******)RANDOM();
                    if (pppppppuStack_a == (uint *******)0xb) {
                      FUN_0000_3270();
                      ppppppuVar46 = (uint ******)&DAT_0000_04b0;
                      pppppppuStack_a = (uint *******)0x1;
                      ppppppuStack_c = (uint ******)0x28;
                      pcStack_e = (char *)0x845f;
                      FUN_0000_5dce();
                      pppppppuStack_a = (uint *******)0x846b;
                      FUN_0000_8880();
                    }
                  }
                  pppppppuStack_a = (uint *******)0x1;
                  ppppppuStack_c = (uint ******)(uint)*(byte *)(ppppppuVar46 + 0xb96);
                  pcStack_e = (char *)(uint)*(byte *)0x5895;
                  uStack_10 = (uint *)0x8496;
                  uVar45 = FUN_0000_7f26();
                  in_DX = (uint)((ulong)uVar45 >> 0x10);
                  pppppppuStack_a = (uint *******)uVar45;
                  *(int *)((uint)*(byte *)((int)pppppppuStack_a * 8 + -0x45e8) * 8 + 0x5c61) =
                       0xff;
                  uVar40 = uRam000091a4;
                  in_CX = (uint ******)CONCAT11(uVar12,5);
                  puVar26 = (uint *)((int)ppppppuVar46 * 0x20);
                  uVar19 = *(byte *)(puVar26 + 0x2ad9) - 0x41;
                  if (uVar19 < 0x14) goto LAB_0000_84c4;
                  unaff_SI = (uint *)((*(uint *)((int)pppppppuStack_a * 8 + -0x45e8) & 0xff) * 8);
                  *(int *)((uint)*(byte *)((int)pppppppuStack_a * 8 + -0x45e8) * 8 + 0x5c5b) =
                       *(int *)(unaff_SI + 0x2e2d);
                  in_CX = (uint ******)CONCAT11(uVar12,5);
                  if (*(char *)((int)ppppppuVar46 * 0x20 + 0x55b3) == 'S') {
                    FUN_0000_82ce();
                  }
                  else {
                    FUN_0000_81b4();
                  }
                }
                pppppppuStack_a = (uint *******)((int)pppppppuStack_a + 1);
              } while( true );
            case 0x8b5e:
              pbVar6 = (byte *)(pcVar38 + (int)unaff_DI);
              *pbVar6 = *pbVar6 & 0xe8;
              pcVar5 = &stack0x823c + (int)unaff_DI;
              *pcVar5 = *pcVar5 + '\x01';
            case 0x8b55:
              pppppppuStack_a = (uint *******)*(int *)0x217e;
              ppppppuStack_c = (uint ******)*(int *)0x2180;
              pcStack_e = (char *)0x8b66;
              FUN_0000_8a60();
              if (*(int *)0x2182 != -1) {
                pppppppuStack_a = (uint *******)*(int *)0x2182;
                ppppppuStack_c = (uint ******)*(int *)0x2184;
                pcStack_e = (char *)0x8b81;
                FUN_0000_8a60();
              }
              pcVar5 = (char *)0x2186;
              *pcVar5 = *pcVar5 + '\x01';
              pppppppuStack_a = (uint *******)*(int *)0x217e;
              ppppppuStack_c = (uint ******)*(int *)0x2180;
              pcStack_e = (char *)0x8b9d;
              puVar21 = (uint *)FUN_0000_8a60();
              if (*(int *)0x2182 != -1) {
                pppppppuStack_a = (uint *******)*(int *)0x2182;
                ppppppuStack_c = (uint ******)*(int *)0x2184;
                pcStack_e = (char *)0x8bbc;
                puVar21 = (uint *)FUN_0000_8a60();
              }
              if (0xf < *(byte *)0x2186) {
                *(int *)0x2186 = 0;
              }
              return puVar21;
            case 0x8bd7:
              *(int *)0x5350 = 0x6c;
              ppcVar9 = (code **)0x5350;
              puVar21 = (uint *)(**ppcVar9)();
              return puVar21;
            case 0x9000:
              thunk_FUN_0000_8f97();
              return param_6;
            case 0xfe46:
              if ((int *)((int)puVar17 + bVar42 + 0x400) != (int *)0x0) {
                pppppppuStack_a = (uint *******)0xfe58;
                iVar18 = RANDOM();
                if (iVar18 < 0x20) {
                    // WARNING: Subroutine does not return
                  thunk_FUN_0000_8fec();
                }
              }
              return (uint *)0x0;
            }
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar37 = (char *)((int)unaff_DI + (int)puVar17);
            bVar14 = cVar25 + pcVar38[(int)unaff_SI];
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar14;
            pcVar5 = pcVar38 + (int)unaff_SI + 3;
            cVar25 = (char)((uint)pcVar38 >> 8);
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar14;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar14;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar14;
            bVar22 = bVar14 / 0;
            puVar1 = &stack0xfffe + (int)unaff_SI;
            *puVar1 = *puVar1;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + (char)in_CX;
            bVar14 = bVar14 % 0 + pcVar38[(int)unaff_SI];
            iVar18 = CONCAT11(bVar22,bVar14);
            pcVar5 = (char *)0xe000;
            *pcVar5 = *pcVar5 + (char)pcVar38;
            pcVar5 = pcVar38;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38;
            *pcVar5 = *pcVar5 + cVar25;
            ppppppuVar46 = (uint ******)((int)in_CX + -1);
            bVar24 = (byte)in_DX;
            if (ppppppuVar46 == (uint ******)0x0 || *pcVar5 == '\0') {
              ppppppuVar46 = in_CX + -1;
              if (ppppppuVar46 != (uint ******)0x0 && *pcVar5 != '\0') {
                pcVar5 = pcVar38 + (int)unaff_SI;
                *pcVar5 = *pcVar5 + bVar14;
                pcVar5 = pcVar38 + (int)unaff_SI;
                *pcVar5 = *pcVar5 + bVar14;
                pcVar5 = &stack0xfffd + (int)unaff_SI;
                *pcVar5 = *pcVar5 + bVar14;
                pcVar5 = pcVar38 + (int)unaff_SI;
                *pcVar5 = *pcVar5 + bVar14;
                piVar2 = (int *)(pcVar38 + (int)pcVar37);
                *piVar2 = *piVar2 + iVar18;
                piVar2 = (int *)(pcVar38 + (int)unaff_SI);
                *piVar2 = *piVar2 + iVar18;
                piVar2 = (int *)(pcVar38 + (int)pcVar37);
                *piVar2 = *piVar2 + iVar18;
                piVar2 = (int *)(pcVar38 + (int)pcVar37);
                *piVar2 = *piVar2 + iVar18;
                pcVar5 = (char *)0x1800;
                *pcVar5 = *pcVar5 + cVar25;
                goto code_r0x00000485;
              }
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar37;
              *pcVar5 = *pcVar5 + (char)ppppppuVar46;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 - bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar22;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              iVar18 = CONCAT11(bVar22 + bVar24,bVar14);
              pbVar6 = (byte *)(pcVar38 + (int)unaff_SI);
              *pbVar6 = *pbVar6 ^ bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
              *(int *)0x1330 = iVar18;
              pcVar5 = pcVar38 + (int)unaff_SI;
              *pcVar5 = *pcVar5 + bVar14;
            }
            pcVar5 = pcVar38 + (int)unaff_SI;
            cVar25 = (char)iVar18;
            *pcVar5 = *pcVar5 + cVar25;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + cVar25;
            cVar25 = cVar25 + pcVar38[(int)unaff_SI];
            iVar18 = CONCAT11((char)((uint)iVar18 >> 8),cVar25);
            pcVar5 = pcVar38 + (int)pcVar37;
            *pcVar5 = *pcVar5 + cVar25;
            piVar2 = (int *)(pcVar38 + (int)pcVar37);
            *piVar2 = *piVar2 + iVar18;
            pcVar5 = pcVar38 + (int)pcVar37;
            *pcVar5 = *pcVar5 + cVar25;
            piVar2 = (int *)(pcVar38 + (int)pcVar37);
            *piVar2 = *piVar2 + iVar18;
            ppcVar3 = (char **)0x3e00;
            *ppcVar3 = *ppcVar3 + (int)pcVar38;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + (char)pcVar38;
code_r0x00000485:
            pbVar6 = (byte *)(pcVar38 + (int)unaff_SI);
            bVar22 = (byte)iVar18;
            *pbVar6 = *pbVar6 | bVar22;
            puVar4 = (uint *)(pcVar38 + (int)pcVar37 + 0xb);
            *puVar4 = *puVar4 | in_DX;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pbVar6 = (byte *)(pcVar38 + (int)unaff_SI);
            bVar14 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar24;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22 + CARRY1(bVar14,bVar24);
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + 0x2e;
            *pcVar5 = *pcVar5 + (char)ppppppuVar46;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + '\x01';
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pcVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)unaff_SI;
            *pcVar5 = *pcVar5 + bVar22;
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          if ((((int)puStack_212 < 0) || (10 < (int)puStack_212)) ||
             (((int)ppppppuStack_214 < 0 || (10 < (int)ppppppuStack_214)))) {
            bVar43 = false;
          }
          in_CX = (uint ******)CONCAT11((char)((uint)in_CX >> 8),5);
          unaff_SI = (uint *)((int *)
                              ((int)puStack_212 + (param_4 + (int)ppppppuStack_214) * 0x20 + param_3
                              ) + (int)param_1);
          if (iStack_210 == 0) {
            unaff_DI = (uint *)((int)ppppppuStack_214 * 0x20);
            puVar17 = puStack_212;
            if ((*(char *)(puStack_212 + (int)ppppppuStack_214 * 0x10 + -0x2a7f) == '\0') ||
               (0x1f < param_4 + (int)ppppppuStack_214)) {
LAB_0000_75b5:
              bVar43 = false;
            }
            else {
              unaff_DI = (uint *)((int)ppppppuStack_214 * 0x20);
              *(int *)(puStack_212 + (int)ppppppuStack_214 * 0x10 + -0x2a7f) = 0;
            }
          }
          else if (*(char *)unaff_SI != -1) goto LAB_0000_75b5;
          if (bVar43) {
            in_CX = (uint ******)(uint)*(byte *)0x589c;
            pppppppuStack_a = (uint *******)0x75e6;
            puVar17 = (uint *)FUN_0000_5e22();
            uVar12 = *(int *)puVar17;
            pppppppuStack_a = (uint *******)0x75f9;
            iVar18 = FUN_0000_8a10();
            if (iVar18 < param_7) {
LAB_0000_76b3:
              *(int *)unaff_SI = uVar12;
            }
            else if (iStack_210 != 0) {
              pppppppuStack_a = (uint *******)ppppppuStack_214;
              ppppppuStack_c = (uint ******)0x761d;
              FUN_0000_8a10();
              pppppppuStack_a = (uint *******)0x7621;
              iVar18 = FUN_0000_781e();
              uVar23 = (int)((uint)in_CX >> 8);
              if (iVar18 == 0) {
                in_CX = (uint ******)CONCAT11(uVar23,5);
                puVar17 = puStack_208 + (int)ppppppuStack_20a * 0x10;
                unaff_DI = param_1;
                if (((*(char *)((int)(puStack_208 + (int)ppppppuStack_20a * 0x10) + (int)param_1) !=
                      '\0') &&
                    (unaff_DI = (uint *)(((int)param_6 + (int)ppppppuStack_20a) * 0x20 + param_5),
                    puVar17 = puStack_208,
                    ((int *)((int)puStack_208 + (int)unaff_DI))[-0x52ec] != '\0')) &&
                   (unaff_DI = (uint *)(((int)param_6 + (int)ppppppuStack_214) * 0x20 + param_5),
                   puVar17 = puStack_212,
                   ((int *)((int)puStack_212 + (int)unaff_DI))[-0x52ec] != '\0'))
                goto LAB_0000_76b3;
                *(int *)unaff_SI = 0xff;
              }
              else {
                unaff_DI = (uint *)((int)param_6 + (int)ppppppuStack_214);
                if ((((-1 < (int)unaff_DI) && (-1 < (int)(int *)((int)puStack_212 + param_5)))
                    && ((int)(int *)((int)puStack_212 + param_5) < 0x20)) &&
                   ((int)unaff_DI < 0x20)) {
                  in_CX = (uint ******)CONCAT11(uVar23,5);
                  unaff_DI = (uint *)(((int)param_6 + (int)ppppppuStack_214) * 0x20 + param_5);
                  puVar17 = puStack_212;
                  if (((int *)((int)puStack_212 + (int)unaff_DI))[-0x52ec] != '\0')
                  goto LAB_0000_76b3;
                }
                *(int *)unaff_SI = 0;
              }
            }
            pppppppuStack_a = (uint *******)ppppppuStack_214;
            ppppppuStack_c = (uint ******)0x76d3;
            FUN_0000_8a10();
            pppppppuStack_a = (uint *******)0x76d7;
            uVar45 = FUN_0000_781e();
            in_DX = (uint)((ulong)uVar45 >> 0x10);
            if ((int)uVar45 != 0) {
              apuStack_206[(int)puVar21] = (uint *)ppppppuStack_214;
              iVar18 = (int)puVar21 + 1;
              unaff_DI = (uint *)(iVar18 * 2);
              apuStack_206[iVar18] = puStack_212;
              puVar21 = (uint *)(iVar18 + 1);
            }
          }
          puStack_218 = (uint *)((int)puStack_218 - 1);
        } while( true );
      }
      puVar4 = unaff_SI;
      uVar19 = *puVar4;
      *puVar4 = (uint)(*puVar4 + (int)unaff_DI);
      if (!CARRY2(uVar19,(uint)unaff_DI) && *puVar4 != 0) {
        *(int *)((int)unaff_SI + 1) = *(int *)puVar17;
      }
      *(char *)((int)unaff_SI + 5) = '$' - *(char *)((int)unaff_SI + 1);
      *(int *)(unaff_SI + 1) = 0x40;
      if ((param_5 == 8) || (param_5 == 9)) {
        *(int *)(unaff_SI + 1) = 0x20;
      }
      *(char *)((int)unaff_SI + 3) = (char)param_5;
      *(int *)(unaff_SI + 3) = (int)param_3;
      *(int *)((int)unaff_SI + 7) = (int)param_2;
      if ((in_stack_0000fff8 < (uint *)0x8000) || (param_4 == 2)) {
        puVar21 = (uint *)0x0;
        cVar25 = *(char *)unaff_SI;
        cVar13 = (char)param_5 * '\x04' + '@';
        pcVar38 = (char *)0x5c5a;
        uStack_10 = (uint *)0x5c5b;
        pcStack_e = (char *)0x5c5b;
        ppppppuStack_c = (uint ******)0x5c5a;
        puStack_18 = (uint *)0x5c5c;
        ppppppuStack_1a = (uint ******)0x5c5d;
        puStack_1c = (uint *)0x5c5e;
        puStack_1e = (int *)0x5c61;
        pcStack_20 = (char *)0x5c5f;
        pcStack_22 = (char *)0x5c5f;
        do {
          if (*pcVar38 == '\0') {
            uVar12 = SUB21(puVar21,0);
            if (param_4 == 0) {
              *(int *)(unaff_SI + 2) = uVar12;
              *pcVar38 = cVar13;
              *(char *)uStack_10 = cVar13;
            }
            if (param_4 == 1) {
              *(int *)(unaff_SI + 2) = uVar12;
            }
            if (param_4 == 2) {
              *(char *)ppppppuStack_c = (char)param_5;
              *pcStack_e = (char)param_5;
              in_stack_0000fff8 = puVar21;
            }
            *(int *)puStack_18 = (int)param_3;
            *(int *)ppppppuStack_1a = (int)param_2;
            *(char *)puStack_1c = (char)param_1;
            *puStack_1e = 0xff;
            if (param_4 == 0) {
              pcStack_22 = pcStack_20;
              param_5._0_1_ = cVar25;
            }
            *pcStack_22 = (char)param_5;
            if (param_4 != 2) {
              *(int *)(unaff_SI + 2) = uVar12;
            }
            break;
          }
          pcVar38 = pcVar38 + 8;
          uStack_10 = (uint *)((int)uStack_10 + 8);
          pcStack_e = pcStack_e + 8;
          ppppppuStack_c = (uint ******)((int)ppppppuStack_c + 8);
          puStack_18 = (uint *)((int)puStack_18 + 8);
          ppppppuStack_1a = (uint ******)((int)ppppppuStack_1a + 8);
          puStack_1c = (uint *)((int)puStack_1c + 8);
          puStack_1e = puStack_1e + 8;
          pcStack_20 = pcStack_20 + 8;
          pcStack_22 = pcStack_22 + 8;
          puVar21 = (uint *)((int)puVar21 + 1);
        } while ((int)puVar21 < 0x20);
        if (((param_4 == 2) || (puVar21 != (uint *)0x20)) || ((uint *)0x7fff < in_stack_0000fff8))
        goto LAB_0000_8171;
      }
      in_stack_0000fff8 = (uint *)0xffff;
LAB_0000_8171:
      if (-1 < (int)in_stack_0000fff8) {
        pbVar36 = (byte *)0xba18;
        do {
          if ((uint *)(uint)*(byte *)((uint)*pbVar36 * 8 + 0x5c61) == in_stack_0000fff8) {
            *(int *)((uint)*pbVar36 * 8 + 0x5c61) = 0xff;
          }
          pbVar36 = pbVar36 + 8;
        } while (pbVar36 < (byte *)0xbb18);
      }
      return in_stack_0000fff8;
    }
    if ((param_2 == 0x1b) || (param_2 == 0x1d)) {
      pppppppuStack_a = (uint *******)0x63;
      ppppppuStack_c = (uint ******)0xf02e;
      FUN_0000_5910();
    }
    else {
      pcVar5 = (char *)(param_2 + 0x57c0);
      *pcVar5 = *pcVar5 + '\x01';
      if (*(char *)(param_2 + 0x57c0) == 'd') {
        *(int *)(param_2 + 0x57c0) = 99;
      }
    }
    FUN_0000_3270();
  }
  else {
    if (param_3 == 0x19) {
      puVar21 = (uint *)FUN_0000_3270();
      *(int *)(param_2 + 0x5840) = 0xff;
      goto LAB_0000_f11a;
    }
    if (param_3 < 0x1a) {
      if (param_3 == 0xd) {
        pppppppuStack_a = (uint *******)0x20;
        ppppppuStack_c = (uint ******)0xeeb2;
        FUN_0000_345e();
        FUN_0000_3270();
        FUN_0000_3270();
        pppppppuStack_a = (uint *******)0x63;
        ppppppuStack_c = (uint ******)0xeed9;
        puVar21 = (uint *)FUN_0000_5910();
      }
      else if (param_3 == 0xe) {
        puVar21 = (uint *)FUN_0000_3270();
        *(int *)0x57bf = 0xff;
        pbVar6 = (byte *)0x5b9d;
        *pbVar6 = *pbVar6 | 0x80;
      }
      else {
        if (param_3 != 0xf) goto LAB_0000_ee25;
        pppppppuStack_a = (uint *******)0x20;
        ppppppuStack_c = (uint ******)0xee78;
        FUN_0000_345e();
        FUN_0000_3270();
        pppppppuStack_a = (uint *******)0x270f;
        ppppppuStack_c = (uint ******)0xee8d;
        puVar21 = (uint *)FUN_0000_5934();
      }
      goto LAB_0000_f11a;
    }
    if (param_3 == 0x1b) {
      puVar21 = (uint *)FUN_0000_3270();
      pcVar5 = (char *)0x57b0;
      *pcVar5 = *pcVar5 + '\x01';
      if (*(char *)0x57b0 == 'd') {
        *(int *)0x57b0 = 99;
      }
      if (*(char *)0x5893 == '\x11') {
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      goto LAB_0000_f11a;
    }
    if (param_3 == 0xb4) {
      *(int *)((param_2 & 3) + 0x57b6) = 0xff;
      FUN_0000_3270();
    }
    else {
      if (param_3 == 0xb5) {
        *(int *)0x57b4 = 0xff;
        FUN_0000_3270();
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      if (param_3 == 0xb6) {
        *(int *)0x57b5 = 0xff;
      }
      else {
        if (param_3 != 0xb7) goto LAB_0000_ee25;
        *(int *)0x57b3 = 0xff;
      }
    }
  }
  puVar21 = (uint *)FUN_0000_3270();
LAB_0000_f11a:
  if ((int)param_1 < 0x20) {
    pppppppuStack_a = (uint *******)0x0;
    ppppppuStack_c = (uint ******)0x0;
    pcStack_e = (char *)0x0;
    uStack_10 = (uint *)0x0;
    puStack_12 = param_1;
    puStack_14 = (uint *)0xf12e;
    puVar21 = (uint *)FUN_0000_5494();
  }
  pbVar6 = (byte *)0x24e6;
  *pbVar6 = *pbVar6 | 2;
  *(int *)((int)FUN_0000_a9f4 + 6) = 1;
  return puVar21;
LAB_0000_ebe5:
  if (((*(byte *)(uVar19 + 2) & 0x80) != 0) &&
     ((uint ******)(uint)*(byte *)(uVar19 + 3) == ppppppuStack_c)) {
    pbVar6 = (byte *)(uVar19 + 2);
    *pbVar6 = *pbVar6 | 0x20;
    iVar18 = (uint)*(byte *)(uVar19 + 4) * 8;
    *(int *)(iVar18 + 0x5c5b) = 0x1e;
    *(int *)(iVar18 + 0x5c5a) = 0x1e;
    goto LAB_0000_ec10;
  }
  uVar19 = uVar19 + 8;
  if (0xbb13 < uVar19) {
LAB_0000_ec10:
    if (ppppppuStack_c == (uint ******)(uint)*(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
    FUN_0000_7330();
LAB_0000_ec36:
    pppppppuStack_a = (uint *******)&pppppppuStack_a;
    ppppppuStack_c = (uint ******)0xec4e;
    FUN_0000_e9e0();
    pppppppuStack_a = (uint *******)&pppppppuStack_a;
    ppppppuStack_c = (uint ******)0xec5f;
    puVar21 = (uint *)FUN_0000_ea58();
    if (pppppppuStack_a == (uint *******)0x0) {
      puVar21 = (uint *)FUN_0000_3270();
    }
    return puVar21;
  }
  goto LAB_0000_ebe5;
LAB_0000_84c4:
  bVar42 = CARRY2(uVar19,uVar19);
  puVar17 = (uint *)(uVar19 * 2);
  bVar44 = puVar17 == (uint *)0x0;
  bVar14 = (byte)puVar26;
  switch(uVar19) {
  case 0:
    goto LAB_0000_f247;
  case 1:
    if (in_CX == (uint ******)0x32) {
      if (*(byte *)((uint)*(byte *)(ppppppuVar46 + 2) * 8 + 0x5c5a) < 0x80) {
        pppppppuStack_a = (uint *******)0xd907;
        FUN_0000_d56a();
        in_CX = (uint ******)FUN_0000_4f84();
      }
    }
    else {
      pppppppuStack_a = (uint *******)in_CX;
      if (in_CX == (uint ******)0x64) {
        FUN_0000_4f84();
        pppppppuStack_a = (uint *******)0xd8d4;
        FUN_0000_54ce();
        pppppppuStack_a = (uint *******)0xd8d8;
        FUN_0000_d224();
                    // WARNING: Subroutine does not return
        pppppppuStack_a = (uint *******)0xd8e2;
        thunk_FUN_0000_8fec();
      }
      if (in_CX == (uint ******)0x96) {
        in_CX = (uint ******)FUN_0000_82ce();
      }
    }
    return (uint *)in_CX;
  case 2:
    *(byte *)0xfe58 = bVar14;
    if ((*(byte *)0x58a2 & 0x20) != 0) {
      FUN_0000_fc94();
      FUN_0000_3270();
      pppppppuStack_a = (uint *******)0x1;
      ppppppuStack_c = (uint ******)0x28;
      pcStack_e = (char *)0xff55;
      FUN_0000_5dce();
    }
    if ((*(byte *)0x58a2 & 0x22) != 0) {
      puVar21 = (uint *)FUN_0000_004c();
      return puVar21;
    }
    if ((puVar21 == (uint *)0x0) || (((uint)puVar21 & 0x20) != 0)) {
      FUN_0000_fc94();
      FUN_0000_3270();
      pbVar6 = (byte *)0x58a2;
      *pbVar6 = *pbVar6 | 1;
      puVar21 = (uint *)FUN_0000_0026();
      return puVar21;
    }
    if ((*(byte *)0x58a2 & 4) != 0) {
      FUN_0000_fc94();
      puVar21 = (uint *)FUN_0000_0022();
      return puVar21;
    }
    if ((*(byte *)0x58a2 & 8) != 0) {
      puVar21 = (uint *)FUN_0000_0026();
      return puVar21;
    }
    FUN_0000_fc94();
    if (((uint)puVar21 & 0x80) == 0) {
      puVar17 = (uint *)func_0x0001977e();
      if ((((puVar17 != (uint *)0x1) && (puVar17 != (uint *)0x2)) && (puVar17 != (uint *)0x3)) &&
         (puVar17 != (uint *)0x4)) goto LAB_1000_0026;
    }
    else if ((param_1 != (uint *)0xff) && (*(char *)((int)param_1 * 8 + -0x45e9) == '-')) {
      FUN_0000_3270();
      pppppppuStack_a = (uint *******)0x1;
      ppppppuStack_c = (uint ******)0x28;
      pcStack_e = (char *)0xffd9;
      FUN_0000_5dce();
      pbVar6 = (byte *)(param_2 * 8 + -0x45ea);
      *pbVar6 = *pbVar6 | 4;
      *(int *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c5b) = 0;
      puVar17 = (uint *)FUN_0000_5506();
      goto LAB_1000_0026;
    }
    puVar21 = (uint *)0x0;
    puVar17 = (uint *)FUN_1000_3270();
LAB_1000_0026:
    if (((uint)puVar21 & 0x80) != 0) {
      func_0x00014320();
      puVar17 = (uint *)FUN_1000_7330();
    }
    pbVar6 = (byte *)0x58a2;
    *pbVar6 = *pbVar6 & 0xf3;
    return puVar17;
  case 3:
    puVar21 = (uint *)0x0;
    bVar14 = func_0x000d4857();
    puVar17 = (uint *)(uint)(byte)(bVar14 + in_stack_00000038._1_1_);
    bVar43 = (byte)(bVar14 + in_stack_00000038._1_1_) == 0;
    if (CARRY1(bVar14,in_stack_00000038._1_1_) || bVar43) goto code_r0x00008790;
    while (!bVar43) {
      puVar21 = param_1;
      if (((int)unaff_SI < iStack_2e) && (iVar18 = FUN_0000_54ce(), iVar18 == 0)) {
        puVar21 = (uint *)(uint)*(byte *)(param_1 + 0xb6a);
      }
      iVar18 = *piStack_36;
      bStack_2c = *(byte *)(iVar18 + 0x1704);
      bStack_30 = *(byte *)(iVar18 + 0x1714);
      pppppppuStack_a = (uint *******)(uint)bStack_2c;
      ppppppuStack_c = (uint ******)(uint)bStack_30;
      pcStack_e = (char *)(uint)*(byte *)0x5895;
      uStack_10 = (uint *)0x878c;
      puVar17 = (uint *)FUN_0000_7f26();
      piStack_36 = piStack_36 + 1;
code_r0x00008790:
      unaff_SI = (uint *)((int)unaff_SI + 1);
      bVar43 = unaff_SI == puVar21;
    }
    return puVar17;
  case 5:
    puVar21 = (uint *)FUN_0000_a380();
    return puVar21;
  case 6:
    pcVar11 = (code *)swi(0xeb);
    (*pcVar11)();
    iVar18 = FUN_0000_63a8();
    if (iVar18 == -1) {
      return (uint *)0x0;
    }
    bVar14 = 0;
    pppppppuStack_a = (uint *******)0x0;
    ppppppuStack_c = (uint ******)0x0;
    pcStack_e = (char *)0x0;
    uStack_10 = (uint *)0xeb84;
    FUN_0000_5494();
    pbVar6 = (byte *)0x24e6;
    *pbVar6 = *pbVar6 | 2;
    if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
      if (*(byte *)0x5888 < 3) {
        *(int *)0x5888 = 0;
      }
      else {
        pcVar5 = (char *)0x5888;
        *pcVar5 = *pcVar5 + -2;
      }
    }
    if (bVar14 < 0x80) goto LAB_0000_ec36;
    FUN_0000_3270();
    FUN_0000_49f0();
    if ((*(byte *)0x5893 < 0x80) || (*(char *)((int)ppppppuStack_c * 0x20 + 0x55b3) != 'D'))
    goto LAB_0000_ec36;
    uVar19 = 0xba14;
    goto LAB_0000_ebe5;
  case 7:
    *(int *)0xfe = unaff_SS;
    *(int **)0xfc = &stack0xfffc;
    *(uint **)0xfa = puVar26;
    *(int *)0xf8 = unaff_DS;
    *(int *)0xf6 = unaff_ES;
    uVar39 = 0;
    piVar33 = (int *)0xf4;
    uRam0000006e = unaff_ES;
    *(int *)0xf4 = 0x904b;
    func_0x000090c1();
    DAT_0000_91a0 = -DAT_0000_91a0;
    if (cRam000090e0 != -1) {
      puVar34 = (int *)((int)piVar33 + -2);
      *(int *)((int)piVar33 + -2) = extraout_DX_00;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      piVar33 = puVar34 + 1;
      *puVar34 = 0x906e;
      FUN_0000_90d4();
    }
    iVar18 = 1;
    for (iVar20 = 0; *(int *)(iVar20 + 6) != -1; iVar20 = iVar20 + 0x10) {
      bVar43 = false;
      if ((*(uint *)(iVar20 + 6) & 0x4000) != 0) {
        piVar33[-1] = iVar20;
        piVar33[-2] = iVar18;
        piVar33[-3] = uVar39;
        uVar39 = 0x8d0;
        piVar33[-4] = 0x9092;
        thunk_FUN_0000_8f97();
        iVar18 = piVar33[-2];
        iVar20 = piVar33[-1];
        if (bVar43) {
          piVar33[-1] = 0x9099;
          FUN_0000_90d4();
        }
      }
      iVar18 = iVar18 + 1;
    }
    iVar18 = *piVar33;
    uVar39 = piVar33[1];
    puVar16 = (int *)piVar33[3];
    uVar40 = 0x1a2;
    pcVar11 = (code *)swi(0x21);
    bVar14 = (*pcVar11)();
    if (bVar14 < 2) {
      pcVar11 = (code *)swi(0x20);
      (*pcVar11)();
    }
    uVar19 = *(int *)0x2 + 0xeefa;
    if (0xfff < uVar19) {
      uVar19 = 0x1000;
    }
    puVar27 = puVar16 + -0x42c2;
    puVar29 = puVar16 + -0x42c2;
    if ((int *)0x42c1 < puVar16) {
      *(int *)(puVar16 + -0x42c4) = 0x1106;
      uVar39 = *(int *)(puVar16 + -0x42c4);
      *(int *)(puVar16 + -0x42c4) = 0x1bc9;
      FUN_0000_1fa6();
      *(int *)(puVar16 + -0x42c4) = 0;
      *(int *)(puVar16 + -0x42c6) = 0x1bcf;
      FUN_0000_1f7d();
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      puVar29 = puVar27;
    }
    puVar28 = (int *)((uint)puVar29 & 0xfffe);
    iRam0001626e = uVar19 * 0x10 + -1;
    puRam00016270 = puVar28;
    puRam00016274 = puVar28;
    *(int *)0x2 = uVar19 + 0x1106;
    iVar20 = -(iVar18 - (uVar19 + 0x1106));
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    uRam000162e5 = uVar39;
    *(int *)(puVar28 + -2) = 0x1106;
    uVar39 = *(int *)(puVar28 + -2);
    puVar16 = (int *)0xa524;
    for (iVar18 = 0x181c; iVar18 != 0; iVar18 = iVar18 + -1) {
      puVar1 = puVar16;
      puVar16 = puVar16 + 1;
      *puVar1 = 0;
    }
    *(int *)(puVar28 + -2) = 0x1106;
    uVar41 = *(int *)(puVar28 + -2);
    puVar30 = puVar28 + -2;
    *(int *)(puVar28 + -2) = 0x1c15;
    while( true ) {
      pcVar11 = (code *)swi(0x21);
      uVar15 = (*pcVar11)();
      *(int *)0x5287 = uVar15;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      *(int *)0x5273 = iVar20;
      *(int *)0x5275 = uVar39;
      *(int *)(puVar30 + -2) = uVar40;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      *(int *)(puVar30 + -2) = 0x1106;
      uVar41 = *(int *)(puVar30 + -2);
      if (*(int *)0x6ad0 == 0) break;
      uVar39 = *(int *)0x5285;
      bVar43 = false;
      iVar20 = 0;
      ppcVar9 = (code **)0x6ace;
      pcVar8 = ppcVar9[1];
      pcVar10 = *ppcVar9;
      *(int *)(puVar30 + -2) = uVar40;
      puVar31 = puVar30 + -4;
      *(int *)(puVar30 + -4) = 0x1c8c;
      (*pcVar10)();
      if (!bVar43) {
        ppcVar9 = (code **)0x6ace;
        pcVar8 = ppcVar9[1];
        pcVar10 = *ppcVar9;
        *(int *)(puVar31 + -2) = uVar40;
        puVar30 = puVar31 + -4;
        *(int *)(puVar31 + -4) = 0x1ca2;
        (*pcVar10)();
        *(int *)(puVar30 + -2) = 0x1106;
        uVar41 = *(int *)(puVar30 + -2);
        break;
      }
      *(int *)(puVar31 + -2) = 0x1106;
      uVar41 = *(int *)(puVar31 + -2);
      *(int *)(puVar31 + -2) = 2;
      *(int *)(puVar31 + -4) = 0x1c45;
      FUN_0000_1fa6();
      *(int *)(puVar31 + -4) = 0x1c48;
      FUN_0000_1f7d();
      *(int *)(puVar31 + -2) = 0xff;
      uVar40 = 0;
      pcVar8 = *(code **)0x5212;
      puVar30 = puVar31 + -4;
      *(int *)(puVar31 + -4) = 0x1c50;
      (*pcVar8)();
    }
    iVar18 = *(int *)0x2c;
    if (iVar18 != 0) {
      pcVar38 = (char *)0x0;
      do {
        bVar43 = *pcVar38 == '\0';
        if (bVar43) break;
        iVar20 = 0xc;
        pcVar37 = (char *)0x5266;
        do {
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar7 = pcVar38;
          pcVar38 = pcVar38 + 1;
          pcVar5 = pcVar37;
          pcVar37 = pcVar37 + 1;
          bVar43 = *pcVar5 == *pcVar7;
        } while (bVar43);
        if (bVar43) {
          *(int *)(puVar30 + -2) = iVar18;
          *(int *)(puVar30 + -4) = uVar41;
          uVar40 = *(int *)(puVar30 + -4);
          uVar39 = *(int *)(puVar30 + -2);
          pcVar37 = (char *)((int)FUN_0000_5288 + 6);
          iVar18 = (int)*pcVar38;
          do {
            pcVar38 = pcVar38 + 1;
            cVar25 = *pcVar38;
            cVar13 = cVar25 + '\x01';
            if (cVar13 != '\0') {
              cVar13 = cVar25;
            }
            pcVar5 = pcVar37;
            pcVar37 = pcVar37 + 1;
            *pcVar5 = cVar13;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
          *(int *)(puVar30 + -2) = 0x1106;
          uVar41 = *(int *)(puVar30 + -2);
          break;
        }
        iVar20 = 0x7fff;
        bVar43 = true;
        do {
          if (iVar20 == 0) break;
          iVar20 = iVar20 + -1;
          pcVar5 = pcVar38;
          pcVar38 = pcVar38 + 1;
          bVar43 = *pcVar5 == '\0';
        } while (!bVar43);
      } while (bVar43);
    }
    iVar18 = 4;
    do {
      pbVar6 = (byte *)((int)FUN_0000_5288 + 6 + iVar18);
      bVar43 = false;
      *pbVar6 = *pbVar6 & 0xbf;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      if ((!bVar43) && ((extraout_DX & 0x80) != 0)) {
        pbVar6 = (byte *)((int)FUN_0000_5288 + 6 + iVar18);
        *pbVar6 = *pbVar6 | 0x40;
      }
      iVar18 = iVar18 + -1;
    } while (-1 < iVar18);
    *(int *)(puVar30 + -2) = 0x1d0a;
    FUN_0000_1dac();
    *(int *)(puVar30 + -2) = 0x1d13;
    puVar21 = (uint *)FUN_0000_1d9d();
    return puVar21;
  case 8:
    goto switchD_0000_ee1d_caseD_1;
  case 9:
  case 0xc:
    *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  case 10:
    goto code_r0x00007513;
  case 0xb:
    if (bVar44) {
      iVar18 = FUN_0000_b650();
      iVar18 = (int)puVar21 + iVar18;
      FUN_0000_9c6a();
      if (iVar18 == 0) {
        FUN_0000_3270();
      }
    }
    else {
      if (puVar26 != (uint *)0x2) {
        return puVar26;
      }
      iVar18 = FUN_0000_b650();
      iVar18 = (int)puVar21 + iVar18;
      FUN_0000_9c6a();
      iVar20 = FUN_0000_b650();
      iVar18 = iVar18 + iVar20;
      FUN_0000_9c6a();
      if (iVar18 == 0) {
        FUN_0000_3270();
      }
    }
    puVar21 = (uint *)FUN_0000_699c();
    return puVar21;
  case 0xd:
    FUN_0000_3270();
    FUN_0000_3270();
    if (uStack_10 == (uint *)0x4e) {
      FUN_0000_3270();
      if (*(byte *)0x5895 < 0x80) {
        pppppppuStack_a = (uint *******)0xe4f0;
        puVar21 = (uint *)FUN_0000_5e22();
        *(int *)puVar21 = 0xb9;
      }
      else {
        pppppppuStack_a = (uint *******)0xe501;
        puVar21 = (uint *)FUN_0000_5e22();
        *(int *)puVar21 = 0xb8;
      }
      pbVar6 = (byte *)0x24e6;
      *pbVar6 = *pbVar6 | 2;
    }
    else {
      if (uStack_10 != (uint *)0xdc) {
        pppppppuStack_a = (uint *******)(uint)*(byte *)0x5895;
        ppppppuStack_c = (uint ******)0xe524;
        puVar21 = (uint *)FUN_0000_dd48();
        if (puVar21 != (uint *)0x0) {
          return puVar21;
        }
      }
      pppppppuStack_a = (uint *******)0xe534;
      puVar21 = (uint *)FUN_0000_ddfa();
      if (puVar21 == (uint *)0x0) {
        pppppppuStack_a = (uint *******)0xe544;
        puVar21 = (uint *)FUN_0000_deb4();
      }
    }
    return puVar21;
  case 0xe:
    *(uint **)0x544a = puVar26;
    *(int *)0x5448 = 0;
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    *(uint **)0x544e = puVar17;
    *(int *)0x544c = unaff_ES;
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    do {
    } while (*(uint *)0x5448 < *(uint *)0x544a);
    pcVar11 = (code *)swi(0x21);
    puVar21 = (uint *)(*pcVar11)();
    return puVar21;
  case 0xf:
    puVar21 = (uint *)in(0x5d);
    return puVar21;
  case 0x10:
    puVar4 = (uint *)((int)puVar17 + (int)unaff_SI);
    *(byte *)puVar4 = *(char *)puVar4 + bVar14;
    *(int *)0x535a = 0;
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    do {
    } while (*(int *)0x535a == 0);
    *(int *)0x535a = 0;
    do {
      piVar2 = (int *)0x5356;
      *piVar2 = *piVar2 + 1;
    } while (*(int *)0x535a == 0);
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    *(int *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
    pcVar11 = (code *)swi(0x12);
    puVar21 = (uint *)(*pcVar11)();
    *(uint **)0x5358 = puVar21;
    return puVar21;
  case 0x11:
    func_0x00003ff8();
    pppppppuStack_a = (uint *******)0x1060;
    ppppppuStack_c = (uint ******)0xb9eb;
    func_0x00003ff8();
    pppppppuStack_a = (uint *******)0x0;
    ppppppuStack_c = (uint ******)0xb9f1;
    FUN_0000_3f3e();
    *(int *)0x5893 = pcStack_e._0_1_;
    *(int *)0xa9be = 0;
    return (uint *)((uint)pcStack_e & 0xff);
  case 0x12:
    puVar4 = (uint *)((int)puVar17 + (int)unaff_SI);
    *(byte *)puVar4 = *(byte *)puVar4 | bVar14;
    puVar4 = (uint *)((int)puVar17 + (int)unaff_SI);
    *(byte *)puVar4 = *(byte *)puVar4 | bVar14;
    puVar4 = (uint *)((int)puVar17 + (int)unaff_SI);
    *(byte *)puVar4 = *(char *)puVar4 + bVar14;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x13:
LAB_0000_f247:
    do {
      pppppppuStack_a = (uint *******)0x20;
      ppppppuStack_c = (uint ******)0xf24e;
      puVar17 = (uint *)FUN_0000_edf8();
      puVar21 = unaff_SI;
      do {
        unaff_SI = (uint *)((int)puVar21 + 1);
        if (6 < (int)unaff_SI) {
          return puVar17;
        }
        pppppppuStack_a = (uint *******)0xf1df;
        puVar17 = (uint *)RANDOM();
        pbVar36 = (byte *)((int)puVar21 + 0x41bd);
        puVar21 = unaff_SI;
      } while (puVar17 < (uint *)(uint)*pbVar36);
      if (unaff_SI == (uint *)0x5) {
        pppppppuStack_a = (uint *******)0xf1f8;
        RANDOM();
      }
      else if (unaff_SI == (uint *)0x6) {
        pppppppuStack_a = (uint *******)0xf211;
        RANDOM();
      }
      else {
        pppppppuStack_a = (uint *******)0xf23a;
        RANDOM();
      }
    } while( true );
  }
  uVar12 = SUB21(puVar21,0);
  *(int *)0x5859 = uVar12;
  *(int *)0x5858 = uVar12;
  *(int *)0x57b2 = uVar12;
  *(int *)0x587e = 1;
  *(int *)((int)FUN_0000_5956 + 3) = uVar12;
  pbVar36 = (byte *)((int)FUN_0000_55be + 1);
  do {
    if (*pbVar36 < 0x19) {
      pbVar6 = pbVar36;
      *pbVar6 = *pbVar6 + 1;
    }
    pbVar36 = pbVar36 + 0x20;
  } while (pbVar36 < (byte *)0x57bf);
  pcVar5 = (char *)0x587d;
  *pcVar5 = *pcVar5 + '\x01';
  if (0xd < *(byte *)0x587d) {
    *(int *)0x587d = 1;
    piVar2 = (int *)0x5874;
    *piVar2 = *piVar2 + 1;
  }
  FUN_0000_4320();
  if (0x32 < *(byte *)0x58a5) goto LAB_0000_6b6a;
  pppppppuStack_a = (uint *******)(uint)*(byte *)0x58a5;
  if ((((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) || (*(byte *)0x587f < 5)) ||
     (0x13 < *(byte *)0x587f)) {
    *(int *)0x58a5 = 2;
  }
  else {
    if (*(char *)0x587f == '\x05') {
      uVar19 = (uint)*(byte *)0x5881;
    }
    else {
      if (*(char *)0x587f != '\x13') {
        *(int *)0x58a5 = 0x32;
        goto LAB_0000_6b35;
      }
      uVar19 = -(*(byte *)0x5881 - 0x3b);
    }
    *(int *)0x58a5 = *(int *)(uVar19 / 10 + 0x6a80);
  }
LAB_0000_6b35:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(int *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(int *)0x58a5 = 10;
  }
  if (pppppppuStack_a != (uint *******)(uint)*(byte *)0x58a5) {
    *(int *)0x24e6 = 1;
  }
LAB_0000_6b6a:
  bVar14 = *(byte *)0x5880;
  puVar21 = (uint *)(uint)bVar14;
  if (*(byte *)0x587f != bVar14) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      puVar21 = (uint *)FUN_0000_64a4();
    }
    if (*(char *)0x587f == '\0') {
      *(int *)0x5884 = 0xc;
    }
    else {
      if (*(byte *)0x587f < 0xd) {
        bVar14 = *(byte *)0x587f;
      }
      else {
        bVar14 = *(char *)0x587f - 0xc;
      }
      puVar21 = (uint *)(uint)bVar14;
      *(byte *)0x5884 = bVar14;
    }
  }
  if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
    puVar21 = (uint *)FUN_0000_8bca();
  }
  return puVar21;
}



void FUN_0000_f13e(void)

{
  byte *pbVar1;
  byte bVar2;
  int uVar3;
  uint uVar4;
  int iVar5;
  int unaff_DS;
  int uVar6;

  FUN_0000_3270(0x8da4);
  bVar2 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5895 * 0x40 + (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7))
  ;
  if ((bVar2 & 0xf0) == 0x40) {
    uVar3 = 0x8daa;
  }
  else {
    if ((bVar2 & 0xf0) == 0x70) {
      pbVar1 = (byte *)((int)FUN_0000_5956 + 4 +
                       (uint)*(byte *)0x5895 * 0x40 +
                       (*(uint *)0x5897 & 7) * 8 + (*(byte *)0x5896 & 7));
      *pbVar1 = *pbVar1 & 8;
      FUN_0000_3270(0x8dbc);
      iVar5 = 0;
      do {
        uVar4 = RANDOM((uint)*(byte *)0x5895 * 4 + 4,1);
        if (*(byte *)(iVar5 + 0x41bc) <= uVar4) {
          if (iVar5 == 5) {
            uVar3 = RANDOM(7,0);
            uVar6 = 3;
          }
          else if (iVar5 == 6) {
            uVar3 = RANDOM(7,0);
            uVar6 = 4;
          }
          else {
            if (iVar5 == 1) {
              uVar4 = (uint)*(byte *)0x5895 << 3;
            }
            else {
              uVar4 = (uint)*(byte *)(iVar5 + 0x41c4);
            }
            uVar3 = RANDOM(uVar4,1);
            uVar6 = *(int *)(iVar5 + 0x41cc);
          }
          FUN_0000_edf8(0x20,uVar3,uVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 7);
      return;
    }
    uVar3 = 0x8dda;
  }
  FUN_0000_3270(uVar3);
  return;
}



void FUN_0000_f50c(void)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_DS;

  *(int *)0x5878 = 0;
  *(int *)0x5876 = 0;
  iVar4 = 0;
  pbVar3 = (byte *)0xba16;
  do {
    if ((*pbVar3 != 0) && ((*pbVar3 & 0x20) == 0)) {
      iVar2 = FUN_0000_7066(iVar4);
      if (iVar2 == 0) {
        piVar1 = (int *)0x5878;
        *piVar1 = *piVar1 + 1;
      }
      else {
        piVar1 = (int *)0x5876;
        *piVar1 = *piVar1 + 1;
      }
    }
    pbVar3 = pbVar3 + 8;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x20);
  return;
}



int FUN_0000_f552(uint param_1,int param_2)

{
  int uVar1;
  int unaff_DS;

  if ((*(byte *)0x587c & 0xf8) == 0x20) {
    FUN_0000_3270(0x8e76);
    return 0;
  }
  if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) != 0) {
    if (*"\x02" == '\0') {
      *(int *)0x58a0 = (int)param_1;
    }
    else if ((param_1 != *(byte *)0x58a0) && ((*(byte *)0x58a1 & 0x80) != 0)) {
      FUN_0000_3270((int)&LAB_0000_8e88);
      FUN_0000_3ce0(200,0xa5);
      return 0;
    }
  }
  *(int *)0x589f = 1;
  FUN_0000_f50c();
  if (*(int *)0x5876 == 0) {
    uVar1 = SUB42(&LAB_0000_8ea6,0);
  }
  else {
    uVar1 = SUB42(&LAB_0000_8eae,0);
  }
  FUN_0000_3270(uVar1);
  FUN_0000_5dce(0x28,1,2000,0x4b0);
  *(int *)0x587b = 0xff;
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec();
}



bool FUN_0000_fa78(int param_1,uint param_2,uint param_3)

{
  int unaff_DS;

  if ((((param_3 < 0x8000) && ((int)param_3 < 0xb)) && (param_2 < 0x8000)) && ((int)param_2 < 0xb))
  {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec(param_3,*(int *)((uint)*(byte *)(param_1 * 8 + -0x45e8) * 8 + 0x5c5a))
    ;
  }
  return (*(byte *)(param_1 * 8 + -0x45ea) & 2) == 0;
}
typedef unsigned char   int;

typedef unsigned char    int1;
typedef unsigned int    int;



void FUN_0000_1c41(void)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  code **ppcVar5;
  code *pcVar6;
  char cVar7;
  int uVar8;
  int iVar9;
  uint extraout_DX;
  int in_BX;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int unaff_ES;
  int unaff_SS;
  int unaff_DS;
  bool bVar13;

  FUN_0000_1fa6();
  FUN_0000_1f7d();
  (**(code **)0x5212)(0xff);
  pcVar6 = (code *)swi(0x21);
  uVar8 = (*pcVar6)();
  *(int *)0x5287 = uVar8;
  pcVar6 = (code *)swi(0x21);
  (*pcVar6)();
  *(int *)0x5273 = in_BX;
  *(int *)0x5275 = unaff_ES;
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



void FUN_0000_1d14(int param_1,int param_2)

{
  code **ppcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;

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



void FUN_0000_1e46(void)

{
  FUN_0000_21f6();
  return;
}



void FUN_0000_1e96(int *param_1)

{
  int unaff_DS;
  int uVar1;

  uVar1 = FUN_0000_224a();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}



void FUN_0000_21e4(void)

{
  FUN_0000_1c41();
  return;
}



void FUN_0000_2256(void)

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



void FUN_0000_22b2(int param_1)

{
  code **ppcVar1;
  code *pcVar2;
  uint uVar3;
  int unaff_DS;

  if (*(int *)0x5352 != 0) {
    if ((param_1 != 0) && (*(int *)FUN_0000_5304 == -1)) {
      pcVar2 = (code *)swi(0x10);
      uVar3 = (*pcVar2)();
      *(uint *)FUN_0000_5304 = uVar3 & 0xff;
    }
    *(int *)0x5350 = 3;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_261c(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 99;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_265c(int param_1,int param_2,int param_3,int param_4)

{
  int unaff_DS;

  *(int *)0x52d0 = param_4;
  *(int *)0x52d4 = param_3;
  *(int *)0x52d2 = param_2;
  *(int *)0x52d6 = param_1;
  return;
}



void FUN_0000_2684(int param_1,int param_2)

{
  code **ppcVar1;
  int unaff_DS;
  bool bVar2;

  *(int *)0x52cc = param_2;
  *(int *)0x52ce = param_1;
  if (*(int *)0x52da != -1) {
    bVar2 = false;
    if ((*(int *)0x52c4 != 0) && (FUN_0000_22ea(), bVar2)) {
      return;
    }
    *(int *)0x5350 = 0x30;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
  }
  return;
}



void FUN_0000_276c(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x4b;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2792(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_DS;
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



void FUN_0000_2800(void)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int uVar7;
  int iVar8;
  int iVar9;
  byte in_BH;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int unaff_DS;
  bool bVar13;

  cVar5 = DAT_f000_fffe;
  uVar7 = 0;
  if (((DAT_f000_fffe != -3) && (DAT_f000_fffe != -1)) && (uVar7 = 2, DAT_f000_fffe != -4)) {
    uVar7 = 6;
  }
  *(int *)0x52ca = uVar7;
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
      *(int *)0x52ca = 3;
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
  *(int *)0x52c8 = uVar7;
  return;
}



int FUN_0000_29ce(void)

{
  code **ppcVar1;
  int uVar2;
  int in_BX;
  int unaff_DS;
  int in_CF;

  uVar2 = FUN_0000_2c7d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      in_BX = -1;
    }
    else if (in_BX != 0) {
      *(int *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)();
      in_BX = 0;
    }
  }
  return in_BX;
}



int FUN_0000_2a14(void)

{
  code **ppcVar1;
  int uVar2;
  int in_BX;
  int unaff_DS;
  int in_CF;

  uVar2 = FUN_0000_2c7d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      uVar2 = 0xffff;
    }
    else {
      *(int *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)();
      uVar2 = 0;
    }
  }
  else {
    *(int *)0x5350 = 0x48;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)();
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_0000_2b00(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x51;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_2b78(void)

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



int FUN_0000_3722(uint param_1)

{
  code **ppcVar1;
  int iVar2;
  int uVar3;
  int unaff_DS;
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
      *(int *)(param_1 * 2 + 0x539c) = uVar3;
      return iVar2;
    }
  }
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)();
  return 0;
}



void FUN_0000_3858(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int unaff_DS;

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
      *(int *)(param_2 + iVar2) = (char)iVar1;
      iVar2 = iVar2 + 1;
      FUN_0000_30da(iVar1);
    }
  } while (iVar1 != 0xd);
  *(int *)(iVar2 + param_2) = 0;
  return;
}



void FUN_0000_396e(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_3997();
  *(int *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



uint FUN_0000_3a76(void)

{
  code *pcVar1;
  int in_CX;
  int extraout_DX;

  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return (CONCAT11((char)((uint)extraout_DX >> 8) << 3,(char)extraout_DX) +
          CONCAT11((char)((uint)in_CX >> 8) << 1,(char)in_CX << 2) ^ 0x91ebU) & 0xfff;
}



void FUN_0000_3ff8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int unaff_DS;

  bVar1 = *(byte *)0xa9bd;
  if ((bVar1 == 3) && (*(char *)(bVar1 + 0xa9c8) == -1)) {
    FUN_0000_3d42();
  }
  FUN_0000_38cc(*(int *)(*(byte *)0xa9bd + 0xa9c8));
  iVar2 = 0;
  while (iVar2 == 0) {
    do {
      iVar2 = FUN_0000_3094(param_3);
    } while (iVar2 == 0);
    *(int *)0x5394 = 0x25ca;
    *(int *)0x5396 = 0x1a2;
    iVar2 = FUN_0000_8cb6(param_1,param_2,param_3);
    *(int *)0x5394 = 0x2322;
    *(int *)0x5396 = 0x1a2;
  }
  *(byte *)0xa9bd = bVar1;
  FUN_0000_38cc(*(int *)(bVar1 + 0xa9c8));
  return;
}



bool FUN_0000_45f4(int param_1,byte param_2)

{
  int unaff_DS;
  bool bVar1;

  bVar1 = ((uint)*(byte *)((int)FUN_0000_54ce + 6 + (param_1 >> 3)) & 0x80 >> ((byte)param_1 & 7))
          == 0;
  if ((((param_2 & 0xfe) != 0x1c) && ((param_2 & 0xf0) != 0x40)) && (((byte)param_1 & 0xfc) == 0x90)
     ) {
    bVar1 = false;
  }
  return bVar1;
}



int FUN_0000_464e(int param_1)

{
  int uVar1;

  if ((param_1 < 4) || (((byte)param_1 & 0xf0) == 0x60)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
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
  int unaff_DS;
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



void FUN_0000_553c(int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int iVar3;
  int unaff_DS;

  iVar3 = 0;
  uVar1 = *(int *)0x538c;
  *(int *)0x538c = 0;
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
      *(int *)(param_2 + iVar3) = (char)iVar2;
      iVar3 = iVar3 + 1;
      FUN_0000_30da(iVar2);
    }
  } while (iVar2 != 0xd);
  *(int *)(iVar3 + param_2) = 0;
  *(int *)0x538c = uVar1;
  return;
}



int FUN_0000_55be(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int unaff_SS;
  int unaff_DS;
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



void FUN_0000_56ba(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int unaff_DS;
  int in_stack_0000ffe2;
  int uVar10;
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
        cVar3 = RANDOM(3,1);
        pcVar1 = (char *)0x5c5f;
        *pcVar1 = *pcVar1 + cVar3;
        if (99 < *(byte *)0x5c5f) {
          *(int *)0x5c5f = 99;
        }
      } while (*(byte *)0x5c5f < 10);
      FUN_0000_3270(0xa2f8);
      FUN_0000_345e(0x20,2,*(int *)0x5c5f);
      FUN_0000_3270((int)&DAT_0000_a302);
      *(int *)0xa9fa = 1;
      goto LAB_0000_5905;
    }
    FUN_0000_3270((int)FUN_0000_a2dc);
    uVar5 = 0xa2ec;
  }
  else {
    FUN_0000_3270((int)&DAT_0000_a306);
    if (*(byte *)0x5893 < 0x21) {
      pbVar4 = (byte *)FUN_0000_5e22(*(int *)0x5897,*(int *)0x5896);
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
          *(int *)0x58a1 = 6;
          FUN_0000_9622();
          FUN_0000_9646();
          FUN_0000_79a6(bVar2 - 0x30,local_8,*(int *)0x58a1);
          FUN_0000_3f3e(2);
          FUN_0000_962e();
          *(int *)0x5c62 = *(int *)0xaa04;
          *(int *)0x5c64 = *(int *)0xaa06;
          *(int *)0x5c66 = *(int *)0xaa08;
          *(int *)0x5c68 = *(int *)0xaa0a;
          FUN_0000_969a(0);
        }
        goto LAB_0000_5905;
      }
      uVar5 = SUB42(&DAT_0000_a322,0);
    }
  }
  FUN_0000_3270(uVar5);
LAB_0000_5905:
  *(int *)0x24e6 = 1;
  return;
}



bool FUN_0000_598e(int param_1,int param_2)

{
  byte bVar1;
  int unaff_DS;

  bVar1 = *(byte *)(param_2 + param_1 * 0x20 + -0x54fe);
  return (0x80 >> (bVar1 & 7) & (uint)*(byte *)(((int)(uint)bVar1 >> 3) + 0x6a14)) != 0;
}



void FUN_0000_59d4(int param_1,int param_2)

{
  uint uVar1;
  int unaff_DS;

  if ((((param_2 < 8) || (0xb7 < param_2)) || (param_1 < 8)) || (0xb7 < param_1)) {
    *(int *)0x5878 = 0xffff;
    *(int *)0x5876 = 0xffff;
  }
  else {
    uVar1 = (int)(param_2 - 8U) >> 0xf;
    *(int *)0x5876 = ((int)((param_2 - 8U ^ uVar1) - uVar1) >> 4 ^ uVar1) - uVar1;
    uVar1 = (int)(param_1 - 8U) >> 0xf;
    *(int *)0x5878 = ((int)((param_1 - 8U ^ uVar1) - uVar1) >> 4 ^ uVar1) - uVar1;
  }
  return;
}



void FUN_0000_5d88(void)

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



int FUN_0000_6796(uint param_1,int param_2)

{
  int iVar1;
  int unaff_DS;

  iVar1 = 0;
  while ((*(char *)(iVar1 + param_2) != '\0' && (*(byte *)(iVar1 + param_2) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



void FUN_0000_680a(int param_1)

{
  int unaff_DS;
  int uVar1;

  uVar1 = *(int *)0x5386;
  FUN_0000_35b4(0,uVar1);
  FUN_0000_3612(10,0x1e);
  FUN_0000_664a();
  FUN_0000_30da(param_1);
  FUN_0000_66ee();
  FUN_0000_35b4(uVar1);
  return;
}



void FUN_0000_7d9e(void)

{
  int unaff_DS;

  FUN_0000_2490(0);
  FUN_0000_24c6(199,0x13f,0,0);
  FUN_0000_2490(*(int *)0x13b2);
  FUN_0000_24c6(6,0x13f,0,0);
  FUN_0000_24c6(0xbf,0xbf,0xb9,0);
  FUN_0000_24c6(0xbf,6,0,0);
  FUN_0000_24c6(0xbf,0xbf,0,0xb9);
  FUN_0000_24c6(0x57,0x13f,0,0x139);
  FUN_0000_24c6(0x57,0x138,0x50,0xc0);
  FUN_0000_24c6(0x3f,0x138,0x39,0xc0);
  FUN_0000_36ea(*(int *)0x13b2);
  FUN_0000_3612(0,0);
  FUN_0000_30da(0x7b);
  FUN_0000_3612(0,0x27);
  FUN_0000_30da(0x7c);
  FUN_0000_3612(0x17,0);
  FUN_0000_30da(0x7d);
  FUN_0000_2490(*(int *)0x13b0);
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
  FUN_0000_36ea(*(int *)0x13b0);
  return;
}



void FUN_0000_82a0(int param_1)

{
  int unaff_DS;

  if (((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) ||
     (*(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55b3) != 'P')) {
    FUN_0000_82ce(param_1);
  }
  return;
}



int FUN_0000_893e(int param_1,int *param_2)

{
  int *piVar1;
  int *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *puVar7;
  int *puVar8;
  int unaff_DS;

  FUN_0000_89b0();
  *(int *)0x6aa4 = param_2;
  FUN_0000_89b0();
  piVar1 = (int *)0x6aa4;
  if (*piVar1 == param_1 || *piVar1 < param_1) {
    *(int *)0x6aa6 = param_1 - *(int *)0x6aa4;
    iVar6 = 0;
    do {
      iVar5 = *(int *)0x6aa4;
      puVar8 = (int *)(param_1 + iVar6);
      puVar7 = param_2;
      while( true ) {
        puVar2 = puVar7;
        puVar7 = puVar7 + 1;
        if (puVar7 == (int *)0x0) {
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



void FUN_0000_8bea(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_2306();
  *(int *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_a2dc(void)

{
  char *pcVar1;
  int uVar2;
  char in_DH;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;

  pcVar1 = (char *)(unaff_SI + 0x21);
  *pcVar1 = *pcVar1 + in_DH;
  if ((*(uint *)(unaff_BP + 4) < 0x30) || (0x39 < *(uint *)(unaff_BP + 4))) {
    uVar2 = FUN_0000_4b98(*(int *)(unaff_BP + 4));
    *(int *)(unaff_BP + -2) = uVar2;
  }
  else {
    uVar2 = FUN_0000_5aa0(*(int *)(unaff_BP + 4));
    *(int *)(unaff_BP + -2) = uVar2;
    *(int *)(unaff_BP + -2) = 0;
  }
  FUN_0000_a3ca();
  return;
}



void FUN_0000_a5d6(void)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  int unaff_DS;
  uint local_4;

  FUN_0000_3270(0x2d61);
  local_4 = 0;
  if (*(char *)0x585b != '\0') {
    pbVar3 = (byte *)0x55b5;
    pcVar2 = (char *)0x55b3;
    do {
      uVar1 = RANDOM(0x1e,1);
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



void FUN_0000_bc70(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_3b1a(1);
  *(int *)0x5350 = 0x69;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_c84e(int param_1)

{
  byte bVar1;
  int unaff_DS;
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



void FUN_0000_ba02(int param_1)

{
  int unaff_DS;

  FUN_0000_35b4(0);
  param_1 = param_1 * 2;
  FUN_0000_3612(*(int *)(param_1 + 0x3656),3);
  FUN_0000_3270(*(int *)(param_1 + 0x3666));
  FUN_0000_35b4(1);
  FUN_0000_3612(*(int *)(param_1 + 0x3656),3);
  FUN_0000_3270(*(int *)(param_1 + 0x3666));
  return;
}



void FUN_0000_ba42(void)

{
  int uVar1;
  int iVar2;
  int unaff_DS;
  int uVar3;

  FUN_0000_36ea(*(int *)0x13b2);
  FUN_0000_3612(0x13,0);
  FUN_0000_30da(0x7b);
  iVar2 = 0x26;
  do {
    FUN_0000_30da(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0000_30da(0x7c);
  iVar2 = 3;
  do {
    FUN_0000_30da(0x7f);
    uVar3 = 0x27;
    uVar1 = FUN_0000_370e(0x27);
    FUN_0000_3612(uVar1,uVar3);
    FUN_0000_30da(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0000_30da(0x7d);
  iVar2 = 0x26;
  do {
    FUN_0000_30da(0x7f);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0000_30da(0x7e);
  FUN_0000_2490(*(int *)0x13b0);
  FUN_0000_2530(0x9f,0x138,0x9f,7);
  FUN_0000_29b0(0xb8,0x138);
  FUN_0000_29b0(0xb8,7);
  FUN_0000_29b0(0x9f,7);
  FUN_0000_36ea(*(int *)0x13b0);
  return;
}



void FUN_0000_bb06(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_DS;

  FUN_0000_2490(*(int *)0x13b2);
  FUN_0000_24c6(0x8f,param_1 + 6,0,param_1);
  iVar1 = param_1 + 0x8f;
  FUN_0000_24c6(0x89,param_1 + 0x97,0,iVar1);
  iVar2 = param_1 + 7;
  FUN_0000_24c6(0x8f,param_1 + 0x96,0x89,iVar2);
  FUN_0000_36ea(*(int *)0x13b2);
  FUN_0000_3612(0,0);
  FUN_0000_3270(0x3676);
  FUN_0000_664a();
  FUN_0000_36ea(*(int *)0x13b0);
  FUN_0000_3270(0x6d3a);
  FUN_0000_36ea(*(int *)0x13b2);
  FUN_0000_66ee();
  FUN_0000_3270(0x367a);
  FUN_0000_30da(0x7c);
  FUN_0000_3612(0x11,0);
  FUN_0000_30da(0x7d);
  FUN_0000_3612(0x11,0x12);
  FUN_0000_30da(0x7e);
  FUN_0000_2490(*(int *)0x13b0);
  FUN_0000_2530(7,iVar2,7,param_1 + 0x18);
  FUN_0000_29b0(0x88,iVar2);
  FUN_0000_29b0(0x88,iVar1);
  FUN_0000_29b0(7,iVar1);
  FUN_0000_29b0(7,param_1 + 0x80);
  FUN_0000_36ea(*(int *)0x13b0);
  return;
}



void FUN_0000_be50(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *puVar4;
  int unaff_BP;
  int unaff_SS;
  int unaff_DS;

  while (piVar1 = (int *)((int)&DAT_0000_fff6 + unaff_BP), *piVar1 = *piVar1 + 1,
        *(int *)((int)&DAT_0000_fff6 + unaff_BP) < 0x10) {
    *(int *)(unaff_BP + -8) = 0;
    while (*(int *)(unaff_BP + -8) < 0x10) {
      bVar2 = *(byte *)((int)FUN_0000_6608 +
                       *(int *)(unaff_BP + -8) +
                       *(int *)(unaff_BP + 6) * 0x100 +
                       *(int *)((int)&DAT_0000_fff6 + unaff_BP) * 0x10);
      if (0x15 < bVar2) {
        if (bVar2 < 0x19) {
          iVar3 = FUN_0000_bcb0(*(int *)(unaff_BP + 4));
          if (iVar3 != 0) {
            puVar4 = (int *)
                     FUN_0000_5e22(*(int *)((int)&DAT_0000_fff6 + unaff_BP) +
                                   *(int *)(unaff_BP + -6),
                                   *(int *)(unaff_BP + -8) + *(int *)(unaff_BP + -4));
            *puVar4 = 0xdf;
          }
        }
        else if (bVar2 == 0x19) {
          iVar3 = FUN_0000_bcfa(*(int *)(unaff_BP + 4));
          if (iVar3 != 0) {
            puVar4 = (int *)
                     FUN_0000_5e22(*(int *)((int)&DAT_0000_fff6 + unaff_BP) +
                                   *(int *)(unaff_BP + -6),
                                   *(int *)(unaff_BP + -8) + *(int *)(unaff_BP + -4));
            *puVar4 = 0x1a;
          }
        }
      }
      piVar1 = (int *)(unaff_BP + -8);
      *piVar1 = *piVar1 + 1;
    }
  }
  return;
}



void FUN_0000_bfdc(void)

{
  int *puVar1;
  int *puVar2;
  int *in_AX;
  int *puVar3;
  uint in_CX;
  uint uVar4;
  int iVar5;
  int in_BX;
  int unaff_BP;
  int *puVar6;
  int unaff_SS;
  int unaff_DS;

  puVar6 = (int *)((int)FUN_0000_6608 + in_BX);
  for (uVar4 = in_CX >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = in_AX;
    in_AX = in_AX + 1;
    *puVar2 = *puVar1;
  }
  for (uVar4 = (uint)((in_CX & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar2 = puVar6;
    puVar6 = (int *)((int)puVar6 + 1);
    puVar1 = in_AX;
    in_AX = (int *)((int)in_AX + 1);
    *(int *)puVar2 = *(int *)puVar1;
  }
  puVar3 = (int *)((int)FUN_0000_6608 + (uint)*(byte *)(unaff_BP + -8) * 0x100);
  *(int *)((int)&DAT_0000_fff6 + unaff_BP) = puVar3;
  puVar6 = (int *)((int)FUN_0000_6608 + CONCAT11(*(int *)(unaff_BP + -4),(char)in_BX));
  for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = *puVar1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar6;
    puVar6 = (int *)((int)puVar6 + 1);
    puVar1 = puVar3;
    puVar3 = (int *)((int)puVar3 + 1);
    *(int *)puVar2 = *(int *)puVar1;
  }
  return;
}



void FUN_0000_c15c(void)

{
  int *piVar1;
  char *pcVar2;
  uint in_AX;
  uint uVar3;
  int iVar4;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  uint uVar5;
  char *pcVar6;
  int unaff_SS;
  int unaff_DS;

  pcVar2 = (char *)(in_BX + unaff_SI + 0x585b);
  *pcVar2 = *pcVar2 + (char)(in_AX >> 8);
  if ((in_AX & 0xff) != 0) {
    pcVar6 = (char *)0x55b3;
    *(int *)(unaff_BP + -8) = 0x55b5;
    uVar5 = *(uint *)(unaff_BP + -2);
    do {
      if (*pcVar6 != 'D') {
        uVar3 = FUN_0000_54de();
        if (**(byte **)(unaff_BP + -8) <= uVar3) {
          FUN_0000_4472(1,uVar5);
        }
      }
      pcVar6 = pcVar6 + 0x20;
      piVar1 = (int *)(unaff_BP + -8);
      *piVar1 = *piVar1 + 0x20;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)0x585b);
    *(uint *)(unaff_BP + -2) = uVar5;
  }
  FUN_0000_5506(2);
  *(int *)0x587c = *(int *)(unaff_BP + -4);
  if ((*(char *)0x5896 == '6') && (*(char *)0x5897 == -0x76)) {
    FUN_0000_3270(0x39c3);
    *(int *)0x5895 = 0xff;
    FUN_0000_3ff8(0x100,0x5c5a,0x39de);
    FUN_0000_3f8e(0,0x100,0x5c5a,0x39e7);
    FUN_0000_3f3e(5);
    do {
      iVar4 = FUN_0000_3094(0x39f1);
    } while (iVar4 == 0);
    FUN_0000_3ff8(0x100,0x5c5a,0x39fb);
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  return;
}



// WARNING: Instruction at (ram,0x0000c2e3) overlaps instruction at (ram,0x0000c2e2)
//

void FUN_0000_c2e2(void)

{
  char cVar1;
  uint uVar2;
  int *puVar3;
  int *unaff_BP;
  char *unaff_SI;
  byte *unaff_DI;
  int unaff_SS;
  int unaff_DS;
  uint local_4;

  puVar3 = (int *)&stack0xfffe;
  cVar1 = '\x05';
  do {
    unaff_BP = unaff_BP + -1;
    puVar3 = puVar3 + -1;
    *puVar3 = *unaff_BP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  do {
    FUN_0000_3270(0x3a1b);
    do {
      unaff_SI = unaff_SI + 0x20;
      unaff_DI = unaff_DI + 0x20;
      local_4 = local_4 + 1;
      if (*(byte *)0x585b <= local_4) {
        return;
      }
    } while (((*unaff_SI == 'D') || (*unaff_SI == 'P')) ||
            (uVar2 = RANDOM(0x1e,1), uVar2 <= *unaff_DI));
    *unaff_SI = 'P';
  } while( true );
}



void FUN_0000_c350(void)

{
  int *piVar1;
  char cVar2;
  int uVar3;
  int *puVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int unaff_BP;
  int *unaff_SI;
  byte *pbVar8;
  byte *pbVar9;
  int unaff_SS;
  int unaff_DS;
  bool bVar10;
  int uVar11;
  int uVar12;

  bVar10 = false;
  while (bVar10) {
    FUN_0000_3bb2(0xd,200,(int)&DAT_0000_1388,1,*unaff_SI);
    unaff_SI = unaff_SI + 1;
    bVar10 = unaff_SI < (int *)0x3a32;
  }
  *(int *)(unaff_BP + -2) = 0x5caa;
  *(int *)0x5cad = 5;
  *(int *)0x5cac = 5;
  *(int *)0x5cab = 0x16;
  *(int *)0x5caa = 0x16;
  FUN_0000_2a88(5,5,0x174);
  *(int *)0x5cab = 0x74;
  *(int *)0x5caa = 0x74;
  *(int *)(unaff_BP + -6) = 0;
  do {
    if ((uint)*(byte *)0x585b <= *(uint *)(unaff_BP + -6)) {
      FUN_0000_3270(0x77e0);
      uVar7 = (uint)(*(byte *)0x5888 / 0x14);
      *(uint *)((int)&DAT_0000_fff6 + unaff_BP) = uVar7;
      if (uVar7 < 4) {
        uVar12 = 0x77e4;
        uVar11 = *(int *)(*(int *)((int)&DAT_0000_fff6 + unaff_BP) * 2 + 0x1a74);
      }
      else {
        uVar12 = 0x77ee;
        uVar11 = 0x29f;
      }
      FUN_0000_3f8e(uVar11,2000,0xb21e,uVar12);
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
    if (*(char *)(*(int *)(unaff_BP + -6) * 0x20 + 0x55b3) != 'D') {
      iVar6 = *(int *)(unaff_BP + -6) * 0x20;
      *(int *)(unaff_BP + -0x12) = iVar6;
      *(int *)(iVar6 + 0x55b8) = *(int *)(iVar6 + 0x55ba);
      *(int *)(iVar6 + 0x55b3) = 0x47;
      iVar6 = 0;
      pbVar9 = (byte *)0xba17;
      pbVar8 = (byte *)0xba18;
      do {
        if ((uint)*pbVar9 == *(uint *)(unaff_BP + -6)) {
          *(int *)(unaff_BP + -2) = (uint)*pbVar8 * 8 + 0x5c5a;
          break;
        }
        pbVar9 = pbVar9 + 8;
        pbVar8 = pbVar8 + 8;
        iVar6 = iVar6 + 1;
      } while (pbVar8 < (byte *)0xbb18);
      *(int *)(unaff_BP + -8) = iVar6;
      iVar6 = FUN_0000_6796(*(int *)(*(int *)(unaff_BP + -6) * 0x20 + 0x55b2),0x7760);
      *(int *)(unaff_BP + -4) = iVar6;
      puVar4 = (int *)*(int *)(unaff_BP + -2);
      uVar3 = *(int *)(iVar6 + 0x1ade);
      puVar4[1] = uVar3;
      *puVar4 = uVar3;
      *(int *)0x5cb0 = 0;
      FUN_0000_5506(1);
      FUN_0000_3bb2(0xd,200,(int)&DAT_0000_1388,1,(int)&DAT_0000_157c);
      FUN_0000_2490(*(int *)0x13b0);
      FUN_0000_25a6(0xb7,0xb7,8,8);
      FUN_0000_3bb2(1,0x9c4,60000,1,(int)&DAT_0000_157c);
      *(int *)(unaff_BP + -8) = 3;
      iVar6 = 3;
      do {
        *(int *)0x5cb0 = 1;
        FUN_0000_5506(1);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      *(int *)(unaff_BP + -0xc) = 1;
      iVar6 = *(int *)(*(int *)(unaff_BP + -6) * 0x20 + 0x55bc) / 100;
      *(int *)(unaff_BP + -8) = iVar6;
      uVar7 = *(uint *)(unaff_BP + -0xc);
      for (; 0 < iVar6; iVar6 = iVar6 >> 1) {
        uVar7 = uVar7 + 1;
      }
      *(uint *)(unaff_BP + -0xc) = uVar7;
      *(int *)(unaff_BP + -8) = iVar6;
      iVar6 = *(int *)(unaff_BP + -6) * 0x20;
      if (*(byte *)((int)FUN_0000_55be + iVar6) != uVar7) {
        *(int *)((int)FUN_0000_55be + iVar6) = *(int *)(unaff_BP + -0xc);
        *(int *)(iVar6 + 0x55ba) = uVar7 * 0x1e;
        *(int *)(iVar6 + 0x55b8) = uVar7 * 0x1e;
        FUN_0000_3270(0x776a);
        FUN_0000_3270(iVar6 + 0x55a8);
        FUN_0000_3270(0x7774);
        FUN_0000_3270(0x77a4);
        FUN_0000_345e(0x20,1,*(int *)(unaff_BP + -0xc));
        FUN_0000_3270(0x77b8);
        iVar6 = RANDOM(3,1);
        if (iVar6 == 1) {
          FUN_0000_3270(0x77c0);
          iVar6 = *(int *)(unaff_BP + -6) * 0x20 + 0x55b4;
LAB_0000_c42f:
          FUN_0000_5910(0x1e,1,iVar6);
        }
        else {
          if (iVar6 == 2) {
            FUN_0000_3270(0x77ca);
            iVar6 = *(int *)(unaff_BP + -6) * 0x20 + 0x55b5;
            goto LAB_0000_c42f;
          }
          if (iVar6 == 3) {
            FUN_0000_3270(0x77d4);
            iVar6 = *(int *)(unaff_BP + -6) * 0x20 + 0x55b6;
            goto LAB_0000_c42f;
          }
        }
        FUN_0000_3270(0x77dc);
        FUN_0000_408c();
        FUN_0000_30da(10);
      }
    }
    cVar2 = *(char *)(*(int *)(unaff_BP + -6) * 0x20 + 0x55b2);
    if (cVar2 == 'A') {
LAB_0000_c496:
      iVar6 = *(int *)(unaff_BP + -6) * 0x20;
      bVar5 = *(byte *)(iVar6 + 0x55b6);
LAB_0000_c4a1:
      *(byte *)(iVar6 + 0x55b7) = bVar5;
    }
    else {
      if (cVar2 == 'B') {
        iVar6 = *(int *)(unaff_BP + -6) * 0x20;
        bVar5 = *(byte *)(iVar6 + 0x55b6) >> 1;
        goto LAB_0000_c4a1;
      }
      if (cVar2 == 'M') goto LAB_0000_c496;
    }
    FUN_0000_4320();
    piVar1 = (int *)(unaff_BP + -6);
    *piVar1 = *piVar1 + 1;
  } while( true );
}



int FUN_0000_c6fa(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int unaff_DS;

  param_2 = param_2 * 0x10;
  iVar3 = *(int *)(param_2 + 0x5f6a) * 8;
  pbVar2 = (byte *)FUN_0000_5e22(*(int *)(iVar3 + 0x5c5d),*(int *)(iVar3 + 0x5c5c));
  bVar1 = *pbVar2;
  if (*(char *)(param_1 + param_2 + 0x5d67) < *(char *)0x5895) {
    if (bVar1 == 0xc9) {
      return 1;
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x5f6a) * 8;
    pbVar2 = (byte *)FUN_0000_5e22(*(int *)(iVar3 + 0x5c5d),*(int *)(iVar3 + 0x5c5c));
    bVar1 = *pbVar2;
    if (bVar1 == 200) {
      return 1;
    }
  }
  if ((bVar1 & 0xf4) == 0xc4) {
    return 1;
  }
  return 0;
}



int FUN_0000_c78c(uint param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  int unaff_DS;
  int uVar3;

  if ((((param_1 < 0x8000) &&
       (iVar2 = param_1 + (int)FUN_0000_5d5e + param_2 * 0x10, *(byte *)(iVar2 + 3) == param_5)) &&
      (*(byte *)(iVar2 + 6) == param_4)) && (*(byte *)(iVar2 + 9) == param_3)) {
    uVar3 = 2;
  }
  else {
    if ((((int)param_5 < 0) || ((int)param_4 < 0)) ||
       ((0x1f < (int)param_5 || (0x1f < (int)param_4)))) {
      bVar1 = *(byte *)0x6a07;
    }
    else {
      bVar1 = *(byte *)((int)FUN_0000_6608 + param_5 + param_4 * 0x20);
    }
    if ((*(int *)(param_2 * 0x10 + 0x5f5e) == 3) && ((bVar1 == 200 || (bVar1 == 0xc9)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = ((uint)*(byte *)((int)FUN_0000_367b + 3 + (uint)(bVar1 >> 3)) & 0x80 >> (bVar1 & 7))
              == 0;
    }
  }
  return uVar3;
}



void FUN_0000_c900(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int uVar2;
  int uVar3;
  uint uVar4;
  int iVar5;
  int unaff_DS;

  uVar4 = RANDOM(0xff,0);
  if ((uVar4 & 8) != 0) {
    uVar4 = FUN_0000_54ce(0x40);
    *(int *)0x5876 = *(int *)(param_5 + 2);
    *(int *)0x5878 = *(int *)(param_5 + 4);
    FUN_0000_c2e2((uVar4 & 3) + 1);
    uVar2 = *(int *)0x5876;
    uVar3 = *(int *)0x5878;
    if (((param_4 == 0) ||
        (iVar5 = FUN_0000_c350(*(int *)0x5878,*(int *)0x5876,
                               *(int *)(param_3 + param_1 + 6),
                               *(int *)(param_3 + param_1 + 3)), iVar5 <= param_4)) &&
       (iVar5 = FUN_0000_c84e(param_3,param_2,*(int *)0x5878,*(int *)0x5876),
       iVar5 != 0)) {
      iVar5 = *(int *)(param_5 + 0xc) * 8;
      *(int *)(param_5 + 2) = uVar2;
      *(int *)(iVar5 + 0x5c5c) = (char)uVar2;
      *(int *)(param_5 + 4) = uVar3;
      *(int *)(iVar5 + 0x5c5d) = (char)uVar3;
      pbVar1 = (byte *)0x24e6;
      *pbVar1 = *pbVar1 | 2;
    }
  }
  return;
}


/*
Unable to decompile 'FUN_0000_c9b0'
Cause: Exception while decompiling 0000:c9b0: Decompiler process died

*/


void FUN_0000_ca64(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int unaff_DS;
  int uVar16;
  int uVar17;
  int local_14;
  int local_10;
  uint local_c;
  uint local_a;
  int local_6;
  uint local_4;

  local_14 = 0;
  *(int *)0x65be = 0;
  *(int *)0x65bf = 0;
  local_4 = 1;
  do {
    if (0x1f < (int)local_4) {
      return;
    }
    if (*(char *)(local_4 + 0x659e) != '\0') {
      iVar11 = FUN_0000_cf90(param_1,local_4);
      iVar12 = local_4 * 0x10;
      piVar13 = (int *)(iVar12 + 0x5f5e);
      if ((*piVar13 < 2) && (iVar14 = func_0x0000c5e8(param_1,local_4), iVar14 == 0)) {
        if (*(uint *)(iVar12 + 0x5f64) == (uint)*(byte *)0x5895) {
LAB_0000_cf11:
          FUN_0000_c9b0(iVar11,local_4);
        }
      }
      else {
        iVar14 = *piVar13;
        if (iVar14 < 4) {
          iVar14 = local_4 * 2;
          if ((*(uint *)(iVar14 + 0x655e) < 0x8000) &&
             (iVar15 = local_4 * 0x20,
             *(char *)(*(int *)(iVar14 + 0x655e) + iVar15 + 0x615e) != '\0')) {
            *(int *)0x5876 = *(int *)(iVar12 + 0x5f60);
            *(int *)0x5878 = *(int *)(iVar12 + 0x5f62);
            FUN_0000_c2e2(*(int *)(*(int *)(iVar14 + 0x655e) + iVar15 + 0x615f));
            local_a = *(uint *)0x5876;
            local_c = *(uint *)0x5878;
            iVar7 = FUN_0000_c84e(iVar11,local_4,local_c,*(int *)0x5876);
            if (iVar7 == 0) {
              iVar12 = local_4 * 2;
              piVar3 = (int *)(iVar12 + 0x65c2);
              *piVar3 = *piVar3 + 1;
              FUN_0000_c900((int)FUN_0000_5d5e + local_4 * 0x10,local_4,iVar11,0,
                            local_4 * 0x10 + 0x5f5e);
              if (3 < *(int *)(iVar12 + 0x65c2)) {
                *(int *)(iVar12 + 0x655e) = 0xffff;
LAB_0000_cd86:
                *(int *)(local_4 * 2 + 0x65c2) = 0;
              }
            }
            else {
              iVar8 = *(int *)(iVar12 + 0x5f6a) * 8;
              *(int *)(iVar8 + 0x5c5c) = (int)local_a;
              *(uint *)(iVar12 + 0x5f60) = local_a & 0xff;
              *(int *)(iVar8 + 0x5c5d) = (int)local_c;
              *(uint *)(iVar12 + 0x5f62) = local_c & 0xff;
              pbVar1 = (byte *)0x24e6;
              *pbVar1 = *pbVar1 | 2;
              pcVar9 = (char *)(*(int *)(iVar14 + 0x655e) + iVar15 + 0x615e);
              pcVar2 = pcVar9;
              *pcVar2 = *pcVar2 + -1;
              *(int *)(iVar14 + 0x65c2) = 0;
              if (*pcVar9 == '\0') {
                piVar3 = (int *)(iVar14 + 0x655e);
                *piVar3 = *piVar3 + 1;
                iVar8 = *(int *)(iVar14 + 0x655e);
                piVar3 = (int *)(iVar14 + 0x655e);
                *piVar3 = *piVar3 + 1;
                *(int *)(iVar8 + iVar15 + 0x615e) = 0;
                if ((0x1f < *(int *)(iVar14 + 0x655e)) ||
                   (*(char *)(*(int *)(iVar14 + 0x655e) + iVar15 + 0x615e) == '\0')) {
                  *(int *)(local_4 * 2 + 0x655e) = 0xffff;
                }
                if (iVar7 == 2) {
                  *(int *)(iVar12 + 0x5f6c) = iVar11;
                  *piVar13 = 1;
                  *(int *)(local_4 * 2 + 0x655e) = 0xffff;
                }
              }
            }
          }
          else {
            if ((*(int *)(local_4 * 2 + 0x655e) == -1) && (*piVar13 == 3)) {
              iVar11 = FUN_0000_cf90(param_1,local_4);
              cVar4 = *(char *)0x5895;
              pcVar2 = (char *)(iVar11 + local_4 * 0x10 + 0x5d67);
              if (*pcVar2 != cVar4 && cVar4 <= *pcVar2) {
                *piVar13 = 6;
                return;
              }
              *piVar13 = 7;
              return;
            }
            if (local_14 < 1) {
              if (*piVar13 != 1) {
                iVar14 = *(int *)(local_4 * 2 + 0x65c2);
                if ((iVar14 < 200) && ((iVar14 == 0 || (iVar14 = RANDOM(2,0), iVar14 == 1))))
                {
                  if (*(int *)(local_4 * 2 + 0x655e) == -1) {
                    local_14 = local_14 + 1;
                    iVar14 = local_4 * 0x10 + iVar11;
                    uVar17 = *(int *)(iVar12 + 0x5f60);
                    uVar16 = *(int *)(iVar12 + 0x5f62);
                    uVar6 = (uint)*(byte *)(iVar14 + 0x5d61);
                    uVar10 = (uint)*(byte *)(iVar14 + 0x5d64);
                    iVar12 = FUN_0000_bfdc(local_4,0);
                    if (iVar12 != 0) {
                      FUN_0000_c15c(*(int *)(iVar14 + 0x5d64),*(int *)(iVar14 + 0x5d61),
                                    0,local_4,uVar10,uVar6,uVar16,uVar17);
                      goto LAB_0000_cd86;
                    }
                    *(int *)(local_4 * 2 + 0x65c2) = 200;
                  }
                  FUN_0000_c900((int)FUN_0000_5d5e + local_4 * 0x10,local_4,iVar11,0,
                                local_4 * 0x10 + 0x5f5e);
                }
                else {
                  piVar13 = (int *)(local_4 * 2 + 0x65c2);
                  if (199 < *piVar13) {
                    piVar3 = piVar13;
                    *piVar3 = *piVar3 + 1;
                  }
                  piVar13 = (int *)(local_4 * 2 + 0x65c2);
                  if (0xcc < *piVar13) {
                    *piVar13 = 0;
                  }
                }
              }
            }
            else if (*(uint *)(iVar12 + 0x5f64) == (uint)*(byte *)0x5895) {
              iVar11 = *(int *)(iVar12 + 0x5f6c);
              goto LAB_0000_cf11;
            }
          }
        }
        else if ((iVar14 == 4) || (iVar14 == 5)) {
          if (local_14 != 1) {
            local_14 = 1;
            if (*piVar13 == 4) {
              local_6 = 3;
            }
            else {
              local_6 = 4;
            }
            iVar12 = local_4 * 0x10 + iVar11;
            uVar6 = local_4;
            local_10 = FUN_0000_be50(local_4,local_6 == 3,*(int *)(iVar12 + 0x5d64),
                                     *(int *)(iVar12 + 0x5d61));
            if (local_10 != 0) {
              local_a = *(uint *)0x5876;
              local_c = *(uint *)0x5878;
              uVar6 = (uint)*(byte *)(iVar12 + 0x5d64);
              local_10 = FUN_0000_bfdc(local_4,local_6);
            }
            if (local_10 != 0) {
              iVar11 = local_4 * 0x10 + iVar11;
              FUN_0000_c15c(uVar6,*(int *)(iVar11 + 0x5d61),local_6,local_4,
                            *(int *)(iVar11 + 0x5d64));
              bVar5 = *(byte *)((int)FUN_0000_6608 + local_a + local_c * 0x20);
              if ((((local_6 == 3) && (bVar5 == 200)) || ((local_6 == 4 && (bVar5 == 0xc9)))) ||
                 ((bVar5 & 0xfc) == 0xc4)) {
                    // WARNING: Subroutine does not return
                thunk_FUN_0000_8fec(local_c,local_a,local_4);
              }
              *piVar13 = 2;
            }
          }
        }
        else {
          iVar14 = *piVar13;
          if (((iVar14 != 6) && (iVar14 != 7)) ||
             (iVar14 = FUN_0000_c6fa(iVar11,local_4), iVar14 != 0)) {
            iVar11 = local_4 * 0x10 + iVar11;
                    // WARNING: Subroutine does not return
            thunk_FUN_0000_8fec(*(int *)(iVar11 + 0x5d64),*(int *)(iVar11 + 0x5d61),
                                local_4);
          }
          iVar11 = *piVar13;
          if ((iVar11 != 2) && (local_14 != 1)) {
            local_14 = 1;
            if (iVar11 == 6) {
              local_6 = 1;
            }
            else {
              local_6 = 2;
            }
            uVar6 = local_4;
            local_10 = FUN_0000_be50(local_4,local_6 == 1,*(int *)(iVar12 + 0x5f62),
                                     *(int *)(iVar12 + 0x5f60));
            if (local_10 != 0) {
              local_a = *(uint *)0x5876;
              local_c = *(uint *)0x5878;
              uVar6 = local_c;
              local_10 = FUN_0000_bfdc(local_4,local_6);
            }
            if (local_10 != 0) {
              FUN_0000_c15c(uVar6,local_a,local_6,local_4,local_c);
              *piVar13 = 3;
            }
          }
        }
      }
    }
    local_4 = local_4 + 1;
  } while( true );
}



int FUN_0000_cf90(char param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int uVar3;
  byte bVar4;
  int unaff_DS;

  param_2 = param_2 * 0x10;
  bVar1 = param_1 - *(char *)(param_2 + 0x5d6a);
  bVar2 = param_1 - *(char *)(param_2 + 0x5d6b);
  bVar4 = param_1 - *(char *)(param_2 + 0x5d6c);
  uVar3 = bVar2 < bVar1;
  if ((bool)uVar3) {
    bVar1 = bVar2;
  }
  if (bVar4 < bVar1) {
    uVar3 = 2;
    bVar1 = bVar4;
  }
  if ((byte)(param_1 - *(char *)(param_2 + 0x5d6d)) < bVar1) {
    uVar3 = 1;
  }
  return uVar3;
}
