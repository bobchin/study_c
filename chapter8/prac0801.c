#include <stdio.h>

#define diff(x, y)  ((x > y)? (x - y): (y - x))

int main(void)
{
  int nx, ny;

  printf("整数を入力してください：");
  scanf("%d", &nx);
  printf("整数を入力してください：");
  scanf("%d", &ny);

  printf("その数の差は%dです。\n", diff(nx, ny));

  return 0;
}
