#include <stdio.h>

int main(void)
{
    int na, nb;

    puts("二つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &na);
    printf("整数Ｂ："); scanf("%d", &nb);

    printf("ＡをＢで割ると %d あまり %d です。\n", na / nb, na % nb);

    return 0;
}
