#Link: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

class Solution:
    def minCostToMoveChips(self, position: List[int]) -> int:
        count_odd, count_even = 0, 0
        for chip in position:
            if chip & 1: count_odd += 1
            else: count_even += 1
        return min(count_odd, count_even)
