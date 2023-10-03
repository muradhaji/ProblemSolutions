#Link: https://leetcode.com/problems/determine-color-of-a-chessboard-square/

class Solution:
    def squareIsWhite(self, coordinates: str) -> bool:
        x = ord(coordinates[0])-96
        y = int(coordinates[1])
        return (x+y)%2
        