#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &n1);
    printf("整数Ｂ："); scanf("%d", &n2);

    printf("Ａの値はＢの値の %f %% です。\n", (double)100 * n1 / n2);

    return(0);
}
