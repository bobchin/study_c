#include <stdio.h>

void print_cnt(int num)
{
  for (int i = 0; i < num; i++)
    printf("*");
}

int main(void)
{
  int i, ch;
  int cnt[10] = {0};

  while (1) {
    ch = getchar();
    if (ch == 'q') break;

    if (ch >= '0' && ch <= '9')
      cnt[ch - '0']++;
  }

  puts("数字文字の出現回数");
  for (i = 0; i < 10; i++) {
    printf("'%d'： ", i);
    print_cnt(cnt[i]);
    putchar('\n');
  }

  return 0;
}
