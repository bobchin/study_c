/*
 * 二つの整数の大きい方の値を返す関数
 */
#include <stdio.h>

/* --- 大きい方の値を返す --- */
int maxof(int x, int y){
  if (x > y)
    return x;
  else
    return y;
}

int main(void)
{
  int na, nb;

  puts("二つの整数を入力してください。");
  printf("整数１："); scanf("%d", &na);
  printf("整数２："); scanf("%d", &nb);

  printf("大きい方の値は%dです。\n", maxof(na, nb));

  return 0;
}
