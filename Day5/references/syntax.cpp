#include <bits/stdc++.h>
using namespace std;

// references in C++
int main() {
  string user = "shubh";
  string &member = user;

  cout << user << "\n";
  cout << member << "\n";

  user = "otheruser";

  cout << member << "\n";

  return 0;
}