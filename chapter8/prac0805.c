#include <stdio.h>

int fact(int n)
{
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main(void)
{
  int num;

  printf("整数を入力してください：");
  scanf("%d", &num);

  printf("その数の階乗は%dです。\n", fact(num));

  return 0;
}
