/*
 * 1000以下の素数を求める（第４版）
 */
#include <stdio.h>

int main(void)
{
  int i, no;
  int prime[500]; /* 素数を格納する */
  int ptr = 0;    /* 素数の個数    */
  unsigned long counter = 0;

  prime[ptr++] = 2;
  prime[ptr++] = 3;

  for (no = 5 ; no <= 1000; no += 2) {
    for (i = 1; i < ptr; i++) {
      counter++;
      if (no % prime[i] == 0) {
        break;
      }
    }

    if (ptr == i) {
      prime[ptr++] = no;
    }
  }

  for (i = 0; i < ptr; i++) {
    printf("%d\n", prime[i]);
  }
  printf("乗除を行った回数：%lu\n", counter);

  return 0;
}
