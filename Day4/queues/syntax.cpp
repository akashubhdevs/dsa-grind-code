#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<string> users;

    users.push("shubh");
    users.push("tarun");
    users.push("akshat");

    cout << users.front() << "\n";
    cout << users.back() << "\n";

    cout << "After changing the front and back!\n";
    users.front() = "Ayush";
    users.back() = "shubh";

    cout << users.front() << "\n";
    cout << users.back() << "\n";

    cout << "AFTER POPPING!\n";

    users.pop();
    users.pop();
    // users.pop();

    if (users.empty()) {
        cout << "QUEUE IS EMPTY CANNOT POP\n";
    } else {
        cout << users.front() << "\n";
        cout << users.back() << "\n";
    }    
    return 0;
}