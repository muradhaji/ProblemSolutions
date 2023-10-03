//Link: https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string S) {
        int left = 0, right = 0, begin = 0;
        vector<int> indices;
        string result = "";
        
        for(int i = 0 ; i < S.size() ; i++) {
            if(S[i] == '(') left += 1;
            else right += 1;
            if(left == right) {
                indices.push_back(begin + 1);
                indices.push_back(i - 1);
                begin = i + 1;
            }
        }
        
        for(int i = 0 ; i < indices.size() ; i += 2)
            for(int j = indices[i] ; j <= indices[i+1] ; j ++)
                result += S[j];
        
        return result;
    }
};
