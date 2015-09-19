/*
 * 逐次探索（番兵法）
 */
#include <stdio.h>

#define NUMBER 5
#define FAILD  -1

int search(int vc[], int key, int no)
{
  int i = 0;

  /* 番兵を追加 */
  vc[no] = key;

  while (1) {
    if (vc[i] == key)
      break;
    i++;
  }

  return (i == no? FAILD: i);
}

int main(void)
{
  int i, ky, idx;
  int vx[NUMBER];

  for (i = 0; i < NUMBER; i++) {
    printf("vd[%d]:", i);
    scanf("%d", &vx[i]);
  }

  printf("探す値：");
  scanf("%d", &ky);

  idx = search(vx, ky, NUMBER);

  if (idx == FAILD)
    puts("\a探索に失敗しました。");
  else
    printf("%dは%d番目にあります。\n", ky, idx + 1);

  return 0;
}
