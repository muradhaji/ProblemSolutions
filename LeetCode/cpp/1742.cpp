//Link: https://leetcode.com/problems/maximum-number-of-balls-in-a-box/

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int counts[46] = {0}, sum, max_count = 0;
        for(int i = lowLimit ; i <= highLimit ; i++) {
            sum = 0;
            for(auto x : to_string(i))
                sum += x-48;
            counts[sum]++;
            max_count = max(max_count,counts[sum]);
        }
        return max_count;
    }
};
