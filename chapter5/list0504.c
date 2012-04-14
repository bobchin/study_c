/*
 * 配列の全要素に 0.0 を代入して表示
 */
#include <stdio.h>

int main(void)
{
    int i;
    double vd[5];

    for (i = 0; i < 5; i++) {
        vd[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
        printf("vd[%d] = %.1f\n", i, vd[i]);
    }
    return(0);
}
