/*
 * 読み込んだ二つの整数値は等しいか
 */
#include <stdio.h>

int main(void)
{
    int x1, x2;

    puts("二つの整数を入力してください。");
    printf("整数１："); scanf("%d", &x1);
    printf("整数２："); scanf("%d", &x2);

    if (x1 == x2)
        puts("それらの値は同じです。");
    else
        puts("それらの値は違います。");

    return(0);
}
