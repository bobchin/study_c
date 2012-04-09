#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("その数から 10 を減じると %d です。\n", no - 10);

    return (0);
}
