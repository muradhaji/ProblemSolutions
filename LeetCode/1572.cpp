//Link: https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0, x = 0;
        for(x = 0; x < n/2 ; x++)
            sum += mat[x][x] + mat[n-x-1][n-x-1] + mat[x][n-x-1] + mat[n-x-1][x];
        if(n % 2 == 1) sum += mat[n/2][n/2];
        return sum;
    }
};
