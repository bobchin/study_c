#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int no)
{
  int i;

  for (i = 0; i < no; i++) {
    v1[i] = v2[no - 1 - i];
  }
}

int main (void)
{
  int i;
  int data[] = {50, 42, 31, 99, 68};
  int result[5] = {0};

  intary_rcpy(result, data, 5);

  for (i = 0; i < 5; i++) {
    printf("result[%d]=%d\n", i, result[i]);
  }
  printf("\n");

  return 0;
}
