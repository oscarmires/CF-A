// Magnets
// http://codeforces.com/contest/344/problem/A

#include <iostream>

int main() {
  int n = 0,
      groups = 0;
  std::string previousMagnet = "",
              magnet = "";

  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> magnet;
    if (magnet != previousMagnet) {
      ++groups;
    }
    previousMagnet = magnet;
  }

  std::cout << groups << '\n';

  return 0;
}
