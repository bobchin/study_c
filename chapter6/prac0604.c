#include <stdio.h>

int sqr(int x)
{
  return (x * x);
}

int sqr_2(x)
{
  return sqr(x) * sqr(x);
}

int main (void)
{
  int x;

  puts("整数を入力してください。");
  printf("整数："); scanf("%d", &x);

  printf("%dの四乗は%dです。\n", x, sqr_2(x));

  return 0;
}
