
#include <bits/stdc++.h>
using namespace std;

void debit(int amtDeb, unsigned long long &balance) {
  balance -= amtDeb;
  cout << amtDeb << " successfully debitted from your account! \n";
}

void credit(int amtCred, unsigned long long &balance) {
  balance += amtCred;
  cout << amtCred << " successfully credited to your account! \n";
}

int main() {
  unsigned long long balance = 131410;
  cout << "Initial Balance: " << balance << "\n";
  debit(1410, balance);
  debit(1410, balance);
  debit(1410, balance);
  cout << "Available Balance after debit: " << balance << "\n";
  
  credit(1000, balance);
  cout << "Available Balance after credit: " << balance << "\n";
  
  return 0;
}