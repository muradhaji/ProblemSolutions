#Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution:
    def maxDepth(self, s: str) -> int:
        depth = max_depth = 0
        for ch in s:
            if ch == '(': depth += 1
            elif ch == ')': depth -= 1
            max_depth = max(depth,max_depth)
        return max_depth
        