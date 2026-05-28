// The Valid Triangle!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cout << "Enter the Angles of the Triangle (A, B, C): ";
    cin >> A >> B >> C;
    int sumOfAngles = A + B + C;
    if ((sumOfAngles != 180) || (A <= 0 || B <= 0 || C <= 0)) {
        cout << "It does not form a valid triangle! \n";
    } else {
        if ((A == 60) && (B == 60) && (C == 60)) {
            cout << "The Triangle is an Equilateral Triangle! \n";
        } else if ((A == B) || (B == C) || (A == C)) {
            cout << "The Triangle is an Isosceles Triangle! \n";
        } else {
            cout << "The Triangle is a Scalene Triangle! \n";
        }
    }
    return 0;
}