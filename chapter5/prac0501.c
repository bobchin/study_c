#include <stdio.h>

int main(void)
{
    int i;
    int vc[5];

    for (i = 0; i < 5; i++) {
        vc[i] = i;
    }

    for (i = 0; i < 5; i++) {
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return(0);
}
