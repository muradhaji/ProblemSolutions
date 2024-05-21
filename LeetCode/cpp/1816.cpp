//Link: https://leetcode.com/problems/truncate-sentence/

class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = "";
        int spaces = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s[i] == ' ') spaces++;
            if(spaces == k) break;
            result += s[i];
        }
        return result;
    }
};
