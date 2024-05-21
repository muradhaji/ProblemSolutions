#Link: https://leetcode.com/problems/hamming-distance/

class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        binx = biny = ""
        count = 0
        while x != 0:
            binx = str(x%2) + binx
            x //= 2
        while y != 0:
            biny = str(y%2) + biny
            y //= 2
        while len(binx) != len(biny):
            if(len(binx) < len(biny)): binx = "0" + binx
            else: biny = "0" + biny
        for i in range(len(binx)):
            if(binx[i] != biny[i]):
                count += 1
        return count
        