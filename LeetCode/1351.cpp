//Link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(auto row : grid)
            for(auto cell : row)
                if(cell < 0) count++;
        return count;
    }
};
