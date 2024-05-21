#Link: https://leetcode.com/problems/matrix-diagonal-sum/

class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:
        total = 0
        n = len(mat)
        for x in range(n//2):
            total += mat[x][x] + mat[n-x-1][n-x-1] + mat[x][n-x-1] + mat[n-x-1][x]
        if n % 2 == 1:
            total += mat[n//2][n//2]
        return total
        