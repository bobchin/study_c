#include <stdio.h>

int combination(int x, int r)
{
  if (r == 0 || x == r) {
    return 1;
  } else if (r == 1) {
    return x;
  } else {
    return combination(x - 1, r - 1) + combination(x - 1, r);
  }
}

int main(void)
{
  int n, r;

  printf("全部で何個の整数？：");      scanf("%d", &n);
  printf("そのうちいくつ取り出す？："); scanf("%d", &r);

  printf("組み合わせ%dC%dは%dです。\n", n, r, combination(n, r));

  return 0;
}
