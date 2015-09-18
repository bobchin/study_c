/*
 * 三つの整数の最大値を返す関数
 */
#include <stdio.h>

int maxof(int x, int y){
  if (x > y)
    return x;
  else
    return y;
}

int max4(int w, int x, int y, int z)
{
  return maxof(maxof(w, x), maxof(y,z));
}

int main(void)
{
  int na, nb, nc, nd;

  puts("三つの整数を入力してください。");
  printf("整数１："); scanf("%d", &na);
  printf("整数２："); scanf("%d", &nb);
  printf("整数３："); scanf("%d", &nc);
  printf("整数４："); scanf("%d", &nd);

  printf("最も大きい値は%dです。\n", max4(na, nb, nc, nd));

  return 0;
}
