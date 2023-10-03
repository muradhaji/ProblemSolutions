#Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution:
    def removeDuplicates(self, S: str) -> str:
        stack = ['0']
        for ch in S:
            if ch == stack[-1]: stack.pop()
            else: stack.append(ch)
        return "".join(stack[1:])
