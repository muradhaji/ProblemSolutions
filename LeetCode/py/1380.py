#Link: https://leetcode.com/problems/lucky-numbers-in-a-matrix/

class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        luckyNumbers = []
        m, n = len(matrix), len(matrix[0])
        for i in range(m):
            for j in range(n):
                flagi, flagj = i, j
                for r in range(n):
                    if matrix[i][j] > matrix[i][r]:
                        flagj = -1; break
                if flagj == -1: continue
                for c in range(m):
                    if matrix[i][j] < matrix[c][j]:
                        flagi = -1; break
                if flagi == -1: continue
                luckyNumbers.append(matrix[flagi][flagj])
        return luckyNumbers
