#Link: https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = []
        smallest_index = 0
        for i in range(len(nums)):
            if abs(nums[i]) < abs(nums[smallest_index]):
                smallest_index = i
        l = smallest_index
        r = smallest_index + 1
        while l >= 0 and r < len(nums):
            if abs(nums[l]) < abs(nums[r]):
                result.append(nums[l] * nums[l])
                l -= 1
            else:
                result.append(nums[r] * nums[r])
                r += 1
        while l >= 0:
            result.append(nums[l] * nums[l])
            l -= 1
        while r < len(nums):
            result.append(nums[r] * nums[r])
            r += 1
        return result
