#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> stuData = {
    {"bavan", 12},
    {"chubh", 14},
    {"abhinav", 24}
  };

  for (auto student: stuData) {
    cout << student.first << "'s roll number is: " << student.second << "\n";
  }
  cout << "\n";
  return 0;
}