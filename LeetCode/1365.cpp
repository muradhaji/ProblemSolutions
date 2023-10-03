//Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int count;
        for(int i = 0 ; i < nums.size() ; i++) {
            count = 0;
            for (int j = 0 ; j < nums.size() ; j++)
                if(nums[j] < nums[i])
                    count += 1;
            result.push_back(count);
        }
        return result;
    }
};
