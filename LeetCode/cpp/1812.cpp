//Link: https://leetcode.com/problems/determine-color-of-a-chessboard-square/

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x = coordinates[0]-96;
        int y = coordinates[1]-48;
        return ((x+y)%2 == 1) ? true : false;
    }
};
