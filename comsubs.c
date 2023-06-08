#define SPRITE_FLAGS DATA_OVL(0x154c)

undefined2 FUN_0000_0000(int param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 != 0x30) && (param_1 != 0x31)) && (param_1 < 0x33)) {
    iVar1 = func_0x00009ce6(MEM(0xffff),param_3);
    iVar2 = func_0x00009ce6(MEM(0xffff),param_2);
    iVar3 = func_0x000058de();
    if (iVar3 < ((iVar2 - iVar1) + 0x1e) / 2) {
      return 1;
    }
  }
  return 0;
}



void __cdecl16near FUN_0000_0056(void)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  iVar2 = 0;
  pbVar3 = (byte *)SAVED_GAM(0x06b4);
  do {
    if ((*pbVar3 & 0xfc) == 0xe8) {
      iVar1 = func_0x00003eb2(0xff,0);
      if (iVar1 < 0x10) {
        func_0x00009ba2(iVar2 + 1);
      }
    }
    pbVar3 = pbVar3 + 8;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return;
}



void FUN_0000_0094(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((SPRITE_FLAGS[param_1 * 8] & 0x80) == 0) {
    iVar1 = *(int *)((uint)*(byte *)(param_1 * 8 + DATA_OVL(0x154d)) * 2 + MEM(0x1856));
  }
  else {
    iVar1 = (uint)*(byte *)(param_1 * 8 + DATA_OVL(0x154d)) * 0x20 + SAVED_GAM(0x0002);
  }
  func_0x00003670(iVar1);
  return;
}



void FUN_0000_00d2(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(char *)SAVED_GAM(0x02e9) == '\0') {
    FUN_0000_0094(param_1);
    uVar1 = MEM(0x99aa);
  }
  else {
    uVar1 = MEM(0x99a0);
  }
  func_0x00003670(uVar1);
  return;
}



undefined2 FUN_0000_00f4(int param_1)

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
  uVar3 = (uint)*(byte *)(iVar7 + DATA_OVL(0x154d));
  uVar4 = (uint)*(byte *)(iVar7 + DATA_OVL(0x154e));
  if (((*ACTIVE_EFFECT == EFFECT_CROWN) || (*ACTIVE_EFFECT == EFFECT_IN_AN)) ||
     ((SPRITE_FLAGS[iVar7] & 0x80) != 0)) {
LAB_0000_0127:
    uVar5 = 0;
  }
  else {
    if (MONSTER_FLAGS[uVar3 * 2] & MF_POSSESS) == 0) {
LAB_0000_01ca:
      if (((MONSTER_FLAGS[uVar3 * 2] & MF_INVISIBLE) == 0) ||
         (iVar7 = func_0x00003eb2(0xff,0), 0x1f < iVar7)) {
        if ((MONSTER_FLAGS[uVar3 * 2] & MF_GATE_DAEMONS) == 0) ||
             (iVar7 = func_0x00003eb2(0xff,0), 0x1f < iVar7)) ||
            (iVar7 = func_0x00009cb6(), iVar7 == 0)) ||
           ((iVar7 = func_0x00009b96(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),0xd8), iVar7 == 0
            || (iVar7 = func_0x00008326(*(undefined *)SAVED_GAM(0x02ef),*(undefined2 *)SAVED_GAM(0x02d2),
                                        *(undefined2 *)SAVED_GAM(0x02d0),0,0x26), iVar7 == -1))))
        goto LAB_0000_0127;
        func_0x000034da(10);
        FUN_0000_0094(param_1);
        func_0x00003670(MEM(0x99dc));
        func_0x00003fb2(0xf,1000,5000,1,MEM(0x0ac8));
        iVar7 = (uint)*(byte *)(iVar7 * 8 + DATA_OVL(0x154e)) * 8;
        *(undefined *)(iVar7 + SAVED_GAM(0x06b5)) = 0x16;
        *(undefined *)(iVar7 + SAVED_GAM(0x06b4)) = 0x16;
        func_0x00002e88(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0),MEM(0x01d8));
        *(undefined *)(iVar7 + SAVED_GAM(0x06b5)) = 0xd8;
        *(undefined *)(iVar7 + SAVED_GAM(0x06b4)) = 0xd8;
      }
      else {
        func_0x000034da(10);
        FUN_0000_0094(param_1);
        iVar7 = uVar4 * 8;
        if (*(char *)(iVar7 + SAVED_GAM(0x06b5)) == '\0') {
          func_0x00003670(MEM(0x99c2));
          pbVar1 = SPRITE_FLAGS[param_1 * 8];

          *pbVar1 = *pbVar1 & 0xef;
          *(undefined *)(iVar7 + SAVED_GAM(0x06b5)) = *(undefined *)(iVar7 + SAVED_GAM(0x06b4));
        }
        else {
          func_0x00003670(MEM(0x99ce));
          pbVar1 = SPRITE_FLAGS[param_1 * 8];
          *pbVar1 = *pbVar1 | 0x10;
          *(undefined *)(uVar4 * 8 + SAVED_GAM(0x06b5)) = 0;
        }
      }
    }
    else {
      iVar7 = func_0x00003eb2(0x1f,0);
      iVar8 = iVar7 * 8;
      bVar2 = SPRITE_FLAGS[iVar8];
      if (((bVar2 & 0x80) == 0) || ((bVar2 & 0x3d) != 0)) goto LAB_0000_01ca;
      iVar6 = FUN_0000_0000(0,iVar7,param_1);
      if (iVar6 == 0) {
        func_0x000034da(10);
        pbVar1 = SPRITE_FLAGS[iVar8];
        *pbVar1 = *pbVar1 | 1;
        if (*(char *)(iVar8 + DATA_OVL(0x154d)) == *(char *)SAVED_GAM(0x02d5)) {
          *(undefined *)SAVED_GAM(0x02d5) = 0xff;
        }
        func_0x00004720();
        FUN_0000_0094(iVar7);
        func_0x00003670(MEM(0x99b4));
        func_0x00003fb2(2,1000,30000,1,MEM(0x0c1c));
        if (uVar3 == 0x26) {
          func_0x00009ba2(-1 - param_1);
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



void FUN_0000_0312(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  bVar2 = SPRITE_FLAGS[param_2 * 8];
  pbVar1 = (byte *)SAVED_GAM(0x02fc);
  *pbVar1 = *pbVar1 & 0xfe;
  if ((*(byte *)SAVED_GAM(0x02fc) & 0x20) != 0) {
    FUN_0000_0094(param_2);
    func_0x00003670(MEM(0x99f2));
    func_0x000061ce(0x28,1,2000,MEM(0x04b0));
  }
  if ((*(byte *)SAVED_GAM(0x02fc) & 0x22) != 0) {
    pbVar1 = (byte *)SAVED_GAM(0x02fc);
    *pbVar1 = *pbVar1 & 0xdd;
    return;
  }
  if ((bVar2 == 0) || ((bVar2 & 0x20) != 0)) {
    FUN_0000_0094(param_2);
    func_0x00003670(MEM(0x99fc));
    pbVar1 = (byte *)SAVED_GAM(0x02fc);
    *pbVar1 = *pbVar1 | 1;
  }
  else {
    if ((*(byte *)SAVED_GAM(0x02fc) & 4) == 0) {
      if ((*(byte *)SAVED_GAM(0x02fc) & 8) != 0) goto LAB_0000_0426;
      FUN_0000_0094(param_2);
      if ((bVar2 & 0x80) == 0) {
        iVar4 = func_0x00009b7e(param_2);
        if (iVar4 == 1) {
          uVar3 = MEM(0x9a64);
        }
        else if (iVar4 == 2) {
          uVar3 = MEM(0x9a50);
        }
        else if (iVar4 == 3) {
          uVar3 = MEM(0x9a3c);
        }
        else {
          if (iVar4 != 4) goto LAB_0000_0426;
          uVar3 = MEM(0x9a2a);
        }
      }
      else {
        if ((param_1 != 0xff) && (*(char *)(param_1 * 8 + DATA_OVL(0x154d)) == '-')) {
          func_0x00003670(MEM(0x9a10));
          func_0x000061ce(0x28,1,2000,MEM(0x04b0));
          pbVar1 = SPRITE_FLAGS[param_2 * 8];
          *pbVar1 = *pbVar1 | 4;
          *(undefined *)((uint)*(byte *)(param_2 * 8 + DATA_OVL(0x154e)) * 8 + SAVED_GAM(0x06b5)) = 0;
          func_0x00005906(4);
          goto LAB_0000_0426;
        }
        uVar3 = MEM(0x9a22);
      }
    }
    else {
      FUN_0000_0094(param_2);
      uVar3 = MEM(0x9a06);
    }
    func_0x00003670(uVar3);
  }
LAB_0000_0426:
  if ((bVar2 & 0x80) != 0) {
    func_0x00004720();
    func_0x00007730();
  }
  pbVar1 = (byte *)SAVED_GAM(0x02fc);
  *pbVar1 = *pbVar1 & 0xf3;
  return;
}



undefined4 FUN_0000_0458(int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = (long)(param_3 - param_1) * (long)(param_3 - param_1);
  return CONCAT22((int)((ulong)lVar1 >> 0x10),(param_4 - param_2) * (param_4 - param_2) + (int)lVar1
                 );
}



int FUN_0000_048a(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0000_0458(param_1,param_2,param_3,param_4);
  iVar2 = 0;
  for (iVar3 = 1; iVar3 <= iVar1; iVar3 = iVar3 + 2) {
    iVar1 = iVar1 - iVar3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



void FUN_0000_04d4(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  FUN_0000_048a(*(undefined *)(param_1 * 8 + DATA_OVL(0x1551)),*(undefined *)(param_1 * 8 + DATA_OVL(0x1550)),
                *(undefined *)(param_2 * 8 + DATA_OVL(0x1551)),*(undefined *)(param_2 * 8 + DATA_OVL(0x1550)));
  return;
}



int FUN_0000_0504(int param_1,uint param_2)

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
  
  *(undefined *)SAVED_GAM(0x02f2) = 1;
  local_c = (uint)*(byte *)((uint)*(byte *)(param_2 * 8 + DATA_OVL(0x154e)) * 8 + SAVED_GAM(0x06bb));
  iVar6 = local_c * 8;
  if ((((0x1f < local_c) || ((SPRITE_FLAGS[iVar6] & 0x30) != 0)) ||
      (*SPRITE_FLAGS[iVar6] == 0)) ||
     ((*(char *)((uint)*(byte *)(iVar6 + DATA_OVL(0x154e)) * 8 + SAVED_GAM(0x06b4)) == '\0' ||
      (iVar6 = FUN_0000_04d4(local_c,param_2), param_1 < iVar6)))) {
    local_c = param_2;
  }
  *(undefined *)SAVED_GAM(0x02f3) = *(undefined *)(local_c * 8 + DATA_OVL(0x1550));
  *(undefined *)SAVED_GAM(0x02f4) = *(undefined *)(local_c * 8 + DATA_OVL(0x1551));
  bVar2 = false;
  bVar1 = false;
  pcVar3 = (char *)(param_2 * 8 + DATA_OVL(0x1551));
  pcVar4 = (char *)(param_2 * 8 + DATA_OVL(0x1550));
  do {
    if ((bVar1) || (bVar2)) {
      *(undefined *)SAVED_GAM(0x02f2) = 0;
      if (bVar2) {
        func_0x000034da(10);
        local_14 = 0;
      }
      return local_14;
    }
    iVar7 = 0;
    iVar6 = 0;
    func_0x00007730();
    uVar8 = MEM(0x0640);
    iVar5 = func_0x0000448c();
    if (iVar5 == 0x1b) {
      bVar2 = true;
      iVar6 = iVar7;
    }
    else if (iVar5 < 0x1c) {
      if (iVar5 == 1) {
LAB_0000_0683:
        iVar6 = -1;
      }
      else if (iVar5 == 2) {
LAB_0000_0679:
        iVar6 = 1;
      }
      else {
        if (iVar5 == 3) goto LAB_0000_05c5;
        if (iVar5 == 4) {
LAB_0000_066f:
          iVar7 = 1;
        }
        else if (iVar5 == 0xd) goto LAB_0000_06a3;
      }
    }
    else {
      if (iVar5 == 0x20) {
        if ((*pcVar4 == *(char *)SAVED_GAM(0x02f3)) && (*pcVar3 == *(char *)SAVED_GAM(0x02f4))) {
          bVar2 = true;
        }
      }
      else if (iVar5 != 0x41) {
        if (iVar5 == 0xd3) {
          iVar7 = -1;
LAB_0000_05c5:
          iVar6 = iVar7;
          iVar7 = -1;
        }
        else {
          if (iVar5 == 0xd4) {
            iVar7 = 1;
            goto LAB_0000_0683;
          }
          if (iVar5 == 0xd5) {
            iVar7 = -1;
            goto LAB_0000_0679;
          }
          if (iVar5 == 0xd6) {
            iVar6 = 1;
            goto LAB_0000_066f;
          }
        }
        goto LAB_0000_05c8;
      }
LAB_0000_06a3:
      if ((*pcVar4 != *(char *)SAVED_GAM(0x02f3)) || (*pcVar3 != *(char *)SAVED_GAM(0x02f4))) {
        func_0x000034da(10,uVar8);
        if (*(char *)SAVED_GAM(0x02e9) != '\0') {
          func_0x0000405c(700,(uint)*(byte *)SAVED_GAM(0x02e9) * MEM(0x0640) + 8000,800);
        }
        bVar1 = true;
      }
    }
LAB_0000_05c8:
    iVar6 = iVar6 + (uint)*(byte *)SAVED_GAM(0x02f3);
    iVar7 = iVar7 + (uint)*(byte *)SAVED_GAM(0x02f4);
    local_14 = FUN_0000_048a(*pcVar3,*pcVar4,iVar7,iVar6);
    if ((((local_14 <= param_1) && (-1 < iVar6)) && (iVar6 < 0xb)) &&
       ((-1 < iVar7 && (iVar7 < 0xb)))) {
      local_4 = (undefined)iVar6;
      *(undefined *)SAVED_GAM(0x02f3) = local_4;
      local_6 = (undefined)iVar7;
      *(undefined *)SAVED_GAM(0x02f4) = local_6;
    }
  } while( true );
}



int FUN_0000_0748(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  byte *local_10;
  byte *local_e;
  byte *local_c;
  
  iVar2 = 0;
  pbVar3 = (byte *)DATA_OVL(0x1550);
  local_c = (byte *)DATA_OVL(0x1551);
  local_e = (byte *)DATA_OVL(0x154c);
  local_10 = (byte *)DATA_OVL(0x154e);
  while ((((*pbVar3 != param_2 || (*local_c != param_1)) ||
          (bVar1 = *local_e, *(char *)((uint)*local_10 * 8 + SAVED_GAM(0x06b5)) == -0xc)) ||
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



void FUN_0000_07d4(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    do {
      iVar1 = func_0x00003eb2(3,1);
      *(int *)SAVED_GAM(0x02d0) = iVar1 + param_2 + -2;
      iVar1 = func_0x00003eb2(3,1);
      iVar1 = iVar1 + param_1 + -2;
      *(int *)SAVED_GAM(0x02d2) = iVar1;
    } while (*(int *)SAVED_GAM(0x02d0) < 0);
  } while (((10 < *(int *)SAVED_GAM(0x02d0)) || (iVar1 < 0)) || (10 < iVar1));
  return;
}



uint FUN_0000_0822(undefined2 param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5)

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
  uVar3 = (uint)*(byte *)(param_5 * 8 + DATA_OVL(0x1550));
  uVar2 = (uint)*(byte *)(param_5 * 8 + DATA_OVL(0x1551));
  if (param_2 == 0) {
    do {
      FUN_0000_07d4(param_3,param_4);
      if (uVar3 != *(uint *)SAVED_GAM(0x02d0)) break;
    } while (uVar2 == *(uint *)SAVED_GAM(0x02d2));
    local_6 = *(undefined2 *)SAVED_GAM(0x02d0);
    local_c = *(undefined2 *)SAVED_GAM(0x02d2);
  }
  if ((*(char *)SAVED_GAM(0x02f7) == '\x19') || (*(char *)SAVED_GAM(0x02f7) == '\"')) {
    if (param_2 != 0) {
      local_6 = param_4;
      local_c = param_3;
      local_e = 1;
    }
  }
  else {
    local_e = FUN_0000_12de(param_1,local_c,local_6,uVar2,uVar3);
    if (local_e == 0) {
      local_6 = *(undefined2 *)SAVED_GAM(0x02d0);
      local_c = *(undefined2 *)SAVED_GAM(0x02d2);
    }
    else {
      func_0x00009cda(local_c,local_6);
    }
  }
  if (local_e == 0) goto LAB_0000_0964;
  uVar3 = FUN_0000_0748(local_c,local_6);
  cVar1 = *(char *)SAVED_GAM(0x02f7);
  if (cVar1 == '\x13') {
LAB_0000_090c:
    uVar4 = 0xea;
LAB_0000_090f:
    func_0x00008326(*(undefined *)SAVED_GAM(0x02ef),local_c,local_6,2,uVar4);
  }
  else {
    if (cVar1 == '3') {
      uVar4 = 0xe8;
      goto LAB_0000_090f;
    }
    if (cVar1 == '4') {
      uVar4 = 0xe9;
      goto LAB_0000_090f;
    }
    if (cVar1 == '5') goto LAB_0000_090c;
    if (cVar1 == '6') {
      uVar4 = 0xeb;
      goto LAB_0000_090f;
    }
  }
  if ((((*(char *)SAVED_GAM(0x02e9) == '\0') || (param_2 != 0)) && (-1 < (int)uVar3)) &&
     (uVar3 != *(byte *)SAVED_GAM(0x02f8))) {
    *(undefined2 *)SAVED_GAM(0x02d0) = local_6;
    *(undefined2 *)SAVED_GAM(0x02d2) = local_c;
    return uVar3;
  }
LAB_0000_0964:
  *(undefined2 *)SAVED_GAM(0x02d0) = local_6;
  *(undefined2 *)SAVED_GAM(0x02d2) = local_c;
  return MEM(0xffff);
}



void FUN_0000_097c(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined2 unaff_DS;
  
  if (*(char *)SAVED_GAM(0x02e9) != '\0') {
    return;
  }
  if (param_2 < 0x17) {
    if ((param_2 < 0x15) && (param_2 != 0x10)) {
      return;
    }
    if (param_1 < 2) {
      return;
    }
    if (*(char *)(param_2 + SAVED_GAM(0x021a)) != '\0') {
      pcVar1 = (char *)(param_2 + SAVED_GAM(0x021a));
      *pcVar1 = *pcVar1 + -1;
      return;
    }
    func_0x00008c80(param_2,*(undefined *)((uint)*(byte *)SAVED_GAM(0x02f8) * 8 + DATA_OVL(0x154d)));
    return;
  }
  if (param_2 != 0x1a) {
    if (param_2 == 0x1c) {
      pcVar1 = (char *)SAVED_GAM(0x0237);
      *pcVar1 = *pcVar1 + -1;
      cVar2 = *pcVar1;
      goto LAB_0000_09a0;
    }
    if (param_2 != 0x24) {
      return;
    }
  }
  pcVar1 = (char *)SAVED_GAM(0x0235);
  *pcVar1 = *pcVar1 + -1;
  cVar2 = *pcVar1;
LAB_0000_09a0:
  if (cVar2 == '\0') {
    cVar2 = func_0x00009e2a(param_2);
    pcVar1 = (char *)(param_2 + SAVED_GAM(0x021a));
    *pcVar1 = *pcVar1 + cVar2;
  }
  return;
}



undefined2 FUN_0000_09fc(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_1 + SAVED_GAM(0x0302));
  if ((((uVar1 != 0xff) && (pbVar3 = SPRITE_FLAGS[uVar1 * 8], *pbVar3 != 0)) &&
      (iVar2 = func_0x00007466(uVar1), iVar2 != 0)) &&
     ((((*pbVar3 & 0xc) == 0 && (*(char *)SAVED_GAM(0x02d4) != 'T')) &&
      (iVar2 = FUN_0000_04d4(uVar1,param_1), iVar2 == 1)))) {
    func_0x000034da(10);
    FUN_0000_0094(uVar1);
    func_0x00003670(MEM(0x9a70));
    return 1;
  }
  return 0;
}



void FUN_0000_0a68(undefined2 param_1,int param_2,int param_3)

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
      ((param_2 != 0x13 && (param_2 != 0x11)))) || (iVar5 = FUN_0000_09fc(param_3), iVar5 == 0)) {
    func_0x00003670(MEM(0x9a7e));
    iVar5 = FUN_0000_0504(*(undefined *)(param_2 + MEM(0x1664)),param_3);
    if (iVar5 != 0) {
      func_0x000061ce(100,5,300,MEM(0x0514));
      if (param_2 == 0x13) {
        if (*(char *)SAVED_GAM(0x022d) == '\0') {
          func_0x00008c80(0x13,*(undefined *)((uint)*(byte *)SAVED_GAM(0x02f8) * 8 + DATA_OVL(0x154d)));
        }
        else {
          pcVar1 = (char *)SAVED_GAM(0x022d);
          *pcVar1 = *pcVar1 + -1;
        }
      }
      iVar6 = (uint)*(byte *)(param_3 * 8 + DATA_OVL(0x154e)) * 8;
      *(undefined *)(iVar6 + SAVED_GAM(0x06bb)) = 0xff;
      uVar7 = FUN_0000_0748(*(undefined *)SAVED_GAM(0x02f4),*(undefined *)SAVED_GAM(0x02f3));
      if ((int)uVar7 < 0) {
        uVar2 = *(undefined *)SAVED_GAM(0x02f3);
        uVar3 = *(undefined *)SAVED_GAM(0x02f4);
        uVar8 = 1;
      }
      else {
        local_c = (undefined)uVar7;
        *(undefined *)(iVar6 + SAVED_GAM(0x06bb)) = local_c;
        FUN_0000_097c(iVar5,param_2);
        uVar8 = func_0x00009b42(param_2,-(uint)*(byte *)SAVED_GAM(0x02e9),param_3,uVar7);
        uVar2 = *(undefined *)SAVED_GAM(0x02f3);
        uVar3 = *(undefined *)SAVED_GAM(0x02f4);
      }
      uVar9 = FUN_0000_0822(param_1,uVar8,uVar3,uVar2,param_3);
      uVar8 = *(undefined2 *)SAVED_GAM(0x02d0);
      uVar4 = *(undefined2 *)SAVED_GAM(0x02d2);
      if (uVar9 < MEM(0x8000)) {
        func_0x00005384(uVar9);
        func_0x000034da(10);
        func_0x00009b72(param_3,uVar9);
        FUN_0000_0312(param_3,uVar9);
      }
      else if (uVar7 < MEM(0x8000)) {
        func_0x000034da(10);
        FUN_0000_00d2(uVar7);
      }
      if (param_2 == 0x26) {
        FUN_0000_12de(param_1,*(undefined *)(param_3 * 8 + DATA_OVL(0x1551)),
                      *(undefined *)(param_3 * 8 + DATA_OVL(0x1550)),uVar4,uVar8);
      }
    }
  }
  return;
}



void FUN_0000_0bf8(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 unaff_DS;
  
  func_0x000061ce(0x96,5,MEM(0x02ee),400);
  func_0x000034da(10);
  iVar1 = func_0x00009b42(param_1,-(uint)*(byte *)SAVED_GAM(0x02e9),param_3,param_2);
  if (iVar1 == 0) {
    FUN_0000_00d2(param_2);
  }
  else {
    func_0x00005384(param_2);
    func_0x00009b72(param_3,param_2);
    FUN_0000_0312(param_3,param_2);
  }
  return;
}



void FUN_0000_0c52(int param_1,int param_2)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined local_8;
  
  if (0x22 < param_1) {
    *(undefined *)SAVED_GAM(0x02ea) = 1;
  }
  if ((SPRITE_FLAGS[param_2 * 8] & 0x80) == 0) {
    cVar1 = *(char *)(*(byte *)(param_2 * 8 + DATA_OVL(0x154d)) + MEM(0x159c));
    if (cVar1 == '\x01') {
      cVar1 = '\0';
    }
    uVar2 = *(undefined *)(*(byte *)(param_2 * 8 + DATA_OVL(0x154d)) + MEM(0x15cc));
  }
  else {
    if (param_1 == 0xff) {
      cVar1 = '\0';
    }
    else {
      cVar1 = *(char *)(param_1 + MEM(0x1664));
    }
    uVar2 = *(undefined *)(param_1 + MEM(0x169c));
  }
  if (cVar1 == '\0') {
    func_0x00003670(MEM(0x9a84));
    iVar3 = FUN_0000_0504(1,param_2);
    iVar4 = FUN_0000_0748(*(undefined *)SAVED_GAM(0x02f4),*(undefined *)SAVED_GAM(0x02f3));
    if ((iVar3 == 0) || (iVar4 == -1)) {
      func_0x00003670(MEM(0x9a8a));
    }
    else {
      local_8 = (undefined)iVar4;
      *(undefined *)((uint)*(byte *)(param_2 * 8 + DATA_OVL(0x154e)) * 8 + SAVED_GAM(0x06bb)) = local_8;
      FUN_0000_0bf8(param_1,iVar4,param_2);
    }
  }
  else {
    FUN_0000_0a68(uVar2,param_1,param_2);
  }
  return;
}



void FUN_0000_0d3c(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  if ((param_2 != 0xff) && (*(char *)(param_2 + MEM(0x15fc)) != '\0')) {
    if (1 < param_1) {
      *(undefined *)SAVED_GAM(0x02e9) = 0;
      *(undefined *)SAVED_GAM(0x02ea) = 0;
      func_0x000034da(10);
      func_0x00003670(*(undefined2 *)(param_2 * 2 + MEM(0x17f6)));
      func_0x00003670(MEM(0x9a94));
    }
    *(undefined *)SAVED_GAM(0x02f7) = (undefined)param_2;
    func_0x00003670(MEM(0x9a98));
    FUN_0000_0c52(param_2,*(undefined *)SAVED_GAM(0x02f8));
  }
  return;
}



void FUN_0000_0d96(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (((SPRITE_FLAGS[param_2 * 8] & 0x80) == 0) || (param_1 == 0)) {
    *(undefined *)SAVED_GAM(0x02f7) = 0xff;
    func_0x00003670(MEM(0x9aa0));
    FUN_0000_0c52(0xff,param_2);
  }
  else {
    bVar1 = *(byte *)(param_2 * 8 + DATA_OVL(0x154d));
    if (1 < param_1) {
      uVar2 = func_0x00003b0e(0);
      func_0x00003a12(uVar2);
      func_0x000034da(0x20);
    }
    iVar3 = (uint)bVar1 * 0x20;
    FUN_0000_0d3c(param_1,*(undefined *)(iVar3 + SAVED_GAM(0x001b)));
    FUN_0000_0d3c(param_1,*(undefined *)(iVar3 + SAVED_GAM(0x001d)));
    FUN_0000_0d3c(param_1,*(undefined *)(iVar3 + SAVED_GAM(0x001e)));
  }
  return;
}



void FUN_0000_0e26(undefined *param_1,undefined *param_2,int param_3,int param_4,int param_5,
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
  local_c = MEM(0x0148);
  if (param_4 == param_6) {
    local_a = DATA_OVL(0x4b10);
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



// WARNING: Removing unreachable block (ram,0x0000122d)
// WARNING: Removing unreachable block (ram,0x0000124b)
// WARNING: Removing unreachable block (ram,0x0000128e)
// WARNING: Removing unreachable block (ram,0x00001294)
// WARNING: Removing unreachable block (ram,0x0000129a)
// WARNING: Removing unreachable block (ram,0x000012a0)
// WARNING: Removing unreachable block (ram,0x000012cf)
// WARNING: Removing unreachable block (ram,0x000012cc)

void FUN_0000_0f4a(undefined2 param_1_00,undefined2 param_2,uint param_1)

{
  undefined2 unaff_DS;
  
  func_0x00002890(*(undefined2 *)MEM(0x13b0));
  if (param_1 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00000fb0
                    // WARNING: Treating indirect jump as call
    (**(code **)(param_1 * 2 + MEM(0xf3f4)))();
    return;
  }
  return;
}



undefined2 FUN_0000_12de(int param_1,int param_2,int param_3,int param_4,int param_5)

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
  func_0x00002d8e(1,0);
  puVar5 = (undefined *)MEM(0xa728);
  for (iVar4 = MEM(0x0100); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0xff;
  }
  puVar5 = (undefined *)MEM(0xa872);
  for (iVar4 = MEM(0x0100); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar1 = 0xff;
  }
  FUN_0000_0e26(MEM(0xa872),MEM(0xa728),param_2 * 0x10 + 0x10,param_3 * 0x10 + 0x10,param_4 * 0x10 + 0x10,
                param_5 * 0x10 + 0x10);
  local_e = (byte *)MEM(0xa728);
  local_12 = (byte *)MEM(0xa872);
  if ((*(char *)SAVED_GAM(0x02ed) == '\0') || (0x20 < *(byte *)SAVED_GAM(0x02ed))) {
    if (param_1 == 7) {
      local_c = 8;
    }
  }
  else {
    local_c = 6;
  }
  if (param_1 == 0) {
    local_e = (byte *)MEM(0xa72c);
    local_12 = (byte *)MEM(0xa876);
  }
  while( true ) {
    if (*local_e == 0xff) {
      return 1;
    }
    local_a = (local_a & 3) + 1;
    func_0x00005dd4(*local_12,*local_e);
    if (*(int *)SAVED_GAM(0x02d0) == -1) {
      return 1;
    }
    FUN_0000_0f4a(local_12,local_e,param_1,local_a,*local_12,*local_e);
    func_0x00003ee8(0x28,1);
    uVar2 = (uint)*local_12;
    uVar3 = *local_e & 0xf8;
    func_0x000028ee(uVar2 + 0xf,uVar3 + 0xf,uVar2 - 8,uVar3 - 8,0,1);
    local_e = local_e + local_c;
    local_12 = local_12 + local_c;
    if ((byte *)MEM(0xa872) < local_e) {
      return 1;
    }
    if (*local_e == 0xff) break;
    iVar4 = func_0x00005d8e(*(undefined2 *)SAVED_GAM(0x02d2),*(undefined2 *)SAVED_GAM(0x02d0));
    if ((iVar4 == 0) && ((param_5 != *(int *)SAVED_GAM(0x02d0) || (param_4 != *(int *)SAVED_GAM(0x02d2))))) {
      return 0;
    }
  }
  return 1;
}


