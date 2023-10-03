#Link: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

class Solution:
    def freqAlphabets(self, s: str) -> str:
        i = 0
        result = ''
        while i < len(s):
            if i < len(s)-2 and s[i+2] == '#':
                value = int(s[i:i+2])
                i += 2
            else: value = int(s[i])
            result += chr(97 + value - 1)
            i += 1
        return result
        