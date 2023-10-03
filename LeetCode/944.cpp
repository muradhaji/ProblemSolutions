//Link: https://leetcode.com/problems/delete-columns-to-make-sorted/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int c = 0 ; c < strs[0].length() ; c++) {
            for(int r = 1 ; r < strs.size() ; r++) {
                if(strs[r][c] < strs[r-1][c]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
