/*
 * char型が符号付きか符号なしかを判定
 */
#include <stdio.h>
#include <limits.h>

int main(void)
{
  printf("この処理系のchar型は");

  if (CHAR_MIN)
    puts("符号付きです。");
  else
    puts("符号なしです。");

  return 0;
}
