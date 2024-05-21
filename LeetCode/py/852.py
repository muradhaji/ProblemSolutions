#Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        index = 0
        for i in range(len(arr)):
            if arr[i] > arr[index]:
                index = i
        return index
