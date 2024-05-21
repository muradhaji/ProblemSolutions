//Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> stck({'0'});
        string result = "";
        for(int i = 0 ; i < S.length() ; i++) {
            if(S[i] == stck.top()) stck.pop();
            else stck.push(S[i]);
        }
        while(stck.size() != 1)
            result = stck.top() + result, stck.pop();
        return result;
    }
};
