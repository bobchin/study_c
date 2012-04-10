#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数Ａ："); scanf("%d", &n1);
    printf("整数Ｂ："); scanf("%d", &n2);

    if ((n1 - n2) > 10 || (n2 - n1) > 10)
        puts("それらの差は 11 以上です。");
    else
        puts("それらの差は 10 以下です。");

    return(0);
}
