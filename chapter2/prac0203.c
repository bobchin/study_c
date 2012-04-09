#include <stdio.h>

int main(void)
{
    double no;

    printf("実数を入力してください：");
    scanf("%lf", &no);

    printf("あなたは %f と入力しましたね。", no);

    return 0;
}
