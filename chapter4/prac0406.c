#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    if (no >= 0) {
        while (no >= 0) {
            printf("%d ", no);
            no--;
        }
        putchar('\n');
    }

    return(0);
}
