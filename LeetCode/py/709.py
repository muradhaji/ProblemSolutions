#Link: https://leetcode.com/problems/to-lower-case/

class Solution:
    def toLowerCase(self, string: str) -> str:
        result = []
        for char in string:
            if char >= 'A' and char <= 'Z':
                result.append(chr(ord(char) + 32))
            else:
                result.append(char)
        return "".join(result)
        