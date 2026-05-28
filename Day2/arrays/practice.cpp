#include <bits/stdc++.h>
using namespace std;

int main() {
    string usernames[] = {"Raj", "Shamani", "Ranveer", "Singh", "Shubh"};
    // int lenOfArr = sizeof(usernames) / sizeof(usernames[0]);
    for (string username: usernames) {
        cout << username << " ";
    }
    cout << endl;
    return 0;
}