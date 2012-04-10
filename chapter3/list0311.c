/*
 * 読み込んだ二つの整数値の大きい方の値を求めた表示
 */
#include <stdio.h>

int main(void)
{
    int n1, n2, max;

    puts("二つの整数を入力してください。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);

    if (n1 > n2) max = n1; else max = n2;

    printf("大きい方の値は %d です。\n", max);

    return(0);
}
