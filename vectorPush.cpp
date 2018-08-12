// Copyright [2018] <mituh>
#include <iostream>
#include <vector>
using namespace std;

void rdef(vector<int> &q, int n) {
  q.push_back(n);
}
void udef(vector<int> q, int n) {
  q.push_back(n);
}


int main() {
  vector<int> q;
  // udef(q, 5);
  rdef(q, 5);


  std::cout << q.size() << " " << *(q.begin()) << std::endl;    // 1  5
  return 0;
}
