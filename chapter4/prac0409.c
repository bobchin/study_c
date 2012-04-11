#include <stdio.h>

int main(void)
{
    int i, no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    i = 1;
    while (i <= no) {
        if (i % 2 == 0)
            printf("%d ", i);
        i++;
    }

    putchar('\n');

    return(0);
}
