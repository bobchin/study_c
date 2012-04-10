/*
 * 最下位の桁は５であるか
 */
#include <stdio.h>

int main(void)
{
    int vx;

    printf("整数を入力してください：");
    scanf("%d", &vx);

    if ((vx % 10) == 5)
        puts("最も下の桁は５です。");

    return(0);
}
