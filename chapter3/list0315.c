/*
 * 読み込んだ二つの整数値の大きい方の値・小さい方の値を求めて表示
 */
#include <stdio.h>

int main(void)
{
    int n1, n2, max, min;

    puts("二つの整数を入力してください。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);

    if (n1 > n2) {
        max = n1;
        min = n2;
    } else {
        max = n2;
        min = n1;
    }
    
    printf("大きい方の値は %d です。\n", max);
    printf("小さい方の値は %d です。\n", min);

    return(0);
}
