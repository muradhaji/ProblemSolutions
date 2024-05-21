//Link: https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int left = 0, right = 0, count = 0;
        for(char ch : s) {
            (ch == 'L') ? left += 1 : right += 1;
            if(left == right) {
                left = right = 0;
                count += 1;
            }
        }
        return count;
    }
};
