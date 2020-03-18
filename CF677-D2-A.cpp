#include <iostream>
#include <sstream>
using namespace std;

int main() {

  int n = 0;
  int h = 0;
  int w = 0;
  cin >> n >> h;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string hString, hChar;
  getline(cin, hString);
  stringstream ssin(hString);
  while (ssin.good()) {
      ssin >> hChar;
      if (stoi(hChar) <= h) {
        ++w;
      } else {
        w += 2;
      }
  }

  cout << w << endl;;
  return 0;
}
