//Link: https://leetcode.com/problems/di-string-match/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int min = 0 , max = s.length();
        vector<int> result;
        for(auto x : s) {
            if(x == 'I') result.push_back(min++);
            else result.push_back(max--);
        }
        result.push_back(min);
        return result;
    }
};
