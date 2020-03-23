// Boy or girl
// http://codeforces.com/contest/236/problem/A

#include <iostream>

bool isDuplicate(char c, std::string s, int position) {
  for (int i = 0; i < position; ++i) {
    if (s[i] == c) {
      return true;
    }
  }
  return false;
}

int main() {
  std::string username;
  std::getline(std::cin, username);
  char element;
  int count = 0;
  for (int i = 0; i < username.length(); ++i) {
    element = username[i];
    if (!isDuplicate(element, username, i)) {
      ++count;
    }
  }
  if (count % 2 == 0) {
    std::cout << "CHAT WITH HER" << '\n';
  } else {
    std::cout << "IGNORE HIM!" << '\n';
  }

  return 0;
}
