typedef unsigned char byte;
typedef unsigned int uint;

/* TODO: Better gamedata solution */
byte pad1[14380] = {0};  /* Make the data line up */
byte arr_386e[] = {0,0,0,0,0,0,0,0};
byte pad2[8290] = {0};  /* Make the data line up */
byte arr_58d8[] = {0,0,0,0,0,0,0,0};


int outsubs_004a(int param_1)
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

