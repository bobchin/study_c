/*
 * 読み込んだ整数値は 5 で割り切れないか割り切れるか
 */
#include <stdio.h>

int main(void)
{
    int vx;

    printf("整数を入力してください：");
    scanf("%d", &vx);

    if (vx % 5)
        puts("その数は 5 で割りきれません。");
    else
        puts("その数は 5 で割りきれます。");

    return(0);
}
