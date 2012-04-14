/*
 * 配列の各要素を先頭から順に 1,2,3,4,5 で初期化して表示
 */
#include <stdio.h>

int main(void)
{
    int i;
    int vc[5] = {1, 2, 3, 4, 5};

    for (i = 0; i < 5; i++) {
        printf("vc[%d] = %d\n", i, vc[i]);
    }
    return(0);
}
