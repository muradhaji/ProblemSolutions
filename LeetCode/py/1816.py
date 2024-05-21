#Link: https://leetcode.com/problems/truncate-sentence/

class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        count = 0
        i = 0
        while i < len(s):
            if s[i] == ' ': count += 1
            if count == k: break
            i += 1
        return s[:i]
        