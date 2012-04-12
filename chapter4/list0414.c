/*
 * 整数を指示された個数だけ読み込んで合計値・平均値を表示（for文）
 */
#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    int num, tmp;

    printf("整数は何個ですか：");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("No.%d:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合計値：%d\n", sum);
    printf("平均値：%.2f\n", (double)sum / num);

    return(0);
}
