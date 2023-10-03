//Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0, digit;
        for(int n : nums) {
            digit = 0;
            while(n != 0) {
                n /= 10;
                digit += 1;
            }
            if((digit & 1) == 0)
                count += 1;
        }
        return count;
    }
};
