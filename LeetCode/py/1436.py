#Link: https://leetcode.com/problems/destination-city/

class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        for i in range(len(paths)):
            for j in range(len(paths)):
                if paths[i][0] == paths[j][1]:
                    paths[j][1] = "0"
        for i in range(len(paths)):
            if paths[i][1] != "0":
                return paths[i][1]
                