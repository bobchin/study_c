#include <stdio.h>

#define max(x, y)  (((x) > (y))? (x): (y))

int main(void)
{
  int n1, n2, n3, n4;

  printf("整数を入力してください："); scanf("%d", &n1);
  printf("整数を入力してください："); scanf("%d", &n2);
  printf("整数を入力してください："); scanf("%d", &n3);
  printf("整数を入力してください："); scanf("%d", &n4);

  printf("４つ数で一番大きいのは%dです。\n", max(max(n1, n2), max(n3, n4)));
  printf("４つ数で一番大きいのは%dです。\n", max(max(max(n1, n2), n3), n4));

  return 0;
}
