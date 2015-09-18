/*
 * 1000以下の素数を求める（第２版）
 */
#include <stdio.h>

int main(void)
{
  int i, no;
  unsigned long counter = 0;

  no = 2;
  printf("%d\n", no++);

  for ( ; no <= 1000; no += 2) {
    for (i = 2; i < no; i++) {
      counter++;
      if (no % i == 0) {
        break;
      }
    }

    if (no == i) {
      printf("%d\n", no);
    }
  }
  printf("乗除を行った回数：%lu\n", counter);

  return 0;
}
