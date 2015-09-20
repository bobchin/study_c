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

unsigned setbit(unsigned bit)
{
  if (bit)
    return (1U << (bit - 1));
  else
    return 0U;
}

unsigned set(unsigned x, int pos)
{
  return x | setbit(pos);
}

unsigned reset(unsigned x, int pos)
{
  return x & ~setbit(pos);
}

unsigned inverse(unsigned x, int pos)
{
  unsigned posbit = (x >> (pos - 1)) & 1U;
  if (posbit) {
    return reset(x, pos);
  } else {
    return set(x, pos);
  }
}

int main()
{
  unsigned int value, no;

  printf("非負の整数を入力してください：");
  scanf("%u", &value);

  printf("何ビット目を変更しますか：");
  scanf("%u", &no);

  printf("\n入力した値   　= ");     print_bits(value);
  printf("\n%dビット目を１　= ", no); print_bits(set(value, no));
  printf("\n%dビット目を０　= ", no); print_bits(reset(value, no));
  printf("\n%dビット目を反転= ", no); print_bits(inverse(value, no));
  putchar('\n');

  return 0;
}
