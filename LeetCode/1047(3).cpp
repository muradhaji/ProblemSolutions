//Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        vector<char> stack({'0'});
        string result = "";
        for(char ch : S) {
            if(ch == stack.back()) stack.erase(stack.end()-1);
            else stack.push_back(ch);
        }
        for(int i = 1 ; i < stack.size() ; i++)
            result += stack[i];
        return result;
    }
};
