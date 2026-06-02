#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned int num; // number of elements of the vector!
  cout << "Enter the number of elements of your vector: ";
  cin >> num;

  vector<int> theVector(num);
  cout << "Enter the elements now: ";
  for (int i = 0; i < num; i++) {
    cin >> theVector[i];
  }
  // logic:
  // 1 2 5 0 3 1 7
  vector<int> answer;
  for (int x = 1; x < num; x++) {
    if (x == num - 1) {
      break;
    }
    if ((theVector[x] < theVector[x - 1]) && (theVector[x] < theVector[x + 1])) {
      answer.push_back(theVector[x]);
    }
  }
  if (answer.size() > 0) {
    cout << "Vector elements that are smaller than its adjacent neighbours:\n";
    for (int n: answer) {
      cout << n << "\n";
    }
  } else {
    cout << "No such element!\n";
  }

  return 0;
}