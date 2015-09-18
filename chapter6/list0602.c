/*
 * 三つの整数の最大値を返す関数
 */
#include <stdio.h>

int max3(int x, int y, int z)
{
  int max = x;

  if (y > max) max = y;
  if (z > max) max = z;
  return max;
}

int main(void)
{
  int na, nb, nc;

  puts("三つの整数を入力してください。");
  printf("整数１："); scanf("%d", &na);
  printf("整数２："); scanf("%d", &nb);
  printf("整数３："); scanf("%d", &nc);

  printf("最も大きい値は%dです。\n", max3(na, nb, nc));

  return 0;
}
