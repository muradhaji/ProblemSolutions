#Link: https://leetcode.com/problems/increasing-decreasing-string/

class Solution:
    def sortString(self, s: str) -> str:
        counts = [0]*26
        result = ''
        n = len(s)
        for ch in s: counts[ord(ch)-97] += 1
        while n != 0:
            for i in range(26):
                if counts[i]:
                    result += chr(97+i)
                    counts[i] -= 1
                    n -= 1
            for i in range(25,-1,-1):
                if counts[i]:
                    result += chr(97+i)
                    counts[i] -= 1
                    n -= 1
        return result
        