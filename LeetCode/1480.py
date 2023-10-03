#Link: https://leetcode.com/problems/running-sum-of-1d-array/

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = []
        summary = 0
        for i in nums:
            summary += i
            result.append(summary)
        return result
        