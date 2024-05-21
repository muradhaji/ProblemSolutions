//Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        int l = 0, r = 1;
        string result = "";
        while(r < S.length()) {
            if(S[l] == S[r]) {
                S[l] = S[r] = '0';
                while(l > 0 && S[l] == '0')
                    l--;
                r++;
            }
            else {
                l = r;
                r++;
            }
        }
        for(char ch : S)
            if(ch != '0')
                result += ch;
        return result;
    }
};
