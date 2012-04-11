/*
 * １から５までの和を求めて表示
 */
#include <stdio.h>

int main(void)
{
    int no = 1;
    int sum = 0;

    do {
        sum = sum + no;
        no = no + 1;
    } while (no <= 5);

    printf("１から５までを足した値は %d です。\n", sum);

    return(0);
}
