#include <iostream>
using namespace std;

int main() {
  string stringA, stringB;
  cin >> stringA;
  cin >> stringB;

  for (auto &i : stringA) {
    if (i >= 'A' && i <= 'Z') {
      i += 32;
    }
  }

  cout << stringA << endl;
  return 0;
}
