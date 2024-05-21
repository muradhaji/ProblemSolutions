#Link: https://leetcode.com/problems/merge-strings-alternately/

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i = 0
        result = ''
        while i < len(word1) and i < len(word2):
            result += word1[i]
            result += word2[i]
            i += 1
        while i < len(word1):
            result += word1[i]
            i += 1
        while i < len(word2):
            result += word2[i]
            i += 1
        return result
        