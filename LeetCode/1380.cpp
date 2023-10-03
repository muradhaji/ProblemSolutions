//Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), flagRow, flagCol;
        vector<int> luckyNumbers;
        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                flagRow = i, flagCol = j;
                for(int c = 0 ; c < n ; c++) {
                    if(matrix[i][j] > matrix[i][c]) {
                        flagRow = -1;
                        break;
                    }
                }
                if(flagRow == -1) continue;
                for(int r = 0 ; r < m ; r++) {
                    if(matrix[i][j] < matrix[r][j]) {
                        flagCol = -1;
                        break;
                    }
                }
                if(flagCol == -1) continue;
                luckyNumbers.push_back(matrix[flagRow][flagCol]);
            }
        }
        return luckyNumbers;
    }
};
