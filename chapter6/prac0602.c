#include <stdio.h>

int min3(int x, int y, int z)
{
  int min;

  min = x;
  if (y < min) min = y;
  if (z < min) min = z;
  return min;
}

int main(void)
{
  int na, nb, nc;

  puts("三つの整数を入力してください。");
  printf("整数１："); scanf("%d", &na);
  printf("整数２："); scanf("%d", &nb);
  printf("整数３："); scanf("%d", &nc);

  printf("いちばん小さい値は%dです。\n", min3(na, nb, nc));

  return 0;
}
