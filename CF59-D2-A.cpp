// Word
// http://codeforces.com/contest/59/problem/A

#include <iostream>

int main() {
  std::string word;
  int upperCase, lowerCase;
  std::cin >> word;

  for (auto c : word)
  {
    if (c >= 'A' && c <= 'Z')
    {
      ++upperCase;
    }
    else
    {
      ++lowerCase;
    }
  }

  if (upperCase <= lowerCase)
  {
    for (auto& c : word)
    {
      if (c >= 'A' && c <= 'Z')
      {
        c += 32;
      }
    }
  }
  else
  {
    for (auto& c : word)
    {
      if (c >= 'a' && c <= 'z') {
        c -= 32;
      }
    }
  }

  std::cout << word << '\n';

  return 0;
}
