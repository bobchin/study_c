/*
 * 読み込んだ非負の整数値を逆順に表示
 */
#include <stdio.h>

int scan_unit(void)
{
  int tmp;

  do {
    printf("非負の整数を入力してください：");
    scanf("%d", &tmp);
    if (tmp < 0)
      puts("\a負の数を入力しないでください。");
  } while(tmp < 0);

  return tmp;
}

int rev_int(int num)
{
  int tmp = 0;

  if (num > 0) {
    do {
      tmp = tmp * 10 + num % 10;
      num /= 10;
    } while(num > 0);
  }

  return tmp;
}

int main(void)
{
  int nx = scan_unit();

  printf("反転した値は%dです。\n", rev_int(nx));

  return 0;
}
