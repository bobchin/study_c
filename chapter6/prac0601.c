#include <stdio.h>

int minof(int x, int y)
{
  return (x > y)? y: x;
}

int main(void)
{
  int na, nb;

  puts("二つの整数を入力してください。");
  printf("整数１："); scanf("%d", &na);
  printf("整数２："); scanf("%d", &nb);

  printf("小さい方の値は%dです。\n", minof(na, nb));

  return 0;
}
