/*
 * ５人の学生の点数を読み込んで合計点と平均点を表示
 */
#include <stdio.h>

int main(void)
{
    int i;
    int tensu[5];
    int sum = 0;

    puts("点数を入力してください。");
    for (i = 0; i < 5; i++) {
        printf("%2d番：", i + 1); scanf("%d", &tensu[i]);
        sum += tensu[i];
    }

    printf("合計点：%5d\n",sum);
    printf("平均点：%5.1f\n", (double)sum / 5);

    return(0);
}
