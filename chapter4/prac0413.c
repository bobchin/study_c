#include <stdio.h>

int main(void)
{
    int no, i;

    printf("整数を入力してください：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++) {
        printf("%d", i % 10);
    }

    putchar('\n');

    return(0);
}
