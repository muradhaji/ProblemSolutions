#Link: https://leetcode.com/problems/find-the-highest-altitude/

class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        curr = maxheight = 0
        for x in gain:
            curr += x
            maxheight = max(curr,maxheight)
        return maxheight
        