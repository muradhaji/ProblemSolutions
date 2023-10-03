//Link: https://leetcode.com/problems/richest-customer-wealth/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total, max = 0;
        for(int i = 0 ; i < accounts.size() ; i++) {
            total = 0;
            for(int j = 0 ; j < accounts[0].size() ; j++)
                total += accounts[i][j];
            max = (total > max) ? total : max;
        }
        return max;
    }
};
