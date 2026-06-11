#include <bits/stdc++.h>
using namespace std;

int getMinValueIndex(vector<int> ARR) {
    int min = ARR[0];
    int minIndex = 0;
    for (int x = 0; x < ARR.size(); x++) {
        if (ARR[x] < min) {
            min = ARR[x];
            minIndex = x;
        }
    }
    return minIndex;
}

void solve(vector<int> nums) {
    vector<int> arr = {};
    // round 1 -> 1st iteration: Alice,
    //            2nd iteration: Bob
    while (!nums.empty()) {
        // alice's turn
        int currentMinIndex = getMinValueIndex(nums);
        int aliceElement = nums[currentMinIndex];
        nums.erase(nums.begin() + currentMinIndex);
        
        // bob's turn
        currentMinIndex = getMinValueIndex(nums);
        int bobElement = nums[currentMinIndex];
        nums.erase(nums.begin() + currentMinIndex);

        arr.push_back(bobElement);
        arr.push_back(aliceElement);
    }
    for (int x: arr) {
        cout << x << " ";
    }
}

int main() {
    solve({5,4,2,3});
    return 0;
}