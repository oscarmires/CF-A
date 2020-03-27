// Night at the Museum
// http://codeforces.com/contest/731/problem/A
// 35 minutes

#include <iostream>

std::string name;
int d, moves, lim;
char last;

int main() {
  std::cin >> name;
  moves = 0;
  last = 'a';
  for (auto c : name) {
    d = std::abs(c - last);
    if (d > 13) {
      moves += 26 - d;
    } else {
      moves += d;
    }
    last = c;
  }

  std::cout << moves << '\n';
  return 0;
}
