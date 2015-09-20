/*
 * unsigned型を左右にシフトした値を表示
 */
#include <stdio.h>

int count_bits(unsigned x)
{
  int count = 0;
  while (x) {
    if (x & 1U) count++;
    x >>= 1;
  }
  return count;
}

int int_bits(void)
{
  return (count_bits(~0U));
}

void print_bits(unsigned x)
{
  int i;
  for (i = int_bits() - 1; i >= 0; i--) {
    putchar(((x >> i) & 1U)? '1': '0');
  }
}

int main(void)
{
  unsigned nx, no;

  printf("非負の整数を入力してください：");
  scanf("%u", &nx);
  printf("何ビットシフトしますか：");
  scanf("%u", &no);

  printf("\n整数             = "); print_bits(nx);
  printf("\n左にシフトした値 = "); print_bits(nx << no);
  printf("\n右にシフトした値 = "); print_bits(nx >> no);
  putchar('\n');

  return 0;
}
