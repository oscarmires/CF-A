#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  string arr[5];
  string line;
  int minSteps;
  for (int i = 0; i < 5; ++i) {
    getline(cin, line);
    int j = 0;
    for (auto letter : line) {
      if (letter != ' ') {
        arr[i] += letter;
      }
    }
  }

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (arr[i][j] == '1') {
        minSteps = abs(i - 2) + abs(j - 2);
        cout << minSteps << endl;
      }
    }
  }

  return 0;
}
