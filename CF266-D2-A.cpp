// Stones on the table
// http://codeforces.com/contest/266/problem/A
// 5 minutes

#include <iostream>

int main() {
  int n;
  int minStones = 0;
  std::string stones;
  char previousStone;

  std::cin >> n;
  std::cin >> stones;

  for (auto c : stones) {
    if (c == previousStone) {
      ++minStones;
    }
    previousStone = c;
  }
  std::cout << minStones << '\n';
  
  return 0;
}
