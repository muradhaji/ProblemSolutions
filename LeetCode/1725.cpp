//Link: https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector <int> sides;
        int side, maxLen = 0, count = 0;
        for(auto rect : rectangles) {
            side = (rect[0] < rect[1]) ? rect[0] : rect[1];
            sides.push_back(side);
            maxLen = (side > maxLen) ? side : maxLen;
        }
        for(int side : sides)
            if(side == maxLen) count++;
        return count;
    }
};
