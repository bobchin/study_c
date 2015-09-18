/*
 * べき乗を求める
 */
#include <stdio.h>

double power(double dx, int no)
{
  double tmp = 1.0;

  while (no-- > 0)
    tmp *= dx;
  return tmp;
}

int main(void)
{
  int n;
  double x;

  printf("実数を入力してください："); scanf("%lf", &x);
  printf("整数を入力してください："); scanf("%d", &n);

  printf("%.2fの%d乗は%.2fです。\n", x, n ,power(x, n));

  return 0;
}
