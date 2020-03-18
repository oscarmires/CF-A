#include <iostream>
using namespace std;

int main() {
  int anton = 0;
  int danik = 0;
  int n = 0;
  string winners, wChar;
  cin >> n;
  cin >> winners;
  for (auto i : winners)
  {
    if (i == 'A') {
      ++anton;
    } else if (i == 'D') {
      ++danik;
    }
  }

  if (anton > danik) {
    cout << "Anton" << endl;
  } else if (danik > anton) {
    cout << "Danik" << endl;
  } else if (danik == anton) {
    cout << "Friendship" << endl;
  }
  return 0;
}
