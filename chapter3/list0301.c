/*
 * 読み込んだ整数値は 5 で割り切れないか
 */
#include <stdio.h>

int main(void)
{
    int vx;

    printf("整数を入力してください：");
    scanf("%d", &vx);

    if (vx % 5)
        puts("その数は 5 で割りきれません。");

    return(0);
}
