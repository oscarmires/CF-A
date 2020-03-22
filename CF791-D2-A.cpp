// Bear and big brother
// http://codeforces.com/contest/791/problem/A

#include <iostream>

int main() {
  int a = 0;
  int b = 0;
  int years = 0;
  std::cin >> a >> b;
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++years;
  }
  std::cout << years << std::endl;
  return 0;
}
