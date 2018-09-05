// Copyright [2018] <mituh>
// test_scanf.cpp
#include <cstdio>

int foo1() {
  char c1, c2;
  scanf("%c%c", &c1, &c2);
  printf("%c %c", c1, c2);
  return 0;
}

/*
foo1():
input:
1 2
output:
1__
*/


int foo2() {
  char c1, c2;
  scanf("%c %c", &c1, &c2);
  printf("%c %c", c1, c2);
  return 0;
}
/*
foo2():
input:
1 2
output:
1 2
*/

int main() {
  foo2();
  return 0;
}
