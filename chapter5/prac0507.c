#include <stdio.h>

int main(void)
{
  int i, j, k, sum;
  int x[2][3] = { {1, 2, 3}, {4, 5, 6} };
  int y[3][2] = { {1, 5}, {5, 3}, {8, 1} };
  int result[2][2] = { 0 };

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j ++) {
      sum = 0;
      for (k = 0; k < 3; k++) {
        sum += x[i][k] * y[k][j];
      }
      result[i][j] = sum;
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j ++) {
      printf("%3d", result[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
