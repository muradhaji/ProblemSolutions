#Link: https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/

class Solution:
    def countGoodRectangles(self, rectangles: List[List[int]]) -> int:
        sides = []
        side = maxLen = 0
        for rect in rectangles:
            side = min(rect[0],rect[1])
            sides.append(side)
            maxLen = max(side, maxLen)
        return sides.count(maxLen)
        