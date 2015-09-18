/*
 * 1000以下の素数を求める（第５版）
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
    int flag = 0;
    for (i = 1; counter++, prime[i] * prime[i] <= no; i++) {
      counter++;
      if (no % prime[i] == 0) {
        flag = 1;
        break;
      }
    }

    if (!flag) {
      prime[ptr++] = no;
    }
  }

  for (i = 0; i < ptr; i++) {
    printf("%d\n", prime[i]);
  }
  printf("乗除を行った回数：%lu\n", counter);

  return 0;
}
