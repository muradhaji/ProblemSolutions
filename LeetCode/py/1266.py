#Link: https://leetcode.com/problems/minimum-time-visiting-all-points/

class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        count = 0
        for i in range(1, len(points)):
            steps = (abs(points[i][0] - points[i-1][0]), abs(points[i][1] - points[i-1][1]))
            count += max(steps)
        return count
        