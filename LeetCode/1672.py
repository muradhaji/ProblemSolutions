#Link: https://leetcode.com/problems/richest-customer-wealth/

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        total = result = 0
        for row in accounts:
            total = 0
            for amount in row:
                total += amount
            result = max(total,result)
        return result
        