/*
 * 要素数noの配列vcの最大値を返す
 */
#include <stdio.h>

#define NUMBER 5

int max_of(const int vc[], int no)
{
  int i;
  int max = vc[0];
  for (i = 1; i < no; i++) {
    if (vc[i] > max)
      max = vc[i];
  }
  return max;
}

int main(void)
{
  int i;
  int eng[NUMBER];
  int mat[NUMBER];
  int max_e, max_m;

  printf("%d人の点数を入力してください。\n", NUMBER);
  for (i = 0; i < NUMBER; i++) {
    printf("[%d] 英語：", i + 1); scanf("%d", &eng[i]);
    printf( "    数学：");        scanf("%d", &mat[i]);
  }
  max_e = max_of(eng, NUMBER);
  max_m = max_of(mat, NUMBER);

  printf("英語の最高点＝%d\n", max_e);
  printf("数学の最高点＝%d\n", max_m);

  return 0;
}
