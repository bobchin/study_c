#include <stdio.h>

int main(void)
{
    int i, j, ln;

    puts("ピラミッドを作りましょう。");
    printf("何段ですか：");
    scanf("%d", &ln);

    for (i = 1; i <= ln; i++) {
        int max = (2 * ln) - 1;
        int aster = (2 * i) - 1;
        int space = (max - aster) / 2;
        for (j = 1; j <= space; j++) {
            putchar(' ');
        }
        for (j = 1; j <= aster; j++) {
            putchar('*');
        }
        for (j = 1; j <= space; j++) {
            putchar(' ');
        }
        putchar('\n');
    }
    return(0);
}
