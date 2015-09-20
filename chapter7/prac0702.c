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

unsigned rrotate(unsigned x, int n)
{
  int i = int_bits();
  return (x >> n) | (x << (i - n));
}

unsigned lrotate(unsigned x, int n)
{
  int i = int_bits();
  return (x << n) | (x >> (i - n));
}

int main()
{
  unsigned int value, no;

  printf("非負の整数を入力してください：");
  scanf("%u", &value);

  printf("何ビット回転しますか：");
  scanf("%u", &no);

  printf("\n入力した値   = ");       print_bits(value);
  printf("\n%dビット右回転= ", no); print_bits(rrotate(value, no));
  printf("\n%dビット左回転= ", no); print_bits(lrotate(value, no));
  putchar('\n');

  return 0;
}
