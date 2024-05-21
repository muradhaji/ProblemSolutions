#Link: https://leetcode.com/problems/flipping-an-image/

class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        n = len(image)
        m = (n//2) if (n%2==0) else (n//2 + 1)
        for i in range(n):
            for j in range(m):
                a = int(not image[i][j])
                b = int(not image[i][n-j-1])
                image[i][j] = b
                image[i][n-j-1] = a
        return image
        