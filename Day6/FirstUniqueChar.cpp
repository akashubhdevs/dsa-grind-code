class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> countData;
        for (char c: s) {
            countData[c]++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (countData[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};