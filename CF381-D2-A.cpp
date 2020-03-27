// Sereja and dima
// http://codeforces.com/contest/381/problem/A

#include <iostream>
#include <vector>

int n, x, points, sereja, dima;

int main() {
  std::cin >> n;
  std::vector<int> cards;
  for (int i = 0; i < n; ++i) {
    std::cin >> x;
    cards.push_back(x);
  }
  int points = 0;
  for (int i = 0; i < n; ++i) {
    if (cards.front() > cards.back()) {
      points = cards.front();
      cards.erase(cards.begin());
    } else {
      points = cards.back();
      cards.erase(cards.end() - 1);
    }
    if (i % 2 != 0) {
      dima += points;
    } else {
      sereja += points;
    }
  }

  std::cout << sereja << " " << dima << '\n';
  return 0;
}
