#include <stdio.h>

int main(void)
{
    int i, j;
    int width, height;

    puts("長方形を作りましょう。");
    printf("１辺（その１）："); scanf("%d", &height);
    printf("１辺（その２）："); scanf("%d", &width);

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return(0);
}
