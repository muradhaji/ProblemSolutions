//Link: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        int sum = 0, curr = 0;
        vector<int> res;
        for(int x : nums) sum += x;
        for(int i = 0 ; i < nums.size() ; i++) {
            curr += nums[i];
            res.push_back(nums[i]);
            if(curr > (sum-curr)) break;
        }
        return res;
    }
};
