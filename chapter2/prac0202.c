#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &n1);
    printf("整数Ｂ："); scanf("%d", &n2);

    printf("それらの和は %d で積は %d です。\n", n1 + n2, n1 * n2);

    return 0;
}
