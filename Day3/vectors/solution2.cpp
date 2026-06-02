#include <bits/stdc++.h>
using namespace std;

// n x n -> square matrix

// notes:
// Using a Reference (&)
// To tell C++ that you want to directly access and modify the actual item sitting inside the vector's memory, you need to use a reference. You do this by simply adding an ampersand (&) after the data type.

int main() {
  unsigned int num;
  cout << "Enter number of elements in the vector: ";
  cin >> num;

  vector<string> og(num);
  cout << "Enter the Words: ";
  for (int i = 0; i < num; i++) {
    cin >> og[i];
  }

  for (string& word: og) {
    word[0] = std::toupper(static_cast<unsigned char>(word[0]));
  }

  for (string x: og) {
    cout << x << " ";
  }
  cout << "\n";

  return 0;
}