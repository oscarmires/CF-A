#include <iostream>

int main() {
  int n = 0;
  int p = 0;
  int v = 0;
  int t = 0;
  int s = 0;

  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> p >> v >> t;
    if (p + v + t >= 2) {
      ++s;
    }
  }

  std::cout << s << std::endl;
}
