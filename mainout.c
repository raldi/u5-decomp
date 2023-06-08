#define NOT_SAILING 0
#define WEST 1
#define EAST 2
#define NORTH 3
#define SOUTH 4

#define OUTSIDE 0
#define SURFACE 0

#define ROUGH_SEAS 1
#define SWAMP 4
#define EW_BRIDGE 106
#define NS_BRIDGE 107
#define LAVA 143
#define WATERFALL 212

#define OCCUPIED_EAST_CARPET 20
#define OCCUPIED_WEST_CARPET 21
#define FRIGATE_SAILING_NORTH 32
#define SKIFF_NORTH 40

#define IS_BRIDGE(n) (n & 0xfe == EW_BRIDGE)

#define TROLL 228

#define ON_FOOT 28

#define ORDAINED_SHRINE_QUESTS SAVED_GAM(0x0326)

#define PARTY_SIZE SAVED_GAM(0x02b5)

#define PC_NAME SAVED_GAM(0x0002)
#define PC_STATUS SAVED_GAM(0x000d)
#define PC_DEX SAVED_GAM(0x000f)

#define PARTY_LOC SAVED_GAM(0x02ed)
#define PARTY_X SAVED_GAM(0x02f0)
#define PARTY_Y SAVED_GAM(0x02f1)
#define PARTY_Z SAVED_GAM(0x02ef)

#define SAILING_DIRECTION SAVED_GAM(0x03af)

#define MODE_OF_TRANSPORTATION SAVED_GAM(0x02d6)
#define IS_OCCUPIED_CARPET(n) (n & 0xfe == OCCUPIED_EAST_CARPET)
#define IS_SKIFF(n) (n & 0xfc == SKIFF_NORTH)
#define IS_SAILING_FRIGATE(n) (n & 0xfc == FRIGATE_SAILING_NORTH)

#define SEXTANT_OJ 233
#define SEXTANT_OL 235


/*
Unable to decompile 'FUN_0000_0000'
Cause: Offset must be between 0x0 and 0x10ffef, got 0xffffffff instead!
*/


void __cdecl16near FUN_0000_007a(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)PARTY_X - (uint)*(byte *)SAVED_GAM(0x06be);
  uVar3 = (int)uVar1 >> 0xf;
  uVar2 = (uint)*(byte *)PARTY_Y - (uint)*(byte *)SAVED_GAM(0x06bf);
  uVar4 = (int)uVar2 >> 0xf;
  if ((((*(char *)SAVED_GAM(0x06bc) != '\0') && (*(char *)SAVED_GAM(0x06c0) == *(char *)PARTY_Z)) &&
      ((int)((uVar1 ^ uVar3) - uVar3) < 6)) && ((int)((uVar2 ^ uVar4) - uVar4) < 6)) {
    func_0x0000b916(1);
  }
  return;
}



undefined2 FUN_0000_00da(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  bVar2 = *(byte *)MODE_OF_TRANSPORTATION & 0xfc;
  if (bVar2 == 0x10) {
    func_0x00009680(MEM(0x2946));
    if (param_1 == 1) {
      *(undefined *)MODE_OF_TRANSPORTATION = 0x12;
      return 0;
    }
    if (param_1 != 3) {
      return 0;
    }
    *(undefined *)MODE_OF_TRANSPORTATION = 0x13;
    return 0;
  }
  if (bVar2 == 0x14) {
    func_0x00009680(MEM(0x294c));
    if (param_1 == 1) {
      *(undefined *)MODE_OF_TRANSPORTATION = 0x14;
      return 0;
    }
    if (param_1 != 3) {
      return 0;
    }
    *(undefined *)MODE_OF_TRANSPORTATION = 0x15;
    return 0;
  }
  if ((bVar2 != 0x20) && (bVar2 != 0x24)) {
    if (bVar2 != 0x28) {
      return 0;
    }
    func_0x00009680(MEM(0x2951));
    *(char *)MODE_OF_TRANSPORTATION = (char)param_1 + (*(byte *)MODE_OF_TRANSPORTATION & 0xfc);
    return 0;
  }
  cVar1 = *(char *)MODE_OF_TRANSPORTATION;
  cVar3 = (char)param_1 + (*(byte *)MODE_OF_TRANSPORTATION & 0xfc);
  *(char *)MODE_OF_TRANSPORTATION = cVar3;
  if (cVar1 == cVar3) {
    if (0x23 < *(byte *)MODE_OF_TRANSPORTATION) {
      return 0;
    }
    if (*(char *)SAVED_GAM(0x02ec) != '\0') {
      return 0;
    }
    return 1;
  }
  func_0x00009680(MEM(0x2956));
  if (param_1 == 0) {
    uVar4 = MEM(0x295c);
  }
  else if (param_1 == 1) {
    uVar4 = MEM(0x296a);
  }
  else if (param_1 == 2) {
    uVar4 = MEM(0x2963);
  }
  else {
    if (param_1 != 3) goto LAB_0000_01ad;
    uVar4 = MEM(0x2970);
  }
  func_0x00009680(uVar4);
LAB_0000_01ad:
  *(undefined *)SAVED_GAM(0x03b0) = 1;
  if (*(byte *)SAVED_GAM(0x06b9) < 0x32) {
    func_0x00009680(MEM(0x2976));
  }
  return 1;
}



int FUN_0000_01fe(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  byte local_6;
  
  if ((*(byte *)MODE_OF_TRANSPORTATION & 0xfc) == 0x24) {
    func_0x00009680(MEM(0x2982));
  }
  bVar3 = true;
  iVar4 = func_0x0000b4be(*(undefined *)PARTY_Z,param_1 + (uint)*(byte *)PARTY_Y,
                          param_2 + (uint)*(byte *)PARTY_X);
  local_6 = (byte)iVar4;
  if (iVar4 != 0) {
    bVar3 = false;
    if ((*(byte *)MODE_OF_TRANSPORTATION < 0x30) && (0x1f < *(byte *)MODE_OF_TRANSPORTATION)) {
      if ((0x27 < *(byte *)MODE_OF_TRANSPORTATION) && ((0x23 < iVar4 && (iVar4 < 0x28)))) {
LAB_0000_0283:
        bVar3 = true;
      }
    }
    else if (((0x23 < iVar4) && (iVar4 < 0x2c)) || ((iVar4 == 0x1b || ((local_6 & 0xfe) == 0x10))))
    goto LAB_0000_0283;
  }
  cVar2 = *(char *)(param_2 + param_1 * 0x20 + MEM(0xaba7));
  if ((bVar3) && (iVar4 = func_0x0000aa7c(cVar2,*(undefined *)MODE_OF_TRANSPORTATION), iVar4 != 0)) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*(char *)SAILING_DIRECTION == '\0') {
    if ((0x1f < *(byte *)MODE_OF_TRANSPORTATION) && ((local_6 & 0xfc) == 0xec)) {
      // Party is on any kind of boat and has reached a whirlpool
      return 0;
    }
    func_0x00009680(MEM(0x29ae));
    if (cVar2 == '/') { // Cactus?
      func_0x00009680(MEM(0x29b8));
      func_0x0000a8d8();
    }
    else {
      func_0x0000a0f0(200,0xa5);
    }
    func_0x00009946();
    return 0;
  }
  if (cVar2 == '\x03') { // Shallow water
    uVar5 = MEM(0x298b);
  }
  else {
    if (cVar2 == 'G') goto LAB_0000_02df;
    uVar5 = MEM(0x2999);
  }
  func_0x00009680(uVar5);
LAB_0000_02df:
  if (cVar2 == 'G') { // Pier?
    func_0x00009680(MEM(0x29a5));
    pcVar1 = (char *)MODE_OF_TRANSPORTATION;
    *pcVar1 = *pcVar1 + '\x04';
  }
  else {
    func_0x0000a06c(300,2000,100);
    FUN_0000_109e();
  }
  *(undefined *)SAILING_DIRECTION = 0;
  *(undefined *)SAVED_GAM(0x03b0) = 1;
  return 0;
}



void FUN_0000_0354(undefined2 param_1,undefined2 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)PARTY_X;
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar1 = (char *)PARTY_Y;
  *pcVar1 = *pcVar1 + (char)param_1;
  *(undefined *)MEM(0x24e6) = 1;
  bVar2 = *(char *)PARTY_X - *(char *)SAVED_GAM(0x02f5) & 0x1f;
  bVar3 = *(char *)PARTY_Y - *(char *)SAVED_GAM(0x02f6) & 0x1f;
  if ((((bVar2 < 5) || (0x1a < bVar2)) || (bVar3 < 5)) || (0x1a < bVar3)) {
    func_0x0000fa02(param_1,param_2,bVar3);
    *(byte *)SAVED_GAM(0x02f5) = (char)param_2 * '\x10' + *(char *)SAVED_GAM(0x02f5) & 0xf0;
    *(byte *)SAVED_GAM(0x02f6) = (char)param_1 * '\x10' + *(char *)SAVED_GAM(0x02f6) & 0xf0;
    func_0x0000f9ba(param_1,param_2);
    func_0x0000dc7a();
  }
  return;
}



void __cdecl16near FUN_0000_03e0(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6;
  
  pbVar2 = (byte *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
  bVar1 = *pbVar2;
  if (bVar1 == 5) {
LAB_0000_0406:
    local_6 = 0;
  }
  else {
    if ((bVar1 != 0x1e) && (bVar1 != 0x1f)) {
      if ((bVar1 < 4) || (0xf < bVar1)) goto LAB_0000_0406;
      if (8 < bVar1) {
        local_6 = 2;
        goto LAB_0000_041f;
      }
    }
    local_6 = 1;
  }
LAB_0000_041f:
  if (local_6 == 1) {
    iVar3 = FUN_0000_1a60();
    FUN_0000_007a();
    if (iVar3 == 0) {
      func_0x00009680(MEM(0x29bf));
    }
    uVar5 = 2;
  }
  else {
    if (local_6 != 2) {
      return;
    }
    iVar3 = FUN_0000_1a60();
    FUN_0000_007a();
    iVar4 = FUN_0000_1a60();
    FUN_0000_007a();
    if (iVar3 + iVar4 == 0) {
      func_0x00009680(MEM(0x29cf));
    }
    uVar5 = 4;
  }
  func_0x0000cdac(uVar5);
  return;
}



int FUN_0000_0490(int param_1,uint param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((*(byte *)MODE_OF_TRANSPORTATION & 0xfc) == 0x20) {
    if (param_2 != *(byte *)SAILING_DIRECTION) {
      *(undefined *)SAILING_DIRECTION = (undefined)param_2;
      *(undefined *)SAVED_GAM(0x02dd) = 0;
    }
    *(undefined *)SAVED_GAM(0x03b0) = 0;
  }
  if ((*(char *)MODE_OF_TRANSPORTATION == '\x1c') || ((*(byte *)MODE_OF_TRANSPORTATION & 0xfe) == 0x12)) {
    func_0x0000c16e();
  }
  uVar3 = 0;
  uVar4 = 0;
  if (param_2 == 1) {
    uVar4 = MEM(0xffff);
    iVar1 = FUN_0000_00da(3,0,MEM(0xffff));
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)SAILING_DIRECTION != '\0') goto LAB_0000_050e;
    uVar2 = MEM(0x29ef);
  }
  else if (param_2 == 2) {
    uVar4 = 1;
    iVar1 = FUN_0000_00da(1,0,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)SAILING_DIRECTION != '\0') goto LAB_0000_050e;
    uVar2 = MEM(0x29e9);
  }
  else if (param_2 == 3) {
    uVar3 = MEM(0xffff);
    iVar1 = FUN_0000_00da(0,MEM(0xffff));
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)SAILING_DIRECTION != '\0') goto LAB_0000_050e;
    uVar2 = MEM(0x29db);
  }
  else {
    if (param_2 != 4) goto LAB_0000_050e;
    uVar3 = 1;
    iVar1 = FUN_0000_00da(2,1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)SAILING_DIRECTION != '\0') goto LAB_0000_050e;
    uVar2 = MEM(0x29e2);
  }
  func_0x00009680(uVar2);
LAB_0000_050e:
  iVar1 = FUN_0000_01fe(uVar3,uVar4);
  if ((param_1 == 0) && (iVar1 != 0)) {
    if ((*(byte *)MODE_OF_TRANSPORTATION & 0xfe) == 0x12) {
      func_0x0000c16e();
    }
    FUN_0000_0354(uVar3,uVar4);
    FUN_0000_03e0();
  }
  return iVar1;
}



uint __cdecl16near FUN_0000_0598(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined2 unaff_DS;
  uint local_6;
  
  func_0x0000d740();
  if (*(char *)MEM(0xa9fa) != '\0') {
    func_0x0000a730();
    *(undefined *)MEM(0xa9fa) = 0;
  }
  if (*MEM(0xabc7) & 0xfc == WATERFALL) {
    waterfall();
    local_6 = 0;
  }
  else {
    if (*(char *)SAVED_GAM(0x03b0) != '\0') {
      func_0x000094ea(10);
      func_0x0000ca5a();
    }
    *(undefined *)SAVED_GAM(0x03b0) = 1;
    while (*(char *)SAILING_DIRECTION != '\0') {
      uVar4 = func_0x00009968();
      local_6 = func_0x00009e62(uVar4);
      if ((local_6 != 0) && (local_6 != *(byte *)SAILING_DIRECTION)) break;
      local_6 = (uint)*(byte *)SAILING_DIRECTION;
      if (*(char *)SAVED_GAM(0x02ec) != '\0') {
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
        if (*(char *)(*(byte *)SAVED_GAM(0x02ec) + MEM(0x29f5)) != cVar2) {
          uVar5 = 2;
        }
        if (*(char *)(*(byte *)SAVED_GAM(0x02ec) + MEM(0x29f9)) != cVar3) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 % 3 <= (uint)*(byte *)SAVED_GAM(0x02dd)) {
          *(undefined *)SAVED_GAM(0x02dd) = 0;
          break;
        }
      }
      if (*(byte *)SAVED_GAM(0x0215) < 0x80) {
        uVar4 = 2;
      }
      else {
        *(uint *)MEM(0xa524) = (uint)(*(int *)MEM(0xa524) == 0);
        uVar4 = 1;
      }
      func_0x0000cdac(uVar4);
      if ((*(int *)MEM(0xa524) == 0) || (*(byte *)SAVED_GAM(0x0215) < 0x80)) {
        FUN_0000_1a60();
      }
      func_0x0000b916(1);
      pcVar1 = (char *)SAVED_GAM(0x02dd);
      *pcVar1 = *pcVar1 + '\x01';
    }
    if (*(char *)SAILING_DIRECTION == '\0') {
      local_6 = func_0x0000a49c();
    }
  }
  return local_6;
}



undefined2 __cdecl16near FUN_0000_06ec(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  
  func_0x00009680(MEM(0x29fe));
  pbVar1 = (byte *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
  if ((*pbVar1 < 4) && (((*(byte *)MODE_OF_TRANSPORTATION & 0xfc) == 0x28 || ((*(byte *)MODE_OF_TRANSPORTATION & 0xfe) == 0x14)))) {
    func_0x00009680(MEM(0x2a06));
  }
  else {
    iVar2 = func_0x0000b41c();
    if (iVar2 != 0) {
      iVar3 = (uint)*(byte *)PARTY_X + *(int *)SAVED_GAM(0x02d0);
      iVar4 = (uint)*(byte *)PARTY_Y + *(int *)SAVED_GAM(0x02d2);
      iVar2 = iVar4;
      uVar5 = func_0x0000b4be(*(undefined *)PARTY_Z,iVar4,iVar3);
      uVar5 = uVar5 & 0xfc;
      if ((uVar5 == 0x2c) || (((uVar5 != 0xb4 && (uVar5 != 0xe8)) && (0x3f < uVar5)))) {
        func_0x0000df80(*(undefined2 *)SAVED_GAM(0x02d0));
      }
      else {
        func_0x00009680(MEM(0x2a10),iVar4,iVar3,uVar5,iVar2);
      }
    }
  }
  return 0;
}



undefined2 FUN_0000_0790(undefined2 param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  char local_4;
  
  func_0x00009680(param_1);
  iVar3 = 0x20;
  do {
    if ((*(char *)(iVar3 + MEM(0x1e8a)) == *(char *)PARTY_X) &&
       (*(char *)(iVar3 + MEM(0x1eb2)) == *(char *)PARTY_Y)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x28);
  if (iVar3 < 0x28) {
    if (*(char *)MODE_OF_TRANSPORTATION != '\x1c') {
      uVar1 = func_0x00009680(MEM(0x2a24));
      return uVar1;
    }
    if (iVar3 == 0x27) {
      if ((*(byte *)SAVED_GAM(0x0322) & *(byte *)SAVED_GAM(0x0323) & *(byte *)SAVED_GAM(0x0324)) < 0x80) {
        func_0x00009680(MEM(0x2a2f));
        iVar3 = func_0x0000b714();
        *(undefined *)(iVar3 * 8 + SAVED_GAM(0x06b4)) = 0xfc;
        uVar1 = func_0x0000df80(iVar3,iVar3);
        return uVar1;
      }
    }
    else {
      func_0x00009680(MEM(0x2a47));
      func_0x000094ea(0xfc);
      func_0x00009680(*(undefined2 *)(iVar3 * 2 + MEM(0x1e3a)));
      func_0x000094ea(0xfb);
    }
    func_0x000094ea(10);
    if (*(char *)MEM(0xa9bd) != '\x01') {
      func_0x0000a34e(1);
      do {
        iVar2 = func_0x000094a4(MEM(0x2a4a));
      } while (iVar2 == 0);
    }
    uVar1 = func_0x0000f852();
    func_0x0000a408(MEM(0x0100),SAVED_GAM(0x06b4),uVar1);
    func_0x0000a34e(2);
    func_0x0000a39e(iVar3 * MEM(0x0200) + MEM(0xc000),MEM(0x0200),SAVED_GAM(0x03b4),MEM(0x2a53));
    local_4 = (char)iVar3;
    *(char *)PARTY_LOC = local_4 + '\x01';
    if ((*(char *)PARTY_Z == '\0') || ((char)(local_4 + '\x01') == '(')) {
      *(undefined *)PARTY_Z = 0;
      *(undefined *)PARTY_Y = 1;
      *(undefined *)PARTY_X = 1;
      *(undefined *)MEM(0x6603) = 1;
      *(undefined *)MEM(0x6602) = 5;
    }
    else {
      *(undefined *)PARTY_Z = 7;
      *(undefined *)MEM(0x6603) = 3;
      *(undefined *)MEM(0x6602) = 4;
      *(undefined *)PARTY_Y = 7;
      *(undefined *)PARTY_X = 7;
    }
  }
  else {
    func_0x00009680(MEM(0x2a5f));
  }
  return 1;
}



undefined2 __cdecl16near FUN_0000_08de(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  undefined2 local_4;
  
  func_0x00009680(MEM(0x2a6f));
  pbVar2 = (byte *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
  bVar1 = *pbVar2;
  if (bVar1 == 0x16) {
    uVar3 = MEM(0x2abd);
LAB_0000_09ab:
    local_4 = FUN_0000_0790(uVar3);
  }
  else {
    if (bVar1 < 0x17) {
      if (bVar1 == 0x10) {
        uVar3 = MEM(0x2a85);
      }
      else {
        if (bVar1 == 0x11) {
          func_0x00009680(MEM(0x2a89));
          goto LAB_0000_0968;
        }
        if (bVar1 == 0x12) {
          uVar3 = MEM(0x2aa3);
        }
        else if (bVar1 == 0x13) {
          uVar3 = MEM(0x2aa8);
        }
        else if (bVar1 == 0x14) {
          uVar3 = MEM(0x2ab0);
        }
        else {
          if (bVar1 != 0x15) goto LAB_0000_09ee;
          uVar3 = MEM(0x2ab6);
        }
      }
    }
    else {
      if (bVar1 == 0x19) {
        func_0x00009680(MEM(0x2a76));
        iVar4 = 0;
        do {
          if ((*(char *)(iVar4 + MEM(0x1f6e)) == *(char *)PARTY_X) &&
             (*(char *)(iVar4 + MEM(0x1f76)) == *(char *)PARTY_Y)) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 8);
        func_0x00009680(*(undefined2 *)(iVar4 * 2 + MEM(0x1f4e)));
        func_0x000094ea(10);
LAB_0000_0968:
        func_0x0000f89a();
        return 1;
      }
      if (bVar1 < 0x1a) {
        if (bVar1 == 0x17) {
          uVar3 = MEM(0x2ac2);
        }
        else {
          if (bVar1 != 0x18) {
LAB_0000_09ee:
            func_0x00009680(MEM(0x2b16));
            return 0;
          }
          uVar3 = MEM(0x2ac7);
        }
        goto LAB_0000_09ab;
      }
      if (bVar1 == 0x1a) {
        func_0x00009680(MEM(0x2acf));
        return 1;
      }
      if (bVar1 == 0x1b) {
        uVar3 = MEM(0x2ad5);
      }
      else if (bVar1 == 0x39) {
        uVar3 = MEM(0x2ae0);
      }
      else {
        if (bVar1 != 0x3e) goto LAB_0000_09ee;
        uVar3 = MEM(0x2afa);
      }
    }
    local_4 = func_0x0000f9ea(uVar3);
  }
  return local_4;
}



int FUN_0000_0a1a(int param_1)

{
  char *pcVar1;
  undefined2 unaff_DS;
  
  pcVar1 = (char *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
  if ((*pcVar1 == -1) && (*(char *)SAVED_GAM(0x02d4) != '\x0e')) {
    *(undefined *)SAVED_GAM(0x02ff) = 0;
    if (param_1 == 0) {
      func_0x0000d740();
      param_1 = 1;
    }
  }
  else {
    param_1 = 0;
    func_0x0000cdac(0);
  }
  return param_1;
}



void __cdecl16near FUN_0000_0a60(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (*(char *)PARTY_Z != '\0') {
    iVar1 = RANDOM(255, false);
    if (iVar1 == 0x69) {
      func_0x00009680(MEM(0x2b1d));
      func_0x0000aea2();
      func_0x0000a8d8();
    }
  }
  return;
}



void __cdecl16near FUN_0000_0a84(void)

{
  char *party_y_p;
  bool bVar2;
  byte misc;
  int iVar4;
  undefined2 uVar5;
  byte *ground_tile_id_p;
  uint ground_tile_id;
  undefined2 unaff_DS;
  undefined2 uVar8;
  int local_a;
  undefined2 local_4;
  
  local_4 = 0;
  do {
    bVar2 = false;
    local_a = 1;
    local_4 = FUN_0000_0a1a(local_4);
    iVar4 = func_0x0000b82c();
    if (iVar4 == 1) {
      func_0x000094ea(10);
      func_0x0000ca5a();
      uVar5 = MEM(0x2b2a);
LAB_0000_0aba:
      uVar8 = MEM(0x0abe);
      func_0x00009680(uVar5);
    }
    else if (iVar4 == -1) {
      if (*(char *)MEM(0xa9bd) != '\x01') {
        func_0x0000a34e(1);
        do {
          iVar4 = func_0x000094a4(MEM(0x2b35));
        } while (iVar4 == 0);
      }
      uVar5 = func_0x0000f852();
      uVar8 = SAVED_GAM(0x06b4);
      func_0x0000a408(MEM(0x0100),SAVED_GAM(0x06b4),uVar5);
      func_0x0000f88e();
      bVar2 = true;
      local_a = 0;
    } else {
      iVar4 = func_0x0000c6d8();
      if (iVar4 != 0) {
        func_0x0000f89a();
      }
      if (*(char *)PARTY_LOC != '\0') {
        return;
      }
      misc = FUN_0000_0598();
      if (misc < 0x20) {
        if (misc < 0x17) {
                    // WARNING: Could not emulate address calculation at 0x00000b2e
                    // WARNING: Treating indirect jump as call
          (**(code **)((uint)misc * 2 + MEM(0x8d8e)))();
          return;
        }
        uVar5 = MEM(0x2b64);
        goto LAB_0000_0aba;
      }
      if ((misc < 0x30) || (0x39 < misc)) {
        uVar8 = MEM(0x0c03);
        local_a = func_0x0000afa8(misc);
      }
      else {
        uVar8 = MEM(0x0c0f);
        local_a = func_0x0000beb0(misc);
      }
    }
    if (!IS_SAILING_FRIGATE(*MODE_OF_TRANSPORTATION)) {
      *SAILING_DIRECTION = NOT_SAILING;
    }
    if (*PARTY_LOC == OUTSIDE) {
      if (local_a != 0) {
        func_0x0000cdac(2,uVar8);
        ground_tile_id_p = (byte *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
        int ground_tile_id_2 = *ground_tile_id_p;
        if (IS_BRIDGE(ground_tile_id_2) {
          check_for_trolls();
        }
        else if ((ground_tile_id_2 == SWAMP) && *MODE_OF_TRANSPORTATION == ON_FOOT)) {
          func_0x0000f97e();
          func_0x0000b916(1);
        }
        else if (ground_tile_id_2 == LAVA) {
          func_0x0000f98a();
        }
        else if ((((*PARTY_X == SEXTANT_OJ) && (*PARTY_Y == SEXTANT_OL)) &&
                 (*PARTY_Z == SURFACE)) && (*PARTY_LOC == OUTSIDE)) {
          // Between the Guardians
          func_0x00009680(MEM(0x2b6b));
          if (*ORDAINED_SHRINE_QUESTS == 0) {
            func_0x00009680(MEM(0x2b7e));
            func_0x00009680(MEM(0x2ba1));
            party_y_p = (char *)PARTY_Y;
            *party_y_p += 1;
          }
          else {
            func_0x00009680(MEM(0x2b6e));
          }
        }
        FUN_0000_0a60();
        func_0x0000a918();
        if ((ground_tile_id == ROUGH_SEAS) &&
           (IS_SKIFF(*MODE_OF_TRANSPORTATION) || 
            IS_OCCUPIED_CARPET(MODE_OF_TRANSPORTATION))) {
          func_0x00009680(MEM(0x2bb3));
          func_0x0000b352(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
          FUN_0000_109e();
        }
        if ((ground_tile_id & 0xfc) == WATERFALL) {
          waterfall();
        }
        FUN_0000_1a60();
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



void __cdecl16near FUN_0000_0d22(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined local_8;
  
  FUN_0000_0000();
  if (0x3f < *(byte *)MEM(0x6605)) {
    iVar1 = func_0x0000b714();
    iVar1 = iVar1 * 8;
    *(byte *)(iVar1 + SAVED_GAM(0x06bb)) = *(byte *)MEM(0x6605) & 0x3f;
    *(undefined *)(iVar1 + SAVED_GAM(0x06b6)) = *(undefined *)SAVED_GAM(0x03ad);
    *(undefined *)(iVar1 + SAVED_GAM(0x06b7)) = *(undefined *)SAVED_GAM(0x03ae);
    *(undefined *)(iVar1 + SAVED_GAM(0x06b8)) = 0;
    if (*(byte *)MEM(0x6605) < 0x80) {
      local_8 = 0x29;
    }
    else {
      local_8 = 0x25;
    }
    *(undefined *)(iVar1 + SAVED_GAM(0x06b5)) = local_8;
    *(undefined *)(iVar1 + SAVED_GAM(0x06b4)) = local_8;
    *(undefined *)(iVar1 + SAVED_GAM(0x06b9)) = 99;
    *(undefined *)MEM(0x6605) = 0;
  }
  FUN_0000_0a84();
  return;
}



int __cdecl16near FUN_0000_0d8c(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  int local_4;
  
  if (*(byte *)PARTY_Z < 0x80) {
    pbVar2 = (byte *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
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
    if ((0x1f < *(byte *)SAVED_GAM(0x02d9)) || (*(byte *)SAVED_GAM(0x02d9) < 5)) {
      local_4 = local_4 + 3;
    }
  }
  else {
    local_4 = 3;
  }
  return local_4;
}



int FUN_0000_0e04(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined2 unaff_DS;
  
  uVar1 = RANDOM(255, false);
  iVar2 = 0;
  for (; *(byte *)(iVar2 + param_1) <= uVar1; uVar1 = uVar1 - *pbVar3) {
    pbVar3 = (byte *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



undefined FUN_0000_0e4e(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((((param_1 < 4) || ((0x5f < param_1 && (param_1 < 0x70)))) ||
      ((0xd3 < param_1 && (param_1 < 0xd8)))) || ((0xe3 < param_1 && (param_1 < 0xe8)))) {
    iVar1 = RANDOM(64, false);
    if (iVar1 < 0x10) {
      if (0x7f < *(byte *)PARTY_Z) {
        iVar1 = FUN_0000_0e04(MEM(0x2bf6));
        return *(undefined *)(iVar1 + MEM(0x2bda));
      }
      if ((param_1 == 1) && (iVar1 = RANDOM(7, false), iVar1 == 7)) {
        return 0xec; // Whirlpool
      }
      iVar1 = FUN_0000_0e04(MEM(0x2bf0));
      return *(undefined *)(iVar1 + MEM(0x2bd4));
    }
  }
  else if (param_1 == 7) {
    iVar1 = RANDOM(3, false);
    if (iVar1 == 0) {
      return 0xe0;
    }
  }
  else {
    if ((param_1 == 4) && (*(char *)PARTY_Z == -1)) {
      return 0xf8;
    }
    if (((param_1 != 0xc) && (param_1 != 0xd)) &&
       ((param_1 < 0x10 || (((byte)param_1 & 0xfc) == 0x30)))) {
      if (*(byte *)PARTY_Z < 0x80) {
        iVar1 = FUN_0000_0e04(MEM(0x2bdc));
        return *(undefined *)(iVar1 + MEM(0x2bc0));
      }
      iVar1 = FUN_0000_0e04(MEM(0x2be8));
      return *(undefined *)(iVar1 + MEM(0x2bcc));
    }
  }
  return 0;
}



void __cdecl16near FUN_0000_0f4e(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  do {
    do {
      cVar1 = RANDOM(31, false);
      *(uint *)SAVED_GAM(0x02d0) = (uint)(byte)(cVar1 + *(char *)SAVED_GAM(0x02f5));
      cVar1 = RANDOM(31, false);
      *(uint *)SAVED_GAM(0x02d2) = (uint)(byte)(cVar1 + *(char *)SAVED_GAM(0x02f6));
      uVar2 = *(int *)SAVED_GAM(0x02d0) - (uint)*(byte *)PARTY_X;
      uVar3 = (int)uVar2 >> 0xf;
    } while ((int)((uVar2 ^ uVar3) - uVar3) < 7);
    uVar2 = *(int *)SAVED_GAM(0x02d2) - (uint)*(byte *)PARTY_Y;
    uVar3 = (int)uVar2 >> 0xf;
  } while ((((int)((uVar2 ^ uVar3) - uVar3) < 7) ||
           (uVar2 = *(int *)SAVED_GAM(0x02d0) - (uint)*(byte *)PARTY_X, uVar3 = (int)uVar2 >> 0xf,
           0xf9 < (int)((uVar2 ^ uVar3) - uVar3))) ||
          (uVar2 = *(int *)SAVED_GAM(0x02d2) - (uint)*(byte *)PARTY_Y, uVar3 = (int)uVar2 >> 0xf,
          0xf9 < (int)((uVar2 ^ uVar3) - uVar3)));
  return;
}



void __cdecl16near FUN_0000_0fc4(void)

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
    FUN_0000_0f4e();
    uVar1 = *(undefined2 *)SAVED_GAM(0x02d0);
    uVar2 = *(undefined2 *)SAVED_GAM(0x02d2);
    puVar4 = (undefined *)func_0x0000c232(uVar2,uVar1);
    cVar3 = FUN_0000_0e4e(*puVar4);
    if ((cVar3 != '\0') &&
       ((cVar3 != ',' || (pbVar5 = (byte *)func_0x0000c232(uVar2,uVar1), (*pbVar5 & 0xf0) != 0x60)))
       ) break;
    local_6 = local_6 + 1;
  } while (local_6 < 0x80);
  if (local_6 != 0x80) {
    iVar6 = func_0x0000b714();
    func_0x0000b8a4(iVar6,0,*(undefined *)PARTY_Z,uVar2,uVar1,cVar3,cVar3);
    if (cVar3 == ',') {
      *(undefined *)(iVar6 * 8 + SAVED_GAM(0x06b9)) = 100;
    }
  }
  return;
}



undefined2 FUN_0000_105c(int param_1)

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



void __cdecl16near FUN_0000_109e(void)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  char local_4;
  
  if ((*(byte *)MODE_OF_TRANSPORTATION & 0xf8) == 0x20) {
    uVar3 = RANDOM(30, true);
    if (uVar3 < *(byte *)SAVED_GAM(0x06b9)) {
      local_4 = (char)uVar3;
      pcVar1 = (char *)SAVED_GAM(0x06b9);
      *pcVar1 = *pcVar1 - local_4;
      func_0x0000a730();
    }
    else {
      func_0x00009680(MEM(0x6ada));
      uVar3 = (uint)*(byte *)SAVED_GAM(0x06bb);
      if ((uVar3 == 0) && (*(char *)SAVED_GAM(0x020a) == '\0')) {
        *(undefined *)MODE_OF_TRANSPORTATION = 0;
        func_0x0000a730();
        func_0x0000d740();
        func_0x0000c1de(MEM(0x1e78),0x28,0x96,MEM(0x0294));
        func_0x00009680(MEM(0x6af6));
        while( true ) {
          iVar4 = func_0x0000b82c();
          if (iVar4 == -1) break;
          func_0x0000b352(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
          func_0x0000a8d8();
        }
      }
      else {
        func_0x00009680(MEM(0x6ae6));
        if ((int)uVar3 < 1) {
          pcVar1 = (char *)SAVED_GAM(0x020a);
          *pcVar1 = *pcVar1 + -1;
          cVar2 = RANDOM(1, false);
          cVar2 = cVar2 + '\x14';
        }
        else {
          cVar2 = (*(byte *)MODE_OF_TRANSPORTATION & 3) + 0x28;
        }
        *(char *)MODE_OF_TRANSPORTATION = cVar2;
        *(undefined *)MEM(0xa9fa) = 1;
      }
    }
  }
  else {
    func_0x0000a8d8();
  }
  return;
}



void FUN_0000_1168(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    cVar1 = *(char *)(param_3 * 8 + SAVED_GAM(0x06b5));
    if ((cVar1 == ',') || (cVar1 == '.')) {
      bVar2 = RANDOM(3, false);
      *(char *)(param_3 * 8 + SAVED_GAM(0x06b5)) = (bVar2 & 2) + 0x2d;
    }
  }
  if (param_1 == 0) {
    cVar1 = *(char *)(param_3 * 8 + SAVED_GAM(0x06b5));
    if ((cVar1 == '-') || (cVar1 == '/')) {
      bVar2 = RANDOM(3, false);
      *(char *)(param_3 * 8 + SAVED_GAM(0x06b5)) = (bVar2 & 2) + 0x2c;
    }
  }
  func_0x0000d740();
  func_0x0000c1de(100,5,300,MEM(0x0514));
  iVar3 = func_0x0000fa1a(1,5,5,(*(char *)(param_3 * 8 + SAVED_GAM(0x06b7)) - *(char *)PARTY_Y) + '\x05',
                          (*(char *)(param_3 * 8 + SAVED_GAM(0x06b6)) - *(char *)PARTY_X) + '\x05');
  if (iVar3 != 0) {
    func_0x0000d740();
    func_0x0000b352(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
    FUN_0000_109e();
  }
  return;
}



void FUN_0000_1248(int param_1)

{
  undefined uVar1;
  byte *pbVar2;
  undefined2 unaff_DS;
  
  if ((*(byte *)(param_1 * 8 + SAVED_GAM(0x06b4)) & 0xfc) == 0xec) { // Whirlpool
    if (*(char *)MODE_OF_TRANSPORTATION != '\x1c') { // Not on foot
      *(undefined *)(param_1 * 8 + SAVED_GAM(0x06b5)) = 0;
      *(undefined *)(param_1 * 8 + SAVED_GAM(0x06b4)) = 0;
      func_0x00009680(MEM(0x6b04));
      uVar1 = *(undefined *)MODE_OF_TRANSPORTATION;
      *(undefined *)MODE_OF_TRANSPORTATION = 0xec;
      func_0x0000d740();
      func_0x0000c1de(MEM(0x1e78),0x28,0x96,MEM(0x0294));
      *(undefined *)MODE_OF_TRANSPORTATION = uVar1;
      FUN_0000_109e();
      *(undefined *)PARTY_Z = 0xff;
      *(undefined *)PARTY_X = 0x22;
      *(undefined *)PARTY_Y = 0x12;
      FUN_0000_0000();
      return;
    }
  }
  else if ((*(byte *)(param_1 * 8 + SAVED_GAM(0x06b4)) & 0xfc) != 0xe0) {
    func_0x0000d740();
    func_0x00009680(MEM(0x6b12));
    pbVar2 = (byte *)func_0x0000c232(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
    if ((3 < *pbVar2) || (((*(byte *)MODE_OF_TRANSPORTATION & 0xfe) != 0x14 && ((*(byte *)MODE_OF_TRANSPORTATION & 0xfc) != 0x28))))
    {
      func_0x0000df80(param_1);
      return;
    }
  }
  FUN_0000_109e();
  return;
}



undefined2 FUN_0000_131a(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  
  bVar1 = *(byte *)(param_1 * 8 + SAVED_GAM(0x06b4));
  uVar2 = (uint)*(byte *)(param_1 * 8 + SAVED_GAM(0x06b6)) - (uint)*(byte *)PARTY_X;
  uVar5 = (int)uVar2 >> 0xf;
  local_6 = (uVar2 ^ uVar5) - uVar5;
  if (0x7f < local_6) {
    local_6 = MEM(0x0100) - local_6;
  }
  uVar2 = (uint)*(byte *)(param_1 * 8 + SAVED_GAM(0x06b7)) - (uint)*(byte *)PARTY_Y;
  uVar5 = (int)uVar2 >> 0xf;
  local_8 = (uVar2 ^ uVar5) - uVar5;
  if (0x7f < local_8) {
    local_8 = MEM(0x0100) - local_8;
  }
  if (((local_6 == 1) && (local_8 == 0)) || ((local_6 == 0 && (local_8 == 1)))) {
    FUN_0000_1248(param_1);
LAB_0000_139c:
    uVar3 = 1;
  }
  else {
    if ((bVar1 == 0x88) || (bVar1 == 0xdc)) {
      if ((local_6 < 4) && ((local_8 < 4 && (iVar4 = RANDOM(7, false), iVar4 == 0)))) {
        func_0x0000d740();
        func_0x0000c1de(100,5,300,MEM(0x0514));
        iVar4 = func_0x0000fa1a(3,5,5,(*(char *)(param_1 * 8 + SAVED_GAM(0x06b7)) - *(char *)PARTY_Y) + '\x05',
                                (*(char *)(param_1 * 8 + SAVED_GAM(0x06b6)) - *(char *)PARTY_X) + '\x05');
        if (iVar4 != 0) {
          func_0x0000b352(*(undefined *)PARTY_Y,*(undefined *)PARTY_X);
          FUN_0000_109e();
        }
        goto LAB_0000_139c;
      }
    }
    else if (((bVar1 & 0xfc) == 0x2c) &&
            (((local_6 == 0 && (local_8 < 4)) || ((local_8 == 0 && (local_6 < 4)))))) {
      func_0x00009680(MEM(0x6b1e));
      FUN_0000_1168(local_8,local_6,param_1);
      goto LAB_0000_139c;
    }
    uVar3 = 0;
  }
  return uVar3;
}



undefined2 FUN_0000_1482(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  puVar1 = (undefined *)func_0x0000c232(param_1,param_2,*(undefined *)(param_3 * 8 + SAVED_GAM(0x06b4)));
  iVar2 = func_0x0000aa7c(*puVar1);
  if ((iVar2 != 0) && (iVar2 = func_0x0000b532(*(undefined *)PARTY_Z,param_1,param_2), iVar2 == 0)) {
    return 1;
  }
  return 0;
}



undefined2 FUN_0000_14c8(uint param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((param_2 == *(byte *)MEM(0xa526)) && (param_1 == *(byte *)MEM(0xa527))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined FUN_0000_14ea(int param_1)

{
  undefined uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_6;
  int local_4;
  
  uVar2 = (uint)*(byte *)(param_1 * 8 + SAVED_GAM(0x06b6)) - (uint)*(byte *)PARTY_X;
  uVar3 = (int)uVar2 >> 0xf;
  local_4 = (uVar2 ^ uVar3) - uVar3;
  if (0x7f < local_4) {
    local_4 = MEM(0x0100) - local_4;
  }
  uVar2 = (uint)*(byte *)(param_1 * 8 + SAVED_GAM(0x06b7)) - (uint)*(byte *)PARTY_Y;
  uVar3 = (int)uVar2 >> 0xf;
  local_6 = (uVar2 ^ uVar3) - uVar3;
  if (0x7f < local_6) {
    local_6 = MEM(0x0100) - local_6;
  }
  if ((local_4 < 6) && (local_6 < 6)) {
    uVar1 = *(undefined *)(local_4 + local_6 * 0xb + MEM(0x2c18));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_0000_1578(int param_1,int param_2,int param_3)

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
  bVar2 = *(byte *)(iVar7 + SAVED_GAM(0x06b4));
  iVar3 = (uint)*(byte *)(iVar7 + SAVED_GAM(0x06b6)) + param_2;
  iVar7 = (uint)*(byte *)(iVar7 + SAVED_GAM(0x06b7)) + param_1;
  pbVar4 = (byte *)func_0x0000c232(iVar7,iVar3);
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
    *(char *)(param_3 * 8 + SAVED_GAM(0x06b5)) = local_4 + ',';
    *(char *)(param_3 * 8 + SAVED_GAM(0x06b4)) = local_4 + ',';
  }
  else if ((((bVar2 != 0xdc) && (bVar2 != 0x94)) && (bVar2 != 0xd8)) &&
          ((bVar2 != 0xf0 && (uVar5 = *pbVar4 - 4, uVar5 < 0x1c)))) {
                    // WARNING: Could not emulate address calculation at 0x0000164f
                    // WARNING: Treating indirect jump as call
    (**(code **)(uVar5 * 2 + MEM(0x984a)))();
    return;
  }
  param_3 = param_3 * 8;
  *(undefined *)MEM(0xa526) = *(undefined *)(param_3 + SAVED_GAM(0x06b6));
  *(undefined *)MEM(0xa527) = *(undefined *)(param_3 + SAVED_GAM(0x06b7));
  local_8 = (undefined)iVar3;
  *(undefined *)(param_3 + SAVED_GAM(0x06b6)) = local_8;
  local_a = (undefined)iVar7;
  *(undefined *)(param_3 + SAVED_GAM(0x06b7)) = local_a;
  pbVar1 = (byte *)MEM(0x24e6);
  *pbVar1 = *pbVar1 | 2;
  pcVar6 = (char *)func_0x0000c232(iVar7,iVar3);
  if (*pcVar6 == -0x24) {
    *(undefined *)(param_3 + SAVED_GAM(0x06b5)) = 0;
    *(undefined *)(param_3 + SAVED_GAM(0x06b4)) = 0;
  }
  return;
}



void FUN_0000_16fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 unaff_DS;
  
  uVar1 = (uint)*(byte *)(param_1 * 8 + SAVED_GAM(0x06b6));
  uVar2 = (uint)*(byte *)(param_1 * 8 + SAVED_GAM(0x06b7));
  iVar6 = 0;
  while( true ) {
    iVar3 = RANDOM(3, false);
    if (iVar3 == 0) {
      iVar6 = FUN_0000_1482(uVar2 - 1,uVar1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0;
      uVar5 = MEM(0xffff);
      goto LAB_0000_1775;
    }
    if (iVar3 == 1) break;
    if (iVar3 == 2) {
      iVar6 = FUN_0000_1482(uVar2 + 1,uVar1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = 0;
      uVar5 = 1;
      goto LAB_0000_1775;
    }
    if (iVar3 == 3) {
      iVar6 = FUN_0000_1482(uVar2,uVar1 - 1,param_1);
      if (iVar6 == 0) {
        return;
      }
      uVar4 = MEM(0xffff);
      goto LAB_0000_17ba;
    }
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      return;
    }
  }
  iVar6 = FUN_0000_1482(uVar2,uVar1 + 1,param_1);
  if (iVar6 == 0) {
    return;
  }
  uVar4 = 1;
LAB_0000_17ba:
  uVar5 = 0;
LAB_0000_1775:
  FUN_0000_1578(uVar5,uVar4,param_1);
  return;
}



void FUN_0000_17d4(undefined2 param_1,int param_2)

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
  
  bVar1 = *(byte *)(param_2 * 8 + SAVED_GAM(0x06b6));
  uVar2 = (uint)bVar1;
  uVar3 = (uint)*(byte *)(param_2 * 8 + SAVED_GAM(0x06b7));
  bVar1 = bVar1 - *(char *)PARTY_X;
  local_a = (uint)bVar1;
  if (0x7f < bVar1) {
    local_a = local_a - MEM(0x0100);
  }
  bVar1 = *(char *)(param_2 * 8 + SAVED_GAM(0x06b7)) - *(char *)PARTY_Y;
  local_e = (uint)bVar1;
  if (0x7f < bVar1) {
    local_e = local_e - MEM(0x0100);
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
  iVar4 = RANDOM(1, false);
  if (iVar4 == 1) {
    if (local_4 != 0) {
      iVar4 = FUN_0000_1482(uVar3,uVar2 + local_4,param_2);
      if ((iVar4 != 0) && (iVar4 = FUN_0000_14c8(uVar3,uVar2 + local_4), iVar4 != 0))
      goto LAB_0000_18e2;
    }
    if (local_6 == 0) {
LAB_0000_197d:
      FUN_0000_16fc(param_2);
      return;
    }
    iVar4 = FUN_0000_1482(uVar3 + local_6,uVar2,param_2);
    if ((iVar4 == 0) || (iVar4 = FUN_0000_14c8(uVar3 + local_6,uVar2), iVar4 == 0))
    goto LAB_0000_197d;
  }
  else {
    if (local_6 == 0) {
LAB_0000_1955:
      if (local_4 == 0) goto LAB_0000_197d;
      iVar4 = FUN_0000_1482(uVar3,uVar2 + local_4,param_2);
      if ((iVar4 == 0) || (iVar4 = FUN_0000_14c8(uVar3,uVar2 + local_4), iVar4 == 0))
      goto LAB_0000_197d;
LAB_0000_18e2:
      local_6 = 0;
      goto LAB_0000_192a;
    }
    iVar4 = FUN_0000_1482(uVar3 + local_6,uVar2,param_2);
    if ((iVar4 == 0) || (iVar4 = FUN_0000_14c8(uVar3 + local_6,uVar2), iVar4 == 0))
    goto LAB_0000_1955;
  }
  local_4 = 0;
LAB_0000_192a:
  FUN_0000_1578(local_6,local_4,param_2);
  return;
}



void FUN_0000_198c(int param_1)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  bVar3 = *(byte *)(param_1 * 8 + SAVED_GAM(0x06b4));
  if ((bVar3 & 0xfc) == 0xec) { // Whirlpool
    pbVar1 = (byte *)(param_1 * 8 + SAVED_GAM(0x06b9));
    *pbVar1 = *pbVar1 ^ 1;
    if (*pbVar1 == 0) {
      return;
    }
    iVar5 = RANDOM(1, false);
    if (iVar5 == 0) {
      FUN_0000_16fc(param_1);
      return;
    }
  }
  else if (bVar3 == 0xfc) {
    iVar5 = FUN_0000_14ea(param_1);
    if ((iVar5 != 0) &&
       (bVar3 = *(byte *)(param_1 * 8 + SAVED_GAM(0x06b9)), pcVar2 = (char *)(param_1 * 8 + SAVED_GAM(0x06b9)),
       *pcVar2 = *pcVar2 + '\x01', bVar3 < 0x14)) {
      uVar6 = 0;
      goto LAB_0000_1a54;
    }
  }
  else if ((bVar3 & 0xfc) == 0x2c) {
    if (*(char *)SAVED_GAM(0x02ec) == '\0') {
      return;
    }
    iVar5 = param_1 * 8;
    uVar4 = *(uint *)((uint)*(byte *)SAVED_GAM(0x02ec) * 2 + (*(byte *)(iVar5 + SAVED_GAM(0x06b4)) - 0x2c) * 8 + MEM(0x2bf6));
    if ((uVar4 != 4) &&
       (pcVar2 = (char *)(iVar5 + SAVED_GAM(0x06bb)), *pcVar2 = *pcVar2 + '\x01',
       uVar4 < *(byte *)(iVar5 + SAVED_GAM(0x06bb)))) {
      *(undefined *)(iVar5 + SAVED_GAM(0x06bb)) = 0;
      return;
    }
  }
  uVar6 = 1;
LAB_0000_1a54:
  FUN_0000_17d4(uVar6,param_1);
  return;
}



int __cdecl16near FUN_0000_1a60(void)

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
  if (*(char *)SAVED_GAM(0x02d4) == 'T') {
LAB_0000_1a74:
    local_4 = 0;
  }
  else {
    if (*(char *)SAVED_GAM(0x02d4) == 'Q') {
      pbVar1 = (byte *)MEM(0x2c55);
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 != 0) goto LAB_0000_1a74;
    }
    bVar2 = *(byte *)MODE_OF_TRANSPORTATION & 0xfe;
    if ((bVar2 == 0x12) || (bVar2 == 0x14)) {
      pbVar1 = (byte *)MEM(0x2c57);
      *pbVar1 = *pbVar1 ^ 1;
      if (*pbVar1 != 0) goto LAB_0000_1a74;
    }
    iVar3 = RANDOM(30, true);
    iVar4 = FUN_0000_0d8c();
    if (iVar3 < iVar4) {
      FUN_0000_0fc4();
    }
    iVar3 = 0x1f;
    puVar5 = (undefined *)SAVED_GAM(0x07ac);
    do {
      iVar4 = FUN_0000_105c(*puVar5);
      if (iVar4 != 0) {
        iVar4 = FUN_0000_131a(iVar3);
        local_4 = local_4 + iVar4;
        if (local_4 == 0) {
          FUN_0000_198c(iVar3);
        }
      }
      puVar5 = puVar5 + -8;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 0x1f;
    puVar5 = (undefined *)SAVED_GAM(0x07ac);
    local_8 = (char *)SAVED_GAM(0x07ae);
    local_c = (char *)SAVED_GAM(0x07af);
    do {
      iVar4 = FUN_0000_105c(*puVar5);
      if ((iVar4 != 0) &&
         ((0x1f < (byte)(*local_8 - *(char *)SAVED_GAM(0x02f5)) || (0x1f < (byte)(*local_c - *(char *)SAVED_GAM(0x02f6))))
         )) {
        func_0x0000b8a4(iVar3,0,0,0,0,0,0);
      }
      puVar5 = puVar5 + -8;
      local_8 = local_8 + -8;
      local_c = local_c + -8;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
  }
  return local_4;
}



void troll_demand(void) {
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  func_0x00009680(MEM(0x6b2c));
  func_0x0000b82c();
  iVar3 = (uint)*(byte *)(*(int *)SAVED_GAM(0x02d0) * 0x20 + SAVED_GAM(0x000e)) * 3 + -99;
  func_0x0000986e(0x20,2);
  func_0x00009680(MEM(0x6b4a));
  do {
    cVar2 = func_0x0000a49c();
    if (cVar2 == 'Y') break;
  } while (cVar2 != 'N');
  func_0x000094ea(cVar2);
  func_0x000094ea(10);
  if (cVar2 == 'Y') {
    piVar1 = (int *)SAVED_GAM(0x0204);
    *piVar1 = *piVar1 + iVar3;
    *(undefined *)MEM(0xa9fa) = 1;
    if (-1 < *(int *)SAVED_GAM(0x0204)) {
      return;
    }
    piVar1 = (int *)SAVED_GAM(0x0204);
    *piVar1 = *piVar1 - iVar3;
  }
  uVar4 = func_0x0000b714();
  func_0x0000b8a4(uVar4,0,0, *PARTY_Y, *PARTY_X, 0, TROLL);
  func_0x0000df80(uVar4);
  return;
}



void check_for_trolls(void) {
  int iVar1;
  uint dex_thresh;
  char *pc_status_p;
  undefined2 unaff_DS;
  byte *pc_dex_p;
  int pc_name_p;
  
  if (RANDOM(7, false) != 0 || *MODE_OF_TRANSPORTATION != ON_FOOT) return;

  func_0x0000d740();
  func_0x00009680(MEM(0x6b64));
  func_0x0000b916(10);
  if (*PARTY_SIZE == 0) continue;  // Um, what?
  pc_status_p = PC_STATUS;
  pc_name_p = PC_NAME;
  pc_dex_p = PC_DEX;
  for (int i = 0; i < *PARTY_SIZE; i++) {
    if ((*pc_status_p != 'D') && (*pc_status_p != 'S')) {
      func_0x00009680(pc_name_p);
      func_0x00009680(MEM(0x6b8c));
      iVar1 = 3;
      do {
        // Print dots slowly, one at a time
        func_0x0000b916(5);
        func_0x000094ea(0x2e);
      } while (--iVar1 != 0);
      func_0x00009680(MEM(0x6b9c));
      dex_thresh = RANDOM(30, true);
      if (*pc_dex_p < dex_thresh) {
        troll_demand();
        return;
      }
    }
    pc_status_p = pc_status_p + 0x20;
    pc_name_p = pc_name_p + 0x20;
    pc_dex_p = pc_dex_p + 0x20;
    local_4 = local_4 + 1;
  }
  func_0x00009680(MEM(0x6ba0));
}


