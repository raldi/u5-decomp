typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void FUN_0000_0284(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x000067e0(*(int *)MEM(0x13b6) + 8);
  iVar1 = param_2 + 6;
  param_2 = param_2 + 1;
  func_0x00006880(param_1,iVar1,param_1,param_2);
  func_0x00006880(param_1 + 1,iVar1,param_1 + 1,param_2);
  func_0x000067e0(*(int *)MEM(0x13ae) + 8);
  func_0x00006880(param_1 + 2,iVar1,param_1 + 2,param_2);
  func_0x00006880(param_1 + 3,iVar1,param_1 + 3,param_2);
  func_0x000067e0(*(int *)MEM(0x13b2) + 8);
  func_0x00006880(param_1 + 4,iVar1,param_1 + 4,param_2);
  func_0x00006880(param_1 + 5,iVar1,param_1 + 5,param_2);
  func_0x000067e0(*(int *)MEM(0x13b4) + 8);
  func_0x00006880(param_1 + 6,iVar1,param_1 + 6,param_2);
  func_0x00006880(param_1 + 7,iVar1,param_1 + 7,param_2);
  return;
}



undefined2 FUN_0000_0340(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  char *pcVar4;
  undefined2 unaff_DS;
  undefined2 local_8;
  
  local_8 = 0;
  if ((((param_2 < 0) || (0x15 < param_2)) || (param_1 < 0)) || (0x15 < param_1)) {
    local_8 = 0;
  }
  else {
    pcVar4 = (char *)(param_1 * 0x20 + param_2 + MEM(0xad14));
    if (*pcVar4 != '\0') {
      local_8 = 1;
      *pcVar4 = '\0';
      bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 +
                        ((param_1 + (uint)*(byte *)SAVED_GAM(0x02f1)) - 0xb & 7) * 8 +
                        ((param_2 + (uint)*(byte *)SAVED_GAM(0x02f0)) - 0xb & 7) + SAVED_GAM(0x03b4));
      func_0x00007962(param_1 + 1,param_2 + 1);
      func_0x000067e0(*(undefined2 *)MEM(0x13b0));
      uVar2 = (uint)(bVar1 >> 4);
      if (uVar2 < 0x10) {
                    // WARNING: Could not emulate address calculation at 0x00000409
                    // WARNING: Treating indirect jump as call
        uVar3 = (**(code **)(uVar2 * 2 + MEM(0xa900)))();
        return uVar3;
      }
    }
    func_0x00007a3a(*(undefined2 *)MEM(0x13b0));
    func_0x00007a0e(0);
  }
  return local_8;
}



void __cdecl16near FUN_0000_06a8(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined uVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 unaff_DS;
  uint local_16;
  undefined *local_10;
  undefined *local_c;
  undefined *local_6;
  undefined *local_4;
  
  func_0x000067e0(0);
  func_0x00006816(0xb7,0xb7,8,8);
  local_c = (undefined *)MEM(0xa528);
  local_10 = (undefined *)MEM(0xa628);
  puVar5 = (undefined *)MEM(0xad14);
  for (iVar4 = MEM(0x02e0); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0xff;
  }
  *(undefined *)MEM(0xa528) = 0xb;
  local_4 = (undefined *)MEM(0xa529);
  *(undefined *)MEM(0xa628) = 0xb;
  local_6 = (undefined *)MEM(0xa629);
  *(undefined *)MEM(0xae7f) = 0;
  func_0x000067e0(*(undefined2 *)MEM(0x13b0));
  func_0x00007904(0);
  func_0x00007962(0xc,0xc);
  func_0x00007a0e(1);
  func_0x00007a3a(*(int *)MEM(0x13b4) + 8);
  if (*(int *)MEM(0x52c8) == 3) {
    func_0x00007a3a(*(undefined2 *)MEM(0x13b0));
  }
  func_0x0000742a(0x60);
  func_0x00007a3a(*(undefined2 *)MEM(0x13b0));
  func_0x00007a0e(0);
  do {
    if (local_4 == local_c) {
      func_0x00007904(2);
      func_0x00007b4a(0);
      func_0x000067e0(0);
      func_0x00006816(0xb7,0xb7,8,8);
      func_0x0000d966();
      return;
    }
    local_16 = 0;
    uVar2 = *local_10;
    uVar3 = *local_c;
    do {
      if (local_16 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00000815
                    // WARNING: Treating indirect jump as call
        (**(code **)(local_16 * 2 + MEM(0xaa00)))();
        return;
      }
      iVar4 = FUN_0000_0340(uVar2,uVar3);
      if (iVar4 != 0) {
        *local_4 = uVar3;
        local_4 = local_4 + 1;
        *local_6 = uVar2;
        local_6 = local_6 + 1;
        if ((undefined *)MEM(0xa627) < local_4) {
          local_4 = (undefined *)MEM(0xa528);
          local_6 = (undefined *)MEM(0xa628);
        }
      }
      local_16 = local_16 + 1;
    } while ((int)local_16 < 8);
    local_c = local_c + 1;
    local_10 = local_10 + 1;
    if ((undefined *)MEM(0xa627) < local_c) {
      local_c = (undefined *)MEM(0xa528);
      local_10 = (undefined *)MEM(0xa628);
    }
  } while( true );
}



void FUN_0000_0844(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  byte local_a;
  int local_4;
  
  uVar2 = (uint)*(byte *)DATA_OVL(0x3850);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if ((uint)*(byte *)(uVar3 + DATA_OVL(0x384a)) == (*(byte *)SAVED_GAM(0x02ed) & 0xf) * 0x10 + param_1) {
        return;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  uVar2 = (uint)*(byte *)SAVED_GAM(0x02ed);
  local_4 = uVar2 - 0x21;
  if (0 < local_4) {
    local_4 = uVar2 - 0x22;
  }
  uVar2 = local_4 * 0x10 + param_1;
  uVar3 = (int)uVar2 >> 0xf;
  local_a = (byte)uVar2;
  pbVar1 = (byte *)((((int)((uVar2 ^ uVar3) - uVar3) >> 3 ^ uVar3) - uVar3) + SAVED_GAM(0x033a));
  *pbVar1 = *pbVar1 | '\x01' << (local_a & 7);
  return;
}



bool FUN_0000_08d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined2 unaff_DS;
  byte local_c;
  int local_6;
  
  uVar1 = (uint)*(byte *)SAVED_GAM(0x02ed);
  local_6 = uVar1 - 0x21;
  if (0 < local_6) {
    local_6 = uVar1 - 0x22;
  }
  uVar1 = local_6 * 0x10 + param_1;
  uVar2 = (int)uVar1 >> 0xf;
  local_c = (byte)uVar1;
  return (*(byte *)((((int)((uVar1 ^ uVar2) - uVar2) >> 3 ^ uVar2) - uVar2) + SAVED_GAM(0x033a)) &
         '\x01' << (local_c & 7)) != 0;
}



void __cdecl16near FUN_0000_093a(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  pbVar4 = (byte *)SAVED_GAM(0x03b4);
  iVar5 = MEM(0x0200);
  do {
    bVar2 = *pbVar4;
    if ((bVar2 & 0xf0) == 0xf0) {
      iVar3 = FUN_0000_08d4(bVar2 & 0xf);
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



void FUN_0000_097e(int param_1,char param_2)

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
    *(undefined *)(local_6 + local_4 + MEM(0xad14)) = 0xff;
    local_4 = local_4 + local_a;
    local_6 = local_6 + local_c * 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if ((param_1 == 0) && (param_2 == -0x20)) {
    uVar1 = *(undefined *)DATA_OVL(0x164a);
    *(undefined *)MEM(0xae19) = uVar1;
    *(undefined *)MEM(0xad59) = uVar1;
  }
  if ((param_1 == 3) && (param_2 == -0x20)) {
    uVar1 = *(undefined *)DATA_OVL(0x164a);
    *(undefined *)MEM(0xadbc) = uVar1;
    *(undefined *)MEM(0xadb6) = uVar1;
  }
  return;
}



void FUN_0000_0a48(int param_1)

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
    *(undefined *)(local_6 + local_4 + MEM(0xad14)) = *(undefined *)DATA_OVL(0x164b);
    local_4 = local_4 + local_a;
    local_6 = local_6 + local_c * 0x20;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_0000_0aee(int param_1)

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
    goto LAB_0000_0b25;
  }
  if (param_1 == 1) {
    local_4 = 9;
  }
  else {
    if (param_1 == 2) {
      local_a = 1;
      local_4 = 2;
      local_6 = 9;
      goto LAB_0000_0b25;
    }
    if (param_1 != 3) goto LAB_0000_0b25;
    local_4 = 1;
  }
  local_c = 1;
  local_6 = 2;
LAB_0000_0b25:
  iVar1 = local_6 << 5;
  iVar2 = 7;
  do {
    *(undefined *)(iVar1 + local_4 + MEM(0xad14)) = *(undefined *)DATA_OVL(0x164b);
    local_4 = local_4 + local_a;
    iVar1 = iVar1 + local_c * 0x20;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_0000_0b9e(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  uint local_6;
  uint local_4;
  
  local_4 = (uint)*(byte *)SAVED_GAM(0x02f0);
  local_6 = (uint)*(byte *)SAVED_GAM(0x02f1);
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
  bVar1 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02ef) * 0x40 + (local_6 & 7) * 8 + (local_4 & 7) + SAVED_GAM(0x03b4)) &
          0xf0;
  if (bVar1 < 0xa0) {
    FUN_0000_0aee(param_1);
  }
  if (((bVar1 == 0xb0) || (bVar1 == 0xc0)) || (bVar1 == 0xd0)) {
    FUN_0000_097e(param_1,*(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                                    (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 +
                                   SAVED_GAM(0x03b4)) & 0xf0);
  }
  else {
    FUN_0000_0a48(param_1);
  }
  return;
}



void __cdecl16near FUN_0000_0c6c(void)

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
  
  puVar7 = (undefined *)MEM(0xad34);
  uVar2 = *(undefined *)DATA_OVL(0x164a);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = uVar2;
  }
  puVar7 = (undefined *)MEM(0xae34);
  uVar2 = *(undefined *)DATA_OVL(0x164a);
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar3 = puVar7;
    puVar7 = puVar7 + 1;
    *puVar3 = uVar2;
  }
  puVar8 = (undefined *)MEM(0xad15);
  puVar7 = (undefined *)MEM(0xad1d);
  do {
    uVar2 = *(undefined *)DATA_OVL(0x164a);
    *puVar7 = uVar2;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 0x20;
    puVar7 = puVar7 + 0x20;
  } while (puVar7 < (undefined *)MEM(0xae7d));
  *(undefined *)MEM(0xae5e) = 0xff;
  *(undefined *)MEM(0xae54) = 0xff;
  *(undefined *)MEM(0xad1e) = 0xff;
  *(undefined *)MEM(0xad14) = 0xff;
  bVar4 = *(byte *)((uint)*(byte *)SAVED_GAM(0x02f0) +
                    (*(uint *)SAVED_GAM(0x02ef) & 0xff) * 0x40 + (uint)*(byte *)SAVED_GAM(0x02f1) * 8 + SAVED_GAM(0x03b4));
  bVar1 = bVar4 & 0xf0;
  if ((bVar1 != 0) && (bVar1 < 0x80)) {
    bVar4 = bVar4 >> 4;
    cVar5 = *(char *)(bVar4 + MEM(0x244a));
    if (cVar5 != '\0') {
      *(char *)MEM(0xadb9) = cVar5;
    }
    if (bVar4 == 3) {
      *(undefined *)DATA_OVL(0x164c) = 1;
      func_0x0000cd2c(0);
    }
    else {
      *(undefined *)DATA_OVL(0x164c) = 0;
    }
  }
  iVar6 = 0;
  do {
    FUN_0000_0b9e(iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return;
}



void __cdecl16near FUN_0000_0d3e(void)

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
  
  puVar7 = (undefined *)MEM(0xad14);
  do {
    uVar3 = *(undefined *)DATA_OVL(0x164b);
    puVar10 = puVar7;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar2 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar2 = uVar3;
    }
    puVar7 = puVar7 + 0x20;
  } while (puVar7 < (undefined *)MEM(0xae74));
  if ((*(byte *)SAVED_GAM(0x02fb) & 4) != 0) {
    *(undefined *)MEM(0xadb9) = 0xb3;
  }
  FUN_0000_0c6c();
  iVar6 = 0;
  do {
    *(undefined *)(iVar6 + MEM(0xae27)) = 0xff;
    *(undefined *)(iVar6 + MEM(0xae1f)) = 0xff;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  puVar7 = (undefined *)MEM(0xad7f);
  local_a = (undefined *)MEM(0xad5f);
  local_6 = (undefined *)MEM(0xad9f);
  local_e = (undefined *)MEM(0xad3f);
  iVar6 = 0;
  bVar4 = *(byte *)SAVED_GAM(0x02fb);
  do {
    if ((bVar4 & 4) == 0) {
      *puVar7 = *(undefined *)(iVar6 + MEM(0x2470));
      *local_a = *(undefined *)(iVar6 + MEM(0x246a));
      *local_6 = *(undefined *)(iVar6 + MEM(0x245e));
      *local_e = *(undefined *)(iVar6 + MEM(0x2464));
    }
    else {
      uVar3 = *(undefined *)(iVar6 + MEM(0x2452));
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
  bVar4 = *(byte *)SAVED_GAM(0x02fb);
  do {
    if ((bVar4 & 4) == 0) {
      *puVar7 = *(undefined *)(iVar6 + MEM(0x2464));
      *local_a = *(undefined *)(iVar6 + MEM(0x245e));
      *local_6 = *(undefined *)(iVar6 + MEM(0x246a));
      *local_e = *(undefined *)(iVar6 + MEM(0x2470));
    }
    else {
      uVar3 = *(undefined *)(iVar6 + MEM(0x2458));
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
  local_8 = (undefined *)MEM(0xaddf);
  local_c = (undefined *)MEM(0xadff);
  iVar6 = 0;
  cVar1 = *(char *)MEM(0x6603);
  bVar4 = *(byte *)SAVED_GAM(0x02fb);
  do {
    if ((bVar4 & 4) == 0) {
      if (cVar1 == '\0') {
        *local_8 = *(undefined *)(iVar6 + MEM(0x2476));
        uVar3 = *(undefined *)(iVar6 + MEM(0x2496));
      }
      else if (cVar1 == '\x01') {
        *local_8 = *(undefined *)(iVar6 + MEM(0x2486));
        uVar3 = *(undefined *)(iVar6 + MEM(0x24a6));
      }
      else if (cVar1 == '\x02') {
        *local_8 = *(undefined *)(iVar6 + MEM(0x24a6));
        uVar3 = *(undefined *)(iVar6 + MEM(0x2486));
      }
      else {
        if (cVar1 != '\x03') goto LAB_0000_0ea5;
        *local_8 = *(undefined *)(iVar6 + MEM(0x2496));
        uVar3 = *(undefined *)(iVar6 + MEM(0x2476));
      }
      *local_c = uVar3;
    }
    else {
      *local_c = *(undefined *)(iVar6 + MEM(0x24c6));
      *local_8 = *(undefined *)(iVar6 + MEM(0x24b6));
    }
LAB_0000_0ea5:
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
        iVar5 = func_0x00007e02(0xf,0);
        local_4 = *piVar9;
        *piVar9 = local_2e[iVar5];
        local_2e[iVar5] = local_4;
        *(undefined *)(iVar6 + MEM(0xadbf)) = 0;
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
      if ((*(byte *)SAVED_GAM(0x02fb) & 4) == 0) {
        bVar4 = *(byte *)SAVED_GAM(0x06c1);
      }
      else {
        iVar6 = func_0x00007e02(7,0);
        bVar4 = *(byte *)(iVar6 + MEM(0x173c));
      }
      pcVar8 = (char *)((uint)bVar4 * 8 + MEM(0x13c2));
      local_4 = func_0x00007e02(*pcVar8,1);
      if ((*pcVar8 == '\b') || (*pcVar8 == '\x10')) {
        local_4 = (uint)*(byte *)((uint)bVar4 * 8 + MEM(0x13c2));
      }
      if (0 < (int)local_4) {
        piVar9 = local_2e;
        do {
          *(char *)(*piVar9 + MEM(0xadbf)) = bVar4 * '\x04' + '@';
          piVar9 = piVar9 + 1;
        } while (piVar9 != local_2e + local_4);
      }
      return;
    }
  } while( true );
}



void FUN_0000_109e(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(char *)SAVED_GAM(0x02ed) != '\0') {
    if ((*(byte *)DATA_OVL(0x164d) & 2) != 0) {
      func_0x00006d9e();
    }
    if ((*(byte *)DATA_OVL(0x164d) & 1) == 0) {
      do {
        iVar1 = func_0x0000691e(*(undefined2 *)((uint)*(byte *)MEM(0x6604) * 2 + MEM(0x25f2)));
        *(int *)MEM(0xa9c0) = iVar1;
      } while (iVar1 == 0);
      do {
        iVar1 = func_0x0000691e(*(undefined2 *)MEM(0x25f2));
        *(int *)MEM(0xa9c4) = iVar1;
      } while (iVar1 == 0);
    }
    *(undefined *)DATA_OVL(0x164d) = 1;
    if (param_1 != 0) {
      *(undefined *)SAVED_GAM(0x06bd) = 0;
      *(undefined *)SAVED_GAM(0x06bc) = 0;
      *(undefined *)SAVED_GAM(0x06bf) = 0xff;
      *(undefined *)SAVED_GAM(0x06be) = 0xff;
      *(undefined *)SAVED_GAM(0x06c1) = 0xff;
    }
    func_0x000067e0(0);
    func_0x00006816(0xb7,0xb7,8,8);
    func_0x00006992(1);
    func_0x00006816(0xb7,0xb7,8,8);
    func_0x00006992(0);
  }
  return;
}



void FUN_0000_117e(int param_1,int param_2)

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
  if (param_1 == 1) goto LAB_0000_1248;
  cVar3 = *(char *)MEM(0x6603);
  if (cVar3 == '\0') {
LAB_0000_11bc:
    local_4 = 3;
  }
  else if (cVar3 == '\x01') {
    local_4 = 2;
  }
  else if (cVar3 == '\x03') {
    local_4 = 1;
  }
  else if (cVar3 == '\x05') goto LAB_0000_11bc;
  func_0x0000c6a6();
  local_10 = 0;
  uVar5 = (uint)*(byte *)SAVED_GAM(0x02b5);
  if (uVar5 != 0) {
    puVar6 = (undefined *)DATA_OVL(0x1550);
    puVar8 = (undefined *)SAVED_GAM(0x06b6);
    local_20 = (undefined *)DATA_OVL(0x1551);
    local_22 = (undefined *)SAVED_GAM(0x06b7);
    iVar7 = 0x11;
    iVar4 = 0xb;
    do {
      uVar1 = *(undefined *)(local_4 * 0x20 + iVar4 + MEM(0xad14));
      *puVar8 = uVar1;
      *puVar6 = uVar1;
      uVar1 = *(undefined *)(local_4 * 0x20 + iVar7 + MEM(0xad14));
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
LAB_0000_1248:
  if ((0 < param_1) && (((0xef < param_2 && (param_1 == 3)) || (param_1 < 3)))) {
    local_c = 0xb;
    local_e = 0xb;
    local_4 = 0xb;
    iVar7 = 0;
    do {
      iVar4 = func_0x00007e02(7,0);
      local_8[iVar7] = *(byte *)(iVar4 + DATA_OVL(0x386e));
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    local_22 = (undefined *)0x10;
    do {
      bVar2 = *(byte *)(local_4 + MEM(0xadb4));
      if (bVar2 != 0) {
        if (((bVar2 < 0x40) || ((bVar2 & 0xfc) == 0xb4)) || ((bVar2 & 0xfc) == 0xe8)) {
          local_14 = 2;
          uVar5 = (uint)bVar2;
        }
        else {
          local_14 = 0;
          uVar5 = bVar2 - 0x40 >> 2;
        }
        if (bVar2 & 0xfc == 0xec) {  // Whirlpool
          uVar5 = local_8[bVar2 & 3];
        }
        iVar7 = func_0x0000c276(*(undefined *)SAVED_GAM(0x02ef),*(undefined *)(local_e + MEM(0xadf4)),
                                *(undefined *)(local_c + MEM(0xadd4)),local_14,uVar5);
        if (local_14 == 2) {
          if (uVar5 == 1) {
            cVar3 = *(char *)SAVED_GAM(0x02ef) * '\x03' + '\a';
          }
          else if (uVar5 == 2) {
            cVar3 = func_0x00007e02((uint)*(byte *)SAVED_GAM(0x02ef) * 10 + 10,1);
          }
          else {
            if (0xf < uVar5) goto LAB_0000_1385;
            cVar3 = func_0x00007e02(*(byte *)(uVar5 + DATA_OVL(0x384f)) - 1,0);
            cVar3 = *(char *)(uVar5 + DATA_OVL(0x385d)) + cVar3;
          }
          *(char *)(iVar7 * 8 + SAVED_GAM(0x06b9)) = cVar3;
        }
      }
LAB_0000_1385:
      local_4 = local_4 + 1;
      local_c = local_c + 1;
      local_e = local_e + 1;
      local_22 = (undefined *)((int)local_22 + -1);
    } while (local_22 != (undefined *)0x0);
  }
  return;
}


