#Link: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        counts = [0]*10000
        res = int()
        for x in A:
            counts[x] += 1
        for i in range(10000):
            if counts[i] == len(A)//2:
                res = i
                break
        return res
        