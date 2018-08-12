// Copyright [2018] <mituh>
#include <iostream>
#include <vector>
using namespace std;

vector<int> QVEC;

void rdef(vector<int> &q, int n) {
  q.push_back(n);
}
void udef(int n) {
  QVEC.push_back(n);
}

void pfoo(vector<int> *pvec, int n) {   // 建议使用指针而不是引用
  pvec->push_back(n);
}



int main() {
  vector<int> q;
  // udef(q, 5);
  rdef(q, 5);

  pfoo(&q, 5);

  udef(5);
  std::cout << QVEC.size() << std::endl;   // 1

  std::cout << q.size() << " " << *(q.begin()) << std::endl;    // 1  5
  return 0;
}
