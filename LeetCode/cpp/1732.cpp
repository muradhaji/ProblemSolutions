//Link: https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0, max = 0;
        for(int x : gain) {
            curr += x;
            max = (curr > max) ? curr : max;
        }
        return max;
    }
};
