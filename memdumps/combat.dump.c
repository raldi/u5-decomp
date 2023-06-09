typedef unsigned char   int;




// WARNING: Control flow encountered bad instruction data

void FUN_0000_0022(void)

{
  int *piVar1;
  int in_BX;
  int unaff_SI;
  int unaff_DS;

  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000_0026(void)

{
  int *piVar1;
  int in_BX;
  int unaff_SI;
  int unaff_DS;

  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + 1;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FUN_0000_004c(void)

{
  int *piVar1;
  int in_AX;
  int in_BX;
  int unaff_SI;
  int unaff_DS;
  byte in_CF;

  piVar1 = (int *)(in_BX + unaff_SI);
  *piVar1 = *piVar1 + in_AX + (uint)in_CF;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void switchD_0000:606a::caseD_3(void)

{
  code **ppcVar1;
  int unaff_DS;

  *(int *)0x5350 = 0x51;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Unable to track spacebase fully for stack
// WARNING: Removing unreachable block (ram,0x0001002c)

int FUN_0000_466c(int *param_1,int param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int in_CX;
  int *puVar7;
  int *unaff_BP;
  int unaff_SI;
  int unaff_DI;
  int unaff_SS;
  int unaff_DS;
  int in_stack_0000000e;
  int iStack_4;

  param_2 = param_2 >> 2;
  bVar4 = *(byte *)(param_2 + 0x54f4);
  if (10 < bVar4) {
    return 0;
  }
  iVar6 = (uint)bVar4 * 2;
  cVar5 = (char)param_2;
  switch(bVar4) {
  case 0:
    return param_2;
  case 1:
    iVar6 = FUN_1000_3270();
    pbVar2 = (byte *)0x58a2;
    *pbVar2 = *pbVar2 & 0xf3;
    return iVar6;
  case 3:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 4:
    pcVar1 = &stack0x0844 + unaff_SI;
    *pcVar1 = *pcVar1 + (char)in_CX;
    *(char *)(unaff_SI + 0x5c5e) = cVar5;
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    *unaff_BP = 0xe9bc;
    FUN_0000_7330();
    if (*param_1 == 0) {
      unaff_BP[-1] = 0x8b5c;
      puVar7 = unaff_BP + -2;
      unaff_BP = unaff_BP + -2;
      *puVar7 = 0xe9cb;
      FUN_0000_3270();
      *param_1 = 1;
    }
    *(int *)((int)unaff_BP + -2) = in_stack_0000000e;
    *(int *)((int)unaff_BP + -4) = 0xe9d8;
    iVar6 = FUN_0000_daca();
    return iVar6;
  case 5:
    piVar3 = (int *)(iVar6 + unaff_SI + -0x16f9);
    *piVar3 = *piVar3 + in_CX;
    return param_2;
  case 6:
    return iStack_4;
  case 7:
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    pcVar1 = (char *)(iVar6 + unaff_SI);
    *pcVar1 = *pcVar1 + cVar5;
    break;
  case 8:
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 9:
    FUN_0000_3ce0();
    return 1;
  case 10:
    *(int *)0x2186 = 0;
    return param_2;
  }
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  iVar6 = CONCAT11((char)((uint)iVar6 >> 8) + (char)in_CX,(char)iVar6);
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_DI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
  pcVar1 = (char *)(iVar6 + unaff_SI);
  *pcVar1 = *pcVar1 + cVar5;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00000470) overlaps instruction at (ram,0x0000046f)
//
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00001c12: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00001c15)
// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer
// WARNING: Removing unreachable block (ram,0x00006108)
// WARNING: Type propagation algorithm not settling

int * FUN_0000_5f72(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7)

{
  int *puVar1;
  byte **ppbVar2;
  int *piVar3;
  byte *pbVar4;
  uint *puVar5;
  char *pcVar6;
  int *puVar7;
  char *pcVar8;
  code *pcVar9;
  byte bVar10;
  uint uVar11;
  code **ppcVar12;
  code *pcVar13;
  code *pcVar14;
  byte bVar15;
  char cVar16;
  char cVar17;
  int uVar18;
  byte bVar28;
  byte bVar29;
  int uVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  int *piVar26;
  int *piVar27;
  int *in_CX;
  int *puVar30;
  uint extraout_DX;
  uint in_DX;
  int extraout_DX_00;
  byte bVar31;
  int *piVar32;
  int *puVar33;
  int *puVar34;
  int *puVar35;
  int *puVar36;
  int *puVar37;
  int *puVar38;
  int *puVar39;
  int *puVar40;
  int *piVar41;
  int *puVar42;
  char *pcVar43;
  int *unaff_SI;
  byte *pbVar44;
  int *unaff_DI;
  byte *unaff_ES;
  int uVar45;
  int uVar46;
  int unaff_SS;
  int uVar47;
  int unaff_DS;
  bool bVar48;
  bool bVar49;
  int uVar50;
  ulong uVar51;
  int in_stack_00000038;
  byte abStack_4e9 [719];
  byte *pbStack_21a;
  int *piStack_218;
  byte bStack_216;
  int *piStack_214;
  int *piStack_212;
  int iStack_210;
  int *piStack_20e;
  int iStack_20c;
  int *piStack_20a;
  int *piStack_208;
  int *apiStack_206 [232];
  int *piStack_36;
  int uStack_30;
  int iStack_2e;
  int uStack_2c;
  int uStack_2a;
  int uStack_28;
  int *in_stack_0000ffe2;
  char *pcVar52;
  int *in_stack_0000ffe4;
  byte *pbVar53;
  int *in_stack_0000ffe6;
  int *in_stack_0000ffe8;
  int *piStack_12;
  int uStack_10;
  uint uStack_c;
  int iStack_a;
  int *piStack_6;
  int uStack_4;

  puVar42 = (int *)&stack0xfffe;
  uStack_10 = 0;
  do {
    uVar18 = (int)((uint)in_CX >> 8);
    in_CX = (int *)CONCAT11(uVar18,3);
    iVar20 = uStack_10 * 8;
    if (*(byte *)(iVar20 + 0x5c5a) != 0) {
      bVar15 = *(byte *)(iVar20 + 0x5c60);
      uStack_c = bVar15 & 0xf;
      in_CX = (int *)CONCAT11(uVar18,4);
      piVar23 = (int *)(uint)(*(byte *)(iVar20 + 0x5c60) >> 4);
      uStack_4 = (int *)(*(byte *)(iVar20 + 0x5c5a) & 0xfc);
      uVar24 = (uint)*(byte *)(((int)(uStack_4 + -0x1a) >> 2) + 0x1bc8);
      iVar21 = uVar24 * 0x10;
      piVar22 = (int *)(iVar21 + 0x1b18);
      if (uStack_c != 0xf) {
        if ((bVar15 & 0xf) == 0) {
          if ((((*(char *)(iVar20 + 0x5c5b) != '\0') && (*(char *)(iVar20 + 0x5c5b) != '\x1d')) &&
              (*(char *)(iVar20 + 0x5c5b) != '\x1e')) &&
             ((((int *)0x33 < uStack_4 && (uStack_4 != (int *)0xe8)) && (uStack_4 != (int *)0xb4))))
          {
            if ((uStack_4 != (int *)0x5c) && (uStack_4 != (int *)0xa8)) {
              in_stack_0000ffe8 = (int *)0x0;
              in_stack_0000ffe6 = (int *)0xff;
              in_stack_0000ffe4 = (int *)0x6048;
              uVar50 = RANDOM();
              in_DX = (uint)((ulong)uVar50 >> 0x10);
              if ((int)uVar50 < 0x80) goto LAB_0000_610b;
            }
            iStack_a = 0;
            bVar15 = *(byte *)(piVar23 + uVar24 * 8 + 0xd8c);
            piStack_6 = (int *)(uint)bVar15;
            bVar29 = (byte)piVar23;
            if (piStack_6 < (int *)0x8) {
              piVar26 = (int *)((int)piStack_6 * 2);
              piVar32 = piVar26;
              piVar27 = piVar23;
              piStack_12 = piVar22;
              switch(piStack_6) {
              case (int *)0x0:
                if (piVar23 == (int *)0x0) {
                  return (int *)0x1;
                }
                if ((((*(byte *)0x153c & 2) != 0) && (iVar20 = RANDOM(), iVar20 != 0)) &&
                   (*(int *)0x57a8 != 0)) {
                  FUN_0000_3270();
                    // WARNING: Subroutine does not return
                  thunk_FUN_0000_8fec();
                }
                FUN_0000_4f84();
                FUN_0000_30da();
                func_0x0000d5fa();
                    // WARNING: Subroutine does not return
                thunk_FUN_0000_8fec();
              case (int *)0x1:
                goto switchD_0000_606a_caseD_1;
              case (int *)0x2:
                ppbVar2 = (byte **)(&stack0x02ea + (int)piVar22);
                *ppbVar2 = *ppbVar2 + (int)piVar26;
                piVar3 = piVar26 + uVar24 * 8 + 0xd8c;
                *(byte *)piVar3 = *(byte *)piVar3 >> 1 | *(byte *)piVar3 << 7;
                ppbVar2 = (byte **)(piVar26 + uVar24 * 8 + 0xd8c);
                *ppbVar2 = *ppbVar2 + (int)piVar23;
                pbVar44 = unaff_ES;
                FUN_0000_3270();
                *(bool *)0xa9ce = *(char *)0xa9ce == '\0';
                break;
              case (int *)0x3:
                *(int *)0x5350 = 0x51;
                ppcVar12 = (code **)0x5350;
                piVar23 = (int *)(**ppcVar12)();
                return piVar23;
              case (int *)0x4:
                puVar7 = unaff_DI + 7;
                *(char *)puVar7 = *(char *)puVar7 + (char)(in_DX >> 8);
                FUN_0000_3270();
                *param_1 = 1;
                piVar23 = (int *)FUN_0000_daca();
                return piVar23;
              case (int *)0x5:
                piVar3 = piVar26 + uVar24 * 8 + 0xd8c;
                bVar48 = CARRY1(*(byte *)piVar3,bVar29) ||
                         CARRY1(*(byte *)piVar3 + bVar29,CARRY2((uint)piStack_6,(uint)piStack_6));
                *(byte *)piVar3 = *(byte *)piVar3 + bVar29 + CARRY2((uint)piStack_6,(uint)piStack_6)
                ;
                LOCK();
                piVar3 = piVar26 + uVar24 * 8 + 0xd8c;
                bVar31 = *(byte *)piVar3;
                bVar15 = *(byte *)piVar3;
                *(byte *)piVar3 = bVar15 + bVar29 + bVar48;
                UNLOCK();
                piVar3 = piVar26 + uVar24 * 8 + 0xd8c;
                *(byte *)piVar3 =
                     *(byte *)piVar3 + bVar29 +
                     (CARRY1(bVar31,bVar29) || CARRY1(bVar15 + bVar29,bVar48));
                    // WARNING: Bad instruction - Truncating control flow here
                halt_baddata();
              case (int *)0x6:
                goto switchD_0000_e499_caseD_8;
              case (int *)0x7:
                return (int *)0x1;
              }
              goto LAB_0000_a802;
            }
            uStack_c._0_1_ = bVar15 + 0x80;
            in_CX = (int *)CONCAT11((char)((uint)in_CX >> 8),4);
            *(char *)(iVar20 + 0x5c60) = (bVar29 + 1) * '\x10' + (char)uStack_c;
          }
        }
        else {
          uStack_c._0_1_ = (char)uStack_c + -1;
          *(char *)(iVar20 + 0x5c60) = (*(byte *)(iVar20 + 0x5c60) & 0xf0) + (char)uStack_c;
        }
      }
    }
LAB_0000_610b:
    uStack_10 = uStack_10 + 1;
    if (0x1f < (int)uStack_10) {
      FUN_0000_5ed8();
      piVar23 = (int *)FUN_0000_89f6();
      return piVar23;
    }
  } while( true );
switchD_0000_e499_caseD_8:
  piVar23 = piVar26;
  iStack_20c = 1;
  while ((int *)0x7fff < piStack_218) {
    piStack_218 = (int *)0x7;
    if (piStack_20e == uStack_4) {
      return uStack_4;
    }
    piStack_214 = apiStack_206[(int)piStack_20e];
    unaff_DI = (int *)((int)(byte *)((int)piStack_20e + 1) * 2);
    piStack_212 = apiStack_206[(int)(byte *)((int)piStack_20e + 1)];
    piStack_20e = piStack_20e + 1;
    piStack_20a = piStack_214;
    piStack_208 = piStack_212;
  }
  bVar48 = piStack_218 < (int *)0x7;
  bVar49 = piStack_218 == (int *)0x7;
  piVar32 = piStack_218;
code_r0x00007513:
  if (bVar48 || bVar49) {
    bVar48 = CARRY2((uint)piVar32,(uint)piVar32);
    piVar32 = (int *)((int)piVar32 * 2);
    cVar16 = (char)piVar23;
    switch((int)piVar32[0x2d8b]) {
    case 0x2c2:
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      piVar3 = (int *)((int)piVar32 + (int)piVar22);
      *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
      break;
    case 0x5de5:
      uStack_4 = (int *)((int)piVar23 / (int)param_1);
      for (iVar20 = 0; iVar20 < (int)param_1; iVar20 = iVar20 + param_2) {
        FUN_0000_3d02();
        FUN_0000_3ae8();
      }
      piVar23 = (int *)FUN_0000_3d2e();
      return piVar23;
    case 0x83ec:
      while (bVar48) {
        *(byte *)in_stack_0000ffe6 = 0;
        *(byte *)in_stack_0000ffe8 = 0;
        *unaff_SI = 0;
        *(byte *)piVar27 = 0;
        *(int *)unaff_DI = 0;
        *(byte *)in_stack_0000ffe2 = 0;
        *in_stack_0000ffe4 = 0;
        *(byte *)((int)piStack_12 + 3) = 0;
        *(byte *)(piStack_12 + 1) = 0;
        *(byte *)((int)piStack_12 + 1) = 0;
        *(byte *)piStack_12 = 0;
        *(byte *)((int)piStack_12 + 7) = 0;
        *(byte *)(piStack_12 + 3) = 0;
        *(byte *)((int)piStack_12 + 5) = 0;
        *(byte *)(piStack_12 + 2) = 0;
        piVar27 = piVar27 + 4;
        unaff_SI = unaff_SI + 8;
        in_stack_0000ffe8 = in_stack_0000ffe8 + 4;
        in_stack_0000ffe6 = in_stack_0000ffe6 + 4;
        in_stack_0000ffe4 = in_stack_0000ffe4 + 8;
        in_stack_0000ffe2 = in_stack_0000ffe2 + 4;
        unaff_DI = unaff_DI + 4;
        bVar48 = unaff_DI < (int *)((int)FUN_0000_5d5e + 1);
        piVar22 = piStack_12;
        piStack_12 = piStack_12 + 4;
      }
      piStack_6 = (int *)0x0;
      uStack_4 = piVar22;
      do {
        piVar23 = (int *)(uint)*(byte *)0x585b;
        if (piVar23 <= piStack_6) {
          if (*(char *)0xadb9 == -0x24) {
            uVar24 = FUN_0000_7f26();
            *(char *)((uVar24 & 0xff) * 8 + 0x5c5f) = *(char *)0x5895 * '\x03' + '\a';
            bVar15 = *(byte *)0xbb15;
            piVar23 = (int *)(uint)bVar15;
            *(byte *)0xadb9 = bVar15;
          }
          return piVar23;
        }
        uVar18 = (int)((uint)in_CX >> 8);
        in_CX = (int *)CONCAT11(uVar18,5);
        if (*(char *)((int)piStack_6 * 0x20 + 0x55b3) != 'D') {
          if (*(char *)((int)piStack_6 * 0x20 + 0x55c5) == '*') {
            uStack_10 = CONCAT11(uStack_10._1_1_,0x2a);
          }
          if (*(char *)((int)piStack_6 * 0x20 + 0x55c5) == ',') {
            uStack_10 = CONCAT11(uStack_10._1_1_,0x2c);
          }
          if ((char)uStack_10 != '\0') {
            iVar20 = RANDOM();
            if (iVar20 == 0xb) {
              FUN_0000_3270();
              FUN_0000_5dce();
              FUN_0000_8880();
            }
            uStack_10 = uStack_10 & 0xff00;
          }
          bVar15 = *(byte *)(piStack_6 + 0xb96);
          in_stack_0000ffe6 = (int *)0x1;
          in_stack_0000ffe4 = (int *)(uint)*(byte *)(piStack_6 + 0xb92);
          in_stack_0000ffe2 = (int *)(uint)bVar15;
          in_stack_0000ffe8 = piStack_6;
          uVar50 = FUN_0000_7f26();
          in_DX = (uint)((ulong)uVar50 >> 0x10);
          iVar20 = (int)uVar50;
          *(int *)((uint)*(byte *)(iVar20 * 8 + -0x45e8) * 8 + 0x5c61) = 0xff;
          uVar46 = uRam000091a4;
          in_CX = (int *)CONCAT11(uVar18,5);
          piVar32 = (int *)((int)piStack_6 * 0x20);
          uVar24 = *(byte *)(piVar32 + 0x2ad9) - 0x41;
          if (uVar24 < 0x14) goto LAB_0000_84c4;
          piVar22 = (int *)((*(uint *)(iVar20 * 8 + -0x45e8) & 0xff) * 8);
          *(byte *)((uint)*(byte *)(iVar20 * 8 + -0x45e8) * 8 + 0x5c5b) =
               *(byte *)(piVar22 + 0x2e2d);
          in_CX = (int *)CONCAT11(uVar18,5);
          if (*(char *)((int)piStack_6 * 0x20 + 0x55b3) == 'S') {
            FUN_0000_82ce();
          }
          else {
            FUN_0000_81b4();
          }
        }
        piStack_6 = (int *)((int)piStack_6 + 1);
      } while( true );
    case 0x8b5e:
      puVar7 = (int *)((int)piVar32 + (int)unaff_DI);
      *(byte *)puVar7 = *(byte *)puVar7 & 0xe8;
      pcVar6 = &stack0x823c + (int)unaff_DI;
      *pcVar6 = *pcVar6 + '\x01';
    case 0x8b55:
      FUN_0000_8a60();
      if (*(int *)0x2182 != -1) {
        FUN_0000_8a60();
      }
      pcVar6 = (char *)0x2186;
      *pcVar6 = *pcVar6 + '\x01';
      piVar23 = (int *)FUN_0000_8a60();
      if (*(int *)0x2182 != -1) {
        uStack_28 = *(int *)0x2182;
        uStack_2a = *(int *)0x2184;
        uStack_2c = 0x8bbc;
        piVar23 = (int *)FUN_0000_8a60();
      }
      if (0xf < *(byte *)0x2186) {
        *(int *)0x2186 = 0;
      }
      return piVar23;
    case 0x8bd7:
      *(int *)0x5350 = 0x6c;
      ppcVar12 = (code **)0x5350;
      piVar23 = (int *)(**ppcVar12)();
      return piVar23;
    case 0x9000:
      thunk_FUN_0000_8f97();
      return piStack_6;
    case 0xfe46:
      if (((byte *)((int)piVar23 + bVar48 + 0x400) != (byte *)0x0) &&
         (iVar20 = RANDOM(), iVar20 < 0x20)) {
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      return (int *)0x0;
    }
    goto switchD_0000_606a_caseD_1;
  }
  if (((((int)piStack_212 < 0) || (10 < (int)piStack_212)) || ((int)piStack_214 < 0)) ||
     (10 < (int)piStack_214)) {
    iStack_20c = 0;
  }
  in_CX = (int *)CONCAT11((char)((uint)in_CX >> 8),5);
  piVar22 = (int *)((byte *)((int)piStack_212 + (param_4 + (int)piStack_214) * 0x20 + param_3) +
                   (int)param_1);
  if (iStack_210 == 0) {
    unaff_DI = (int *)((int)piStack_214 * 0x20);
    piVar23 = piStack_212;
    if ((*(byte *)(piStack_212 + (int)piStack_214 * 0x10 + -0x2a7f) == 0) ||
       (0x1f < param_4 + (int)piStack_214)) {
LAB_0000_75b5:
      iStack_20c = 0;
    }
    else {
      unaff_DI = (int *)((int)piStack_214 * 0x20);
      *(byte *)(piStack_212 + (int)piStack_214 * 0x10 + -0x2a7f) = 0;
    }
  }
  else if (*(byte *)piVar22 != 0xff) goto LAB_0000_75b5;
  if (iStack_20c != 0) {
    in_stack_0000ffe8 = (int *)((int)piStack_212 + (uint)*(byte *)0x589b + param_5);
    in_CX = (int *)(uint)*(byte *)0x589c;
    piVar23 = (int *)FUN_0000_5e22();
    bStack_216 = *(byte *)piVar23;
    in_stack_0000ffe6 = piStack_212;
    iVar20 = FUN_0000_8a10();
    if (iVar20 < param_7) {
LAB_0000_76b3:
      *(byte *)piVar22 = bStack_216;
    }
    else if (iStack_210 == 0) {
      bStack_216 = 0xff;
    }
    else {
      FUN_0000_8a10();
      iVar20 = FUN_0000_781e();
      uVar18 = (int)((uint)in_CX >> 8);
      if (iVar20 == 0) {
        in_CX = (int *)CONCAT11(uVar18,5);
        piVar23 = piStack_208 + (int)piStack_20a * 0x10;
        unaff_DI = param_1;
        if (((*(byte *)((int)(piStack_208 + (int)piStack_20a * 0x10) + (int)param_1) != 0) &&
            (unaff_DI = (int *)((param_6 + (int)piStack_20a) * 0x20 + param_5),
            piVar23 = piStack_208, ((byte *)((int)piStack_208 + (int)unaff_DI))[-0x52ec] != 0)) &&
           (unaff_DI = (int *)((param_6 + (int)piStack_214) * 0x20 + param_5),
           piVar23 = piStack_212, ((byte *)((int)piStack_212 + (int)unaff_DI))[-0x52ec] != 0))
        goto LAB_0000_76b3;
        *(byte *)piVar22 = 0xff;
        bStack_216 = 0xff;
      }
      else {
        unaff_DI = (int *)(param_6 + (int)piStack_214);
        if (((-1 < (int)unaff_DI) &&
            (pbStack_21a = (byte *)(param_5 + (int)piStack_212), -1 < (int)pbStack_21a)) &&
           (((int)pbStack_21a < 0x20 && ((int)unaff_DI < 0x20)))) {
          in_CX = (int *)CONCAT11(uVar18,5);
          unaff_DI = (int *)((param_6 + (int)piStack_214) * 0x20 + param_5);
          piVar23 = piStack_212;
          if (((byte *)((int)piStack_212 + (int)unaff_DI))[-0x52ec] != 0) goto LAB_0000_76b3;
        }
        *(byte *)piVar22 = 0;
      }
    }
    in_stack_0000ffe4 = (int *)(uint)bStack_216;
    in_stack_0000ffe2 = piStack_212;
    FUN_0000_8a10();
    uVar50 = FUN_0000_781e();
    in_DX = (uint)((ulong)uVar50 >> 0x10);
    if ((int)uVar50 != 0) {
      apiStack_206[(int)uStack_4] = piStack_214;
      uStack_4 = (int *)((int)uStack_4 + 1);
      unaff_DI = (int *)((int)uStack_4 * 2);
      apiStack_206[(int)uStack_4] = piStack_212;
      uStack_4 = (int *)((int)uStack_4 + 1);
    }
  }
  piStack_218 = (int *)((int)piStack_218 - 1);
  piVar26 = piVar23;
  goto switchD_0000_e499_caseD_8;
LAB_0000_ebe5:
  uStack_4 = piVar23;
  if (((*(byte *)(uStack_4 + 1) & 0x80) != 0) && (*(byte *)((int)uStack_4 + 3) == uVar24)) {
    piVar3 = uStack_4 + 1;
    *(byte *)piVar3 = *(byte *)piVar3 | 0x20;
    iVar21 = (uint)*(byte *)(uStack_4 + 2) * 8;
    *(int *)(iVar21 + 0x5c5b) = 0x1e;
    *(int *)(iVar21 + 0x5c5a) = 0x1e;
    goto LAB_0000_ec10;
  }
  piVar23 = uStack_4 + 4;
  if ((int *)0xbb13 < uStack_4 + 4) {
LAB_0000_ec10:
    if (uVar24 == *(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
    FUN_0000_7330();
LAB_0000_ec36:
    FUN_0000_e9e0();
    piVar23 = (int *)FUN_0000_ea58();
    if (iVar20 == 0) {
      piVar23 = (int *)FUN_0000_3270();
    }
    return piVar23;
  }
  goto LAB_0000_ebe5;
code_r0x0000f1f6:
  goto LAB_0000_f247;
switchD_0000_606a_caseD_1:
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  cVar16 = (char)piVar23;
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  unaff_DI = (int *)((int)unaff_DI + (int)piVar23);
  bVar15 = cVar16 + *(byte *)((int)piVar32 + (int)piVar22);
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar15;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22) + 3;
  cVar16 = (char)((uint)piVar32 >> 8);
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar15;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar15;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar15;
  bVar29 = bVar15 / 0;
  puVar1 = &stack0xfffe + (int)piVar22;
  *puVar1 = *puVar1;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + (char)in_CX;
  bVar15 = bVar15 % 0 + *(byte *)((int)piVar32 + (int)piVar22);
  piVar26 = (int *)CONCAT11(bVar29,bVar15);
  pcVar6 = (char *)0xe000;
  *pcVar6 = *pcVar6 + (char)piVar32;
  piVar3 = piVar32;
  *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
  piVar3 = piVar32;
  *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
  piVar23 = (int *)((int)in_CX - 1U);
  if ((int *)((int)in_CX - 1U) == (int *)0x0 || *(byte *)piVar3 == 0) {
    in_CX = in_CX + -1;
    if (in_CX != (int *)0x0 && *(byte *)piVar3 != 0) {
      pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
      *pbVar4 = *pbVar4 + bVar15;
      pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
      *pbVar4 = *pbVar4 + bVar15;
      pbVar4 = (byte *)((int)&uStack_4 + 1 + (int)piVar22);
      *pbVar4 = *pbVar4 + bVar15;
      pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
      *pbVar4 = *pbVar4 + bVar15;
      ppbVar2 = (byte **)((int)piVar32 + (int)unaff_DI);
      *ppbVar2 = *ppbVar2 + (int)piVar26;
      ppbVar2 = (byte **)((int)piVar32 + (int)piVar22);
      *ppbVar2 = *ppbVar2 + (int)piVar26;
      ppbVar2 = (byte **)((int)piVar32 + (int)unaff_DI);
      *ppbVar2 = *ppbVar2 + (int)piVar26;
      ppbVar2 = (byte **)((int)piVar32 + (int)unaff_DI);
      *ppbVar2 = *ppbVar2 + (int)piVar26;
      pcVar6 = (char *)0x1800;
      *pcVar6 = *pcVar6 + cVar16;
      goto code_r0x00000485;
    }
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    puVar7 = unaff_DI;
    *(char *)puVar7 = *(char *)puVar7 + (char)in_CX;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 - bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar29;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    piVar26 = (int *)CONCAT11(bVar29 + (char)in_DX,bVar15);
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 ^ bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    *(int **)0x1330 = piVar26;
    pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
    *pbVar4 = *pbVar4 + bVar15;
    piVar23 = in_CX;
  }
  in_CX = piVar23;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  cVar16 = (char)piVar26;
  *pbVar4 = *pbVar4 + cVar16;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + cVar16;
  cVar16 = cVar16 + *(byte *)((int)piVar32 + (int)piVar22);
  piVar26 = (int *)CONCAT11((char)((uint)piVar26 >> 8),cVar16);
  pbVar4 = (byte *)((int)piVar32 + (int)unaff_DI);
  *pbVar4 = *pbVar4 + cVar16;
  ppbVar2 = (byte **)((int)piVar32 + (int)unaff_DI);
  *ppbVar2 = *ppbVar2 + (int)piVar26;
  pbVar4 = (byte *)((int)piVar32 + (int)unaff_DI);
  *pbVar4 = *pbVar4 + cVar16;
  ppbVar2 = (byte **)((int)piVar32 + (int)unaff_DI);
  *ppbVar2 = *ppbVar2 + (int)piVar26;
  ppbVar2 = (byte **)0x3e00;
  *ppbVar2 = *ppbVar2 + (int)piVar32;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + (char)piVar32;
  goto code_r0x00000485;
LAB_0000_84c4:
  bVar48 = CARRY2(uVar24,uVar24);
  piVar23 = (int *)(uVar24 * 2);
  bVar49 = piVar23 == (int *)0x0;
  bVar29 = (byte)piVar32;
  switch(uVar24) {
  case 0:
    goto code_r0x0000f1f6;
  case 1:
    if (in_CX == (int *)0x32) {
      if (*(byte *)((uint)*(byte *)(piStack_6 + 2) * 8 + 0x5c5a) < 0x80) {
        FUN_0000_d56a();
        in_CX = (int *)FUN_0000_4f84();
      }
    }
    else {
      if (in_CX == (int *)0x64) {
        FUN_0000_4f84();
        FUN_0000_54ce();
        FUN_0000_d224();
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      if (in_CX == (int *)0x96) {
        in_CX = (int *)FUN_0000_82ce();
      }
    }
    return in_CX;
  case 2:
    *(byte *)0xfe58 = bVar29;
    if ((*(byte *)0x58a2 & 0x20) != 0) {
      FUN_0000_fc94();
      FUN_0000_3270();
      FUN_0000_5dce();
    }
    if ((*(byte *)0x58a2 & 0x22) != 0) {
      piVar23 = (int *)FUN_0000_004c();
      return piVar23;
    }
    if ((uStack_4 == (int *)0x0) || (((uint)uStack_4 & 0x20) != 0)) {
      FUN_0000_fc94();
      FUN_0000_3270();
      pbVar4 = (byte *)0x58a2;
      *pbVar4 = *pbVar4 | 1;
      piVar23 = (int *)FUN_0000_0026();
      return piVar23;
    }
    if ((*(byte *)0x58a2 & 4) != 0) {
      FUN_0000_fc94();
      piVar23 = (int *)FUN_0000_0022();
      return piVar23;
    }
    if ((*(byte *)0x58a2 & 8) != 0) {
      piVar23 = (int *)FUN_0000_0026();
      return piVar23;
    }
    FUN_0000_fc94();
    if (((uint)uStack_4 & 0x80) == 0) {
      piVar23 = (int *)func_0x0001977e();
      if ((((piVar23 != (int *)0x1) && (piVar23 != (int *)0x2)) && (piVar23 != (int *)0x3)) &&
         (piVar23 != (int *)0x4)) goto LAB_1000_0026;
    }
    else if ((param_1 != (int *)0xff) && (*(char *)((int)param_1 * 8 + -0x45e9) == '-')) {
      FUN_0000_3270();
      FUN_0000_5dce();
      pbVar4 = (byte *)(param_2 * 8 + -0x45ea);
      *pbVar4 = *pbVar4 | 4;
      *(int *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c5b) = 0;
      piVar23 = (int *)FUN_0000_5506();
      goto LAB_1000_0026;
    }
    piVar23 = (int *)FUN_1000_3270();
LAB_1000_0026:
    if (((uint)uStack_4 & 0x80) != 0) {
      func_0x00014320();
      piVar23 = (int *)FUN_1000_7330();
    }
    pbVar4 = (byte *)0x58a2;
    *pbVar4 = *pbVar4 & 0xf3;
    return piVar23;
  case 3:
    bVar15 = func_0x000d4857();
    piVar23 = (int *)(uint)(byte)(bVar15 + in_stack_00000038._1_1_);
    bVar48 = (byte)(bVar15 + in_stack_00000038._1_1_) == 0;
    if (CARRY1(bVar15,in_stack_00000038._1_1_) || bVar48) goto code_r0x00008790;
    while (!bVar48) {
      uStack_4 = param_1;
      if (((int)piVar22 < iStack_2e) && (iVar20 = FUN_0000_54ce(), iVar20 == 0)) {
        uStack_4 = (int *)(uint)*(byte *)(param_1 + 0xb6a);
      }
      iVar20 = *piStack_36;
      uStack_2c = CONCAT11(uStack_2c._1_1_,*(int *)(iVar20 + 0x1704));
      uStack_30 = CONCAT11(uStack_30._1_1_,*(int *)(iVar20 + 0x1714));
      piVar23 = (int *)FUN_0000_7f26();
      piStack_36 = piStack_36 + 1;
code_r0x00008790:
      piVar22 = (int *)((int)piVar22 + 1);
      bVar48 = piVar22 == piStack_6;
    }
    return piVar23;
  case 5:
    piVar23 = (int *)FUN_0000_a380();
    return piVar23;
  case 6:
    pcVar14 = (code *)swi(0xeb);
    (*pcVar14)();
    uVar24 = FUN_0000_63a8();
    if (uVar24 == 0xffff) {
      return (int *)0x0;
    }
    bVar15 = *(byte *)((int)piStack_6 * 8 + 0x5c5f);
    FUN_0000_5494();
    pbVar4 = (byte *)0x24e6;
    *pbVar4 = *pbVar4 | 2;
    if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
      if (*(byte *)0x5888 < 3) {
        *(int *)0x5888 = 0;
      }
      else {
        pcVar6 = (char *)0x5888;
        *pcVar6 = *pcVar6 + -2;
      }
    }
    if (bVar15 < 0x80) goto LAB_0000_ec36;
    FUN_0000_3270();
    FUN_0000_49f0();
    if ((*(byte *)0x5893 < 0x80) || (*(char *)(uVar24 * 0x20 + 0x55b3) != 'D')) goto LAB_0000_ec36;
    piVar23 = (int *)0xba14;
    goto LAB_0000_ebe5;
  case 7:
    *(int *)0xfe = unaff_SS;
    *(int **)0xfc = &stack0xffea;
    *(int **)0xfa = piVar32;
    *(int *)0xf8 = unaff_DS;
    *(byte **)0xf6 = unaff_ES;
    uVar45 = 0;
    piVar23 = (int *)0xf4;
    pbRam0000006e = unaff_ES;
    *(int *)0xf4 = 0x904b;
    func_0x000090c1();
    iRam000091a0 = -iRam000091a0;
    if (cRam000090e0 != -1) {
      puVar40 = (int *)((int)piVar23 + -2);
      *(int *)((int)piVar23 + -2) = extraout_DX_00;
      pcVar14 = (code *)swi(0x21);
      (*pcVar14)();
      piVar23 = puVar40 + 1;
      *puVar40 = 0x906e;
      FUN_0000_90d4();
    }
    iVar20 = 1;
    for (iVar21 = 0; *(int *)(iVar21 + 6) != -1; iVar21 = iVar21 + 0x10) {
      bVar48 = false;
      if ((*(uint *)(iVar21 + 6) & 0x4000) != 0) {
        piVar23[-1] = iVar21;
        piVar23[-2] = iVar20;
        piVar23[-3] = uVar45;
        uVar45 = 0x8d0;
        piVar41 = piVar23 + -4;
        piVar23[-4] = 0x9092;
        thunk_FUN_0000_8f97();
        iVar20 = *piVar41;
        iVar21 = piVar41[1];
        piVar23 = piVar41 + 2;
        if (bVar48) {
          piVar41[1] = 0x9099;
          FUN_0000_90d4();
          piVar23 = piVar41 + 2;
        }
      }
      iVar20 = iVar20 + 1;
    }
    iVar20 = *piVar23;
    uVar45 = piVar23[1];
    puVar30 = (int *)piVar23[3];
    uVar46 = 0x1a2;
    pcVar14 = (code *)swi(0x21);
    bVar15 = (*pcVar14)();
    if (bVar15 < 2) {
      pcVar14 = (code *)swi(0x20);
      (*pcVar14)();
    }
    uVar24 = *(int *)0x2 + 0xeefa;
    if (0xfff < uVar24) {
      uVar24 = 0x1000;
    }
    puVar33 = puVar30 + -0x42c2;
    if ((int *)0x42c1 < puVar30) {
      *(int *)(puVar30 + -0x42c4) = 0x1106;
      uVar45 = *(int *)(puVar30 + -0x42c4);
      puVar34 = puVar30 + -0x42c4;
      *(int *)(puVar30 + -0x42c4) = 0x1bc9;
      FUN_0000_1fa6();
      *(int *)(puVar34 + -2) = 0;
      puVar33 = puVar34 + -4;
      *(int *)(puVar34 + -4) = 0x1bcf;
      FUN_0000_1f7d();
      pcVar14 = (code *)swi(0x21);
      (*pcVar14)();
    }
    puVar35 = (int *)((uint)puVar33 & 0xfffe);
    iRam0001626e = uVar24 * 0x10 + -1;
    puRam00016270 = puVar35;
    puRam00016274 = puVar35;
    *(int *)0x2 = uVar24 + 0x1106;
    iVar21 = -(iVar20 - (uVar24 + 0x1106));
    pcVar14 = (code *)swi(0x21);
    (*pcVar14)();
    uRam000162e5 = uVar45;
    *(int *)(puVar35 + -2) = 0x1106;
    uVar45 = *(int *)(puVar35 + -2);
    puVar30 = (int *)0xa524;
    for (iVar20 = 0x181c; iVar20 != 0; iVar20 = iVar20 + -1) {
      puVar1 = puVar30;
      puVar30 = puVar30 + 1;
      *puVar1 = 0;
    }
    *(int *)(puVar35 + -2) = 0x1106;
    uVar47 = *(int *)(puVar35 + -2);
    puVar38 = puVar35 + -2;
    *(int *)(puVar35 + -2) = 0x1c15;
    while( true ) {
      pcVar14 = (code *)swi(0x21);
      uVar19 = (*pcVar14)();
      *(int *)0x5287 = uVar19;
      pcVar14 = (code *)swi(0x21);
      (*pcVar14)();
      *(int *)0x5273 = iVar21;
      *(int *)0x5275 = uVar45;
      *(int *)(puVar38 + -2) = uVar46;
      pcVar14 = (code *)swi(0x21);
      (*pcVar14)();
      *(int *)(puVar38 + -2) = 0x1106;
      uVar47 = *(int *)(puVar38 + -2);
      if (*(int *)0x6ad0 == 0) break;
      uVar45 = *(int *)0x5285;
      bVar48 = false;
      iVar21 = 0;
      ppcVar12 = (code **)0x6ace;
      pcVar9 = ppcVar12[1];
      pcVar13 = *ppcVar12;
      *(int *)(puVar38 + -2) = uVar46;
      puVar39 = puVar38 + -4;
      *(int *)(puVar38 + -4) = 0x1c8c;
      (*pcVar13)();
      if (!bVar48) {
        ppcVar12 = (code **)0x6ace;
        pcVar9 = ppcVar12[1];
        pcVar13 = *ppcVar12;
        *(int *)(puVar39 + -2) = uVar46;
        puVar38 = puVar39 + -4;
        *(int *)(puVar39 + -4) = 0x1ca2;
        (*pcVar13)();
        *(int *)(puVar38 + -2) = 0x1106;
        uVar47 = *(int *)(puVar38 + -2);
        break;
      }
      *(int *)(puVar39 + -2) = 0x1106;
      uVar47 = *(int *)(puVar39 + -2);
      *(int *)(puVar39 + -2) = 2;
      puVar36 = puVar39 + -4;
      *(int *)(puVar39 + -4) = 0x1c45;
      FUN_0000_1fa6();
      puVar37 = puVar36 + -2;
      *(int *)(puVar36 + -2) = 0x1c48;
      FUN_0000_1f7d();
      *(int *)(puVar37 + -2) = 0xff;
      uVar46 = 0;
      pcVar9 = *(code **)0x5212;
      puVar38 = puVar37 + -4;
      *(int *)(puVar37 + -4) = 0x1c50;
      (*pcVar9)();
    }
    iVar20 = *(int *)0x2c;
    if (iVar20 != 0) {
      pcVar52 = (char *)0x0;
      do {
        bVar48 = *pcVar52 == '\0';
        if (bVar48) break;
        iVar21 = 0xc;
        pcVar43 = (char *)0x5266;
        do {
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar8 = pcVar52;
          pcVar52 = pcVar52 + 1;
          pcVar6 = pcVar43;
          pcVar43 = pcVar43 + 1;
          bVar48 = *pcVar6 == *pcVar8;
        } while (bVar48);
        if (bVar48) {
          *(int *)(puVar38 + -2) = iVar20;
          *(int *)(puVar38 + -4) = uVar47;
          uVar46 = *(int *)(puVar38 + -4);
          uVar45 = *(int *)(puVar38 + -2);
          pcVar43 = (char *)((int)FUN_0000_5288 + 6);
          iVar20 = (int)*pcVar52;
          do {
            pcVar52 = pcVar52 + 1;
            cVar16 = *pcVar52;
            cVar17 = cVar16 + '\x01';
            if (cVar17 != '\0') {
              cVar17 = cVar16;
            }
            pcVar6 = pcVar43;
            pcVar43 = pcVar43 + 1;
            *pcVar6 = cVar17;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          *(int *)(puVar38 + -2) = 0x1106;
          uVar47 = *(int *)(puVar38 + -2);
          break;
        }
        iVar21 = 0x7fff;
        bVar48 = true;
        do {
          if (iVar21 == 0) break;
          iVar21 = iVar21 + -1;
          pcVar6 = pcVar52;
          pcVar52 = pcVar52 + 1;
          bVar48 = *pcVar6 == '\0';
        } while (!bVar48);
      } while (bVar48);
    }
    iVar20 = 4;
    do {
      pbVar4 = (byte *)((int)FUN_0000_5288 + 6 + iVar20);
      bVar48 = false;
      *pbVar4 = *pbVar4 & 0xbf;
      pcVar14 = (code *)swi(0x21);
      (*pcVar14)();
      if ((!bVar48) && ((extraout_DX & 0x80) != 0)) {
        pbVar4 = (byte *)((int)FUN_0000_5288 + 6 + iVar20);
        *pbVar4 = *pbVar4 | 0x40;
      }
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
    *(int *)(puVar38 + -2) = 0x1d0a;
    FUN_0000_1dac();
    *(int *)(puVar38 + -2) = 0x1d13;
    piVar23 = (int *)FUN_0000_1d9d();
    return piVar23;
  case 8:
    piVar23 = (int *)FUN_0000_3e5f();
    return piVar23;
  case 9:
    goto code_r0x00005885;
  case 10:
    goto code_r0x00007513;
  case 0xb:
    if (bVar49) {
      iVar20 = FUN_0000_b650();
      uStack_4 = (int *)((int)uStack_4 + iVar20);
      FUN_0000_9c6a();
      if (uStack_4 == (int *)0x0) {
        FUN_0000_3270();
      }
    }
    else {
      if (piVar32 != (int *)0x2) {
        return piVar32;
      }
      iVar20 = FUN_0000_b650();
      uStack_4 = (int *)((int)uStack_4 + iVar20);
      FUN_0000_9c6a();
      iVar20 = FUN_0000_b650();
      uStack_4 = (int *)((int)uStack_4 + iVar20);
      FUN_0000_9c6a();
      if (uStack_4 == (int *)0x0) {
        FUN_0000_3270();
      }
    }
    piVar23 = (int *)FUN_0000_699c();
    return piVar23;
  case 0xc:
    goto code_r0x00005885;
  case 0xd:
    FUN_0000_3270();
    FUN_0000_3270();
    if (uStack_10 == 0x4e) {
      FUN_0000_3270();
      if (*(byte *)0x5895 < 0x80) {
        uStack_4 = (int *)FUN_0000_5e22();
        *(byte *)uStack_4 = 0xb9;
      }
      else {
        uStack_4 = (int *)FUN_0000_5e22();
        *(byte *)uStack_4 = 0xb8;
      }
      pbVar4 = (byte *)0x24e6;
      *pbVar4 = *pbVar4 | 2;
    }
    else if (((uStack_10 == 0xdc) || (uStack_4 = (int *)FUN_0000_dd48(), uStack_4 == (int *)0x0)) &&
            (uStack_4 = (int *)FUN_0000_ddfa(), uStack_4 == (int *)0x0)) {
      uStack_4 = (int *)FUN_0000_deb4();
    }
    return uStack_4;
  case 0xe:
    *(int **)0x544a = piVar32;
    *(int *)0x5448 = 0;
    pcVar14 = (code *)swi(0x21);
    (*pcVar14)();
    *(int **)0x544e = piVar23;
    *(byte **)0x544c = unaff_ES;
    pcVar14 = (code *)swi(0x21);
    (*pcVar14)();
    do {
    } while (*(uint *)0x5448 < *(uint *)0x544a);
    pcVar14 = (code *)swi(0x21);
    piVar23 = (int *)(*pcVar14)();
    return piVar23;
  case 0xf:
    piVar23 = (int *)in(0x5d);
    return piVar23;
  case 0x10:
    piVar3 = (int *)((int)piVar23 + (int)piVar22);
    *(byte *)piVar3 = *(byte *)piVar3 + bVar29;
    *(int *)0x535a = 0;
    pcVar14 = (code *)swi(0x21);
    (*pcVar14)();
    pcVar14 = (code *)swi(0x21);
    (*pcVar14)();
    do {
    } while (*(int *)0x535a == 0);
    *(int *)0x535a = 0;
    do {
      piVar3 = (int *)0x5356;
      *piVar3 = *piVar3 + 1;
    } while (*(int *)0x535a == 0);
    pcVar14 = (code *)swi(0x21);
    (*pcVar14)();
    *(int *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
    pcVar14 = (code *)swi(0x12);
    piVar23 = (int *)(*pcVar14)();
    *(int **)0x5358 = piVar23;
    return piVar23;
  case 0x11:
    func_0x00003ff8();
    func_0x00003ff8();
    FUN_0000_3f3e();
    *(byte *)0x5893 = bVar15;
    *(int *)0xa9be = 0;
    return (int *)(uint)bVar15;
  case 0x12:
    piVar3 = (int *)((int)piVar23 + (int)piVar22);
    *(byte *)piVar3 = *(byte *)piVar3 | bVar29;
    piVar3 = (int *)((int)piVar23 + (int)piVar22);
    *(byte *)piVar3 = *(byte *)piVar3 | bVar29;
    piVar3 = (int *)((int)piVar23 + (int)piVar22);
    *(byte *)piVar3 = *(byte *)piVar3 + bVar29;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x13:
LAB_0000_f247:
    do {
      piVar27 = (int *)FUN_0000_edf8();
      piVar23 = piVar22;
      do {
        piVar22 = (int *)((int)piVar23 + 1);
        if (6 < (int)piVar22) {
          return piVar27;
        }
        piVar27 = (int *)RANDOM();
        pbVar44 = (byte *)((int)piVar23 + 0x41bd);
        piVar23 = piVar22;
      } while (piVar27 < (int *)(uint)*pbVar44);
      if (piVar22 == (int *)0x5) {
        RANDOM();
      }
      else if (piVar22 == (int *)0x6) {
        RANDOM();
      }
      else {
        uStack_4 = (int *)RANDOM();
      }
    } while( true );
  }
  uVar18 = SUB21(unaff_SI,0);
  *(int *)0x5859 = uVar18;
  *(int *)0x5858 = uVar18;
  *(int *)0x57b2 = uVar18;
  *(int *)0x587e = 1;
  *(int *)((int)FUN_0000_5956 + 3) = uVar18;
  pbVar44 = (byte *)((int)FUN_0000_55be + 1);
  do {
    if (*pbVar44 < 0x19) {
      pbVar4 = pbVar44;
      *pbVar4 = *pbVar4 + 1;
    }
    pbVar44 = pbVar44 + 0x20;
  } while (pbVar44 < (byte *)0x57bf);
  pcVar6 = (char *)0x587d;
  *pcVar6 = *pcVar6 + '\x01';
  if (0xd < *(byte *)0x587d) {
    *(int *)0x587d = 1;
    piVar3 = (int *)0x5874;
    *piVar3 = *piVar3 + 1;
  }
  FUN_0000_4320();
  if (0x32 < *(byte *)0x58a5) goto LAB_0000_6b6a;
  cVar16 = *(char *)0x58a5;
  if ((((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) || (*(byte *)0x587f < 5)) ||
     (0x13 < *(byte *)0x587f)) {
    *(int *)0x58a5 = 2;
  }
  else {
    if (*(char *)0x587f == '\x05') {
      uVar24 = (uint)*(byte *)0x5881;
    }
    else {
      if (*(char *)0x587f != '\x13') {
        *(int *)0x58a5 = 0x32;
        goto LAB_0000_6b35;
      }
      uVar24 = -(*(byte *)0x5881 - 0x3b);
    }
    *(int *)0x58a5 = *(int *)(uVar24 / 10 + 0x6a80);
  }
LAB_0000_6b35:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(int *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(int *)0x58a5 = 10;
  }
  if (cVar16 != *(char *)0x58a5) {
    *(int *)0x24e6 = 1;
  }
LAB_0000_6b6a:
  bVar15 = *(byte *)0x5880;
  piVar23 = (int *)(uint)bVar15;
  if (*(byte *)0x587f != bVar15) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      piVar23 = (int *)FUN_0000_64a4();
    }
    if (*(char *)0x587f == '\0') {
      *(int *)0x5884 = 0xc;
    }
    else {
      if (*(byte *)0x587f < 0xd) {
        bVar15 = *(byte *)0x587f;
      }
      else {
        bVar15 = *(char *)0x587f - 0xc;
      }
      piVar23 = (int *)(uint)bVar15;
      *(byte *)0x5884 = bVar15;
    }
  }
  if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
    piVar23 = (int *)FUN_0000_8bca();
  }
  return piVar23;
LAB_0000_a802:
  piVar27 = (int *)(*(byte *)0x587c & 0xfffc);
  if ((char)piVar27 != ' ') {
    *(int *)0x5955 = 0;
  }
  if (*(char *)0x5893 == '\0') {
    if (iStack_a != 0) {
      FUN_0000_699c();
      piVar26 = (int *)FUN_0000_5e22();
      bVar15 = *(byte *)piVar26;
      piStack_12 = (int *)(uint)bVar15;
      if ((bVar15 & 0xfe) == 0x6a) {
        FUN_0000_b7d8();
      }
      else {
        if ((piStack_12 == (int *)0x4) && (*(char *)0x587c == '\x1c')) {
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (piStack_12 == (int *)0x8f) {
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        if (((*(char *)0x5896 == -0x17) && (*(char *)0x5897 == -0x15)) &&
           ((*(char *)0x5895 == '\0' && (*(char *)0x5893 == '\0')))) {
          FUN_0000_3270();
          if (*(char *)0x58cc == '\0') {
            FUN_0000_3270();
            FUN_0000_3270();
            pcVar6 = (char *)0x5897;
            *pcVar6 = *pcVar6 + '\x01';
          }
          else {
            FUN_0000_3270();
          }
        }
      }
      FUN_0000_a650();
      FUN_0000_4508();
      if ((piStack_12 == (int *)0x1) &&
         (((*(byte *)0x587c & 0xfc) == 0x28 || ((*(byte *)0x587c & 0xfe) == 0x14)))) {
        FUN_0000_3270();
        FUN_0000_4f42();
        FUN_0000_ac8e();
      }
      if ((bVar15 & 0xfc) == 0xd4) {
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      piVar27 = (int *)FUN_0000_b650();
    }
  }
  else {
    uStack_c = 1;
  }
  if (uStack_c != 0) {
    return piVar27;
  }
  uStack_c = 0;
  iStack_a = 1;
  uStack_4 = (int *)FUN_0000_a60a();
  pbVar53 = (byte *)0xa695;
  iVar20 = FUN_0000_541c();
  if (iVar20 == 1) {
    FUN_0000_30da();
    FUN_0000_664a();
LAB_0000_a6aa:
    FUN_0000_3270();
    goto LAB_0000_a802;
  }
  if (iVar20 == -1) {
    if (*(char *)0xa9bd != '\x01') {
      FUN_0000_3f3e();
      do {
        iVar20 = FUN_0000_3094();
      } while (iVar20 == 0);
    }
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  iVar20 = FUN_0000_62c8();
  if (iVar20 != 0) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if (*(char *)0x5893 != '\0') {
    return (int *)0x0;
  }
  pcVar52 = (char *)0xa707;
  uVar51 = FUN_0000_a188();
  bVar15 = (byte)uVar51;
  if (0x1f < bVar15) {
    if ((bVar15 < 0x30) || (0x39 < bVar15)) {
      iStack_a = FUN_0000_4b98();
    }
    else {
      iStack_a = FUN_0000_5aa0();
    }
    goto LAB_0000_a802;
  }
  uVar25 = (uint)uVar51 & 0xff;
  if (0x16 < uVar25) goto LAB_0000_a6aa;
  iVar20 = uVar25 * 2;
  cVar16 = (char)piVar26;
  bVar15 = (byte)((uint)piVar26 >> 8);
  bVar31 = (byte)(uVar51 >> 0x18);
  bVar29 = (byte)(uVar51 >> 0x10);
  cVar17 = (char)((uint)iVar20 >> 8);
                    // WARNING (jumptable): Sanity check requires truncation of jumptable
                    // WARNING: Could not find normalized switch variable to match jumptable
  switch(uVar25) {
  case 0:
    do {
      uStack_4 = piVar26;
      bVar15 = *(byte *)0x5897;
      puVar7 = unaff_DI;
      if (*(byte *)puVar7 < bVar15 || *(byte *)puVar7 == bVar15) {
        iVar20 = -(uint)*(byte *)unaff_DI;
      }
      else {
        iVar20 = ~(1 - *pbVar53) + 1;
      }
      cVar16 = *(char *)0x5895;
      if ((*pcVar52 != cVar16) || (((*pcVar52 == cVar16 && (5 < (int)uStack_4)) && (5 < iVar20)))) {
        return in_CX;
      }
      do {
        piStack_12 = piStack_12 + -4;
        piVar23 = piVar23 + -4;
        piVar22 = piVar22 + -4;
        pbVar44 = pbVar44 + -8;
        unaff_DI = unaff_DI + -4;
        pbVar53 = pbVar53 + -8;
        pcVar52 = pcVar52 + -8;
        in_CX = (int *)((int)in_CX - 1);
        if ((int)in_CX < 0) {
          return (int *)0xffff;
        }
        if (*(byte *)piStack_12 == 0) {
          return in_CX;
        }
      } while (*(byte *)piVar23 != (byte)param_1);
      bVar15 = *(byte *)0x5896;
      piVar3 = piVar22;
      if (*(byte *)piVar3 < bVar15 || *(byte *)piVar3 == bVar15) {
        piVar26 = (int *)(uStack_10 - *(byte *)piVar22);
      }
      else {
        piVar26 = (int *)(~(uVar24 - *pbVar44) + 1);
      }
    } while( true );
  case 1:
    *(int *)(iVar21 + 0x1af4) = 0;
    piVar3 = (int *)((int)piVar22 + iVar20 + -0x3741);
    *piVar3 = *piVar3 + 1;
    pbVar4 = (byte *)(iVar21 + 0x4407);
    *pbVar4 = *pbVar4 ^ (byte)in_CX;
    if (*"f" == 'B') {
      *(int *)0xa9c2 = 2;
    }
    bVar15 = *(byte *)0xa9bd;
    bVar29 = *(byte *)0x2aa7;
    piVar23 = (int *)(uint)bVar29;
    *(byte *)(bVar15 + 0xa9c8) = bVar29;
    if ((bVar15 == 3) && (*(char *)0xa9c9 == -1)) {
      *(byte *)0xa9c9 = bVar29;
    }
    if (*(char *)0xa9be == '\0') {
      piVar23 = (int *)FUN_0000_30da();
    }
    else if (*(char *)0xa9be == '\x02') {
      FUN_0000_2642();
      uStack_28 = 0x18;
      uStack_2a = 0x3f22;
      FUN_0000_3642();
      uStack_28 = 1;
      uStack_2a = 0;
      uStack_2c = 0x3f2c;
      piVar23 = (int *)FUN_0000_298e();
    }
    *(int *)0x5394 = 0x2322;
    *(int *)0x5396 = 0x1a2;
    return piVar23;
  case 2:
    iVar20 = (int)in_CX - 1;
    if (iVar20 == 0 || (uVar51 & 0xff) == 0) {
      if (bVar15 != 0x55) {
        FUN_0000_1fa6();
        FUN_0000_1f7d();
        piVar26 = (int *)0x1;
      }
      return piVar26;
    }
    do {
      puVar7 = unaff_DI;
      unaff_DI = (int *)((int)unaff_DI + 1);
      *(char *)puVar7 = (char)piVar26;
      if ((char)piVar26 == '\0') {
        iVar20 = iVar20 + -1;
        if (iVar20 == 0) {
          *puVar42 = 0;
          return piVar26;
        }
        if (*piVar22 != 0x433b) {
          *puVar42 = unaff_DI;
          puVar42 = puVar42 + 1;
        }
      }
      piVar3 = piVar22;
      piVar22 = (int *)((int)piVar22 + 1);
      piVar26 = (int *)(uint)*(byte *)piVar3;
    } while( true );
  case 3:
    do {
      if ((char)uStack_4 == 'N') break;
      cVar16 = FUN_0000_408c();
      uStack_4 = (int *)CONCAT11(uStack_4._1_1_,cVar16);
    } while (cVar16 != 'Y');
    if ((char)uStack_4 == 'N') {
      FUN_0000_3270();
    }
    else {
      FUN_0000_3270();
      FUN_0000_3270();
      iVar20 = FUN_0000_48ae();
      FUN_0000_30da();
      if ((iVar20 == -1) || (*(char *)(iVar20 * 0x20 + 0x55b3) != 'G')) {
        FUN_0000_3270();
      }
    }
    if (*(byte *)0x5893 < 0x21) {
      piVar23 = (int *)FUN_0000_7d80();
      *(int *)0x24e6 = 1;
      return piVar23;
    }
code_r0x00005885:
    *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  case 4:
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    piVar3 = piVar22 + uVar25;
    *(byte *)piVar3 = *(byte *)piVar3 + cVar16;
    in_DX = CONCAT11(bVar31 + cVar17,bVar29);
    piVar32 = (int *)CONCAT11(cVar17 + (byte)in_CX,(char)iVar20);
    break;
  case 5:
    pbVar4 = &stack0x32ff + (int)piVar22;
    bVar28 = bVar15 + *pbVar4;
    bVar48 = CARRY1(bVar15,*pbVar4) || CARRY1(bVar28,CARRY2(uVar25,uVar25));
    bVar28 = bVar28 + CARRY2(uVar25,uVar25);
    pbVar4 = &stack0xdfff + (int)piVar22;
    bVar15 = *pbVar4;
    bVar10 = bVar28 + *pbVar4;
    LOCK();
    pbVar4 = (byte *)((int)unaff_DI + 1);
    *pbVar4 = *pbVar4 + bVar29;
    UNLOCK();
    bVar15 = cVar16 + (CARRY1(bVar28,bVar15) || CARRY1(bVar10,bVar48)) + bVar31;
    pbVar4 = (byte *)((int)unaff_DI + 1);
    *pbVar4 = *pbVar4 & bVar29;
    iVar20 = CONCAT11(bVar10 + bVar48,bVar15 + bVar31);
    uVar24 = (uint)CARRY1(bVar15,bVar31);
    uVar11 = iVar20 - 0xfff;
    iVar20 = uVar11 + uVar24 + -0x1000 + (uint)(0xfff < iVar20 + 1U || CARRY2(uVar11,uVar24));
    if (in_CX == (int *)0x1 || iVar20 == 0) {
      bVar15 = (byte)iVar20;
      piVar3 = piVar22 + uVar25;
      *(byte *)piVar3 = *(byte *)piVar3 + bVar15 + bVar31 + CARRY1(bVar15,bVar31);
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
code_r0x00000485:
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  bVar29 = (byte)piVar26;
  *pbVar4 = *pbVar4 | bVar29;
  puVar5 = (uint *)((byte *)((int)piVar32 + (int)unaff_DI) + 0xb);
  *puVar5 = *puVar5 | in_DX;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  bVar15 = *pbVar4;
  *pbVar4 = *pbVar4 + (byte)in_DX;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29 + CARRY1(bVar15,(byte)in_DX);
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  piVar3 = piVar32 + 0x17;
  *(byte *)piVar3 = *(byte *)piVar3 + (char)in_CX;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + 1;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)unaff_DI);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
  pbVar4 = (byte *)((int)piVar32 + (int)piVar22);
  *pbVar4 = *pbVar4 + bVar29;
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x00000470) overlaps instruction at (ram,0x0000046f)
//
// WARNING: Possible PIC construction at 0x00001c12: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00001c15)
// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer
// WARNING: Type propagation algorithm not settling

char * FUN_0000_7448(char *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                    int param_7)

{
  int *puVar1;
  byte *pbVar2;
  int *piVar3;
  char **ppcVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  char *pcVar9;
  char *pcVar10;
  code **ppcVar11;
  code *pcVar12;
  code *pcVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  int uVar17;
  byte bVar24;
  int uVar18;
  char *in_AX;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  char *pcVar23;
  int *puVar25;
  byte bVar26;
  uint extraout_DX;
  int extraout_DX_00;
  char *pcVar27;
  int *puVar28;
  int *puVar29;
  int *puVar31;
  int *puVar32;
  int *piVar33;
  int *puVar34;
  int *piVar35;
  byte *pbVar36;
  char *unaff_SI;
  char *pcVar37;
  int iVar38;
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
  char *pcStack_220;
  char *pcStack_21a;
  char *pcStack_218;
  int uStack_216;
  char *pcStack_210;
  char *pcStack_20e;
  char *apcStack_206 [232];
  int *piStack_36;
  int uStack_30;
  int iStack_2e;
  int uStack_2c;
  int *puStack_1e;
  int *puStack_1c;
  int *puStack_1a;
  int *puStack_18;
  int *puStack_16;
  int *puStack_14;
  char *pcStack_12;
  int uStack_10;
  byte bStack_e;
  uint uStack_c;
  char *pcStack_a;
  int uStack_8;
  char *pcStack_6;
  int uStack_4;
  int *puVar30;

  pcStack_20e = (char *)0x0;
  uStack_4 = in_AX;
  if (0 < param_7) {
    bVar43 = param_4 == -0x6f;
    if (bVar43) {
      param_4 = 0;
    }
    pcStack_210 = (char *)(uint)bVar43;
    apcStack_206[0] = "";
    apcStack_206[1] = "";
    uStack_4 = (char *)0x2;
    pcStack_220 = (char *)(param_5 + (uint)*(byte *)0x589b + 5);
    uVar17 = 0;
    uVar45 = FUN_0000_5e22();
    uVar22 = (uint)((ulong)uVar45 >> 0x10);
    pcVar23 = (char *)CONCAT11(uVar17,5);
    param_1[(int)(param_3 + param_4 * 0x20 + 0xa5)] = *(char *)uVar45;
    pcVar19 = param_1;
    while (pcStack_218 = "", pcStack_20e != uStack_4) {
      pcVar9 = apcStack_206[(int)pcStack_20e];
      pcVar37 = (char *)((int)(pcStack_20e + 1) * 2);
      pcVar10 = apcStack_206[(int)(pcStack_20e + 1)];
      pcStack_20e = pcStack_20e + 2;
      for (; bVar43 = true, pcStack_218 < (char *)0x8000; pcStack_218 = pcStack_218 + -1) {
        bVar42 = pcStack_218 < "";
        bVar44 = pcStack_218 == "";
        pcVar27 = pcStack_218;
code_r0x00007513:
        if (bVar42 || bVar44) {
          bVar42 = CARRY2((uint)pcVar27,(uint)pcVar27);
          pcVar27 = (char *)((int)pcVar27 * 2);
          cVar15 = (char)pcVar19;
          switch((int)*(int *)(pcVar27 + 0x5b16)) {
          case 0x5de5:
            uStack_4 = (char *)((int)pcVar19 / (int)param_1);
            for (iVar20 = 0; iVar20 < (int)param_1; iVar20 = iVar20 + param_2) {
              FUN_0000_3d02();
              FUN_0000_3ae8();
              param_4 = param_4 + (int)uStack_4;
            }
            uStack_8 = param_4;
            pcStack_6 = (char *)iVar20;
            pcVar19 = (char *)FUN_0000_3d2e();
            return pcVar19;
          case 0x83ec:
            while (bVar42) {
              *puStack_1a = 0;
              *puStack_18 = 0;
              *puStack_16 = 0;
              *puStack_14 = 0;
              *pcVar37 = '\0';
              *puStack_1e = 0;
              *puStack_1c = 0;
              pcStack_12[3] = '\0';
              pcStack_12[2] = '\0';
              pcStack_12[1] = '\0';
              *pcStack_12 = '\0';
              pcStack_12[7] = '\0';
              pcStack_12[6] = '\0';
              pcStack_12[5] = '\0';
              pcStack_12[4] = '\0';
              puStack_14 = puStack_14 + 8;
              puStack_16 = puStack_16 + 8;
              puStack_18 = puStack_18 + 8;
              puStack_1a = puStack_1a + 8;
              puStack_1c = puStack_1c + 8;
              puStack_1e = puStack_1e + 8;
              pcVar37 = pcVar37 + 8;
              bVar42 = pcVar37 < (char *)((int)FUN_0000_5d5e + 1);
              unaff_SI = pcStack_12;
              pcStack_12 = pcStack_12 + 8;
            }
            pcStack_6 = (char *)0x0;
            uStack_4 = unaff_SI;
            do {
              pcVar19 = (char *)(uint)*(byte *)0x585b;
              if (pcVar19 <= pcStack_6) {
                if (*(char *)0xadb9 == -0x24) {
                  uVar22 = FUN_0000_7f26();
                  *(char *)((uVar22 & 0xff) * 8 + 0x5c5f) = *(char *)0x5895 * '\x03' + '\a';
                  bVar14 = *(byte *)0xbb15;
                  pcVar19 = (char *)(uint)bVar14;
                  *(byte *)0xadb9 = bVar14;
                }
                return pcVar19;
              }
              uVar17 = (int)((uint)pcVar23 >> 8);
              pcVar23 = (char *)CONCAT11(uVar17,5);
              if (*(char *)((int)pcStack_6 * 0x20 + 0x55b3) != 'D') {
                if (*(char *)((int)pcStack_6 * 0x20 + 0x55c5) == '*') {
                  uStack_10 = CONCAT11(uStack_10._1_1_,0x2a);
                }
                if (*(char *)((int)pcStack_6 * 0x20 + 0x55c5) == ',') {
                  uStack_10 = CONCAT11(uStack_10._1_1_,0x2c);
                }
                if ((char)uStack_10 != '\0') {
                  pcStack_a = (char *)RANDOM();
                  if (pcStack_a == "") {
                    FUN_0000_3270();
                    FUN_0000_5dce();
                    FUN_0000_8880();
                  }
                  uStack_10 = uStack_10 & 0xff00;
                }
                uStack_8 = CONCAT11(uStack_8._1_1_,pcStack_6[0x1724]);
                bStack_e = pcStack_6[0x172c];
                uVar45 = FUN_0000_7f26();
                uVar22 = (uint)((ulong)uVar45 >> 0x10);
                pcStack_a = (char *)uVar45;
                *(int *)((uint)*(byte *)((int)pcStack_a * 8 + -0x45e8) * 8 + 0x5c61) = 0xff;
                uVar40 = uRam000091a4;
                pcVar23 = (char *)CONCAT11(uVar17,5);
                pcVar27 = (char *)((int)pcStack_6 * 0x20);
                uVar21 = (byte)pcVar27[0x55b2] - 0x41;
                if (uVar21 < 0x14) goto LAB_0000_84c4;
                unaff_SI = (char *)((*(uint *)((int)pcStack_a * 8 + -0x45e8) & 0xff) * 8);
                *(char *)((uint)*(byte *)((int)pcStack_a * 8 + -0x45e8) * 8 + 0x5c5b) =
                     unaff_SI[0x5c5a];
                pcVar23 = (char *)CONCAT11(uVar17,5);
                if (*(char *)((int)pcStack_6 * 0x20 + 0x55b3) == 'S') {
                  FUN_0000_82ce();
                }
                else {
                  FUN_0000_81b4();
                }
              }
              pcStack_6 = pcStack_6 + 1;
            } while( true );
          case 0x8b5e:
            pbVar2 = (byte *)(pcVar27 + (int)pcVar37);
            *pbVar2 = *pbVar2 & 0xe8;
            pcVar6 = &stack0x823c + (int)pcVar37;
            *pcVar6 = *pcVar6 + '\x01';
          case 0x8b55:
            FUN_0000_8a60();
            if (*(int *)0x2182 != -1) {
              FUN_0000_8a60();
            }
            pcVar6 = (char *)0x2186;
            *pcVar6 = *pcVar6 + '\x01';
            pcVar19 = (char *)FUN_0000_8a60();
            if (*(int *)0x2182 != -1) {
              pcVar19 = (char *)FUN_0000_8a60();
            }
            if (0xf < *(byte *)0x2186) {
              *(int *)0x2186 = 0;
            }
            return pcVar19;
          case 0x8bd7:
            *(int *)0x5350 = 0x6c;
            ppcVar11 = (code **)0x5350;
            pcVar19 = (char *)(**ppcVar11)();
            return pcVar19;
          case 0x9000:
            thunk_FUN_0000_8f97();
            return pcStack_210;
          case 0xfe46:
            if ((pcVar19 + bVar42 + 0x400 != (char *)0x0) &&
               (iVar20 = RANDOM(), iVar20 < 0x20)) {
                    // WARNING: Subroutine does not return
              thunk_FUN_0000_8fec();
            }
            return (char *)0x0;
          }
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar37 = pcVar37 + (int)pcVar19;
          bVar14 = cVar15 + pcVar27[(int)unaff_SI];
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar14;
          pcVar6 = pcVar27 + (int)unaff_SI + 3;
          cVar15 = (char)((uint)pcVar27 >> 8);
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar14;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar14;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar14;
          bVar24 = bVar14 / 0;
          puVar1 = &stack0xfffe + (int)unaff_SI;
          *puVar1 = *puVar1;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + (char)pcVar23;
          bVar14 = bVar14 % 0 + pcVar27[(int)unaff_SI];
          iVar20 = CONCAT11(bVar24,bVar14);
          pcVar6 = (char *)0xe000;
          *pcVar6 = *pcVar6 + (char)pcVar27;
          pcVar6 = pcVar27;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar19 = pcVar23 + -1;
          bVar26 = (byte)uVar22;
          if (pcVar19 == (char *)0x0 || *pcVar6 == '\0') {
            pcVar19 = pcVar23 + -2;
            if (pcVar19 != (char *)0x0 && *pcVar6 != '\0') {
              pcVar6 = pcVar27 + (int)unaff_SI;
              *pcVar6 = *pcVar6 + bVar14;
              pcVar6 = pcVar27 + (int)unaff_SI;
              *pcVar6 = *pcVar6 + bVar14;
              pcVar6 = unaff_SI + (int)&uStack_4 + 1;
              *pcVar6 = *pcVar6 + bVar14;
              pcVar6 = pcVar27 + (int)unaff_SI;
              *pcVar6 = *pcVar6 + bVar14;
              piVar3 = (int *)(pcVar27 + (int)pcVar37);
              *piVar3 = *piVar3 + iVar20;
              piVar3 = (int *)(pcVar27 + (int)unaff_SI);
              *piVar3 = *piVar3 + iVar20;
              piVar3 = (int *)(pcVar27 + (int)pcVar37);
              *piVar3 = *piVar3 + iVar20;
              piVar3 = (int *)(pcVar27 + (int)pcVar37);
              *piVar3 = *piVar3 + iVar20;
              pcVar6 = (char *)0x1800;
              *pcVar6 = *pcVar6 + cVar15;
              goto code_r0x00000485;
            }
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar37;
            *pcVar6 = *pcVar6 + (char)pcVar19;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 - bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar24;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            iVar20 = CONCAT11(bVar24 + bVar26,bVar14);
            pbVar2 = (byte *)(pcVar27 + (int)unaff_SI);
            *pbVar2 = *pbVar2 ^ bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
            *(int *)0x1330 = iVar20;
            pcVar6 = pcVar27 + (int)unaff_SI;
            *pcVar6 = *pcVar6 + bVar14;
          }
          pcVar6 = pcVar27 + (int)unaff_SI;
          cVar15 = (char)iVar20;
          *pcVar6 = *pcVar6 + cVar15;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + cVar15;
          cVar15 = cVar15 + pcVar27[(int)unaff_SI];
          iVar20 = CONCAT11((char)((uint)iVar20 >> 8),cVar15);
          pcVar6 = pcVar27 + (int)pcVar37;
          *pcVar6 = *pcVar6 + cVar15;
          piVar3 = (int *)(pcVar27 + (int)pcVar37);
          *piVar3 = *piVar3 + iVar20;
          pcVar6 = pcVar27 + (int)pcVar37;
          *pcVar6 = *pcVar6 + cVar15;
          piVar3 = (int *)(pcVar27 + (int)pcVar37);
          *piVar3 = *piVar3 + iVar20;
          ppcVar4 = (char **)0x3e00;
          *ppcVar4 = *ppcVar4 + (int)pcVar27;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + (char)pcVar27;
code_r0x00000485:
          pbVar2 = (byte *)(pcVar27 + (int)unaff_SI);
          bVar24 = (byte)iVar20;
          *pbVar2 = *pbVar2 | bVar24;
          puVar5 = (uint *)(pcVar27 + (int)pcVar37 + 0xb);
          *puVar5 = *puVar5 | uVar22;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pbVar2 = (byte *)(pcVar27 + (int)unaff_SI);
          bVar14 = *pbVar2;
          *pbVar2 = *pbVar2 + bVar26;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24 + CARRY1(bVar14,bVar26);
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + 0x2e;
          *pcVar6 = *pcVar6 + (char)pcVar19;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + '\x01';
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)pcVar37;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
          pcVar6 = pcVar27 + (int)unaff_SI;
          *pcVar6 = *pcVar6 + bVar24;
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        if (((((int)pcVar10 < 0) || (10 < (int)pcVar10)) || ((int)pcVar9 < 0)) || (10 < (int)pcVar9)
           ) {
          bVar43 = false;
        }
        pcVar23 = (char *)CONCAT11((char)((uint)pcVar23 >> 8),5);
        unaff_SI = pcVar10 + (int)(param_3 + (int)(pcVar9 + param_4) * 0x20) + (int)param_1;
        if (pcStack_210 == (char *)0x0) {
          pcVar37 = (char *)((int)pcVar9 * 0x20);
          pcVar19 = pcVar10;
          if (((pcVar10 + (int)pcVar37)[-0x54fe] == '\0') || (0x1f < (int)(pcVar9 + param_4))) {
LAB_0000_75b5:
            bVar43 = false;
          }
          else {
            pcVar37 = (char *)((int)pcVar9 * 0x20);
            (pcVar10 + (int)pcVar37)[-0x54fe] = '\0';
          }
        }
        else if (*unaff_SI != -1) goto LAB_0000_75b5;
        if (bVar43) {
          pcVar23 = (char *)(uint)*(byte *)0x589c;
          pcVar19 = (char *)FUN_0000_5e22();
          cVar15 = *pcVar19;
          uStack_216 = CONCAT11(uStack_216._1_1_,cVar15);
          iVar20 = FUN_0000_8a10();
          if (iVar20 < param_7 + 1) {
LAB_0000_76b3:
            *unaff_SI = cVar15;
          }
          else if (pcStack_210 == (char *)0x0) {
            uStack_216 = CONCAT11(uStack_216._1_1_,0xff);
          }
          else {
            FUN_0000_8a10();
            iVar20 = FUN_0000_781e();
            uVar17 = (int)((uint)pcVar23 >> 8);
            if (iVar20 == 0) {
              pcVar23 = (char *)CONCAT11(uVar17,5);
              pcVar19 = pcVar10 + (int)pcVar9 * 0x20;
              pcVar37 = param_1;
              if ((((pcVar10 + (int)pcVar9 * 0x20)[(int)param_1] != '\0') &&
                  (pcVar37 = (char *)((int)(pcVar9 + param_6) * 0x20 + param_5), pcVar19 = pcVar10,
                  (pcVar10 + (int)pcVar37)[-0x52ec] != '\0')) &&
                 (pcVar37 = (char *)((int)(pcVar9 + param_6) * 0x20 + param_5),
                 (pcVar10 + (int)pcVar37)[-0x52ec] != '\0')) goto LAB_0000_76b3;
              *unaff_SI = -1;
              uStack_216 = CONCAT11(uStack_216._1_1_,0xff);
            }
            else {
              pcVar37 = pcVar9 + param_6;
              if (((-1 < (int)pcVar37) && (pcStack_21a = pcVar10 + param_5, -1 < (int)pcStack_21a))
                 && (((int)pcStack_21a < 0x20 && ((int)pcVar37 < 0x20)))) {
                pcVar23 = (char *)CONCAT11(uVar17,5);
                pcVar37 = (char *)((int)(pcVar9 + param_6) * 0x20 + param_5);
                pcVar19 = pcVar10;
                if ((pcVar10 + (int)pcVar37)[-0x52ec] != '\0') goto LAB_0000_76b3;
              }
              *unaff_SI = '\0';
            }
          }
          FUN_0000_8a10();
          uVar45 = FUN_0000_781e();
          uVar22 = (uint)((ulong)uVar45 >> 0x10);
          if ((int)uVar45 != 0) {
            apcStack_206[(int)uStack_4] = pcVar9;
            uStack_4 = uStack_4 + 1;
            pcVar37 = (char *)((int)uStack_4 * 2);
            apcStack_206[(int)uStack_4] = pcVar10;
            uStack_4 = uStack_4 + 1;
          }
        }
      }
    }
  }
  return uStack_4;
LAB_0000_ebe5:
  uStack_4 = pcVar19;
  if (((uStack_4[2] & 0x80U) != 0) && ((byte)uStack_4[3] == uStack_c)) {
    pbVar2 = (byte *)(uStack_4 + 2);
    *pbVar2 = *pbVar2 | 0x20;
    iVar20 = (uint)(byte)uStack_4[4] * 8;
    *(int *)(iVar20 + 0x5c5b) = 0x1e;
    *(int *)(iVar20 + 0x5c5a) = 0x1e;
    goto LAB_0000_ec10;
  }
  pcStack_6 = pcStack_6 + 1;
  pcVar19 = uStack_4 + 8;
  if ((char *)0xbb13 < uStack_4 + 8) {
LAB_0000_ec10:
    if (uStack_c == *(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
    FUN_0000_7330();
LAB_0000_ec36:
    pcStack_220 = param_3;
    FUN_0000_e9e0();
    pcStack_220 = param_3;
    pcVar19 = (char *)FUN_0000_ea58();
    if (pcStack_a == (char *)0x0) {
      pcStack_220 = (char *)0xec6c;
      pcVar19 = (char *)FUN_0000_3270();
    }
    return pcVar19;
  }
  goto LAB_0000_ebe5;
LAB_0000_84c4:
  bVar42 = CARRY2(uVar21,uVar21);
  pcVar19 = (char *)(uVar21 * 2);
  bVar44 = pcVar19 == (char *)0x0;
  bVar14 = (byte)pcVar27;
  switch(uVar21) {
  case 0:
    goto LAB_0000_f247;
  case 1:
    pcStack_a = pcVar23;
    if (pcVar23 == (char *)0x32) {
      if (*(byte *)((uint)(byte)pcStack_6[4] * 8 + 0x5c5a) < 0x80) {
        FUN_0000_d56a();
        pcVar23 = (char *)FUN_0000_4f84();
      }
    }
    else {
      if (pcVar23 == (char *)0x64) {
        FUN_0000_4f84();
        FUN_0000_54ce();
        FUN_0000_d224();
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      if (pcVar23 == "") {
        pcVar23 = (char *)FUN_0000_82ce();
      }
    }
    return pcVar23;
  case 2:
    *(byte *)0xfe58 = bVar14;
    if ((*(byte *)0x58a2 & 0x20) != 0) {
      FUN_0000_fc94();
      FUN_0000_3270();
      FUN_0000_5dce();
    }
    if ((*(byte *)0x58a2 & 0x22) != 0) {
      pcVar19 = (char *)FUN_0000_004c();
      return pcVar19;
    }
    if ((uStack_4 == (char *)0x0) || (((uint)uStack_4 & 0x20) != 0)) {
      FUN_0000_fc94();
      FUN_0000_3270();
      pbVar2 = (byte *)0x58a2;
      *pbVar2 = *pbVar2 | 1;
      pcVar19 = (char *)FUN_0000_0026();
      return pcVar19;
    }
    if ((*(byte *)0x58a2 & 4) != 0) {
      FUN_0000_fc94();
      pcVar19 = (char *)FUN_0000_0022();
      return pcVar19;
    }
    if ((*(byte *)0x58a2 & 8) != 0) {
      pcVar19 = (char *)FUN_0000_0026();
      return pcVar19;
    }
    FUN_0000_fc94();
    if (((uint)uStack_4 & 0x80) == 0) {
      pcVar19 = (char *)func_0x0001977e();
      pcStack_6 = pcVar19;
      if ((((pcVar19 != (char *)0x1) && (pcVar19 != (char *)0x2)) && (pcVar19 != "\x01\b")) &&
         (pcVar19 != "\b")) goto LAB_1000_0026;
    }
    else if ((param_1 != (char *)0xff) && (*(char *)((int)param_1 * 8 + -0x45e9) == '-')) {
      FUN_0000_3270();
      FUN_0000_5dce();
      pbVar2 = (byte *)(param_2 * 8 + -0x45ea);
      *pbVar2 = *pbVar2 | 4;
      *(int *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c5b) = 0;
      pcVar19 = (char *)FUN_0000_5506();
      goto LAB_1000_0026;
    }
    pcVar19 = (char *)FUN_1000_3270();
LAB_1000_0026:
    if (((uint)uStack_4 & 0x80) != 0) {
      func_0x00014320();
      pcVar19 = (char *)FUN_1000_7330();
    }
    pbVar2 = (byte *)0x58a2;
    *pbVar2 = *pbVar2 & 0xf3;
    return pcVar19;
  case 3:
    bVar14 = func_0x000d4857();
    pcVar19 = (char *)(uint)(byte)(bVar14 + in_stack_00000038._1_1_);
    bVar43 = (byte)(bVar14 + in_stack_00000038._1_1_) == 0;
    if (CARRY1(bVar14,in_stack_00000038._1_1_) || bVar43) goto code_r0x00008790;
    while (!bVar43) {
      uStack_4 = param_1;
      if (((int)unaff_SI < iStack_2e) && (iVar20 = FUN_0000_54ce(), iVar20 == 0)) {
        uStack_4 = (char *)(uint)(byte)param_1[0x16d4];
      }
      iVar20 = *piStack_36;
      uStack_2c = *(int *)(iVar20 + 0x1704);
      uStack_30 = *(int *)(iVar20 + 0x1714);
      pcVar19 = (char *)FUN_0000_7f26();
      piStack_36 = piStack_36 + 1;
code_r0x00008790:
      unaff_SI = unaff_SI + 1;
      bVar43 = unaff_SI == pcStack_6;
    }
    return pcVar19;
  case 5:
    pcVar19 = (char *)FUN_0000_a380();
    return pcVar19;
  case 6:
    pcVar13 = (code *)swi(0xeb);
    (*pcVar13)();
    uStack_c = FUN_0000_63a8();
    if (uStack_c == 0xffff) {
      return (char *)0x0;
    }
    pcStack_220 = (char *)0x0;
    uStack_8._0_1_ = *(byte *)((int)pcStack_6 * 8 + 0x5c5f);
    FUN_0000_5494();
    pbVar2 = (byte *)0x24e6;
    *pbVar2 = *pbVar2 | 2;
    if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
      if (*(byte *)0x5888 < 3) {
        *(int *)0x5888 = 0;
      }
      else {
        pcVar6 = (char *)0x5888;
        *pcVar6 = *pcVar6 + -2;
      }
    }
    if ((byte)uStack_8 < 0x80) goto LAB_0000_ec36;
    uStack_8._0_1_ = (byte)uStack_8 & 0x7f;
    pcStack_220 = (char *)0xebbf;
    FUN_0000_3270();
    pcStack_220 = (char *)0xebc5;
    FUN_0000_49f0();
    if ((*(byte *)0x5893 < 0x80) || (*(char *)(uStack_c * 0x20 + 0x55b3) != 'D'))
    goto LAB_0000_ec36;
    pcStack_6 = (char *)0x0;
    pcVar19 = (char *)0xba14;
    goto LAB_0000_ebe5;
  case 7:
    *(int *)0xfe = unaff_SS;
    *(char ***)0xfc = &pcStack_220;
    *(char **)0xfa = pcVar27;
    *(int *)0xf8 = unaff_DS;
    *(int *)0xf6 = unaff_ES;
    uVar39 = 0;
    piVar33 = (int *)0xf4;
    uRam0000006e = unaff_ES;
    *(int *)0xf4 = 0x904b;
    func_0x000090c1();
    iRam000091a0 = -iRam000091a0;
    if (cRam000090e0 != -1) {
      puVar34 = (int *)((int)piVar33 + -2);
      *(int *)((int)piVar33 + -2) = extraout_DX_00;
      pcVar13 = (code *)swi(0x21);
      (*pcVar13)();
      piVar33 = puVar34 + 1;
      *puVar34 = 0x906e;
      FUN_0000_90d4();
    }
    iVar20 = 1;
    for (iVar38 = 0; *(int *)(iVar38 + 6) != -1; iVar38 = iVar38 + 0x10) {
      bVar43 = false;
      if ((*(uint *)(iVar38 + 6) & 0x4000) != 0) {
        piVar33[-1] = iVar38;
        piVar33[-2] = iVar20;
        piVar33[-3] = uVar39;
        uVar39 = 0x8d0;
        piVar35 = piVar33 + -4;
        piVar33[-4] = 0x9092;
        thunk_FUN_0000_8f97();
        iVar20 = *piVar35;
        iVar38 = piVar35[1];
        piVar33 = piVar35 + 2;
        if (bVar43) {
          piVar35[1] = 0x9099;
          FUN_0000_90d4();
          piVar33 = piVar35 + 2;
        }
      }
      iVar20 = iVar20 + 1;
    }
    iVar20 = *piVar33;
    uVar39 = piVar33[1];
    puVar25 = (int *)piVar33[3];
    uVar40 = 0x1a2;
    pcVar13 = (code *)swi(0x21);
    bVar14 = (*pcVar13)();
    if (bVar14 < 2) {
      pcVar13 = (code *)swi(0x20);
      (*pcVar13)();
    }
    uVar22 = *(int *)0x2 + 0xeefa;
    if (0xfff < uVar22) {
      uVar22 = 0x1000;
    }
    puVar28 = puVar25 + -0x42c2;
    puVar30 = puVar25 + -0x42c2;
    if ((int *)0x42c1 < puVar25) {
      *(int *)(puVar25 + -0x42c4) = 0x1106;
      uVar39 = *(int *)(puVar25 + -0x42c4);
      *(int *)(puVar25 + -0x42c4) = 0x1bc9;
      FUN_0000_1fa6();
      *(int *)(puVar25 + -0x42c4) = 0;
      *(int *)(puVar25 + -0x42c6) = 0x1bcf;
      FUN_0000_1f7d();
      pcVar13 = (code *)swi(0x21);
      (*pcVar13)();
      puVar30 = puVar28;
    }
    puVar29 = (int *)((uint)puVar30 & 0xfffe);
    iRam0001626e = uVar22 * 0x10 + -1;
    puRam00016270 = puVar29;
    puRam00016274 = puVar29;
    *(int *)0x2 = uVar22 + 0x1106;
    iVar38 = -(iVar20 - (uVar22 + 0x1106));
    pcVar13 = (code *)swi(0x21);
    (*pcVar13)();
    uRam000162e5 = uVar39;
    *(int *)(puVar29 + -2) = 0x1106;
    uVar39 = *(int *)(puVar29 + -2);
    puVar25 = (int *)0xa524;
    for (iVar20 = 0x181c; iVar20 != 0; iVar20 = iVar20 + -1) {
      puVar1 = puVar25;
      puVar25 = puVar25 + 1;
      *puVar1 = 0;
    }
    *(int *)(puVar29 + -2) = 0x1106;
    uVar41 = *(int *)(puVar29 + -2);
    puVar31 = puVar29 + -2;
    *(int *)(puVar29 + -2) = 0x1c15;
    while( true ) {
      pcVar13 = (code *)swi(0x21);
      uVar18 = (*pcVar13)();
      *(int *)0x5287 = uVar18;
      pcVar13 = (code *)swi(0x21);
      (*pcVar13)();
      *(int *)0x5273 = iVar38;
      *(int *)0x5275 = uVar39;
      *(int *)(puVar31 + -2) = uVar40;
      pcVar13 = (code *)swi(0x21);
      (*pcVar13)();
      *(int *)(puVar31 + -2) = 0x1106;
      uVar41 = *(int *)(puVar31 + -2);
      if (*(int *)0x6ad0 == 0) break;
      uVar39 = *(int *)0x5285;
      bVar43 = false;
      iVar38 = 0;
      ppcVar11 = (code **)0x6ace;
      pcVar8 = ppcVar11[1];
      pcVar12 = *ppcVar11;
      *(int *)(puVar31 + -2) = uVar40;
      puVar32 = puVar31 + -4;
      *(int *)(puVar31 + -4) = 0x1c8c;
      (*pcVar12)();
      if (!bVar43) {
        ppcVar11 = (code **)0x6ace;
        pcVar8 = ppcVar11[1];
        pcVar12 = *ppcVar11;
        *(int *)(puVar32 + -2) = uVar40;
        puVar31 = puVar32 + -4;
        *(int *)(puVar32 + -4) = 0x1ca2;
        (*pcVar12)();
        *(int *)(puVar31 + -2) = 0x1106;
        uVar41 = *(int *)(puVar31 + -2);
        break;
      }
      *(int *)(puVar32 + -2) = 0x1106;
      uVar41 = *(int *)(puVar32 + -2);
      *(int *)(puVar32 + -2) = 2;
      *(int *)(puVar32 + -4) = 0x1c45;
      FUN_0000_1fa6();
      *(int *)(puVar32 + -4) = 0x1c48;
      FUN_0000_1f7d();
      *(int *)(puVar32 + -2) = 0xff;
      uVar40 = 0;
      pcVar8 = *(code **)0x5212;
      puVar31 = puVar32 + -4;
      *(int *)(puVar32 + -4) = 0x1c50;
      (*pcVar8)();
    }
    iVar20 = *(int *)0x2c;
    if (iVar20 != 0) {
      pcVar19 = (char *)0x0;
      do {
        bVar43 = *pcVar19 == '\0';
        if (bVar43) break;
        iVar38 = 0xc;
        pcVar23 = (char *)0x5266;
        do {
          if (iVar38 == 0) break;
          iVar38 = iVar38 + -1;
          pcVar7 = pcVar19;
          pcVar19 = pcVar19 + 1;
          pcVar6 = pcVar23;
          pcVar23 = pcVar23 + 1;
          bVar43 = *pcVar6 == *pcVar7;
        } while (bVar43);
        if (bVar43) {
          *(int *)(puVar31 + -2) = iVar20;
          *(int *)(puVar31 + -4) = uVar41;
          uVar40 = *(int *)(puVar31 + -4);
          uVar39 = *(int *)(puVar31 + -2);
          pcVar23 = (char *)((int)FUN_0000_5288 + 6);
          iVar20 = (int)*pcVar19;
          do {
            pcVar19 = pcVar19 + 1;
            cVar15 = *pcVar19;
            cVar16 = cVar15 + '\x01';
            if (cVar16 != '\0') {
              cVar16 = cVar15;
            }
            pcVar6 = pcVar23;
            pcVar23 = pcVar23 + 1;
            *pcVar6 = cVar16;
            iVar20 = iVar20 + -1;
          } while (iVar20 != 0);
          *(int *)(puVar31 + -2) = 0x1106;
          uVar41 = *(int *)(puVar31 + -2);
          break;
        }
        iVar38 = 0x7fff;
        bVar43 = true;
        do {
          if (iVar38 == 0) break;
          iVar38 = iVar38 + -1;
          pcVar6 = pcVar19;
          pcVar19 = pcVar19 + 1;
          bVar43 = *pcVar6 == '\0';
        } while (!bVar43);
      } while (bVar43);
    }
    iVar20 = 4;
    do {
      pbVar2 = (byte *)((int)FUN_0000_5288 + 6 + iVar20);
      bVar43 = false;
      *pbVar2 = *pbVar2 & 0xbf;
      pcVar13 = (code *)swi(0x21);
      (*pcVar13)();
      if ((!bVar43) && ((extraout_DX & 0x80) != 0)) {
        pbVar2 = (byte *)((int)FUN_0000_5288 + 6 + iVar20);
        *pbVar2 = *pbVar2 | 0x40;
      }
      iVar20 = iVar20 + -1;
    } while (-1 < iVar20);
    *(int *)(puVar31 + -2) = 0x1d0a;
    FUN_0000_1dac();
    *(int *)(puVar31 + -2) = 0x1d13;
    pcVar19 = (char *)FUN_0000_1d9d();
    return pcVar19;
  case 8:
    pcVar19 = (char *)FUN_0000_3e5f();
    return pcVar19;
  case 9:
  case 0xc:
    *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
    pcStack_220 = (char *)0x588d;
    thunk_FUN_0000_8fec();
  case 10:
    goto code_r0x00007513;
  case 0xb:
    if (bVar44) {
      iVar20 = FUN_0000_b650();
      uStack_4 = uStack_4 + iVar20;
      FUN_0000_9c6a();
      if (uStack_4 == (char *)0x0) {
        FUN_0000_3270();
      }
    }
    else {
      if (pcVar27 != (char *)0x2) {
        return pcVar27;
      }
      iVar20 = FUN_0000_b650();
      uStack_4 = uStack_4 + iVar20;
      FUN_0000_9c6a();
      iVar20 = FUN_0000_b650();
      uStack_4 = uStack_4 + iVar20;
      FUN_0000_9c6a();
      if (uStack_4 == (char *)0x0) {
        FUN_0000_3270();
      }
    }
    pcVar19 = (char *)FUN_0000_699c();
    return pcVar19;
  case 0xd:
    FUN_0000_3270();
    FUN_0000_3270();
    if (uStack_10 == 0x4e) {
      FUN_0000_3270();
      if (*(byte *)0x5895 < 0x80) {
        uStack_4 = (char *)FUN_0000_5e22();
        *uStack_4 = -0x47;
      }
      else {
        uStack_4 = (char *)FUN_0000_5e22();
        *uStack_4 = -0x48;
      }
      pbVar2 = (byte *)0x24e6;
      *pbVar2 = *pbVar2 | 2;
    }
    else if (((uStack_10 == 0xdc) || (uStack_4 = (char *)FUN_0000_dd48(), uStack_4 == (char *)0x0))
            && (uStack_4 = (char *)FUN_0000_ddfa(), uStack_4 == (char *)0x0)) {
      uStack_4 = (char *)FUN_0000_deb4();
    }
    return uStack_4;
  case 0xe:
    *(char **)0x544a = pcVar27;
    *(int *)0x5448 = 0;
    pcVar13 = (code *)swi(0x21);
    (*pcVar13)();
    *(char **)0x544e = pcVar19;
    *(int *)0x544c = unaff_ES;
    pcStack_220 = (char *)0x0;
    pcVar13 = (code *)swi(0x21);
    (*pcVar13)();
    do {
    } while (*(uint *)0x5448 < *(uint *)0x544a);
    pcVar13 = (code *)swi(0x21);
    pcVar19 = (char *)(*pcVar13)();
    return pcVar19;
  case 0xf:
    pcVar19 = (char *)in(0x5d);
    return pcVar19;
  case 0x10:
    pcVar6 = pcVar19 + (int)unaff_SI;
    *pcVar6 = *pcVar6 + bVar14;
    *(int *)0x535a = 0;
    pcVar13 = (code *)swi(0x21);
    (*pcVar13)();
    pcVar13 = (code *)swi(0x21);
    pcStack_220 = pcVar19;
    (*pcVar13)();
    do {
    } while (*(int *)0x535a == 0);
    *(int *)0x535a = 0;
    do {
      piVar3 = (int *)0x5356;
      *piVar3 = *piVar3 + 1;
    } while (*(int *)0x535a == 0);
    pcVar13 = (code *)swi(0x21);
    (*pcVar13)();
    *(int *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
    pcVar13 = (code *)swi(0x12);
    pcVar19 = (char *)(*pcVar13)();
    *(char **)0x5358 = pcVar19;
    return pcVar19;
  case 0x11:
    func_0x00003ff8();
    func_0x00003ff8();
    FUN_0000_3f3e();
    *(byte *)0x5893 = bStack_e;
    *(int *)0xa9be = 0;
    return (char *)(uint)bStack_e;
  case 0x12:
    pbVar2 = (byte *)(pcVar19 + (int)unaff_SI);
    *pbVar2 = *pbVar2 | bVar14;
    pbVar2 = (byte *)(pcVar19 + (int)unaff_SI);
    *pbVar2 = *pbVar2 | bVar14;
    pcVar6 = pcVar19 + (int)unaff_SI;
    *pcVar6 = *pcVar6 + bVar14;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x13:
LAB_0000_f247:
    do {
      pcVar23 = (char *)FUN_0000_edf8();
      pcVar19 = unaff_SI;
      do {
        unaff_SI = pcVar19 + 1;
        if (6 < (int)unaff_SI) {
          return pcVar23;
        }
        pcVar23 = (char *)RANDOM();
        pbVar36 = (byte *)(pcVar19 + 0x41bd);
        pcVar19 = unaff_SI;
      } while (pcVar23 < (char *)(uint)*pbVar36);
      if (unaff_SI == "") {
        RANDOM();
      }
      else if (unaff_SI == "p") {
        RANDOM();
      }
      else {
        uStack_4 = (char *)RANDOM();
      }
    } while( true );
  }
  uVar17 = SUB21(pcStack_220,0);
  *(int *)0x5859 = uVar17;
  *(int *)0x5858 = uVar17;
  *(int *)0x57b2 = uVar17;
  *(int *)0x587e = 1;
  *(int *)((int)FUN_0000_5956 + 3) = uVar17;
  pcStack_6 = "\b";
  pbVar36 = (byte *)((int)FUN_0000_55be + 1);
  do {
    if (*pbVar36 < 0x19) {
      pbVar2 = pbVar36;
      *pbVar2 = *pbVar2 + 1;
    }
    pbVar36 = pbVar36 + 0x20;
  } while (pbVar36 < (byte *)0x57bf);
  pcVar6 = (char *)0x587d;
  *pcVar6 = *pcVar6 + '\x01';
  if (0xd < *(byte *)0x587d) {
    *(int *)0x587d = 1;
    piVar3 = (int *)0x5874;
    *piVar3 = *piVar3 + 1;
  }
  pcStack_220 = (char *)0x6ac1;
  FUN_0000_4320();
  if (0x32 < *(byte *)0x58a5) goto LAB_0000_6b6a;
  pcStack_a = (char *)(uint)*(byte *)0x58a5;
  if ((((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) || (*(byte *)0x587f < 5)) ||
     (0x13 < *(byte *)0x587f)) {
    *(int *)0x58a5 = 2;
  }
  else {
    if (*(char *)0x587f == '\x05') {
      uVar22 = (uint)*(byte *)0x5881;
    }
    else {
      if (*(char *)0x587f != '\x13') {
        *(int *)0x58a5 = 0x32;
        goto LAB_0000_6b35;
      }
      uVar22 = -(*(byte *)0x5881 - 0x3b);
    }
    *(int *)0x58a5 = *(int *)(uVar22 / 10 + 0x6a80);
  }
LAB_0000_6b35:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(int *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(int *)0x58a5 = 10;
  }
  if (pcStack_a != (char *)(uint)*(byte *)0x58a5) {
    *(int *)0x24e6 = 1;
  }
LAB_0000_6b6a:
  bVar14 = *(byte *)0x5880;
  pcVar19 = (char *)(uint)bVar14;
  if (*(byte *)0x587f != bVar14) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      pcStack_220 = (char *)0x6b84;
      pcVar19 = (char *)FUN_0000_64a4();
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
      pcVar19 = (char *)(uint)bVar14;
      *(byte *)0x5884 = bVar14;
    }
  }
  if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
    pcStack_220 = (char *)0x6bb7;
    pcVar19 = (char *)FUN_0000_8bca();
  }
  return pcVar19;
}



// WARNING: Instruction at (ram,0x0000fb45) overlaps instruction at (ram,0x0000fb44)
//
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Control flow encountered bad instruction data
// WARNING: Possible PIC construction at 0x00001c12: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00001c15)
// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer
// WARNING: Type propagation algorithm not settling

byte * FUN_0000_7b70(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
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
  byte bVar12;
  char cVar13;
  char cVar14;
  int uVar15;
  byte bVar22;
  int uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar23;
  int in_CX;
  int *puVar24;
  byte bVar25;
  uint extraout_DX;
  uint uVar26;
  uint uVar27;
  int extraout_DX_00;
  byte *pbVar28;
  int *puVar29;
  int *puVar30;
  int *puVar32;
  int *puVar33;
  int *piVar34;
  int *puVar35;
  char *pcVar36;
  int unaff_SI;
  byte *pbVar37;
  char *pcVar38;
  byte *pbVar39;
  int unaff_DI;
  int iVar40;
  int unaff_ES;
  int uVar41;
  int uVar42;
  int unaff_SS;
  int uVar43;
  int unaff_DS;
  bool bVar44;
  bool bVar45;
  int uVar46;
  int in_stack_00000038;
  byte *pbStack_218;
  byte bStack_216;
  int iStack_210;
  byte *pbStack_20e;
  int iStack_20c;
  byte *apbStack_206 [232];
  int *piStack_36;
  byte bStack_30;
  int iStack_2e;
  byte bStack_2c;
  int *puStack_1e;
  int *puStack_1c;
  int *puStack_1a;
  byte *pbStack_18;
  byte *pbStack_16;
  byte **ppbStack_14;
  byte *pbVar47;
  int uStack_e;
  byte *pbStack_a;
  int uStack_8;
  byte *pbStack_6;
  int uStack_4;
  int *puVar31;

  uVar15 = (int)((uint)in_CX >> 8);
  pbStack_a = (byte *)(*(byte *)((int)param_1 * 8 + 0x5c5a) & 0xfc);
  uStack_e = (byte *)0xa;
  FUN_0000_30da();
  uStack_e = (byte *)0xfc;
  FUN_0000_30da();
  if ((int)pbStack_a < 0x40) {
    uStack_e = (byte *)0xa3fa;
  }
  else {
    uVar27 = (int)(pbStack_a + -0x40) >> 0xf;
    uVar15 = 0;
    uStack_e = (byte *)*(int *)
                        ((((int)(((uint)(pbStack_a + -0x40) ^ uVar27) - uVar27) >> 2 ^ uVar27) -
                         uVar27) * 2 + 0x18b6);
  }
  FUN_0000_3270();
  uStack_e = (byte *)0xfb;
  FUN_0000_30da();
  uStack_e = (byte *)0xa402;
  FUN_0000_3270();
  pbVar23 = (byte *)CONCAT11(uVar15,3);
  pbVar37 = (byte *)((int)param_1 * 8);
  uStack_e = (byte *)(uint)pbVar37[0x5c5c];
  pbVar17 = (byte *)(uint)pbVar37[0x5c5d];
  pbVar47 = (byte *)0x7be7;
  uVar46 = FUN_0000_5e22();
  uVar27 = (uint)uStack_e;
  uVar26 = (uint)((ulong)uVar46 >> 0x10);
  pbVar20 = (byte *)uVar46;
  bVar12 = *pbVar20;
  pbStack_6 = (byte *)(uint)bVar12;
  if ((bVar12 < 4) || (((bVar12 & 0xfe) != 0x6a && ((bVar12 & 0xf0) == 0x60)))) {
    uStack_8 = 1;
  }
  else {
    uStack_8 = 0;
  }
  if (pbStack_a == (byte *)0xfc) {
    uStack_4 = (byte *)0xa;
    if (*(char *)0x57b5 != '\0') {
      FUN_0000_3270();
      ppbStack_14 = (byte **)0xfde8;
      pbStack_16 = (byte *)0x1;
      pbStack_18 = (int *)0x1;
      puStack_1a = (int *)0x7c44;
      FUN_0000_3bb2();
      *(int *)0x57b5 = 0;
    }
    goto LAB_0000_7d5a;
  }
  if (((byte)pbStack_a & 0xf0) == 0x80) {
    uStack_8 = 1;
  }
  if ((*(byte *)0x587c & 0xf8) == 0x20) {
    if (pbStack_a == (byte *)0x2c) {
      uStack_4 = (byte *)0xe;
    }
    else if (uStack_8 == 0) {
      uStack_4 = (byte *)0xd;
    }
    else {
      uStack_4 = (byte *)0xb;
    }
    goto LAB_0000_7d5a;
  }
  if (pbStack_a == (byte *)0x2c) {
    uStack_4 = (byte *)0xc;
    goto LAB_0000_7d5a;
  }
  if (uStack_8 != 0) {
    uStack_4 = (byte *)0xf;
    goto LAB_0000_7d5a;
  }
  if (pbStack_6 == (byte *)0x8) {
    uStack_4 = (byte *)0x3;
    goto LAB_0000_7d5a;
  }
  if (pbStack_6 < (byte *)0x9) {
    pbVar21 = pbStack_6 + -1;
    if (pbVar21 < (byte *)0x7) {
      pbVar18 = (byte *)((int)pbVar21 * 2);
      switch(pbVar21) {
      case (byte *)0x0:
        pbVar6 = pbVar18 + (int)pbVar37 + -0x18;
        *pbVar6 = *pbVar6 + (char)((ulong)uVar46 >> 0x10);
        return pbVar20;
      case (byte *)0x1:
        FUN_0000_79a6();
        FUN_0000_3f3e();
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      case (byte *)0x2:
        pbVar6 = pbVar18 + unaff_DI + -0x2cfc;
        *pbVar6 = *pbVar6 + 1;
        out(0xc6,(char)uVar46);
        ppbStack_14 = &pbStack_a;
        (pbVar18 + (int)pbVar37)[0x50] = (byte)pbVar18;
        puStack_1a = (int *)0x2;
        puStack_1c = (int *)0x63;
        puStack_1e = (int *)0xe87a;
        pbStack_18 = pbVar37;
        uStack_e = pbVar23;
        FUN_0000_5910();
        puStack_1c = (int *)*(int *)(uVar27 - 2);
                    // WARNING: Subroutine does not return
        puStack_1e = (int *)0xe880;
        thunk_FUN_0000_8fec();
      case (byte *)0x3:
        if (pbVar18 == (byte *)0x0 || SCARRY2((int)pbVar21,(int)pbVar21) != (int)pbVar18 < 0) {
          while (unaff_SI = unaff_SI + 1, unaff_SI < 4) {
            ppbStack_14 = (byte **)param_1;
            pbStack_16 = (byte *)0xfb37;
            iVar19 = FUN_0000_fa78();
            if (iVar19 != 0) {
              pbStack_6 = pbStack_6 + 1;
            }
          }
          return (byte *)(uint)(pbStack_6 == (byte *)0x4);
        }
        pcVar11 = (code *)swi(3);
        pbVar37 = (byte *)(*pcVar11)();
        return pbVar37;
      case (byte *)0x4:
LAB_0000_d88d:
        if (pbStack_a == (byte *)0x32) {
          if (*(byte *)((uint)pbStack_6[4] * 8 + 0x5c5a) < 0x80) {
            ppbStack_14 = (byte **)0xd907;
            FUN_0000_d56a();
            ppbStack_14 = (byte **)0xd90d;
            pbStack_a = (byte *)FUN_0000_4f84();
          }
        }
        else {
          if (pbStack_a == (byte *)0x64) {
            FUN_0000_4f84();
            ppbStack_14 = (byte **)0xd8d4;
            FUN_0000_54ce();
            ppbStack_14 = (byte **)0xd8d8;
            FUN_0000_d224();
            ppbStack_14 = (byte **)0xff;
                    // WARNING: Subroutine does not return
            pbStack_16 = (byte *)0xd8e2;
            thunk_FUN_0000_8fec();
          }
          if (pbStack_a == (byte *)0x96) {
            pbStack_a = (byte *)FUN_0000_82ce();
          }
        }
        return pbStack_a;
      case (byte *)0x5:
        *(int *)0x5396 = 0x1a2;
        return (byte *)((uint)pbVar20 & 0xff);
      }
      do {
        pbVar20 = apbStack_206[(int)pbStack_20e];
        pbVar39 = (byte *)((int)(pbStack_20e + 1) * 2);
        pbVar21 = apbStack_206[(int)(pbStack_20e + 1)];
        pbStack_20e = pbStack_20e + 2;
        for (; pbStack_218 < (byte *)0x8000; pbStack_218 = pbStack_218 + -1) {
          bVar44 = pbStack_218 < (byte *)0x7;
          bVar45 = pbStack_218 == (byte *)0x7;
          pbVar28 = pbStack_218;
code_r0x00007513:
          if (bVar44 || bVar45) {
            bVar44 = CARRY2((uint)pbVar28,(uint)pbVar28);
            pcVar38 = (char *)((int)pbVar28 * 2);
            cVar13 = (char)pbVar18;
            switch((int)*(int *)(pcVar38 + 0x5b16)) {
            case 0x5de5:
              uStack_4 = (byte *)((int)pbVar18 / (int)param_1);
              for (iVar19 = 0; iVar19 < (int)param_1; iVar19 = iVar19 + param_2) {
                FUN_0000_3d02();
                ppbStack_14 = (byte **)0x5e06;
                FUN_0000_3ae8();
                param_4 = param_4 + (int)uStack_4;
              }
              uStack_8 = param_4;
              pbStack_6 = (byte *)iVar19;
              pbVar37 = (byte *)FUN_0000_3d2e();
              return pbVar37;
            case 0x83ec:
              while (bVar44) {
                *puStack_1a = 0;
                *pbStack_18 = 0;
                *pbStack_16 = 0;
                *(int *)ppbStack_14 = 0;
                *pbVar39 = 0;
                *puStack_1e = 0;
                *puStack_1c = 0;
                pbVar47[3] = 0;
                pbVar47[2] = 0;
                pbVar47[1] = 0;
                *pbVar47 = 0;
                pbVar47[7] = 0;
                pbVar47[6] = 0;
                pbVar47[5] = 0;
                pbVar47[4] = 0;
                ppbStack_14 = (byte **)((int)ppbStack_14 + 8);
                pbStack_16 = pbStack_16 + 8;
                pbStack_18 = pbStack_18 + 8;
                puStack_1a = puStack_1a + 8;
                puStack_1c = puStack_1c + 8;
                puStack_1e = puStack_1e + 8;
                pbVar39 = pbVar39 + 8;
                bVar44 = pbVar39 < (byte *)((int)FUN_0000_5d5e + 1);
                pbVar37 = pbVar47;
                pbVar47 = pbVar47 + 8;
              }
              pbStack_6 = (byte *)0x0;
              pbVar18 = pbVar17;
              uStack_4 = pbVar37;
              do {
                cVar13 = (char)pbVar18;
                pbVar47 = (byte *)(uint)*(byte *)0x585b;
                if (pbVar47 <= pbStack_6) {
                  if (*(char *)0xadb9 == -0x24) {
                    ppbStack_14 = (byte **)0x5;
                    pbStack_16 = (byte *)0x5;
                    pbStack_18 = (byte *)(uint)*(byte *)0x5895;
                    puStack_1a = (int *)0x85bb;
                    uVar27 = FUN_0000_7f26();
                    *(char *)((uVar27 & 0xff) * 8 + 0x5c5f) = *(char *)0x5895 * '\x03' + '\a';
                    bVar12 = *(byte *)0xbb15;
                    pbVar47 = (byte *)(uint)bVar12;
                    *(byte *)0xadb9 = bVar12;
                  }
                  return pbVar47;
                }
                uVar15 = (int)((uint)pbVar23 >> 8);
                pbVar23 = (byte *)CONCAT11(uVar15,5);
                if (*(char *)((int)pbStack_6 * 0x20 + 0x55b3) != 'D') {
                  if (*(char *)((int)pbStack_6 * 0x20 + 0x55c5) == '*') {
                    cVar13 = '*';
                  }
                  if (*(char *)((int)pbStack_6 * 0x20 + 0x55c5) == ',') {
                    cVar13 = ',';
                  }
                  if (cVar13 != '\0') {
                    ppbStack_14 = (byte **)0x843d;
                    pbStack_a = (byte *)RANDOM();
                    if (pbStack_a == (byte *)0xb) {
                      FUN_0000_3270();
                      ppbStack_14 = (byte **)0x1;
                      pbStack_16 = (byte *)0x28;
                      pbStack_18 = (byte *)0x845f;
                      FUN_0000_5dce();
                      ppbStack_14 = (byte **)0x846b;
                      FUN_0000_8880();
                    }
                  }
                  bVar12 = pbStack_6[0x1724];
                  uStack_8 = CONCAT11(uStack_8._1_1_,bVar12);
                  bVar22 = pbStack_6[0x172c];
                  uStack_e = (byte *)CONCAT11(uStack_e._1_1_,bVar22);
                  pbVar47 = (byte *)0x1;
                  ppbStack_14 = (byte **)(uint)bVar12;
                  pbStack_16 = (byte *)(uint)bVar22;
                  pbStack_18 = (byte *)(uint)*(byte *)0x5895;
                  puStack_1a = (int *)0x8496;
                  pbVar17 = pbStack_6;
                  uVar46 = FUN_0000_7f26();
                  uVar26 = (uint)((ulong)uVar46 >> 0x10);
                  pbVar18 = (byte *)uVar46;
                  pbStack_a = pbVar18;
                  *(int *)((uint)*(byte *)((int)pbVar18 * 8 + -0x45e8) * 8 + 0x5c61) = 0xff;
                  uVar42 = uRam000091a4;
                  pbVar23 = (byte *)CONCAT11(uVar15,5);
                  pbVar28 = (byte *)((int)pbStack_6 * 0x20);
                  uVar27 = pbVar28[0x55b2] - 0x41;
                  if (uVar27 < 0x14) goto LAB_0000_84c4;
                  pbVar37 = (byte *)((*(uint *)((int)pbVar18 * 8 + -0x45e8) & 0xff) * 8);
                  *(byte *)((uint)*(byte *)((int)pbVar18 * 8 + -0x45e8) * 8 + 0x5c5b) =
                       pbVar37[0x5c5a];
                  pbVar23 = (byte *)CONCAT11(uVar15,5);
                  if (*(char *)((int)pbStack_6 * 0x20 + 0x55b3) == 'S') {
                    FUN_0000_82ce();
                  }
                  else {
                    FUN_0000_81b4();
                  }
                }
                pbStack_6 = pbStack_6 + 1;
              } while( true );
            case 0x8b5e:
              pbVar6 = (byte *)(pcVar38 + (int)pbVar39);
              *pbVar6 = *pbVar6 & 0xe8;
              pcVar5 = &stack0x823c + (int)pbVar39;
              *pcVar5 = *pcVar5 + '\x01';
            case 0x8b55:
              ppbStack_14 = (byte **)*(int *)0x217e;
              pbStack_16 = (byte *)*(int *)0x2180;
              pbStack_18 = (byte *)0x8b66;
              FUN_0000_8a60();
              if (*(int *)0x2182 != -1) {
                ppbStack_14 = (byte **)*(int *)0x2182;
                pbStack_16 = (byte *)*(int *)0x2184;
                pbStack_18 = (byte *)0x8b81;
                FUN_0000_8a60();
              }
              pcVar5 = (char *)0x2186;
              *pcVar5 = *pcVar5 + '\x01';
              ppbStack_14 = (byte **)*(int *)0x217e;
              pbStack_16 = (byte *)*(int *)0x2180;
              pbStack_18 = (byte *)0x8b9d;
              pbVar37 = (byte *)FUN_0000_8a60();
              if (*(int *)0x2182 != -1) {
                ppbStack_14 = (byte **)*(int *)0x2182;
                pbStack_16 = (byte *)*(int *)0x2184;
                pbStack_18 = (byte *)0x8bbc;
                pbVar37 = (byte *)FUN_0000_8a60();
              }
              if (0xf < *(byte *)0x2186) {
                *(int *)0x2186 = 0;
              }
              return pbVar37;
            case 0x8bd7:
              *(int *)0x5350 = 0x6c;
              ppcVar9 = (code **)0x5350;
              pbVar37 = (byte *)(**ppcVar9)();
              return pbVar37;
            case 0x9000:
              thunk_FUN_0000_8f97();
              return param_1;
            case 0xfe46:
              if (pbVar18 + bVar44 + 0x400 != (byte *)0x0) {
                ppbStack_14 = (byte **)0xfe58;
                iVar19 = RANDOM();
                if (iVar19 < 0x20) {
                    // WARNING: Subroutine does not return
                  thunk_FUN_0000_8fec();
                }
              }
              return (byte *)0x0;
            }
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            pbVar39 = pbVar39 + (int)pbVar18;
            bVar12 = cVar13 + pcVar38[(int)pbVar37];
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar12;
            pcVar5 = pcVar38 + (int)pbVar37 + 3;
            cVar13 = (char)((uint)pcVar38 >> 8);
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar12;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar12;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar12;
            bVar22 = bVar12 / 0;
            puVar1 = &stack0xfffe + (int)pbVar37;
            *puVar1 = *puVar1;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + (char)pbVar23;
            bVar12 = bVar12 % 0 + pcVar38[(int)pbVar37];
            iVar19 = CONCAT11(bVar22,bVar12);
            pcVar5 = (char *)0xe000;
            *pcVar5 = *pcVar5 + (char)pcVar38;
            pcVar5 = pcVar38;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38;
            *pcVar5 = *pcVar5 + cVar13;
            pbVar47 = pbVar23 + -1;
            bVar25 = (byte)uVar26;
            if (pbVar47 == (byte *)0x0 || *pcVar5 == '\0') {
              pbVar47 = pbVar23 + -2;
              if (pbVar47 != (byte *)0x0 && *pcVar5 != '\0') {
                pcVar5 = pcVar38 + (int)pbVar37;
                *pcVar5 = *pcVar5 + bVar12;
                pcVar5 = pcVar38 + (int)pbVar37;
                *pcVar5 = *pcVar5 + bVar12;
                pbVar6 = pbVar37 + (int)&uStack_4 + 1;
                *pbVar6 = *pbVar6 + bVar12;
                pcVar5 = pcVar38 + (int)pbVar37;
                *pcVar5 = *pcVar5 + bVar12;
                piVar2 = (int *)(pcVar38 + (int)pbVar39);
                *piVar2 = *piVar2 + iVar19;
                piVar2 = (int *)(pcVar38 + (int)pbVar37);
                *piVar2 = *piVar2 + iVar19;
                piVar2 = (int *)(pcVar38 + (int)pbVar39);
                *piVar2 = *piVar2 + iVar19;
                piVar2 = (int *)(pcVar38 + (int)pbVar39);
                *piVar2 = *piVar2 + iVar19;
                pcVar5 = (char *)0x1800;
                *pcVar5 = *pcVar5 + cVar13;
                goto code_r0x00000485;
              }
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pbVar6 = pbVar39;
              *pbVar6 = *pbVar6 + (char)pbVar47;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 - bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar22;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              iVar19 = CONCAT11(bVar22 + bVar25,bVar12);
              pbVar6 = (byte *)(pcVar38 + (int)pbVar37);
              *pbVar6 = *pbVar6 ^ bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
              *(int *)0x1330 = iVar19;
              pcVar5 = pcVar38 + (int)pbVar37;
              *pcVar5 = *pcVar5 + bVar12;
            }
            pcVar5 = pcVar38 + (int)pbVar37;
            cVar13 = (char)iVar19;
            *pcVar5 = *pcVar5 + cVar13;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + cVar13;
            cVar13 = cVar13 + pcVar38[(int)pbVar37];
            iVar19 = CONCAT11((char)((uint)iVar19 >> 8),cVar13);
            pcVar5 = pcVar38 + (int)pbVar39;
            *pcVar5 = *pcVar5 + cVar13;
            piVar2 = (int *)(pcVar38 + (int)pbVar39);
            *piVar2 = *piVar2 + iVar19;
            pcVar5 = pcVar38 + (int)pbVar39;
            *pcVar5 = *pcVar5 + cVar13;
            piVar2 = (int *)(pcVar38 + (int)pbVar39);
            *piVar2 = *piVar2 + iVar19;
            ppcVar3 = (char **)0x3e00;
            *ppcVar3 = *ppcVar3 + (int)pcVar38;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + (char)pcVar38;
code_r0x00000485:
            pbVar6 = (byte *)(pcVar38 + (int)pbVar37);
            bVar22 = (byte)iVar19;
            *pbVar6 = *pbVar6 | bVar22;
            puVar4 = (uint *)(pcVar38 + (int)pbVar39 + 0xb);
            *puVar4 = *puVar4 | uVar26;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pbVar6 = (byte *)(pcVar38 + (int)pbVar37);
            bVar12 = *pbVar6;
            *pbVar6 = *pbVar6 + bVar25;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22 + CARRY1(bVar12,bVar25);
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + 0x2e;
            *pcVar5 = *pcVar5 + (char)pbVar47;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + '\x01';
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar39;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
            pcVar5 = pcVar38 + (int)pbVar37;
            *pcVar5 = *pcVar5 + bVar22;
                    // WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
          }
          if ((((int)pbVar21 < 0) || (10 < (int)pbVar21)) ||
             (((int)pbVar20 < 0 || (10 < (int)pbVar20)))) {
            iStack_20c = 0;
          }
          pbVar23 = (byte *)CONCAT11((char)((uint)pbVar23 >> 8),5);
          pbVar37 = pbVar21 + (int)(pbVar20 + param_4) * 0x20 + param_3 + (int)param_1;
          if (iStack_210 == 0) {
            pbVar39 = (byte *)((int)pbVar20 * 0x20);
            pbVar18 = pbVar21;
            if (((pbVar21 + (int)pbVar39)[-0x54fe] == 0) || (0x1f < (int)(pbVar20 + param_4))) {
LAB_0000_75b5:
              iStack_20c = 0;
            }
            else {
              pbVar39 = (byte *)((int)pbVar20 * 0x20);
              (pbVar21 + (int)pbVar39)[-0x54fe] = 0;
            }
          }
          else if (*pbVar37 != 0xff) goto LAB_0000_75b5;
          if (iStack_20c != 0) {
            pbVar17 = pbVar21 + (uint)*(byte *)0x589b + param_5;
            pbVar23 = (byte *)(uint)*(byte *)0x589c;
            ppbStack_14 = (byte **)0x75e6;
            pbVar18 = (byte *)FUN_0000_5e22();
            bStack_216 = *pbVar18;
            pbStack_16 = (byte *)0x75f9;
            ppbStack_14 = (byte **)pbVar20;
            pbVar47 = pbVar21;
            iVar19 = FUN_0000_8a10();
            if (iVar19 < param_7) {
LAB_0000_76b3:
              *pbVar37 = bStack_216;
            }
            else if (iStack_210 == 0) {
              bStack_216 = 0xff;
            }
            else {
              ppbStack_14 = (byte **)(uint)bStack_216;
              puStack_1a = (int *)0x761d;
              pbStack_18 = pbVar20;
              pbStack_16 = pbVar21;
              pbStack_18 = (byte *)FUN_0000_8a10();
              puStack_1a = (int *)0x7621;
              iVar19 = FUN_0000_781e();
              uVar15 = (int)((uint)pbVar23 >> 8);
              if (iVar19 == 0) {
                pbVar23 = (byte *)CONCAT11(uVar15,5);
                pbVar18 = pbVar21 + (int)pbVar20 * 0x20;
                pbVar39 = param_1;
                if ((((pbVar21 + (int)pbVar20 * 0x20)[(int)param_1] != 0) &&
                    (pbVar39 = (byte *)((int)(pbVar20 + param_6) * 0x20 + param_5),
                    pbVar18 = pbVar21, (pbVar21 + (int)pbVar39)[-0x52ec] != 0)) &&
                   (pbVar39 = (byte *)((int)(pbVar20 + param_6) * 0x20 + param_5),
                   (pbVar21 + (int)pbVar39)[-0x52ec] != 0)) goto LAB_0000_76b3;
                *pbVar37 = 0xff;
                bStack_216 = 0xff;
              }
              else {
                pbVar39 = pbVar20 + param_6;
                if ((((-1 < (int)pbVar39) && (-1 < (int)(pbVar21 + param_5))) &&
                    ((int)(pbVar21 + param_5) < 0x20)) && ((int)pbVar39 < 0x20)) {
                  pbVar23 = (byte *)CONCAT11(uVar15,5);
                  pbVar39 = (byte *)((int)(pbVar20 + param_6) * 0x20 + param_5);
                  pbVar18 = pbVar21;
                  if ((pbVar21 + (int)pbVar39)[-0x52ec] != 0) goto LAB_0000_76b3;
                }
                *pbVar37 = 0;
              }
            }
            ppbStack_14 = (byte **)(uint)bStack_216;
            puStack_1a = (int *)0x76d3;
            pbStack_18 = pbVar20;
            pbStack_16 = pbVar21;
            pbStack_18 = (byte *)FUN_0000_8a10();
            puStack_1a = (int *)0x76d7;
            uVar46 = FUN_0000_781e();
            uVar26 = (uint)((ulong)uVar46 >> 0x10);
            if ((int)uVar46 != 0) {
              apbStack_206[(int)uStack_4] = pbVar20;
              uStack_4 = uStack_4 + 1;
              pbVar39 = (byte *)((int)uStack_4 * 2);
              apbStack_206[(int)uStack_4] = pbVar21;
              uStack_4 = uStack_4 + 1;
            }
          }
          iStack_20c = 1;
        }
        pbStack_218 = (byte *)0x7;
        if (pbStack_20e == uStack_4) {
          return uStack_4;
        }
      } while( true );
    }
    goto LAB_0000_7d21;
  }
  if (pbStack_6 == (byte *)0x1d) {
LAB_0000_7cf0:
    uStack_4 = (byte *)0x7;
    goto LAB_0000_7d5a;
  }
  if (pbStack_6 < (byte *)0x1e) {
    if ((byte *)0x8 < pbStack_6) {
      if (pbStack_6 < (byte *)0xb) {
        uStack_4 = (byte *)0x5;
        goto LAB_0000_7d5a;
      }
      if (((byte *)0xa < pbStack_6) && (pbStack_6 < (byte *)0x10)) {
        uStack_4 = (byte *)0x6;
        goto LAB_0000_7d5a;
      }
    }
LAB_0000_7d21:
    if (*(char *)0x5893 == '\0') {
      uStack_4 = (byte *)0x2;
      goto LAB_0000_7d5a;
    }
  }
  else if (pbStack_6 != (byte *)((int)switchD_0000:40d8::caseD_0 + 7)) {
    if ((byte *)((int)switchD_0000:40d8::caseD_0 + 7) < pbStack_6) {
      if (((byte *)0x47 < pbStack_6) &&
         ((pbStack_6 < (byte *)0x4a || (((byte *)0x69 < pbStack_6 && (pbStack_6 < (byte *)0x6c))))))
      goto LAB_0000_7cf0;
    }
    else if (((byte *)0x1d < pbStack_6) && (pbStack_6 < (byte *)0x20)) {
      uStack_4 = (byte *)0x4;
      goto LAB_0000_7d5a;
    }
    goto LAB_0000_7d21;
  }
  uStack_4 = (byte *)0x8;
LAB_0000_7d5a:
  FUN_0000_7b0c();
  ppbStack_14 = (byte **)0x0;
  pbStack_16 = (byte *)0x7d6a;
  FUN_0000_79a6();
  ppbStack_14 = (byte **)param_1;
                    // WARNING: Subroutine does not return
  pbStack_16 = (byte *)0x7d70;
  thunk_FUN_0000_8fec();
LAB_0000_ebe5:
  uStack_4 = pbVar37;
  if (((uStack_4[2] & 0x80) != 0) && (uStack_4[3] == uVar27)) {
    pbVar6 = uStack_4 + 2;
    *pbVar6 = *pbVar6 | 0x20;
    iVar19 = (uint)uStack_4[4] * 8;
    *(int *)(iVar19 + 0x5c5b) = 0x1e;
    *(int *)(iVar19 + 0x5c5a) = 0x1e;
    goto LAB_0000_ec10;
  }
  pbStack_6 = pbStack_6 + 1;
  pbVar37 = uStack_4 + 8;
  if ((byte *)0xbb13 < uStack_4 + 8) {
LAB_0000_ec10:
    if (uVar27 == *(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
    FUN_0000_7330();
LAB_0000_ec36:
    uStack_e = (byte *)param_3;
    ppbStack_14 = &pbStack_a;
    pbStack_16 = (byte *)0xec4e;
    FUN_0000_e9e0();
    uStack_e = (byte *)param_3;
    ppbStack_14 = &pbStack_a;
    pbStack_16 = (byte *)0xec5f;
    pbVar37 = (byte *)FUN_0000_ea58();
    if (pbStack_a == (byte *)0x0) {
      uStack_e = (byte *)0xec6c;
      pbVar37 = (byte *)FUN_0000_3270();
    }
    return pbVar37;
  }
  goto LAB_0000_ebe5;
LAB_0000_84c4:
  bVar44 = CARRY2(uVar27,uVar27);
  pbVar18 = (byte *)(uVar27 * 2);
  bVar45 = pbVar18 == (byte *)0x0;
  bVar12 = (byte)pbVar28;
  switch(uVar27) {
  case 0:
    goto LAB_0000_f247;
  case 1:
    pbStack_a = pbVar23;
    goto LAB_0000_d88d;
  case 2:
    *(byte *)0xfe58 = bVar12;
    if ((*(byte *)0x58a2 & 0x20) != 0) {
      FUN_0000_fc94();
      FUN_0000_3270();
      ppbStack_14 = (byte **)0x1;
      pbStack_16 = (byte *)0x28;
      pbStack_18 = (int *)0xff55;
      FUN_0000_5dce();
    }
    if ((*(byte *)0x58a2 & 0x22) != 0) {
      pbVar37 = (byte *)FUN_0000_004c();
      return pbVar37;
    }
    if ((uStack_4 == (byte *)0x0) || (((uint)uStack_4 & 0x20) != 0)) {
      FUN_0000_fc94();
      FUN_0000_3270();
      pbVar6 = (byte *)0x58a2;
      *pbVar6 = *pbVar6 | 1;
      pbVar37 = (byte *)FUN_0000_0026();
      return pbVar37;
    }
    if ((*(byte *)0x58a2 & 4) != 0) {
      FUN_0000_fc94();
      pbVar37 = (byte *)FUN_0000_0022();
      return pbVar37;
    }
    if ((*(byte *)0x58a2 & 8) != 0) {
      pbVar37 = (byte *)FUN_0000_0026();
      return pbVar37;
    }
    FUN_0000_fc94();
    if (((uint)uStack_4 & 0x80) == 0) {
      pbVar37 = (byte *)func_0x0001977e();
      pbStack_6 = pbVar37;
      if ((((pbVar37 != (byte *)0x1) && (pbVar37 != (byte *)0x2)) && (pbVar37 != (byte *)0x3)) &&
         (pbVar37 != (byte *)0x4)) goto LAB_1000_0026;
    }
    else if ((param_1 != (byte *)0xff) && (*(char *)((int)param_1 * 8 + -0x45e9) == '-')) {
      FUN_0000_3270();
      ppbStack_14 = (byte **)0x7d0;
      pbStack_16 = (byte *)0x1;
      pbStack_18 = (int *)0x28;
      puStack_1a = (int *)0xffd9;
      FUN_0000_5dce();
      pbVar6 = (byte *)(param_2 * 8 + -0x45ea);
      *pbVar6 = *pbVar6 | 4;
      *(int *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c5b) = 0;
      ppbStack_14 = (byte **)0xfff9;
      pbVar37 = (byte *)FUN_0000_5506();
      goto LAB_1000_0026;
    }
    pbVar37 = (byte *)FUN_1000_3270();
LAB_1000_0026:
    if (((uint)uStack_4 & 0x80) != 0) {
      func_0x00014320();
      pbVar37 = (byte *)FUN_1000_7330();
    }
    pbVar6 = (byte *)0x58a2;
    *pbVar6 = *pbVar6 & 0xf3;
    return pbVar37;
  case 3:
    bVar12 = func_0x000d4857();
    pbVar47 = (byte *)(uint)(byte)(bVar12 + in_stack_00000038._1_1_);
    bVar44 = (byte)(bVar12 + in_stack_00000038._1_1_) == 0;
    if (CARRY1(bVar12,in_stack_00000038._1_1_) || bVar44) goto code_r0x00008790;
    while (!bVar44) {
      uStack_4 = param_1;
      if (((int)pbVar37 < iStack_2e) && (iVar19 = FUN_0000_54ce(), iVar19 == 0)) {
        uStack_4 = (byte *)(uint)param_1[0x16d4];
      }
      iVar19 = *piStack_36;
      bStack_2c = *(byte *)(iVar19 + 0x1704);
      bStack_30 = *(byte *)(iVar19 + 0x1714);
      ppbStack_14 = (byte **)(uint)bStack_2c;
      pbStack_16 = (byte *)(uint)bStack_30;
      pbStack_18 = (byte *)(uint)*(byte *)0x5895;
      puStack_1a = (int *)0x878c;
      pbVar47 = (byte *)FUN_0000_7f26();
      piStack_36 = piStack_36 + 1;
code_r0x00008790:
      pbVar37 = pbVar37 + 1;
      bVar44 = pbVar37 == pbStack_6;
    }
    return pbVar47;
  case 5:
    pbVar37 = (byte *)FUN_0000_a380();
    return pbVar37;
  case 6:
    pcVar11 = (code *)swi(0xeb);
    (*pcVar11)();
    iVar19 = FUN_0000_63a8();
    if (iVar19 == -1) {
      return (byte *)0x0;
    }
    uStack_e = (byte *)0x0;
    ppbStack_14 = (byte **)0x0;
    pbStack_16 = (byte *)0x0;
    pbStack_18 = pbStack_6;
    puStack_1a = (int *)0xeb84;
    uStack_8._0_1_ = *(byte *)((int)pbStack_6 * 8 + 0x5c5f);
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
    if ((byte)uStack_8 < 0x80) goto LAB_0000_ec36;
    uStack_8._0_1_ = (byte)uStack_8 & 0x7f;
    uVar27 = 0x8b7e;
    uStack_e = (byte *)0xebbf;
    FUN_0000_3270();
    uStack_e = (byte *)0xebc5;
    FUN_0000_49f0();
    if ((*(byte *)0x5893 < 0x80) || (*(char *)(uVar27 * 0x20 + 0x55b3) != 'D')) goto LAB_0000_ec36;
    pbStack_6 = (byte *)0x0;
    pbVar37 = (byte *)0xba14;
    goto LAB_0000_ebe5;
  case 7:
    *(int *)0xfe = unaff_SS;
    *(int **)0xfc = &uStack_e;
    *(byte **)0xfa = pbVar28;
    *(int *)0xf8 = unaff_DS;
    *(int *)0xf6 = unaff_ES;
    uVar41 = 0;
    piVar34 = (int *)0xf4;
    uRam0000006e = unaff_ES;
    *(int *)0xf4 = 0x904b;
    func_0x000090c1();
    iRam000091a0 = -iRam000091a0;
    if (cRam000090e0 != -1) {
      puVar35 = (int *)((int)piVar34 + -2);
      *(int *)((int)piVar34 + -2) = extraout_DX_00;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      piVar34 = puVar35 + 1;
      *puVar35 = 0x906e;
      FUN_0000_90d4();
    }
    iVar19 = 1;
    for (iVar40 = 0; *(int *)(iVar40 + 6) != -1; iVar40 = iVar40 + 0x10) {
      bVar44 = false;
      if ((*(uint *)(iVar40 + 6) & 0x4000) != 0) {
        piVar34[-1] = iVar40;
        piVar34[-2] = iVar19;
        piVar34[-3] = uVar41;
        uVar41 = 0x8d0;
        piVar34[-4] = 0x9092;
        thunk_FUN_0000_8f97();
        iVar19 = piVar34[-2];
        iVar40 = piVar34[-1];
        if (bVar44) {
          piVar34[-1] = 0x9099;
          FUN_0000_90d4();
        }
      }
      iVar19 = iVar19 + 1;
    }
    iVar19 = *piVar34;
    uVar41 = piVar34[1];
    puVar24 = (int *)piVar34[3];
    uVar42 = 0x1a2;
    pcVar11 = (code *)swi(0x21);
    bVar12 = (*pcVar11)();
    if (bVar12 < 2) {
      pcVar11 = (code *)swi(0x20);
      (*pcVar11)();
    }
    uVar27 = *(int *)0x2 + 0xeefa;
    if (0xfff < uVar27) {
      uVar27 = 0x1000;
    }
    puVar29 = puVar24 + -0x42c2;
    puVar31 = puVar24 + -0x42c2;
    if ((int *)0x42c1 < puVar24) {
      *(int *)(puVar24 + -0x42c4) = 0x1106;
      uVar41 = *(int *)(puVar24 + -0x42c4);
      *(int *)(puVar24 + -0x42c4) = 0x1bc9;
      FUN_0000_1fa6();
      *(int *)(puVar24 + -0x42c4) = 0;
      *(int *)(puVar24 + -0x42c6) = 0x1bcf;
      FUN_0000_1f7d();
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      puVar31 = puVar29;
    }
    puVar30 = (int *)((uint)puVar31 & 0xfffe);
    iRam0001626e = uVar27 * 0x10 + -1;
    puRam00016270 = puVar30;
    puRam00016274 = puVar30;
    *(int *)0x2 = uVar27 + 0x1106;
    iVar40 = -(iVar19 - (uVar27 + 0x1106));
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    uRam000162e5 = uVar41;
    *(int *)(puVar30 + -2) = 0x1106;
    uVar41 = *(int *)(puVar30 + -2);
    puVar24 = (int *)0xa524;
    for (iVar19 = 0x181c; iVar19 != 0; iVar19 = iVar19 + -1) {
      puVar1 = puVar24;
      puVar24 = puVar24 + 1;
      *puVar1 = 0;
    }
    *(int *)(puVar30 + -2) = 0x1106;
    uVar43 = *(int *)(puVar30 + -2);
    puVar32 = puVar30 + -2;
    *(int *)(puVar30 + -2) = 0x1c15;
    while( true ) {
      pcVar11 = (code *)swi(0x21);
      uVar16 = (*pcVar11)();
      *(int *)0x5287 = uVar16;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      *(int *)0x5273 = iVar40;
      *(int *)0x5275 = uVar41;
      *(int *)(puVar32 + -2) = uVar42;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      *(int *)(puVar32 + -2) = 0x1106;
      uVar43 = *(int *)(puVar32 + -2);
      if (*(int *)0x6ad0 == 0) break;
      uVar41 = *(int *)0x5285;
      bVar44 = false;
      iVar40 = 0;
      ppcVar9 = (code **)0x6ace;
      pcVar8 = ppcVar9[1];
      pcVar10 = *ppcVar9;
      *(int *)(puVar32 + -2) = uVar42;
      puVar33 = puVar32 + -4;
      *(int *)(puVar32 + -4) = 0x1c8c;
      (*pcVar10)();
      if (!bVar44) {
        ppcVar9 = (code **)0x6ace;
        pcVar8 = ppcVar9[1];
        pcVar10 = *ppcVar9;
        *(int *)(puVar33 + -2) = uVar42;
        puVar32 = puVar33 + -4;
        *(int *)(puVar33 + -4) = 0x1ca2;
        (*pcVar10)();
        *(int *)(puVar32 + -2) = 0x1106;
        uVar43 = *(int *)(puVar32 + -2);
        break;
      }
      *(int *)(puVar33 + -2) = 0x1106;
      uVar43 = *(int *)(puVar33 + -2);
      *(int *)(puVar33 + -2) = 2;
      *(int *)(puVar33 + -4) = 0x1c45;
      FUN_0000_1fa6();
      *(int *)(puVar33 + -4) = 0x1c48;
      FUN_0000_1f7d();
      *(int *)(puVar33 + -2) = 0xff;
      uVar42 = 0;
      pcVar8 = *(code **)0x5212;
      puVar32 = puVar33 + -4;
      *(int *)(puVar33 + -4) = 0x1c50;
      (*pcVar8)();
    }
    iVar19 = *(int *)0x2c;
    if (iVar19 != 0) {
      pcVar38 = (char *)0x0;
      do {
        bVar44 = *pcVar38 == '\0';
        if (bVar44) break;
        iVar40 = 0xc;
        pcVar36 = (char *)0x5266;
        do {
          if (iVar40 == 0) break;
          iVar40 = iVar40 + -1;
          pcVar7 = pcVar38;
          pcVar38 = pcVar38 + 1;
          pcVar5 = pcVar36;
          pcVar36 = pcVar36 + 1;
          bVar44 = *pcVar5 == *pcVar7;
        } while (bVar44);
        if (bVar44) {
          *(int *)(puVar32 + -2) = iVar19;
          *(int *)(puVar32 + -4) = uVar43;
          uVar42 = *(int *)(puVar32 + -4);
          uVar41 = *(int *)(puVar32 + -2);
          pcVar36 = (char *)((int)FUN_0000_5288 + 6);
          iVar19 = (int)*pcVar38;
          do {
            pcVar38 = pcVar38 + 1;
            cVar13 = *pcVar38;
            cVar14 = cVar13 + '\x01';
            if (cVar14 != '\0') {
              cVar14 = cVar13;
            }
            pcVar5 = pcVar36;
            pcVar36 = pcVar36 + 1;
            *pcVar5 = cVar14;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
          *(int *)(puVar32 + -2) = 0x1106;
          uVar43 = *(int *)(puVar32 + -2);
          break;
        }
        iVar40 = 0x7fff;
        bVar44 = true;
        do {
          if (iVar40 == 0) break;
          iVar40 = iVar40 + -1;
          pcVar5 = pcVar38;
          pcVar38 = pcVar38 + 1;
          bVar44 = *pcVar5 == '\0';
        } while (!bVar44);
      } while (bVar44);
    }
    iVar19 = 4;
    do {
      pbVar6 = (byte *)((int)FUN_0000_5288 + 6 + iVar19);
      bVar44 = false;
      *pbVar6 = *pbVar6 & 0xbf;
      pcVar11 = (code *)swi(0x21);
      (*pcVar11)();
      if ((!bVar44) && ((extraout_DX & 0x80) != 0)) {
        pbVar6 = (byte *)((int)FUN_0000_5288 + 6 + iVar19);
        *pbVar6 = *pbVar6 | 0x40;
      }
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
    *(int *)(puVar32 + -2) = 0x1d0a;
    FUN_0000_1dac();
    *(int *)(puVar32 + -2) = 0x1d13;
    pbVar37 = (byte *)FUN_0000_1d9d();
    return pbVar37;
  case 8:
    pbVar37 = (byte *)FUN_0000_3e5f();
    return pbVar37;
  case 9:
  case 0xc:
    *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
    uStack_e = (byte *)0x588d;
    thunk_FUN_0000_8fec();
  case 10:
    goto code_r0x00007513;
  case 0xb:
    if (bVar45) {
      iVar19 = FUN_0000_b650();
      uStack_4 = uStack_4 + iVar19;
      FUN_0000_9c6a();
      if (uStack_4 == (byte *)0x0) {
        FUN_0000_3270();
      }
    }
    else {
      if (pbVar28 != (byte *)0x2) {
        return pbVar28;
      }
      iVar19 = FUN_0000_b650();
      uStack_4 = uStack_4 + iVar19;
      FUN_0000_9c6a();
      iVar19 = FUN_0000_b650();
      uStack_4 = uStack_4 + iVar19;
      FUN_0000_9c6a();
      if (uStack_4 == (byte *)0x0) {
        FUN_0000_3270();
      }
    }
    pbVar37 = (byte *)FUN_0000_699c();
    return pbVar37;
  case 0xd:
    FUN_0000_3270();
    iVar19 = -0x75c8;
    FUN_0000_3270();
    if (iVar19 == 0x4e) {
      FUN_0000_3270();
      if (*(byte *)0x5895 < 0x80) {
        ppbStack_14 = (byte **)0xe4f0;
        uStack_4 = (byte *)FUN_0000_5e22();
        *uStack_4 = 0xb9;
      }
      else {
        ppbStack_14 = (byte **)0xe501;
        uStack_4 = (byte *)FUN_0000_5e22();
        *uStack_4 = 0xb8;
      }
      pbVar6 = (byte *)0x24e6;
      *pbVar6 = *pbVar6 | 2;
    }
    else {
      if (iVar19 != 0xdc) {
        ppbStack_14 = (byte **)(uint)*(byte *)0x5895;
        pbStack_16 = (byte *)0xe524;
        uStack_4 = (byte *)FUN_0000_dd48();
        if (uStack_4 != (byte *)0x0) {
          return uStack_4;
        }
      }
      ppbStack_14 = (byte **)0xe534;
      uStack_4 = (byte *)FUN_0000_ddfa();
      if (uStack_4 == (byte *)0x0) {
        ppbStack_14 = (byte **)0xe544;
        uStack_4 = (byte *)FUN_0000_deb4();
      }
    }
    return uStack_4;
  case 0xe:
    *(byte **)0x544a = pbVar28;
    *(int *)0x5448 = 0;
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    *(byte **)0x544e = pbVar18;
    *(int *)0x544c = unaff_ES;
    uStack_e = (byte *)0x0;
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    do {
    } while (*(uint *)0x5448 < *(uint *)0x544a);
    pcVar11 = (code *)swi(0x21);
    pbVar37 = (byte *)(*pcVar11)();
    return pbVar37;
  case 0xf:
    pbVar37 = (byte *)in(0x5d);
    return pbVar37;
  case 0x10:
    pbVar6 = pbVar18 + (int)pbVar37;
    *pbVar6 = *pbVar6 + bVar12;
    *(int *)0x535a = 0;
    pcVar11 = (code *)swi(0x21);
    (*pcVar11)();
    pcVar11 = (code *)swi(0x21);
    uStack_e = pbVar18;
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
    pbVar37 = uStack_4;
    *(int *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
    pcVar11 = (code *)swi(0x12);
    pbVar47 = (byte *)(*pcVar11)();
    *(byte **)0x5358 = pbVar47;
    return pbVar47;
  case 0x11:
    func_0x00003ff8();
    ppbStack_14 = (byte **)0x1060;
    pbStack_16 = (byte *)0xb9eb;
    func_0x00003ff8();
    ppbStack_14 = (byte **)0x0;
    pbStack_16 = (byte *)0xb9f1;
    FUN_0000_3f3e();
    *(int *)0x5893 = (int)uStack_e;
    *(int *)0xa9be = 0;
    return (byte *)((uint)uStack_e & 0xff);
  case 0x12:
    pbVar6 = pbVar18 + (int)pbVar37;
    *pbVar6 = *pbVar6 | bVar12;
    pbVar6 = pbVar18 + (int)pbVar37;
    *pbVar6 = *pbVar6 | bVar12;
    pbVar6 = pbVar18 + (int)pbVar37;
    *pbVar6 = *pbVar6 + bVar12;
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  case 0x13:
LAB_0000_f247:
    do {
      ppbStack_14 = (byte **)0x20;
      pbStack_16 = (byte *)0xf24e;
      pbVar17 = (byte *)FUN_0000_edf8();
      pbVar47 = pbVar37;
      do {
        pbVar37 = pbVar47 + 1;
        if (6 < (int)pbVar37) {
          return pbVar17;
        }
        ppbStack_14 = (byte **)0xf1df;
        pbVar17 = (byte *)RANDOM();
        pbVar20 = pbVar47 + 0x41bd;
        pbVar47 = pbVar37;
      } while (pbVar17 < (byte *)(uint)*pbVar20);
      if (pbVar37 == (byte *)0x5) {
        ppbStack_14 = (byte **)0xf1f8;
        RANDOM();
      }
      else if (pbVar37 == (byte *)0x6) {
        ppbStack_14 = (byte **)0xf211;
        RANDOM();
      }
      else {
        ppbStack_14 = (byte **)0xf23a;
        uStack_4 = (byte *)RANDOM();
      }
    } while( true );
  }
  uVar15 = SUB21(uStack_e,0);
  *(int *)0x5859 = uVar15;
  *(int *)0x5858 = uVar15;
  *(int *)0x57b2 = uVar15;
  *(int *)0x587e = 1;
  *(int *)((int)FUN_0000_5956 + 3) = uVar15;
  pbStack_6 = (byte *)0x10;
  pbVar37 = (byte *)((int)FUN_0000_55be + 1);
  do {
    if (*pbVar37 < 0x19) {
      pbVar6 = pbVar37;
      *pbVar6 = *pbVar6 + 1;
    }
    pbVar37 = pbVar37 + 0x20;
  } while (pbVar37 < (byte *)0x57bf);
  pcVar5 = (char *)0x587d;
  *pcVar5 = *pcVar5 + '\x01';
  if (0xd < *(byte *)0x587d) {
    *(int *)0x587d = 1;
    piVar2 = (int *)0x5874;
    *piVar2 = *piVar2 + 1;
  }
  uStack_e = (byte *)0x6ac1;
  FUN_0000_4320();
  if (0x32 < *(byte *)0x58a5) goto LAB_0000_6b6a;
  pbStack_a = (byte *)(uint)*(byte *)0x58a5;
  if ((((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) || (*(byte *)0x587f < 5)) ||
     (0x13 < *(byte *)0x587f)) {
    *(int *)0x58a5 = 2;
  }
  else {
    if (*(char *)0x587f == '\x05') {
      uVar27 = (uint)*(byte *)0x5881;
    }
    else {
      if (*(char *)0x587f != '\x13') {
        *(int *)0x58a5 = 0x32;
        goto LAB_0000_6b35;
      }
      uVar27 = -(*(byte *)0x5881 - 0x3b);
    }
    *(int *)0x58a5 = *(int *)(uVar27 / 10 + 0x6a80);
  }
LAB_0000_6b35:
  if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
    *(int *)0x58a5 = 0x12;
  }
  if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
    *(int *)0x58a5 = 10;
  }
  if (pbStack_a != (byte *)(uint)*(byte *)0x58a5) {
    *(int *)0x24e6 = 1;
  }
LAB_0000_6b6a:
  bVar12 = *(byte *)0x5880;
  pbVar37 = (byte *)(uint)bVar12;
  if (*(byte *)0x587f != bVar12) {
    if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
      uStack_e = (byte *)0x6b84;
      pbVar37 = (byte *)FUN_0000_64a4();
    }
    if (*(char *)0x587f == '\0') {
      *(int *)0x5884 = 0xc;
    }
    else {
      if (*(byte *)0x587f < 0xd) {
        bVar12 = *(byte *)0x587f;
      }
      else {
        bVar12 = *(char *)0x587f - 0xc;
      }
      pbVar37 = (byte *)(uint)bVar12;
      *(byte *)0x5884 = bVar12;
    }
  }
  if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
    uStack_e = (byte *)0x6bb7;
    pbVar37 = (byte *)FUN_0000_8bca();
  }
  return pbVar37;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (ram,0x0000878c) overlaps instruction at (ram,0x0000878a)
//
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Possible PIC construction at 0x00001c12: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00001c15)
// WARNING: Unable to track spacebase fully for stack
// WARNING: This function may have set the stack pointer

int * switchD_0000:c779::caseD_42(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  int *puVar4;
  char *pcVar5;
  char cVar6;
  byte bVar7;
  code *pcVar8;
  code **ppcVar9;
  code *pcVar10;
  code *pcVar11;
  byte bVar12;
  char cVar13;
  int uVar14;
  int uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  int in_CX;
  uint extraout_DX;
  int extraout_DX_00;
  int *puVar19;
  int *puVar20;
  int *puVar21;
  int *puVar22;
  int *puVar23;
  int *piVar24;
  int *puVar25;
  byte *pbVar26;
  char *pcVar27;
  int unaff_SI;
  int *puVar28;
  int iVar29;
  int unaff_ES;
  int uVar30;
  int uVar31;
  int unaff_SS;
  int uVar32;
  int unaff_DS;
  bool bVar33;
  bool bVar34;
  int in_stack_00000038;
  int *puStack_218;
  int iStack_214;
  int iStack_212;
  int iStack_210;
  int *puStack_20e;
  int iStack_20c;
  int iStack_20a;
  int iStack_208;
  int aiStack_206 [232];
  int *piStack_36;
  int uStack_30;
  int *puStack_2e;
  uint uStack_2c;
  int **ppuStack_2a;
  int *puStack_28;
  int *puStack_1e;
  int *puStack_1c;
  int *puStack_1a;
  int *puStack_18;
  int *puStack_16;
  int *puStack_14;
  int *puStack_12;
  int uStack_10;
  int *puStack_a;
  int uStack_8;
  int *puStack_6;
  int *puStack_4;

  uStack_10 = uStack_10 & 0xff00;
  puStack_12 = (int *)0xba14;
  puStack_14 = (int *)0x5c5a;
  puStack_16 = (int *)0x5c5b;
  puStack_18 = (int *)0x5c5c;
  puStack_1a = (int *)0x5c60;
  puStack_1c = (int *)0x5c5d;
  puStack_1e = (int *)0x5c5e;
  puVar28 = (int *)0x5c5f;
  puVar19 = puStack_12;
  do {
    puStack_12 = puVar19;
    *puStack_1a = 0;
    *puStack_18 = 0;
    *puStack_16 = 0;
    *puStack_14 = 0;
    *puVar28 = 0;
    *puStack_1e = 0;
    *puStack_1c = 0;
    puStack_12[3] = 0;
    puStack_12[2] = 0;
    puStack_12[1] = 0;
    *puStack_12 = 0;
    puStack_12[7] = 0;
    puStack_12[6] = 0;
    puStack_12[5] = 0;
    puStack_12[4] = 0;
    puStack_14 = puStack_14 + 8;
    puStack_16 = puStack_16 + 8;
    puStack_18 = puStack_18 + 8;
    puStack_1a = puStack_1a + 8;
    puStack_1c = puStack_1c + 8;
    puStack_1e = puStack_1e + 8;
    puVar28 = puVar28 + 8;
    puVar19 = puStack_12 + 8;
  } while (puVar28 < (int *)((int)FUN_0000_5d5e + 1));
  puStack_4 = puStack_12;
  puStack_6 = (int *)0x0;
LAB_0000_8591:
  puVar19 = (int *)(uint)*(byte *)0x585b;
  if (puVar19 <= puStack_6) {
    if (*(char *)0xadb9 == -0x24) {
      puStack_28 = (int *)0x2;
      ppuStack_2a = (int **)0x5;
      uStack_2c = 5;
      puStack_2e = (int *)(uint)*(byte *)0x5895;
      uStack_30 = 0x85bb;
      uVar17 = FUN_0000_7f26();
      *(char *)((uVar17 & 0xff) * 8 + 0x5c5f) = *(char *)0x5895 * '\x03' + '\a';
      bVar12 = *(byte *)0xbb15;
      puVar19 = (int *)(uint)bVar12;
      *(byte *)0xadb9 = bVar12;
    }
    return puVar19;
  }
  uVar14 = (int)((uint)in_CX >> 8);
  in_CX = CONCAT11(uVar14,5);
  if (*(char *)((int)puStack_6 * 0x20 + 0x55b3) != 'D') {
    if (*(char *)((int)puStack_6 * 0x20 + 0x55c5) == '*') {
      uStack_10 = CONCAT11(uStack_10._1_1_,0x2a);
    }
    if (*(char *)((int)puStack_6 * 0x20 + 0x55c5) == ',') {
      uStack_10 = CONCAT11(uStack_10._1_1_,0x2c);
    }
    if ((char)uStack_10 != '\0') {
      puStack_28 = (int *)0xf;
      ppuStack_2a = (int **)0x843d;
      puStack_a = (int *)RANDOM();
      if (puStack_a == (int *)0xb) {
        puStack_28 = (int *)0x844c;
        FUN_0000_3270();
        puStack_28 = (int *)0x7d0;
        ppuStack_2a = (int **)0x1;
        uStack_2c = 0x28;
        puStack_2e = (int *)0x845f;
        FUN_0000_5dce();
        puStack_28 = (int *)(uStack_10 & 0xff);
        ppuStack_2a = (int **)0x846b;
        FUN_0000_8880();
      }
      uStack_10 = uStack_10 & 0xff00;
    }
    bVar12 = puStack_6[0x1724];
    uStack_8 = CONCAT11(uStack_8._1_1_,bVar12);
    bVar7 = puStack_6[0x172c];
    puStack_28 = (int *)0x1;
    ppuStack_2a = (int **)(uint)bVar12;
    uStack_2c = (uint)bVar7;
    puStack_2e = (int *)(uint)*(byte *)0x5895;
    uStack_30 = 0x8496;
    puStack_a = (int *)FUN_0000_7f26();
    *(int *)((uint)*(byte *)((int)puStack_a * 8 + -0x45e8) * 8 + 0x5c61) = 0xff;
    uVar31 = uRam000091a4;
    puVar28 = (int *)CONCAT11(uVar14,5);
    puVar19 = (int *)((int)puStack_6 * 0x20);
    uVar17 = (byte)puVar19[0x55b2] - 0x41;
    if (uVar17 < 0x14) {
      bVar33 = CARRY2(uVar17,uVar17);
      iVar18 = uVar17 * 2;
      bVar34 = iVar18 == 0;
      bVar12 = (byte)puVar19;
      switch(uVar17) {
      case 0:
        puStack_28 = puVar19;
        goto LAB_0000_f247;
      case 1:
        puStack_a = puVar28;
        if (puVar28 == (int *)0x32) {
          if (*(byte *)((uint)(byte)puStack_6[4] * 8 + 0x5c5a) < 0x80) {
            puStack_28 = (int *)0xffff;
            ppuStack_2a = (int **)0xd907;
            FUN_0000_d56a();
            puStack_28 = (int *)0xd90d;
            puVar28 = (int *)FUN_0000_4f84();
          }
        }
        else {
          if (puVar28 == (int *)0x64) {
            puStack_28 = (int *)0xd8ca;
            FUN_0000_4f84();
            puStack_28 = (int *)0xa;
            ppuStack_2a = (int **)0xd8d4;
            puStack_28 = (int *)FUN_0000_54ce();
            ppuStack_2a = (int **)0xd8d8;
            FUN_0000_d224();
            puStack_28 = (int *)0xff;
                    // WARNING: Subroutine does not return
            ppuStack_2a = (int **)0xd8e2;
            thunk_FUN_0000_8fec();
          }
          if (puVar28 == (int *)0x96) {
            puStack_28 = (int *)0xd8c2;
            puVar28 = (int *)FUN_0000_82ce();
          }
        }
        return puVar28;
      case 2:
        *(byte *)0xfe58 = bVar12;
        if ((*(byte *)0x58a2 & 0x20) != 0) {
          puStack_28 = (int *)0xff3b;
          FUN_0000_fc94();
          puStack_28 = (int *)0xff42;
          FUN_0000_3270();
          puStack_28 = (int *)0x7d0;
          ppuStack_2a = (int **)0x1;
          uStack_2c = 0x28;
          puStack_2e = (int *)0xff55;
          FUN_0000_5dce();
        }
        if ((*(byte *)0x58a2 & 0x22) != 0) {
          puVar19 = (int *)FUN_0000_004c();
          return puVar19;
        }
        if ((puStack_4 == (int *)0x0) || (((uint)puStack_4 & 0x20) != 0)) {
          puStack_28 = (int *)0xff71;
          FUN_0000_fc94();
          puStack_28 = (int *)0xff78;
          FUN_0000_3270();
          pbVar1 = (byte *)0x58a2;
          *pbVar1 = *pbVar1 | 1;
          puVar19 = (int *)FUN_0000_0026();
          return puVar19;
        }
        if ((*(byte *)0x58a2 & 4) != 0) {
          puStack_28 = (int *)0xff8d;
          FUN_0000_fc94();
          puVar19 = (int *)FUN_0000_0022();
          return puVar19;
        }
        if ((*(byte *)0x58a2 & 8) != 0) {
          puVar19 = (int *)FUN_0000_0026();
          return puVar19;
        }
        puStack_28 = (int *)0xffa4;
        FUN_0000_fc94();
        if (((uint)puStack_4 & 0x80) == 0) {
          puStack_28 = (int *)0x8;
          puVar19 = (int *)func_0x0001977e();
          puStack_6 = puVar19;
          if ((((puVar19 != (int *)0x1) && (puVar19 != (int *)0x2)) &&
              (puVar19 != (int *)0x3)) && (puVar19 != (int *)0x4)) goto LAB_1000_0026;
        }
        else if ((param_1 != 0xff) && (*(char *)(param_1 * 8 + -0x45e9) == '-')) {
          puStack_28 = (int *)0xffc6;
          FUN_0000_3270();
          puStack_28 = (int *)0x7d0;
          ppuStack_2a = (int **)0x1;
          uStack_2c = 0x28;
          puStack_2e = (int *)0xffd9;
          FUN_0000_5dce();
          pbVar1 = (byte *)(param_2 * 8 + -0x45ea);
          *pbVar1 = *pbVar1 | 4;
          *(int *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c5b) = 0;
          puStack_28 = (int *)0xfff9;
          puVar19 = (int *)FUN_0000_5506();
          goto LAB_1000_0026;
        }
        puStack_28 = (int *)0x26;
        puVar19 = (int *)FUN_1000_3270();
LAB_1000_0026:
        if (((uint)puStack_4 & 0x80) != 0) {
          func_0x00014320();
          puVar19 = (int *)FUN_1000_7330();
        }
        pbVar1 = (byte *)0x58a2;
        *pbVar1 = *pbVar1 & 0xf3;
        return puVar19;
      case 3:
        puStack_28 = (int *)0x878f;
        bVar12 = func_0x000d4857();
        puVar19 = (int *)(uint)(byte)(bVar12 + in_stack_00000038._1_1_);
        bVar33 = (byte)(bVar12 + in_stack_00000038._1_1_) == 0;
        if (CARRY1(bVar12,in_stack_00000038._1_1_) || bVar33) goto code_r0x00008790;
        while (!bVar33) {
          puStack_4 = (int *)param_1;
          if ((int)puStack_12 < (int)puStack_2e) {
            puStack_28 = (int *)0x8752;
            iVar18 = FUN_0000_54ce();
            if (iVar18 == 0) {
              puStack_4 = (int *)(uint)*(byte *)(param_1 + 0x16d4);
            }
          }
          iVar18 = *piStack_36;
          puStack_28 = (int *)0x0;
          ppuStack_2a = (int **)(uint)*(byte *)(iVar18 + 0x1704);
          uStack_2c = (uint)*(byte *)(iVar18 + 0x1714);
          puStack_2e = (int *)(uint)*(byte *)0x5895;
          uStack_30 = 0x878c;
          puVar19 = (int *)FUN_0000_7f26();
          piStack_36 = piStack_36 + 1;
code_r0x00008790:
          puStack_12 = puStack_12 + 1;
          bVar33 = puStack_12 == puStack_6;
        }
        return puVar19;
      case 4:
        uVar14 = (int)unaff_SI;
        *(int *)0x5859 = uVar14;
        *(int *)0x5858 = uVar14;
        *(int *)0x57b2 = uVar14;
        *(int *)0x587e = 1;
        *(int *)((int)FUN_0000_5956 + 3) = uVar14;
        puStack_6 = (int *)0x10;
        pbVar26 = (byte *)((int)FUN_0000_55be + 1);
        do {
          if (*pbVar26 < 0x19) {
            pbVar1 = pbVar26;
            *pbVar1 = *pbVar1 + 1;
          }
          pbVar26 = pbVar26 + 0x20;
        } while (pbVar26 < (byte *)0x57bf);
        pcVar2 = (char *)0x587d;
        *pcVar2 = *pcVar2 + '\x01';
        if (0xd < *(byte *)0x587d) {
          *(int *)0x587d = 1;
          piVar3 = (int *)0x5874;
          *piVar3 = *piVar3 + 1;
        }
        FUN_0000_4320();
        if (0x32 < *(byte *)0x58a5) goto LAB_0000_6b6a;
        puStack_a = (int *)(uint)*(byte *)0x58a5;
        if ((((*(char *)0x5893 == '\x19') || (0x7f < *(byte *)0x5895)) || (*(byte *)0x587f < 5)) ||
           (0x13 < *(byte *)0x587f)) {
          *(int *)0x58a5 = 2;
        }
        else {
          if (*(char *)0x587f == '\x05') {
            uVar17 = (uint)*(byte *)0x5881;
          }
          else {
            if (*(char *)0x587f != '\x13') {
              *(int *)0x58a5 = 0x32;
              goto LAB_0000_6b35;
            }
            uVar17 = -(*(byte *)0x5881 - 0x3b);
          }
          *(int *)0x58a5 = *(int *)(uVar17 / 10 + 0x6a80);
        }
LAB_0000_6b35:
        if ((*(char *)0x58a6 != '\0') && (*(byte *)0x58a5 < 0x12)) {
          *(int *)0x58a5 = 0x12;
        }
        if ((*(char *)0x58a7 != '\0') && (*(byte *)0x58a5 < 10)) {
          *(int *)0x58a5 = 10;
        }
        if (puStack_a != (int *)(uint)*(byte *)0x58a5) {
          *(int *)0x24e6 = 1;
        }
LAB_0000_6b6a:
        bVar12 = *(byte *)0x5880;
        puVar19 = (int *)(uint)bVar12;
        if (*(byte *)0x587f != bVar12) {
          if ((*(byte *)0x5893 < 0x21) && (*(byte *)0x5895 < 0x80)) {
            puVar19 = (int *)FUN_0000_64a4();
          }
          if (*(char *)0x587f == '\0') {
            *(int *)0x5884 = 0xc;
          }
          else {
            if (*(byte *)0x587f < 0xd) {
              bVar12 = *(byte *)0x587f;
            }
            else {
              bVar12 = *(char *)0x587f - 0xc;
            }
            puVar19 = (int *)(uint)bVar12;
            *(byte *)0x5884 = bVar12;
          }
        }
        if ((*(char *)0x5893 != '\0') && (*(byte *)0x5893 < 0x21)) {
          puVar19 = (int *)FUN_0000_8bca();
        }
        return puVar19;
      case 5:
        puStack_28 = (int *)0xa59f;
        puVar19 = (int *)FUN_0000_a380();
        return puVar19;
      case 6:
        pcVar11 = (code *)swi(0xeb);
        (*pcVar11)();
        uVar17 = FUN_0000_63a8();
        if (uVar17 == 0xffff) {
          return (int *)0x0;
        }
        puStack_28 = (int *)0x0;
        ppuStack_2a = (int **)0x0;
        uStack_2c = 0;
        puStack_2e = puStack_6;
        uStack_30 = 0xeb84;
        uStack_8._0_1_ = *(byte *)((int)puStack_6 * 8 + 0x5c5f);
        FUN_0000_5494();
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
        if ((byte)uStack_8 < 0x80) goto LAB_0000_ec36;
        uStack_8._0_1_ = (byte)uStack_8 & 0x7f;
        FUN_0000_3270();
        FUN_0000_49f0();
        if ((*(byte *)0x5893 < 0x80) || (*(char *)(uVar17 * 0x20 + 0x55b3) != 'D'))
        goto LAB_0000_ec36;
        puStack_6 = (int *)0x0;
        puVar19 = (int *)0xba14;
        goto LAB_0000_ebe5;
      case 7:
        *(int *)0xfe = unaff_SS;
        *(int **)0xfc = &stack0xffdc;
        *(int *)0xfa = puVar19;
        *(int *)0xf8 = unaff_DS;
        *(int *)0xf6 = unaff_ES;
        uVar30 = 0;
        piVar24 = (int *)0xf4;
        uRam0000006e = unaff_ES;
        *(int *)0xf4 = 0x904b;
        func_0x000090c1();
        iRam000091a0 = -iRam000091a0;
        if (cRam000090e0 != -1) {
          puVar25 = (int *)((int)piVar24 + -2);
          *(int *)((int)piVar24 + -2) = extraout_DX_00;
          pcVar11 = (code *)swi(0x21);
          (*pcVar11)();
          piVar24 = puVar25 + 1;
          *puVar25 = 0x906e;
          FUN_0000_90d4();
        }
        iVar18 = 1;
        for (iVar29 = 0; *(int *)(iVar29 + 6) != -1; iVar29 = iVar29 + 0x10) {
          bVar33 = false;
          if ((*(uint *)(iVar29 + 6) & 0x4000) != 0) {
            piVar24[-1] = iVar29;
            piVar24[-2] = iVar18;
            piVar24[-3] = uVar30;
            uVar30 = 0x8d0;
            piVar24[-4] = 0x9092;
            thunk_FUN_0000_8f97();
            iVar18 = piVar24[-2];
            iVar29 = piVar24[-1];
            if (bVar33) {
              piVar24[-1] = 0x9099;
              FUN_0000_90d4();
            }
          }
          iVar18 = iVar18 + 1;
        }
        iVar18 = *piVar24;
        uVar30 = piVar24[1];
        puVar19 = (int *)piVar24[3];
        uVar31 = 0x1a2;
        pcVar11 = (code *)swi(0x21);
        bVar12 = (*pcVar11)();
        if (bVar12 < 2) {
          pcVar11 = (code *)swi(0x20);
          (*pcVar11)();
        }
        uVar17 = *(int *)0x2 + 0xeefa;
        if (0xfff < uVar17) {
          uVar17 = 0x1000;
        }
        puVar20 = puVar19 + -0x42c2;
        puVar28 = puVar19 + -0x42c2;
        if ((int *)0x42c1 < puVar19) {
          *(int *)(puVar19 + -0x42c4) = 0x1106;
          uVar30 = *(int *)(puVar19 + -0x42c4);
          *(int *)(puVar19 + -0x42c4) = 0x1bc9;
          FUN_0000_1fa6();
          *(int *)(puVar19 + -0x42c4) = 0;
          *(int *)(puVar19 + -0x42c6) = 0x1bcf;
          FUN_0000_1f7d();
          pcVar11 = (code *)swi(0x21);
          (*pcVar11)();
          puVar28 = puVar20;
        }
        puVar21 = (int *)((uint)puVar28 & 0xfffe);
        iRam0001626e = uVar17 * 0x10 + -1;
        puRam00016270 = puVar21;
        puRam00016274 = puVar21;
        *(int *)0x2 = uVar17 + 0x1106;
        iVar29 = -(iVar18 - (uVar17 + 0x1106));
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        uRam000162e5 = uVar30;
        *(int *)(puVar21 + -2) = 0x1106;
        uVar30 = *(int *)(puVar21 + -2);
        puVar19 = (int *)0xa524;
        for (iVar18 = 0x181c; iVar18 != 0; iVar18 = iVar18 + -1) {
          puVar4 = puVar19;
          puVar19 = puVar19 + 1;
          *puVar4 = 0;
        }
        *(int *)(puVar21 + -2) = 0x1106;
        uVar32 = *(int *)(puVar21 + -2);
        puVar22 = puVar21 + -2;
        *(int *)(puVar21 + -2) = 0x1c15;
        break;
      case 8:
        puVar19 = (int *)FUN_0000_3e5f();
        return puVar19;
      case 9:
      case 0xc:
        *(int *)0x58a1 = 6;
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      case 10:
        goto code_r0x00007513;
      case 0xb:
        if (bVar34) {
          iVar18 = FUN_0000_b650();
          puStack_4 = puStack_4 + iVar18;
          FUN_0000_9c6a();
          if (puStack_4 == (int *)0x0) {
            puStack_28 = (int *)0xa04e;
            FUN_0000_3270();
          }
        }
        else {
          if (puVar19 != (int *)0x2) {
            return puVar19;
          }
          iVar18 = FUN_0000_b650();
          puStack_4 = puStack_4 + iVar18;
          FUN_0000_9c6a();
          iVar18 = FUN_0000_b650();
          puStack_4 = puStack_4 + iVar18;
          FUN_0000_9c6a();
          if (puStack_4 == (int *)0x0) {
            puStack_28 = (int *)0xa077;
            FUN_0000_3270();
          }
        }
        puStack_28 = (int *)0xa055;
        puVar19 = (int *)FUN_0000_699c();
        return puVar19;
      case 0xd:
        puStack_28 = (int *)0xe427;
        FUN_0000_3270();
        puStack_28 = (int *)0xe4d3;
        FUN_0000_3270();
        if (uStack_10 == 0x4e) {
          puStack_28 = (int *)0xe4e0;
          FUN_0000_3270();
          if (*(byte *)0x5895 < 0x80) {
            ppuStack_2a = (int **)0xe4f0;
            puStack_4 = (int *)FUN_0000_5e22();
            *puStack_4 = 0xb9;
          }
          else {
            ppuStack_2a = (int **)0xe501;
            puStack_4 = (int *)FUN_0000_5e22();
            *puStack_4 = 0xb8;
          }
          pbVar1 = (byte *)0x24e6;
          *pbVar1 = *pbVar1 | 2;
        }
        else {
          if (uStack_10 != 0xdc) {
            ppuStack_2a = (int **)(uint)*(byte *)0x5895;
            uStack_2c = 0xe524;
            puStack_4 = (int *)FUN_0000_dd48();
            if (puStack_4 != (int *)0x0) {
              return puStack_4;
            }
          }
          ppuStack_2a = (int **)0xe534;
          puStack_4 = (int *)FUN_0000_ddfa();
          if (puStack_4 == (int *)0x0) {
            ppuStack_2a = (int **)0xe544;
            puStack_4 = (int *)FUN_0000_deb4();
          }
        }
        return puStack_4;
      case 0xe:
        *(int *)0x544a = puVar19;
        *(int *)0x5448 = 0;
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        *(int *)0x544e = iVar18;
        *(int *)0x544c = unaff_ES;
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        do {
        } while (*(uint *)0x5448 < *(uint *)0x544a);
        pcVar11 = (code *)swi(0x21);
        puVar19 = (int *)(*pcVar11)();
        return puVar19;
      case 0xf:
        puVar19 = (int *)in(0x5d);
        return puVar19;
      case 0x10:
        pcVar2 = puStack_12 + iVar18;
        *pcVar2 = *pcVar2 + bVar12;
        *(int *)0x535a = 0;
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        do {
        } while (*(int *)0x535a == 0);
        *(int *)0x535a = 0;
        do {
          piVar3 = (int *)0x5356;
          *piVar3 = *piVar3 + 1;
        } while (*(int *)0x535a == 0);
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        *(int *)0x5356 = (int)(((ulong)*(uint *)0x5356 * 0x12) / 0x2ee);
        pcVar11 = (code *)swi(0x12);
        puVar19 = (int *)(*pcVar11)();
        *(int *)0x5358 = puVar19;
        return puVar19;
      case 0x11:
        puStack_28 = (int *)0xb9d9;
        func_0x00003ff8();
        puStack_28 = (int *)0x55a6;
        ppuStack_2a = (int **)0x1060;
        uStack_2c = 0xb9eb;
        func_0x00003ff8();
        ppuStack_2a = (int **)0x0;
        uStack_2c = 0xb9f1;
        FUN_0000_3f3e();
        *(byte *)0x5893 = bVar7;
        *(int *)0xa9be = 0;
        return (int *)(uint)bVar7;
      case 0x12:
        pbVar1 = puStack_12 + iVar18;
        *pbVar1 = *pbVar1 | bVar12;
        pbVar1 = puStack_12 + iVar18;
        *pbVar1 = *pbVar1 | bVar12;
        pcVar2 = puStack_12 + iVar18;
        *pcVar2 = *pcVar2 + bVar12;
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      case 0x13:
        puStack_28 = puVar19 + -1;
LAB_0000_f247:
        do {
          ppuStack_2a = (int **)0x20;
          uStack_2c = 0xf24e;
          puVar19 = (int *)FUN_0000_edf8();
          do {
            puVar28 = puStack_12;
            puStack_12 = puVar28 + 1;
            if (6 < (int)puStack_12) {
              return puVar19;
            }
            puStack_28 = (int *)((uint)*(byte *)0x5895 * 4 + 4);
            ppuStack_2a = (int **)0xf1df;
            puVar19 = (int *)RANDOM();
          } while (puVar19 < (int *)(uint)(byte)puVar28[0x41bd]);
          if (puStack_12 == (int *)0x5) {
            puStack_28 = (int *)0x7;
            ppuStack_2a = (int **)0xf1f8;
            puStack_28 = (int *)RANDOM();
          }
          else if (puStack_12 == (int *)0x6) {
            puStack_28 = (int *)0x7;
            ppuStack_2a = (int **)0xf211;
            puStack_28 = (int *)RANDOM();
          }
          else {
            if (puStack_12 == (int *)0x1) {
              puStack_28 = (int *)((uint)*(byte *)0x5895 << 3);
            }
            else {
              puStack_28 = (int *)(uint)(byte)puVar28[0x41c5];
            }
            ppuStack_2a = (int **)0xf23a;
            puStack_4 = (int *)RANDOM();
            puStack_28 = puStack_4;
          }
        } while( true );
      }
      while( true ) {
        pcVar11 = (code *)swi(0x21);
        uVar15 = (*pcVar11)();
        *(int *)0x5287 = uVar15;
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        *(int *)0x5273 = iVar29;
        *(int *)0x5275 = uVar30;
        *(int *)(puVar22 + -2) = uVar31;
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        *(int *)(puVar22 + -2) = 0x1106;
        uVar32 = *(int *)(puVar22 + -2);
        if (*(int *)0x6ad0 == 0) break;
        uVar30 = *(int *)0x5285;
        bVar33 = false;
        iVar29 = 0;
        ppcVar9 = (code **)0x6ace;
        pcVar8 = ppcVar9[1];
        pcVar10 = *ppcVar9;
        *(int *)(puVar22 + -2) = uVar31;
        puVar23 = puVar22 + -4;
        *(int *)(puVar22 + -4) = 0x1c8c;
        (*pcVar10)();
        if (!bVar33) {
          ppcVar9 = (code **)0x6ace;
          pcVar8 = ppcVar9[1];
          pcVar10 = *ppcVar9;
          *(int *)(puVar23 + -2) = uVar31;
          puVar22 = puVar23 + -4;
          *(int *)(puVar23 + -4) = 0x1ca2;
          (*pcVar10)();
          *(int *)(puVar22 + -2) = 0x1106;
          uVar32 = *(int *)(puVar22 + -2);
          break;
        }
        *(int *)(puVar23 + -2) = 0x1106;
        uVar32 = *(int *)(puVar23 + -2);
        *(int *)(puVar23 + -2) = 2;
        *(int *)(puVar23 + -4) = 0x1c45;
        FUN_0000_1fa6();
        *(int *)(puVar23 + -4) = 0x1c48;
        FUN_0000_1f7d();
        *(int *)(puVar23 + -2) = 0xff;
        uVar31 = 0;
        pcVar8 = *(code **)0x5212;
        puVar22 = puVar23 + -4;
        *(int *)(puVar23 + -4) = 0x1c50;
        (*pcVar8)();
      }
      iVar18 = *(int *)0x2c;
      if (iVar18 != 0) {
        pcVar27 = (char *)0x0;
        do {
          bVar33 = *pcVar27 == '\0';
          if (bVar33) break;
          iVar29 = 0xc;
          pcVar16 = (char *)0x5266;
          do {
            if (iVar29 == 0) break;
            iVar29 = iVar29 + -1;
            pcVar5 = pcVar27;
            pcVar27 = pcVar27 + 1;
            pcVar2 = pcVar16;
            pcVar16 = pcVar16 + 1;
            bVar33 = *pcVar2 == *pcVar5;
          } while (bVar33);
          if (bVar33) {
            *(int *)(puVar22 + -2) = iVar18;
            *(int *)(puVar22 + -4) = uVar32;
            uVar31 = *(int *)(puVar22 + -4);
            uVar30 = *(int *)(puVar22 + -2);
            pcVar16 = (char *)((int)FUN_0000_5288 + 6);
            iVar18 = (int)*pcVar27;
            do {
              pcVar27 = pcVar27 + 1;
              cVar6 = *pcVar27;
              cVar13 = cVar6 + '\x01';
              if (cVar13 != '\0') {
                cVar13 = cVar6;
              }
              pcVar2 = pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar2 = cVar13;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
            *(int *)(puVar22 + -2) = 0x1106;
            uVar32 = *(int *)(puVar22 + -2);
            break;
          }
          iVar29 = 0x7fff;
          bVar33 = true;
          do {
            if (iVar29 == 0) break;
            iVar29 = iVar29 + -1;
            pcVar2 = pcVar27;
            pcVar27 = pcVar27 + 1;
            bVar33 = *pcVar2 == '\0';
          } while (!bVar33);
        } while (bVar33);
      }
      iVar18 = 4;
      do {
        pbVar1 = (byte *)((int)FUN_0000_5288 + 6 + iVar18);
        bVar33 = false;
        *pbVar1 = *pbVar1 & 0xbf;
        pcVar11 = (code *)swi(0x21);
        (*pcVar11)();
        if ((!bVar33) && ((extraout_DX & 0x80) != 0)) {
          pbVar1 = (byte *)((int)FUN_0000_5288 + 6 + iVar18);
          *pbVar1 = *pbVar1 | 0x40;
        }
        iVar18 = iVar18 + -1;
      } while (-1 < iVar18);
      *(int *)(puVar22 + -2) = 0x1d0a;
      FUN_0000_1dac();
      *(int *)(puVar22 + -2) = 0x1d13;
      puVar19 = (int *)FUN_0000_1d9d();
      return puVar19;
    }
    puStack_12 = (int *)((*(uint *)((int)puStack_a * 8 + -0x45e8) & 0xff) * 8);
    *(int *)((uint)*(byte *)((int)puStack_a * 8 + -0x45e8) * 8 + 0x5c5b) = puStack_12[0x5c5a];
    in_CX = CONCAT11(uVar14,5);
    if (*(char *)((int)puStack_6 * 0x20 + 0x55b3) == 'S') {
      puStack_28 = (int *)0x8586;
      FUN_0000_82ce();
    }
    else {
      puStack_28 = (int *)0x858e;
      FUN_0000_81b4();
    }
  }
  puStack_6 = puStack_6 + 1;
  goto LAB_0000_8591;
code_r0x00007513:
  if (bVar33 || bVar34) {
                    // WARNING: Could not recover jumptable at 0x00007518. Too many branches
                    // WARNING: Treating indirect jump as call
    puVar19 = (int *)(**(code **)((int)puVar19 * 2 + 0x5b16))();
    return puVar19;
  }
  if ((((iStack_212 < 0) || (10 < iStack_212)) || (iStack_214 < 0)) || (10 < iStack_214)) {
    iStack_20c = 0;
  }
  pcVar27 = (char *)((param_4 + iStack_214) * 0x20 + param_3 + iStack_212 + param_1);
  if (iStack_210 == 0) {
    if ((*(char *)(iStack_212 + iStack_214 * 0x20 + -0x54fe) == '\0') ||
       (0x1f < param_4 + iStack_214)) {
LAB_0000_75b5:
      iStack_20c = 0;
    }
    else {
      *(int *)(iStack_212 + iStack_214 * 0x20 + -0x54fe) = 0;
    }
  }
  else if (*pcVar27 != -1) goto LAB_0000_75b5;
  if (iStack_20c != 0) {
    puStack_28 = (int *)(param_6 + iStack_214 + (uint)*(byte *)0x589c);
    ppuStack_2a = (int **)0x75e6;
    pcVar16 = (char *)FUN_0000_5e22();
    cVar6 = *pcVar16;
    puStack_28 = (int *)iStack_214;
    ppuStack_2a = (int **)0x75f9;
    iVar18 = FUN_0000_8a10();
    if (iVar18 < param_7) goto LAB_0000_76b3;
    if (iStack_210 != 0) {
      puStack_28 = (int *)iStack_212;
      ppuStack_2a = (int **)iStack_214;
      uStack_2c = 0x761d;
      puStack_28 = (int *)FUN_0000_8a10();
      ppuStack_2a = (int **)0x7621;
      iVar18 = FUN_0000_781e();
      if (iVar18 == 0) {
        if (((*(char *)(iStack_20a * 0x20 + iStack_208 + param_1) == '\0') ||
            (*(char *)(iStack_208 + (param_6 + iStack_20a) * 0x20 + param_5 + -0x52ec) == '\0')) ||
           (*(char *)(iStack_212 + (param_6 + iStack_214) * 0x20 + param_5 + -0x52ec) == '\0')) {
          *pcVar27 = -1;
        }
        else {
LAB_0000_76b3:
          *pcVar27 = cVar6;
        }
      }
      else {
        if (((-1 < param_6 + iStack_214) && (-1 < param_5 + iStack_212)) &&
           ((param_5 + iStack_212 < 0x20 &&
            ((param_6 + iStack_214 < 0x20 &&
             (*(char *)(iStack_212 + (param_6 + iStack_214) * 0x20 + param_5 + -0x52ec) != '\0')))))
           ) goto LAB_0000_76b3;
        *pcVar27 = '\0';
      }
    }
    puStack_28 = (int *)iStack_212;
    ppuStack_2a = (int **)iStack_214;
    uStack_2c = 0x76d3;
    puStack_28 = (int *)FUN_0000_8a10();
    ppuStack_2a = (int **)0x76d7;
    iVar18 = FUN_0000_781e();
    if (iVar18 != 0) {
      aiStack_206[(int)puStack_4] = iStack_214;
      puStack_4 = puStack_4 + 1;
      aiStack_206[(int)puStack_4] = iStack_212;
      puStack_4 = puStack_4 + 1;
    }
  }
  puStack_218 = puStack_218 + -1;
  iStack_20c = 1;
  while ((int *)0x7fff < puStack_218) {
    puStack_218 = (int *)0x7;
    if (puStack_20e == puStack_4) {
      return puStack_4;
    }
    iStack_214 = aiStack_206[(int)puStack_20e];
    iStack_212 = aiStack_206[(int)(puStack_20e + 1)];
    puStack_20e = puStack_20e + 2;
    iStack_20a = iStack_214;
    iStack_208 = iStack_212;
  }
  bVar33 = puStack_218 < (int *)0x7;
  bVar34 = puStack_218 == (int *)0x7;
  puVar19 = puStack_218;
  goto code_r0x00007513;
LAB_0000_ebe5:
  puStack_4 = puVar19;
  if (((puStack_4[2] & 0x80) != 0) && ((byte)puStack_4[3] == uVar17)) {
    pbVar1 = puStack_4 + 2;
    *pbVar1 = *pbVar1 | 0x20;
    iVar18 = (uint)(byte)puStack_4[4] * 8;
    *(int *)(iVar18 + 0x5c5b) = 0x1e;
    *(int *)(iVar18 + 0x5c5a) = 0x1e;
    goto LAB_0000_ec10;
  }
  puStack_6 = puStack_6 + 1;
  puVar19 = puStack_4 + 8;
  if ((int *)0xbb13 < puStack_4 + 8) {
LAB_0000_ec10:
    if (uVar17 == *(byte *)0x587b) {
      *(int *)0x587b = 0xff;
    }
    FUN_0000_7330();
LAB_0000_ec36:
    puStack_28 = (int *)param_1;
    ppuStack_2a = &puStack_a;
    uStack_2c = 0xec4e;
    FUN_0000_e9e0();
    puStack_28 = (int *)param_1;
    ppuStack_2a = &puStack_a;
    uStack_2c = 0xec5f;
    puVar19 = (int *)FUN_0000_ea58();
    if (puStack_a == (int *)0x0) {
      puVar19 = (int *)FUN_0000_3270();
    }
    return puVar19;
  }
  goto LAB_0000_ebe5;
}



void switchD_0000:e499::caseD_11(void)

{
  code **ppcVar1;
  int unaff_DS;

  FUN_0000_2306();
  *(int *)0x5350 = 0x27;
  ppcVar1 = (code **)0x5350;
  (**ppcVar1)();
  return;
}



int FUN_0000_bdfe(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int unaff_DS;
  int uStack_6;

  uVar1 = (uint)*(byte *)(param_3 * 8 + -0x45e9);
  if ((uVar1 != 0x1a) && (iVar2 = RANDOM(0xff,0), 0x7f < iVar2)) {
    return 0;
  }
  if (((*(uint *)(uVar1 * 2 + 0x153c) & 0x8000) != 0) &&
     ((*(char *)0x587a == 'N' || (*(char *)0x587a == '\x1c')))) {
    return 0;
  }
  FUN_0000_5dce(0x96,5,400,0x2ee);
  if (param_1 == 0) {
    uStack_6 = FUN_0000_d186(0,-(uint)*(byte *)0x588f,param_3,param_2);
  }
  else {
    uStack_6 = 0;
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(uStack_6,*(int *)(param_2 * 8 + -0x45e5),
                      *(int *)(param_2 * 8 + -0x45e6),param_3);
}



void FUN_0000_bed6(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_DS;
  int uVar4;

  uVar4 = 0;
  uVar1 = (uint)*(byte *)(param_1 * 8 + -0x45e9);
  uVar2 = (uint)*(byte *)(param_1 * 8 + -0x45e8);
  iVar3 = FUN_0000_c9e0(param_1);
  if (iVar3 < 0) {
    FUN_0000_c09c(uVar4,uVar1,uVar2);
    return;
  }
  if ((*(byte *)(param_1 * 8 + -0x45ea) & 1) == 0) {
    if ((((*(byte *)(iVar3 * 8 + -0x45ea) & 0x80) != 0) &&
        (*(char *)((uint)*(byte *)(iVar3 * 8 + -0x45e9) * 0x20 + 0x55c6) == '-')) &&
       ((*(uint *)(uVar1 * 2 + 0x153c) & 0x8000) != 0)) {
      RANDOM(0xff,0);
    }
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec(param_1);
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(param_1);
}



void FUN_0000_c0a4(void)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;

  iVar3 = (uint)*(byte *)0x589e * 8;
  *(int *)0x589d = 0;
  bVar2 = *(byte *)(iVar3 + -0x45e8);
  if ((*(char *)0x587a != 'T') &&
     (((*(char *)0x587a != 'Q' || (iVar4 = RANDOM(1,0), iVar4 != 0)) &&
      ((*(byte *)(iVar3 + -0x45ea) & 4) == 0)))) {
    if ((*(byte *)(iVar3 + -0x45ea) & 8) == 0) {
      if (*(char *)(iVar3 + -0x45e9) == '-') {
        *(int *)((uint)bVar2 * 8 + 0x5c60) = 0;
      }
      if ((*(byte *)(iVar3 + -0x45ea) & 2) == 0) {
                    // WARNING: Subroutine does not return
        thunk_FUN_0000_8fec();
      }
      if (((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) && (iVar4 = RANDOM(3,0), iVar4 == 3)) {
        pcVar1 = (char *)(iVar3 + -0x45ec);
        *pcVar1 = *pcVar1 + '\x01';
      }
      FUN_0000_d70c(*(int *)0x589e);
      iVar4 = FUN_0000_cb94(*(int *)0x589e);
      if (iVar4 == 0) {
        if ((*(byte *)(iVar3 + -0x45ea) & 2) != 0) {
          FUN_0000_bed6(*(int *)0x589e);
        }
      }
      else {
        if ((*(byte *)0x58a2 & 0x10) != 0) {
          FUN_0000_30da(10);
          FUN_0000_5dce(0x28,1,2000,0x4b0);
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        FUN_0000_7330();
      }
    }
    else {
      iVar3 = RANDOM(0x10,0);
      if (iVar3 == 0x10) {
        FUN_0000_8220(*(int *)0x589e);
      }
    }
  }
  return;
}



int FUN_0000_c1f4(int param_1,int param_2)

{
  int uVar1;
  int unaff_DS;

  FUN_0000_3270(param_2);
  if ((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) == 0) {
    FUN_0000_3270(0x6d98);
    uVar1 = 1;
  }
  else {
    if (param_1 == 0) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    if (param_1 == 1) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    if (param_1 == 2) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    if (param_1 == 3) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    if (param_1 == 4) {
                    // WARNING: Subroutine does not return
      switchD_0000:b23f::switchdataD_0000_984a();
    }
    if (param_1 == 5) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
    uVar1 = 0;
  }
  return uVar1;
}



int FUN_0000_c266(int param_1,int param_2)

{
  int *puVar1;
  char *pcVar2;
  int *puVar3;
  int uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *puVar9;
  int *puVar10;
  int unaff_DS;

  if ((param_2 == 0xff) || (*(char *)(param_2 + 0x15fc) == '\0')) {
    uVar4 = 0;
  }
  else {
    if (param_1 != 0) {
      pcVar8 = (char *)0x6da0;
      uVar5 = 0xffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar2 != '\0');
      uVar5 = ~uVar5;
      puVar9 = (int *)(pcVar8 + -uVar5);
      pcVar8 = (char *)0xb21e;
      iVar6 = -1;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar2 = pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (*pcVar2 != '\0');
      puVar10 = (int *)(pcVar8 + -1);
      for (uVar7 = uVar5 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar3 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar3 = *puVar1;
      }
      for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar3 = puVar10;
        puVar10 = (int *)((int)puVar10 + 1);
        puVar1 = puVar9;
        puVar9 = (int *)((int)puVar9 + 1);
        *(int *)puVar3 = *(int *)puVar1;
      }
    }
    pcVar8 = *(char **)(param_2 * 2 + 0x17f6);
    uVar5 = 0xffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    uVar5 = ~uVar5;
    puVar9 = (int *)(pcVar8 + -uVar5);
    pcVar8 = (char *)0xb21e;
    iVar6 = -1;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar2 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar2 != '\0');
    puVar10 = (int *)(pcVar8 + -1);
    for (uVar7 = uVar5 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      puVar1 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar3 = *puVar1;
    }
    for (uVar5 = (uint)((uVar5 & 1) != 0); uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar3 = puVar10;
      puVar10 = (int *)((int)puVar10 + 1);
      puVar1 = puVar9;
      puVar9 = (int *)((int)puVar9 + 1);
      *(int *)puVar3 = *(int *)puVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_0000_c2ee(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int unaff_DS;
  byte bStack_8;

  iVar3 = (uint)*(byte *)0x589e * 8;
  *(int *)0x5896 = *(int *)(iVar3 + -0x45e6);
  *(int *)0x5897 = *(int *)(iVar3 + -0x45e5);
  uVar2 = (uint)*(byte *)(iVar3 + -0x45e9);
  if ((*(char *)0x587b != -1) &&
     (((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0 || (uVar2 != *(byte *)0x587b)))) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  if (((*(byte *)((uint)*(byte *)0x589e * 8 + -0x45ea) & 0x80) != 0) &&
     ((iVar3 = uVar2 * 0x20, *(char *)((int)FUN_0000_55be + 5 + iVar3) == '#' ||
      (*(char *)(iVar3 + 0x55c4) == '#')))) {
    pbVar1 = (byte *)((uint)*(byte *)0x589e * 8 + -0x45ea);
    *pbVar1 = *pbVar1 | 1;
    *(int *)0x587b = 0xff;
    *(int *)((int)FUN_0000_a9f4 + 6) = 1;
    FUN_0000_c0a4();
    if ((0x2f < bStack_8) && (bStack_8 < 0x37)) {
      return;
    }
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
  iVar3 = (uint)*(byte *)0x589e * 8;
  if ((*(byte *)(iVar3 + -0x45ea) & 0x80) != 0) {
    FUN_0000_4448(*(int *)(iVar3 + -0x45e9));
  }
  if (*(char *)((int)FUN_0000_a9f4 + 6) != '\0') {
    FUN_0000_4320();
    *(int *)((int)FUN_0000_a9f4 + 6) = 0;
  }
  FUN_0000_30da(10);
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec();
}



// WARNING: Removing unreachable block (ram,0x0000cae5)
// WARNING: Removing unreachable block (ram,0x0000caeb)
// WARNING: Removing unreachable block (ram,0x0000caf6)
// WARNING: Removing unreachable block (ram,0x0000cafb)
// WARNING: Removing unreachable block (ram,0x0000cb01)
// WARNING: Removing unreachable block (ram,0x0000cb0d)
// WARNING: Removing unreachable block (ram,0x0000cb17)
// WARNING: Removing unreachable block (ram,0x0000cb2c)
// WARNING: Removing unreachable block (ram,0x0000cb32)
// WARNING: Removing unreachable block (ram,0x0000cb3c)
// WARNING: Removing unreachable block (ram,0x0000cb42)
// WARNING: Removing unreachable block (ram,0x0000cb4c)
// WARNING: Removing unreachable block (ram,0x0000cb52)
// WARNING: Removing unreachable block (ram,0x0000cb5c)
// WARNING: Removing unreachable block (ram,0x0000cb62)
// WARNING: Removing unreachable block (ram,0x0000cb68)
// WARNING: Removing unreachable block (ram,0x0000cb7c)
// WARNING: Removing unreachable block (ram,0x0000cb84)
// WARNING: Removing unreachable block (ram,0x0000cb89)

void FUN_0000_c9e0(int param_1)

{
  int uVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_DS;
  int iStack_1e;
  int iStack_8;

  iVar3 = param_1 * 8;
  iStack_8 = FUN_0000_7066(param_1);
  if (*(char *)0x587a == 'C') {
    iVar4 = FUN_0000_d092(0xffff,param_1);
    iVar5 = FUN_0000_54de();
    if (iVar4 < iVar5) {
      iStack_8 = 0;
    }
  }
  iVar4 = 0x1f;
  uVar1 = *(int *)(iVar3 + -0x45e5);
  uVar2 = *(int *)(iVar3 + -0x45e6);
  iStack_1e = -0x44f4;
  while (((((iVar4 == param_1 || (*(char *)(iStack_1e + 2) == '\0')) ||
           ((*(byte *)(iStack_1e + 2) & 0x20) != 0)) ||
          ((iVar5 = FUN_0000_7066(iVar4), iStack_8 == iVar5 ||
           (((*(char *)0x5894 != '(' && (*(char *)(iVar3 + -0x45e9) != '/')) &&
            ((*(byte *)(iStack_1e + 2) & 0x10) != 0)))))) || ((*(byte *)(iStack_1e + 2) & 4) != 0)))
  {
    iStack_1e = iStack_1e + -8;
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec();
    }
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec(*(int *)(iStack_1e + 6),uVar1,uVar2);
}



// WARNING: Removing unreachable block (ram,0x0000cc61)

int FUN_0000_cb94(int param_1)

{
  int unaff_DS;

  param_1 = param_1 * 8;
  if ((*(char *)(param_1 + -0x45e9) == '\x1b') || (*(char *)(param_1 + -0x45e9) == '\x1a')) {
    return 0;
  }
  if (((*(byte *)(param_1 + -0x45ea) & 0x80) == 0) &&
     ((((*(uint *)((uint)*(byte *)(param_1 + -0x45e9) * 2 + 0x153c) & 0x2000) != 0 &&
       (*(char *)0x587a != 'N')) && (*(char *)0x587a != '\x1c')))) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec();
  }
                    // WARNING: Subroutine does not return
  thunk_FUN_0000_8fec();
}



int FUN_0000_cdca(uint param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int unaff_DS;
  int *puStack_12;
  int iStack_10;
  byte *pbStack_c;
  byte *pbStack_a;
  byte *pbStack_8;
  byte *pbStack_6;

  iStack_10 = 0;
  if (((*(byte *)0x58a1 & 0x80) != 0) || ((*(byte *)0x58a1 & 2) != 0)) {
    pbVar2 = (byte *)0xae1f;
    pbVar3 = (byte *)0xae27;
    puStack_12 = (int *)0xad1f;
    pbStack_6 = (byte *)((int)FUN_0000_ae38 + 7);
    pbStack_a = (byte *)0xae47;
    pbStack_8 = (byte *)0xae5f;
    pbStack_c = (byte *)0xae67;
    iVar1 = 8;
    do {
      if ((*pbVar2 == param_2) && (*pbVar3 == param_1)) {
        *pbVar3 = 0xff;
        *pbVar2 = 0xff;
        if ((*pbStack_6 < 0xb) && (*pbStack_a < 0xb)) {
          *(int *)((uint)*pbStack_a * 0x20 + (uint)*pbStack_6 + -0x52ec) = *puStack_12;
        }
        if ((*pbStack_8 < 0xb) && (*pbStack_c < 0xb)) {
          *(int *)((uint)*pbStack_c * 0x20 + (uint)*pbStack_8 + -0x52ec) = *puStack_12;
        }
        iStack_10 = 1;
      }
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      puStack_12 = puStack_12 + 1;
      pbStack_6 = pbStack_6 + 1;
      pbStack_a = pbStack_a + 1;
      pbStack_8 = pbStack_8 + 1;
      pbStack_c = pbStack_c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    if (iStack_10 != 0) {
      FUN_0000_7330();
    }
  }
  return iStack_10;
}



void FUN_0000_cee6(int param_1)

{
  int iVar1;
  int unaff_DS;
  uint uStack_6;

  if (param_1 < 0) {
    iVar1 = (-1 - param_1) * 8;
    uStack_6 = (uint)*(byte *)(iVar1 + -0x45e8);
    *(int *)(iVar1 + -0x45e8) = 0;
    *(int *)(iVar1 + -0x45eb) = 0;
    *(int *)(iVar1 + -0x45ec) = 0;
    *(int *)(iVar1 + -0x45e5) = 0;
    *(int *)(iVar1 + -0x45e6) = 0;
    *(int *)(iVar1 + -0x45e7) = 0;
    *(int *)(iVar1 + -0x45ea) = 0;
  }
  else {
    uStack_6 = param_1 - 1;
  }
  iVar1 = uStack_6 * 8;
  *(int *)(iVar1 + 0x5c5c) = 0;
  *(int *)(iVar1 + 0x5c5b) = 0;
  *(int *)(iVar1 + 0x5c5a) = 0;
  *(int *)(iVar1 + 0x5c5f) = 0;
  *(int *)(iVar1 + 0x5c5e) = 0;
  *(int *)(iVar1 + 0x5c5d) = 0;
  return;
}



uint FUN_0000_cf60(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_DS;
  uint uStack_8;
  uint uStack_6;

  if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x40) == 0) {
    uVar3 = (uint)*(byte *)0x589d;
    if (uVar3 == 0x27) {
      FUN_0000_3270(0x6f1a);
      FUN_0000_8880(0x27,param_2);
      uStack_8 = 99;
    }
    else if (uVar3 == 0x28) {
      uStack_8 = 0;
    }
    else if (uVar3 == 0xff) {
      uStack_8 = 1;
    }
    else {
      bVar1 = *(byte *)(uVar3 + 0x15fc);
      uStack_8 = (uint)bVar1;
      if ((1 < bVar1) && (uStack_8 != 99)) {
        uStack_8 = RANDOM(uStack_8,1);
      }
    }
  }
  else {
    uStack_8 = (uint)*(byte *)((uint)*(byte *)(param_2 * 8 + -0x45e9) * 8 + 0x13c0);
  }
  if (uStack_8 == 99) {
    uStack_6 = 99;
  }
  else {
    if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x40) == 0) {
      cVar2 = *(char *)((int)FUN_0000_55be + 2 + (uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20);
    }
    else {
      cVar2 = *(char *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 8 + 0x13bf);
    }
    uStack_6 = uStack_8;
    if (cVar2 != '\0') {
      iVar4 = RANDOM(cVar2,1);
      uStack_6 = uStack_8 - iVar4;
    }
  }
  return uStack_6;
}



int FUN_0000_d04a(int param_1)

{
  int uVar1;
  int unaff_DS;

  if ((((*(char *)0x587a == 'T') && ((*(byte *)(param_1 * 8 + -0x45ea) & 0x40) != 0)) ||
      (*(char *)(param_1 * 8 + -0x45e9) == '\x1a')) || ((*(byte *)(param_1 * 8 + -0x45ea) & 8) != 0)
     ) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(int *)(param_1 * 8 + -0x45eb);
  }
  return uVar1;
}



uint FUN_0000_d092(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int unaff_DS;
  uint uStack_6;

  iVar2 = param_2 * 8;
  if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
    if (param_1 < 1) goto LAB_0000_d0dd;
    if (*(char *)(param_1 + 0x169c) != '\b') goto LAB_0000_d0d8;
  }
  else {
    if (param_1 != 0) goto LAB_0000_d0dd;
    if ((*(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 2 + 0x153c) & 0x80) == 0) {
LAB_0000_d0d8:
      param_1 = -2;
      goto LAB_0000_d0dd;
    }
  }
  param_1 = -3;
LAB_0000_d0dd:
  if (param_1 == -4) {
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      uVar3 = FUN_0000_87c8(*(int *)(iVar2 + -0x45e9));
      return uVar3;
    }
    bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13bf);
  }
  else if (param_1 == -3) {
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b4);
    }
    else {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13bc);
    }
  }
  else {
    if (param_1 == -2) {
      uVar3 = FUN_0000_d04a(param_2);
      return uVar3;
    }
    if (param_1 != -1) {
      return uStack_6;
    }
    if ((*(byte *)(iVar2 + -0x45ea) & 0x40) == 0) {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 0x20 + 0x55b6);
    }
    else {
      bVar1 = *(byte *)((uint)*(byte *)(iVar2 + -0x45e9) * 8 + 0x13be);
    }
  }
  return (uint)bVar1;
}



int FUN_0000_d186(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_DS;
  int iStack_a;
  int uStack_8;
  int iStack_6;

  iStack_a = -1;
  iStack_6 = 0;
  if (*(char *)0x588f == '\0') {
    if (((param_1 != 0x27) && (param_1 != 0x23)) && (param_1 != 0x28)) {
      uStack_8 = 0xfffe;
      iStack_a = param_1;
      goto LAB_0000_d1df;
    }
  }
  else if (((param_1 < 0x2a) || (0x31 < param_1)) && (param_1 != 0x33)) {
    iStack_a = -1;
    uStack_8 = 0xffff;
    goto LAB_0000_d1df;
  }
  iStack_6 = 1;
LAB_0000_d1df:
  if (iStack_6 == 0) {
    iVar1 = FUN_0000_d092(uStack_8,param_4);
    iVar2 = FUN_0000_d092(iStack_a,param_3);
    iVar3 = FUN_0000_54de();
    if (((iVar1 - iVar2) + 0x1e) / 2 <= iVar3) {
      iStack_6 = 1;
    }
  }
  return iStack_6;
}



char FUN_0000_d224(uint param_1,int param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  int *puVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int unaff_DS;

  cVar5 = '\0';
  iVar6 = param_2 * 8;
  pbVar7 = (byte *)(iVar6 + -0x45ec);
  if ((int)param_1 < 1) {
    *(int *)0x58a2 = 0x20;
    param_1 = 0;
  }
  if ((*(byte *)(iVar6 + -0x45ea) & 0x80) == 0) {
    if (((*(byte *)((uint)*(byte *)(iVar6 + -0x45e9) * 2 + 0x153c) & 0x20) != 0) &&
       (*(char *)0x5890 == '\0')) {
      param_1 = (int)param_1 / 2;
    }
    if ((*(byte *)((uint)*(byte *)(iVar6 + -0x45e9) * 2 + 0x153c) & 8) != 0) {
      param_1 = 0;
    }
    if (*pbVar7 < param_1) {
      *pbVar7 = 0;
    }
    else {
      pbVar2 = pbVar7;
      *pbVar2 = *pbVar2 - (char)param_1;
    }
    if ((*pbVar7 == 0) || (param_1 == 99)) {
      uVar11 = (uint)*(byte *)(iVar6 + -0x45e9);
      iVar13 = uVar11 * 8;
      cVar5 = (*(byte *)(iVar13 + 0x13c1) >> 2) + 1;
      bVar3 = *(byte *)(iVar13 + 0x13c3);
      *(int *)(iVar6 + -0x45ea) = 0x20;
      *pbVar7 = 0;
      uVar8 = (uint)*(byte *)(iVar6 + -0x45e6);
      uVar9 = (uint)*(byte *)(iVar6 + -0x45e5);
      bVar4 = *(byte *)(uVar9 * 0x20 + uVar8 + -0x52ec);
      if ((*(uint *)(uVar11 * 2 + 0x153c) & 0x1001) == 0) {
        if (*(char *)(iVar6 + -0x45e9) == '\x1c') {
          iVar6 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
          *(int *)(iVar6 + 0x5c5b) = 0x1f;
          *(int *)(iVar6 + 0x5c5a) = 0x1f;
          FUN_0000_7f26(*(int *)0x5895,uVar9,uVar8,0,0x1f);
          FUN_0000_7330();
          return cVar5;
        }
        if (*(char *)(iVar6 + -0x45e9) == '\x1e') {
          puVar10 = (int *)FUN_0000_5e22(uVar9,uVar8);
          *puVar10 = 0x4c;
        }
        else if ((bVar4 != 0x87) && (3 < bVar4)) {
          iVar13 = FUN_0000_54de();
          if ((int)(uint)bVar3 < iVar13) {
            iVar6 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
            *(int *)(iVar6 + 0x5c5b) = 0x1f;
            *(int *)(iVar6 + 0x5c5a) = 0x1f;
            return cVar5;
          }
          iVar13 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
          *(int *)(iVar13 + 0x5c5b) = 1;
          *(int *)(iVar13 + 0x5c5a) = 1;
          *(byte *)(iVar13 + 0x5c5f) = bVar3;
          iVar6 = FUN_0000_54de();
          if ((int)(uint)bVar3 <= iVar6) {
            return cVar5;
          }
          pbVar2 = (byte *)(iVar13 + 0x5c5f);
          *pbVar2 = *pbVar2 | 0x80;
          return cVar5;
        }
        param_2 = -1 - param_2;
      }
      else {
        iVar13 = (uint)*(byte *)(iVar6 + -0x45e9) * 2;
        if ((*(uint *)(iVar13 + 0x153c) & 0x1000) != 0) {
          FUN_0000_3270(*(int *)(iVar13 + 0x1856));
          FUN_0000_3270(0x6f36);
          *(int *)0x58a2 = 2;
          iVar13 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
          *(int *)(iVar13 + 0x5c5b) = 0x16;
          *(int *)(iVar13 + 0x5c5a) = 0x16;
          uVar11 = (uint)*(byte *)(iVar6 + -0x45e6);
          uVar8 = (uint)*(byte *)(iVar6 + -0x45e5);
          FUN_0000_2a88(uVar8,uVar11,*(int *)(uVar8 * 0x20 + uVar11 + -0x52ec));
          FUN_0000_cee6(-(param_2 + 1));
                    // WARNING: Subroutine does not return
          thunk_FUN_0000_8fec();
        }
        param_2 = -(param_2 + 1);
      }
      FUN_0000_cee6(param_2);
    }
    else if ((*(byte *)((uint)*(byte *)(iVar6 + -0x45e9) * 2 + 0x153c) & 0x10) != 0) {
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec(*(int *)(iVar6 + -0x45e6));
    }
  }
  else {
    piVar12 = (int *)((uint)*(byte *)(iVar6 + -0x45e9) * 0x20 + 0x55b8);
    piVar1 = piVar12;
    *piVar1 = *piVar1 - param_1;
    if ((*piVar12 < 1) || (param_1 == 99)) {
      iVar13 = (uint)*(byte *)(iVar6 + -0x45e9) * 0x20;
      *(int *)(iVar13 + 0x55b8) = 0;
      pbVar2 = (byte *)(iVar6 + -0x45ea);
      *pbVar2 = *pbVar2 | 0x20;
      *(int *)(iVar13 + 0x55b3) = 0x44;
      iVar13 = (uint)*(byte *)(iVar6 + -0x45e8) * 8;
      *(int *)(iVar13 + 0x5c5b) = 0x1e;
      *(int *)(iVar13 + 0x5c5a) = 0x1e;
      if (*(char *)(iVar6 + -0x45e9) == *(char *)0x587b) {
        *(int *)0x587b = 0xff;
      }
    }
    FUN_0000_4320();
  }
  return cVar5;
}



void FUN_0000_d56a(uint param_1,int param_2)

{
  int uVar1;
  int iVar2;
  int unaff_DS;

  if (((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) == 0) ||
     (iVar2 = (uint)*(byte *)(param_2 * 8 + -0x45e9) * 0x20, *(char *)(iVar2 + 0x55b3) != 'G')) {
    uVar1 = FUN_0000_54ce(0x14,param_2);
    uVar1 = FUN_0000_d224(uVar1,param_2);
    if ((param_1 < 0x8000) && ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) != 0)) {
      FUN_0000_5934(9999,uVar1,(uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55bc);
    }
  }
  else {
    *(int *)(iVar2 + 0x55b3) = 0x50;
    FUN_0000_3270(iVar2 + 0x55a8);
    FUN_0000_3270(0x6f4e);
    *(int *)0x58a2 = 8;
    *(int *)((int)FUN_0000_a9f4 + 6) = 1;
  }
  return;
}



byte * FUN_0000_d70c(int param_1)

{
  byte *pbVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int unaff_DS;
  byte *pbStack_6;

  bVar2 = false;
  param_1 = param_1 * 8;
  pbVar3 = (byte *)(param_1 + -0x45ec);
  if ((*(byte *)(param_1 + -0x45ea) & 0x80) != 0) {
    return pbVar3;
  }
  uVar4 = (uint)(*(byte *)((uint)*(byte *)(param_1 + -0x45e9) * 8 + 0x13c1) >> 2);
  if (*pbVar3 < uVar4) {
    pbStack_6 = (byte *)0x1;
  }
  else {
    uVar4 = uVar4 << 1;
    if (uVar4 <= *pbVar3) {
      if ((uint)*pbVar3 < (uVar4 / 2) * 3) {
        pbStack_6 = (byte *)0x3;
      }
      else {
        pbStack_6 = (byte *)0x4;
      }
      goto LAB_0000_d7af;
    }
    pbStack_6 = (byte *)0x2;
    iVar5 = FUN_0000_54ce(0x100);
    if (iVar5 < 0xfc) goto LAB_0000_d7af;
  }
  bVar2 = true;
LAB_0000_d7af:
  if (bVar2) {
    pbVar1 = (byte *)(param_1 + -0x45ea);
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    pbVar1 = (byte *)(param_1 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return pbStack_6;
}



void FUN_0000_d7ce(int param_1)

{
  char cVar1;
  int iVar2;
  int uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int unaff_DS;
  char *pcStack_16;
  char *pcStack_14;
  char *pcStack_12;
  int iStack_a;

  iStack_a = 0;
  iVar2 = param_1 * 8;
  cVar1 = *(char *)((uint)*(byte *)(iVar2 + -0x45e6) + (*(uint *)(iVar2 + -0x45e5) & 0xff) * 0x20 +
                   -0x52ec);
  if ((cVar1 == -0x71) || (cVar1 == -0x44)) {
    iStack_a = 100;
  }
  if (cVar1 == '\x04') {
    iStack_a = 0x32;
  }
  if (iStack_a == 0) {
    uVar4 = 0;
    pcVar5 = (char *)0x5c5c;
    pcVar6 = (char *)0x5c5d;
    pcStack_12 = (char *)0x5c5a;
    pcStack_14 = (char *)0x5c5a;
    pcStack_16 = (char *)0x5c5a;
    do {
      if (((uVar4 != *(byte *)(iVar2 + -0x45e8)) && (*(char *)(iVar2 + -0x45e6) == *pcVar5)) &&
         (*(char *)(iVar2 + -0x45e5) == *pcVar6)) {
        if (*pcStack_12 == -0x16) {
          iStack_a = 100;
        }
        if (*pcStack_14 == -0x18) {
          iStack_a = 0x32;
        }
        if (*pcStack_16 == -0x17) {
          iStack_a = 0x96;
        }
        if (iStack_a != 0) break;
      }
      pcVar5 = pcVar5 + 8;
      pcVar6 = pcVar6 + 8;
      pcStack_12 = pcStack_12 + 8;
      pcStack_14 = pcStack_14 + 8;
      pcStack_16 = pcStack_16 + 8;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x20);
  }
  if (iStack_a == 0x32) {
    if (*(byte *)((uint)*(byte *)(iVar2 + -0x45e8) * 8 + 0x5c5a) < 0x80) {
      FUN_0000_d56a(0xffff,param_1);
      FUN_0000_4f84(param_1);
    }
  }
  else {
    if (iStack_a == 100) {
      FUN_0000_4f84(param_1);
      iVar2 = param_1;
      uVar3 = FUN_0000_54ce(10,param_1);
      FUN_0000_d224(uVar3,iVar2);
                    // WARNING: Subroutine does not return
      thunk_FUN_0000_8fec(param_1);
    }
    if (iStack_a == 0x96) {
      FUN_0000_82ce(param_1);
    }
  }
  return;
}



void FUN_0000_d916(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int unaff_DS;

  iVar3 = param_1 * 8;
  uVar2 = FUN_0000_54de();
  if (uVar2 < *(byte *)(iVar3 + -0x45eb)) {
    if ((*(byte *)(iVar3 + -0x45ea) & 0x80) == 0) {
      iVar3 = *(int *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 2 + 0x1856);
    }
    else {
      iVar3 = (uint)*(byte *)(iVar3 + -0x45e9) * 0x20 + 0x55a8;
    }
    FUN_0000_3270(iVar3);
    FUN_0000_3270(0x6f5e);
    FUN_0000_3c5c(600,(int)&LAB_0000_1b58,1);
    pbVar1 = (byte *)(param_1 * 8 + -0x45ea);
    *pbVar1 = *pbVar1 & 0xfb;
    iVar3 = (uint)*(byte *)(param_1 * 8 + -0x45e8) * 8;
    *(int *)(iVar3 + 0x5c5b) = *(int *)(iVar3 + 0x5c5a);
  }
  return;
}



int FUN_0000_fc00(int param_1,int param_2,int param_3)

{
  if (((param_1 != 0x30) && (param_1 != 0x31)) && (param_1 < 0x33)) {
                    // WARNING: Subroutine does not return
    thunk_FUN_0000_8fec(param_3);
  }
  return 0;
}



void FUN_0000_fc94(int param_1)

{
  int iVar1;
  int unaff_DS;

  if ((*(byte *)(param_1 * 8 + -0x45ea) & 0x80) == 0) {
    iVar1 = *(int *)((uint)*(byte *)(param_1 * 8 + -0x45e9) * 2 + 0x1856);
  }
  else {
    iVar1 = (uint)*(byte *)(param_1 * 8 + -0x45e9) * 0x20 + 0x55a8;
  }
  FUN_0000_3270(iVar1);
  return;
}



int FUN_1000_0058(int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;

  lVar1 = (long)(param_3 - param_1) * (long)(param_3 - param_1);
  return CONCAT22((int)((ulong)lVar1 >> 0x10),(param_4 - param_2) * (param_4 - param_2) + (int)lVar1
                 );
}



int FUN_1000_008a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = FUN_1000_0058(param_1,param_2,param_3,param_4);
  iVar2 = 0;
  for (iVar3 = 1; iVar3 <= iVar1; iVar3 = iVar3 + 2) {
    iVar1 = iVar1 - iVar3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



void FUN_1000_00d4(int param_1,int param_2)

{
  int unaff_DS;

  FUN_1000_008a(*(int *)(param_1 * 8 + -0x45e5),*(int *)(param_1 * 8 + -0x45e6),
                *(int *)(param_2 * 8 + -0x45e5),*(int *)(param_2 * 8 + -0x45e6));
  return;
}



int FUN_1000_0104(int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_DS;
  int uVar8;
  int iStack_14;
  uint uStack_c;
  int uStack_6;
  int uStack_4;

  *(int *)0x5898 = 1;
  uStack_c = (uint)*(byte *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c61);
  iVar6 = uStack_c * 8;
  if ((((0x1f < uStack_c) || ((*(byte *)(iVar6 + -0x45ea) & 0x30) != 0)) ||
      (*(char *)(iVar6 + -0x45ea) == '\0')) ||
     ((*(char *)((uint)*(byte *)(iVar6 + -0x45e8) * 8 + 0x5c5a) == '\0' ||
      (iVar6 = FUN_1000_00d4(uStack_c,param_2), param_1 < iVar6)))) {
    uStack_c = param_2;
  }
  *(int *)0x5899 = *(int *)(uStack_c * 8 + -0x45e6);
  *(int *)0x589a = *(int *)(uStack_c * 8 + -0x45e5);
  bVar2 = false;
  bVar1 = false;
  pcVar3 = (char *)(param_2 * 8 + -0x45e5);
  pcVar4 = (char *)(param_2 * 8 + -0x45e6);
  do {
    if ((bVar1) || (bVar2)) {
      *(int *)0x5898 = 0;
      if (bVar2) {
        FUN_1000_30da(10);
        iStack_14 = 0;
      }
      return iStack_14;
    }
    iVar7 = 0;
    iVar6 = 0;
    FUN_1000_7330();
    uVar8 = 0x240;
    iVar5 = FUN_1000_408c();
    if (iVar5 == 0x1b) {
      bVar2 = true;
      iVar6 = iVar7;
    }
    else if (iVar5 < 0x1c) {
      if (iVar5 == 1) {
LAB_1000_0283:
        iVar6 = -1;
      }
      else if (iVar5 == 2) {
LAB_1000_0279:
        iVar6 = 1;
      }
      else {
        if (iVar5 == 3) goto LAB_1000_01c5;
        if (iVar5 == 4) {
LAB_1000_026f:
          iVar7 = 1;
        }
        else if (iVar5 == 0xd) goto LAB_1000_02a3;
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
LAB_1000_01c5:
          iVar6 = iVar7;
          iVar7 = -1;
        }
        else {
          if (iVar5 == 0xd4) {
            iVar7 = 1;
            goto LAB_1000_0283;
          }
          if (iVar5 == 0xd5) {
            iVar7 = -1;
            goto LAB_1000_0279;
          }
          if (iVar5 == 0xd6) {
            iVar6 = 1;
            goto LAB_1000_026f;
          }
        }
        goto LAB_1000_01c8;
      }
LAB_1000_02a3:
      if ((*pcVar4 != *(char *)0x5899) || (*pcVar3 != *(char *)0x589a)) {
        FUN_1000_30da(10,uVar8);
        if (*(char *)0x588f != '\0') {
          func_0x00013c5c(700,(uint)*(byte *)0x588f * 0x640 + 8000,800);
        }
        bVar1 = true;
      }
    }
LAB_1000_01c8:
    iVar6 = iVar6 + (uint)*(byte *)0x5899;
    iVar7 = iVar7 + (uint)*(byte *)0x589a;
    iStack_14 = FUN_1000_008a(*pcVar3,*pcVar4,iVar7,iVar6);
    if ((((iStack_14 <= param_1) && (-1 < iVar6)) && (iVar6 < 0xb)) &&
       ((-1 < iVar7 && (iVar7 < 0xb)))) {
      uStack_4 = (int)iVar6;
      *(int *)0x5899 = uStack_4;
      uStack_6 = (int)iVar7;
      *(int *)0x589a = uStack_6;
    }
  } while( true );
}



int FUN_1000_0348(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int unaff_DS;
  byte *pbStack_10;
  byte *pbStack_e;
  byte *pbStack_c;

  iVar2 = 0;
  pbVar3 = (byte *)0xba1a;
  pbStack_c = (byte *)0xba1b;
  pbStack_e = (byte *)0xba16;
  pbStack_10 = (byte *)0xba18;
  while ((((*pbVar3 != param_2 || (*pbStack_c != param_1)) ||
          (bVar1 = *pbStack_e, *(char *)((uint)*pbStack_10 * 8 + 0x5c5b) == -0xc)) ||
         ((((bVar1 & 0xc0) == 0 || ((bVar1 & 0x20) != 0)) || ((bVar1 & 4) != 0))))) {
    pbVar3 = pbVar3 + 8;
    pbStack_c = pbStack_c + 8;
    pbStack_e = pbStack_e + 8;
    pbStack_10 = pbStack_10 + 8;
    iVar2 = iVar2 + 1;
    if (0x1f < iVar2) {
      return -1;
    }
  }
  return iVar2;
}



void FUN_1000_03d4(int param_1,int param_2)

{
  int iVar1;
  int unaff_DS;

  do {
    do {
      iVar1 = FUN_1000_3ab2(3,1);
      *(int *)0x5876 = iVar1 + param_2 + -2;
      iVar1 = FUN_1000_3ab2(3,1);
      iVar1 = iVar1 + param_1 + -2;
      *(int *)0x5878 = iVar1;
    } while (*(int *)0x5876 < 0);
  } while (((10 < *(int *)0x5876) || (iVar1 < 0)) || (10 < iVar1));
  return;
}



uint FUN_1000_0422(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int uVar4;
  int unaff_DS;
  int iStack_e;
  int uStack_c;
  int uStack_6;

  uStack_6 = param_4;
  uStack_c = param_3;
  uVar3 = (uint)*(byte *)(param_5 * 8 + -0x45e6);
  uVar2 = (uint)*(byte *)(param_5 * 8 + -0x45e5);
  if (param_2 == 0) {
    do {
      FUN_1000_03d4(param_3,param_4);
      if (uVar3 != *(uint *)0x5876) break;
    } while (uVar2 == *(uint *)0x5878);
    uStack_6 = *(int *)0x5876;
    uStack_c = *(int *)0x5878;
  }
  if ((*(char *)0x589d == '\x19') || (*(char *)0x589d == '\"')) {
    if (param_2 != 0) {
      uStack_6 = param_4;
      uStack_c = param_3;
      iStack_e = 1;
    }
  }
  else {
    iStack_e = FUN_1000_0ede(param_1,uStack_c,uStack_6,uVar2,uVar3);
    if (iStack_e == 0) {
      uStack_6 = *(int *)0x5876;
      uStack_c = *(int *)0x5878;
    }
    else {
      FUN_1000_98da(uStack_c,uStack_6);
    }
  }
  if (iStack_e == 0) goto LAB_1000_0564;
  uVar3 = FUN_1000_0348(uStack_c,uStack_6);
  cVar1 = *(char *)0x589d;
  if (cVar1 == '\x13') {
LAB_1000_050c:
    uVar4 = 0xea;
LAB_1000_050f:
    FUN_1000_7f26(*(int *)0x5895,uStack_c,uStack_6,2,uVar4);
  }
  else {
    if (cVar1 == '3') {
      uVar4 = 0xe8;
      goto LAB_1000_050f;
    }
    if (cVar1 == '4') {
      uVar4 = 0xe9;
      goto LAB_1000_050f;
    }
    if (cVar1 == '5') goto LAB_1000_050c;
    if (cVar1 == '6') {
      uVar4 = 0xeb;
      goto LAB_1000_050f;
    }
  }
  if ((((*(char *)0x588f == '\0') || (param_2 != 0)) && (-1 < (int)uVar3)) &&
     (uVar3 != *(byte *)0x589e)) {
    *(int *)0x5876 = uStack_6;
    *(int *)0x5878 = uStack_c;
    return uVar3;
  }
LAB_1000_0564:
  *(int *)0x5876 = uStack_6;
  *(int *)0x5878 = uStack_c;
  return 0xffff;
}



void FUN_1000_057c(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  int unaff_DS;

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
    func_0x00018880(param_2,*(int *)((uint)*(byte *)0x589e * 8 + -0x45e9));
    return;
  }
  if (param_2 != 0x1a) {
    if (param_2 == 0x1c) {
      pcVar1 = (char *)0x57dd;
      *pcVar1 = *pcVar1 + -1;
      cVar2 = *pcVar1;
      goto LAB_1000_05a0;
    }
    if (param_2 != 0x24) {
      return;
    }
  }
  pcVar1 = (char *)0x57db;
  *pcVar1 = *pcVar1 + -1;
  cVar2 = *pcVar1;
LAB_1000_05a0:
  if (cVar2 == '\0') {
    cVar2 = FUN_1000_9a2a(param_2);
    pcVar1 = (char *)(param_2 + 0x57c0);
    *pcVar1 = *pcVar1 + cVar2;
  }
  return;
}



int FUN_1000_05fc(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int unaff_DS;

  uVar1 = (uint)*(byte *)(param_1 + 0x58a8);
  if ((((uVar1 != 0xff) && (pbVar3 = (byte *)(uVar1 * 8 + -0x45ea), *pbVar3 != 0)) &&
      (iVar2 = FUN_1000_7066(uVar1), iVar2 != 0)) &&
     ((((*pbVar3 & 0xc) == 0 && (*(char *)0x587a != 'T')) &&
      (iVar2 = FUN_1000_00d4(uVar1,param_1), iVar2 == 1)))) {
    FUN_1000_30da(10);
    FUN_1000_fc94(uVar1);
    FUN_1000_3270((int)&DAT_0000_9a70);
    return 1;
  }
  return 0;
}



void FUN_1000_0668(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_DS;
  int uStack_c;

  if (((((param_2 != 0x1a) && (param_2 != 0x1c)) && (param_2 != 0x24)) &&
      ((param_2 != 0x13 && (param_2 != 0x11)))) || (iVar2 = FUN_1000_05fc(param_3), iVar2 == 0)) {
    FUN_1000_3270((int)thunk_FUN_0000_8fec);
    iVar2 = FUN_1000_0104(*(int *)(param_2 + 0x1664),param_3);
    if (iVar2 != 0) {
      FUN_1000_5dce(100,5,300,0x514);
      if (param_2 == 0x13) {
        if (*(char *)0x57d3 == '\0') {
          func_0x00018880();
        }
        else {
          pcVar1 = (char *)0x57d3;
          *pcVar1 = *pcVar1 + -1;
        }
      }
      iVar2 = (uint)*(byte *)(param_3 * 8 + -0x45e8) * 8;
      *(int *)(iVar2 + 0x5c61) = 0xff;
      uVar3 = FUN_1000_0348();
      if (-1 < (int)uVar3) {
        uStack_c = (int)uVar3;
        *(int *)(iVar2 + 0x5c61) = uStack_c;
        FUN_1000_057c();
        func_0x00019742();
      }
      uVar4 = FUN_1000_0422();
      if (uVar4 < 0x8000) {
        FUN_1000_4f84();
        FUN_1000_30da();
        FUN_1000_9772();
        FUN_1000_ff12();
      }
      else if (uVar3 < 0x8000) {
        FUN_1000_30da();
        FUN_1000_fcd2();
      }
      if (param_2 == 0x26) {
        FUN_1000_0ede();
      }
    }
  }
  return;
}



void FUN_1000_07f8(void)

{
  int iVar1;

  FUN_1000_5dce(0x96,5,0x2ee,400);
  FUN_1000_30da();
  iVar1 = func_0x00019742();
  if (iVar1 == 0) {
    FUN_1000_fcd2();
  }
  else {
    FUN_1000_4f84();
    FUN_1000_9772();
    FUN_1000_ff12();
  }
  return;
}



void FUN_1000_0852(int param_1,int param_2)

{
  char cVar1;
  int uVar2;
  int iVar3;
  int iVar4;
  int unaff_DS;
  int uStack_8;

  if (0x22 < param_1) {
    *(int *)0x5890 = 1;
  }
  if ((*(byte *)(param_2 * 8 + -0x45ea) & 0x80) == 0) {
    cVar1 = *(char *)(*(byte *)(param_2 * 8 + -0x45e9) + 0x159c);
    if (cVar1 == '\x01') {
      cVar1 = '\0';
    }
    uVar2 = *(int *)(*(byte *)(param_2 * 8 + -0x45e9) + 0x15cc);
  }
  else {
    if (param_1 == 0xff) {
      cVar1 = '\0';
    }
    else {
      cVar1 = *(char *)(param_1 + 0x1664);
    }
    uVar2 = *(int *)(param_1 + 0x169c);
  }
  if (cVar1 == '\0') {
    FUN_1000_3270((int)&DAT_0000_9a84);
    iVar3 = FUN_1000_0104(1,param_2);
    iVar4 = FUN_1000_0348(*(int *)0x589a,*(int *)0x5899);
    if ((iVar3 == 0) || (iVar4 == -1)) {
      FUN_1000_3270((int)thunk_FUN_0000_8fec);
    }
    else {
      uStack_8 = (int)iVar4;
      *(int *)((uint)*(byte *)(param_2 * 8 + -0x45e8) * 8 + 0x5c61) = uStack_8;
      FUN_1000_07f8(param_1,iVar4,param_2);
    }
  }
  else {
    FUN_1000_0668(uVar2,param_1,param_2);
  }
  return;
}



void FUN_1000_093c(int param_1,int param_2)

{
  int unaff_DS;

  if ((param_2 != 0xff) && (*(char *)(param_2 + 0x15fc) != '\0')) {
    if (1 < param_1) {
      *(int *)0x588f = 0;
      *(int *)0x5890 = 0;
      FUN_1000_30da(10);
      FUN_1000_3270();
      FUN_1000_3270((int)&DAT_0000_9a94);
    }
    *(int *)0x589d = (int)param_2;
    FUN_1000_3270(0x9a98);
    FUN_1000_0852(param_2,*(int *)0x589e);
  }
  return;
}



void FUN_1000_0a26(int *param_1,int *param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  int unaff_DS;
  int iStack_10;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;

  iStack_6 = 1;
  iStack_8 = 1;
  iStack_c = 0x148;
  if (param_4 == param_6) {
    iStack_a = 0x4b00;
  }
  else {
    iStack_a = ((param_3 - param_5) * 100) / (param_4 - param_6);
  }
  if (iStack_a < 0) {
    iStack_a = -iStack_a;
  }
  if (param_4 < param_6) {
    iStack_6 = -1;
  }
  if (param_3 < param_5) {
    iStack_8 = -1;
  }
  iStack_10 = param_4 - param_6;
  if (iStack_10 < 0) {
    iStack_10 = -iStack_10;
  }
  iStack_4 = param_3 - param_5;
  if (iStack_4 < 0) {
    iStack_4 = -iStack_4;
  }
  *param_2 = (int)param_6;
  param_2 = param_2 + 1;
  *param_1 = (int)param_5;
  param_1 = param_1 + 1;
  iVar1 = iStack_a;
  while ((0 < iStack_10 || (0 < iStack_4))) {
    do {
      if ((iVar1 < 1) || (iStack_4 < 1)) break;
      iVar1 = iVar1 + -100;
      param_5 = param_5 + iStack_8;
      *param_1 = (char)param_5;
      param_1 = param_1 + 1;
      iStack_4 = iStack_4 + -1;
      *param_2 = (int)param_6;
      param_2 = param_2 + 1;
      iStack_c = iStack_c + -1;
    } while (iStack_c != 0);
    if (iStack_c == 0) break;
    iStack_10 = iStack_10 + -1;
    iVar1 = iVar1 + iStack_a;
    param_6 = param_6 + iStack_6;
    *param_1 = (char)param_5;
    *param_2 = (int)param_6;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    iStack_c = iStack_c + -1;
  }
  *param_2 = 0xff;
  *param_1 = 0xff;
  return;
}



// WARNING: Removing unreachable block (ram,0x00010e2d)
// WARNING: Removing unreachable block (ram,0x00010e4b)
// WARNING: Removing unreachable block (ram,0x00010e8e)
// WARNING: Removing unreachable block (ram,0x00010e94)
// WARNING: Removing unreachable block (ram,0x00010e9a)
// WARNING: Removing unreachable block (ram,0x00010ea0)
// WARNING: Removing unreachable block (ram,0x00010ecf)
// WARNING: Removing unreachable block (ram,0x00010ecc)
// WARNING: Switch with 1 destination removed at 0x00010bb0 : 8 cases all go to same destination

void FUN_1000_0b4a(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  int uVar4;
  uint extraout_DX;
  int unaff_SI;
  int unaff_DS;

  FUN_1000_2490(*(int *)0x13b0);
  if (7 < param_3) {
    return;
  }
  puVar1 = (uint *)(param_3 * 2 + unaff_SI + 0x76ff);
  *puVar1 = *puVar1 & extraout_DX;
  iVar3 = func_0x0001977e();
  if (iVar3 == 1) {
    uVar4 = 0x9a64;
  }
  else if (iVar3 == 2) {
    uVar4 = 0x9a50;
  }
  else if (iVar3 == 3) {
    uVar4 = 0x9a3c;
  }
  else {
    if (iVar3 != 4) goto code_r0x0001002c;
    uVar4 = 0x9a2a;
  }
  FUN_1000_3270(uVar4);
code_r0x0001002c:
  func_0x00014320();
  FUN_1000_7330();
  pbVar2 = (byte *)0x58a2;
  *pbVar2 = *pbVar2 & 0xf3;
  return;
}



int FUN_1000_0ede(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *puVar1;
  int iVar2;
  int *puVar3;
  int unaff_DS;
  char *pcStack_e;
  int iStack_c;

  iStack_c = 0xd;
  FUN_1000_298e(0);
  puVar3 = (int *)&DAT_0000_a728;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0xff;
  }
  puVar3 = (int *)0xa872;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0xff;
  }
  FUN_1000_0a26();
  pcStack_e = (char *)&DAT_0000_a728;
  if ((*(char *)0x5893 == '\0') || (0x20 < *(byte *)0x5893)) {
    if (param_1 == 7) {
      iStack_c = 8;
    }
  }
  else {
    iStack_c = 6;
  }
  if (param_1 == 0) {
    pcStack_e = (char *)0xa72c;
  }
  while( true ) {
    if ((*pcStack_e == -1) || (func_0x000159d4(), *(int *)0x5876 == -1)) {
      return 1;
    }
    FUN_1000_0b4a();
    FUN_1000_3ae8();
    FUN_1000_24ee();
    pcStack_e = pcStack_e + iStack_c;
    if ("" < pcStack_e) {
      return 1;
    }
    if (*pcStack_e == -1) break;
    iVar2 = FUN_1000_598e();
    if ((iVar2 == 0) && ((param_5 != *(int *)0x5876 || (param_4 != *(int *)0x5878)))) {
      return 0;
    }
  }
  return 1;
}
