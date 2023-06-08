typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


undefined2 FUN_0000_002c(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  func_0x00003670(DATA_OVL(0x4d94));
  uVar1 = FUN_0000_0000();
  if (uVar1 < *(byte *)(*(int *)DATA_OVL(0x0c4a) + DATA_OVL(0x4dd4))) {
    uVar2 = 1;
  }
  else {
    func_0x00003670(DATA_OVL(0x4d97));
    if (param_1 == 0xc) {
      uVar2 = DATA_OVL(0x4da5);
    }
    else {
      uVar2 = DATA_OVL(0x4dac);
    }
    func_0x00003670(uVar2);
    func_0x00003670(DATA_OVL(0x4db0));
    uVar2 = 0;
  }
  return uVar2;
}



undefined2 FUN_0000_0072(undefined2 param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  undefined uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  undefined2 unaff_DS;
  undefined4 uVar12;
  uint local_a;
  
  func_0x000034da(0x52);
  iVar6 = FUN_0000_002c(param_2);
  if (iVar6 == 0) {
    param_1 = MEM(0xfffe);
  }
  else {
    func_0x000034da(0x22);
    *(int *)DATA_OVL(0x0c4e) = (uint)*(byte *)(*(int *)DATA_OVL(0x0c4a) + DATA_OVL(0x4d8e)) * (uint)*(byte *)SAVED_GAM(0x02b5);
    iVar6 = *(int *)DATA_OVL(0x0c4e);
    iVar10 = iVar6 >> 0xf;
    uVar8 = param_3 * 3;
    uVar12 = func_0x00002262(-(uVar8 - 100),
                             -((((int)uVar8 >> 0xf) - (uint)(uVar8 < 100)) +
                              (uint)(uVar8 - 100 != 0)),iVar6,iVar10,100,0);
    iVar6 = func_0x000022b6(uVar12);
    piVar1 = (int *)DATA_OVL(0x0c4e);
    *piVar1 = *piVar1 + iVar6;
    func_0x00009dd6(*(undefined2 *)(*(int *)DATA_OVL(0x0c4a) * 2 + DATA_OVL(0x4e7e)));
    func_0x00003670(DATA_OVL(0x4dda));
    cVar5 = func_0x00009d82();
    func_0x00003670(DATA_OVL(0x4df0));
    if (cVar5 == 'Y') {
      if (*(int *)SAVED_GAM(0x0204) < *(int *)DATA_OVL(0x0c4e)) {
        func_0x00003670(DATA_OVL(0x4df3));
        func_0x00009d8e(DATA_OVL(0x4e17));
      }
      else {
        piVar1 = (int *)SAVED_GAM(0x0204);
        *piVar1 = *piVar1 - *(int *)DATA_OVL(0x0c4e);
        func_0x00009dfa();
        func_0x00004720();
        func_0x00003670(DATA_OVL(0x4e23));
        if (param_2 == 0xc) {
          uVar7 = DATA_OVL(0x4e3c);
        }
        else {
          uVar7 = DATA_OVL(0x4e43);
        }
        func_0x00003670(uVar7);
        func_0x00009d8e(DATA_OVL(0x4e47));
        func_0x00005906(10);
        func_0x000057ec(*(undefined *)SAVED_GAM(0x03ab),*(undefined *)SAVED_GAM(0x03aa),*(undefined *)SAVED_GAM(0x03a9));
        iVar6 = *(int *)DATA_OVL(0x0c4a);
        *(undefined *)SAVED_GAM(0x02f0) = *(undefined *)(iVar6 + DATA_OVL(0x4e8a));
        *(undefined *)SAVED_GAM(0x02f1) = *(undefined *)(iVar6 + DATA_OVL(0x4e90));
        *(undefined *)MEM(0x24e6) = 1;
        uVar3 = *(undefined *)SAVED_GAM(0x02d5);
        uVar8 = (uint)*(byte *)SAVED_GAM(0x02b5);
        if (uVar8 != 0) {
          pcVar11 = (char *)SAVED_GAM(0x000d);
          uVar9 = 0;
          do {
            if (*pcVar11 == 'G') {
              *pcVar11 = 'S';
            }
            pcVar11 = pcVar11 + 0x20;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        func_0x00004720();
        func_0x00007730();
        func_0x00003670(DATA_OVL(0x4e54));
        iVar6 = 0xc;
        do {
          func_0x00006d9c(5);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        while (*(char *)SAVED_GAM(0x02d9) != '\x06') {
          func_0x00005906(1,iVar10);
          func_0x00005e2c();
          func_0x00004720();
          iVar10 = MEM(0x01de);
          func_0x00006d9c(9);
          if ((*(char *)SAVED_GAM(0x02d9) == '\x14') || (*(char *)SAVED_GAM(0x02d9) == '\x05')) {
            func_0x000098ba();
          }
        }
        func_0x00003670(DATA_OVL(0x4e61));
        func_0x000098ae();
        local_a = 0;
        if (*(char *)SAVED_GAM(0x02b5) != '\0') {
          iVar6 = SAVED_GAM(0x0002);
          do {
            if (*(char *)(iVar6 + 0xb) != 'D') {
              *(undefined2 *)(iVar6 + 0x10) = *(undefined2 *)(iVar6 + 0x12);
              cVar5 = *(char *)(iVar6 + 10);
              if (cVar5 == 'A') {
LAB_0000_0233:
                bVar4 = *(byte *)(iVar6 + 0xe);
LAB_0000_0236:
                *(byte *)(iVar6 + 0xf) = bVar4;
              }
              else {
                if (cVar5 == 'B') {
                  bVar4 = *(byte *)(iVar6 + 0xe) >> 1;
                  goto LAB_0000_0236;
                }
                if (cVar5 == 'M') goto LAB_0000_0233;
              }
              if (*(char *)(iVar6 + 0xb) == 'P') {
                *(undefined *)(iVar6 + 0xb) = 0x44;
                *(undefined2 *)(iVar6 + 0x10) = 0;
                func_0x000034da(10);
                func_0x00003670(iVar6);
                func_0x00003670(DATA_OVL(0x4e6b));
              }
              else if (*(char *)(iVar6 + 0xb) == 'S') {
                *(undefined *)(iVar6 + 0xb) = 0x47;
              }
            }
            iVar6 = iVar6 + 0x20;
            local_a = local_a + 1;
          } while (local_a < *(byte *)SAVED_GAM(0x02b5));
        }
        *(undefined *)SAVED_GAM(0x02d5) = uVar3;
        pcVar2 = (char *)SAVED_GAM(0x02f0);
        *pcVar2 = *pcVar2 + '\x01';
        *(undefined *)MEM(0x24e6) = 1;
        func_0x00004720();
        param_1 = MEM(0xffff);
      }
    }
  }
  return param_1;
}



undefined2 FUN_0000_02ae(undefined2 param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar16;
  undefined2 local_22 [16];
  
  func_0x000034da(0x4c);
  iVar9 = FUN_0000_002c(param_2);
  if (iVar9 != 0) {
    if (*(char *)SAVED_GAM(0x02b5) == '\x01') {
      func_0x00009dd6(MEM(0x26e8));
      param_1 = MEM(0xffff);
    }
    else {
      uVar6 = param_3 * 3;
      do {
        bVar7 = true;
        func_0x00009d8e(DATA_OVL(0x4e96));
        uVar10 = func_0x00004cae();
        if (uVar10 == MEM(0xffff)) {
          func_0x00003670(DATA_OVL(0x4eb0));
          param_1 = MEM(0xfffe);
        }
        else {
          func_0x00003670(DATA_OVL(0x4eb9));
          if (uVar10 == 0) {
            func_0x00003670(DATA_OVL(0x4ebc));
            if (2 < *(byte *)SAVED_GAM(0x02b5)) {
              func_0x000034da(0x73);
            }
            func_0x00003670(DATA_OVL(0x4ec7));
            bVar7 = false;
          }
          else if (*(char *)(uVar10 * 0x20 + SAVED_GAM(0x000d)) == 'D') {
            func_0x00009dd6(MEM(0x2723));
            param_1 = MEM(0xffff);
          }
          else {
            *(int *)DATA_OVL(0x0c4e) = (uint)*(byte *)(*(int *)DATA_OVL(0x0c4a) + DATA_OVL(0x4d8e)) * 10;
            iVar9 = *(int *)DATA_OVL(0x0c4e);
            uVar16 = func_0x00002262(-(uVar6 - 100),
                                     -((((int)uVar6 >> 0xf) - (uint)(uVar6 < 100)) +
                                      (uint)(uVar6 - 100 != 0)),iVar9,iVar9 >> 0xf,100,0);
            iVar9 = func_0x000022b6(uVar16);
            piVar1 = (int *)DATA_OVL(0x0c4e);
            *piVar1 = *piVar1 + iVar9;
            func_0x00003670(DATA_OVL(0x4edf));
            func_0x00009d8e(DATA_OVL(0x4f10));
            func_0x00003670(DATA_OVL(0x4f34));
            cVar8 = func_0x00009d82();
            func_0x00003670(DATA_OVL(0x4f4a));
            if (cVar8 == 'Y') {
              param_1 = 1;
              if (uVar10 == *(byte *)SAVED_GAM(0x02d5)) {
                *(undefined *)SAVED_GAM(0x02d5) = 0xff;
              }
              else {
                bVar3 = *(byte *)SAVED_GAM(0x02d5);
                if ((uVar10 < bVar3) && (bVar3 != 0xff)) {
                  pcVar2 = (char *)SAVED_GAM(0x02d5);
                  *pcVar2 = *pcVar2 + -1;
                }
              }
              iVar9 = uVar10 * 0x20;
              *(undefined *)(iVar9 + SAVED_GAM(0x0021)) = *(undefined *)SAVED_GAM(0x02ed);
              *(undefined *)(iVar9 + SAVED_GAM(0x0019)) = 0;
              puVar12 = local_22;
              puVar14 = (undefined2 *)(iVar9 + SAVED_GAM(0x0002));
              for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar5 = puVar12;
                puVar12 = puVar12 + 1;
                puVar4 = puVar14;
                puVar14 = puVar14 + 1;
                *puVar5 = *puVar4;
              }
              if ((int)uVar10 < 0xf) {
                puVar12 = (undefined2 *)(uVar10 * 0x20 + SAVED_GAM(0x0002));
                puVar14 = (undefined2 *)(uVar10 * 0x20 + SAVED_GAM(0x0022));
                iVar9 = 0xf - uVar10;
                do {
                  puVar13 = puVar14;
                  puVar15 = puVar12;
                  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
                    puVar5 = puVar15;
                    puVar15 = puVar15 + 1;
                    puVar4 = puVar13;
                    puVar13 = puVar13 + 1;
                    *puVar5 = *puVar4;
                  }
                  puVar12 = puVar12 + 0x10;
                  puVar14 = puVar14 + 0x10;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              puVar14 = (undefined2 *)SAVED_GAM(0x01e2);
              puVar12 = local_22;
              for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
                puVar5 = puVar14;
                puVar14 = puVar14 + 1;
                puVar4 = puVar12;
                puVar12 = puVar12 + 1;
                *puVar5 = *puVar4;
              }
              pcVar2 = (char *)SAVED_GAM(0x02b5);
              *pcVar2 = *pcVar2 + -1;
              func_0x00004720();
              func_0x00009d8e(DATA_OVL(0x4f4d));
            }
          }
        }
      } while (!bVar7);
    }
  }
  return param_1;
}



int FUN_0000_0494(int param_1)

{
  undefined2 unaff_DS;
  
  do {
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return 0;
    }
  } while (*(char *)(param_1 * 0x20 + SAVED_GAM(0x0021)) != *(char *)SAVED_GAM(0x02ed));
  return param_1;
}



int FUN_0000_04b6(int param_1)

{
  undefined2 unaff_DS;
  
  do {
    param_1 = param_1 + 1;
    if (0xf < param_1) break;
  } while (*(char *)(param_1 * 0x20 + SAVED_GAM(0x0021)) != *(char *)SAVED_GAM(0x02ed));
  if (param_1 == 0x10) {
    param_1 = 0;
  }
  return param_1;
}



undefined2 FUN_0000_04e6(undefined2 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined2 uVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  char *pcVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar18;
  int local_3a;
  int local_34;
  uint local_2c;
  undefined2 local_24 [16];
  int local_4;
  
  local_4 = FUN_0000_0000();
  if (*(char *)SAVED_GAM(0x02b5) == '\x06') {
    func_0x00003670(DATA_OVL(0x4f67));
    return param_1;
  }
  if (local_4 == 0) {
    func_0x00009d8e(DATA_OVL(0x4f8a));
    return param_1;
  }
  if (local_4 < 2) {
    local_34 = FUN_0000_04b6(0);
  }
  else {
    func_0x00003670(DATA_OVL(0x4fb7));
    func_0x000039b4(1);
    func_0x00006d1c();
    func_0x00003a42(9,0x26,1,0x18,1);
    func_0x000034da(0xff);
    func_0x00003a42(9,0x27,1,0x18,1);
    func_0x000034da(0x10);
    iVar9 = 0xd;
    do {
      func_0x000034da(0x11);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    func_0x000034da(0x13);
    iVar9 = 1;
    do {
      func_0x00003a12(iVar9,0);
      func_0x000034da(0x17);
      func_0x00003a12(iVar9,0xe);
      func_0x000034da(0x17);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    func_0x000034da(10);
    func_0x000034da(0x14);
    iVar9 = 0xd;
    do {
      func_0x000034da(0x15);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    func_0x000034da(0x16);
    func_0x00003a12(1,1);
    func_0x00003670(DATA_OVL(0x4fd0));
    uVar11 = 1;
    func_0x00003a12(2,1);
    func_0x00003670(DATA_OVL(0x4fda));
    pcVar12 = (char *)SAVED_GAM(0x0041);
    iVar9 = SAVED_GAM(0x0022);
    local_3a = 0xf;
    do {
      if (*pcVar12 == *(char *)SAVED_GAM(0x02ed)) {
        uVar8 = func_0x00003b0e(4);
        func_0x00003a12(uVar8,uVar11);
        func_0x00003670(iVar9);
        func_0x000034da(10);
      }
      pcVar12 = pcVar12 + 0x20;
      iVar9 = iVar9 + 0x20;
      local_3a = local_3a + -1;
    } while (local_3a != 0);
    func_0x000039b4(2);
    bVar6 = false;
    local_34 = FUN_0000_04b6(0);
    iVar9 = 0x28;
    func_0x00002890(*(undefined2 *)MEM(0x13b0));
    do {
      func_0x000029a6(iVar9 + 7,MEM(0x0131),iVar9,0xc6);
      do {
        bVar7 = func_0x0000448c();
        if (bVar7 == 3) {
LAB_0000_067c:
          iVar13 = FUN_0000_0494(local_34);
          if (iVar13 != 0) {
            func_0x000029a6(iVar9 + 7,MEM(0x0131),iVar9,0xc6);
            iVar9 = iVar9 + -8;
            local_34 = iVar13;
          }
        }
        else if (bVar7 < 4) {
          if (bVar7 == 1) goto LAB_0000_067c;
          if (bVar7 == 2) goto LAB_0000_06a4;
LAB_0000_06f0:
          iVar13 = 0;
        }
        else if (bVar7 == 4) {
LAB_0000_06a4:
          iVar13 = FUN_0000_04b6(local_34);
          if (iVar13 != 0) {
            func_0x000029a6(iVar9 + 7,MEM(0x0131),iVar9,0xc6);
            iVar9 = iVar9 + 8;
            local_34 = iVar13;
          }
        }
        else {
          if (bVar7 != 0xd) {
            if (bVar7 == 0x1b) {
              func_0x00003670(DATA_OVL(0x4fe8));
              local_34 = 0;
            }
            else if (bVar7 != 0x20) goto LAB_0000_06f0;
          }
          iVar13 = 1;
          bVar6 = true;
        }
      } while (iVar13 == 0);
    } while (!bVar6);
    func_0x00006d5c();
    func_0x00004720();
  }
  if (local_34 == 0) {
    return param_1;
  }
  local_2c = (uint)*(byte *)(local_34 * 0x20 + SAVED_GAM(0x0019));
  if (local_2c == 0) {
    local_2c = 1;
  }
  *(int *)DATA_OVL(0x0c4e) = (uint)*(byte *)(*(int *)DATA_OVL(0x0c4a) + DATA_OVL(0x4d8e)) * 10;
  iVar9 = *(int *)DATA_OVL(0x0c4e);
  uVar10 = param_2 * 3;
  uVar18 = func_0x00002262(-(uVar10 - 100),
                           -((((int)uVar10 >> 0xf) - (uint)(uVar10 < 100)) +
                            (uint)(uVar10 - 100 != 0)),iVar9,iVar9 >> 0xf,100,0);
  iVar9 = func_0x000022b6(uVar18);
  piVar1 = (int *)DATA_OVL(0x0c4e);
  *piVar1 = *piVar1 + iVar9;
  *(int *)DATA_OVL(0x0c4e) = local_2c * *(int *)DATA_OVL(0x0c4e);
  func_0x00009d8e(DATA_OVL(0x4ff1));
  if (*(int *)SAVED_GAM(0x0204) < *(int *)DATA_OVL(0x0c4e)) {
    func_0x00009dd6(MEM(0x275a));
    func_0x000098f6();
    return MEM(0xffff);
  }
  piVar1 = (int *)SAVED_GAM(0x0204);
  *piVar1 = *piVar1 - *(int *)DATA_OVL(0x0c4e);
  func_0x00009dfa();
  func_0x00004720();
  puVar14 = local_24;
  puVar16 = (undefined2 *)(local_34 * 0x20 + SAVED_GAM(0x0002));
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar14;
    puVar14 = puVar14 + 1;
    puVar3 = puVar16;
    puVar16 = puVar16 + 1;
    *puVar4 = *puVar3;
  }
  uVar10 = (uint)*(byte *)SAVED_GAM(0x02b5);
  if ((int)uVar10 < local_34) {
    puVar14 = (undefined2 *)(local_34 * 0x20 + SAVED_GAM(0x0002));
    puVar16 = (undefined2 *)(local_34 * 0x20 + MEM(0x5588));
    local_34 = local_34 - uVar10;
    do {
      puVar15 = puVar16;
      puVar17 = puVar14;
      for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar4 = puVar17;
        puVar17 = puVar17 + 1;
        puVar3 = puVar15;
        puVar15 = puVar15 + 1;
        *puVar4 = *puVar3;
      }
      puVar14 = puVar14 + -0x10;
      puVar16 = puVar16 + -0x10;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  puVar16 = (undefined2 *)((uint)*(byte *)SAVED_GAM(0x02b5) * 0x20 + SAVED_GAM(0x0002));
  puVar14 = local_24;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar4 = puVar16;
    puVar16 = puVar16 + 1;
    puVar3 = puVar14;
    puVar14 = puVar14 + 1;
    *puVar4 = *puVar3;
  }
  bVar7 = *(byte *)SAVED_GAM(0x02b5);
  pcVar2 = (char *)SAVED_GAM(0x02b5);
  *pcVar2 = *pcVar2 + '\x01';
  iVar9 = (uint)bVar7 * 0x20;
  *(undefined *)(iVar9 + SAVED_GAM(0x0021)) = 0;
  if (*(char *)(iVar9 + SAVED_GAM(0x000d)) == 'P') {
    *(undefined *)(iVar9 + SAVED_GAM(0x000d)) = 0x44;
    *(undefined2 *)(iVar9 + SAVED_GAM(0x0012)) = 0;
    uVar11 = MEM(0x5005);
    goto LAB_0000_088b;
  }
  *(undefined2 *)(iVar9 + SAVED_GAM(0x0012)) = *(undefined2 *)(iVar9 + SAVED_GAM(0x0014));
  cVar5 = *(char *)(iVar9 + SAVED_GAM(0x000c));
  if (cVar5 == 'A') {
LAB_0000_0880:
    bVar7 = *(byte *)(iVar9 + SAVED_GAM(0x0010));
LAB_0000_0885:
    *(byte *)(iVar9 + SAVED_GAM(0x0011)) = bVar7;
  }
  else {
    if (cVar5 == 'B') {
      bVar7 = *(byte *)(iVar9 + SAVED_GAM(0x0010)) >> 1;
      goto LAB_0000_0885;
    }
    if (cVar5 == 'M') goto LAB_0000_0880;
  }
  uVar11 = MEM(0x5028);
LAB_0000_088b:
  func_0x00003670(uVar11);
  func_0x00009d8e(MEM(0x5055));
  func_0x00004720();
  return 1;
}



void FUN_0000_08b4(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  bool bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  char local_e;
  int local_a;
  
  local_a = 0;
  bVar3 = false;
  param_1 = param_1 * 0x20;
  uVar1 = *(undefined *)(param_1 + SAVED_GAM(0x0010));
  uVar2 = *(undefined *)(param_1 + SAVED_GAM(0x000b));
  *(undefined *)SAVED_GAM(0x02e8) = 0;
  *(undefined *)SAVED_GAM(0x02d4) = 0;
  func_0x00004720();
  func_0x00009e06();
  while (!bVar3) {
    do {
      local_e = func_0x0000448c(param_1);
      if (local_e == ' ') {
        local_e = 'N';
      }
      if (local_e == 'N') {
        uVar4 = MEM(0x505f);
LAB_0000_08fb:
        func_0x00003670(uVar4);
      }
      else if (local_e == 'Y') {
        uVar4 = MEM(0x5062);
        goto LAB_0000_08fb;
      }
    } while ((local_e != 'N') && (local_e != 'Y'));
    if (local_e == 'N') break;
    func_0x00009d8e(MEM(0x5066));
    func_0x00003670(MEM(0x508e));
    do {
      local_e = func_0x0000448c();
      iVar5 = local_a;
      if (local_e == ' ') {
LAB_0000_095f:
        bVar3 = true;
        local_a = iVar5;
      }
      else if (local_e == 'L') {
        iVar6 = FUN_0000_02ae(local_a,uVar2,uVar1);
        if (-2 < iVar6) {
          iVar5 = iVar6;
        }
LAB_0000_097f:
        local_a = iVar5;
        if (iVar5 == -1) goto LAB_0000_095f;
      }
      else {
        if (local_e == 'P') {
          iVar5 = FUN_0000_04e6(local_a,uVar1);
          goto LAB_0000_097f;
        }
        if (local_e == 'R') {
          iVar5 = FUN_0000_0072(local_a,uVar2,uVar1);
          if (-2 < iVar5) goto LAB_0000_095f;
        }
        else {
          local_e = '\0';
        }
      }
    } while (local_e == '\0');
    if (!bVar3) {
      func_0x00003670(MEM(0x50bd));
    }
  }
  func_0x00009e12(local_a);
  return;
}


