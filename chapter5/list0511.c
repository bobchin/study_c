/*
 * ５人の学生の点数を読み込んで最高点・最低点を表示
 */
#include <stdio.h>

#define NUMBER 5

int main(void)
{
    int i;
    int tensu[NUMBER];
    int max, min;

    puts("点数を入力してください。");
    for (i = 0; i < NUMBER; i++) {
        printf("%2d番：", i + 1);
        scanf("%d", &tensu[i]);
    }

    min = max = tensu[0];
    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max) max = tensu[i];
        if (tensu[i] < min) min = tensu[i];
    }
    printf("最高点：%d\n", max);
    printf("最低点：%d\n", min);

    return(0);
}
