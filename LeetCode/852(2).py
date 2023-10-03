#Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        index = 0
        while arr[index+1] > arr[index]:
            index += 1
        return index
