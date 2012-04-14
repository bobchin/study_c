#include <stdio.h>

int main(void)
{
    int i, j, ln;

    printf("何段ですか：");
    scanf("%d", &ln);

    for (i = ln; 1 <= i; i--) {
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    putchar('\n');

    for (i = ln; 1 <= i; i--) {
        for (j = 1; j <= ln - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return(0);
}
