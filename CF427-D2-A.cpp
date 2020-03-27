// Police recruits
// http://codeforces.com/contest/427/problem/A

#include <iostream>

int n, e, p, c, uc;

int main() {
  std::cin >> n;

  int p = 0;
  int c = 0;
  for (int i = 0; i < n; ++i) {
    std::cin >> e;
    if (e > 0) {
      p += e;
    } else if (p > 0){
      --p;
    } else {
      ++c;
    }
  }

  std::cout << c << '\n';

  return 0;
}
