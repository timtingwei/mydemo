// Copyright [2018] <mituh>

#include <stdio.h>
#include <stdlib.h>
int is_ok(int *ma, int *jiang, int *bin) {
  // 判断兵, 马, 将是否可以将住
  int dlt[2] = {jiang[0]-ma[0], jiang[1]-ma[1]};
  if (abs(dlt[0]) == 2 && abs(dlt[1]) == 1) {          // 左右将
    if (bin[1] == ma[1] && bin[0] == (dlt[0]/2+ma[0]))
      return 0;
  } else if (abs(dlt[0]) == 1 && abs(dlt[1] == 2)) {   // 上下将
    if (bin[0] == ma[0] && bin[1] == dlt[1]/2+ma[1])
      return 0;
  }
  return 1;
}

void get_broke_foot_pos(int *ma, int *jiang, int *pos) {
  // 获得会挡住马的坐标
  int dlt[2] = {jiang[0]-ma[0], jiang[1]-ma[1]};
  if (abs(dlt[0]) == 2 && abs(dlt[1]) == 1) {          // 左右将
    pos[0] = dlt[0]/2 + ma[0]; pos[1] = ma[1];
  } else if (abs(dlt[0]) == 1 && abs(dlt[1] == 2)) {   // 上下将
    pos[0] = ma[0]; pos[1] = dlt[1]/2 + ma[1];
  }
}


// = = = = = test = = = = =

int bin_a[5][2] = { {1, 0}, {-1, 0}, {-1, 1}, {1, 1}, {0, 0}};
int n = 5;

int main() {
  int ma[2] = {0, 0};
  int jiang[2] = {2, 1};
  int bin[2] = {1, 1};
  printf("%d\n", is_ok(ma, jiang, bin));
  for (int i = 0; i < n; i++) {
    printf("%d\n", is_ok(ma, jiang, bin_a[i]));
  }

  int pos[2];
  get_broke_foot_pos(ma, jiang, pos);
  printf("ma:[%d,%d], jiang[%d,%d]=> pos=[%d,%d]", ma[0], ma[1],
         jiang[0], jiang[1], pos[0], pos[1]);

  printf("ma:[%d,%d], jiang[%d,%d]:\n", ma[0], ma[1], jiang[0], jiang[1]);
  for (int i = 0; i < n; i++) {
    if (bin_a[i][0] == pos[0] && bin_a[i][1] == pos[1]) {
      printf("bin:[%d,%d]bad\n", bin_a[i][0], bin_a[i][1]);
    } else {
      printf("bin:[%d,%d]ok\n", bin_a[i][0], bin_a[i][1]);
    }
  }
  return 0;
}
