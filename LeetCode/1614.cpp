//Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int depth = 0, max_depth = 0;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s[i] == '(') depth += 1;
            else if(s[i] == ')') depth -= 1;
            max_depth = (depth > max_depth) ? depth : max_depth;
        }
        return max_depth;
    }
};
