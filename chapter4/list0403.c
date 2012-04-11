/*
 * 読み込んだ非負の整数値の桁数を求める
 */
#include <stdio.h>

int main(void)
{
    int num;
    int dig;

    do {
        printf("非負の整数を入力してください：");
        scanf("%d", &num);
        if (num < 0)
            puts("\a負の数を入力しないでください。");
    } while (num < 0);

    dig = 0;
    do {
        num = num / 10;
        dig = dig + 1;
    } while (num > 0);

    printf("その数は %d 桁です。\n", dig);

    return(0);
}
