// The Collatz Sequence
#include <bits/stdc++.h>
using namespace std;

int main() {
  unsigned long long N;
  cout << "Enter N: ";
  cin >> N;
  int stepCount = 0;
  while (N > 1) {
    if (N % 2 == 0) { // even!
      N /= 2;
      cout << N << " ";
    } else { // odd!
      N *= 3;
      N++;
      cout << N << " ";
    }
    stepCount++;
    
  }
  cout << "\nStep it took: " << stepCount << "\n";
  return 0;
}