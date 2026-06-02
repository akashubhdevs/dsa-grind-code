#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned int numberOfElements;
  cout << "Enter the number of elements of your array/vector: ";
  cin >> numberOfElements;
  vector<string> usernames(numberOfElements);

  for (int i = 0; i < numberOfElements; i++) {
    cin >> usernames[i];
  }

  for (string username: usernames) {
    cout << username << " ";
  }

  return 0;
}