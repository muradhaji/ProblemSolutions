#Link: https://leetcode.com/problems/unique-number-of-occurrences/

class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        unique = set(arr)
        unique_count = set()
        for num in unique:
            unique_count.add(arr.count(num))
        return len(unique) == len(unique_count)
