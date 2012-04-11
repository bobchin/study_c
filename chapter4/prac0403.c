#include <stdio.h>

int main(void)
{
    int n1, n2;
    int min, max;
    int cnt, sum;

    puts("二つの整数を入力してください。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);

    if (n1 > n2) {
        min = n2;
        max = n1;
    } else {
        min = n1;
        max = n2;
    }

    sum = 0;
    cnt = min;
    do {
        sum = sum + cnt;
        cnt = cnt + 1;
    } while (cnt <= max);

    printf("%d 以上 %d 以下の全整数の和は %d です。\n", min, max, sum);

    return(0);
}
