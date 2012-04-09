/*
 * 三つの整数値を読み込んで合計値と平均値を表示
 */
#include <stdio.h>

int main(void)
{
    int na, nb, nc;
    int sum;
    double ave;

    puts("三つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &na);
    printf("整数Ｂ："); scanf("%d", &nb);
    printf("整数Ｃ："); scanf("%d", &nc);

    sum = na + nb + nc;
    ave = (double)sum / 3;

    printf("それらの合計は %5d です\n", sum);
    printf("それらの平均は %5.1f です\n", ave);

    return(0);
}
