/*
 * 読み込んだ非負の整数値の個数だけ＊を連続して表示（好きなだけ繰り返す）
 */
#include <stdio.h>

int main(void)
{
    int cont;

    do {
        int num, i;

        do {
            printf("非負の整数を入力してください：");
            scanf("%d", &num);
            if (num < 0)
                puts("\a負の数を入力しないでください。");
        } while (num < 0);

        for (i = 1; i <= num; i++)
            putchar('*');
        putchar('\n');

        printf("もう一度？【Yes･･･0/No･･･9】：");
        scanf("%d", &cont);
    } while (!cont);

    return(0);
}
