#include <stdio.h>

void alert(int no)
{
  while (no-- > 0)
    printf("\a");
}

int main (void)
{
  int no;
  printf("整数を入力してください："); scanf("%d", &no);

  alert(no);

  return 0;
}
