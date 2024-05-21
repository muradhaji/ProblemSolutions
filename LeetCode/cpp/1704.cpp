//Link: https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution {
public:
    bool halvesAreAlike(string s) {
        int left = 0 , right = 0, n = s.size()/2;
        for(int i = 0 ; i < n ; i++) {
            if(isVowel(s[i]))
                left++;
            if(isVowel(s[i+n]))
                right++;
        }
        return left == right;
    }
    bool isVowel(char ch) {
        string vowels = "aAeEiIoOuU";
        for(auto x : vowels)
            if(ch == x) return true;
        return false;
    }
};
