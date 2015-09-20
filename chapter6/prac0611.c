#include <stdio.h>

#define STUDENTS_NUM 5
#define SUBJECTS_NUM 3

void highscore(const int tensu[STUDENTS_NUM][SUBJECTS_NUM], int high[SUBJECTS_NUM])
{
  int i;
  for (i = 0; i < SUBJECTS_NUM; i++) {
    high[i] = 0;
  }
  for (i = 0; i < STUDENTS_NUM; i++) {
    if (high[0] < tensu[i][0]) high[0] = tensu[i][0];
    if (high[1] < tensu[i][1]) high[1] = tensu[i][1];
    if (high[2] < tensu[i][2]) high[2] = tensu[i][2];
  }
}

void average(const int tensu[STUDENTS_NUM][SUBJECTS_NUM], double ave[STUDENTS_NUM])
{
  int i, j;
  for (i = 0; i < STUDENTS_NUM; i++) {
    ave[i] = 0.0;
    for (j = 0; j < SUBJECTS_NUM; j++) {
      ave[i] += tensu[i][j];
    }
    ave[i] /= SUBJECTS_NUM;
  }
}

int main(void)
{
  int i;
  int tensu[STUDENTS_NUM][SUBJECTS_NUM] = {
    {10, 20, 30},
    {10, 10, 40},
    {10,  5, 50},
    {10,  5, 60},
    {10,  5, 70},
  };
  int high[SUBJECTS_NUM];
  double aver[STUDENTS_NUM];

  highscore(tensu, high);
  average(tensu, aver);

  puts("科目別最高点：");
  printf("国語：%d点\n", high[0]);
  printf("数学：%d点\n", high[1]);
  printf("英語：%d点\n", high[2]);

  puts("各学生の平均点：");
  for (i = 0; i < STUDENTS_NUM; i++) {
    printf("%d番目の学生：%f\n", i + 1, aver[i]);
  }

  return 0;
}
