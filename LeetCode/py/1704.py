#Link: https://leetcode.com/problems/determine-if-string-halves-are-alike/

class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        left = right = 0
        mid = len(s)//2
        for vowel in "aAeEiIoOuU":
            left += s[:mid].count(vowel)
            right += s[mid:].count(vowel)
        return left == right
        