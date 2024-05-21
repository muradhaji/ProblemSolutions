#Link: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

class Solution:
    def oddCells(self, n: int, m: int, indices: List[List[int]]) -> int:
        rows = [False]*n
        cols = [False]*m
        count = 0
        
        for xy in indices:
            rows[xy[0]] = not rows[xy[0]]
            cols[xy[1]] = not cols[xy[1]]
        
        for i in rows:
            for j in cols:
                if i ^ j:
                    count += 1
                    
        return count
        