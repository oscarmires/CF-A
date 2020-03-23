// Gravity flip
// http://codeforces.com/contest/405/problem/A

#include <iostream>
#include <algorithm>
#include <sstream>

int main() {
  int n = 0;
  std::string sCubes = "";
  std::cin >> n;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  int cubes[n];
  std::getline(std::cin, sCubes);
  int i = 0;
  for (auto c : sCubes) {
    if (c != ' ') {
      cubes[i] = c - '0';
      ++i;
    }
  }

  std::sort(cubes, cubes + n);

  for (auto num : cubes) {
    std::cout << num << ' ';
  }
  std::cout << std::endl;
  return 0;
}
