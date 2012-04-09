/*
 * 整数と浮動小数点数
 */
#include <stdio.h>

int main(void)
{
    int nx;
    double dx;

    nx = 9.99;
    dx = 9.99;

    printf("int    型変数 nx の値： %d\n", nx);
    printf("int    型変数 nx / 2 ： %d\n", nx / 2);
    
    printf("double 型変数 dx の値： %f\n", dx);
    printf("double 型変数 dx/2.0 ： %f\n", dx / 2.0);

    return 0;
}
