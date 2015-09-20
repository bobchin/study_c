#include <stdio.h>

void mul(const int ma[2][3], const int mb[3][2], int mc[2][2])
{
  int i, j, k, sum;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j ++) {
      sum = 0;
      for (k = 0; k < 3; k++) {
        sum += ma[i][k] * mb[k][j];
      }
      mc[i][j] = sum;
    }
  }
}

int main()
{
  int i, j;
  int x[2][3] = { {1, 2, 3}, {4, 5, 6} };
  int y[3][2] = { {1, 5}, {5, 3}, {8, 1} };
  int result[2][2] = { 0 };

  mul(x, y, result);

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j ++) {
      printf("%3d", result[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
