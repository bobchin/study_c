#include <stdio.h>

enum sex {
  Male = 0, Female
};

enum season {
  SPRING = 0, SUMMER, FALL, WINTER
};

int main(void)
{
  int tmp;
  enum sex s1;
  enum season s2;

  do {
    printf("性別を入力してください(0:male 1:female)：");
    scanf("%d", &tmp);
  } while(tmp < Male || Female < tmp);

  switch (s1 = tmp) {
    case Male:   printf("あなたは男です。\n"); break;
    case Female: printf("あなたは女です。\n"); break;
  }

  do {
    printf("何月ですか？：");
    scanf("%d", &tmp);
  } while(tmp < 1 || 12 < tmp);

  switch (tmp) {
    case 4:
    case 5:
    case 6:
      s2 = SPRING;
      break;

    case 7:
    case 8:
    case 9:
    s2 = SUMMER;
    break;

    case 10:
    case 11:
    case 12:
    s2 = FALL;
    break;

    case 1:
    case 2:
    case 3:
    s2 = WINTER;
    break;
  }
  switch (s2) {
    case SPRING: printf("いまは春です。\n"); break;
    case SUMMER: printf("いまは夏です。\n"); break;
    case FALL  : printf("いまは秋です。\n"); break;
    case WINTER: printf("いまは冬です。\n"); break;
  }

  return 0;
}
