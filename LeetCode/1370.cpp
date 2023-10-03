//Link: https://leetcode.com/problems/increasing-decreasing-string/

class Solution {
public:
    string sortString(string s) {
        int counts[26] = {0}, n = s.length();
        string result;
        for(int i = 0 ; i < n ; i++)
            counts[s[i]-97]++;
        while(n != 0) {
            for(int i = 0 ; i < 26 ; i++){
                if(counts[i] != 0) {
                    result += char(97+i);
                    counts[i]--;
                    n--;
                }
            }
            for(int i = 25 ; i >= 0 ; i--) {
                if(counts[i] != 0) {
                    result += char(97+i);
                    counts[i]--;
                    n--;
                }
            }
        }
        return result;
    }
};
