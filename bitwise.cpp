// Copyright [2018] <mituh>
// bitwise.cpp

#include <cstdio>
#include <vector>
using namespace std;

int main() {

  // a & b, 两个都为1, 则1
  int a = 53, b = 54;
  int ans = a & 1, ans2 = b & 1;
  if (a & 1) {
    printf("odd %d\n", a);
  }
  printf("%d %d\n", ans, ans2);

  // a ^ b, 不同则为1, 相同则为0
  int a1 = 1, b1 = 0;
  printf("1 ^ 0 %d\n", 1 ^ 0);
  printf("1 ^ 1 %d\n", 1 ^ 1);
  printf("0 ^ 0 %d\n", 0 ^ 0);
  printf("0 ^ 1 %d\n", 0 ^ 1);
  int tmp = 0;
  vector<int> v = {1, 3, 1, 3, 4};
  for (int i = 0; i < v.size(); i++) {
    printf("tmp ^ v[i] =  %d, tmp = %d, v[i] = %d\n", tmp ^ v[i], tmp, v[i]);
    tmp ^= v[i];
    printf("tmp = %d\n", tmp);
  }

  printf("\n");
  printf("%d\n", 4 ^ 2 ^ 2 ^ 3 ^ 3);

  // printf("tmp")
  return 0;
}
