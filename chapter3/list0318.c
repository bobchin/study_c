/*
 * 読み込んだ整数値を３で割った剰余を表示（siwtch 文）
 */
#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してください：");
    scanf("%d", &num);

    switch (num % 3) {
        case 0: puts("その数は３で割り切れます。"); break;
        case 1: puts("その数を３で割った余りは１です。"); break;
        case 2: puts("その数を３で割った余りは２です。"); break;
    }

    return(0);
}
