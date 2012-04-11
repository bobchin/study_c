#include <stdio.h>

int main(void)
{
    int num;

    do {
        printf("非負の整数を入力してください：");
        scanf("%d", &num);

        if (num < 0)
            puts("\a負の数を入力しないでください。");

    } while (num < 0);

    printf("%d を逆から読むと", num);
    do {
        printf("%d", num % 10);
        num = num / 10;
    } while (num > 0);
    puts("です。");

    return(0);
}
