/*
 * 読み込んだ 2 つの整数値の和を求めて表示
 */
#include <stdio.h>

int main(void)
{
    int n1, n2;
    int wa;

    puts("二つの整数を入力してください。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);

    wa = n1 + n2;

    printf("それらの和は %d です。\n", wa);

    return (0);
}
