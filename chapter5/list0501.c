/*
 * ５人の学生の点数を読み込んで合計点と平均点を表示
 */
#include <stdio.h>

int main(void)
{
    int uchida;
    int satoh;
    int sanaka;
    int hiraki;
    int masaki;
    int sum = 0;

    puts("点数を入力してください。");
    printf("１番："); scanf("%d", &uchida);
    printf("２番："); scanf("%d", &satoh);
    printf("３番："); scanf("%d", &sanaka);
    printf("４番："); scanf("%d", &hiraki);
    printf("５番："); scanf("%d", &masaki);

    sum += uchida;
    sum += satoh;
    sum += sanaka;
    sum += hiraki;
    sum += masaki;

    printf("合計点：%5d\n",sum);
    printf("平均点：%5.1f\n", (double)sum / 5);

    return(0);
}
