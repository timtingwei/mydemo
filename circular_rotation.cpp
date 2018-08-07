// Copyright [2018] <mituh>
// circular_rotation.cpp
#include <iostream>
#include <string>
using namespace std;

int judge(string s, string t) {
  if (s.length() == t.length()) {
    int pos = s.append(s).find(t);
    if (0 <= pos && pos <= s.append(s).length() - t.length()) {
      return 1;
    }
  }
  return 0;
}


int main() {
  int T;
  cin >> T;
  while (T--) {
    string s, t;
    cin >> s >> t;
    judge(s, t);
    cout << judge(s, t) << endl;
  }
  return 0;
}

/*
2
ACTGACG TGACGAC
TATGTX XTATGT
1
1
*/
