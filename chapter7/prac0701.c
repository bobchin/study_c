#include <stdio.h>

int power(int no)
{
  int result = 1;
  for (int i = 0; i < no; i++) {
    result *= 2;
  }
  return result;
}

int main(void)
{
  unsigned int value, no;

  printf("非負の整数を入力してください：");
  scanf("%u", &value);

  printf("何ビットシフトしますか：");
  scanf("%u", &no);

  printf("%uを%uビット左シフト：%u\n", value, no, value << no);
  printf("%uを２の%u乗倍　　　：%u\n", value, no, value * power(no));

  printf("%uを%uビット右シフト：%u\n", value, no, value >> no);
  printf("%uを２の%u乗倍分の１：%u\n", value, no, value / power(no));

  return 0;
}
