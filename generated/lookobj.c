typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void lookobj_124c_0000(int param_1)

{
  undefined local_84 [128];
  undefined2 local_4;
  
  local_4 = 0;
  ultima_1000_256e(param_1 << 1,2,&local_4,0x71f8);
  ultima_1000_256e(local_4,0x80,local_84,0x7202);
  ultima_1000_1850(local_84);
  return;
}



void lookobj_124c_0042(undefined param_1,undefined param_2,byte param_3)

{
  int *piVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 unaff_DS;
  char local_10 [14];
  
  ultima_1000_1850(0x720c);
  do {
    cVar2 = ultima_1000_266c();
    if (cVar2 == 'Y') break;
  } while (cVar2 != 'N');
  if (cVar2 == 'N') {
    uVar3 = 0x7222;
  }
  else {
    ultima_1000_1850(0x7226);
    if (*(int *)0x57aa == 0) {
      return;
    }
    ultima_1000_1850(0x722c);
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 + -1;
    ultima_1000_3b1c(0xc,local_10);
    if (local_10[0] == '\0') {
      uVar3 = 0x7238;
    }
    else {
      uVar4 = ultima_1000_6f1e(local_10,0x7242);
      if (((((uVar4 < 0x8000) || (uVar4 = ultima_1000_6f1e(local_10,0x724c), uVar4 < 0x8000)) ||
           (uVar4 = ultima_1000_6f1e(local_10,0x7254), uVar4 < 0x8000)) ||
          ((uVar4 = ultima_1000_6f1e(local_10,0x7260), uVar4 < 0x8000 ||
           (uVar4 = ultima_1000_6f1e(local_10,0x7266), uVar4 < 0x8000)))) ||
         (iVar5 = ultima_1000_6f1e(local_10,0x726e), -1 < iVar5)) {
        if ((*(char *)0x5893 == '\x16') || (*(char *)0x5893 == '\x1f')) {
          ultima_1000_1850(0x7284);
          ultima_1000_223c(2000,3000,10);
          uVar3 = ultima_1000_38e4();
          ultima_1000_3a74(uVar3,0,param_1,param_2,param_3 + 1,0x10,0x10);
          return;
        }
        uVar3 = 0x7274;
      }
      else {
        uVar3 = 0x728c;
      }
    }
  }
  ultima_1000_1850(uVar3);
  return;
}



void __cdecl16near lookobj_124c_0162(void)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  
  ultima_1000_1850(0x729c);
  ultima_1000_1850(0x72b4);
  iVar2 = ultima_1000_2e8e();
  if (iVar2 == -1) {
    uVar3 = 0x72c6;
  }
  else {
    cVar1 = *(char *)(iVar2 * 0x20 + 0x55b3);
    if ((cVar1 == 'D') || (cVar1 == 'S')) {
      uVar3 = 0x72ce;
    }
    else {
      uVar3 = 0x72e0;
    }
  }
  ultima_1000_1850(uVar3);
  return;
}



void lookobj_124c_01ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  int local_4;
  
  ultima_1000_0a70(*(undefined2 *)0x13b0);
  iVar1 = param_2 * 8;
  ultima_1000_0c64(param_1 * 8 + 8,iVar1 + 6);
  local_4 = 0;
  do {
    iVar2 = 0;
    do {
      if (iVar1 + iVar2 < 0xb1) {
        ultima_1000_0c64(param_1 * 8 + local_4 + 7,iVar1 + iVar2 + 7);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    local_4 = local_4 + 1;
  } while (local_4 < 3);
  if (param_2 * 8 < 0xae) {
    ultima_1000_0c64(param_1 * 8 + 8,param_2 * 8 + 10);
  }
  return;
}



void lookobj_124c_024c(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  param_2 = param_2 * 8;
  param_1 = param_1 << 3;
  ultima_1000_0a70(*(undefined2 *)0x13ae,param_1);
  if (2 < param_2) {
    ultima_1000_0cf2(param_1 + 0xc,param_1 + 10,param_2 + 5);
    ultima_1000_0cf2(param_1 + 0xc,param_1 + 10,param_2 + 6);
    ultima_1000_0cf2(param_1 + 0xc,param_1 + 8,param_2 + 7);
  }
  if (param_2 < 0xb0) {
    ultima_1000_0cf2(param_1 + 0xc,param_1 + 8,param_2 + 8);
  }
  if (param_2 < 0xaf) {
    ultima_1000_0cf2(param_1 + 10,param_1 + 6,param_2 + 9);
  }
  if (param_2 < 0xae) {
    ultima_1000_0cf2(param_1 + 10,param_1 + 6,param_2 + 10);
  }
  if (param_2 < 0xad) {
    ultima_1000_0cf2(param_1 + 8,param_1 + 5,param_2 + 0xb);
  }
  if (param_2 < 0xac) {
    ultima_1000_0cf2(param_1 + 7,param_1 + 5,param_2 + 0xc);
  }
  return;
}



void __cdecl16near lookobj_124c_0366(void)

{
  undefined2 *puVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 unaff_DS;
  int local_18;
  uint local_16;
  int local_12;
  uint local_4;
  
  if ((*(byte *)0x587f < 6) || (0x11 < *(byte *)0x587f)) {
    *(undefined *)0x24e6 = 1;
    iVar4 = 0;
    do {
      puVar8 = (undefined2 *)(iVar4 + -0x54fe);
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar1 = 0xffff;
      }
      *(undefined *)puVar8 = 0xff;
      iVar4 = iVar4 + 0x20;
    } while (iVar4 < 0x160);
    *(undefined *)0xac47 = 0x59;
    ultima_1000_56ac();
    ultima_1000_0a70(*(int *)0x13b2 + 8);
    iVar4 = 0x50;
    do {
      uVar5 = ultima_1000_2092(0xb6,9);
      uVar5 = ultima_1000_2092(0xac,9,uVar5);
      ultima_1000_0c64(uVar5);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_12 = 0;
    local_18 = 0;
    do {
      iVar4 = *(int *)0x5874 % 100;
      uVar7 = (uint)*(byte *)0x587d;
      local_16 = (uint)*(byte *)0x587e;
      local_4 = (uint)*(byte *)(local_12 + 0x3750);
      while (((0x27 < iVar4 || ((iVar4 == 0x27 && (4 < (int)uVar7)))) ||
             ((iVar4 == 0x27 && ((uVar7 == 4 && (5 < (int)local_16))))))) {
        local_16 = local_16 - 1;
        if (local_16 == 0) {
          local_16 = 0x1c;
          uVar7 = uVar7 - 1;
        }
        if (uVar7 == 0) {
          uVar7 = 0xd;
          iVar4 = iVar4 + -1;
        }
        do {
          local_4 = local_4 - 1;
          if ((int)local_4 < 0) {
            local_4 = 0x15;
          }
        } while (*(char *)(local_18 + local_4 + 0x3760) == '\0');
      }
      uVar2 = *(undefined *)(local_12 + 0x3758);
      lookobj_124c_01ac(uVar2,local_4 + 1);
      iVar4 = 0;
      do {
        if ((uint)*(byte *)(iVar4 + 0x58c8) == local_12 + 1U) {
          lookobj_124c_024c(uVar2,local_4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      local_18 = local_18 + 0x16;
      local_12 = local_12 + 1;
    } while (local_12 < 8);
    ultima_1000_1850(0x72fa);
    do {
      cVar3 = ultima_1000_1b38();
    } while (cVar3 == '\0');
  }
  else {
    ultima_1000_1850(0x72f0);
    if ((*(char *)0x587b == -1) && (iVar4 = ultima_1000_39fc(), iVar4 == 0)) {
      *(undefined *)0x587b = *(undefined *)0x5876;
    }
    ultima_1000_2a52(1,*(undefined *)0x587b);
    ultima_1000_2900();
  }
  return;
}



void lookobj_124c_0502(int param_1,int param_2,uint param_3)

{
  char cVar1;
  byte *pbVar2;
  byte bVar5;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  while (((param_3 == 0xe0 || (param_3 == 0xe1)) || (param_3 == 0xe2))) {
    if (param_3 == 0xe0) {
      param_1 = param_1 + -1;
    }
    else if (param_3 == 0xe1) {
      param_2 = param_2 + 1;
    }
    else if (param_3 == 0xe2) {
      param_2 = param_2 + -1;
    }
    pbVar2 = (byte *)ultima_1000_4402(param_1,param_2);
    param_3 = (uint)*pbVar2;
  }
  if (param_3 == 0x59) {
    lookobj_124c_0366();
  }
  else if (param_3 == 0xa1) {
    lookobj_124c_0042(*(undefined *)0x5895,*(undefined *)0x5897,*(undefined *)0x5896);
  }
  else if (((byte)param_3 & 0xfc) == 0xd8) {
    lookobj_124c_0162();
  }
  else {
    lookobj_124c_0000(param_3);
    if (((byte)param_3 & 0xfe) == 0xfa) {
      bVar5 = *(byte *)0x587f % 0xc;
      if (bVar5 == 0) {
        bVar5 = 0xc;
      }
      ultima_1000_1a3e(0x20,1,bVar5);
      ultima_1000_16ba(0x3a);
      ultima_1000_1a3e(0x30,2,*(undefined *)0x5881);
      if (*(byte *)0x587f < 0xc) {
        uVar3 = 0x7310;
      }
      else {
        uVar3 = 0x730a;
      }
    }
    else if (param_3 == 0xde) {
      cVar1 = *(char *)0x5893;
      if (cVar1 == '\x1e') {
        uVar3 = 0x7316;
      }
      else if (cVar1 == '\x1f') {
        uVar3 = 0x731e;
      }
      else {
        if (cVar1 != ' ') {
          return;
        }
        uVar3 = 0x7324;
      }
    }
    else {
      if (param_3 != 0xdf) {
        iVar4 = ultima_1000_1f12();
        if (iVar4 == 0) {
          return;
        }
        ultima_1000_16ba(10);
        return;
      }
      if (param_2 == 0x7e) {
        uVar3 = 0x734a;
      }
      else if (param_2 < 0x7f) {
        if (param_2 == 0x3a) {
          uVar3 = 0x735c;
        }
        else if (param_2 == 0x48) {
          uVar3 = 0x7340;
        }
        else {
          if (param_2 != 0x5b) {
            return;
          }
          uVar3 = 0x7336;
        }
      }
      else if (param_2 == 0x80) {
        uVar3 = 0x736e;
      }
      else if (param_2 == 0x9c) {
        uVar3 = 0x7352;
      }
      else if (param_2 == 0xef) {
        uVar3 = 0x7364;
      }
      else {
        if (param_2 != 0xf0) {
          return;
        }
        uVar3 = 0x732e;
      }
    }
    ultima_1000_1850(uVar3);
  }
  return;
}



void lookobj_124c_06a4(int param_1)

{
  int iVar1;
  undefined local_84 [128];
  undefined2 local_4;
  
  local_4 = 0;
  ultima_1000_256e(CONCAT11((char)((uint)(param_1 << 1) >> 8) + '\x02',(char)(param_1 << 1)),2,
                  &local_4,0x7374);
  ultima_1000_256e(local_4,0x80,local_84,0x737e);
  ultima_1000_1850(local_84);
  iVar1 = ultima_1000_1f12();
  if (iVar1 != 0) {
    ultima_1000_16ba(10);
  }
  return;
}



void lookobj_124c_06f8(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  if (param_1 == -1) {
    ultima_1000_1c9e(1);
    ultima_1000_1850(0x742a);
    ultima_1000_1850(0x745e);
    ultima_1000_1c9e(0);
  }
  else {
    for (param_1 = param_1 + 4; *(char *)(param_1 + -0x4de2) == '\n'; param_1 = param_1 + 6) {
    }
    do {
      bVar1 = *(byte *)(param_1 + -0x4de2);
      ultima_1000_1c9e((bVar1 & 0x80) == 0);
      if ((bVar1 == 0x26) || (bVar1 == 0x27)) {
        bVar1 = 0x6c;
LAB_124c_07b6:
        ultima_1000_16ba(bVar1);
      }
      else if ((bVar1 < 0x29) || (0x31 < bVar1)) {
        if (bVar1 != 0xd) {
          bVar1 = bVar1 & 0x7f;
          goto LAB_124c_07b6;
        }
        ultima_1000_1c9e(0);
        ultima_1000_266c();
      }
      else {
        ultima_1000_1c9e(1);
        for (pcVar3 = *(char **)((uint)bVar1 * 2 + 0x37be); *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
          ultima_1000_16ba(*pcVar3);
        }
      }
      pcVar3 = (char *)(param_1 + -0x4de1);
      param_1 = param_1 + 1;
    } while (*pcVar3 != '\0');
    ultima_1000_1c9e(0);
    iVar2 = ultima_1000_1f12();
    if (iVar2 != 0) {
      ultima_1000_16ba(10);
    }
  }
  return;
}



void lookobj_124c_07e4(char param_1,char param_2,char param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_48 [33];
  uint local_6;
  uint local_4;
  
  local_4 = 0;
  if ((((*(char *)0x5893 == '\x04') && (param_3 == '\0')) && (param_2 == '\x11')) &&
     (param_1 == '\x15')) {
    ultima_1000_1c9e(1);
    ultima_1000_1850(0x7492);
    ultima_1000_1c9e(0);
    ultima_1000_1850(0x74a8);
    ultima_1000_1c9e(1);
    ultima_1000_1850(0x74b4);
    uVar2 = ultima_1000_1cee(0xe);
    ultima_1000_1bf2(uVar2);
    ultima_1000_1850(0x74b8);
    local_6 = 0;
    iVar4 = 0x55a8;
    do {
      if (local_6 < *(byte *)0x585b) {
        ultima_1000_1c9e(0);
        iVar3 = ultima_1000_216c(iVar4);
        uVar2 = ultima_1000_1cee(-(iVar3 / 2 + -7));
        ultima_1000_1bf2(uVar2);
        ultima_1000_1850(iVar4);
        ultima_1000_1c9e(1);
      }
      uVar2 = ultima_1000_1cee(0xe);
      ultima_1000_1bf2(uVar2);
      ultima_1000_1850(0x74bc);
      iVar4 = iVar4 + 0x20;
      local_6 = local_6 + 1;
    } while ((int)local_6 < 3);
    uVar2 = ultima_1000_1cee(0xe);
    ultima_1000_1bf2(uVar2);
    ultima_1000_1850(0x74c0);
    ultima_1000_1c9e(0);
    ultima_1000_1850(0x74c4);
    ultima_1000_1c9e(1);
    ultima_1000_1850(0x74d2);
    ultima_1000_1c9e(0);
  }
  else {
    ultima_1000_256e(0,0x42,local_48,0x74e6);
    local_6 = local_48[*(uint *)0x5893 & 0xff];
    puVar5 = (undefined *)0xb21e;
    for (iVar4 = 2000; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar1 = 0xff;
    }
    if (local_6 == 0) {
      lookobj_124c_06f8(0xffff);
    }
    else {
      ultima_1000_256e(local_6,2000,0xb21e,0x74f0);
      local_6 = 0;
      iVar4 = 0;
      uVar6 = local_4;
      do {
        if (((*(char *)(iVar4 + -0x4de1) == param_3) && (*(char *)(iVar4 + -0x4de0) == param_2)) &&
           (*(char *)(iVar4 + -0x4ddf) == param_1)) {
          lookobj_124c_06f8(iVar4);
          uVar6 = uVar6 + 1;
        }
        else {
          iVar4 = iVar4 + 4;
          do {
            iVar3 = iVar4;
            iVar4 = iVar3 + 1;
          } while (*(char *)(iVar3 + -0x4de2) != '\0');
          uVar6 = (uint)(*(char *)(iVar3 + -0x4de1) == -1);
          if (uVar6 != 0) {
            lookobj_124c_06f8(0xffff);
          }
        }
      } while (uVar6 == 0);
    }
  }
  return;
}



void __cdecl16near lookobj_124c_099c(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  iVar2 = ultima_1000_35ec();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = (uint)*(byte *)0x5896 + *(int *)0x5876;
  iVar3 = (uint)*(byte *)0x5897 + *(int *)0x5878;
  pbVar4 = (byte *)ultima_1000_4402(iVar3,iVar2,iVar3);
  bVar1 = *pbVar4;
  iVar5 = ultima_1000_368e(*(undefined *)0x5895,iVar3,iVar2);
  if (bVar1 == 0x29) {
    iVar2 = ultima_1000_4988();
    if (iVar2 == -1) {
      return;
    }
    uVar6 = ultima_1000_2092(0x1e,1);
    if (*(byte *)(iVar2 * 0x20 + 0x55b6) <= uVar6) {
      ultima_1000_1850(0x74fa);
      ultima_1000_2a52(1,iVar2);
      ultima_1000_2900();
      return;
    }
    ultima_1000_1850(0x750a);
    lookobj_124c_10fc(*(undefined *)0x5897,*(undefined *)0x5896);
    return;
  }
  ultima_1000_1850(0x751c);
  if (iVar5 != 0) {
    lookobj_124c_06a4(iVar5);
    return;
  }
  if (bVar1 != 0xa0) {
    if (bVar1 < 0xa1) {
      if ((bVar1 < 0x89) || (0x8a < bVar1)) {
LAB_124c_0a8c:
        lookobj_124c_0502(iVar3,iVar2,bVar1);
        return;
      }
    }
    else if ((bVar1 != 0xa4) && (bVar1 != 0xf8)) goto LAB_124c_0a8c;
  }
  ultima_1000_1850(0x752c);
  lookobj_124c_07e4(iVar3,iVar2,*(undefined *)0x5895);
  return;
}



void lookobj_124c_0a9c(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  *(int *)0x5876 = param_2 * 4 + 0x20;
  *(int *)0x5878 = param_1 * 4 + 0x20;
  return;
}



void __cdecl16near lookobj_124c_0abe(void)

{
  undefined2 unaff_DS;
  
  ultima_1000_0a70(*(int *)0x13b4 + 8);
  ultima_1000_0c64(*(undefined2 *)0x5878,*(int *)0x5876 + 1);
  ultima_1000_0c64(*(int *)0x5878 + 2,*(int *)0x5876 + 1);
  ultima_1000_0c64(*(int *)0x5878 + 1,*(int *)0x5876 + 3);
  ultima_1000_0c64(*(int *)0x5878 + 3,*(int *)0x5876 + 3);
  return;
}



void __cdecl16near lookobj_124c_0c36(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  ultima_1000_0a70(*(undefined2 *)0x13b8);
  ultima_1000_0b10(*(undefined2 *)0x5878,*(int *)0x5876 + 1,*(undefined2 *)0x5878,
                  *(undefined2 *)0x5876);
  iVar1 = *(int *)0x5878 + 1;
  ultima_1000_0b10(iVar1,*(int *)0x5876 + 1,iVar1,*(undefined2 *)0x5876);
  iVar1 = *(int *)0x5878 + 2;
  ultima_1000_0b10(iVar1,*(int *)0x5876 + 3,iVar1,*(int *)0x5876 + 2);
  iVar1 = *(int *)0x5878 + 3;
  ultima_1000_0b10(iVar1,*(int *)0x5876 + 3,iVar1,*(int *)0x5876 + 2);
  return;
}



void __cdecl16near lookobj_124c_0c9c(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  ultima_1000_0a70(*(int *)0x13b4 + 8);
  ultima_1000_0b10(*(undefined2 *)0x5878,*(int *)0x5876 + 3,*(undefined2 *)0x5878,
                  *(undefined2 *)0x5876);
  iVar1 = *(int *)0x5878 + 2;
  ultima_1000_0b10(iVar1,*(int *)0x5876 + 3,iVar1,*(undefined2 *)0x5876);
  ultima_1000_0c64(*(int *)0x5878 + 1,*(int *)0x5876 + 2);
  ultima_1000_0c64(*(int *)0x5878 + 3,*(undefined2 *)0x5876);
  return;
}



void lookobj_124c_0cf4(uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 unaff_DS;
  int *local_1a;
  int local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  uVar5 = 8;
  iVar1 = *(int *)0x13b2;
  iVar2 = *(int *)0x13b4;
  bVar3 = *(byte *)((param_1 & 0xf) + 0x3822);
  piVar7 = &local_a;
  local_1a = &local_a;
  piVar6 = &local_a;
  iVar4 = *(int *)0x52c8;
  do {
    if ((((byte)param_1 & 0xf0) == 0x60) && ((bVar3 & uVar5) == 0)) {
      *piVar7 = iVar2 + 8;
    }
    else if ((iVar4 == 0) || (iVar4 == 3)) {
      *local_1a = *(int *)0x13b6;
    }
    else {
      *piVar6 = iVar1 + 8;
    }
    uVar5 = (int)uVar5 >> 1;
    piVar7 = piVar7 + 1;
    local_1a = local_1a + 1;
    piVar6 = piVar6 + 1;
  } while (piVar6 < &stack0xfffe);
  ultima_1000_0a70(local_a);
  ultima_1000_0c64(*(undefined2 *)0x5878,*(int *)0x5876 + 1);
  ultima_1000_0a70(local_8);
  ultima_1000_0c64(*(int *)0x5878 + 1,*(int *)0x5876 + 3);
  ultima_1000_0a70(local_6);
  ultima_1000_0c64(*(int *)0x5878 + 2,*(int *)0x5876 + 1);
  ultima_1000_0a70(local_4);
  ultima_1000_0c64(*(int *)0x5878 + 3,*(int *)0x5876 + 3);
  return;
}



void __cdecl16near lookobj_124c_0dda(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
    iVar1 = *(int *)0x13b6;
  }
  else {
    iVar1 = *(int *)0x13b2 + 8;
  }
  ultima_1000_0a70(iVar1);
  ultima_1000_0c64(*(undefined2 *)0x5878,*(undefined2 *)0x5876);
  ultima_1000_0c64(*(int *)0x5878 + 2,*(int *)0x5876 + 2);
  return;
}



void __cdecl16near lookobj_124c_0e16(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  ultima_1000_0a70(*(int *)0x13b4 + 8);
  ultima_1000_0c64(*(undefined2 *)0x5878,*(int *)0x5876 + 1);
  ultima_1000_0c64(*(int *)0x5878 + 1,*(int *)0x5876 + 3);
  if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
    iVar1 = *(int *)0x13b6;
  }
  else {
    iVar1 = *(int *)0x13b2 + 8;
  }
  ultima_1000_0a70(iVar1);
  ultima_1000_0c64(*(int *)0x5878 + 2,*(undefined2 *)0x5876);
  ultima_1000_0c64(*(int *)0x5878 + 3,*(int *)0x5876 + 2);
  return;
}



void lookobj_124c_0e7a(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  lookobj_124c_0abe();
  ultima_1000_0a70(*(undefined2 *)0x13ae);
  ultima_1000_0aa6(*(int *)0x5878 + 2,*(int *)0x5876 + 2,*(int *)0x5878 + 1,*(int *)0x5876 + 1);
  bVar1 = *(byte *)(param_1 + 0x3812);
  if ((bVar1 & 8) != 0) {
    ultima_1000_0b10(*(undefined2 *)0x5878,*(int *)0x5876 + 2,*(undefined2 *)0x5878,
                    *(int *)0x5876 + 1);
  }
  if ((bVar1 & 4) != 0) {
    iVar3 = *(int *)0x5876 + 3;
    ultima_1000_0b10(*(int *)0x5878 + 2,iVar3,*(int *)0x5878 + 1,iVar3);
  }
  if ((bVar1 & 2) != 0) {
    iVar3 = *(int *)0x5878 + 3;
    ultima_1000_0b10(iVar3,*(int *)0x5876 + 2,iVar3,*(int *)0x5876 + 1);
  }
  if ((bVar1 & 1) != 0) {
    ultima_1000_0b10(*(int *)0x5878 + 2,*(undefined2 *)0x5876,*(int *)0x5878 + 1,
                    *(undefined2 *)0x5876);
  }
  ultima_1000_0a70(0);
  if (param_1 == 0x22) {
    iVar3 = *(int *)0x5876 + 1;
LAB_124c_0f4c:
    iVar2 = *(int *)0x5878 + 2;
  }
  else {
    if (param_1 == 0x23) {
      iVar3 = *(int *)0x5876 + 1;
    }
    else {
      if (param_1 != 0x24) {
        if (param_1 != 0x25) {
          return;
        }
        iVar3 = *(int *)0x5876 + 2;
        goto LAB_124c_0f4c;
      }
      iVar3 = *(int *)0x5876 + 2;
    }
    iVar2 = *(int *)0x5878 + 1;
  }
  ultima_1000_0c64(iVar2,iVar3);
  return;
}



void lookobj_124c_0f7e(undefined2 param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_3 + 0x1d1a);
  lookobj_124c_0a9c(param_1,param_2);
  if (uVar1 == 8) {
    lookobj_124c_0c36();
  }
  else if (uVar1 < 9) {
    if (uVar1 < 8) {
                    // WARNING: Could not emulate address calculation at 0x00013472
                    // WARNING: Treating indirect jump as call
      (**(code **)(uVar1 * 2 + -0x4cd2))();
      return;
    }
  }
  else if (uVar1 == 0xc) {
    if ((*(int *)0x52c8 == 0) || (*(int *)0x52c8 == 3)) {
      iVar2 = *(int *)0x13b6;
    }
    else {
      iVar2 = *(int *)0x13b2 + 8;
    }
    ultima_1000_0a70(iVar2);
    ultima_1000_0c64(*(int *)0x5878 + 2,*(int *)0x5876 + 2);
  }
  else if (uVar1 < 0xd) {
    if (uVar1 == 9) {
      lookobj_124c_0c9c();
    }
    else if (uVar1 == 10) {
      lookobj_124c_0cf4(param_3);
    }
    else if (uVar1 == 0xb) {
      lookobj_124c_0dda();
    }
  }
  else if (uVar1 == 0xd) {
    lookobj_124c_0e16();
  }
  else if (uVar1 == 0xe) {
    ultima_1000_0a70(*(undefined2 *)0x13b0);
    iVar2 = *(int *)0x5876 + 1;
    ultima_1000_0b10(*(int *)0x5878 + 3,iVar2,*(undefined2 *)0x5878,iVar2);
    iVar2 = *(int *)0x5876 + 2;
    ultima_1000_0b10(*(int *)0x5878 + 3,iVar2,*(undefined2 *)0x5878,iVar2);
  }
  else {
    if (uVar1 == 0xf) {
      iVar2 = *(int *)0x13b2 + 8;
    }
    else {
      if (uVar1 == 0x10) {
        lookobj_124c_0e7a(param_3);
        return;
      }
      if (uVar1 != 0x5a) {
        return;
      }
      iVar2 = *(int *)0x13b0;
    }
    ultima_1000_0a70(iVar2);
    ultima_1000_0aa6(*(int *)0x5878 + 3,*(int *)0x5876 + 3,*(undefined2 *)0x5878,
                    *(undefined2 *)0x5876);
  }
  return;
}



void lookobj_124c_10fc(char param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_DS;
  
  cVar1 = *(char *)0x589b;
  cVar2 = *(char *)0x589c;
  ultima_1000_0c22(1);
  ultima_1000_0a70(0);
  ultima_1000_0aa6(0xb7,0xb7,8,8);
  iVar5 = 0;
  do {
    iVar4 = 0;
    do {
      puVar3 = (undefined *)
               ultima_1000_4402((uint)*(byte *)0x589c + iVar5,(uint)*(byte *)0x589b + iVar4);
      lookobj_124c_0f7e(iVar5,iVar4,*puVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x20);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x20);
  ultima_1000_0ace(0xb7,0xb7,8,8,0,1);
  ultima_1000_0c22(0);
  lookobj_124c_0a9c(param_1 - cVar2,param_2 - cVar1);
  iVar5 = 0;
  while( true ) {
    iVar4 = ultima_1000_1b38();
    if (iVar4 != 0) break;
    iVar5 = iVar5 + 1;
    if (iVar5 == 4) {
      iVar5 = 0;
      ultima_1000_0a70(*(undefined2 *)0x13b0);
      ultima_1000_0b86(*(int *)0x5878 + 3,*(int *)0x5876 + 3,*(undefined2 *)0x5878,
                      *(undefined2 *)0x5876);
    }
  }
  ultima_1000_5910();
  return;
}


