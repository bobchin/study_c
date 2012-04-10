#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してください：");
    scanf("%d", &num);

    num? puts("その数は０ではありません。"): puts("その数は０です。");

    return(0);
}
