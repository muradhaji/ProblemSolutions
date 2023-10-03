//Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

class Solution {
public:
    int numberOfSteps (int num) {
        int count = 0;
        while(num != 0) {
            if(num & 1 == 1)
                num -= 1;
            else
                num >>= 1;
            count += 1;
        }
        return count;
    }
};
