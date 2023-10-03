#Link: https://leetcode.com/problems/shortest-distance-to-a-character/

class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        n = len(s)
        answer = [n]*n
        for i in range(n):
            if s[i] == c:
                for j in range(i,-1,-1):
                    if abs(i-j) < answer[j]: answer[j] = abs(i-j)
                    else: break
                for j in range(i+1,n):
                    if abs(i-j) < answer[j]: answer[j] = abs(i-j)
                    else: break
        return answer
