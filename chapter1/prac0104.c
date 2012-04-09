#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("その数に 10 を加えると %d です。\n", no + 10);

    return (0);
}
