#include <stdio.h>

int main(void)
{
    int num;
    int dig;
    int col;

    do {
        printf("非負の整数を入力してください：");
        scanf("%d", &num);
        if (num < 0)
            puts("\a負の数を入力しないでください。");
    } while (num < 0);

    dig = 0;
    col = num;
    do {
        col = col / 10;
        dig = dig + 1;
    } while (col > 0);

    printf("%d は %d 桁です。\n", num, dig);

    return(0);
}
