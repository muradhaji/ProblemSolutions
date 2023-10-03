#Link: https://leetcode.com/problems/remove-outermost-parentheses/

class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        left = right = begin = 0
        outermost = []
        result = ""
        for i in range(len(S)):
            if S[i] == '(':
                left += 1
            else:
                right += 1
            if(left == right):
                outermost.append([begin + 1 , i - 1])
                begin = i+1
        
        for index in outermost:
            result += S[index[0] : index[1] + 1]
        
        return result
        