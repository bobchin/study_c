#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");

    printf("整数Ａ："); scanf("%d", &n1);
    printf("整数Ｂ："); scanf("%d", &n2);

    if (n1 == n2)
        puts("ＡとＢは等しいです。");
    else if (n1 > n2)
        puts("ＡはＢより大きいです。");
    else
        puts("ＡはＢより小さいです。");

    return(0);
}
