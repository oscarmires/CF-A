// Black Square
// http://codeforces.com/contest/431/problem/A
// 20 minutes

#include <iostream>

int cal, strips[4];
std::string squares;

int main() {
  for (int i = 0; i < 4; ++i) {
    std::cin >> strips[i];
  }
  std::cin >> squares;

  int cal = 0;
  for (auto c : squares) {
    cal += strips[c - '0' - 1];
  }

  std::cout << cal << '\n';
  return 0;
}
