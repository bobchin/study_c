/*
 * 点数（０〜１００）を読み込んで分布を表示
 */
#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("人数を入力してください：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a要【１以上%d以下】：", NUMBER);
    } while (num < 1 || num > NUMBER);

    puts("点数を入力してください。");
    for (i = 0; i < num; i++) {
        printf("%2d番：", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a要【０以上１００以下】：");
        } while (tensu[i] < 0 || tensu[i] > 100);

        bunpu[tensu[i] / 10]++;
    }

    puts("\n[[ 分布グラフ ]]\n");
    printf("      100：");
    for (j = 0; j < bunpu[10]; j++) {
        putchar('*');
    }
    putchar('\n');

    for (i = 9; i >= 0; i--) {
        printf("%3d - %3d：", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return(0);
}
