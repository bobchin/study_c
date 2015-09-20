#include <stdio.h>

int ary[5];

void func(void)
{
  static int array[5];

  for (int i = 0; i < 5; i++) {
    printf("array[%d]=%d\n", i, array[i]);
  }
}

int main(void)
{
  for (int i = 0; i < 5; i++) {
    printf("ary[%d]=%d\n", i, ary[i]);
  }

  func();

  return 0;
}
