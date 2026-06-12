#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> sentences = {"please wait", "continue to fight", "continue to win"};
    vector<int> maxCount = {};
    int eachCount = 1;
    for (string sentence: sentences) {
        eachCount = 1;
        for (char c: sentence) {
            if (c == ' ') {
                eachCount++;
            }
        }
        maxCount.push_back(eachCount);
    }
    int maxElement = maxCount[0];
    for (int i = 0; i < maxCount.size(); i++) {
        if (maxCount[i] > maxElement) {
            maxElement = maxCount[i];
        }
    }
    cout << maxElement << endl;
    return 0;
}