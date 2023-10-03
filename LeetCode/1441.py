#Link: https://leetcode.com/problems/build-an-array-with-stack-operations/

class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        operations = []
        i, j = 1, 0
        while(i <= n and j < len(target)):
            operations.append("Push")
            if i != target[j]:
                operations.append("Pop")
                j -= 1
            i += 1
            j += 1
        return operations
