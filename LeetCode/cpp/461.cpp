//Link: https://leetcode.com/problems/hamming-distance/

class Solution {
public:
    int hammingDistance(int x, int y) {
        string binx = "", biny = "";
        int count = 0;
        while(x != 0) {
            binx = to_string(x%2) + binx;
            x /= 2;
        }
        while(y != 0) {
            biny = to_string(y%2) + biny;
            y /= 2;
        }
        while(binx.length() != biny.length()) {
            if(binx.length() < biny.length()) binx = "0" + binx;
            else biny = "0" + biny;
        }
        for(int i = 0 ; i < binx.size() ; i++)
            if(binx[i] != biny[i])
                count++;
        return count;
    }
};
