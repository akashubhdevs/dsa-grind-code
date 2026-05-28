// The Quadrant Checker!
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cout << "Enter the coordinates (x,y): ";
  cin >> x >> y;
  if (x == 0 && y == 0) {
    cout << "ORIGIN\n";
  } else if ((x == 0) && (y < 0 || y > 0)) {
    cout << "LYING ON THE Y-AXIS\n";
  } else if ((y == 0) && (x < 0 || x > 0)) {
    cout << "LYING ON THE X-AXIS\n";
  } else if (x > 0 && y > 0) {
    cout << "FIRST QUADRANT\n";
  } else if (x < 0 && y > 0) {
    cout << "SECOND QUADRANT\n";
  } else if (x < 0 && y < 0) {
    cout << "THIRD QUADRANT\n";
  } else if (x > 0 && y < 0) {
    cout << "FOURTH QUADRANT\n";
  }
  return 0;
}