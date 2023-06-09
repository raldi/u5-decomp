typedef unsigned char   undefined;

typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned int    undefined2;
typedef unsigned int    word;
typedef struct OLD_IMAGE_DOS_RELOC OLD_IMAGE_DOS_RELOC, *POLD_IMAGE_DOS_RELOC;

struct OLD_IMAGE_DOS_RELOC {
    word offset;
    word segment;
};

typedef struct OLD_IMAGE_DOS_HEADER OLD_IMAGE_DOS_HEADER, *POLD_IMAGE_DOS_HEADER;

struct OLD_IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
};




void FUN_1000_02f4(undefined2 param_1,undefined2 param_2)

{
  code **ppcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  FUN_1000_037d();
  FUN_1000_037d();
  FUN_1000_037d();
  FUN_1000_038c();
  FUN_1000_07a2();
  iVar3 = 0xf;
  iVar4 = 5;
  do {
    if ((*(byte *)(iVar4 + 0x528e) & 1) != 0) {
      pcVar2 = (code *)swi(0x21);
      (*pcVar2)();
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_1000_0350();
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



void __cdecl16near FUN_1000_0350(undefined2 param_1)

{
  code **ppcVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  
  if (*(int *)0x6ad0 != 0) {
    ppcVar1 = (code **)0x6ace;
    (**ppcVar1)(0x1000);
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (*(char *)0x52b0 != '\0') {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
  }
  return;
}



void __cdecl16near FUN_1000_037d(void)

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



void __cdecl16near FUN_1000_038c(void)

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
      (**ppcVar2)(0x1000);
    }
  }
  return;
}



char * __cdecl16near FUN_1000_0402(char *param_1,char param_2,int param_3)

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



void FUN_1000_0426(void)

{
  FUN_1000_07d6();
  return;
}



void FUN_1000_0476(undefined2 *param_1)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_1000_082a();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  return;
}



int * FUN_1000_0532(int param_1)

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



void FUN_1000_055d(undefined2 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 unaff_ES;
  
  pcVar3 = (char *)FUN_1000_0532(param_1);
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



void __cdecl16near FUN_1000_0586(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_055d(0xfc);
  if (*(int *)0x52b6 != 0) {
    (**(code **)0x52b6)();
  }
  FUN_1000_055d(0xff);
  return;
}



uint __cdecl16near FUN_1000_07a2(void)

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
    FUN_1000_0586();
    FUN_1000_055d(1);
    uVar3 = 1;
  }
  return uVar3;
}



byte * __cdecl16near FUN_1000_07d6(void)

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



void __cdecl16near FUN_1000_082a(void)

{
  uint in_CX;
  uint uVar1;
  
  for (uVar1 = in_CX & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
  }
  return;
}



void __cdecl16near FUN_1000_0892(int param_1)

{
  code **ppcVar1;
  code *pcVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0x5352 != 0) {
    if ((param_1 != 0) && (*(int *)0x5304 == -1)) {
      pcVar2 = (code *)swi(0x10);
      uVar3 = (*pcVar2)();
      *(uint *)0x5304 = uVar3 & 0xff;
    }
    *(undefined2 *)0x5350 = 3;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
  }
  return;
}



void __cdecl16near FUN_1000_08ca(void)

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



void __cdecl16near FUN_1000_08e6(void)

{
  return;
}



undefined2 __cdecl16near FUN_1000_0935(void)

{
  undefined2 uVar1;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 uVar2;
  uint unaff_SI;
  uint unaff_DI;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  uVar3 = FUN_1000_0a22();
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
    uVar1 = FUN_1000_0991();
    *(undefined2 *)0x52fa = uVar1;
    *(undefined2 *)0x52fc = uVar2;
    in_BX = uVar2;
  }
  if (unaff_DI != 0) {
    uVar1 = FUN_1000_0991();
    *(undefined2 *)0x52fe = uVar1;
    *(undefined2 *)0x5300 = in_BX;
  }
  return *(undefined2 *)0x52fa;
}



void __cdecl16near FUN_1000_0991(void)

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
      uVar5 = FUN_1000_0a22();
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



void __cdecl16near FUN_1000_0a22(void)

{
  return;
}



void FUN_1000_0a70(uint param_1)

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
    (**ppcVar1)(0x1000);
  }
  return;
}



void FUN_1000_0aa6(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_08e6();
  *(undefined2 *)0x5350 = 0x3f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



undefined2 FUN_1000_0ace(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  undefined2 param_4;
  uint param_5;
  uint param_6;
  
  if (((param_6 != param_5) && (param_6 < 2)) && (param_5 < 2)) {
    FUN_1000_08e6();
    *(undefined2 *)0x5350 = 0x18;
    ppcVar1 = (code **)0x5350;
    param_4 = (**ppcVar1)(0x1000);
  }
  return param_4;
}



void FUN_1000_0b10(void)

{
  FUN_1000_0b2d();
  return;
}



void __cdecl16near FUN_1000_0b2d(void)

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
    uVar3 = FUN_1000_0935((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 |
                          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                          (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
    if (bVar2) {
      return;
    }
  }
  if (in_BX == (int)((ulong)uVar3 >> 0x10)) {
    if ((int)uVar3 != in_CX) {
      FUN_1000_08e6();
      *(undefined2 *)0x5350 = 0x39;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)(0x1000);
      return;
    }
    *(undefined2 *)0x5350 = 0x30;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
    return;
  }
  if ((int)uVar3 == in_CX) {
    FUN_1000_08e6();
    *(undefined2 *)0x5350 = 0x3c;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
    return;
  }
  *(undefined2 *)0x5350 = 0x33;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_0b86(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_08e6();
  *(undefined2 *)0x5350 = 0x3f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_0bfc(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 99;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_0c22(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0xf;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_0c3c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x52d0 = param_4;
  *(undefined2 *)0x52d4 = param_3;
  *(undefined2 *)0x52d2 = param_2;
  *(undefined2 *)0x52d6 = param_1;
  return;
}



void FUN_1000_0c64(undefined2 param_1,undefined2 param_2)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x52cc = param_2;
  *(undefined2 *)0x52ce = param_1;
  if (*(int *)0x52da != -1) {
    bVar2 = false;
    if ((*(int *)0x52c4 != 0) && (FUN_1000_08ca(), bVar2)) {
      return;
    }
    *(undefined2 *)0x5350 = 0x30;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
  }
  return;
}



void FUN_1000_0c9c(undefined2 param_1)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x52cc = param_1;
  bVar2 = false;
  if ((*(int *)0x52c4 != 0) && (FUN_1000_0ccd(), bVar2)) {
    return;
  }
  *(undefined2 *)0x5350 = 0x39;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void __cdecl16near FUN_1000_0ccd(void)

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



void FUN_1000_0cf2(undefined2 param_1)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  
  *(undefined2 *)0x52ce = param_1;
  bVar2 = false;
  if ((*(int *)0x52c4 == 0) || (FUN_1000_0d2b(), !bVar2)) {
    *(undefined2 *)0x5350 = 0x3c;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
  }
  return;
}



void __cdecl16near FUN_1000_0d2b(void)

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



void FUN_1000_0d4c(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x4b;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_0d72(undefined2 param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 unaff_DS;
  int *local_a;
  int local_4;
  
  local_4 = 0;
  FUN_1000_0c22(1);
  FUN_1000_0a70(0);
  FUN_1000_0aa6(199,0x13f,0,0);
  iVar1 = 0;
  piVar2 = (int *)0x5306;
  local_a = (int *)0x5314;
  do {
    FUN_1000_1044(local_4,0x140 - *piVar2 >> 1,iVar1,param_1);
    local_4 = local_4 + *local_a;
    piVar2 = piVar2 + 1;
    local_a = local_a + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 7);
  FUN_1000_0c22(0);
  FUN_1000_1140();
  return;
}



void __cdecl16near FUN_1000_0de0(void)

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
      pcVar11 = (char *)0xa000;
      iVar8 = 0x5fff;
code_r0x00010e1e:
      do {
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          pcVar1 = pcVar11;
          pcVar11 = pcVar11 + 1;
          bVar13 = *pcVar1 == 'T';
          if (!bVar13) goto code_r0x00010e1e;
        }
        if (!bVar13) goto LAB_1000_0e3c;
        pcVar10 = (char *)0x5322;
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
      goto LAB_1000_0e8b;
    }
LAB_1000_0e3c:
    iVar8 = -1;
    pcVar3 = (code *)swi(0x10);
    (*pcVar3)();
    if (iVar8 != -1) {
      bVar4 = in_BH & 1 ^ 1;
      if (bVar4 == 0) {
        uVar7 = 0xffff;
        goto LAB_1000_0e8b;
      }
      if (bVar4 == 1) {
        uVar7 = 1;
        goto LAB_1000_0e8b;
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
          goto LAB_1000_0e8b;
        }
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  uVar7 = 0;
LAB_1000_0e8b:
  *(undefined2 *)0x52c8 = uVar7;
  return;
}



void FUN_1000_0f6e(int param_1,int param_2)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  if (param_2 != param_1) {
    *(undefined2 *)0x5350 = 0x1b;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
  }
  return;
}



void FUN_1000_0f90(void)

{
  FUN_1000_0b2d();
  return;
}



int FUN_1000_0fae(void)

{
  code **ppcVar1;
  undefined2 uVar2;
  int in_BX;
  undefined2 unaff_DS;
  undefined in_CF;
  
  uVar2 = FUN_1000_125d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      in_BX = -1;
    }
    else if (in_BX != 0) {
      *(undefined2 *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)(0x1000);
      in_BX = 0;
    }
  }
  return in_BX;
}



undefined2 FUN_1000_0ff4(void)

{
  code **ppcVar1;
  undefined2 uVar2;
  int in_BX;
  undefined2 unaff_DS;
  undefined in_CF;
  
  uVar2 = FUN_1000_125d();
  if ((bool)in_CF) {
    if (in_BX == 0) {
      uVar2 = 0xffff;
    }
    else {
      *(undefined2 *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)(0x1000);
      uVar2 = 0;
    }
  }
  else {
    *(undefined2 *)0x5350 = 0x48;
    ppcVar1 = (code **)0x5350;
    (**ppcVar1)(0x1000);
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_1000_1044(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x4e;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



undefined2 FUN_1000_1068(void)

{
  code **ppcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0;
  while( true ) {
    do {
      *(undefined2 *)0x5350 = 0x66;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)(0x1000);
      *(undefined2 *)0x5350 = 0x66;
      ppcVar1 = (code **)0x5350;
      (**ppcVar1)(0x1000);
      uVar2 = uVar2 + 2;
      if (uVar2 == 0x100) {
        return 0;
      }
    } while ((uVar2 & 7) != 0);
    if (*(char *)0x5893 == 'B') break;
    FUN_1000_5910();
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_172e_02ec();
}



void FUN_1000_10e0(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x51;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_1112(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x60;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void __cdecl16near FUN_1000_1140(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6f;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void __cdecl16near FUN_1000_1158(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_1184();
  FUN_1000_1226();
  FUN_1000_11b4();
  return;
}



void __cdecl16near FUN_1000_1184(void)

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



void __cdecl16near FUN_1000_11b4(void)

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



void __cdecl16near FUN_1000_1226(void)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x53a4 = 0;
  *(undefined2 *)0x53a6 = 0;
  *(undefined2 *)0x53a8 = 0;
  return;
}



int __cdecl16near FUN_1000_125d(int param_1)

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
  
  FUN_1000_1588();
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
        iVar5 = FUN_1000_15c6();
        if ((bool)in_CF) {
          *(undefined2 *)0x53ba = 0xffff;
        }
        else {
          *(int *)0x53ba = iVar5;
          *(int *)0x53bc = iVar5;
          iVar5 = FUN_1000_15c6();
          if ((bool)in_CF) {
            *(undefined2 *)0x53ba = 0xffff;
          }
          else {
            *(int *)0x53be = iVar5;
            FUN_1000_135a();
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
LAB_1000_124a:
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
  uVar10 = FUN_1000_1654(extraout_DX);
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
    uVar4 = FUN_1000_15c6();
    if (bVar8) goto LAB_1000_124a;
    uVar4 = FUN_1000_160e(uVar4);
    if (!bVar8) {
      return iVar5;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)(uVar4);
    iVar5 = param_1;
  }
  return iVar5;
}



void __cdecl16near FUN_1000_135a(undefined2 param_1)

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



void __cdecl16near FUN_1000_1588(void)

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



undefined2 __cdecl16near FUN_1000_15c6(void)

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



undefined2 __cdecl16near FUN_1000_160e(undefined2 param_1,undefined2 param_2)

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
  uVar3 = FUN_1000_1649();
  if (((!bVar4) && (unaff_DS <= uVar3)) && (unaff_DS == 0xffff)) {
    FUN_1000_1649();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return param_2;
}



void __cdecl16near FUN_1000_1649(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



undefined2 __cdecl16near FUN_1000_1654(void)

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



bool FUN_1000_1674(void)

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
    (**ppcVar1)(0x1000);
  }
  else {
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    *(undefined2 *)0x535c = 0;
  }
  return !(bool)in_CF;
}



char __cdecl16near FUN_1000_16a6(void)

{
  code *pcVar1;
  char cVar2;
  
  pcVar1 = (code *)swi(0x21);
  cVar2 = (*pcVar1)();
  return cVar2 + 'A';
}



void FUN_1000_16ba(uint param_1)

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
      (**ppcVar7)(0x1000);
      FUN_1000_1f77();
      *(undefined2 *)0x5350 = 0x3f;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)(0x1000);
      *(undefined2 *)0x5350 = 0x2d;
      ppcVar7 = (code **)0x5350;
      (**ppcVar7)(0x1000);
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
    if (bVar9 == 0xd) goto LAB_1000_1745;
    puVar12 = (undefined2 *)(param_1 * 8);
    if (*(int *)0x52c8 == 3) {
      puVar12 = (undefined2 *)(param_1 * 0x18);
    }
    uVar6 = *(undefined2 *)0x5398;
    FUN_1000_17f4();
    *(undefined2 *)0x5350 = 0x5d;
    ppcVar7 = (code **)0x5350;
    (**ppcVar7)(0x1000);
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
LAB_1000_1745:
  pcVar11[4] = '\0';
  if (pcVar11[3] < (char)(pcVar11[5] + pcVar11[1])) {
    FUN_1000_1f77();
    pcVar1 = pcVar11 + 5;
    *pcVar1 = *pcVar1 + -1;
    *(undefined2 *)0x5350 = 0x27;
    ppcVar7 = (code **)0x5350;
    (**ppcVar7)(0x1000);
  }
  return;
}



void __cdecl16near FUN_1000_17f4(void)

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



void FUN_1000_1850(char *param_1)

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
        FUN_1000_16ba(10);
      }
      local_14 = 0;
      local_6 = 0;
      local_4 = 0;
      iVar2 = FUN_1000_1f12();
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
          FUN_1000_16ba(param_1[iVar1]);
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
              FUN_1000_16ba(10);
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
          if (local_10 < local_c) goto LAB_1000_19d2;
        }
        else {
LAB_1000_19d2:
          local_c = local_c + -1;
        }
        if (local_1a != 0) {
          if (local_44 < local_c) {
            FUN_1000_16ba(10);
          }
          iVar1 = (local_10 - local_c) / 2;
          uVar3 = FUN_1000_1cee(iVar1);
          FUN_1000_1bf2(uVar3,iVar1);
        }
        iVar1 = local_c;
        iVar2 = local_14;
        if (local_6 != 0) {
          for (; local_42[local_14] == ' '; local_14 = local_14 + 1) {
          }
          iVar2 = local_14;
        }
        for (; iVar2 <= iVar1; iVar2 = iVar2 + 1) {
          FUN_1000_16ba(local_42[iVar2]);
        }
      }
      local_e = iVar2;
    } while (local_a == 0);
  }
  return;
}



void FUN_1000_1a3e(char param_1,int param_2,int param_3)

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
  FUN_1000_1850(local_2a);
  return;
}



void __cdecl16near FUN_1000_1b16(void)

{
  FUN_1000_1b24();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl16near FUN_1000_1b24(void)

{
  _DAT_0000_041a = 0x1e;
  _DAT_0000_041c = 0x1e;
  return;
}



int __cdecl16near FUN_1000_1b38(void)

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
  FUN_1000_16ba(iVar4 + iVar3);
  iVar4 = FUN_1000_1d5e();
  if (*(int *)0x5392 <= *(int *)0x540c) {
    *(undefined2 *)0x540c = 0;
  }
  if (iVar4 == 0) {
    FUN_1000_20fa(1);
  }
  else {
    FUN_1000_16ba(0x20);
  }
  *(undefined2 *)0x538e = uVar2;
  return iVar4;
}



void FUN_1000_1b94(uint param_1)

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



void FUN_1000_1bf2(char param_1,char param_2)

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



void FUN_1000_1c22(undefined2 param_1,undefined param_2,undefined param_3,undefined2 param_4,
                  uint param_5)

{
  undefined uVar1;
  undefined extraout_DL;
  int iVar2;
  undefined2 unaff_DS;
  
  if (param_5 < 4) {
    iVar2 = param_5 * 8;
    uVar1 = FUN_1000_1c5b();
    *(undefined *)(iVar2 + 0x535e) = uVar1;
    *(undefined *)(iVar2 + 0x535f) = param_3;
    *(undefined *)(iVar2 + 0x5360) = param_2;
    *(undefined *)(iVar2 + 0x5361) = extraout_DL;
  }
  return;
}



void __cdecl16near FUN_1000_1c5b(void)

{
  return;
}



void FUN_1000_1c9e(uint param_1)

{
  undefined2 unaff_DS;
  
  if ((param_1 < 4) && (*(int *)(param_1 * 2 + 0x539c) != 0)) {
    *(undefined2 *)0x5398 = *(undefined2 *)(param_1 * 2 + 0x539c);
    *(uint *)0x5388 = param_1 & 0x7fff;
  }
  return;
}



void FUN_1000_1cca(byte param_1)

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



undefined __cdecl16near FUN_1000_1cee(void)

{
  undefined2 unaff_DS;
  
  return *(undefined *)(*(int *)0x539a + 5);
}



int FUN_1000_1d02(uint param_1)

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
  iVar2 = FUN_1000_1654();
  if (!bVar4) {
    bVar4 = false;
    if (iVar2 != 0) {
      bVar4 = (iVar2 - 1U >> 3 & 1) != 0;
    }
    uVar3 = FUN_1000_15c6();
    if (bVar4) {
      return -1;
    }
    FUN_1000_160e();
    if (!bVar4) {
      *(undefined2 *)(param_1 * 2 + 0x539c) = uVar3;
      return iVar2;
    }
  }
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)(0x1000);
  return 0;
}



uint __cdecl16near FUN_1000_1d5e(void)

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
        if (bVar3 == *(byte *)(iVar5 + 0x540e)) goto LAB_1000_1db8;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 8);
      if (iVar5 == 8) {
        return 0;
      }
LAB_1000_1db8:
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
    uVar4 = FUN_1000_1b24();
  }
  return uVar4;
}



int FUN_1000_1dda(int param_1)

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
    iVar1 = FUN_1000_1b38();
    if (param_1 != 0) {
      local_4 = local_4 + 1;
    }
  } while ((local_4 < param_1) && (iVar1 == 0));
  if (1 < param_1) {
    *(undefined2 *)0x5356 = local_6;
  }
  return iVar1;
}



void FUN_1000_1e38(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_1000_1dda(0);
    if (((iVar1 == 8) || (iVar1 == 1)) && (iVar2 != 0)) {
      FUN_1000_1fa0(1);
      iVar2 = iVar2 + -1;
    }
    else if ((iVar1 == 0x1b) && (iVar2 != 0)) {
      FUN_1000_1fa0(iVar2);
      iVar2 = 0;
    }
    else if ((0x1f < iVar1) && ((iVar1 < 0x80 && (iVar2 < param_1)))) {
      *(undefined *)(param_2 + iVar2) = (char)iVar1;
      iVar2 = iVar2 + 1;
      FUN_1000_16ba(iVar1);
    }
  } while (iVar1 != 0xd);
  *(undefined *)(iVar2 + param_2) = 0;
  return;
}



undefined2 FUN_1000_1eac(void)

{
  code **ppcVar1;
  code *pcVar2;
  char cVar3;
  undefined extraout_DL;
  undefined2 unaff_DS;
  undefined in_CF;
  
  *(undefined2 *)0x535c = 0;
  FUN_1000_1ef7();
  if (!(bool)in_CF) {
    *(undefined *)0x541e = extraout_DL;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (*(int *)0x535c == 0) {
      pcVar2 = (code *)swi(0x21);
      cVar3 = (*pcVar2)();
      if (*(char *)0x541e == cVar3) {
        *(undefined2 *)0x535c = 0;
        return 1;
      }
    }
  }
  *(undefined2 *)0x535c = 1;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)(0x1000);
  return 0;
}



void __cdecl16near FUN_1000_1ef7(void)

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



undefined __cdecl16near FUN_1000_1f12(void)

{
  undefined2 unaff_DS;
  
  return *(undefined *)(*(int *)0x539a + 4);
}



void FUN_1000_1f26(byte param_1)

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



void FUN_1000_1f4e(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_1f77();
  *(undefined2 *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



undefined4 __cdecl16near FUN_1000_1f77(void)

{
  byte *unaff_SI;
  undefined2 unaff_DS;
  
  return CONCAT22((uint)unaff_SI[3] * 8 + 7,(uint)*unaff_SI << 3);
}



void FUN_1000_1fa0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar2 = FUN_1000_1f12();
  if (((iVar2 != 0) || (iVar2 = FUN_1000_1cee(), iVar2 != 0)) && (param_1 != 0)) {
    uVar1 = *(undefined2 *)0x538e;
    iVar2 = *(int *)0x5386 * 8;
    *(undefined2 *)0x538e = 0;
    if (0 < param_1) {
      iVar2 = (uint)*(byte *)(iVar2 + 0x5360) - (uint)*(byte *)(iVar2 + 0x535e);
      do {
        iVar3 = FUN_1000_1f12();
        FUN_1000_16ba(0x20);
        if (iVar3 == 0) {
          iVar3 = iVar2;
          iVar4 = FUN_1000_1cee(iVar2);
          iVar4 = iVar4 + -1;
        }
        else {
          iVar3 = iVar3 + -1;
          iVar4 = FUN_1000_1cee(iVar3);
        }
        FUN_1000_1bf2(iVar4,iVar3);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(undefined2 *)0x538e = uVar1;
  }
  return;
}



uint FUN_1000_2032(byte param_1)

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



uint __cdecl16near FUN_1000_2056(void)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return (CONCAT11((char)((uint)extraout_DX >> 8) << 3,(char)extraout_DX) +
          CONCAT11((char)((uint)in_CX >> 8) << 1,(char)in_CX << 2) ^ 0x91ebU) & 0xfff;
}



int FUN_1000_2092(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar1 = *(int *)0x5420 + 0x9248;
  uVar2 = uVar1 >> 1;
  uVar2 = ((((uVar2 | (uint)((uVar1 & 1) != 0) << 0xf) >> 1 | (uint)((uVar2 & 1) != 0) << 0xf) >> 1
           | (uint)((uVar2 & 2) != 0) << 0xf) ^ 0x9248) + 0x11;
  *(uint *)0x5420 = uVar2;
  return (uVar2 & 0x7fff) % ((param_1 - param_2) + 1U) + param_2;
}



void FUN_1000_20c8(undefined2 param_1,int param_2)

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
    *(uint *)0x5422 = uVar3;
    do {
      piVar1 = (int *)0x5422;
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    piVar1 = (int *)0x5424;
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  return;
}



void FUN_1000_20fa(int param_1)

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



int FUN_1000_216c(char *param_1)

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



uint FUN_1000_2192(int param_1,uint param_2,int param_3,undefined2 param_4,uint param_5)

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



uint FUN_1000_223c(int param_1,int param_2,int param_3)

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



void FUN_1000_22c0(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  if (*(char *)0xa9ce != '\0') {
    FUN_1000_22e2(param_2);
  }
  FUN_1000_20c8(param_1,1);
  FUN_1000_230e();
  return;
}



void FUN_1000_22e2(uint param_1)

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



byte __cdecl16near FUN_1000_230e(void)

{
  byte bVar1;
  
  bVar1 = in(0x61);
  out(0x61,bVar1 & 0xfc);
  return bVar1 & 0xfc;
}



void __cdecl16far FUN_1000_2322(void)

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
  *(undefined2 *)0x5396 = 0x1000;
  bVar4 = *(byte *)0xa9bd;
  bVar2 = *(byte *)(bVar4 + 0xa9c8);
  if ((bVar2 == 0xff) || (*(byte *)0x545e == bVar4)) {
LAB_1000_2374:
    pbVar7 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
    if ((*pbVar7 < 0x43) && (1 < *(byte *)0xa9c2)) {
      pbVar1 = pbVar7;
      *pbVar1 = *pbVar1 ^ 3;
      FUN_1000_1eac(*pbVar7);
      cVar3 = *(char *)0xa9bd;
      if (*(char *)0x545e != cVar3) goto LAB_1000_236d;
    }
    pbVar7 = (byte *)(*(byte *)0xa9bd + 0xa9c8);
    if ((*pbVar7 < 0x43) || (*pbVar7 == 0xff)) {
      if (*(char *)0xa9be == '\x02') {
        FUN_1000_0c22(0);
        FUN_1000_1c22(0xd,0x21,0xc,6,0);
        FUN_1000_0a70(0);
        FUN_1000_0aa6(0x77,0x117,0x58,0x28);
      }
      *(undefined *)0x545e = 0xff;
      uVar5 = 0x2408;
      bVar4 = FUN_1000_16a6();
      while (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1) {
        uVar5 = (uint)bVar4;
        iVar6 = FUN_1000_1eac(uVar5);
        if (iVar6 != 0) break;
        uVar5 = FUN_1000_1dda(0);
        bVar4 = FUN_1000_2032(uVar5);
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
        FUN_1000_16ba(10);
      }
      else if (*(char *)0xa9be == '\x02') {
        FUN_1000_0c22(1,uVar5);
        FUN_1000_1c22(0x18,0x27,0,0,0);
        FUN_1000_0f6e(0,1);
      }
    }
    else {
      *pbVar7 = 0x41;
      FUN_1000_1eac(0x41);
      *(undefined *)0x545e = 0xff;
    }
  }
  else {
    uVar5 = FUN_1000_16a6();
    if (uVar5 == bVar2) goto LAB_1000_2374;
    FUN_1000_1eac(*(undefined *)(*(byte *)0xa9bd + 0xa9c8));
    cVar3 = *(char *)0xa9bd;
LAB_1000_236d:
    *(char *)0x545e = cVar3;
  }
  *(undefined2 *)0x5394 = 0x2322;
  *(undefined2 *)0x5396 = 0x1000;
  return;
}



void FUN_1000_251e(int param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5394 = 0x2320;
  *(undefined2 *)0x5396 = 0x1000;
  if ((param_1 == 2) || (param_1 == 5)) {
    param_1 = 1;
  }
  *(undefined *)0xa9bd = (undefined)param_1;
  if (*(char *)(param_1 + -0x5638) != -1) {
    FUN_1000_1eac(*(undefined *)(param_1 + -0x5638));
    *(undefined *)0x545e = 0xff;
  }
  *(undefined2 *)0x5394 = 0x2322;
  *(undefined2 *)0x5396 = 0x1000;
  return;
}



void FUN_1000_256e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((*(char *)0xa9bd == '\x03') && (*(char *)(*(byte *)0xa9bd + 0xa9c8) == -1)) {
    FUN_1000_2322();
  }
  FUN_1000_1eac(*(undefined *)(*(byte *)0xa9bd + 0xa9c8));
  iVar1 = 0;
  while (iVar1 == 0) {
    iVar1 = FUN_1000_7234(param_1,param_2,param_3,param_4);
  }
  return;
}



int __cdecl16near FUN_1000_266c(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  if (*(int *)0x52c8 == 2) {
    *(undefined *)0x5891 = 0xff;
  }
  do {
    uVar1 = FUN_1000_1b38();
    local_4 = FUN_1000_2032(uVar1);
    if ((local_4 == 0) && ((*(byte *)0x5893 < 0x21 || (0x7f < *(byte *)0x5893)))) {
      FUN_1000_5910();
    }
  } while (local_4 == 0);
  if (*(int *)0x538a == 0) {
    if (local_4 < 5) {
      local_4 = local_4 + 0xfa;
    }
  }
  else {
    switch(local_4) {
    case 0x31:
      local_4 = 0xd4;
      break;
    case 0x32:
      local_4 = 4;
      break;
    case 0x33:
      local_4 = 0xd6;
      break;
    case 0x34:
      local_4 = 1;
      break;
    case 0x36:
      local_4 = 2;
      break;
    case 0x37:
      local_4 = 0xd3;
      break;
    case 0x38:
      local_4 = 3;
      break;
    case 0x39:
      local_4 = 0xd5;
    }
  }
  return local_4;
}



void FUN_1000_2726(uint param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  FUN_1000_1bf2(param_1,0);
  if (*(byte *)0x585b <= param_1) {
    iVar5 = 0xf;
    do {
      FUN_1000_16ba(0x20);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  iVar5 = (uint)*(byte *)0x589e * 8;
  if ((((0x7f < *(byte *)0x5893) && (*(char *)0x589e != -1)) &&
      ((*(byte *)(iVar5 + -0x45ea) & 0x80) != 0)) && (*(byte *)(iVar5 + -0x45e9) == param_1)) {
    FUN_1000_16ba(0xfd);
  }
  iVar3 = param_1 * 0x20 + 0x55a8;
  FUN_1000_1850(iVar3);
  iVar3 = FUN_1000_216c(iVar3);
  if (iVar3 < 9) {
    iVar3 = 9 - iVar3;
    do {
      FUN_1000_16ba(0x20);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_1 == *(byte *)0x587b) {
    cVar1 = *(char *)(param_1 * 0x20 + 0x55b3);
    if ((cVar1 == 'D') || (cVar1 == 'S')) {
      FUN_1000_16ba(0x20);
      *(undefined *)0x587b = 0xff;
      goto LAB_1000_27fd;
    }
    uVar4 = 0x1a;
  }
  else {
    uVar4 = 0x20;
  }
  FUN_1000_16ba(uVar4);
LAB_1000_27fd:
  FUN_1000_1a3e(0x20,4,*(undefined2 *)(param_1 * 0x20 + 0x55b8));
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
    FUN_1000_16ba(uVar2);
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
  FUN_1000_16ba(uVar2);
  return;
}



void __cdecl16near FUN_1000_2884(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  
  uVar2 = *(undefined2 *)0x5386;
  FUN_1000_1b94(1,uVar2);
  FUN_1000_1bf2(7,8);
  if (*(int *)0x57aa < 1000) {
    FUN_1000_16ba(0x20);
  }
  if (*(int *)0x57aa < 100) {
    FUN_1000_16ba(0x20);
  }
  if (*(int *)0x57aa < 10) {
    FUN_1000_16ba(0x20);
  }
  FUN_1000_1850(0x54b6);
  FUN_1000_1a3e(0x20,1,*(undefined2 *)0x57aa);
  while( true ) {
    iVar1 = FUN_1000_1f12();
    if (0xe < iVar1) break;
    FUN_1000_16ba(0x20);
  }
  FUN_1000_1b94(uVar2);
  return;
}



void __cdecl16near FUN_1000_2900(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  FUN_1000_1b94(1);
  iVar1 = 0;
  do {
    FUN_1000_2726(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  FUN_1000_1bf2(7,0);
  FUN_1000_1850(0x54ba);
  FUN_1000_1a3e(0x20,1,*(undefined2 *)0x57a8);
  while( true ) {
    iVar1 = FUN_1000_1f12();
    if (7 < iVar1) break;
    FUN_1000_16ba(0x20);
  }
  if ((*(byte *)0x5893 < 0x80) && ((*(byte *)0x587c & 0xf8) == 0x20)) {
    FUN_1000_1850(0x54bd);
    FUN_1000_1a3e(0x20,1,*(undefined *)0x5c5f);
    if (*(byte *)0x5c5f < 10) {
      FUN_1000_16ba(0x20);
    }
  }
  else {
    FUN_1000_2884();
  }
  FUN_1000_1850(0x54c3);
  if ((*(byte *)0x587d < 10) && (*(byte *)0x587e < 10)) {
    FUN_1000_16ba(0x20);
  }
  FUN_1000_1a3e(0x20,1,*(undefined *)0x587d);
  FUN_1000_16ba(0x2d);
  FUN_1000_1a3e(0x20,1,*(undefined *)0x587e);
  FUN_1000_16ba(0x2d);
  FUN_1000_1a3e(0x30,3,*(undefined2 *)0x5874);
  while( true ) {
    iVar1 = FUN_1000_1f12();
    if (0xe < iVar1) break;
    FUN_1000_16ba(0x20);
  }
  FUN_1000_1bf2(6,6);
  if (*(char *)0x587a == '\0') {
    FUN_1000_4f3c();
  }
  else {
    FUN_1000_4c2a();
    FUN_1000_16ba(*(undefined *)0x587a);
    FUN_1000_4cce();
  }
  FUN_1000_1b94(2);
  return;
}



void FUN_1000_2a28(int param_1)

{
  undefined2 unaff_DS;
  
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  FUN_1000_0b86(param_1 * 8 + 0xf,0x137,param_1 * 8 + 8,0xc0);
  return;
}



void FUN_1000_2a52(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_1000_2a28(param_2);
  FUN_1000_223c(2000,0x640,10);
  FUN_1000_2a28(param_2);
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
  FUN_1000_2900();
  return;
}



void __cdecl16near FUN_1000_2aa8(void)

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
      uVar1 = FUN_1000_2092(8,1);
      FUN_1000_2a52(uVar1,uVar4);
    }
    pcVar3 = pcVar3 + 0x20;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}



void __cdecl16near FUN_1000_2ae8(void)

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
          FUN_1000_2a52(1,uVar3);
        }
        local_4 = local_4 + 1;
      }
      local_a = local_a + 0x20;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)0x585b);
  }
  if (*(char *)0x587f != *(char *)0x5880) {
    if (*(int *)0x57a8 == 0) {
      FUN_1000_1850(0x54c8);
      FUN_1000_2aa8();
    }
    else if (((*(char *)0x587f == '\x06') || (*(char *)0x587f == '\f')) ||
            (*(char *)0x587f == '\x12')) {
      FUN_1000_3f54(local_4,0x57a8);
    }
    *(undefined *)0x5880 = *(undefined *)0x587f;
  }
  FUN_1000_3ef0(0xff,1,0x588b);
  if ((*(char *)0x588e != '\0') && (*(char *)0x588e != -1)) {
    pcVar1 = (char *)0x588e;
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      *(undefined *)0x587a = 0;
      FUN_1000_2900();
    }
  }
  FUN_1000_400c();
  return;
}



bool FUN_1000_2bd4(int param_1,byte param_2)

{
  undefined2 unaff_DS;
  bool bVar1;
  
  bVar1 = ((uint)*(byte *)((param_1 >> 3) + 0x54d4) & 0x80 >> ((byte)param_1 & 7)) == 0;
  if ((((param_2 & 0xfe) != 0x1c) && ((param_2 & 0xf0) != 0x40)) && (((byte)param_1 & 0xfc) == 0x90)
     ) {
    bVar1 = false;
  }
  return bVar1;
}



undefined2 FUN_1000_2c2e(int param_1)

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



uint FUN_1000_2c4c(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  bVar1 = *(byte *)((param_2 >> 2) + 0x54f4);
  if (10 < bVar1) {
    return 0;
  }
  switch(bVar1) {
  case 0:
    uVar2 = FUN_1000_2bd4(param_1,param_2);
    return uVar2;
  case 1:
    uVar2 = FUN_1000_2c2e(param_1);
    return uVar2;
  case 2:
    if (((byte)param_1 & 0xf0) == 0x60) {
      return 1;
    }
    iVar3 = FUN_1000_2c2e(param_1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = FUN_1000_2bd4(param_1,param_2);
    goto LAB_1000_2ca4;
  case 3:
    iVar3 = FUN_1000_2bd4(param_1,param_2);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_1 != 0x8f) {
      if (param_1 != 4) {
        return 1;
      }
      return 0;
    }
    return 0;
  case 4:
    iVar3 = FUN_1000_2c2e(param_1);
    return (uint)(iVar3 == 0);
  case 5:
    if (((byte)param_1 & 0xfc) == 0x34) {
      return (uint)((8 >> ((byte)param_2 & 3) & (uint)*(byte *)(param_1 + 0x5510)) != 0);
    }
    iVar3 = FUN_1000_2c2e(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    if (param_1 < 0x60) {
      return 1;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x54d4) & 8 >> ((byte)param_2 & 3);
LAB_1000_2ca4:
    if (uVar2 != 0) {
      return 1;
    }
    return 0;
  case 6:
    if (param_1 < 3) {
      return 1;
    }
    return 0;
  case 7:
    bVar4 = param_1 == 4;
    break;
  case 8:
    bVar4 = param_1 == 5;
    break;
  case 9:
    bVar4 = param_1 == 1;
    break;
  case 10:
    bVar4 = param_1 == 7;
  }
  if (bVar4) {
    return 1;
  }
  return 0;
}



uint FUN_1000_2d7a(int param_1)

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
    FUN_1000_2a28(*(undefined *)(iVar3 + -0x45e9));
  }
  FUN_1000_4e50(0x5554);
  uVar4 = 0xffff;
  do {
    if (uVar4 != local_4) {
      FUN_1000_2a28(local_4);
      uVar4 = local_4;
    }
    do {
      uVar2 = FUN_1000_266c();
    } while (0x37 < uVar2);
    if (((uVar2 < 0x31) || (0x36 < uVar2)) || ((uint)*(byte *)0x585b <= uVar2 - 0x31)) {
      if (uVar2 == 4) {
LAB_1000_2e2a:
        FUN_1000_3f14(*(byte *)0x585b - 1,1,&local_4);
      }
      else if ((int)uVar2 < 5) {
        if (uVar2 != 1) {
          if (uVar2 == 2) goto LAB_1000_2e2a;
          if (uVar2 != 3) goto LAB_1000_2e19;
        }
        FUN_1000_3f54(1,&local_4);
      }
      else {
        if (uVar2 != 0xd) {
          if (uVar2 == 0x1b) {
            local_4 = 0xffff;
          }
          else if (uVar2 != 0x20) {
            if ((uVar2 != 0x30) || (param_1 == 0)) goto LAB_1000_2e19;
            local_4 = 0xfffe;
          }
        }
        bVar1 = true;
      }
    }
    else {
      local_4 = uVar2 - 0x31;
    }
LAB_1000_2e19:
    if (uVar4 != local_4) {
      FUN_1000_2a28(uVar4);
    }
    if (bVar1) {
      if (local_4 < 0x8000) {
        FUN_1000_2a28(local_4);
      }
      FUN_1000_4e20();
      return local_4;
    }
  } while( true );
}



void __cdecl16near FUN_1000_2e8e(void)

{
  FUN_1000_2d7a(0);
  return;
}



void FUN_1000_2e96(int param_1)

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
    FUN_1000_0a70(*(undefined2 *)0x13b0);
    FUN_1000_0b10(0xb8,0x98,0xb8,0x30);
    FUN_1000_0a70(*(undefined2 *)0x13b2);
    FUN_1000_0aa6(0xbf,0x98,0xb9,0x30);
    return;
  }
  FUN_1000_1b94(0);
  FUN_1000_1bf2(0x17,6);
  FUN_1000_4c2a();
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
    if (cVar1 != '\x04') goto LAB_1000_2eff;
    uVar2 = 0x5574;
  }
  FUN_1000_1850(uVar2);
LAB_1000_2eff:
  FUN_1000_1850(0x557a);
  FUN_1000_4cce();
  FUN_1000_1b94(2);
  return;
}



void __cdecl16near FUN_1000_2f62(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1000_2092(0x3f,0);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_1000_2092(4,0);
      if (iVar1 != 0) break;
      iVar2 = FUN_1000_2092(0xff,0);
    } while (iVar2 < 0xc0);
    FUN_1000_2e96(iVar1);
  }
  return;
}



void FUN_1000_2fa6(uint param_1)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  if ((param_1 < *(byte *)0x585b) && (pcVar1 = (char *)(param_1 * 0x20 + 0x55b3), *pcVar1 != 'D')) {
    *pcVar1 = 'P';
    FUN_1000_2900();
  }
  return;
}



void FUN_1000_2fd0(undefined2 param_1)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  FUN_1000_223c(500,3000,0x28);
  if (*(byte *)0x5893 < 0x80) {
    iVar3 = FUN_1000_2092(7,0);
    uVar1 = (uint)*(byte *)(iVar3 + 0x559e);
  }
  else {
    uVar1 = FUN_1000_2092(1,0);
  }
  if (uVar1 == 0) {
    FUN_1000_1850(0x5581);
    uVar2 = FUN_1000_3abe(param_1);
    FUN_1000_2a52(uVar2,param_1);
  }
  else if (uVar1 == 1) {
    FUN_1000_1850(0x5588);
    FUN_1000_2fa6(param_1);
  }
  else if (uVar1 == 2) {
    FUN_1000_1850(0x5591);
    FUN_1000_2aa8();
  }
  else if (uVar1 == 3) {
    FUN_1000_1850(0x5598);
    iVar3 = 0;
    do {
      FUN_1000_2fa6(iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  return;
}



void __cdecl16near FUN_1000_3072(void)

{
  undefined2 uVar1;
  int iVar2;
  int local_8;
  
  FUN_1000_0f6e(1,0);
  FUN_1000_0c22(1);
  local_8 = 8;
  do {
    iVar2 = 8;
    do {
      FUN_1000_71ca(2,iVar2 + 4,0xb7,iVar2,8);
      uVar1 = FUN_1000_2092(0x96,0x13);
      FUN_1000_22e2(uVar1);
      iVar2 = iVar2 + 3;
    } while (iVar2 < 0xb4);
    iVar2 = 8;
    do {
      FUN_1000_0ace(iVar2 + 4,0xb7,iVar2,8,0,1);
      uVar1 = FUN_1000_2092(0x96,0x13);
      FUN_1000_22e2(uVar1);
      iVar2 = iVar2 + 3;
    } while (iVar2 < 0xb4);
    iVar2 = 0xb3;
    do {
      FUN_1000_7200(2,iVar2 + 4,0xb7,iVar2,8);
      uVar1 = FUN_1000_2092(0x96,0x13);
      FUN_1000_22e2(uVar1);
      iVar2 = iVar2 + -3;
    } while (7 < iVar2);
    iVar2 = 0xb3;
    do {
      FUN_1000_0ace(iVar2 + 4,0xb7,iVar2,8,0,1);
      uVar1 = FUN_1000_2092(0x96,0x13);
      FUN_1000_22e2(uVar1);
      iVar2 = iVar2 + -3;
    } while (7 < iVar2);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_1000_0c22(0);
  FUN_1000_230e();
  return;
}



undefined2 FUN_1000_3178(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  if (param_1 == 0x4d) {
    FUN_1000_1850(0xa1b4);
                    // WARNING: Subroutine does not return
    thunk_FUN_172e_02ec();
  }
  if (param_1 < 0x4e) {
    if (param_1 == 0x45) {
      if (*(char *)0x5893 == '\0') {
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      uVar6 = 0xa156;
      goto LAB_1000_33ea;
    }
    if (param_1 < 0x46) {
      if (param_1 == 0x20) {
        if ((*(char *)0x5893 == '\0') && (*(char *)0x5955 != '\0')) {
          FUN_1000_1850(0xa122);
          *(undefined *)0x5955 = 0;
          return 1;
        }
        uVar6 = 0xa134;
        goto LAB_1000_33ea;
      }
      if (param_1 == 0x41) {
        if (*(char *)0x5893 == '\0') {
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        if (0x20 < *(byte *)0x5893) {
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x42) {
        FUN_1000_1850(0xa13a);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x43) {
        FUN_1000_1850(0xa142);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x44) {
        uVar6 = 0xa14c;
        goto LAB_1000_31e5;
      }
    }
    else {
      switch(param_1) {
      case 0x46:
        FUN_1000_1850(0xa164);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      case 0x47:
        if (*(byte *)0x5893 < 0x21) {
          FUN_1000_1850(0xa16a);
        }
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      case 0x48:
        if ((*(char *)0x5893 == '\0') || (0x20 < *(byte *)0x5893)) {
          FUN_1000_3c9a();
          return 1;
        }
        pcVar4 = (char *)FUN_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
        cVar2 = *pcVar4;
        FUN_1000_1850(0xa170);
        if (cVar2 == -0x55) {
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        uVar6 = 0xa17a;
        goto LAB_1000_33ea;
      case 0x49:
        FUN_1000_1850(0xa188);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      case 0x4a:
        FUN_1000_1850(0xa198);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      case 0x4b:
        if (*(char *)0x5893 == '\0') {
          FUN_1000_1850(0xa1a0);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        if (0x20 < *(byte *)0x5893) {
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      case 0x4c:
        FUN_1000_1850(0xa1a8);
        if ((0x20 < *(byte *)0x5893) && (*(byte *)0x5893 < 0x29)) {
          FUN_1000_1850(0xa1ae);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        FUN_1000_16ba(0x2d);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
    }
  }
  else {
    if (param_1 == 0x54) {
      if (*(char *)0x5893 == '\0') {
        FUN_1000_1850(0xa210);
        iVar5 = FUN_1000_35ec();
        if (iVar5 == 0) {
          return 1;
        }
        uVar6 = 0xa216;
      }
      else {
        if (*(byte *)0x5893 < 0x21) {
          FUN_1000_1850(0xa246);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        uVar6 = 0xa22c;
      }
LAB_1000_33ea:
      FUN_1000_1850(uVar6);
      return 1;
    }
    if (param_1 < 0x55) {
      if (param_1 == 0x4e) {
        FUN_1000_1850(0xa1c4);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x4f) {
        FUN_1000_1850(0xa1ce);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x50) {
        if ((*(byte *)0x5893 < 0x21) || (0x28 < *(byte *)0x5893)) {
          FUN_1000_1850(0xa1e4);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        uVar6 = 0xa1d4;
        goto LAB_1000_31e5;
      }
      if (param_1 == 0x51) {
        FUN_1000_1850(0xa1ea);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x52) {
        FUN_1000_1850(0xa1f0);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
      if (param_1 == 0x53) {
        if (*(byte *)0x5893 < 0x21) {
          uVar6 = 0xa1fc;
        }
        else {
          uVar6 = 0xa204;
        }
        FUN_1000_1850(uVar6);
                    // WARNING: Subroutine does not return
        thunk_FUN_172e_02ec();
      }
    }
    else {
      if (param_1 == 0x57) {
        uVar6 = 0xa276;
        goto LAB_1000_31e5;
      }
      if (param_1 < 0x58) {
        if (param_1 == 0x55) {
          FUN_1000_1850(0xa24c);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        if (param_1 == 0x56) {
          FUN_1000_1850(0xa258);
          if (*(char *)0x57ad != '\0') {
            pcVar1 = (char *)0x57ad;
            *pcVar1 = *pcVar1 + -1;
            if (0x20 < *(byte *)0x5893) {
                    // WARNING: Subroutine does not return
              thunk_FUN_172e_02ec();
            }
                    // WARNING: Subroutine does not return
            thunk_FUN_172e_02ec(*(undefined *)0x5896);
          }
          uVar6 = 0xa266;
          goto LAB_1000_33ea;
        }
      }
      else {
        if (param_1 == 0x58) {
          FUN_1000_1850(0xa280);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        if (param_1 == 0x59) {
          FUN_1000_1850(0xa286);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        if (param_1 == 0x5a) {
          FUN_1000_1850(0xa28c);
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        if (param_1 == 0xfc) {
          FUN_1000_1850(0xa110);
          uVar3 = (uint)(*(int *)0x538c == 0);
          *(uint *)0x538c = uVar3;
          if (uVar3 == 0) {
            uVar6 = 0xa11e;
          }
          else {
            uVar6 = 0xa11a;
          }
          goto LAB_1000_31e5;
        }
      }
    }
  }
  uVar6 = 0xa298;
LAB_1000_31e5:
  FUN_1000_1850(uVar6);
  return 0;
}



void FUN_1000_3522(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if (*(byte *)0x5893 < 0x80) {
    param_2 = param_2 - (*(byte *)0x5896 - 5);
    param_1 = param_1 - (*(byte *)0x5897 - 5);
  }
  FUN_1000_10e0(param_1,param_2,0);
  FUN_1000_223c(2000,3000,10);
  FUN_1000_5910();
  return;
}



void FUN_1000_3564(uint param_1)

{
  undefined uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  if (0x7f < *(byte *)0x5893) {
    local_4 = param_1 * 8 + -0x45ec;
    param_1 = (uint)*(byte *)(param_1 * 8 + -0x45e8);
  }
  FUN_1000_10e0(*(undefined *)(param_1 * 8 + 0x5c5d),*(undefined *)(param_1 * 8 + 0x5c5c),0);
  if ((*(byte *)0x5893 < 0x80) || ((*(byte *)(local_4 + 2) & 0x80) == 0)) {
    FUN_1000_223c(2000,3000,10);
  }
  else {
    uVar1 = *(undefined *)(local_4 + 3);
    FUN_1000_2a28(uVar1);
    FUN_1000_223c(500,3000,0x28);
    FUN_1000_2a28(uVar1);
  }
  FUN_1000_5910();
  return;
}



char __cdecl16near FUN_1000_35ec(void)

{
  int *piVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5876 = 0;
  *(undefined2 *)0x5878 = 0;
  while (((cVar2 = FUN_1000_266c(), cVar2 != ' ' && (cVar2 != '\x03')) && (cVar2 != '\x04'))) {
    if ((cVar2 == '\x01') || (cVar2 == '\x02')) break;
  }
  if (cVar2 == '\x01') {
    FUN_1000_1850(0xa2b6);
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + -1;
  }
  else if (cVar2 == '\x02') {
    FUN_1000_1850(0xa2bc);
    piVar1 = (int *)0x5876;
    *piVar1 = *piVar1 + 1;
  }
  else if (cVar2 == '\x03') {
    FUN_1000_1850(0xa2a6);
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + -1;
  }
  else {
    if (cVar2 != '\x04') {
      if ((cVar2 != '\x1b') && (cVar2 != ' ')) {
        return cVar2;
      }
      FUN_1000_1850(0xa2a0);
      return '\0';
    }
    FUN_1000_1850(0xa2ae);
    piVar1 = (int *)0x5878;
    *piVar1 = *piVar1 + 1;
  }
  return '\x01';
}



undefined FUN_1000_368e(uint param_1,uint param_2,uint param_3)

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



undefined FUN_1000_3702(uint param_1,uint param_2,uint param_3)

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



int FUN_1000_3776(char param_1)

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
  local_1e = (char *)0x5d56;
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



int FUN_1000_3868(int param_1,uint param_2,uint param_3)

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



int __cdecl16near FUN_1000_38e4(void)

{
  int local_4;
  
  local_4 = FUN_1000_3868(0,0,0);
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(1,0xf,1);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(1,0xff,0x80);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(1,0x11,0x10);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(1,0x7f,0x30);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(0,0xf,1);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(0,0xff,0x80);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(0,0x11,0x10);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(0,0x7f,0x30);
  }
  if (local_4 == 0) {
    local_4 = FUN_1000_3868(0,0xff,0);
  }
  return local_4;
}



void FUN_1000_39cc(undefined param_1,undefined param_2,char param_3)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  if (((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) && (param_3 != '\0')) {
    pcVar1 = (char *)FUN_1000_4402(param_1,param_2);
    *pcVar1 = param_3;
  }
  return;
}



undefined2 __cdecl16near FUN_1000_39fc(void)

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



void FUN_1000_3a74(int param_1,undefined param_2,undefined param_3,undefined param_4,
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



void FUN_1000_3aae(undefined2 param_1)

{
  FUN_1000_2092(param_1,0);
  return;
}



int __cdecl16near FUN_1000_3abe(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_3aae(0x3c,0);
  iVar1 = iVar1 / 2;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



void FUN_1000_3ae6(int param_1)

{
  undefined2 unaff_DS;
  
  if ((*(char *)0x58a4 != '\0') && (0 < param_1)) {
    do {
      FUN_1000_5910();
      FUN_1000_20fa(1);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}



void FUN_1000_3b1c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = 0;
  uVar1 = *(undefined2 *)0x538c;
  *(undefined2 *)0x538c = 0;
  do {
    iVar2 = FUN_1000_266c();
    if (((iVar2 == 8) || (iVar2 == 1)) && (iVar3 != 0)) {
      FUN_1000_1fa0(1);
      iVar3 = iVar3 + -1;
    }
    else if ((iVar2 == 0x1b) && (iVar3 != 0)) {
      FUN_1000_1fa0(iVar3);
      iVar3 = 0;
    }
    else if ((0x1f < iVar2) && ((iVar2 < 0x80 && (iVar3 < param_1)))) {
      *(undefined *)(param_2 + iVar3) = (char)iVar2;
      iVar3 = iVar3 + 1;
      FUN_1000_16ba(iVar2);
    }
  } while (iVar2 != 0xd);
  *(undefined *)(iVar3 + param_2) = 0;
  *(undefined2 *)0x538c = uVar1;
  return;
}



int FUN_1000_3b9e(int param_1)

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
    uVar1 = FUN_1000_266c();
    if ((uVar1 < 0x30) || (0x39 < uVar1)) {
      if (((uVar1 == 0x2d) || (uVar1 == 0x2b)) && (iVar3 == 0)) goto LAB_1000_3bd7;
      if (((uVar1 == 8) || (uVar1 == 1)) && (iVar3 != 0)) {
        iVar3 = iVar3 + -1;
        FUN_1000_1fa0(1);
      }
      else if ((uVar1 == 0x1b) && (iVar3 != 0)) {
        FUN_1000_1fa0(iVar3);
        iVar3 = 0;
      }
    }
    else if (iVar3 < param_1) {
LAB_1000_3bd7:
      local_8[iVar3] = (byte)uVar1;
      iVar3 = iVar3 + 1;
      FUN_1000_16ba(uVar1);
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



void __cdecl16near FUN_1000_3c9a(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  byte local_e;
  int local_8;
  int local_6;
  
  local_e = *(byte *)0x5c5b;
  FUN_1000_1850(0xa2c2);
  if ((local_e & 0xf8) == 0x20) {
    FUN_1000_1850(0xa2ce);
    if (0x23 < *(byte *)0x5c5b) {
                    // WARNING: Subroutine does not return
      thunk_FUN_172e_02ec();
    }
    FUN_1000_1850(0xa2dc);
    uVar4 = 0xa2ec;
  }
  else {
    FUN_1000_1850(0xa306);
    if (*(byte *)0x5893 < 0x21) {
      pbVar3 = (byte *)FUN_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
      local_e = *pbVar3;
    }
    if (((*(byte *)0x5893 < 0x21) && (local_e != 0)) && (local_e < 4)) {
      uVar4 = 0xa30e;
    }
    else {
      if ((0x20 < *(byte *)0x5893) || (*(char *)0x5c5b == '\x1c')) {
        FUN_1000_1850(0xa32c);
        do {
          bVar1 = FUN_1000_266c();
          if (bVar1 == 0x20) break;
        } while ((bVar1 < 0x30) || (0x39 < bVar1));
        FUN_1000_16ba(bVar1);
        FUN_1000_16ba(10);
        if (bVar1 == 0x20) {
          return;
        }
        if (bVar1 == 0x30) {
          return;
        }
        local_6 = 0;
        uVar5 = (uint)*(byte *)0x585b;
        if (uVar5 != 0) {
          pcVar7 = (char *)0x55b3;
          local_6 = 0;
          uVar6 = 0;
          do {
            if ((*pcVar7 == 'G') || (*pcVar7 == 'P')) {
              local_6 = local_6 + 1;
            }
            pcVar7 = pcVar7 + 0x20;
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar5);
        }
        if (local_6 < 2) {
LAB_1000_3e59:
          local_8 = -1;
        }
        else {
          FUN_1000_1850(0xa348);
          do {
            cVar2 = FUN_1000_266c();
            if (cVar2 == 'Y') break;
          } while (cVar2 != 'N');
          if (cVar2 == 'N') {
            FUN_1000_1850(0xa362);
            goto LAB_1000_3e59;
          }
          FUN_1000_1850(0xa368);
          FUN_1000_1850(0xa36e);
          local_8 = FUN_1000_2e8e();
          FUN_1000_16ba(10);
          if ((local_8 == -1) || (*(char *)(local_8 * 0x20 + 0x55b3) != 'G')) {
            local_8 = -1;
            FUN_1000_1850(0xa386);
          }
        }
        if (0x20 < *(byte *)0x5893) {
          *(undefined *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
          thunk_FUN_172e_02ec();
        }
        FUN_1000_6360(bVar1 - 0x30,local_8);
        goto LAB_1000_3ee5;
      }
      uVar4 = 0xa322;
    }
  }
  FUN_1000_1850(uVar4);
LAB_1000_3ee5:
  *(undefined *)0x24e6 = 1;
  return;
}



void FUN_1000_3ef0(uint param_1,int param_2,byte *param_3)

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



void FUN_1000_3f14(int param_1,int param_2,int *param_3)

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



void FUN_1000_3f36(uint param_1,byte *param_2)

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



void FUN_1000_3f54(int param_1,int *param_2)

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



bool FUN_1000_3f6e(int param_1,int param_2)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  bVar1 = *(byte *)(param_2 + param_1 * 0x20 + -0x54fe);
  return (0x80 >> (bVar1 & 7) & (uint)*(byte *)(((int)(uint)bVar1 >> 3) + 0x6a14)) != 0;
}



void FUN_1000_3fb4(int param_1,int param_2)

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



void __cdecl16near FUN_1000_400c(void)

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
    pcVar3 = (char *)0x55c5;
    local_a = 0x55b8;
    local_c = (undefined2 *)0x55ba;
    do {
      if ((*pcVar2 != 'D') && (*pcVar3 == ',')) {
        iVar1 = FUN_1000_2092(7,0);
        if (iVar1 == 7) {
          FUN_1000_3f14(*local_c,1,local_a);
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



undefined2 FUN_1000_4080(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined local_6;
  
  uVar1 = param_1 - 0x31;
  FUN_1000_1850(0xa396);
  if (param_1 == 0x30) {
    FUN_1000_1850(0xa3a8);
    *(undefined *)0x587b = 0xff;
  }
  else {
    if (((*(byte *)0x585b <= uVar1) || (iVar2 = uVar1 * 0x20, *(char *)(iVar2 + 0x55b3) == 'D')) ||
       (*(char *)(iVar2 + 0x55b3) == 'S')) {
      FUN_1000_1850(0xa3b0);
      return 1;
    }
    local_6 = (undefined)uVar1;
    *(undefined *)0x587b = local_6;
    FUN_1000_1850(iVar2 + 0x55a8);
    FUN_1000_16ba(10);
  }
  FUN_1000_2900();
  return 0;
}



void __cdecl16near FUN_1000_4102(void)

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
            pbVar3 = (byte *)FUN_1000_4402(iVar5,local_c);
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
        if (*(char *)0x6a34 != '\x04') goto LAB_1000_430e;
        uVar4 = 2000;
      }
      FUN_1000_22c0(3,uVar4);
    }
    else {
      FUN_1000_2192(0xfff6,20000,2000,1,0xc2c);
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
            FUN_1000_2192(0xfff6,20000,2000,1,*(undefined2 *)((uint)bVar2 * 2 + 0x6a34));
          }
          pcVar1 = (char *)0x6a08;
          *pcVar1 = *pcVar1 + '\x01';
          if (0x34 < *(byte *)0x6a08) {
            *(undefined *)0x6a08 = 0;
          }
        }
        goto LAB_1000_430e;
      }
      uVar7 = 10;
      uVar6 = 0x1e;
      uVar4 = 25000;
    }
    FUN_1000_223c(uVar4,uVar6,uVar7);
  }
LAB_1000_430e:
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



void __cdecl16near FUN_1000_4368(void)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    FUN_1000_2192(6,300,0x2a30,1,0x11f8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_1000_2192(3,300,0x5460,1,0x17d4);
  return;
}



void FUN_1000_43ae(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  param_3 = param_3 - param_4;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + param_2) {
    FUN_1000_22e2(param_4);
    FUN_1000_20c8(param_2,1);
    param_4 = param_4 + (param_3 * param_2) / param_1;
  }
  FUN_1000_230e();
  return;
}



int FUN_1000_4402(uint param_1,uint param_2)

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
      local_4 = (uint)local_6 * 0x100 + param_1 * 0x10 + param_2 + 0x6608;
    }
    else if (((((int)param_2 < 0) || ((int)param_1 < 0)) || (0x1f < (int)param_2)) ||
            (0x1f < (int)param_1)) {
      local_4 = 0x6a07;
    }
    else {
      local_4 = param_1 * 0x20 + param_2 + 0x6608;
    }
  }
  else {
    local_4 = param_1 * 0x20 + param_2 + -0x52ec;
  }
  return local_4;
}



void __cdecl16near FUN_1000_44b8(void)

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



void __cdecl16near FUN_1000_4552(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined2 unaff_DS;
  uint local_14;
  int local_10;
  char local_c;
  char local_4;
  
  local_10 = 0;
  do {
    iVar6 = local_10 * 8;
    pbVar7 = (byte *)(iVar6 + 0x5c5a);
    if (*pbVar7 != 0) {
      bVar1 = *(byte *)(iVar6 + 0x5c60);
      bVar5 = bVar1 & 0xf;
      local_14 = (uint)(*(byte *)(iVar6 + 0x5c60) >> 4);
      uVar8 = *pbVar7 & 0xfc;
      bVar2 = *(byte *)(((int)(uVar8 - 0x34) >> 2) + 0x1bc8);
      if (bVar5 != 0xf) {
        if ((bVar1 & 0xf) == 0) {
          if (((((*(char *)(iVar6 + 0x5c5b) != '\0') && (*(char *)(iVar6 + 0x5c5b) != '\x1d')) &&
               (*(char *)(iVar6 + 0x5c5b) != '\x1e')) && ((0x33 < uVar8 && (uVar8 != 0xe8)))) &&
             ((uVar8 != 0xb4 &&
              (((uVar8 == 0x5c || (uVar8 == 0xa8)) || (iVar9 = FUN_1000_2092(0xff,0), 0x7f < iVar9))
              )))) {
            bVar4 = false;
            do {
              cVar3 = *(char *)(local_14 + (uint)bVar2 * 0x10 + 0x1b18);
              switch(cVar3) {
              case '\x01':
              case '\x02':
              case '\x03':
              case '\x04':
                local_4 = (char)uVar8;
                *(char *)(iVar6 + 0x5c5b) = local_4 + cVar3 + -1;
                goto LAB_1000_4660;
              case '\x05':
                iVar9 = FUN_1000_2092(0xff,0);
                if (0x3f < iVar9) {
LAB_1000_4692:
                  local_14 = local_14 + 1;
                  break;
                }
                *(byte *)(iVar6 + 0x5c5b) = *pbVar7;
                if (uVar8 == 0x5c) goto LAB_1000_4660;
                bVar5 = 6;
                goto LAB_1000_468a;
              case '\x06':
                iVar9 = FUN_1000_2092(0xff,0);
                if (0xbf < iVar9) goto LAB_1000_4692;
              case '\0':
                local_14 = 0;
                break;
              case '\a':
                local_14 = 2;
                break;
              default:
                bVar5 = cVar3 + 0x80;
LAB_1000_4660:
                local_14 = local_14 + 1;
LAB_1000_468a:
                bVar4 = true;
              }
              *(char *)(iVar6 + 0x5c60) = (char)local_14 * '\x10' + bVar5;
            } while (!bVar4);
          }
        }
        else {
          local_c = bVar5 - 1;
          *(char *)(iVar6 + 0x5c60) = (*(byte *)(iVar6 + 0x5c60) & 0xf0) + local_c;
        }
      }
    }
    local_10 = local_10 + 1;
    if (0x1f < local_10) {
      FUN_1000_44b8();
      FUN_1000_6fd6();
      return;
    }
  } while( true );
}



undefined2 FUN_1000_4702(int param_1)

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



void __cdecl16near FUN_1000_475a(void)

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
    FUN_1000_3f36(1,0x5887);
    if (*(char *)0x5887 == '\0') {
      cVar3 = '\x05';
    }
  }
  else {
    FUN_1000_3ef0(0x10,1,0x5887);
  }
  iVar6 = 0;
  do {
    iVar4 = FUN_1000_4702(iVar6);
    if (iVar4 != 0) {
      pcVar5 = (char *)FUN_1000_4402(*(undefined *)(iVar6 + 0x5838),*(undefined *)(iVar6 + 0x5830));
      cVar2 = *pcVar5;
      *pcVar5 = cVar3;
      pbVar1 = (byte *)0x24e6;
      *pbVar1 = *pbVar1 | 2;
      if (cVar2 != cVar3) {
        FUN_1000_5e4a();
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  return;
}



undefined2 FUN_1000_47f4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (*(char *)(param_1 + 0x5840) == -1) {
    uVar2 = 0;
  }
  else {
    if (*(char *)0x5893 == '\0') {
      FUN_1000_251e(1);
      do {
        iVar3 = FUN_1000_1674(0xa3ba);
      } while (iVar3 == 0);
                    // WARNING: Subroutine does not return
      thunk_FUN_172e_02ec();
    }
    bVar1 = *(byte *)0x5893;
    *(undefined *)0x5893 = *(undefined *)(param_1 + 0x5840);
    *(undefined *)0x5896 = *(undefined *)(param_1 + 0x5830);
    *(undefined *)0x5897 = *(undefined *)(param_1 + 0x5838);
    *(undefined *)0x5895 = *(undefined *)(param_1 + 0x5848);
    if ((((*(char *)0x5893 != '\0') && (bVar1 != 0)) && (*(byte *)0x5893 < 0x21)) && (bVar1 < 0x21))
    {
                    // WARNING: Subroutine does not return
      thunk_FUN_172e_02ec();
    }
    if ((*(char *)0x5893 == '\0') && (bVar1 == 0)) {
                    // WARNING: Subroutine does not return
      thunk_FUN_172e_02ec();
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined2 __cdecl16near FUN_1000_48a8(void)

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
  pcVar5 = (char *)FUN_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  if (*pcVar5 == -0x24) {
    FUN_1000_3ae6(1);
    FUN_1000_2192(2,2000,30000,1,0x170c);
    uVar3 = *(undefined *)0x587c;
    *(undefined *)0x587c = 0x16;
    FUN_1000_1068(5,5,0xdc);
    *(undefined *)0x587c = 0;
    FUN_1000_3ae6(1);
    *(undefined *)0x5887 = 0xf;
    do {
      FUN_1000_1112(5,5,*(undefined *)0x5887);
      FUN_1000_20fa(2);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 != '\0');
    puVar6 = (undefined *)FUN_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
    *puVar6 = 5;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    FUN_1000_10e0(5,5,5);
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
      FUN_1000_47f4(bVar4 - 0x30);
    }
    *(undefined *)0x587c = uVar3;
  }
  return local_8;
}



uint __cdecl16near FUN_1000_4988(void)

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
          FUN_1000_1850(0xa3c4);
          local_a = FUN_1000_2e8e();
          if ((int)local_a < 0) {
LAB_1000_4a12:
            bVar1 = true;
          }
          else {
            if ((*(char *)(local_a * 0x20 + 0x55b3) == 'G') ||
               (*(char *)(local_a * 0x20 + 0x55b3) == 'P')) {
              FUN_1000_1850(local_a * 0x20 + 0x55a8);
              iVar4 = FUN_1000_1f12();
              if (iVar4 != 0) {
                FUN_1000_16ba(10);
              }
              goto LAB_1000_4a12;
            }
            FUN_1000_1850(0xa3ce);
          }
        } while (!bVar1);
      }
      goto LAB_1000_4a5f;
    }
    bVar2 = *(byte *)0x587b;
  }
  else {
    bVar2 = *(byte *)((uint)*(byte *)0x589e * 8 + -0x45e9);
  }
  local_a = (uint)bVar2;
LAB_1000_4a5f:
  if (local_a == 0xffff) {
    FUN_1000_1850(0xa3da);
  }
  else if (local_a == 0xfffe) {
    FUN_1000_16ba(10);
  }
  return local_a;
}



void __cdecl16near FUN_1000_4a84(void)

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
      *puVar2 = 0x2020;
    }
    local_6 = 0;
    uVar1 = *(undefined2 *)0x5386;
    FUN_1000_1b94(0);
    FUN_1000_1c9e(1);
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
    FUN_1000_1bf2(0,6);
    if ((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) {
      FUN_1000_0a70(*(undefined2 *)0x13b2);
      FUN_1000_0aa6(6,0x98,0,0x28);
      FUN_1000_0a70(*(undefined2 *)0x13b0);
      FUN_1000_0b10(7,0x98,7,0x28);
    }
    else {
      for (iVar4 = 0; *(char *)((int)local_12 + iVar4) != '\0'; iVar4 = iVar4 + 1) {
        if (*(char *)((int)local_12 + iVar4) == '*') {
          uVar6 = *(undefined2 *)0x13b8;
        }
        else {
          uVar6 = *(undefined2 *)0x13ba;
        }
        FUN_1000_1cca(uVar6);
        FUN_1000_16ba(*(undefined *)((int)local_12 + iVar4));
      }
      FUN_1000_1cca(*(undefined2 *)0x13b0);
    }
    FUN_1000_1b94(uVar1);
    FUN_1000_1c9e(0);
  }
  return;
}



void __cdecl16near FUN_1000_4be8(void)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)0x5386;
  FUN_1000_1b94(0,uVar1);
  if ((*(char *)0x5893 != '\x19') && (*(byte *)0x5895 < 0x80)) {
    FUN_1000_1bf2(0,5);
    FUN_1000_4c2a();
    FUN_1000_1850(0xa3e2);
    FUN_1000_4cce();
  }
  FUN_1000_1b94(uVar1);
  return;
}



void __cdecl16near FUN_1000_4c2a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x5386 * 8;
  iVar2 = FUN_1000_1f12();
  iVar4 = ((uint)*(byte *)(iVar1 + 0x535e) + iVar2) * 8;
  iVar2 = FUN_1000_1cee();
  iVar2 = ((uint)*(byte *)(iVar1 + 0x535f) + iVar2) * 8;
  uVar3 = (uint)*(byte *)(iVar1 + 0x5364);
  FUN_1000_1cca(*(undefined2 *)0x13b2);
  FUN_1000_1f26(0);
  FUN_1000_16ba(2);
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  FUN_1000_0b10(iVar2 + 3,iVar4 + 5,iVar2,iVar4);
  FUN_1000_0b10(iVar2 + 7,iVar4,iVar2 + 4,iVar4 + 5);
  FUN_1000_1cca(uVar3 & 0xf);
  FUN_1000_1f26((int)uVar3 >> 4);
  return;
}



void __cdecl16near FUN_1000_4cce(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x5386 * 8;
  iVar2 = FUN_1000_1f12();
  iVar4 = ((uint)*(byte *)(iVar1 + 0x535e) + iVar2) * 8;
  iVar2 = FUN_1000_1cee();
  iVar2 = ((uint)*(byte *)(iVar1 + 0x535f) + iVar2) * 8;
  uVar3 = (uint)*(byte *)(iVar1 + 0x5364);
  FUN_1000_1cca(*(undefined2 *)0x13b2);
  FUN_1000_1f26(0);
  FUN_1000_16ba(1);
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  iVar1 = iVar4 + 2;
  iVar4 = iVar4 + 7;
  FUN_1000_0b10(iVar2 + 3,iVar1,iVar2,iVar4);
  FUN_1000_0b10(iVar2 + 7,iVar4,iVar2 + 4,iVar1);
  FUN_1000_1cca(uVar3 & 0xf);
  FUN_1000_1f26((int)uVar3 >> 4);
  return;
}



int FUN_1000_4d76(uint param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  while ((*(char *)(iVar1 + param_2) != '\0' && (*(byte *)(iVar1 + param_2) != param_1))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



void FUN_1000_4dea(undefined2 param_1)

{
  undefined2 unaff_DS;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)0x5386;
  FUN_1000_1b94(0,uVar1);
  FUN_1000_1bf2(10,0x1e);
  FUN_1000_4c2a();
  FUN_1000_16ba(param_1);
  FUN_1000_4cce();
  FUN_1000_1b94(uVar1);
  return;
}



void __cdecl16near FUN_1000_4e20(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_0a70(*(undefined2 *)0x13b2);
  FUN_1000_0aa6(6,0x137,0,0xc0);
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  FUN_1000_0c9c(0x137,7,0xc0);
  return;
}



void FUN_1000_4e50(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar2 = FUN_1000_216c(param_1);
  iVar2 = iVar2 / 2 + -0x1e;
  iVar3 = -iVar2;
  iVar4 = FUN_1000_216c(param_1);
  FUN_1000_0a70(*(undefined2 *)0x13b2);
  iVar2 = iVar2 * -8;
  FUN_1000_0aa6(6,iVar2,0,0xc0);
  iVar4 = (iVar4 + iVar3 + 2) * 8;
  FUN_1000_0aa6(6,0x137,0,iVar4);
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  FUN_1000_0c9c(iVar2,7,0xc0);
  FUN_1000_0c9c(0x137,7,iVar4);
  uVar1 = *(undefined2 *)0x5386;
  FUN_1000_1b94(0);
  FUN_1000_1bf2(0,iVar3);
  FUN_1000_4c2a();
  FUN_1000_1850(param_1);
  FUN_1000_4cce();
  FUN_1000_1b94(uVar1);
  return;
}



void __cdecl16near FUN_1000_4f3c(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_0a70(*(undefined2 *)0x13b2);
  FUN_1000_0aa6(0x3e,0x138,0x39,0xbf);
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  FUN_1000_0c9c(0x137,0x38,0xc0);
  FUN_1000_0c9c(0x137,0x3f,0xc0);
  return;
}



void FUN_1000_4f7c(int param_1)

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
      FUN_1000_3f36(param_1,0x58a7);
      FUN_1000_3f36(param_1,0x58a6);
    }
    if (0x3b < *(byte *)0x5881) {
      pcVar1 = (char *)0x5881;
      *pcVar1 = *pcVar1 + -0x3c;
      FUN_1000_3f36(1,0x588c);
      pcVar1 = (char *)0x587f;
      *pcVar1 = *pcVar1 + '\x01';
      if (0x17 < *(byte *)0x587f) {
        *(undefined *)0x587f = 0;
        local_6 = 0;
        do {
          if (*(byte *)(local_6 + 0x58c8) < 0x80) {
            do {
              uVar5 = FUN_1000_2092(8,1);
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
            *(undefined *)0x587d = 1;
            piVar3 = (int *)0x5874;
            *piVar3 = *piVar3 + 1;
          }
        }
        FUN_1000_2900();
      }
    }
  }
  if (0x32 < *(byte *)0x58a5) goto LAB_1000_514a;
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
        goto LAB_1000_5115;
      }
      uVar5 = -(*(byte *)0x5881 - 0x3b);
    }
    *(undefined *)0x58a5 = *(undefined *)(uVar5 / 10 + 0x6a80);
  }
LAB_1000_5115:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(undefined *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(undefined *)0x58a5 = 10;
  }
  if (cVar4 != *(char *)0x58a5) {
    *(undefined *)0x24e6 = 1;
  }
LAB_1000_514a:
  if (*(char *)0x587f != *(char *)0x5880) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      FUN_1000_4a84();
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
    FUN_1000_71aa();
  }
  return;
}



undefined2 __cdecl16near FUN_1000_51a0(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x587a == 'T') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000_2092(3,0);
  }
  return uVar1;
}



void FUN_1000_51b8(int param_1,int param_2,undefined2 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  bool bVar4;
  
  if ((param_1 != 0x1c) &&
     ((((param_1 < 0x12 || (0x15 < param_1)) && (param_1 < 0x40)) &&
      ((param_1 < 0x28 || (0x2b < param_1)))))) goto LAB_1000_5370;
  pbVar1 = (byte *)FUN_1000_4402(param_2,param_3);
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
    goto LAB_1000_5370;
  }
  if (0x7f < param_1) goto LAB_1000_5370;
  if (uVar2 == 0x92) {
    pcVar3 = (char *)FUN_1000_4402(param_2 + 1,param_3);
    if ((*pcVar3 == -0x66) || (pcVar3 = (char *)FUN_1000_4402(param_2 + 1,param_3), *pcVar3 == -100)
       ) {
      param_1 = FUN_1000_51a0();
      param_1 = param_1 + 0x34;
    }
    else {
      param_1 = 0x32;
    }
    goto LAB_1000_5370;
  }
  if (uVar2 < 0x93) {
    if (uVar2 == 0x84) {
      param_1 = FUN_1000_51a0();
      param_1 = param_1 + 0x60;
      goto LAB_1000_5370;
    }
    if (uVar2 == 0x85) {
      param_1 = FUN_1000_51a0();
      param_1 = param_1 + 100;
      goto LAB_1000_5370;
    }
    if (uVar2 == 0x90) {
      pcVar3 = (char *)FUN_1000_4402(param_2 + -1,param_3);
      if ((*pcVar3 == -0x65) ||
         (pcVar3 = (char *)FUN_1000_4402(param_2 + -1,param_3), *pcVar3 == -100)) {
        param_1 = FUN_1000_51a0();
        param_1 = param_1 + 0x38;
      }
      else {
        param_1 = 0x30;
      }
      goto LAB_1000_5370;
    }
    bVar4 = uVar2 == 0x91;
LAB_1000_532a:
    if (bVar4) {
      param_1 = (uVar2 & 3) + 0x30;
      goto LAB_1000_5370;
    }
  }
  else {
    if (uVar2 < 0x9f) {
      if (0x9c < uVar2) {
        param_1 = FUN_1000_51a0();
        param_1 = param_1 + 0x3c;
        goto LAB_1000_5370;
      }
      bVar4 = uVar2 == 0x93;
      goto LAB_1000_532a;
    }
    if (uVar2 == 0xab) {
      param_1 = 0x1a;
      goto LAB_1000_5370;
    }
    if (uVar2 == 200) {
      param_1 = 0x17;
      goto LAB_1000_5370;
    }
    if (uVar2 == 0xc9) {
      param_1 = 0x18;
      goto LAB_1000_5370;
    }
  }
  pcVar3 = (char *)FUN_1000_4402(param_2 + -1,param_3);
  if ((*pcVar3 == -99) && (param_4 != 0)) {
    *(undefined *)(param_5 + param_4 * 0x20 + -0x551e) = 0x9e;
  }
LAB_1000_5370:
  *(undefined *)(param_5 + param_4 * 0x10 + -0x539c) = (byte)param_1;
  *(undefined *)(param_5 + param_4 * 0x20 + -0x54fe) = 0;
  return;
}



void __cdecl16near FUN_1000_5394(void)

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
           (iVar4 = FUN_1000_6ff0(local_e,iVar6), 5 < iVar4)) {
          *(undefined *)((int)local_14 + iVar6 + -0x54fe) = 0x1c;
        }
        else if ((*(char *)((int)local_14 + iVar6 + -0x54fe) == '\x1c') &&
                (iVar4 = FUN_1000_6ff0(local_e,iVar6), iVar4 < 6)) {
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
  local_16 = (char *)0x5d56;
  local_18 = (char *)0x5d53;
  pbVar7 = (byte *)0x5d52;
  local_1c = (undefined *)0x5d53;
  pcVar8 = (char *)0x5d53;
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
        goto LAB_1000_5601;
      }
      if (((*local_18 != '\0') && (*(char *)((uint)local_a * 0x20 + (uint)local_8 + -0x54fe) != -1))
         && (*(char *)((uint)local_a * 0x20 + (uint)local_8 + -0x54fe) != -0x79)) {
        if ((((*pbVar7 & 0xfc) == 0xe8) || (*pbVar7 == 0x1e)) || (*pbVar7 == 0x1f)) {
          uVar5 = (uint)local_8;
          if (*(char *)((uint)local_a * 0x20 + uVar5 + -0x54fe) != '\0') {
            *(undefined *)((uint)local_a * 0x10 + uVar5 + -0x539c) = *local_1c;
            iVar6 = (uint)local_a * 0x20 + uVar5;
            goto LAB_1000_5542;
          }
        }
        else if ((*pcVar8 == '\x1d') || (*pcVar8 == '\x1e')) {
          *(undefined *)((uint)local_a * 0x10 + (uint)local_8 + -0x539c) = *local_20;
          iVar6 = (uint)local_a * 0x20 + (uint)local_8;
LAB_1000_5542:
          *(undefined *)(iVar6 + -0x54fe) = 0;
        }
        else {
          if (*local_22 == '\\') {
            uVar5 = (uint)local_8;
            if (*(char *)((uint)local_a * 0x20 + uVar5 + -0x54fe) == -0x6e) {
              *(undefined *)((uint)local_a * 0x10 + uVar5 + -0x539c) = *local_24;
              iVar6 = (uint)local_a * 0x20 + uVar5;
              goto LAB_1000_5542;
            }
            uVar5 = *local_26 - 8;
          }
          else {
            uVar5 = (uint)*local_28;
          }
          FUN_1000_51b8(uVar5,bVar3,bVar2,local_a,local_8);
        }
      }
    }
LAB_1000_5601:
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



bool FUN_1000_5646(int param_1)

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



void __cdecl16near FUN_1000_56ac(void)

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
LAB_1000_571b:
          FUN_1000_10e0(iVar7,iVar5,uVar1);
        }
      }
      else {
        if (((*(char *)(local_c + iVar5 + -0x54fe) != -0x24) || (*(char *)0x5887 == '\0')) ||
           (0xf < *(byte *)0x5887)) {
          uVar1 = (uint)*(byte *)(*(byte *)(local_c + iVar5 + -0x54fe) + 0xb11e);
          goto LAB_1000_571b;
        }
        FUN_1000_1112(iVar7,iVar5,*(undefined *)0x5887);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xb);
    local_c = local_c + 0x20;
    local_10 = local_10 + 0x10;
    iVar7 = iVar7 + 1;
    if (10 < iVar7) {
      if (((0x7f < *(byte *)0x5893) &&
          (bVar8 = *(char *)0x589f == '\0', *(bool *)0x589f = bVar8, bVar8)) &&
         ((*(char *)0x589e != -1 && (iVar7 = FUN_1000_5646(*(undefined *)0x589e), iVar7 == 0)))) {
        iVar7 = (uint)*(byte *)0x589e * 8;
        iVar5 = (uint)*(byte *)(iVar7 + -0x45e6) * 0x10;
        iVar2 = iVar5 + 8;
        iVar7 = (uint)*(byte *)(iVar7 + -0x45e5) * 0x10;
        iVar3 = iVar7 + 8;
        FUN_1000_0a70(*(undefined2 *)0x13b0);
        local_8 = 0;
        do {
          iVar6 = 0;
          do {
            FUN_1000_0c9c(iVar5 + 0x17,iVar3 + local_8 + iVar6,iVar2);
            FUN_1000_0cf2(iVar7 + 0x17,iVar3,iVar2 + local_8 + iVar6);
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
              FUN_1000_0a70(*(undefined2 *)0x13b0);
              FUN_1000_0b10(local_16,iVar3,local_16,iVar2);
              FUN_1000_0f90(local_18,iVar3);
              FUN_1000_0a70(0);
              FUN_1000_0b10(local_12,local_c,local_12,iVar2);
              FUN_1000_0f90(local_18,local_c);
              FUN_1000_0b10(iVar6,iVar3,iVar6,iVar2);
              iVar4 = iVar7 + local_a + 0xf;
              FUN_1000_0b10(local_18,iVar4,local_16,iVar4);
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



void __cdecl16near FUN_1000_5910(void)

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
        FUN_1000_4552();
      }
      FUN_1000_2f62();
      if (*(byte *)0x5893 < 0x80) {
        FUN_1000_475a();
        FUN_1000_70a6();
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
                       FUN_1000_4402((local_6 & 0xff) + (uint)*(byte *)0x5897 + -5,
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
        FUN_1000_5d0a(0xb,(uint)*(byte *)0x5897 - (uint)*(byte *)0x589c,
                      (uint)*(byte *)0x5896 - (uint)*(byte *)0x589b,*(undefined *)0x58a5);
        *(undefined *)0x24e6 = 0;
      }
    }
    else {
      puVar7 = (undefined2 *)0xab02;
      puVar6 = (undefined2 *)0xad14;
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
    FUN_1000_5394();
    FUN_1000_56ac();
    if (*(char *)0x5891 != '\0') {
      FUN_1000_4102();
    }
  }
  *(undefined *)0x5891 = 1;
  return;
}



void FUN_1000_5a28(int param_1,undefined2 param_2_00,int param_2,int param_3,int param_4,int param_5
                  ,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  byte *pbVar9;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  int local_218;
  byte local_216;
  int local_214;
  int local_212;
  int local_20e;
  int local_206 [257];
  int local_4;
  
  local_20e = 0;
  if (0 < param_6) {
    bVar10 = param_3 == -0x6f;
    if (bVar10) {
      param_3 = 0;
    }
    local_206[0] = 5;
    local_206[1] = 5;
    local_4 = 2;
    puVar4 = (undefined *)
             FUN_1000_4402(param_5 + (uint)*(byte *)0x589c + 5,param_4 + (uint)*(byte *)0x589b + 5);
    *(undefined *)(param_1 + param_3 * 0x20 + param_2 + 0xa5) = *puVar4;
switchD_1000_5af8_caseD_9:
    local_218 = 7;
    if (local_20e != local_4) {
      iVar1 = local_206[local_20e];
      iVar2 = local_206[local_20e + 1];
      local_20e = local_20e + 2;
      local_214 = iVar1;
      local_212 = iVar2;
      do {
        bVar3 = true;
        switch(local_218) {
        case 0:
        case 1:
        case 7:
          local_212 = local_212 + -1;
          break;
        case 2:
        case 3:
          local_214 = local_214 + -1;
          break;
        case 4:
        case 5:
          local_212 = local_212 + 1;
          break;
        case 6:
          local_214 = local_214 + 1;
          break;
        default:
          goto switchD_1000_5af8_caseD_9;
        case -0xbad1541f:
          break;
        }
        if ((((local_212 < 0) || (10 < local_212)) || (local_214 < 0)) || (10 < local_214)) {
          bVar3 = false;
        }
        pbVar9 = (byte *)((param_3 + local_214) * 0x20 + param_2 + local_212 + param_1);
        if (bVar10) {
          if (*pbVar9 != 0xff) goto LAB_1000_5b95;
        }
        else if ((*(char *)(local_212 + local_214 * 0x20 + -0x54fe) == '\0') ||
                (0x1f < param_3 + local_214)) {
LAB_1000_5b95:
          bVar3 = false;
        }
        else {
          *(undefined *)(local_212 + local_214 * 0x20 + -0x54fe) = 0;
        }
        if (bVar3) {
          pbVar5 = (byte *)FUN_1000_4402(param_5 + local_214 + (uint)*(byte *)0x589c,
                                         param_4 + local_212 + (uint)*(byte *)0x589b);
          local_216 = *pbVar5;
          iVar6 = FUN_1000_6ff0(local_214,local_212);
          if (iVar6 < param_6 + 1) goto LAB_1000_5c93;
          if (bVar10) {
            uVar7 = (uint)local_216;
            uVar8 = FUN_1000_6ff0(local_214,local_212);
            iVar6 = FUN_1000_5dfe(uVar8,uVar7);
            if (iVar6 == 0) {
              if (((*(char *)(iVar1 * 0x20 + iVar2 + param_1) == '\0') ||
                  (*(char *)(iVar2 + (param_5 + iVar1) * 0x20 + param_4 + -0x52ec) == '\0')) ||
                 (*(char *)(local_212 + (param_5 + local_214) * 0x20 + param_4 + -0x52ec) == '\0'))
              {
                *pbVar9 = 0xff;
                local_216 = 0xff;
              }
              else {
LAB_1000_5c93:
                *pbVar9 = local_216;
              }
            }
            else {
              if (((-1 < param_5 + local_214) && (-1 < param_4 + local_212)) &&
                 ((param_4 + local_212 < 0x20 &&
                  ((param_5 + local_214 < 0x20 &&
                   (*(char *)(local_212 + (param_5 + local_214) * 0x20 + param_4 + -0x52ec) != '\0')
                   ))))) goto LAB_1000_5c93;
              *pbVar9 = 0;
            }
          }
          else {
            local_216 = 0xff;
          }
          uVar7 = (uint)local_216;
          uVar8 = FUN_1000_6ff0(local_214,local_212);
          iVar6 = FUN_1000_5dfe(uVar8,uVar7);
          if (iVar6 != 0) {
            local_206[local_4] = local_214;
            local_4 = local_4 + 1;
            local_206[local_4] = local_212;
            local_4 = local_4 + 1;
          }
        }
        local_218 = local_218 + -1;
      } while( true );
    }
  }
  return;
}



void FUN_1000_5d0a(undefined2 param_1_00,int param_1,int param_2,int param_3)

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
    FUN_1000_5a28(0xab02,0x20,0,0xff91,param_2 + -5,param_1 + -5,param_3);
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
                 FUN_1000_4402((uint)*(byte *)0x589c + param_1 + -5 + local_c,
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



bool FUN_1000_5dfe(int param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((((param_2 == 'K') || (param_2 == 'J')) || (param_2 == -0x46)) ||
     ((param_2 == -0x45 || (param_2 == -0x68)))) {
    bVar2 = param_1 == 1;
  }
  else {
    iVar1 = FUN_1000_0402(0x6a86,param_2,0x13);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



void __cdecl16near FUN_1000_5e4a(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
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
  local_4 = (undefined *)0xad14;
  puVar7 = (undefined *)0xad14;
  for (iVar5 = 0x400; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar2 = 0xff;
  }
  local_8 = 0;
  do {
    iVar5 = 0;
    do {
      puVar7 = (undefined *)
               FUN_1000_4402(local_8 + (uint)*(byte *)0x589c,(uint)*(byte *)0x589b + iVar5);
      uVar3 = *puVar7;
      iVar4 = FUN_1000_0402(0x6a9a,uVar3,10);
      if (iVar4 != 0) {
        aiStack_8e[local_90] = local_8;
        aiStack_8e[local_90 + 1] = iVar5;
        local_90 = local_90 + 2;
        *local_4 = uVar3;
      }
      local_4 = local_4 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    local_8 = local_8 + 1;
    local_6 = iVar5;
  } while (local_8 < 0x20);
  local_6 = local_90;
  local_8 = 0;
  if (0 < local_90) {
    local_a = 0xb;
    do {
      local_e = aiStack_8e[local_8] + -5;
      local_8 = local_8 + 1;
      local_c = aiStack_8e[local_8] + -5;
      puVar7 = (undefined *)0xab02;
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
      FUN_1000_5a28(0xad14,0x20,local_c,local_e,local_c,local_e,10);
      local_8 = local_8 + 1;
    } while (local_8 < local_6);
  }
  pcVar6 = (char *)0xad14;
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



void FUN_1000_5f86(undefined2 param_1,int param_2,uint param_3)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  *(undefined *)0x58a1 = (undefined)param_3;
  uVar1 = *(undefined *)0x5896;
  uVar2 = *(undefined *)0x5897;
  uVar3 = *(undefined *)0x5895;
  *(undefined *)0x5894 = *(undefined *)0x5893;
  bVar4 = *(byte *)0x587b;
  *(undefined *)0x5893 = 0xff;
  puVar7 = (undefined2 *)0xa9fc;
  puVar6 = (undefined2 *)0x5c5a;
  do {
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
    puVar7[2] = puVar6[2];
    puVar7[3] = puVar6[3];
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar6 < (undefined2 *)0x5d5a);
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
    FUN_1000_6bc2(local_6,1);
    *(undefined *)0x587b = 0xff;
    *(undefined *)0x589e = 0xff;
    *(undefined *)0x58a3 = 0;
                    // WARNING: Subroutine does not return
    thunk_FUN_172e_02ec();
  }
  if ((param_3 & 4) != 0) {
                    // WARNING: Subroutine does not return
    thunk_FUN_172e_02ec(param_2,param_3);
  }
  if ((param_3 & 2) != 0) {
                    // WARNING: Subroutine does not return
    thunk_FUN_172e_02ec(0);
  }
  if (*(char *)0xbb16 != '\0') {
    *(undefined *)0xbb16 = 0;
    FUN_1000_6fbc(1);
  }
  *(undefined *)0x5896 = uVar1;
  *(undefined *)0x5897 = uVar2;
  *(undefined *)0x5895 = uVar3;
  *(undefined *)0x5893 = *(undefined *)0x5894;
  *(undefined *)0x24e6 = 1;
  FUN_1000_2900();
  cVar5 = *(char *)((uint)bVar4 * 0x20 + 0x55b3);
  if ((cVar5 == 'D') || (cVar5 == 'S')) {
    *(undefined *)0x587b = 0xff;
  }
  else {
    *(byte *)0x587b = bVar4;
  }
  puVar7 = (undefined2 *)0x5c5a;
  puVar6 = (undefined2 *)0xa9fc;
  do {
    *puVar7 = *puVar6;
    puVar7[1] = puVar6[1];
    puVar7[2] = puVar6[2];
    puVar7[3] = puVar6[3];
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 4;
  } while (puVar6 < (undefined2 *)0xaafc);
  return;
}



void FUN_1000_60ec(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_DS;
  
  FUN_1000_256e(param_1 * 0x160,0x160,0xad14,0xa3f0);
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



void FUN_1000_6150(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined2 unaff_DS;
  undefined2 uVar6;
  byte local_a;
  undefined2 local_4;
  
  uVar3 = *(byte *)(param_1 * 8 + 0x5c5a) & 0xfc;
  FUN_1000_16ba(10);
  FUN_1000_16ba(0xfc);
  if (uVar3 < 0x40) {
    uVar6 = 0xa3fa;
  }
  else {
    uVar5 = (int)(uVar3 - 0x40) >> 0xf;
    uVar6 = *(undefined2 *)
             ((((int)((uVar3 - 0x40 ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5) * 2 + 0x18b6);
  }
  FUN_1000_1850(uVar6);
  FUN_1000_16ba(0xfb);
  FUN_1000_1850(0xa402);
  pbVar4 = (byte *)FUN_1000_4402(*(undefined *)(param_1 * 8 + 0x5c5d),
                                 *(undefined *)(param_1 * 8 + 0x5c5c));
  bVar1 = *pbVar4;
  if ((bVar1 < 4) || (((bVar1 & 0xfe) != 0x6a && ((bVar1 & 0xf0) == 0x60)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (uVar3 == 0xfc) {
    local_4 = 10;
    if (*(char *)0x57b5 != '\0') {
      FUN_1000_1850(0xa406);
      FUN_1000_2192(1,1,65000,1,0xfd2);
      *(undefined *)0x57b5 = 0;
    }
    goto LAB_1000_633a;
  }
  local_a = (byte)uVar3;
  if ((local_a & 0xf0) == 0x80) {
    bVar2 = true;
  }
  if ((*(byte *)0x587c & 0xf8) == 0x20) {
    if (uVar3 == 0x2c) {
      local_4 = 0xe;
    }
    else if (bVar2) {
      local_4 = 0xb;
    }
    else {
      local_4 = 0xd;
    }
    goto LAB_1000_633a;
  }
  if (uVar3 == 0x2c) {
    local_4 = 0xc;
    goto LAB_1000_633a;
  }
  if (bVar2) {
switchD_1000_6299_caseD_1:
    local_4 = 0xf;
    goto LAB_1000_633a;
  }
  if (bVar1 == 8) {
switchD_1000_6299_caseD_6:
    local_4 = 3;
    goto LAB_1000_633a;
  }
  if (bVar1 < 9) {
    switch(bVar1) {
    case 1:
    case 2:
    case 3:
      goto switchD_1000_6299_caseD_1;
    case 4:
      local_4 = 1;
      goto LAB_1000_633a;
    case 5:
      goto switchD_1000_6299_caseD_5;
    case 6:
      goto switchD_1000_6299_caseD_6;
    case 7:
switchD_1000_6299_caseD_7:
      local_4 = 4;
      goto LAB_1000_633a;
    default:
      goto switchD_1000_6299_caseD_7;
    }
  }
  if (bVar1 == 0x1d) {
LAB_1000_62d0:
    local_4 = 7;
    goto LAB_1000_633a;
  }
  if (bVar1 < 0x1e) {
    if (8 < bVar1) {
      if (bVar1 < 0xb) {
        local_4 = 5;
        goto LAB_1000_633a;
      }
      if ((10 < bVar1) && (bVar1 < 0x10)) {
        local_4 = 6;
        goto LAB_1000_633a;
      }
    }
switchD_1000_6299_caseD_7:
    if (*(char *)0x5893 == '\0') goto switchD_1000_6299_caseD_5;
  }
  else if (bVar1 != 0x44) {
    if (bVar1 < 0x45) {
      if ((0x1d < bVar1) && (bVar1 < 0x20)) goto switchD_1000_6299_caseD_7;
    }
    else if ((0x47 < bVar1) && ((bVar1 < 0x4a || ((0x69 < bVar1 && (bVar1 < 0x6c))))))
    goto LAB_1000_62d0;
    goto switchD_1000_6299_caseD_7;
  }
  local_4 = 8;
  goto LAB_1000_633a;
switchD_1000_6299_caseD_5:
  local_4 = 2;
LAB_1000_633a:
  FUN_1000_60ec(local_4);
  FUN_1000_5f86(0,param_1,0);
                    // WARNING: Subroutine does not return
  thunk_FUN_172e_02ec();
}



void FUN_1000_6360(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_60ec(0);
  FUN_1000_5f86(param_1,param_2,4);
  FUN_1000_5e4a();
  return;
}



void __cdecl16near FUN_1000_637e(void)

{
  undefined2 unaff_DS;
  
  FUN_1000_0a70(0);
  FUN_1000_0aa6(199,0x13f,0,0);
  FUN_1000_0a70(*(undefined2 *)0x13b2);
  FUN_1000_0aa6(6,0x13f,0,0);
  FUN_1000_0aa6(0xbf,0xbf,0xb9,0);
  FUN_1000_0aa6(0xbf,6,0,0);
  FUN_1000_0aa6(0xbf,0xbf,0,0xb9);
  FUN_1000_0aa6(0x57,0x13f,0,0x139);
  FUN_1000_0aa6(0x57,0x138,0x50,0xc0);
  FUN_1000_0aa6(0x3f,0x138,0x39,0xc0);
  FUN_1000_1cca(*(undefined2 *)0x13b2);
  FUN_1000_1bf2(0,0);
  FUN_1000_16ba(0x7b);
  FUN_1000_1bf2(0,0x27);
  FUN_1000_16ba(0x7c);
  FUN_1000_1bf2(0x17,0);
  FUN_1000_16ba(0x7d);
  FUN_1000_0a70(*(undefined2 *)0x13b0);
  FUN_1000_0b10(0xb8,7,7,7);
  FUN_1000_0f90(0xb8,0xb8);
  FUN_1000_0f90(7,0xb8);
  FUN_1000_0f90(7,7);
  FUN_1000_0b10(0x57,0xbf,0xbf,0xbf);
  FUN_1000_0f90(0x57,0x13f);
  FUN_1000_0b10(7,0x138,7,0xbf);
  FUN_1000_0f90(0x38,0x138);
  FUN_1000_0f90(0x38,0xbf);
  FUN_1000_0f90(7,0xbf);
  FUN_1000_0b10(0x3f,0x138,0x3f,0xbf);
  FUN_1000_0f90(0x50,0x138);
  FUN_1000_0f90(0x50,0xbf);
  FUN_1000_0f90(0x3f,0xbf);
  FUN_1000_1cca(*(undefined2 *)0x13b0);
  return;
}



uint FUN_1000_6506(undefined param_1,undefined param_2,undefined param_3,int param_4,int param_5)

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
            cVar2 = FUN_1000_3aae(7);
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
    if (((param_4 == 2) || (uVar8 != 0x20)) || (0x7fff < local_8)) goto LAB_1000_6751;
  }
  local_8 = 0xffff;
LAB_1000_6751:
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



void FUN_1000_6794(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 8;
  if (((*(byte *)(param_1 + -0x45ea) & 0x80) != 0) && ((*(byte *)(param_1 + -0x45ea) & 0x28) == 0))
  {
    if (*(char *)((uint)*(byte *)(param_1 + -0x45e9) * 0x20 + 0x55c5) == '*') {
      *(undefined *)((uint)*(byte *)(param_1 + -0x45e8) * 8 + 0x5c5b) = 0x1d;
      pbVar1 = (byte *)(param_1 + -0x45ea);
      *pbVar1 = *pbVar1 | 0x10;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + -0x45e9);
      if (*(char *)(uVar2 * 0x20 + 0x55c5) == ',') {
        FUN_1000_400c(uVar2);
      }
    }
  }
  return;
}



void FUN_1000_6800(int param_1)

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
  FUN_1000_2900();
  return;
}



void FUN_1000_6880(int param_1)

{
  undefined2 unaff_DS;
  
  if (((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) ||
     (*(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55b3) != 'P')) {
    FUN_1000_68ae(param_1);
  }
  return;
}



void FUN_1000_68ae(uint param_1)

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
    FUN_1000_2900();
    if ((*(byte *)0x58a1 & 4) != 0) {
      return;
    }
  }
  FUN_1000_5910();
  return;
}



void __cdecl16near FUN_1000_6936(void)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 unaff_DS;
  undefined *local_1e;
  undefined *local_1c;
  undefined *local_1a;
  undefined *local_18;
  undefined *local_16;
  undefined *local_14;
  undefined *local_12;
  char local_10;
  uint local_6;
  
  local_10 = '\0';
  local_12 = (undefined *)0xba14;
  local_14 = (undefined *)0x5c5a;
  local_16 = (undefined *)0x5c5b;
  local_18 = (undefined *)0x5c5c;
  local_1a = (undefined *)0x5c60;
  local_1c = (undefined *)0x5c5d;
  local_1e = (undefined *)0x5c5e;
  puVar3 = (undefined *)0x5c5f;
  do {
    *local_1a = 0;
    *local_18 = 0;
    *local_16 = 0;
    *local_14 = 0;
    *puVar3 = 0;
    *local_1e = 0;
    *local_1c = 0;
    local_12[3] = 0;
    local_12[2] = 0;
    local_12[1] = 0;
    *local_12 = 0;
    local_12[7] = 0;
    local_12[6] = 0;
    local_12[5] = 0;
    local_12[4] = 0;
    local_12 = local_12 + 8;
    local_14 = local_14 + 8;
    local_16 = local_16 + 8;
    local_18 = local_18 + 8;
    local_1a = local_1a + 8;
    local_1c = local_1c + 8;
    local_1e = local_1e + 8;
    puVar3 = puVar3 + 8;
  } while (puVar3 < (undefined *)0x5d5f);
  for (local_6 = 0; local_6 < *(byte *)0x585b; local_6 = local_6 + 1) {
    if (*(char *)(local_6 * 0x20 + 0x55b3) != 'D') {
      if (*(char *)(local_6 * 0x20 + 0x55c5) == '*') {
        local_10 = '*';
      }
      if (*(char *)(local_6 * 0x20 + 0x55c5) == ',') {
        local_10 = ',';
      }
      if (local_10 != '\0') {
        iVar2 = FUN_1000_2092(0xf,0);
        if (iVar2 == 0xb) {
          FUN_1000_1850(0xa422);
          FUN_1000_43ae(0x28,1,2000,0x4b0);
          FUN_1000_6e60(local_10,local_6);
        }
        local_10 = '\0';
      }
      iVar2 = FUN_1000_6506(*(undefined *)0x5895,*(undefined *)(local_6 + 0x172c),
                            *(undefined *)(local_6 + 0x1724),1,local_6);
      *(undefined *)((uint)*(byte *)(iVar2 * 8 + -0x45e8) * 8 + 0x5c61) = 0xff;
      switch(*(undefined *)(local_6 * 0x20 + 0x55b2)) {
      case 0x41:
        *(undefined *)((uint)*(byte *)(iVar2 * 8 + -0x45e8) * 8 + 0x5c5a) = 0x4c;
        break;
      case 0x42:
      case 0x53:
      case 0x54:
        *(undefined *)((uint)*(byte *)(iVar2 * 8 + -0x45e8) * 8 + 0x5c5a) = 0x44;
        break;
      case 0x44:
      case 0x4d:
        *(undefined *)((uint)*(byte *)(iVar2 * 8 + -0x45e8) * 8 + 0x5c5a) = 0x40;
        break;
      case 0x46:
      case 0x50:
      case 0x52:
        *(undefined *)((uint)*(byte *)(iVar2 * 8 + -0x45e8) * 8 + 0x5c5a) = 0x48;
      }
      *(undefined *)((uint)*(byte *)(iVar2 * 8 + -0x45e8) * 8 + 0x5c5b) =
           *(undefined *)((*(uint *)(iVar2 * 8 + -0x45e8) & 0xff) * 8 + 0x5c5a);
      if (*(char *)(local_6 * 0x20 + 0x55b3) == 'S') {
        FUN_1000_68ae(iVar2);
      }
      else {
        FUN_1000_6794(iVar2);
      }
    }
  }
  if (*(char *)0xadb9 == -0x24) {
    bVar1 = FUN_1000_6506(*(undefined *)0x5895,5,5,2,1);
    *(char *)((uint)bVar1 * 8 + 0x5c5f) = *(char *)0x5895 * '\x03' + '\a';
    *(undefined *)0xadb9 = *(undefined *)0xbb15;
  }
  return;
}



void FUN_1000_6bc2(uint param_1,uint param_2)

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
    FUN_1000_6936();
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
      iVar4 = FUN_1000_2092(0xf,0);
      local_6 = *piVar5;
      *piVar5 = local_28[iVar4];
      local_28[iVar4] = local_6;
      piVar5 = piVar5 + 1;
    } while (piVar5 < &local_a);
  }
  FUN_1000_1850(0xa438);
  if ((((*(char *)0x5894 == '\0') || (0x20 < *(byte *)0x5894)) || (param_1 == 0xc)) ||
     (local_8 == 0)) {
    local_6 = (uint)*(byte *)(param_1 * 8 + 0x13c2);
  }
  else {
    local_6 = 1;
  }
  if (((local_6 != 8) && (local_6 != 0x10)) && (local_6 != 1)) {
    local_6 = FUN_1000_2092(local_6,1);
    if (*(char *)0x5959 != '\0') {
      local_6 = FUN_1000_2092(local_6,1);
    }
    FUN_1000_5910();
    if (0x19 < (int)local_6) {
      local_6 = 0x1a;
    }
  }
  FUN_1000_6506(*(undefined *)0x5895,*(undefined *)(local_28[0] + 0x1714),
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
         (iVar4 = FUN_1000_3aae(8), iVar4 == 0)) {
        local_4 = (uint)*(byte *)(param_1 + 0x16d4);
      }
      iVar4 = *local_36;
      FUN_1000_6506(*(undefined *)0x5895,*(undefined *)(iVar4 + 0x1714),
                    *(undefined *)(iVar4 + 0x1704),0,local_4);
      uVar6 = uVar6 + 1;
    } while (uVar6 != local_6);
  }
  return;
}



undefined2 FUN_1000_6d82(uint param_1,uint param_2)

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



// WARNING: Removing unreachable block (ram,0x00016e31)
// WARNING: Removing unreachable block (ram,0x00016e0b)
// WARNING: Removing unreachable block (ram,0x00016de5)
// WARNING: Removing unreachable block (ram,0x00016df8)
// WARNING: Removing unreachable block (ram,0x00016e1e)
// WARNING: Removing unreachable block (ram,0x00016e44)

undefined2 FUN_1000_6da8(int param_1)

{
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0;
  if ((*(char *)0x5894 == '(') && (*(char *)(param_1 * 0x20 + 0x55c2) != '\x0f')) {
    local_6 = 0;
  }
  else if (*(char *)0x587a == 'P') {
    local_6 = 3;
  }
  return local_6;
}



undefined2 FUN_1000_6e60(uint param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  local_4 = 1;
  pbVar2 = (byte *)(param_2 * 0x20 + 0x55c1);
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
      goto LAB_1000_6f0e;
    }
    pbVar2 = (byte *)(param_2 * 0x20 + 0x55c6);
    if (param_1 != *pbVar2) {
      local_4 = 0;
      goto LAB_1000_6f0e;
    }
  }
  *pbVar2 = 0xff;
LAB_1000_6f0e:
  FUN_1000_6da8(param_2);
  return local_4;
}



int FUN_1000_6f1e(int param_1,undefined *param_2)

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
  
  FUN_1000_6f90();
  *(undefined2 *)0x6aa4 = param_2;
  FUN_1000_6f90();
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



void __cdecl16near FUN_1000_6f90(void)

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



void FUN_1000_6fbc(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void __cdecl16near FUN_1000_6fd6(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x60;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



undefined FUN_1000_6ff0(int param_1,int param_2)

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



void FUN_1000_7040(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  undefined2 unaff_DS;
  undefined local_8;
  
  local_8 = 0;
  if (param_3 == 1) {
    local_8 = 0xff;
  }
  pcVar2 = (char *)((param_4 % 0x10) * 0x20 + 0x1f7e);
  iVar1 = 0x10;
  do {
    *(undefined *)((pcVar2[1] + param_1) * 0x20 + (int)*pcVar2 + param_2 + -0x52ec) = local_8;
    pcVar2 = pcVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void __cdecl16near FUN_1000_70a6(void)

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
    FUN_1000_7040(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,0);
    FUN_1000_7040(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,1);
    FUN_1000_7040(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,2);
    if (*(int *)0x2182 == -1) goto LAB_1000_719c;
    FUN_1000_7040(*(undefined2 *)0x2184,*(undefined2 *)0x2182,1,0);
    FUN_1000_7040(*(undefined2 *)0x2184,*(undefined2 *)0x2182,1,1);
    iVar2 = 2;
  }
  else {
    FUN_1000_7040(*(undefined2 *)0x2180,*(undefined2 *)0x217e,0,*(undefined *)0x2186);
    if (*(int *)0x2182 != -1) {
      FUN_1000_7040(*(undefined2 *)0x2184,*(undefined2 *)0x2182,0,*(undefined *)0x2186);
    }
    pcVar1 = (char *)0x2186;
    *pcVar1 = *pcVar1 + '\x01';
    FUN_1000_7040(*(undefined2 *)0x2180,*(undefined2 *)0x217e,1,*(byte *)0x2186 + 2);
    if (*(int *)0x2182 == -1) goto LAB_1000_719c;
    iVar2 = *(byte *)0x2186 + 2;
  }
  FUN_1000_7040(*(undefined2 *)0x2184,*(undefined2 *)0x2182,1,iVar2);
LAB_1000_719c:
  if (0xf < *(byte *)0x2186) {
    *(undefined *)0x2186 = 0;
  }
  return;
}



void __cdecl16near FUN_1000_71aa(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_71ca(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_08e6();
  *(undefined2 *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



void FUN_1000_7200(void)

{
  code **ppcVar1;
  undefined2 unaff_DS;
  
  FUN_1000_08e6();
  *(undefined2 *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)(0x1000);
  return;
}



undefined2 FUN_1000_7234(int param_1)

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
  if (((bool)in_CF) || (*(int *)0x535c != 0)) goto LAB_1000_7286;
  if (param_1 == 0) {
LAB_1000_7265:
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
    if (!bVar4) goto LAB_1000_7265;
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
LAB_1000_7286:
  *(undefined2 *)0x535c = uVar3;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)(0x1000);
  return 0;
}



undefined2 FUN_1000_7296(void)

{
  code **ppcVar1;
  code *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DI;
  uint unaff_DS;
  bool bVar5;
  
  bVar5 = false;
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (!bVar5) {
    pcVar2 = (code *)swi(0x21);
    uVar4 = (*pcVar2)();
    pcVar2 = (code *)swi(0x21);
    uVar3 = unaff_DI;
    (*pcVar2)(uVar4);
    bVar5 = (unaff_DS & 1) == 0;
    if ((bVar5) && (*(undefined2 *)0x535c = 0, bVar5)) {
      return uVar3;
    }
  }
  *(undefined2 *)0x535c = uVar3;
  ppcVar1 = (code **)0x5394;
  (**ppcVar1)(0x1000);
  return 0;
}



void __cdecl16near FUN_172e_0010(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_172e_0015(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16near FUN_172e_001a(void)

{
  FUN_172e_0015();
  FUN_172e_0010();
  return;
}



void __cdecl16near FUN_172e_0035(void)

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



void __cdecl16far FUN_172e_007b(void)

{
  code *pcVar1;
  
  if (DAT_176c_008c != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    DAT_176c_008c = 0;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x000173d6)

void __cdecl16near FUN_172e_009f(void)

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
  FUN_172e_007b();
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
    cVar3 = FUN_172e_03b0();
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



void __cdecl16near FUN_172e_00fa(void)

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



// WARNING: Removing unreachable block (ram,0x0001745b)

int __cdecl16near FUN_172e_0123(void)

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



undefined2 __cdecl16near FUN_172e_01c1(void)

{
  int unaff_DI;
  undefined2 unaff_DS;
  undefined in_CF;
  
  FUN_172e_001a();
  while (FUN_172e_009f(), !(bool)in_CF) {
    *(undefined2 *)0x8c = *(undefined2 *)(unaff_DI + 0xe);
    FUN_172e_00fa();
    in_CF = false;
    FUN_172e_0123();
    if (!(bool)in_CF) {
      FUN_172e_00fa();
      in_CF = false;
      if ((*(int *)(unaff_DI + 8) == 0) || (FUN_172e_0246(), !(bool)in_CF)) break;
    }
  }
  FUN_172e_0010();
  return 0x176c;
}



void __cdecl16near FUN_172e_0246(void)

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
      FUN_172e_0123();
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



void __cdecl16far thunk_FUN_172e_0297(void)

{
  uint *puVar1;
  int iVar2;
  undefined2 in_AX;
  uint in_CX;
  undefined uVar3;
  
  DAT_176c_0090 = (char)((uint)in_AX >> 8);
  do {
    iVar2 = (in_CX - 1) * 0x10;
    uVar3 = 0;
    if ((*(uint *)(iVar2 + 6) & 0x8000) == 0) {
      FUN_172e_0035(in_CX - 1);
      FUN_172e_01c1();
      if ((bool)uVar3) {
        if (DAT_176c_0090 == '\0') {
          FUN_172e_03d4();
        }
        break;
      }
    }
    puVar1 = (uint *)(iVar2 + 6);
    *puVar1 = *puVar1 | 0x8000;
    in_CX = *(uint *)(iVar2 + 6) & 0x1fff;
  } while (in_CX != 0);
  FUN_172e_03cc();
  return;
}



void __cdecl16far FUN_172e_0297(void)

{
  uint *puVar1;
  int iVar2;
  undefined2 in_AX;
  uint in_CX;
  undefined uVar3;
  
  DAT_176c_0090 = (char)((uint)in_AX >> 8);
  do {
    iVar2 = (in_CX - 1) * 0x10;
    uVar3 = 0;
    if ((*(uint *)(iVar2 + 6) & 0x8000) == 0) {
      FUN_172e_0035(in_CX - 1);
      FUN_172e_01c1();
      if ((bool)uVar3) {
        if (DAT_176c_0090 == '\0') {
          FUN_172e_03d4();
        }
        break;
      }
    }
    puVar1 = (uint *)(iVar2 + 6);
    *puVar1 = *puVar1 | 0x8000;
    in_CX = *(uint *)(iVar2 + 6) & 0x1fff;
  } while (in_CX != 0);
  FUN_172e_03cc();
  return;
}



undefined2 __cdecl16far FUN_172e_02ec(void)

{
  undefined2 in_AX;
  
  thunk_FUN_172e_0297();
  return in_AX;
}



char __cdecl16near FUN_172e_03b0(void)

{
  code **ppcVar1;
  char in_AL;
  undefined2 unaff_SS;
  
  if (in_AL != '\0') {
    ppcVar1 = (code **)0x5394;
    (**ppcVar1)(0x172e);
    in_AL = '\0';
  }
  return in_AL;
}



void __cdecl16near FUN_172e_03cc(void)

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
  
  FUN_172e_007b((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  return;
}



void __cdecl16near FUN_172e_03d4(void)

{
  code *pcVar1;
  
  FUN_172e_007b();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



void __cdecl16far thunk_FUN_172e_02ec(void)

{
                    // WARNING: Subroutine does not return
  FUN_172e_02ec();
}



undefined2 __cdecl16far entry(void)

{
  int unaff_DS;
  
  *(int *)0x7fe = unaff_DS + 0x73e;
  *(undefined2 *)0x7fc = 0x322;
  return 0;
}


