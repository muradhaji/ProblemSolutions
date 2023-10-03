//Link: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int count_odd = 0, count_even = 0;
        for(int chip : position) {
            if(chip&1) count_odd++;
            else count_even++;
        }
        return min(count_odd, count_even);
    }
};
