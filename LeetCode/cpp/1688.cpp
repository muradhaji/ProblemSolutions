//Link: https://leetcode.com/problems/count-of-matches-in-tournament/

class Solution {
public:
    int numberOfMatches(int n) {
        int total = 0;
        while(n != 1) {
            total += n/2;
            if(n & 1) n += 1;
            n /= 2;
        }
        return total;
    }
};
