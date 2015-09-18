/*
 * 1000以下の素数を求める（第３版）
 */
#include <stdio.h>

int main(void)
{
  int i, no;
  unsigned long counter = 0;

  no = 2;
  printf("%d\n", no++);

  for ( ; no <= 1000; no += 2) {
    for (i = 3; i < no; i += 2) {
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
