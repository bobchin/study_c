#include <stdio.h>

int cube(int x)
{
  return (x * x * x);
}

int main (void)
{
  int x;

  puts("整数を入力してください。");
  printf("整数："); scanf("%d", &x);

  printf("%dの三乗は%dです。\n", x, cube(x));

  return 0;
}
