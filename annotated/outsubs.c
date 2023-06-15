typedef unsigned char byte;
typedef unsigned int uint;

/* TODO: Better gamedata solution */
byte pad1[14372] = {0};  /* Make the data line up */
byte arr_3866[] = {0,0,0,0,0,0,0,0};
byte arr_386e[] = {0,0,0,0,0,0,0,0};
byte pad2[8282] = {0};  /* Make the data line up */
byte arr_58d0[] = {0,0,0,0,0,0,0,0};
byte arr_58d8[] = {0,0,0,0,0,0,0,0};


int outsubs_124c_0000(int param_1)
{
    // TODO: Didn't manage to get this to quite line up with binary, it's
    // doing the same shift-right by byte as outsubs_124c_004a, but the
    // assembly code does this func with byte access and 004a with SHR opcode,
    // wtf...
    int ret = 1;
    int i;

    param_1 = (uint)((byte*)&param_1)[1];
    for (i = 0; i < 8; ++i) {
        if (arr_3866[i] == param_1) {
            ret = arr_58d0[i] == 0;
            break;
        }
    }
    return ret;
}


int outsubs_124c_004a(int param_1)
{
  int ret = 0;
  int i;

  param_1 >>= 8;
  for (i = 0; i < 8; ++i) {
      if (arr_386e[i] == param_1) {
          ret = 0x7f < arr_58d8[i];
          break;
      }
  }
  return ret;
}

