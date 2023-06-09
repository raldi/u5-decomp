


int FUN_0000_25ce(void)

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
    else {
      *(int *)0x535c = uVar2;
      ppcVar1 = (code **)0x5394;
      (**ppcVar1)();
      in_BX = 0;
    }
  }
  else {
    *(int *)0x5350 = 0x42;
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



void FUN_0000_2a4e(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x5a;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



void FUN_0000_89be(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x6c;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
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
  int uVar3;
  int iVar4;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;

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
    uVar3 = *(int *)(*(int *)((int)&DAT_0000_fff6 + unaff_BP) * 8 + iVar4 + 0x2e32);
    FUN_0000_276c(*(int *)((int)&DAT_0000_fff6 + unaff_BP),uVar3,
                  *(int *)(iVar4 + 0x2e2a),
                  *(int *)(unaff_BP + -4) * 3 + *(int *)(unaff_BP + 4) + -1,*(int *)0xa9c6);
    FUN_0000_261c(*(int *)((int)&DAT_0000_fff6 + unaff_BP),uVar3,0x60,
                  *(int *)(unaff_BP + -0xc) * 3 + *(int *)(unaff_BP + 4) + -1,*(int *)0xa9c6)
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
  int unaff_DS;

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
  int unaff_DS;

  iVar2 = FUN_0000_8fec();
  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + iVar2;
  FUN_0000_a5d6();
  return;
}



int FUN_0000_9586(void)

{
  int iVar1;
  int iVar2;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;

  FUN_0000_8fec();
  *(int *)(unaff_BP + -0x12) = unaff_SI;
  if (*(int *)(unaff_BP + -0xc) == 900) {
    iVar1 = *(int *)(unaff_BP + -0x16);
    iVar2 = *(int *)(unaff_BP + -2);
    *(int *)(iVar1 + 2) = *(int *)(iVar2 + 2);
    *(int *)(iVar1 + 3) = *(int *)(iVar2 + 3);
    *(int *)(iVar2 + 2) = *(int *)(unaff_BP + -0x10);
    *(int *)(iVar2 + 3) = *(int *)(unaff_BP + -0x12);
  }
  iVar1 = *(int *)(unaff_BP + -2);
  if ((*(char *)(iVar1 + 2) == *(char *)0x5896) && (*(char *)(iVar1 + 3) == *(char *)0x5897)) {
    *(int *)(unaff_BP + -0xe) = 1;
    iVar2 = *(int *)(unaff_BP + -0x16);
    *(int *)(iVar1 + 2) = *(int *)(iVar2 + 2);
    *(int *)(iVar1 + 3) = *(int *)(iVar2 + 3);
  }
  return *(int *)(unaff_BP + -0xe);
}



void FUN_0000_9592(void)

{
  char *pcVar1;
  int unaff_BP;
  int unaff_SS;
  int unaff_DS;

  FUN_0000_8fec();
  if ((*(byte *)(unaff_BP + 6) & 7) == *(byte *)0x5c65) {
    FUN_0000_ad0e(*(int *)(unaff_BP + 4));
  }
  if ((*(int *)(unaff_BP + 4) == 0) &&
     (pcVar1 = (char *)0x2f26, *pcVar1 = *pcVar1 + '\x01', 2 < *(byte *)0x2f26)) {
    *(int *)0x2f26 = 0;
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
  int in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;

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
  int extraout_AH;
  byte in_CL;
  char in_CH;
  int extraout_DX;
  byte *in_BX;
  int iVar5;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;

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
  int in_DX;
  byte *in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;

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
  int uVar2;
  char cVar3;
  char extraout_AH;
  byte in_CL;
  byte in_CH;
  byte bVar4;
  char cVar5;
  byte bVar6;
  int in_DX;
  int uVar8;
  int uVar7;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  int unaff_SS;
  int unaff_DS;

  uVar2 = FUN_0000_8fec();
  uVar8 = (int)((uint)in_DX >> 8);
  cVar5 = (char)in_DX + in_CH;
  *(int *)0x9a01 = uVar2;
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
    uVar2 = (int)((uint)uVar7 >> 8);
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
  int *puVar5;
  int *puVar6;
  int *puVar7;
  int *puVar8;
  int *puVar9;
  int in_ESP;
  int uVar10;
  int unaff_SI;
  int unaff_CS;
  int unaff_SS;
  int unaff_DS;
  int *puVar4;

  iVar3 = (int)in_ESP;
  uVar10 = (int)((ulong)in_ESP >> 0x10);
  *(int *)(iVar3 + -2) = unaff_CS;
  puVar4 = (int *)(iVar3 + -4);
  *(int *)(iVar3 + -4) = 0x9933;
  uVar2 = FUN_0000_8fec();
  puVar1 = (uint *)(in_BX + unaff_SI);
  *puVar1 = *puVar1 | uVar2;
  puVar5 = *(int **)CONCAT22(uVar10,(int)puVar4 + 4);
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
  *(int *)((int)puVar7 + 8) = 1;
  puVar8 = (int *)((int)puVar7 + 6);
  *(int *)((int)puVar7 + 6) = 0xcdc8;
  FUN_0000_2642();
  puVar8[1] = 8;
  *puVar8 = 8;
  puVar8[-1] = 0xb7;
  puVar8[-2] = 0xb7;
  puVar9 = puVar8 + -3;
  puVar8[-3] = 0xcdd5;
  FUN_0000_24c6();
  *(int *)((int)puVar9 + 8) = 0;
  *(int *)((int)puVar9 + 6) = 0xcddb;
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
  int uVar4;
  char cVar5;
  byte in_CL;
  byte in_CH;
  char cVar6;
  byte bVar7;
  char cVar8;
  int in_DX;
  int uVar9;
  int extraout_DX;
  byte *in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_SS;
  int unaff_DS;
  int in_CF;
  bool bVar10;

  uVar4 = FUN_0000_8fec();
  bVar10 = (bool)verw();
  uVar9 = (int)((uint)in_DX >> 8);
  if (!(bool)in_CF && !bVar10) {
    *(int *)0x9a01 = uVar4;
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
    uVar4 = (int)((uint)extraout_DX >> 8);
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
  int unaff_DS;
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
  int *puVar4;
  char cVar5;
  int iVar6;
  int in_CX;
  char cVar7;
  int in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  int *puVar8;
  int unaff_DS;
  int in_stack_00000000;

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
  *(int *)0x6603 = *(int *)(*(byte *)0x6602 + 0x2c76);
  FUN_0000_3536();
  *(uint *)(unaff_BP + -0x1a) = *(byte *)(unaff_BP + 4) & 0xf;
  *(uint *)(unaff_BP + -2) = (uint)*(byte *)0x587b;
  *(int *)0x587b = 0xff;
  *(int *)0x589e = 0xff;
  iVar6 = *(byte *)0x5893 - 0x21;
  *(int *)(unaff_BP + -0x1c) = iVar6;
  if (0 < iVar6) {
    piVar1 = (int *)(unaff_BP + -0x1c);
    *piVar1 = *piVar1 + -1;
  }
  *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -0x1c) * 0x1600 + *(int *)(unaff_BP + -0x1a) * 0x160
  ;
  puVar8 = (int *)((int)FUN_0000_ad0e + 6);
  for (iVar6 = 0x160; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar4 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar4 = 0;
  }
  FUN_0000_3f8e(*(int *)(unaff_BP + -8),0x160,0xad14,0x2c6a);
  *(int *)0x5894 = *(int *)0x5893;
  *(uint *)(unaff_BP + -4) = (uint)*(byte *)0x5896;
  *(uint *)(unaff_BP + -6) = (uint)*(byte *)0x5897;
  *(int *)(unaff_BP + -0x10) = *(int *)0x5c62;
  *(int *)(unaff_BP + -0xe) = *(int *)0x5c64;
  *(int *)(unaff_BP + -0xc) = *(int *)0x5c66;
  *(int *)((int)&DAT_0000_fff6 + unaff_BP) = *(int *)0x5c68;
  *(int *)(unaff_BP + -0x18) = *(int *)0x5c6a;
  *(int *)(unaff_BP + -0x16) = *(int *)0x5c6c;
  *(int *)(unaff_BP + -0x14) = *(int *)0x5c6e;
  *(int *)(unaff_BP + -0x12) = *(int *)0x5c70;
  *(int *)0x5893 = 0xff;
  *(int *)0x58a0 = 0;
  func_0x0000965e(3,*(int *)(unaff_BP + 4));
  FUN_0000_7330();
  *(int *)0x58a1 = 0x82;
  iVar6 = FUN_0000_9652();
  if (iVar6 == 0) {
    if (*"\x02" == 'M') {
      func_0x0000966a();
    }
    *(int *)0x5893 = *(int *)0x5894;
    FUN_0000_9682(*(int *)(unaff_BP + -0x1a));
    pbVar3 = (byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5895 * 0x40 +
                     *(int *)(unaff_BP + -6) * 8 + *(int *)(unaff_BP + -4));
    *pbVar3 = *pbVar3 & 0xaf;
  }
  *(int *)0x5897 = *(int *)(unaff_BP + -6);
  *(int *)0x5896 = *(int *)(unaff_BP + -4);
  *(int *)0x5893 = *(int *)0x5894;
  FUN_0000_968e();
  *(int *)0x5c62 = *(int *)(unaff_BP + -0x10);
  *(int *)0x5c64 = *(int *)(unaff_BP + -0xe);
  *(int *)0x5c66 = *(int *)(unaff_BP + -0xc);
  *(int *)0x5c68 = *(int *)((int)&DAT_0000_fff6 + unaff_BP);
  *(int *)0x5c6a = *(int *)(unaff_BP + -0x18);
  *(int *)0x5c6c = *(int *)(unaff_BP + -0x16);
  *(int *)0x5c6e = *(int *)(unaff_BP + -0x14);
  *(int *)0x5c70 = *(int *)(unaff_BP + -0x12);
  *(int *)0x587b = *(int *)(unaff_BP + -2);
  return;
}



void FUN_0000_9d24(int param_1)

{
  char cVar1;
  int iVar2;
  int unaff_DS;
  int local_8;

  cVar1 = *(char *)0x5c67;
  if (param_1 != 0) {
    iVar2 = RANDOM(7,0);
    local_8 = (int)iVar2;
    *(int *)0x5c63 = local_8;
    *(int *)0x5c62 = local_8;
    *(int *)0x5c69 = 0;
    *(int *)0x5c68 = *(int *)(iVar2 + 0x1744);
    *(int *)0x5c67 = *(int *)(iVar2 + 0x173c);
    *(int *)0x5c66 = *(int *)0x5895;
    if (cVar1 != -1) {
      FUN_0000_2604(*(int *)0xa9c6);
    }
    *(int *)0xa9c6 = 0;
    iVar2 = FUN_0000_9e42();
    if (iVar2 == 0) {
      *(int *)0x5c63 = 0;
      *(int *)0x5c62 = 0;
      *(int *)0x5c67 = 0xff;
    }
  }
  if (*(char *)0x5c67 != -1) {
    do {
      iVar2 = FUN_0000_25ce(*(int *)((uint)*(byte *)0x5c62 * 2 + 0x25fa));
      *(int *)0xa9c6 = iVar2;
    } while (iVar2 == 0);
  }
  return;
}



void FUN_0000_9dc2(void)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int uVar4;
  int unaff_DS;

  uVar2 = *(int *)0x5386;
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



uint FUN_0000_9e42(void)

{
  byte bVar1;
  int uVar2;
  int iVar3;
  uint uVar4;
  int unaff_DS;
  uint local_a;
  int local_8;
  int local_6;

  local_8 = 0;
  do {
    bVar1 = *(byte *)0x5895;
    local_a = RANDOM(0x3f,0);
    bVar1 = *(byte *)((uint)bVar1 * 0x40 + 0x595a + local_a) & 0xf0;
    if ((bVar1 < 0x60) || (bVar1 == 0x70)) {
      uVar4 = (int)local_a >> 0xf;
      uVar4 = ((int)((local_a ^ uVar4) - uVar4) >> 3 ^ uVar4) - uVar4;
      if (((int)local_a % 8 != (uint)*(byte *)0x5896) && (uVar4 != *(byte *)0x5897)) {
        uVar2 = (int)((int)local_a % 8);
        *(int *)0x5c6c = uVar2;
        *(int *)0x5c64 = uVar2;
        local_6 = (int)uVar4;
        *(int *)0x5c6d = local_6;
        *(int *)0x5c65 = local_6;
        if (((*(char *)0x5c67 == '\x16') || (*(char *)0x5c67 == '\x18')) &&
           (iVar3 = RANDOM(99,0), 0x30 < iVar3)) {
          *(int *)0x5c69 = 0xff;
        }
        local_a = 1;
        goto LAB_0000_9eeb;
      }
    }
    local_8 = local_8 + 1;
    if (7 < local_8) {
LAB_0000_9eeb:
      if (local_8 == 8) {
        *(int *)0x5c6d = 0xff;
        *(int *)0x5c65 = 0xff;
        *(int *)0x5c6c = 0xff;
        *(int *)0x5c64 = 0xff;
        local_a = 0;
      }
      return local_a;
    }
  } while( true );
}



void FUN_0000_9f22(void)

{
  int unaff_DS;
  int uVar1;

  uVar1 = *(int *)0x5386;
  FUN_0000_2490(*(int *)0x13b2,uVar1);
  FUN_0000_24c6(7,0x98,0,0x28);
  FUN_0000_24c6(0xbf,0x98,0xb9,0x30);
  FUN_0000_2490(*(int *)0x13b0);
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



int FUN_0000_9fc6(void)

{
  int uVar1;
  int iVar2;
  int iVar3;
  int unaff_DS;
  int uVar4;

  if (*(char *)0xa9fa != '\0') {
    FUN_0000_4320();
    *(int *)0xa9fa = 0;
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
  int unaff_DS;

  FUN_0000_b7d0();
  FUN_0000_3270(0x2ca8);
  FUN_0000_3270(0x2caf);
  FUN_0000_2490(*(int *)0x13b0);
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



int FUN_0000_a0f2(byte param_1,int param_2)

{
  byte bVar1;
  int uVar2;
  int unaff_DS;
  uint local_a;
  uint local_8;
  int local_6;
  int local_4;

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
      *(int *)0x5896 = (byte)local_8;
      *(int *)0x5897 = (byte)local_a;
      FUN_0000_a060(local_6);
      local_8 = (uint)*(byte *)0x5896;
      local_a = (uint)*(byte *)0x5897;
    }
    bVar1 = bVar1 & 0xf0;
    if (((bVar1 < 0xa1) || (0xdf < bVar1)) &&
       ((local_6 != -1 || ((bVar1 != 0xa0 && (bVar1 != 0xf0)))))) {
      if ((local_8 != *(byte *)0x5c64) || (local_a != *(byte *)0x5c65)) {
        *(int *)0xa9fb = 0xf;
        *(int *)0x24e7 = 0;
        FUN_0000_ac10();
        *(int *)0x24e7 = 0;
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
  int unaff_DS;

  if (param_1 == 0xb) {
    FUN_0000_345e(0x20,1,*(int *)0x5888);
    FUN_0000_30da(10);
    goto LAB_0000_a2fa;
  }
  if (0xb < (int)param_1) {
    FUN_0000_a398();
    return;
  }
  if (0 < (int)param_1) {
    if ((int)param_1 < 5) {
      FUN_0000_a0f2(*(int *)
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



void FUN_0000_a398(void)

{
  int uVar1;
  int in_AX;
  int uVar2;
  int unaff_BP;
  int unaff_SS;
  int unaff_DS;

  if (in_AX == 0xd) {
LAB_0000_a334:
    uVar1 = *(int *)
             ((int)FUN_0000_5956 + 4 +
             (uint)*(byte *)0x5896 + (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8);
    *(int *)(unaff_BP + -4) = uVar1;
    uVar2 = FUN_0000_a0f2(uVar1,*(int *)(unaff_BP + 4));
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
      uVar2 = FUN_0000_5aa0(*(int *)(unaff_BP + 4));
      *(int *)(unaff_BP + -2) = uVar2;
      *(int *)(unaff_BP + -2) = 0;
      goto LAB_0000_a2fa;
    }
    uVar2 = FUN_0000_4b98(*(int *)(unaff_BP + 4));
  }
  *(int *)(unaff_BP + -2) = uVar2;
LAB_0000_a2fa:
  FUN_0000_a3ca();
  return;
}



void FUN_0000_a3ca(void)

{
  return;
}



int FUN_0000_a3d2(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_DS;
  int uStack_14;
  int local_12;
  int local_10;
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
        iVar6 = RANDOM(3,0);
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
           (((uVar7 != bVar3 || (uVar8 != bVar2)) || (iVar6 = RANDOM(7,0), iVar6 == 1)))) {
          local_e = 900;
          break;
        }
        local_c = local_c + 1;
      } while (local_c < 8);
      if (local_e == 900) {
        *(int *)0x5c6c = *(int *)0x5c64;
        *(int *)0x5c6d = *(int *)0x5c65;
        local_12 = (int)uVar7;
        *(int *)0x5c64 = local_12;
        uStack_14 = (int)uVar8;
        *(int *)0x5c65 = uStack_14;
      }
    }
    if ((*(char *)0x5c64 == *(char *)0x5896) && (*(char *)0x5c65 == *(char *)0x5897)) {
      local_10 = 1;
      *(int *)0x5c64 = *(int *)0x5c6c;
      *(int *)0x5c65 = *(int *)0x5c6d;
    }
  }
  return local_10;
}



void FUN_0000_a538(void)

{
  byte *pbVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int unaff_DS;
  byte *local_6;

  FUN_0000_3270(0x2d53);
  if (*(char *)0x585b != '\0') {
    local_6 = (byte *)0x55b5;
    pcVar3 = (char *)0x55b3;
    uVar4 = 0;
    do {
      uVar2 = RANDOM(0x1e,1);
      if ((*local_6 <= uVar2) && (*pcVar3 != 'D')) {
        *pcVar3 = 'S';
        FUN_0000_4448(uVar4);
        FUN_0000_3c5c(0xdac,0x32,1);
        *(int *)0xa9fa = 1;
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



void FUN_0000_a63c(byte param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int unaff_DS;

  *(int *)0x6602 = 5;
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
    *(int *)0x5893 = 0;
  }
  if (*(char *)0x5893 != '\0') {
    bVar3 = *(byte *)((int)FUN_0000_5956 + 4 +
                     (uint)*(byte *)0x5896 +
                     (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8) & 0xf0;
    if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
      FUN_0000_9622();
      FUN_0000_9bf0(*(int *)
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



void FUN_0000_a76e(void)

{
  char cVar1;
  int uVar2;
  int unaff_DS;

  FUN_0000_3270(0x2d92);
  if ((*"" - 1U & 7) == *(byte *)0x5896) {
    *(int *)0x6602 = 1;
  }
  else if ((*"" + 1U & 7) == *(byte *)0x5896) {
    *(int *)0x6602 = 3;
  }
  else if ((*"t\x13=\x02" - 1U & 7) == *(byte *)0x5897) {
    *(int *)0x6602 = 2;
  }
  else {
    *(int *)0x6602 = 0;
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
  *(int *)0x6603 = *(int *)0x6602;
LAB_0000_a812:
  FUN_0000_3270(0x2dbc);
  FUN_0000_b7d0();
  FUN_0000_3536();
  FUN_0000_3b1a(2);
  FUN_0000_9622();
  *(int *)0x58a0 = 0;
  *(int *)0x58a1 = 2;
  FUN_0000_9646();
  FUN_0000_79a6(0,*(int *)0x5c67,2);
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
  int unaff_DS;
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
      if ((*pcVar3 == 'S') && (iVar2 = RANDOM(0x3f,0), iVar2 < 4)) {
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



void FUN_0000_aa1e(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int unaff_DS;
  int iVar5;
  int iVar6;
  uint in_stack_0000fff4;
  uint uVar7;

  iVar6 = 1;
  iVar5 = 0;
  uVar7 = 0;
  *(int *)0xbb17 = 2;
  FUN_0000_963a();
  bVar3 = *(byte *)((int)FUN_0000_5956 + 4 +
                   (uint)*(byte *)0x5896 +
                   (*(uint *)0x5895 & 0xff) * 0x40 + (uint)*(byte *)0x5897 * 8) & 0xf0;
  FUN_0000_9f22();
  FUN_0000_9dc2();
  iVar4 = *(byte *)0x5893 - 0x20;
  if (((iVar4 == 1) || (iVar4 == 4)) || (iVar4 == 5)) {
    *(int *)0xbb14 = 0x4f;
    *(int *)0xbb15 = 0x45;
    *(int *)0x6604 = 3;
  }
  else {
    *(int *)0xbb14 = 0x4d;
    *(int *)0xbb15 = 5;
    if ((iVar4 == 6) || (iVar4 == 7)) {
      *(int *)0x6604 = 2;
    }
    else {
      *(int *)0x6604 = 1;
    }
  }
  if ((bVar3 == 0xa0) || (bVar3 == 0xf0)) {
    FUN_0000_9622();
    FUN_0000_9bf0(*(int *)
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



void FUN_0000_ac10(void)

{
  byte *pbVar1;
  int unaff_DS;

  pbVar1 = (byte *)0x24e7;
  *pbVar1 = *pbVar1 ^ 1;
  if ((*pbVar1 != 0) && (*(char *)0xa9fb != '\0')) {
    FUN_0000_3c5c(20000,*(int *)0xa9fb,1);
    FUN_0000_5956(4,0xa9fb);
  }
  return;
}



void FUN_0000_ac3c(uint param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_DS;

  uVar2 = (uint)*(byte *)0x5893;
  if (param_1 <= *(byte *)(uVar2 + 0x2dcf)) {
    iVar1 = *(byte *)(uVar2 + 0x2dc7) + param_1;
    FUN_0000_3642(0x18,0x27,*(int *)(iVar1 + 0x2e03),*(int *)(iVar1 + 0x2df7),0);
    FUN_0000_35b4(0);
    FUN_0000_36be(1);
    FUN_0000_3612(0,0);
    FUN_0000_30da(0xfd);
    FUN_0000_3270(*(int *)((iVar1 + -1) * 2 + 0x2e10));
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
  int unaff_DS;

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
  int uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_DS;
  uint local_e;
  char local_a;
  uint local_8;
  uint local_6;
  char local_4;

  if (*(char *)0x587a == 'T') {
    *(int *)0x5c68 = *(int *)(*(byte *)0x5c62 + 0x1744);
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
    iVar7 = RANDOM(100,0);
    local_6 = (uint)(iVar7 < 0x32);
    iVar7 = RANDOM(100,0);
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
    uVar3 = *(int *)(uVar4 * 8 + param_1 * 2 + 0x2e32);
    FUN_0000_276c(uVar4,uVar3,*(int *)(param_1 * 2 + 0x2e2a),local_6 * 3 + param_1 + -1,
                  *(int *)0xa9c6);
    FUN_0000_261c(uVar4,uVar3,0x60,local_e * 3 + param_1 + -1,*(int *)0xa9c6);
    local_4 = (char)uVar6;
    local_a = (char)(uVar5 & 0x90);
    *(char *)0x5c68 = local_4 + local_a + (char)local_8;
  }
  return;
}



void FUN_0000_ae6e(int param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int iVar3;
  int uVar4;
  int iVar5;
  int uVar6;
  int iVar7;
  int unaff_DS;

  uVar1 = *(int *)0x52c4;
  *(int *)0x52c4 = 0;
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
    uVar4 = *(int *)(param_2 + 0x2e42);
    do {
      iVar5 = RANDOM(iVar3 - iVar2,uVar4);
      uVar6 = RANDOM(iVar3,uVar4);
      FUN_0000_26bc(iVar2 + iVar5,uVar6,iVar5);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(int *)0x52c4 = uVar1;
  return;
}



void FUN_0000_af3a(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int unaff_DS;
  int uVar2;
  int uVar3;
  int local_8;

  if ((int)param_3 < 0x1f) {
    local_8 = *(int *)((param_3 & 3) * 2 + param_1 * 8 + 0x2e62);
    if ((param_1 != 0) && ((((byte)param_3 & 0xf8) == 8 || (((byte)param_3 & 0xfc) == 0x18)))) {
      local_8 = 0x60;
    }
    if (param_1 == 0) {
      uVar3 = *(int *)0xa9c0;
      uVar2 = 0xe;
      param_2 = 0;
LAB_0000_b042:
      FUN_0000_276c(param_2,uVar2,local_8,param_3,uVar3);
      return;
    }
    uVar3 = *(int *)0xa9c0;
    uVar2 = 0xe;
    param_2 = 0;
  }
  else {
    uVar1 = param_3 + 1;
    param_3 = ((int)uVar1 >> 1) - 0x10;
    uVar1 = uVar1 & 6;
    if (param_1 == 0) {
      local_8 = *(int *)(uVar1 + 0x2e72);
    }
    else {
      local_8 = 0x60;
    }
    if ((int)param_3 < 8) {
      if (param_2 == 0) {
        uVar2 = 0x60;
      }
      else {
        uVar2 = *(int *)(uVar1 + 0x2e82);
      }
    }
    else {
      uVar2 = *(int *)(uVar1 + param_2 * 8 + 0x2e7a);
    }
    if (param_1 == 0) {
      uVar3 = *(int *)0xa9c4;
      goto LAB_0000_b042;
    }
    uVar3 = *(int *)0xa9c4;
  }
  FUN_0000_261c(param_2,uVar2,local_8,param_3,uVar3);
  return;
}



int FUN_0000_b04c(int param_1,int param_2,int param_3,int param_4)

{
  int uVar1;
  int iVar2;
  int unaff_DS;

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
      uVar1 = *(int *)0x13b2;
    }
    FUN_0000_2490(uVar1);
    FUN_0000_26bc(param_4 + 1,param_3,param_4 + -1);
    FUN_0000_2712(param_3 + 1,param_3 + -1,param_4);
    if (param_2 < 4) {
      FUN_0000_2490(*(int *)0x13b2 + 8);
      FUN_0000_2684(param_3,param_4);
    }
    if ((param_2 != 0) || (iVar2 = RANDOM(0x40,0), iVar2 < 4)) {
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}



int FUN_0000_b0fa(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int unaff_DS;
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
              (((local_6 & 0xf0) == 0xc0 && (iVar4 = RANDOM(0x40,0), iVar4 < 4)))) {
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
    *(int *)0x52c4 = 1;
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
  int unaff_DS;
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
  int uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *puVar5;
  byte *pbVar6;
  int unaff_DS;
  int uVar7;
  byte *local_10;
  byte *local_c;
  byte *local_8;

  if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)0x13b2;
  }
  FUN_0000_2490(uVar7);
  if (param_2 == 0) {
    if ((*(int *)0x52c8 != 0) && (*(int *)0x52c8 != 3)) {
      FUN_0000_2490(*(int *)0x13b2 + 8);
    }
    iVar3 = param_1 * 0x10;
    local_8 = (byte *)(iVar3 + 0x2ea4);
    puVar5 = (int *)(iVar3 + 0x2ea5);
    do {
      uVar1 = *puVar5;
      uVar2 = (uint)*local_8;
      FUN_0000_2684(uVar1,uVar2);
      FUN_0000_2684(uVar1,0xbe - uVar2);
      local_8 = local_8 + 2;
      puVar5 = puVar5 + 2;
    } while (puVar5 < (int *)(iVar3 + 0x2eb5));
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
  int unaff_DS;

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
      FUN_0000_b376(*(int *)0x2f26,param_1);
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
    *(int *)0x2f26 = 0;
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
  int unaff_DS;
  uint local_8;

  *(int *)0x545e = 0xff;
  FUN_0000_2642(1);
  FUN_0000_2490(0);
  FUN_0000_24c6(0xb2,0xaf,0xe,0x60);
  FUN_0000_265c(0xb7,0x98,0x2a,0x28);
  *(int *)0x52c4 = 0;
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
         ((iVar3 = FUN_0000_accc(*(int *)0x5897,*(int *)0x5896), iVar3 != 0xe0 &&
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
  *(int *)0x52c4 = 0;
  return;
}



void FUN_0000_b7d0(void)

{
  FUN_0000_4320();
  FUN_0000_b680(1);
  FUN_0000_24ee(0xb2,0xaf,0xe,0x10,0,1);
  FUN_0000_ac10();
  FUN_0000_9dc2();
  return;
}



int FUN_0000_b7fc(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int unaff_DS;
  int local_4;

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



int FUN_0000_b85a(int param_1,int param_2)

{
  char *pcVar1;
  int uVar2;
  int iVar3;
  int unaff_DS;
  int local_4;

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
        *(int *)0x6602 = 4;
      }
      else {
        *(int *)0x6602 = 5;
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



void FUN_0000_b8f8(void)

{
  uint uVar1;
  int uVar2;
  int unaff_DS;

  uVar1 = (uint)*(byte *)0x5893;
  *(int *)0x5896 = *(int *)(uVar1 + 0x1e89);
  *(int *)0x5897 = *(int *)(uVar1 + 0x1eb1);
  FUN_0000_3270(0x6c84);
  if (*(char *)0x5895 == '\0') {
    *(int *)0x5895 = 0;
    uVar2 = 0x6c9c;
  }
  else {
    *(int *)0x5895 = 0xff;
    uVar2 = 0x6c8e;
  }
  FUN_0000_3270(uVar2);
  *(int *)0x5893 = 0;
  return;
}



int FUN_0000_b93a(void)

{
  char *pcVar1;
  int iVar2;
  int unaff_DS;

  FUN_0000_3270(0x6caa);
  iVar2 = (uint)*(byte *)0x6603 * 2;
  if (((*(int *)(iVar2 + 0x24d6) + (uint)*(byte *)0x5896 & 7) != (uint)*(byte *)0x5c64) ||
     ((*(int *)(iVar2 + 0x24de) + (uint)*(byte *)0x5897 & 7) != (uint)*(byte *)0x5c65)) {
    FUN_0000_3270(0x6cb2);
    return 0;
  }
  *(int *)0x58a1 = 2;
  FUN_0000_9622();
  FUN_0000_96d6();
  FUN_0000_9646();
  FUN_0000_79a6(0,*(int *)0x5c67,2);
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



int FUN_0000_ba00(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int uVar6;
  int unaff_DS;

  bVar2 = false;
  bVar3 = false;
  uVar4 = FUN_0000_accc(*(int *)0x5897,*(int *)0x5896);
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



void FUN_0000_bf34(int param_1,int param_2)

{
  int iVar1;
  int unaff_DS;

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
  int unaff_DS;
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
  int unaff_DS;
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
  int unaff_SS;
  int in_stack_00000000;

  *(int *)(unaff_BP + -2) = in_stack_00000000;
  bVar1 = '\x01' << (*(byte *)((int)&DAT_0000_fff6 + unaff_BP) & 7);
  *(byte *)(unaff_BP + -6) = bVar1;
  return (*(byte *)(unaff_BP + -2) & bVar1) != 0;
}



void FUN_0000_c5ea(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int unaff_DS;

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
  int uVar1;
  int iVar2;
  int unaff_DS;
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
    *(int *)((int)FUN_0000_ad0e + 6 + local_6 + local_4) = 0xff;
    local_4 = local_4 + local_a;
    local_6 = local_6 + local_c * 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_1 == 0) && (param_2 == -0x20)) {
    uVar1 = *(int *)0xbb14;
    *(int *)0xae19 = uVar1;
    *(int *)0xad59 = uVar1;
  }
  if ((param_1 == 3) && (param_2 == -0x20)) {
    uVar1 = *(int *)0xbb14;
    *(int *)0xadbc = uVar1;
    *(int *)0xadb6 = uVar1;
  }
  return;
}



void FUN_0000_c6f8(int param_1)

{
  int iVar1;
  int unaff_DS;
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
    *(int *)((int)FUN_0000_ad0e + 6 + local_6 + local_4) = *(int *)0xbb15;
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
  int unaff_DS;
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
    *(int *)((int)FUN_0000_ad0e + 6 + iVar1 + local_4) = *(int *)0xbb15;
    local_4 = local_4 + local_a;
    iVar1 = iVar1 + local_c * 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_0000_c91c(void)

{
  byte bVar1;
  int uVar2;
  int *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int *puVar7;
  int *puVar8;
  int unaff_DS;

  puVar7 = (int *)0xad34;
  uVar2 = *(int *)0xbb14;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = uVar2;
  }
  puVar7 = (int *)0xae34;
  uVar2 = *(int *)0xbb14;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = uVar2;
  }
  puVar8 = (int *)0xad15;
  puVar7 = (int *)0xad1d;
  do {
    uVar2 = *(int *)0xbb14;
    *puVar7 = uVar2;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 0x20;
    puVar7 = puVar7 + 0x20;
  } while (puVar7 < (int *)0xae7d);
  *(int *)0xae5e = 0xff;
  *(int *)0xae54 = 0xff;
  *(int *)0xad1e = 0xff;
  *(int *)((int)FUN_0000_ad0e + 6) = 0xff;
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
      *(int *)0xbb16 = 1;
      FUN_0000_89dc(0);
    }
    else {
      *(int *)0xbb16 = 0;
    }
  }
  iVar6 = 0;
  do {
    FUN_0000_c84e(iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return;
}



void FUN_0000_c9ee(void)

{
  char cVar1;
  int *puVar2;
  int uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *puVar7;
  char *pcVar8;
  int *piVar9;
  int *puVar10;
  int unaff_DS;
  int local_2e [16];
  int *local_e;
  int *local_c;
  int *local_a;
  int *local_8;
  int *local_6;
  uint local_4;

  puVar7 = (int *)((int)FUN_0000_ad0e + 6);
  do {
    uVar3 = *(int *)0xbb15;
    puVar10 = puVar7;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = uVar3;
    }
    puVar7 = puVar7 + 0x20;
  } while (puVar7 < (int *)((int)FUN_0000_ae6e + 6));
  if ((*(byte *)0x58a1 & 4) != 0) {
    *(int *)0xadb9 = 0xb3;
  }
  FUN_0000_c91c();
  iVar6 = 0;
  do {
    *(int *)(iVar6 + -0x51d9) = 0xff;
    *(int *)(iVar6 + -0x51e1) = 0xff;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  puVar7 = (int *)0xad7f;
  local_a = (int *)0xad5f;
  local_6 = (int *)0xad9f;
  local_e = (int *)0xad3f;
  iVar6 = 0;
  bVar4 = *(byte *)0x58a1;
  do {
    if ((bVar4 & 4) == 0) {
      *puVar7 = *(int *)(iVar6 + 0x2470);
      *local_a = *(int *)(iVar6 + 0x246a);
      *local_6 = *(int *)(iVar6 + 0x245e);
      *local_e = *(int *)(iVar6 + 0x2464);
    }
    else {
      uVar3 = *(int *)(iVar6 + 0x2452);
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
      *puVar7 = *(int *)(iVar6 + 0x2464);
      *local_a = *(int *)(iVar6 + 0x245e);
      *local_6 = *(int *)(iVar6 + 0x246a);
      *local_e = *(int *)(iVar6 + 0x2470);
    }
    else {
      uVar3 = *(int *)(iVar6 + 0x2458);
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
  local_8 = (int *)0xaddf;
  local_c = (int *)0xadff;
  iVar6 = 0;
  cVar1 = *(char *)0x6603;
  bVar4 = *(byte *)0x58a1;
  do {
    if ((bVar4 & 4) == 0) {
      if (cVar1 == '\0') {
        *local_8 = *(int *)(iVar6 + 0x2476);
        uVar3 = *(int *)((int)FUN_0000_2490 + 6 + iVar6);
      }
      else if (cVar1 == '\x01') {
        *local_8 = *(int *)(iVar6 + 0x2486);
        uVar3 = *(int *)(iVar6 + 0x24a6);
      }
      else if (cVar1 == '\x02') {
        *local_8 = *(int *)(iVar6 + 0x24a6);
        uVar3 = *(int *)(iVar6 + 0x2486);
      }
      else {
        if (cVar1 != '\x03') goto LAB_0000_cb55;
        *local_8 = *(int *)((int)FUN_0000_2490 + 6 + iVar6);
        uVar3 = *(int *)(iVar6 + 0x2476);
      }
      *local_c = uVar3;
    }
    else {
      *local_c = *(int *)((int)FUN_0000_24c6 + iVar6);
      *local_8 = *(int *)(iVar6 + 0x24b6);
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
        iVar5 = RANDOM(0xf,0);
        local_4 = *piVar9;
        *piVar9 = local_2e[iVar5];
        local_2e[iVar5] = local_4;
        *(int *)(iVar6 + -0x5241) = 0;
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      if ((*(byte *)0x58a1 & 4) == 0) {
        bVar4 = *(byte *)0x5c67;
      }
      else {
        iVar6 = RANDOM(7,0);
        bVar4 = *(byte *)(iVar6 + 0x173c);
      }
      pcVar8 = (char *)((uint)bVar4 * 8 + 0x13c2);
      local_4 = RANDOM(*pcVar8,1);
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



void FUN_0000_cc8a(void)

{
  char *pcVar1;
  char cVar2;
  int unaff_DS;

  cVar2 = *"\x02";
  if (cVar2 == '\x01') {
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + -1;
    *(int *)0x6603 = 3;
    *(int *)0x6602 = 3;
    if (7 < *(byte *)0x5896) {
      *(int *)0x5896 = 7;
    }
  }
  else if (cVar2 == '\x02') {
    pcVar1 = (char *)0x5896;
    *pcVar1 = *pcVar1 + '\x01';
    *(int *)0x6603 = 1;
    *(int *)0x6602 = 1;
    if (7 < *(byte *)0x5896) {
      *(int *)0x5896 = 0;
    }
  }
  else if (cVar2 == '\x03') {
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + -1;
    *(int *)0x6603 = 0;
    *(int *)0x6602 = 0;
    if (7 < *(byte *)0x5897) {
      *(int *)0x5897 = 7;
    }
  }
  else if (cVar2 == '\x04') {
    pcVar1 = (char *)0x5897;
    *pcVar1 = *pcVar1 + '\x01';
    *(int *)0x6603 = 2;
    *(int *)0x6602 = 2;
    if (7 < *(byte *)0x5897) {
      *(int *)0x5897 = 0;
    }
  }
  else {
    if (cVar2 == '\x05') {
      if (*(char *)0x5895 != '\0') {
        pcVar1 = (char *)0x5895;
        *pcVar1 = *pcVar1 + -1;
        *(int *)0x6602 = 4;
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
        *(int *)0x6602 = 5;
        return;
      }
    }
    FUN_0000_96be();
    *(int *)0x5893 = 0;
  }
  return;
}



void FUN_0000_cd4e(int param_1)

{
  int iVar1;
  int unaff_DS;

  if (*(char *)0x5893 != '\0') {
    if ((*(byte *)0xbb17 & 2) != 0) {
      FUN_0000_2a4e();
    }
    if ((*(byte *)0xbb17 & 1) == 0) {
      do {
        iVar1 = FUN_0000_25ce(*(int *)((uint)*(byte *)0x6604 * 2 + 0x25f2));
        *(int *)0xa9c0 = iVar1;
      } while (iVar1 == 0);
      do {
        iVar1 = FUN_0000_25ce(*(int *)0x25f2);
        *(int *)0xa9c4 = iVar1;
      } while (iVar1 == 0);
    }
    *(int *)0xbb17 = 1;
    if (param_1 != 0) {
      *(int *)0x5c63 = 0;
      *(int *)0x5c62 = 0;
      *(int *)0x5c65 = 0xff;
      *(int *)0x5c64 = 0xff;
      *(int *)0x5c67 = 0xff;
    }
    FUN_0000_2490(0);
    FUN_0000_24c6(0xb7,0xb7,8,8);
    FUN_0000_2642(1);
    FUN_0000_24c6(0xb7,0xb7,8,8);
    FUN_0000_2642(0);
  }
  return;
}



void FUN_0000_cde0(void)

{
  int iVar1;
  int unaff_DS;

  if ((*(byte *)0xbb17 & 1) != 0) {
    if (*(char *)0x5c67 != -1) {
      FUN_0000_2604(*(int *)0xa9c6);
    }
    *(int *)0xa9c6 = 0;
    FUN_0000_2604(*(int *)0xa9c4);
    FUN_0000_2604(*(int *)0xa9c0);
  }
  if ((*(byte *)0xbb17 & 2) == 0) {
    do {
      iVar1 = FUN_0000_2a14(*(int *)0x25f0);
    } while (iVar1 == 0);
  }
  if ((*(byte *)0xbb17 & 4) == 0) {
    FUN_0000_89be(0);
  }
  *(int *)0xbb17 = 6;
  return;
}



void FUN_0000_ce2e(int param_1,int param_2)

{
  int uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *puVar6;
  int iVar7;
  int *puVar8;
  int unaff_SS;
  int unaff_DS;
  int *local_22;
  int *local_20;
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
    puVar6 = (int *)0xba1a;
    puVar8 = (int *)0x5c5c;
    local_20 = (int *)0xba1b;
    local_22 = (int *)0x5c5d;
    iVar7 = 0x11;
    iVar4 = 0xb;
    do {
      uVar1 = *(int *)((int)FUN_0000_ad0e + 6 + local_4 * 0x20 + iVar4);
      *puVar8 = uVar1;
      *puVar6 = uVar1;
      uVar1 = *(int *)((int)FUN_0000_ad0e + 6 + local_4 * 0x20 + iVar7);
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
      iVar4 = RANDOM(7,0);
      local_8[iVar7] = *(byte *)((int)FUN_0000_3858 + 6 + iVar4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    local_22 = (int *)0x10;
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
        iVar7 = FUN_0000_7f26(*(int *)0x5895,*(int *)(local_e + -0x520c),
                              *(int *)(local_c + -0x522c),local_14,uVar5);
        if (local_14 == 2) {
          if (uVar5 == 1) {
            cVar3 = *(char *)0x5895 * '\x03' + '\a';
          }
          else if (uVar5 == 2) {
            cVar3 = RANDOM((uint)*(byte *)0x5895 * 10 + 10,1);
          }
          else {
            if (0xf < uVar5) goto LAB_0000_d035;
            cVar3 = RANDOM(*(byte *)(uVar5 + 0x383f) - 1,0);
            cVar3 = *(char *)(uVar5 + 0x384d) + cVar3;
          }
          *(char *)(iVar7 * 8 + 0x5c5f) = cVar3;
        }
      }
LAB_0000_d035:
      local_4 = local_4 + 1;
      local_c = local_c + 1;
      local_e = local_e + 1;
      local_22 = (int *)((int)local_22 + -1);
    } while (local_22 != (int *)0x0);
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
