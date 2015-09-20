/*
 * 整数の２乗と浮動小数点数の２乗（関数）
 */
#include <stdio.h>

int sqr_int(int x)
{
  return (x * x);
}

double sqr_double(double x)
{
  return (x * x);
}

int main(void)
{
  int    nx;
  double dx;

  printf("整数を入力してください：");
  scanf("%d", &nx);
  printf("その数の２乗は%dです。\n", sqr_int(nx));

  printf("実数を入力してください：");
  scanf("%lf", &dx);
  printf("その数の２乗は%fです。\n", sqr_double(dx));

  return 0;
}
