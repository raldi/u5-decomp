typedef unsigned char byte;
typedef unsigned int uint;

/* Trivial function from cmds */
uint cmds_141b_1504(int param_1,uint param_2,int param_3,int param_4)
{
  if ((param_4 == 1) && (param_3 == 0)) {
    param_2 = param_2 + 1;
  }
  if ((param_4 == 0) && (param_3 == 1)) {
    param_2 = param_2 + 2;
  }
  if ((param_4 == -1) && (param_3 == 0)) {
    param_2 = param_2 + 3;
  }
  if (param_1 != 0) {
    param_2 = param_2 ^ 2;
  }
  return param_2;
}
