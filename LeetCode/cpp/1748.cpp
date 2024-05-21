//Link: https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int counts[101] = {0}, sum = 0;
        for(auto num : nums)
            counts[num]++;
        for(int i = 0 ; i < 101 ; i++)
            if(counts[i] == 1)
                sum += i;
        return sum;
    }
};
