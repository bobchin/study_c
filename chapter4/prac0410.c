#include <stdio.h>

int main(void)
{
    int i, limit;

    printf("整数を入力してください：");
    scanf("%d", &limit);

    if (limit >= 2) {
        i = 2;
        while (i <= limit) {
            printf("%d ", i);
            i *= 2;
        }
    }
    putchar('\n');

    return(0);
}
