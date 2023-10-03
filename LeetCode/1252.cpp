//Link: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<bool> rows(n, false);
        vector<bool> cols(m, false);
        int count = 0;
        
        for(auto xy : indices) {
            rows[xy[0]] = !rows[xy[0]];
            cols[xy[1]] = !cols[xy[1]];
        }
        
        for(bool i : rows)
            for(bool j : cols)
                if(i ^ j)
                    count += 1;
        
        return count;
    }
};
