#Link: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        total = 0
        for s in range(len(arr)):
            k = 1
            while s+k <= len(arr):
                total += sum(arr[s:s+k])
                k += 2
        return total
        