#Link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution:
    def sumZero(self, n: int) -> List[int]:
        array = []
        begin = -(n//2)
        end = n//2
        for i in range(begin, end+1):
            array.append(i)
        if n%2 == 0: array.remove(0)
        return array
        