#include <stdio.h>

#define swap(type, a, b)  {type i = a; a = b; b = i;}

int main(void)
{
    int x = 5;
    int y = 10;
    double dx = 10.0;
    double dy = 5.0;

    swap(int, x, y);
    printf("x = %d, y = %d\n", x, y);

    swap(double, dx, dy);
    printf("dx = %f, dy = %f\n", dx, dy);

    return 0;
}
