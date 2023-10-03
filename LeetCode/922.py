#Link: https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        even, odd, n = 0, 1, len(nums)
        while even < n and odd < n:
            if nums[even] % 2 == 0: even += 2
            elif nums[odd] % 2 == 1: odd += 2
            else: nums[even], nums[odd] = nums[odd], nums[even]
        return nums
