#include <stdio.h>

int main(void)
{
    int min, max, step, i, tall;

    printf("何cmから：");
    scanf("%d", &min);

    printf("何cmまで：");
    scanf("%d", &max);

    printf("何cmごと：");
    scanf("%d", &step);

    for (i = 0; min + i  < max; i += step) {
        tall = min + i;
        printf("%5dcm   %.2fkg\n", tall, (double)(tall - 100) * 0.9);
    }

    return(0);
}
