//Link: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

class Solution {
public:
    string freqAlphabets(string s) {
        string result;
        int value;
        for(int i = 0 ; i < s.length() ; i++) {
            if(i < s.length()-2 && s[i+2] == '#') {
                value = (s[i]-48)*10 + (s[i+1]-48);
                i += 2;
            }
            else value = s[i]-48;
            result += (97 + value - 1);
        }
        return result;
    }
};
