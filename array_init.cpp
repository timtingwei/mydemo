// Copyright [2018] <mituh>
#include <cstdio>
#include <vector>
using namespace std;
int main() {
  int opt[3][2] = {};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", opt[i][j]);
    }
    printf("\n");
  }
  /*
  0 0 
  0 0 
  0 0
  */
  int opt2[3][2];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", opt2[i][j]);
    }
    printf("\n");
  }
  /*
    139772488 1 
    0 0 
    0 0
  */

  int arr[4] = {};
  for (int i = 0; i < 4; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  // 0 0 0 0

  int arr2[4];
  for (int i = 0; i < 4; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");
  // -494561144 32766 -494561168 32766

  /*
  vector<int> v;
  for (int i = 0; i < 4; i++) {
    printf("%d ", v[i]);
  }
  printf("\n");
  // Segmentation fault: 11
  */

  vector<int> v2(4);
  for (int i = 0; i < 4; i++) {
    printf("%d ", v2[i]);
  }
  printf("\n");
  // 0 0 0 0

  // 二维vector
  vector<vector<int> > v3(4);
  for (int i = 0; i < 4; i++) {
    v3[i].resize(5);
    for (int j = 0; j < 5; j++) {
      printf("%d ", v3[i][j]);
    }
    printf("\n");
  }
  // 进入内层循环之后对第二纬进行resize
  /*
    0 0 0 0 0 
    0 0 0 0 0 
    0 0 0 0 0 
    0 0 0 0 0
  */
  return 0;
}
