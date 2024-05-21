#Link: https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        left = right = count = 0
        for ch in s:
            if ch == 'L': left += 1
            else: right += 1
            if left == right:
                left = right = 0
                count += 1
        return count
        