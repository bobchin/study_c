/*
 * 最大公約数を求める
 */
#include <stdio.h>

/* vx と vy の最大公約数を返す(vx >= vy) */
int gcdf(int vx, int vy)
{
  return (vy == 0)? vx: gcdf(vy, vx % vy);
}

/* va と vb の最大公約数を求める */
int gcd(int va, int vb)
{
  return (va > vb)? gcdf(va, vb): gcdf(vb, va);
}

int main(void)
{
  int n1, n2;

  puts("二つの整数を入力してください。");

  printf("整数１："); scanf("%d", &n1);
  printf("整数２："); scanf("%d", &n2);

  printf("最大公約数は%dです。\n", gcd(n1, n2));

  return 0;
}
