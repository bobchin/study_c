/*
 * 整数の２乗と浮動小数点数の２乗（関数形式マクロ）
 */
#include <stdio.h>

#define sqr(x)    ((x) * (x))

int main(void)
{
  int    nx;
  double dx;

  printf("整数を入力してください：");
  scanf("%d", &nx);
  printf("その数の２乗は%dです。\n", sqr(nx));

  printf("実数を入力してください：");
  scanf("%lf", &dx);
  printf("その数の２乗は%fです。\n", sqr(dx));

  return 0;
}
