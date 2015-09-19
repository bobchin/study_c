#include <stdio.h>

int min_of(const int vc[], int no)
{
  int i;
  int min = vc[0];

  for (i = 0; i < no; i++) {
    if (vc[i] < min)
      min = vc[i];
  }

  return min;
}

int main (void)
{
  int data[] = {50, 42, 31, 99, 68};

  printf("最小値は%dです。\n", min_of(data, 5));

  return 0;
}
