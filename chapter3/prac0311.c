#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    switch (no % 2) {
        case 1:  puts("その数は奇数です。"); break;
        default: puts("その数は偶数です。"); break;
    }
    
    return(0);
}
