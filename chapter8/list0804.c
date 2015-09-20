/*
 * 警報を発しながら表示を行うマクロ
 */
#include <stdio.h>

#define putsa(str)  ( putchar('\a') , puts(str) )

int main(void)
{
  int na;

  printf("整数を入力してください：");
  scanf("%d", &na);

  if (na)
    putsa("その数は０ではありません");
  else
    putsa("その数は０です");

  return 0;
}
