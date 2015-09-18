/*
 * 直角三角形（左下が直角）を表示（関数版）
 */
#include <stdio.h>

void put_stars(int no)
{
  while (no-- > 0)
    putchar('*');
}

int main(void)
{
  int i, ln;

  printf("何段ですか：");
  scanf("%d", &ln);

  for (i = 1; i <= ln; i++) {
    put_stars(i);
    putchar('\n');
  }

  return 0;
}
