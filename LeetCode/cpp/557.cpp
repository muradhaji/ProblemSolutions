//Link: https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        string word = "", res = "";
        for(char ch : s) {
            if(ch == ' ') {
                res += string(word.rbegin(),word.rend()) + ' ';
                word = "";
            }
            else word += ch;
        }
        res += string(word.rbegin(),word.rend());
        return res;
    }
};
