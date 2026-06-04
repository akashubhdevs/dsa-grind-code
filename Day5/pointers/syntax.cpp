#include <bits/stdc++.h>
using namespace std;

int main() {
  string user = "shubh";
  string* userPtr = &user;
  cout << user << "\n";// Output the value of user (Shubh)

  // pointer me dereference operator lga denge toh uss variable ki value aa jaegi
  cout << *userPtr << "\n";
  return 0;
}