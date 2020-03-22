// Petya and strings
// http://codeforces.com/contest/112/problem/A

#include <iostream>
using namespace std;

int main() {
  string stringA, stringB;
  int aSum = 0;
  int bSum = 0;
  cin >> stringA;
  cin >> stringB;

  for (auto &i : stringA) {
    if (i >= 'A' && i <= 'Z') {
      i += 32;
    }
    aSum += (int) i;
  }

  for (auto &i : stringB) {
    if (i >= 'A' && i <= 'Z') {
      i += 32;
    }
    bSum += (int) i;
  }

  if (aSum < bSum) {
    cout << -1 << endl;
  } else if (bSum < aSum) {
    cout << 1 << endl;
  } else if (aSum == bSum) {
    cout << 0 << endl;
  }
  return 0;
}
