#Link: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        count_t = [0]*1001
        count_a = [0]*1001
        for i in range(len(target)):
            count_t[target[i]] += 1
            count_a[arr[i]] += 1
        for i in range(1001):
            if count_t[i] != count_a[i]:
                return False
        return True
