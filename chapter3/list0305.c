/*
 * 読み込んだ整数値は非０か０か
 */
#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してください：");
    scanf("%d", &num);

    if (num)
        puts("その数は０ではありません。");
    else
        puts("その数は０です。");

    return(0);
}
