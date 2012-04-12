#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 5; i++)
        sum += i;

    printf("１から５までを足した値は %d です。\n", sum);

    return(0);
}
