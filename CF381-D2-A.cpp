// Sereja and dima
// http://codeforces.com/contest/381/problem/A
// >30 minutes

#include <iostream>
#include <vector>

int main() {
  int n;
  int pointsSereja = 0;
  int pointsDima = 0;
  std::string sCards;
  std::vector<int> cards;

  std::cin >> n;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline(std::cin, sCards);

  for (auto c : sCards) {

    cards.push_back(c);
  }

  std::cout << cards.front() << '\n';
  std::cout << cards.back() << '\n';

/*
  while (!cards.empty()) {
    if (cards.front() > cards.back()) {
      pointsSereja +
    }
  }
*/
  return 0;
}
