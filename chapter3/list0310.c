/*
 * 読み込んだ二つの整数値の大きい方の値を表示
 */
#include <stdio.h>

int main (void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &n1);
    printf("整数Ｂ："); scanf("%d", &n2);

    if (n1 > n2)
        printf("大きい方の値は %d です。\n", n1);
    else
        printf("大きい方の値は %d です。\n", n2);

    return(0);
}
