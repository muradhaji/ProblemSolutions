#Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        mid = len(arr) // 2
        while True:
            if arr[mid-1] < arr[mid] and arr[mid] > arr[mid+1]:
                return mid
            if arr[mid] < arr[mid+1]:
                mid += 1
            else:
                mid -= 1
