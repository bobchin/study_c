/*
 * 暗黙の初期化を確認
 */
#include <stdio.h>

int fx;

int main(void)
{
  static int sx;
  int        ax;

  printf("ax = %d\n", ax);
  printf("sx = %d\n", sx);
  printf("fx = %d\n", fx);

  return 0;
}
