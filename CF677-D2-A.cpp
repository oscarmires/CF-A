// Vanya and fence
// http://codeforces.com/contest/677/problem/A

#include <iostream>
#include <sstream>
using namespace std;

int n, h, p, w;

int main() {
  int w = 0;
  cin >> n >> h;
  for (int i = 0; i < n; ++i) {
    cin >> p;
    if (p > h) {
      ++w;
    }
    ++w;
  }

  cout << w << endl;;
  return 0;
}
