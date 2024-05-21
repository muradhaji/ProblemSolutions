#Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution:
    def removeDuplicates(self, S: str) -> str:
        l, r = 0, 1
        while r < len(S):
            if S[l] == S[r]:
                S = S[:l] + S[r+1:]
                if l > 0 : l -= 1
                r = l + 1
            else:
                l = r
                r += 1
        return S
