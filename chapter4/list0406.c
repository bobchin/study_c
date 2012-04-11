/*
 * １から５までの和を求めて表示（複合代入演算子＋後置増分演算子）
 */
#include <stdio.h>

int main(void)
{
    int no = 1;
    int sum = 0;

    do {
        sum += no;
        no++;
    } while (no <= 5);

    printf("１から５までを足した値は %d です。\n", sum);

    return(0);
}
