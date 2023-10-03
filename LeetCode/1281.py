#Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        summary = 0
        while(n != 0):
            product *= (n % 10)
            summary += (n % 10)
            n //= 10
        return (product - summary)
        