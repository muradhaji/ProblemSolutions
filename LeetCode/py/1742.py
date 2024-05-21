#Link: https://leetcode.com/problems/maximum-number-of-balls-in-a-box/submissions/

class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        counts = [0]*46
        for i in range(lowLimit, highLimit+1):
            _sum = 0
            while i != 0:
                _sum += i % 10
                i //= 10
            counts[_sum] += 1
        return max(counts)
        