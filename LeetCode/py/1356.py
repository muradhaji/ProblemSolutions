#Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:
        for i in range(len(arr)):
            numOfBits = 0
            n = arr[i]
            while n != 0:
                numOfBits += n%2
                n //= 2
            arr[i] = (numOfBits,arr[i])
        arr.sort()
        arr = [x[1] for x in arr]
        return arr
