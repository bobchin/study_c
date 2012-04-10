#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &n1);
    printf("整数Ｂ："); scanf("%d", &n2);

    if (n1 % n2)
        puts("ＢはＡの約数ではありません。");
    else
        puts("ＢはＡの約数です。");

    return(0);
}
