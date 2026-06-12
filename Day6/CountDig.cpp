class Solution {
public:
    int countDigits(int num) {
        int temp = num;
        int divisibleCount = 0;
        while (temp > 0) {
            int dig = temp % 10;
            if (num % dig == 0) {
                divisibleCount++;
            }
            temp /= 10;
        }
        return divisibleCount;
    }
};