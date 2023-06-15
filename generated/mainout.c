typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned int    undefined2;



void __cdecl16near mainout_1040_0000(void)

{
  undefined2 unaff_DS;
  
  ultima_1000_4be8();
  ultima_1000_4f7c();
  *(undefined *)0x24e6 = 1;
  *(undefined *)0x5956 = 1;
  *(undefined *)0x58a4 = 1;
  *(undefined *)0x5955 = 0;
  *(byte *)0x589b = *(byte *)0x5896 & 0xf0;
  if ((*(byte *)0x5896 & 0xf) < 8) {
    *(byte *)0x589b = *(char *)0x589b - 0x10U & 0xf0;
  }
  *(byte *)0x589c = *(byte *)0x5897 & 0xf0;
  if ((*(byte *)0x5897 & 0xf) < 8) {
    *(byte *)0x589c = *(char *)0x589c - 0x10U & 0xf0;
  }
  func_0x0001fdba(1);
  func_0x0001fdba(0xffff,0);
  ultima_1000_4f7c(0);
  ultima_1000_5e4a();
  ultima_1000_2e96(0xffff);
  ultima_1000_4a84();
  func_0x0001fdc6();
  return;
}



void __cdecl16near mainout_1040_007a(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)0x5896 - (uint)*(byte *)0x5c64;
  uVar3 = (int)uVar1 >> 0xf;
  uVar2 = (uint)*(byte *)0x5897 - (uint)*(byte *)0x5c65;
  uVar4 = (int)uVar2 >> 0xf;
  if ((((*(char *)0x5c62 != '\0') && (*(char *)0x5c66 == *(char *)0x5895)) &&
      ((int)((uVar1 ^ uVar3) - uVar3) < 6)) && ((int)((uVar2 ^ uVar4) - uVar4) < 6)) {
    ultima_1000_3ae6(1);
  }
  return;
}



undefined2 mainout_1040_00da(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)0x587c & 0xfc;
  if (bVar2 == 0x10) {
    ultima_1000_1850(0x2946);
    if (param_1 == 1) {
      *(undefined *)0x587c = 0x12;
      return 0;
    }
    if (param_1 != 3) {
      return 0;
    }
    *(undefined *)0x587c = 0x13;
    return 0;
  }
  if (bVar2 == 0x14) {
    ultima_1000_1850(0x294c);
    if (param_1 == 1) {
      *(undefined *)0x587c = 0x14;
      return 0;
    }
    if (param_1 != 3) {
      return 0;
    }
    *(undefined *)0x587c = 0x15;
    return 0;
  }
  if ((bVar2 != 0x20) && (bVar2 != 0x24)) {
    if (bVar2 != 0x28) {
      return 0;
    }
    ultima_1000_1850(0x2951);
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
  ultima_1000_1850(0x2956);
  if (param_1 == 0) {
    uVar4 = 0x295c;
  }
  else if (param_1 == 1) {
    uVar4 = 0x296a;
  }
  else if (param_1 == 2) {
    uVar4 = 0x2963;
  }
  else {
    if (param_1 != 3) goto LAB_1040_01ad;
    uVar4 = 0x2970;
  }
  ultima_1000_1850(uVar4);
LAB_1040_01ad:
  *(undefined *)0x5956 = 1;
  if (*(byte *)0x5c5f < 0x32) {
    ultima_1000_1850(0x2976);
  }
  return 1;
}



int mainout_1040_01fe(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  byte local_6;
  
  if ((*(byte *)0x587c & 0xfc) == 0x24) {
    ultima_1000_1850(0x2982);
  }
  bVar3 = true;
  iVar4 = ultima_1000_368e(*(undefined *)0x5895,param_1 + (uint)*(byte *)0x5897,
                          param_2 + (uint)*(byte *)0x5896);
  local_6 = (byte)iVar4;
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(byte *)0x587c < 0x30) && (0x1f < *(byte *)0x587c)) {
      if ((0x27 < *(byte *)0x587c) && ((0x23 < iVar4 && (iVar4 < 0x28)))) {
LAB_1040_0283:
        bVar3 = true;
      }
    }
    else if (((0x23 < iVar4) && (iVar4 < 0x2c)) || ((iVar4 == 0x1b || ((local_6 & 0xfe) == 0x10))))
    goto LAB_1040_0283;
  }
  cVar2 = *(char *)(param_2 + param_1 * 0x20 + -0x5459);
  if ((bVar3) && (iVar4 = ultima_1000_2c4c(cVar2,*(undefined *)0x587c), iVar4 != 0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*(char *)0x5955 == '\0') {
    if ((0x1f < *(byte *)0x587c) && ((local_6 & 0xfc) == 0xec)) {
      return 0;
    }
    ultima_1000_1850(0x29ae);
    if (cVar2 == '/') {
      ultima_1000_1850(0x29b8);
      ultima_1000_2aa8();
    }
    else {
      ultima_1000_22c0(200,0xa5);
    }
    ultima_1000_1b16();
    return 0;
  }
  if (cVar2 == '\x03') {
    uVar5 = 0x298b;
  }
  else {
    if (cVar2 == 'G') goto LAB_1040_02df;
    uVar5 = 0x2999;
  }
  ultima_1000_1850(uVar5);
LAB_1040_02df:
  if (cVar2 == 'G') {
    ultima_1000_1850(0x29a5);
    pcVar1 = (char *)0x587c;
    *pcVar1 = *pcVar1 + '\x04';
  }
  else {
    ultima_1000_223c(300,2000,100);
    mainout_1040_109e();
  }
  *(undefined *)0x5955 = 0;
  *(undefined *)0x5956 = 1;
  return 0;
}



void mainout_1040_0354(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)0x5896;
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)0x5897;
  *pcVar1 = *pcVar1 + (char)param_1;
  *(undefined *)0x24e6 = 1;
  bVar2 = *(char *)0x5896 - *(char *)0x589b & 0x1f;
  bVar3 = *(char *)0x5897 - *(char *)0x589c & 0x1f;
  if ((((bVar2 < 5) || (0x1a < bVar2)) || (bVar3 < 5)) || (0x1a < bVar3)) {
    func_0x0001fe02(param_1,param_2,bVar3);
    *(byte *)0x589b = (char)param_2 * '\x10' + *(char *)0x589b & 0xf0;
    *(byte *)0x589c = (char)param_1 * '\x10' + *(char *)0x589c & 0xf0;
    func_0x0001fdba(param_1,param_2);
    ultima_1000_5e4a();
  }
  return;
}



void __cdecl16near mainout_1040_03e0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6;
  
  pbVar2 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  bVar1 = *pbVar2;
  if (bVar1 == 5) {
LAB_1040_0406:
    local_6 = 0;
  }
  else {
    if ((bVar1 != 0x1e) && (bVar1 != 0x1f)) {
      if ((bVar1 < 4) || (0xf < bVar1)) goto LAB_1040_0406;
      if (8 < bVar1) {
        local_6 = 2;
        goto LAB_1040_041f;
      }
    }
    local_6 = 1;
  }
LAB_1040_041f:
  if (local_6 == 1) {
    iVar3 = mainout_1040_1a60();
    mainout_1040_007a();
    if (iVar3 == 0) {
      ultima_1000_1850(0x29bf);
    }
    uVar5 = 2;
  }
  else {
    if (local_6 != 2) {
      return;
    }
    iVar3 = mainout_1040_1a60();
    mainout_1040_007a();
    iVar4 = mainout_1040_1a60();
    mainout_1040_007a();
    if (iVar3 + iVar4 == 0) {
      ultima_1000_1850(0x29cf);
    }
    uVar5 = 4;
  }
  ultima_1000_4f7c(uVar5);
  return;
}



int mainout_1040_0490(int param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((*(byte *)0x587c & 0xfc) == 0x20) {
    if (param_2 != *(byte *)0x5955) {
      *(undefined *)0x5955 = (undefined)param_2;
      *(undefined *)0x5883 = 0;
    }
    *(undefined *)0x5956 = 0;
  }
  if ((*(char *)0x587c == '\x1c') || ((*(byte *)0x587c & 0xfe) == 0x12)) {
    func_0x0001c56e();
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == 1) {
    uVar4 = 0xffff;
    iVar1 = mainout_1040_00da(3,0,0xffff);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_1040_050e;
    uVar2 = 0x29ef;
  }
  else if (param_2 == 2) {
    uVar4 = 1;
    iVar1 = mainout_1040_00da(1,0,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_1040_050e;
    uVar2 = 0x29e9;
  }
  else if (param_2 == 3) {
    uVar3 = 0xffff;
    iVar1 = mainout_1040_00da(0,0xffff);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_1040_050e;
    uVar2 = 0x29db;
  }
  else {
    if (param_2 != 4) goto LAB_1040_050e;
    uVar3 = 1;
    iVar1 = mainout_1040_00da(2,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)0x5955 != '\0') goto LAB_1040_050e;
    uVar2 = 0x29e2;
  }
  ultima_1000_1850(uVar2);
LAB_1040_050e:
  iVar1 = mainout_1040_01fe(uVar3,uVar4);
  if ((param_1 == 0) && (iVar1 != 0)) {
    if ((*(byte *)0x587c & 0xfe) == 0x12) {
      func_0x0001c56e();
    }
    mainout_1040_0354(uVar3,uVar4);
    mainout_1040_03e0();
  }
  return iVar1;
}



uint __cdecl16near mainout_1040_0598(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 unaff_DS;
  uint local_6;
  
  ultima_1000_5910();
  if (*(char *)0xa9fa != '\0') {
    ultima_1000_2900();
    *(undefined *)0xa9fa = 0;
  }
  if ((*(byte *)0xabc7 & 0xfc) == 0xd4) {
    func_0x0001fd72();
    local_6 = 0;
  }
  else {
    if (*(char *)0x5956 != '\0') {
      ultima_1000_16ba(10);
      ultima_1000_4c2a();
    }
    *(undefined *)0x5956 = 1;
    while (*(char *)0x5955 != '\0') {
      uVar4 = ultima_1000_1b38();
      local_6 = ultima_1000_2032(uVar4);
      if ((local_6 != 0) && (local_6 != *(byte *)0x5955)) break;
      local_6 = (uint)*(byte *)0x5955;
      if (*(char *)0x5892 != '\0') {
        cVar3 = '\0';
        cVar2 = '\0';
        if (local_6 == 1) {
          cVar2 = -1;
        }
        else if (local_6 == 2) {
          cVar2 = '\x01';
        }
        else if (local_6 == 3) {
          cVar3 = -1;
        }
        else if (local_6 == 4) {
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
          *(undefined *)0x5883 = 0;
          break;
        }
      }
      if (*(byte *)0x57bb < 0x80) {
        uVar4 = 2;
      }
      else {
        *(uint *)0xa524 = (uint)(*(int *)0xa524 == 0);
        uVar4 = 1;
      }
      ultima_1000_4f7c(uVar4);
      if ((*(int *)0xa524 == 0) || (*(byte *)0x57bb < 0x80)) {
        mainout_1040_1a60();
      }
      ultima_1000_3ae6(1);
      pcVar1 = (char *)0x5883;
      *pcVar1 = *pcVar1 + '\x01';
    }
    if (*(char *)0x5955 == '\0') {
      local_6 = ultima_1000_266c();
    }
  }
  return local_6;
}



undefined2 __cdecl16near mainout_1040_06ec(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  ultima_1000_1850(0x29fe);
  pbVar1 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  if ((*pbVar1 < 4) && (((*(byte *)0x587c & 0xfc) == 0x28 || ((*(byte *)0x587c & 0xfe) == 0x14)))) {
    ultima_1000_1850(0x2a06);
  }
  else {
    iVar2 = ultima_1000_35ec();
    if (iVar2 != 0) {
      iVar3 = (uint)*(byte *)0x5896 + *(int *)0x5876;
      iVar4 = (uint)*(byte *)0x5897 + *(int *)0x5878;
      iVar2 = iVar4;
      uVar5 = ultima_1000_368e(*(undefined *)0x5895,iVar4,iVar3);
      uVar5 = uVar5 & 0xfc;
      if ((uVar5 == 0x2c) || (((uVar5 != 0xb4 && (uVar5 != 0xe8)) && (0x3f < uVar5)))) {
        ultima_1000_6150(*(undefined2 *)0x5876);
      }
      else {
        ultima_1000_1850(0x2a10,iVar4,iVar3,uVar5,iVar2);
      }
    }
  }
  return 0;
}



undefined2 mainout_1040_0790(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  char local_4;
  
  ultima_1000_1850(param_1);
  iVar3 = 0x20;
  do {
    if ((*(char *)(iVar3 + 0x1e8a) == *(char *)0x5896) &&
       (*(char *)(iVar3 + 0x1eb2) == *(char *)0x5897)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x28);
  if (iVar3 < 0x28) {
    if (*(char *)0x587c != '\x1c') {
      uVar1 = ultima_1000_1850(0x2a24);
      return uVar1;
    }
    if (iVar3 == 0x27) {
      if ((*(byte *)0x58c8 & *(byte *)0x58c9 & *(byte *)0x58ca) < 0x80) {
        ultima_1000_1850(0x2a2f);
        iVar3 = ultima_1000_38e4();
        *(undefined *)(iVar3 * 8 + 0x5c5a) = 0xfc;
        uVar1 = ultima_1000_6150(iVar3,iVar3);
        return uVar1;
      }
    }
    else {
      ultima_1000_1850(0x2a47);
      ultima_1000_16ba(0xfc);
      ultima_1000_1850(*(undefined2 *)(iVar3 * 2 + 0x1e3a));
      ultima_1000_16ba(0xfb);
    }
    ultima_1000_16ba(10);
    if (*(char *)0xa9bd != '\x01') {
      ultima_1000_251e(1);
      do {
        iVar2 = ultima_1000_1674(0x2a4a);
      } while (iVar2 == 0);
    }
    uVar1 = func_0x0001fc52();
    func_0x0001a808(0x100,0x5c5a,uVar1);
    ultima_1000_251e(2);
    ultima_1000_256e(iVar3 * 0x200 + -0x4000,0x200,0x595a,0x2a53);
    local_4 = (char)iVar3;
    *(char *)0x5893 = local_4 + '\x01';
    if ((*(char *)0x5895 == '\0') || ((char)(local_4 + '\x01') == '(')) {
      *(undefined *)0x5895 = 0;
      *(undefined *)0x5897 = 1;
      *(undefined *)0x5896 = 1;
      *(undefined *)0x6603 = 1;
      *(undefined *)0x6602 = 5;
    }
    else {
      *(undefined *)0x5895 = 7;
      *(undefined *)0x6603 = 3;
      *(undefined *)0x6602 = 4;
      *(undefined *)0x5897 = 7;
      *(undefined *)0x5896 = 7;
    }
  }
  else {
    ultima_1000_1850(0x2a5f);
  }
  return 1;
}



undefined2 __cdecl16near mainout_1040_08de(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  ultima_1000_1850(0x2a6f);
  pbVar2 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  bVar1 = *pbVar2;
  if (bVar1 == 0x16) {
    uVar3 = 0x2abd;
LAB_1040_09ab:
    local_4 = mainout_1040_0790(uVar3);
  }
  else {
    if (bVar1 < 0x17) {
      if (bVar1 == 0x10) {
        uVar3 = 0x2a85;
      }
      else {
        if (bVar1 == 0x11) {
          ultima_1000_1850(0x2a89);
          goto LAB_1040_0968;
        }
        if (bVar1 == 0x12) {
          uVar3 = 0x2aa3;
        }
        else if (bVar1 == 0x13) {
          uVar3 = 0x2aa8;
        }
        else if (bVar1 == 0x14) {
          uVar3 = 0x2ab0;
        }
        else {
          if (bVar1 != 0x15) goto LAB_1040_09ee;
          uVar3 = 0x2ab6;
        }
      }
    }
    else {
      if (bVar1 == 0x19) {
        ultima_1000_1850(0x2a76);
        iVar4 = 0;
        do {
          if ((*(char *)(iVar4 + 0x1f6e) == *(char *)0x5896) &&
             (*(char *)(iVar4 + 0x1f76) == *(char *)0x5897)) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        ultima_1000_1850(*(undefined2 *)(iVar4 * 2 + 0x1f4e));
        ultima_1000_16ba(10);
LAB_1040_0968:
        func_0x0001fc9a();
        return 1;
      }
      if (bVar1 < 0x1a) {
        if (bVar1 == 0x17) {
          uVar3 = 0x2ac2;
        }
        else {
          if (bVar1 != 0x18) {
LAB_1040_09ee:
            ultima_1000_1850(0x2b16);
            return 0;
          }
          uVar3 = 0x2ac7;
        }
        goto LAB_1040_09ab;
      }
      if (bVar1 == 0x1a) {
        ultima_1000_1850(0x2acf);
        return 1;
      }
      if (bVar1 == 0x1b) {
        uVar3 = 0x2ad5;
      }
      else if (bVar1 == 0x39) {
        uVar3 = 0x2ae0;
      }
      else {
        if (bVar1 != 0x3e) goto LAB_1040_09ee;
        uVar3 = 0x2afa;
      }
    }
    local_4 = func_0x0001fdea(uVar3);
  }
  return local_4;
}



int mainout_1040_0a1a(int param_1)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
  if ((*pcVar1 == -1) && (*(char *)0x587a != '\x0e')) {
    *(undefined *)0x58a5 = 0;
    if (param_1 == 0) {
      ultima_1000_5910();
      param_1 = 1;
    }
  }
  else {
    param_1 = 0;
    ultima_1000_4f7c(0);
  }
  return param_1;
}



void __cdecl16near mainout_1040_0a60(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(char *)0x5895 != '\0') {
    iVar1 = ultima_1000_2092(0xff,0);
    if (iVar1 == 0x69) {
      ultima_1000_1850(0x2b1d);
      ultima_1000_3072();
      ultima_1000_2aa8();
    }
  }
  return;
}



void __cdecl16near mainout_1040_0a84(void)

{
  char *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  int local_a;
  undefined2 local_4;
  
  local_4 = 0;
  do {
    bVar2 = false;
    local_a = 1;
    local_4 = mainout_1040_0a1a(local_4);
    iVar4 = ultima_1000_39fc();
    if (iVar4 == 1) {
      ultima_1000_16ba(10);
      ultima_1000_4c2a();
      uVar5 = 0x2b2a;
LAB_1040_0aba:
      uVar8 = 0xebe;
      ultima_1000_1850(uVar5);
    }
    else if (iVar4 == -1) {
      if (*(char *)0xa9bd != '\x01') {
        ultima_1000_251e(1);
        do {
          iVar4 = ultima_1000_1674(0x2b35);
        } while (iVar4 == 0);
      }
      uVar5 = func_0x0001fc52();
      uVar8 = 0x5c5a;
      func_0x0001a808(0x100,0x5c5a,uVar5);
      func_0x0001fc8e();
      bVar2 = true;
      local_a = 0;
    }
    else {
      iVar4 = ultima_1000_48a8();
      if (iVar4 != 0) {
        func_0x0001fc9a();
      }
      if (*(char *)0x5893 != '\0') {
        return;
      }
      bVar3 = mainout_1040_0598();
      if (bVar3 < 0x20) {
        if (bVar3 < 0x17) {
                    // WARNING: Could not emulate address calculation at 0x00010f2e
                    // WARNING: Treating indirect jump as call
          (**(code **)((uint)bVar3 * 2 + -0x7272))();
          return;
        }
        uVar5 = 0x2b64;
        goto LAB_1040_0aba;
      }
      if ((bVar3 < 0x30) || (0x39 < bVar3)) {
        uVar8 = 0x1003;
        local_a = ultima_1000_3178(bVar3);
      }
      else {
        uVar8 = 0x100f;
        local_a = ultima_1000_4080(bVar3);
      }
    }
    if ((*(byte *)0x587c & 0xfc) != 0x20) {
      *(undefined *)0x5955 = 0;
    }
    if (*(char *)0x5893 == '\0') {
      if (local_a != 0) {
        ultima_1000_4f7c(2,uVar8);
        pbVar6 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
        bVar3 = *pbVar6;
        uVar7 = (uint)bVar3;
        if ((bVar3 & 0xfe) == 0x6a) {
          mainout_1040_1be8();
        }
        else if ((uVar7 == 4) && (*(char *)0x587c == '\x1c')) {
          func_0x0001fd7e();
          ultima_1000_3ae6(1);
        }
        else if (uVar7 == 0x8f) {
          func_0x0001fd8a();
        }
        else if ((((*(char *)0x5896 == -0x17) && (*(char *)0x5897 == -0x15)) &&
                 (*(char *)0x5895 == '\0')) && (*(char *)0x5893 == '\0')) {
          ultima_1000_1850(0x2b6b);
          if (*(char *)0x58cc == '\0') {
            ultima_1000_1850(0x2b7e);
            ultima_1000_1850(0x2ba1);
            pcVar1 = (char *)0x5897;
            *pcVar1 = *pcVar1 + '\x01';
          }
          else {
            ultima_1000_1850(0x2b6e);
          }
        }
        mainout_1040_0a60();
        ultima_1000_2ae8();
        if ((uVar7 == 1) &&
           (((*(byte *)0x587c & 0xfc) == 0x28 || ((*(byte *)0x587c & 0xfe) == 0x14)))) {
          ultima_1000_1850(0x2bb3);
          ultima_1000_3522(*(undefined *)0x5897,*(undefined *)0x5896);
          mainout_1040_109e();
        }
        if (((byte)uVar7 & 0xfc) == 0xd4) {
          func_0x0001fd72();
        }
        mainout_1040_1a60();
      }
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return;
    }
  } while( true );
}



void __cdecl16near mainout_1040_0d22(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined local_8;
  
  mainout_1040_0000();
  if (0x3f < *(byte *)0x6605) {
    iVar1 = ultima_1000_38e4();
    iVar1 = iVar1 * 8;
    *(byte *)(iVar1 + 0x5c61) = *(byte *)0x6605 & 0x3f;
    *(undefined *)(iVar1 + 0x5c5c) = *(undefined *)0x5953;
    *(undefined *)(iVar1 + 0x5c5d) = *(undefined *)0x5954;
    *(undefined *)(iVar1 + 0x5c5e) = 0;
    if (*(byte *)0x6605 < 0x80) {
      local_8 = 0x29;
    }
    else {
      local_8 = 0x25;
    }
    *(undefined *)(iVar1 + 0x5c5b) = local_8;
    *(undefined *)(iVar1 + 0x5c5a) = local_8;
    *(undefined *)(iVar1 + 0x5c5f) = 99;
    *(undefined *)0x6605 = 0;
  }
  mainout_1040_0a84();
  return;
}



int __cdecl16near mainout_1040_0d8c(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  int local_4;
  
  if (*(byte *)0x5895 < 0x80) {
    pbVar2 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
    bVar1 = *pbVar2;
    if ((bVar1 < 0x20) || (0x26 < bVar1)) {
      if ((bVar1 == 4) || ((8 < bVar1 && (bVar1 < 0x10)))) {
        local_4 = 2;
      }
      else {
        local_4 = 1;
      }
    }
    else {
      local_4 = 0;
    }
    if ((0x1f < *(byte *)0x587f) || (*(byte *)0x587f < 5)) {
      local_4 = local_4 + 3;
    }
  }
  else {
    local_4 = 3;
  }
  return local_4;
}



int mainout_1040_0e04(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  uVar1 = ultima_1000_2092(0xff,0);
  iVar2 = 0;
  for (; *(byte *)(iVar2 + param_1) <= uVar1; uVar1 = uVar1 - *pbVar3) {
    pbVar3 = (byte *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



undefined mainout_1040_0e4e(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((((param_1 < 4) || ((0x5f < param_1 && (param_1 < 0x70)))) ||
      ((0xd3 < param_1 && (param_1 < 0xd8)))) || ((0xe3 < param_1 && (param_1 < 0xe8)))) {
    iVar1 = ultima_1000_2092(0x40,0);
    if (iVar1 < 0x10) {
      if (0x7f < *(byte *)0x5895) {
        iVar1 = mainout_1040_0e04(0x2bf6);
        return *(undefined *)(iVar1 + 0x2bda);
      }
      if ((param_1 == 1) && (iVar1 = ultima_1000_2092(7,0), iVar1 == 7)) {
        return 0xec;
      }
      iVar1 = mainout_1040_0e04(0x2bf0);
      return *(undefined *)(iVar1 + 0x2bd4);
    }
  }
  else if (param_1 == 7) {
    iVar1 = ultima_1000_2092(3,0);
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
        iVar1 = mainout_1040_0e04(0x2bdc);
        return *(undefined *)(iVar1 + 0x2bc0);
      }
      iVar1 = mainout_1040_0e04(0x2be8);
      return *(undefined *)(iVar1 + 0x2bcc);
    }
  }
  return 0;
}



void __cdecl16near mainout_1040_0f4e(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  do {
    do {
      cVar1 = ultima_1000_2092(0x1f,0);
      *(uint *)0x5876 = (uint)(byte)(cVar1 + *(char *)0x589b);
      cVar1 = ultima_1000_2092(0x1f,0);
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



void __cdecl16near mainout_1040_0fc4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined2 unaff_DS;
  int local_6;
  
  local_6 = 0;
  do {
    mainout_1040_0f4e();
    uVar1 = *(undefined2 *)0x5876;
    uVar2 = *(undefined2 *)0x5878;
    puVar4 = (undefined *)ultima_1000_4402(uVar2,uVar1);
    cVar3 = mainout_1040_0e4e(*puVar4);
    if ((cVar3 != '\0') &&
       ((cVar3 != ',' || (pbVar5 = (byte *)ultima_1000_4402(uVar2,uVar1), (*pbVar5 & 0xf0) != 0x60)))
       ) break;
    local_6 = local_6 + 1;
  } while (local_6 < 0x80);
  if (local_6 != 0x80) {
    iVar6 = ultima_1000_38e4();
    ultima_1000_3a74(iVar6,0,*(undefined *)0x5895,uVar2,uVar1,cVar3,cVar3);
    if (cVar3 == ',') {
      *(undefined *)(iVar6 * 8 + 0x5c5f) = 100;
    }
  }
  return;
}



undefined2 mainout_1040_105c(int param_1)

{
  undefined2 uVar1;
  
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



void __cdecl16near mainout_1040_109e(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  char local_4;
  
  if ((*(byte *)0x587c & 0xf8) == 0x20) {
    uVar3 = ultima_1000_2092(0x1e,1);
    if (uVar3 < *(byte *)0x5c5f) {
      local_4 = (char)uVar3;
      pcVar1 = (char *)0x5c5f;
      *pcVar1 = *pcVar1 - local_4;
      ultima_1000_2900();
    }
    else {
      ultima_1000_1850(0x6ada);
      uVar3 = (uint)*(byte *)0x5c61;
      if ((uVar3 == 0) && (*(char *)0x57b0 == '\0')) {
        *(undefined *)0x587c = 0;
        ultima_1000_2900();
        ultima_1000_5910();
        ultima_1000_43ae(0x1e78,0x28,0x96,0x294);
        ultima_1000_1850(0x6af6);
        while( true ) {
          iVar4 = ultima_1000_39fc();
          if (iVar4 == -1) break;
          ultima_1000_3522(*(undefined *)0x5897,*(undefined *)0x5896);
          ultima_1000_2aa8();
        }
      }
      else {
        ultima_1000_1850(0x6ae6);
        if ((int)uVar3 < 1) {
          pcVar1 = (char *)0x57b0;
          *pcVar1 = *pcVar1 + -1;
          cVar2 = ultima_1000_2092(1,0);
          cVar2 = cVar2 + '\x14';
        }
        else {
          cVar2 = (*(byte *)0x587c & 3) + 0x28;
        }
        *(char *)0x587c = cVar2;
        *(undefined *)0xa9fa = 1;
      }
    }
  }
  else {
    ultima_1000_2aa8();
  }
  return;
}



void mainout_1040_1168(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    cVar1 = *(char *)(param_3 * 8 + 0x5c5b);
    if ((cVar1 == ',') || (cVar1 == '.')) {
      bVar2 = ultima_1000_2092(3,0);
      *(char *)(param_3 * 8 + 0x5c5b) = (bVar2 & 2) + 0x2d;
    }
  }
  if (param_1 == 0) {
    cVar1 = *(char *)(param_3 * 8 + 0x5c5b);
    if ((cVar1 == '-') || (cVar1 == '/')) {
      bVar2 = ultima_1000_2092(3,0);
      *(char *)(param_3 * 8 + 0x5c5b) = (bVar2 & 2) + 0x2c;
    }
  }
  ultima_1000_5910();
  ultima_1000_43ae(100,5,300,0x514);
  iVar3 = func_0x0001fe1a(1,5,5,(*(char *)(param_3 * 8 + 0x5c5d) - *(char *)0x5897) + '\x05',
                          (*(char *)(param_3 * 8 + 0x5c5c) - *(char *)0x5896) + '\x05');
  if (iVar3 != 0) {
    ultima_1000_5910();
    ultima_1000_3522(*(undefined *)0x5897,*(undefined *)0x5896);
    mainout_1040_109e();
  }
  return;
}



void mainout_1040_1248(int param_1)

{
  undefined uVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 * 8 + 0x5c5a) & 0xfc) == 0xec) {
    if (*(char *)0x587c != '\x1c') {
      *(undefined *)(param_1 * 8 + 0x5c5b) = 0;
      *(undefined *)(param_1 * 8 + 0x5c5a) = 0;
      ultima_1000_1850(0x6b04);
      uVar1 = *(undefined *)0x587c;
      *(undefined *)0x587c = 0xec;
      ultima_1000_5910();
      ultima_1000_43ae(0x1e78,0x28,0x96,0x294);
      *(undefined *)0x587c = uVar1;
      mainout_1040_109e();
      *(undefined *)0x5895 = 0xff;
      *(undefined *)0x5896 = 0x22;
      *(undefined *)0x5897 = 0x12;
      mainout_1040_0000();
      return;
    }
  }
  else if ((*(byte *)(param_1 * 8 + 0x5c5a) & 0xfc) != 0xe0) {
    ultima_1000_5910();
    ultima_1000_1850(0x6b12);
    pbVar2 = (byte *)ultima_1000_4402(*(undefined *)0x5897,*(undefined *)0x5896);
    if ((3 < *pbVar2) || (((*(byte *)0x587c & 0xfe) != 0x14 && ((*(byte *)0x587c & 0xfc) != 0x28))))
    {
      ultima_1000_6150(param_1);
      return;
    }
  }
  mainout_1040_109e();
  return;
}



undefined2 mainout_1040_131a(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  
  bVar1 = *(byte *)(param_1 * 8 + 0x5c5a);
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5c) - (uint)*(byte *)0x5896;
  uVar5 = (int)uVar2 >> 0xf;
  local_6 = (uVar2 ^ uVar5) - uVar5;
  if (0x7f < local_6) {
    local_6 = 0x100 - local_6;
  }
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5d) - (uint)*(byte *)0x5897;
  uVar5 = (int)uVar2 >> 0xf;
  local_8 = (uVar2 ^ uVar5) - uVar5;
  if (0x7f < local_8) {
    local_8 = 0x100 - local_8;
  }
  if (((local_6 == 1) && (local_8 == 0)) || ((local_6 == 0 && (local_8 == 1)))) {
    mainout_1040_1248(param_1);
LAB_1040_139c:
    uVar3 = 1;
  }
  else {
    if ((bVar1 == 0x88) || (bVar1 == 0xdc)) {
      if ((local_6 < 4) && ((local_8 < 4 && (iVar4 = ultima_1000_2092(7,0), iVar4 == 0)))) {
        ultima_1000_5910();
        ultima_1000_43ae(100,5,300,0x514);
        iVar4 = func_0x0001fe1a(3,5,5,(*(char *)(param_1 * 8 + 0x5c5d) - *(char *)0x5897) + '\x05',
                                (*(char *)(param_1 * 8 + 0x5c5c) - *(char *)0x5896) + '\x05');
        if (iVar4 != 0) {
          ultima_1000_3522(*(undefined *)0x5897,*(undefined *)0x5896);
          mainout_1040_109e();
        }
        goto LAB_1040_139c;
      }
    }
    else if (((bVar1 & 0xfc) == 0x2c) &&
            (((local_6 == 0 && (local_8 < 4)) || ((local_8 == 0 && (local_6 < 4)))))) {
      ultima_1000_1850(0x6b1e);
      mainout_1040_1168(local_8,local_6,param_1);
      goto LAB_1040_139c;
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined2 mainout_1040_1482(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  puVar1 = (undefined *)ultima_1000_4402(param_1,param_2,*(undefined *)(param_3 * 8 + 0x5c5a));
  iVar2 = ultima_1000_2c4c(*puVar1);
  if ((iVar2 != 0) && (iVar2 = ultima_1000_3702(*(undefined *)0x5895,param_1,param_2), iVar2 == 0)) {
    return 1;
  }
  return 0;
}



undefined2 mainout_1040_14c8(uint param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((param_2 == *(byte *)0xa526) && (param_1 == *(byte *)0xa527)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined mainout_1040_14ea(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5c) - (uint)*(byte *)0x5896;
  uVar3 = (int)uVar2 >> 0xf;
  local_4 = (uVar2 ^ uVar3) - uVar3;
  if (0x7f < local_4) {
    local_4 = 0x100 - local_4;
  }
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5d) - (uint)*(byte *)0x5897;
  uVar3 = (int)uVar2 >> 0xf;
  local_6 = (uVar2 ^ uVar3) - uVar3;
  if (0x7f < local_6) {
    local_6 = 0x100 - local_6;
  }
  if ((local_4 < 6) && (local_6 < 6)) {
    uVar1 = *(undefined *)(local_4 + local_6 * 0xb + 0x2c18);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void mainout_1040_1578(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined2 unaff_DS;
  undefined local_a;
  undefined local_8;
  char local_4;
  
  iVar7 = param_3 * 8;
  bVar2 = *(byte *)(iVar7 + 0x5c5a);
  iVar3 = (uint)*(byte *)(iVar7 + 0x5c5c) + param_2;
  iVar7 = (uint)*(byte *)(iVar7 + 0x5c5d) + param_1;
  pbVar4 = (byte *)ultima_1000_4402(iVar7,iVar3);
  if ((bVar2 & 0xfc) == 0x2c) {
    if ((param_2 == 0) && (param_1 == -1)) {
      local_4 = '\0';
    }
    else if ((param_2 == 1) && (param_1 == 0)) {
      local_4 = '\x01';
    }
    else if ((param_2 == 0) && (param_1 == 1)) {
      local_4 = '\x02';
    }
    else if ((param_2 == -1) && (param_1 == 0)) {
      local_4 = '\x03';
    }
    *(char *)(param_3 * 8 + 0x5c5b) = local_4 + ',';
    *(char *)(param_3 * 8 + 0x5c5a) = local_4 + ',';
  }
  else if ((((bVar2 != 0xdc) && (bVar2 != 0x94)) && (bVar2 != 0xd8)) &&
          ((bVar2 != 0xf0 && (uVar5 = *pbVar4 - 4, uVar5 < 0x1c)))) {
                    // WARNING: Could not emulate address calculation at 0x00011a4f
                    // WARNING: Treating indirect jump as call
    (**(code **)(uVar5 * 2 + -0x67b6))();
    return;
  }
  param_3 = param_3 * 8;
  *(undefined *)0xa526 = *(undefined *)(param_3 + 0x5c5c);
  *(undefined *)0xa527 = *(undefined *)(param_3 + 0x5c5d);
  local_8 = (undefined)iVar3;
  *(undefined *)(param_3 + 0x5c5c) = local_8;
  local_a = (undefined)iVar7;
  *(undefined *)(param_3 + 0x5c5d) = local_a;
  pbVar1 = (byte *)0x24e6;
  *pbVar1 = *pbVar1 | 2;
  pcVar6 = (char *)ultima_1000_4402(iVar7,iVar3);
  if (*pcVar6 == -0x24) {
    *(undefined *)(param_3 + 0x5c5b) = 0;
    *(undefined *)(param_3 + 0x5c5a) = 0;
  }
  return;
}



void mainout_1040_16fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_1 * 8 + 0x5c5c);
  uVar2 = (uint)*(byte *)(param_1 * 8 + 0x5c5d);
  iVar6 = 0;
  while( true ) {
    iVar3 = ultima_1000_2092(3,0);
    if (iVar3 == 0) {
      iVar6 = mainout_1040_1482(uVar2 - 1,uVar1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0;
      uVar5 = 0xffff;
      goto LAB_1040_1775;
    }
    if (iVar3 == 1) break;
    if (iVar3 == 2) {
      iVar6 = mainout_1040_1482(uVar2 + 1,uVar1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0;
      uVar5 = 1;
      goto LAB_1040_1775;
    }
    if (iVar3 == 3) {
      iVar6 = mainout_1040_1482(uVar2,uVar1 - 1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0xffff;
      goto LAB_1040_17ba;
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      return;
    }
  }
  iVar6 = mainout_1040_1482(uVar2,uVar1 + 1,param_1);
  if (iVar6 == 0) {
    return;
  }
  uVar4 = 1;
LAB_1040_17ba:
  uVar5 = 0;
LAB_1040_1775:
  mainout_1040_1578(uVar5,uVar4,param_1);
  return;
}



void mainout_1040_17d4(undefined2 param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  uint local_e;
  uint local_a;
  int local_6;
  int local_4;
  
  bVar1 = *(byte *)(param_2 * 8 + 0x5c5c);
  uVar2 = (uint)bVar1;
  uVar3 = (uint)*(byte *)(param_2 * 8 + 0x5c5d);
  bVar1 = bVar1 - *(char *)0x5896;
  local_a = (uint)bVar1;
  if (0x7f < bVar1) {
    local_a = local_a - 0x100;
  }
  bVar1 = *(char *)(param_2 * 8 + 0x5c5d) - *(char *)0x5897;
  local_e = (uint)bVar1;
  if (0x7f < bVar1) {
    local_e = local_e - 0x100;
  }
  if (local_a == 0) {
    local_4 = 0;
  }
  else if ((int)local_a < 1) {
    if ((int)local_a < 0) {
      local_4 = 1;
    }
  }
  else {
    local_4 = -1;
  }
  if (local_e == 0) {
    local_6 = 0;
  }
  else if ((int)local_e < 1) {
    if ((int)local_e < 0) {
      local_6 = 1;
    }
  }
  else {
    local_6 = -1;
  }
  iVar4 = ultima_1000_2092(1,0);
  if (iVar4 == 1) {
    if (local_4 != 0) {
      iVar4 = mainout_1040_1482(uVar3,uVar2 + local_4,param_2);
      if ((iVar4 != 0) && (iVar4 = mainout_1040_14c8(uVar3,uVar2 + local_4), iVar4 != 0))
      goto LAB_1040_18e2;
    }
    if (local_6 == 0) {
LAB_1040_197d:
      mainout_1040_16fc(param_2);
      return;
    }
    iVar4 = mainout_1040_1482(uVar3 + local_6,uVar2,param_2);
    if ((iVar4 == 0) || (iVar4 = mainout_1040_14c8(uVar3 + local_6,uVar2), iVar4 == 0))
    goto LAB_1040_197d;
  }
  else {
    if (local_6 == 0) {
LAB_1040_1955:
      if (local_4 == 0) goto LAB_1040_197d;
      iVar4 = mainout_1040_1482(uVar3,uVar2 + local_4,param_2);
      if ((iVar4 == 0) || (iVar4 = mainout_1040_14c8(uVar3,uVar2 + local_4), iVar4 == 0))
      goto LAB_1040_197d;
LAB_1040_18e2:
      local_6 = 0;
      goto LAB_1040_192a;
    }
    iVar4 = mainout_1040_1482(uVar3 + local_6,uVar2,param_2);
    if ((iVar4 == 0) || (iVar4 = mainout_1040_14c8(uVar3 + local_6,uVar2), iVar4 == 0))
    goto LAB_1040_1955;
  }
  local_4 = 0;
LAB_1040_192a:
  mainout_1040_1578(local_6,local_4,param_2);
  return;
}



void mainout_1040_198c(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  bVar3 = *(byte *)(param_1 * 8 + 0x5c5a);
  if ((bVar3 & 0xfc) == 0xec) {
    pbVar1 = (byte *)(param_1 * 8 + 0x5c5f);
    *pbVar1 = *pbVar1 ^ 1;
    if (*pbVar1 == 0) {
      return;
    }
    iVar5 = ultima_1000_2092(1,0);
    if (iVar5 == 0) {
      mainout_1040_16fc(param_1);
      return;
    }
  }
  else if (bVar3 == 0xfc) {
    iVar5 = mainout_1040_14ea(param_1);
    if ((iVar5 != 0) &&
       (bVar3 = *(byte *)(param_1 * 8 + 0x5c5f), pcVar2 = (char *)(param_1 * 8 + 0x5c5f),
       *pcVar2 = *pcVar2 + '\x01', bVar3 < 0x14)) {
      uVar6 = 0;
      goto LAB_1040_1a54;
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
      *(undefined *)(iVar5 + 0x5c61) = 0;
      return;
    }
  }
  uVar6 = 1;
LAB_1040_1a54:
  mainout_1040_17d4(uVar6,param_1);
  return;
}



int __cdecl16near mainout_1040_1a60(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined2 unaff_DS;
  char *local_c;
  char *local_8;
  int local_4;
  
  local_4 = 0;
  if (*(char *)0x587a == 'T') {
LAB_1040_1a74:
    local_4 = 0;
  }
  else {
    if (*(char *)0x587a == 'Q') {
      pbVar1 = (byte *)0x2c55;
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 != 0) goto LAB_1040_1a74;
    }
    bVar2 = *(byte *)0x587c & 0xfe;
    if ((bVar2 == 0x12) || (bVar2 == 0x14)) {
      pbVar1 = (byte *)0x2c57;
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 != 0) goto LAB_1040_1a74;
    }
    iVar3 = ultima_1000_2092(0x1e,1);
    iVar4 = mainout_1040_0d8c();
    if (iVar3 < iVar4) {
      mainout_1040_0fc4();
    }
    iVar3 = 0x1f;
    puVar5 = (undefined *)0x5d52;
    do {
      iVar4 = mainout_1040_105c(*puVar5);
      if (iVar4 != 0) {
        iVar4 = mainout_1040_131a(iVar3);
        local_4 = local_4 + iVar4;
        if (local_4 == 0) {
          mainout_1040_198c(iVar3);
        }
      }
      puVar5 = puVar5 + -8;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 0x1f;
    puVar5 = (undefined *)0x5d52;
    local_8 = (char *)0x5d54;
    local_c = (char *)0x5d55;
    do {
      iVar4 = mainout_1040_105c(*puVar5);
      if ((iVar4 != 0) &&
         ((0x1f < (byte)(*local_8 - *(char *)0x589b) || (0x1f < (byte)(*local_c - *(char *)0x589c)))
         )) {
        ultima_1000_3a74(iVar3,0,0,0,0,0,0);
      }
      puVar5 = puVar5 + -8;
      local_8 = local_8 + -8;
      local_c = local_c + -8;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return local_4;
}



void __cdecl16near mainout_1040_1b3e(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  ultima_1000_1850(0x6b2c);
  ultima_1000_39fc();
  iVar3 = (uint)*(byte *)(*(int *)0x5876 * 0x20 + 0x55b4) * 3 + -99;
  ultima_1000_1a3e(0x20,2);
  ultima_1000_1850(0x6b4a);
  do {
    cVar2 = ultima_1000_266c();
    if (cVar2 == 'Y') break;
  } while (cVar2 != 'N');
  ultima_1000_16ba(cVar2);
  ultima_1000_16ba(10);
  if (cVar2 == 'Y') {
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 + iVar3;
    *(undefined *)0xa9fa = 1;
    if (-1 < *(int *)0x57aa) {
      return;
    }
    piVar1 = (int *)0x57aa;
    *piVar1 = *piVar1 - iVar3;
  }
  uVar4 = ultima_1000_38e4();
  ultima_1000_3a74(uVar4,0,0,*(undefined *)0x5897,*(undefined *)0x5896,0,0xe4);
  ultima_1000_6150(uVar4);
  return;
}



void __cdecl16near mainout_1040_1be8(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  byte *local_e;
  int local_c;
  uint local_4;
  
  iVar1 = ultima_1000_2092(7,0);
  if ((iVar1 == 0) && (*(char *)0x587c == '\x1c')) {
    ultima_1000_5910();
    ultima_1000_1850(0x6b64);
    ultima_1000_3ae6(10);
    local_4 = 0;
    if (*(char *)0x585b != '\0') {
      pcVar3 = (char *)0x55b3;
      local_c = 0x55a8;
      local_e = (byte *)0x55b5;
      do {
        if ((*pcVar3 != 'D') && (*pcVar3 != 'S')) {
          ultima_1000_1850(local_c);
          ultima_1000_1850(0x6b8c);
          iVar1 = 3;
          do {
            ultima_1000_3ae6(5);
            ultima_1000_16ba(0x2e);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          ultima_1000_1850(0x6b9c);
          uVar2 = ultima_1000_2092(0x1e,1);
          if (*local_e < uVar2) {
            mainout_1040_1b3e();
            return;
          }
        }
        pcVar3 = pcVar3 + 0x20;
        local_c = local_c + 0x20;
        local_e = local_e + 0x20;
        local_4 = local_4 + 1;
      } while (local_4 < *(byte *)0x585b);
    }
    ultima_1000_1850(0x6ba0);
  }
  return;
}


