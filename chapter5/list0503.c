/*
 * 配列の各要素に先頭から順に 1.2.3.4.5 を代入して表示（for文）
 */
#include <stdio.h>

int main(void)
{
    int i;
    int vc[5];

    for (i = 0; i < 5; i++) {
        vc[i] = i + 1;
    }

    for (i = 0; i < 5; i++) {
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return(0);
}
