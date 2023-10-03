#Link: https://leetcode.com/problems/di-string-match/

class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        minValue = 0
        maxValue = len(s)
        result = []
        for x in s:
            if x == 'I':
                result.append(minValue)
                minValue += 1
            else:
                result.append(maxValue)
                maxValue -= 1
        result.append(minValue)
        return result
        