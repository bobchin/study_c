#include <stdio.h>

void rev_intary(int vc[], int no)
{
  int i, tmp;
  int half = no / 2;

  for (i = 0; i < half; i++) {
    tmp = vc[i];
    vc[i] = vc[no - 1 - i];
    vc[no - 1 - i] = tmp;
  }
}

int main (void)
{
  int i;
  int data[] = {50, 42, 31, 99, 68};
  int data2[] = {50, 42, 31, 99, 68, 22};

  rev_intary(data, 5);
  rev_intary(data2, 6);

  printf("data:\n");
  for (i = 0; i < 5; i++) {
    printf("data[%d]=%d\n", i, data[i]);
  }
  printf("\n");

  printf("data2:\n");
  for (i = 0; i < 6; i++) {
    printf("data2[%d]=%d\n", i, data2[i]);
  }
  printf("\n");

  return 0;
}
