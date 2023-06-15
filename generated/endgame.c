typedef unsigned char   undefined;

typedef unsigned int    undefined2;



void __cdecl16near endgame_124c_0000(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 *local_18;
  undefined2 *local_16;
  undefined2 *local_14;
  byte *local_12;
  byte *local_10;
  uint local_a;
  int local_8;
  
  ultima_1000_251e(2);
  do {
    iVar1 = ultima_1000_0fae(*(undefined2 *)0x25ea);
  } while (iVar1 == 0);
  do {
    iVar2 = func_0x00018dde(*(undefined2 *)0x260c);
  } while (iVar2 == 0);
  do {
    iVar3 = func_0x00018dde(*(undefined2 *)0x261a);
  } while (iVar3 == 0);
  func_0x00019176(199,0x13f,0,0);
  ultima_1000_1b94(0);
  local_a = 0x31;
  local_8 = 0;
  local_10 = (byte *)0x3da6;
  local_12 = (byte *)0x3da7;
  local_14 = (undefined2 *)0x3db2;
  local_16 = (undefined2 *)0x3db4;
  local_18 = (undefined2 *)0x3dca;
  do {
    if (*(byte *)(local_8 + 0x3df4) != local_a) {
      func_0x00018e14(iVar3);
      local_a = (uint)*(byte *)(local_8 + 0x3df4);
      do {
        iVar3 = func_0x00018dde(*(undefined2 *)(local_a * 2 + 0x261a));
      } while (iVar3 == 0);
    }
    ultima_1000_0c22(1);
    *(undefined *)0xa9be = 2;
    ultima_1000_16ba(0xff);
    if (*(char *)(local_8 + 0x3e06) == '\x01') {
      if (local_8 == 0) {
        ultima_1000_0d4c(0,0,0xd8,0,iVar2);
        uVar7 = 4;
        uVar6 = 0x98;
        uVar5 = 0x1c;
      }
      else {
        if (local_8 != 3) goto LAB_124c_00fc;
        ultima_1000_0d4c(0,0,0xe0,5,iVar2);
        uVar7 = 0;
        uVar6 = 0xb0;
        uVar5 = 0;
      }
      ultima_1000_0d4c(0,uVar5,uVar6,uVar7,iVar2);
    }
LAB_124c_00fc:
    ultima_1000_0d4c(0,*(undefined *)(local_8 + 0x3e00),*(undefined *)(local_8 + 0x3dfa),
                    *(undefined *)(local_8 + 0x3dee),iVar3);
    *(uint *)0x5146 = (uint)*local_10;
    *(uint *)0x5148 = (uint)*local_12;
    *(undefined2 *)0x514c = *local_14;
    *(undefined2 *)0x514e = *local_16;
    *(uint *)0x5150 = (uint)*(byte *)(local_8 + 0x3dd6);
    *(uint *)0x5152 = (uint)*(byte *)(local_8 + 0x3ddc);
    *(uint *)0x5156 = (uint)*(byte *)(local_8 + 0x3de2);
    *(uint *)0x5158 = (uint)*(byte *)(local_8 + 0x3de8);
    ultima_1000_256e(*local_18,2000,0xb21e,0x81fe);
    func_0x0001ff16(0xb21e,iVar1);
    if (local_8 != 0) {
      do {
        iVar4 = ultima_1000_1d5e();
      } while (iVar4 == 0);
    }
    ultima_1000_0f6e(0,1);
    local_10 = local_10 + 2;
    local_12 = local_12 + 2;
    local_14 = local_14 + 2;
    local_16 = local_16 + 2;
    local_18 = local_18 + 1;
    local_8 = local_8 + 1;
    if (5 < local_8) {
      func_0x00018e14(iVar3);
      func_0x00018e14(iVar2);
      func_0x0001920c(iVar1);
      do {
        iVar1 = ultima_1000_1d5e();
      } while (iVar1 == 0);
      ultima_1000_0c22(1);
      ultima_1000_16ba(0xff);
      do {
        iVar1 = func_0x00018dde(*(undefined2 *)0x2622);
      } while (iVar1 == 0);
      ultima_1000_0d4c(0,0,0x28,0,iVar1);
      func_0x00018e14(iVar1);
      ultima_1000_0f6e(0,1);
      ultima_1000_0c22(0);
      *(undefined *)0xa9be = 0;
      return;
    }
  } while( true );
}



void endgame_124c_023a(char *param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  for (bVar1 = *(byte *)0xbcda; (*param_1 != '\0' && (bVar1 < 0x27)); bVar1 = bVar1 + 1) {
    *(char *)(bVar1 + 0xbcb2) = *param_1;
    param_1 = param_1 + 1;
  }
  *(byte *)0xbcda = bVar1;
  *(undefined *)(bVar1 + 0xbcb2) = 0;
  if (*(char *)(bVar1 + 0xbcb1) == '\n') {
    ultima_1000_1850(0xbcb2);
    *(undefined *)0xbcda = 0;
  }
  return;
}



int endgame_124c_028c(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (0x14 < param_1) {
    endgame_124c_023a(*(undefined2 *)((param_1 / 10) * 2 + 0x3e2e));
    iVar1 = param_1 / 10;
    param_1 = param_1 % 10;
    if (param_1 == 0) {
      return iVar1;
    }
    endgame_124c_023a(0x82c6);
  }
  iVar1 = endgame_124c_023a(*(undefined2 *)(param_1 * 2 + 0x3e0a));
  return iVar1;
}



void endgame_124c_02d6(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (param_1 < 0xd) {
    uVar1 = *(undefined2 *)(param_1 * 2 + 0x3e40);
  }
  else if (param_1 < 0x14) {
    endgame_124c_028c(param_1);
    uVar1 = 0x831e;
  }
  else {
    endgame_124c_023a(0x8322);
    if (param_1 == 0x14) {
      uVar1 = 0x8328;
    }
    else {
      endgame_124c_023a(0x832e);
      uVar1 = *(undefined2 *)(param_1 * 2 + 0x3e18);
    }
  }
  endgame_124c_023a(uVar1);
  return;
}



void endgame_124c_0326(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined local_10 [8];
  int local_8;
  int local_6;
  int local_4;
  
  ultima_1000_1bf2(1,0);
  ultima_1000_16ba(0xfd);
  ultima_1000_16ba(0xfc);
  ultima_1000_1850(0x8332);
  *(undefined *)0xbcda = 0;
  endgame_124c_023a(0x8348);
  endgame_124c_02d6(*(undefined *)0x587e);
  endgame_124c_023a(0x834e);
  endgame_124c_023a(0x8358);
  endgame_124c_02d6(*(undefined *)0x587d);
  endgame_124c_023a(0x835e);
  ultima_1000_1850(0x8366);
  endgame_124c_028c(*(int *)0x5874 / 100);
  endgame_124c_023a(0x8374);
  endgame_124c_028c(*(int *)0x5874 % 100);
  endgame_124c_023a(0x837e);
  endgame_124c_023a(0x55a8);
  endgame_124c_023a(0x8382);
  ultima_1000_1850(0x8390);
  ultima_1000_1850(0x83a0);
  ultima_1000_1850(0x83b2);
  ultima_1000_1850(0x83ca);
  ultima_1000_1850(0x83de);
  ultima_1000_1c9e(1);
  ultima_1000_1850(0x83ee);
  ultima_1000_1850(0x8404);
  ultima_1000_1c9e(0);
  ultima_1000_16ba(0xfd);
  ultima_1000_1850(0x8414);
  iVar1 = *(int *)0x5874;
  local_6 = iVar1 + -0x8b;
  uVar2 = (uint)*(byte *)0x587d;
  local_8 = uVar2 - 4;
  uVar3 = (uint)*(byte *)0x587e;
  local_4 = uVar3 - 5;
  if (local_4 < 0) {
    local_4 = uVar3 + 0x17;
    local_8 = uVar2 - 5;
  }
  if (local_8 < 0) {
    local_8 = local_8 + 0xd;
    local_6 = iVar1 + -0x8c;
  }
  if (local_6 != 0) {
    uVar4 = ultima_1000_0426(local_6,local_10,10);
    endgame_124c_023a(uVar4);
    endgame_124c_023a(0x8438);
    if (1 < local_6) {
      endgame_124c_023a(0x843e);
    }
    if ((local_8 != 0) || (local_4 != 0)) {
      endgame_124c_023a(0x8440);
    }
  }
  if (local_8 != 0) {
    uVar4 = ultima_1000_0426(local_8,local_10,10);
    endgame_124c_023a(uVar4);
    endgame_124c_023a(0x8444);
    if (1 < local_8) {
      endgame_124c_023a(0x844c);
    }
    if (local_4 != 0) {
      endgame_124c_023a(0x844e);
    }
  }
  if (local_4 != 0) {
    uVar4 = ultima_1000_0426(local_4,local_10,10);
    endgame_124c_023a(uVar4);
    endgame_124c_023a(0x8452);
    if (1 < local_4) {
      endgame_124c_023a(0x8458);
    }
  }
  endgame_124c_023a(0x845a);
  ultima_1000_1850(0x845c);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void __cdecl16near endgame_124c_04fe(void)

{
  ultima_1000_3ae6(2);
  func_0x0001c56e();
  ultima_1000_3ae6();
  return;
}



undefined2 endgame_124c_0510(uint param_1,uint param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  undefined2 local_8;
  
  local_8 = 1;
  param_3 = param_3 * 8;
  if ((*(char *)(param_3 + 0x5c5a) == '\0') ||
     ((*(byte *)(param_3 + 0x5c5c) == param_2 && (*(byte *)(param_3 + 0x5c5d) == param_1)))) {
    local_8 = 0;
  }
  else {
    uVar2 = *(byte *)(param_3 + 0x5c5c) - param_2;
    uVar5 = (int)uVar2 >> 0xf;
    uVar3 = (uint)*(byte *)(param_3 + 0x5c5d);
    uVar4 = uVar3 - param_1;
    uVar6 = (int)uVar4 >> 0xf;
    if ((int)((uVar2 ^ uVar5) - uVar5) < (int)((uVar4 ^ uVar6) - uVar6)) {
      if (param_1 < uVar3) {
        pcVar1 = (char *)(param_3 + 0x5c5d);
        *pcVar1 = *pcVar1 + -1;
      }
      else {
        pcVar1 = (char *)(param_3 + 0x5c5d);
        *pcVar1 = *pcVar1 + '\x01';
      }
    }
    else if (param_2 < *(byte *)(param_3 + 0x5c5c)) {
      pcVar1 = (char *)(param_3 + 0x5c5c);
      *pcVar1 = *pcVar1 + -1;
    }
    else {
      pcVar1 = (char *)(param_3 + 0x5c5c);
      *pcVar1 = *pcVar1 + '\x01';
    }
    endgame_124c_04fe();
  }
  return local_8;
}



void endgame_124c_05a2(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_a;
  
  param_1 = param_1 * 8;
  if ((*(char *)(param_1 + 0x5c5a) != '\0') && (iVar1 = ultima_1000_2092(1,0), iVar1 != 0)) {
    local_a = 0;
    do {
      uVar3 = (uint)*(byte *)(param_1 + 0x5c5c);
      uVar2 = (uint)*(byte *)(param_1 + 0x5c5d);
      iVar1 = ultima_1000_2092(3,0);
      if (iVar1 == 0) {
        uVar3 = uVar3 + 1;
      }
      else if (iVar1 == 1) {
        uVar3 = uVar3 - 1;
      }
      else if (iVar1 == 2) {
        uVar2 = uVar2 + 1;
      }
      else if (iVar1 == 3) {
        uVar2 = uVar2 - 1;
      }
      if (*(char *)(uVar2 * 0x20 + uVar3 + -0x54fe) == 'D') {
        *(undefined *)(param_1 + 0x5c5c) = (char)uVar3;
        *(undefined *)(param_1 + 0x5c5d) = (char)uVar2;
        break;
      }
      local_a = local_a + 1;
    } while (local_a < 8);
  }
  ultima_1000_3ae6(1);
  return;
}



void __cdecl16near endgame_124c_0648(void)

{
  char *pcVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined uVar4;
  undefined uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  undefined2 unaff_DS;
  undefined *local_1c;
  undefined2 *local_1a;
  undefined2 *local_18;
  int local_16;
  char *local_10;
  uint local_c;
  int local_4;
  
  *(undefined *)0x589e = 0xff;
  ultima_1000_2900();
  func_0x0001f1ce(1);
  ultima_1000_256e(0x210,0xb0,0xac64,0x8480);
  ultima_1000_256e(0,1000,0xb21e,0x848e);
  iVar12 = 0;
  iVar8 = 0;
  do {
    puVar13 = (undefined2 *)(iVar8 + -0x52ec);
    puVar9 = (undefined2 *)(iVar12 + -0x539c);
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      puVar3 = puVar13;
      puVar13 = puVar13 + 1;
      puVar2 = puVar9;
      puVar9 = puVar9 + 1;
      *puVar3 = *puVar2;
    }
    *(undefined *)puVar13 = *(undefined *)puVar9;
    iVar12 = iVar12 + 0x10;
    iVar8 = iVar8 + 0x20;
  } while (iVar8 < 0x160);
  puVar14 = (undefined *)0x5c5a;
  puVar10 = (undefined *)0x5c5b;
  do {
    *puVar10 = 0;
    *puVar14 = 0;
    puVar14 = puVar14 + 8;
    puVar10 = puVar10 + 8;
  } while (puVar10 < (undefined *)0x5d5b);
  *(undefined *)0x5d53 = 0x7c;
  *(undefined *)0x5d52 = 0x7c;
  *(undefined *)0x5d54 = 5;
  *(undefined *)0x5d55 = 8;
  *(undefined *)0x5d58 = 0;
  ultima_1000_3ae6(0x28);
  do {
    iVar8 = endgame_124c_0510(3,5,0x1f);
  } while (iVar8 != 0);
  local_c = 0;
  if (*(char *)0x585b != '\0') {
    local_10 = (char *)0x55b3;
    local_16 = 0x55a8;
    local_18 = (undefined2 *)0x55b8;
    local_1a = (undefined2 *)0x55ba;
    local_1c = (undefined *)0x55b2;
    puVar10 = (undefined *)0x5c5a;
    do {
      if (*local_10 == 'D') {
        ultima_1000_16ba(10);
        ultima_1000_1850(local_16);
        ultima_1000_1850(0x849a);
        *local_10 = 'G';
        *local_18 = *local_1a;
        ultima_1000_0a70(*(undefined2 *)0x13b0);
        ultima_1000_0b86(0xb7,0xb7,8,8);
        ultima_1000_2192(1,5000,40000,1,0x2260);
        ultima_1000_2900();
      }
      iVar8 = ultima_1000_4d76(*local_1c,0x84a4);
      uVar4 = *(undefined *)(iVar8 + 0x1ade);
      puVar10[1] = uVar4;
      *puVar10 = uVar4;
      puVar10[2] = 5;
      puVar10[3] = 9;
      puVar10[6] = 0;
      ultima_1000_3ae6(1);
      iVar8 = endgame_124c_0510(*(undefined *)(local_c + 0x3e60),*(undefined *)(local_c + 0x3e5a),
                            local_c);
      if (iVar8 != 0) {
        uVar4 = *(undefined *)(local_c + 0x3e60);
        uVar5 = *(undefined *)(local_c + 0x3e5a);
        do {
          iVar8 = endgame_124c_0510(uVar4,uVar5,local_c);
        } while (iVar8 != 0);
      }
      local_10 = local_10 + 0x20;
      local_16 = local_16 + 0x20;
      local_18 = local_18 + 0x10;
      local_1a = local_1a + 0x10;
      local_1c = local_1c + 0x20;
      puVar10 = puVar10 + 8;
      local_c = local_c + 1;
    } while (local_c < *(byte *)0x585b);
  }
  ultima_1000_3ae6(0x28);
  ultima_1000_1850(0xb21e);
  ultima_1000_1850(0x55a8);
  ultima_1000_1850(0x84ae);
  ultima_1000_266c();
  ultima_1000_1850(0xb23f);
  do {
    local_4 = ultima_1000_266c();
    if (local_4 == 0x4e) {
      uVar6 = 0x84ba;
LAB_1000_2d24:
      ultima_1000_1850(uVar6);
    }
    else if (local_4 == 0x59) {
      uVar6 = 0x84b4;
      goto LAB_1000_2d24;
    }
  } while ((local_4 != 0x59) && (local_4 != 0x4e));
  if (local_4 == 0x4e) {
    ultima_1000_1850(0xb267);
    do {
      local_4 = ultima_1000_266c();
      if (local_4 == 0x4e) {
        uVar6 = 0x84c6;
LAB_1000_2d5d:
        ultima_1000_1850(uVar6);
      }
      else if (local_4 == 0x59) {
        uVar6 = 0x84c0;
        goto LAB_1000_2d5d;
      }
    } while ((local_4 != 0x59) && (local_4 != 0x4e));
  }
  if ((local_4 == 0x59) && (*(char *)0x57bf != '\0')) {
    ultima_1000_3ae6(8);
    do {
      iVar8 = endgame_124c_0510(4,5,0);
    } while (iVar8 != 0);
    do {
      iVar8 = endgame_124c_0510(5,5,0);
    } while (iVar8 != 0);
    ultima_1000_3ae6(4);
    *(undefined *)0x5c8b = 0xe;
    *(undefined *)0x5c8a = 0xe;
    *(undefined *)0x5c8c = 5;
    *(undefined *)0x5c8d = 4;
    *(undefined *)0x5c90 = 0;
    ultima_1000_1850(0xb2c9);
    ultima_1000_3ae6(0x28);
    ultima_1000_1850(0x84cc);
    ultima_1000_266c();
    ultima_1000_1850(0xb2f1);
    ultima_1000_266c();
    ultima_1000_1850(0xb346);
    ultima_1000_266c();
    ultima_1000_1850(0xb385);
    ultima_1000_266c();
    ultima_1000_1850(0xb3e7);
    ultima_1000_266c();
    ultima_1000_1850(0xb42f);
    ultima_1000_266c();
    ultima_1000_1850(0xb469);
    *(undefined *)0x5c8a = 8;
    *(undefined *)0x5c8b = 8;
    ultima_1000_266c();
    ultima_1000_2192(1,10000,50000,1,0x1450);
    *(undefined *)0x5c8a = 0;
    *(undefined *)0x5c8b = 0;
    *(undefined *)0xad99 = 0xdc;
    *(undefined *)0x5887 = 1;
    do {
      ultima_1000_3ae6(1);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + '\x01';
    } while (*(byte *)0x5887 < 0x10);
    ultima_1000_3ae6(4);
    do {
      iVar8 = endgame_124c_0510(4,5,0x1f);
    } while (iVar8 != 0);
    *(undefined *)0x5d53 = 0;
    *(undefined *)0x5d52 = 0;
    ultima_1000_3ae6(1);
    if (*(char *)0x585b != '\0') {
      puVar10 = (undefined *)0x5c5a;
      local_1c = (undefined *)0x5c5b;
      uVar11 = 0;
      do {
        do {
          iVar8 = endgame_124c_0510(4,5,uVar11);
        } while (iVar8 != 0);
        *local_1c = 0;
        *puVar10 = 0;
        ultima_1000_3ae6(1);
        puVar10 = puVar10 + 8;
        local_1c = local_1c + 8;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(byte *)0x585b);
    }
    *(undefined *)0x5887 = 0xf;
    do {
      ultima_1000_3ae6(1);
      pcVar1 = (char *)0x5887;
      *pcVar1 = *pcVar1 + -1;
    } while (*pcVar1 != '\0');
    ultima_1000_10e0(4,5,0x44);
    ultima_1000_0c22(1);
    ultima_1000_0a70(0);
    func_0x0001925e();
    ultima_1000_0aa6(199,0x13f,0,0);
    ultima_1000_0c22(0);
    endgame_124c_0000();
    endgame_124c_0326();
    return;
  }
  ultima_1000_1850(0x84da);
  ultima_1000_3ae6(0x28);
  ultima_1000_1850(0xb4f3);
  pcVar1 = (char *)0x5c5d;
  *pcVar1 = *pcVar1 + -1;
  endgame_124c_04fe();
  do {
    iVar8 = endgame_124c_0510(6,8,2);
    iVar12 = endgame_124c_0510(1,4,0x1f);
    iVar7 = endgame_124c_0510(4,8,0);
  } while (iVar8 + iVar12 + iVar7 != 0);
  do {
    endgame_124c_05a2(1);
    endgame_124c_05a2(3);
    endgame_124c_05a2(4);
    endgame_124c_05a2(5);
  } while( true );
}


