#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    puts("三つの整数を入力してください。");

    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);
    printf("整数３："); scanf("%d", &n3);

    printf("それらの和は %d です。\n", n1 + n2 + n3);

    return(0);
}
