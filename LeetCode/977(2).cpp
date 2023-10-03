//Link: https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int smallest_index = 0, l, r;
        vector<int> result;
        for(int i = 0 ; i < nums.size() ; i++)
            if(abs(nums[i]) < abs(nums[smallest_index]))
                smallest_index = i;
        l = smallest_index;
        r = smallest_index + 1;
        while(l >= 0 && r < nums.size()) {
            if(abs(nums[l]) < abs(nums[r]))
                result.push_back(nums[l] * nums[l--]);
            else
                result.push_back(nums[r] * nums[r++]);
        }
        while(l >= 0)
            result.push_back(nums[l] * nums[l--]);
        while(r < nums.size())
            result.push_back(nums[r] * nums[r++]);
        return result;
    }
};
