/*
 * 直角三角形（右下が直角）を表示（関数版）
 */
#include <stdio.h>

void put_nchar(int ch, int no)
{
  while (no-- > 0)
    putchar(ch);
}

int main(void)
{
  int i, ln;

  printf("何段ですか：");
  scanf("%d", &ln);

  for (i = 1; i <= ln; i++) {
    put_nchar(' ', ln - i);
    put_nchar('*', i);
    putchar('\n');
  }

  return 0;
}
