/*
 * 配列の要素に値を読み込んで表示
 */
#include <stdio.h>

int main(void)
{
    int i;
    int vx[5];

    for (i = 0; i < 5; i++) {
        printf("vx[%d]:", i);
        scanf("%d", &vx[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("vx[%d] = %d\n", i, vx[i]);
    }
    return(0);
}
