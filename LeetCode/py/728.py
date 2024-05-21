#Link: https://leetcode.com/problems/self-dividing-numbers/

class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        result = []
        for i in range(left,right+1):
            if self.isSelfDividing(i): result.append(i)
        return result
    def isSelfDividing(self, num : int) -> bool:
        for digit in [int(x) for x in str(num)]:
            if digit == 0 or num%digit != 0: return False
        return True
        