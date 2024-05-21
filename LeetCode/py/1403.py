#Link: https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/

class Solution:
    def minSubsequence(self, nums: List[int]) -> List[int]:
        nums.sort(reverse=True)
        for i in range(len(nums)):
            if sum(nums[:i+1]) > sum(nums[i+1:]):
                return nums[:i+1]
