#Link: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        result = list()
        rows = list()
        for i,row in enumerate(mat):
            rows.append((sum(row), i))
        rows.sort()
        for i in range(k):
            result.append(rows[i][1])
        return result
