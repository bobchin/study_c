#include <stdio.h>

int main(void)
{
    int tall;

    printf("身長を入力してください："); scanf("%d", &tall);
    printf("標準体重は%.1fです。\n", (tall - 100) * 0.9);

    return(0);
}
