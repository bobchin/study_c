/*
 * 読み込んだ整数値を０までカウントダウン（第二版）
 */
#include <stdio.h>

int main(void)
{
    int no;

    printf("正の整数を入力してください：");
    scanf("%d", &no);

    while (no >= 0)
        printf("%d ", no--);

    putchar('\n');

    return(0);
}
