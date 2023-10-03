#Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for i in nums:
            string = str(i)
            if((len(string) & 1) == 0):
                count += 1
        return count
        