/*
 * 二つの整数の二乗の差を求める
 */
#include <stdio.h>

int sqr(int x)
{
  return (x * x);
}

int diff(int x, int y)
{
  return ((x > y)? (x - y): (y - x));
}

int main (void)
{
  int kx, ky, kx2, ky2;

  puts("二つの整数を入力してください。");
  printf("整数kx："); scanf("%d", &kx);
  printf("整数ky："); scanf("%d", &ky);

  kx2 = sqr(kx);
  ky2 = sqr(ky);
  printf("kxの二乗とkyの二乗の差は%dです。\n", diff(kx2, ky2));

  return 0;
}
