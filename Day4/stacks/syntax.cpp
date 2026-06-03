#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<string> users;
    users.push("shubh");
    users.push("speed");
    users.push("tarun"); // added last -> TOP element!

    cout << users.top() << "\n";

    users.top() = "john";

    cout << users.top() << "\n";

    users.pop();
    users.pop();
    users.pop();

    if (users.empty()) {
        cout << "STACK IS EMPTY CANNOT POP\n";
    } else {
        cout << users.top() << "\n";
    }

    

    return 0;
}