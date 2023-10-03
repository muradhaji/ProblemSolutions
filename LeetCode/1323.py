#Link: https://leetcode.com/problems/maximum-69-number/

class Solution:
    def maximum69Number (self, num: int) -> int:
        if num >= 6666:
            divisor = 1000
        elif num >= 666:
            divisor = 100
        elif num >= 66:
            divisor = 10
        else:
            divisor = 1
            
        n = num
            
        while(divisor != 0):
            if(n // divisor == 6):
                num += 3 * divisor
                break
            n -= 9 * divisor
            divisor //= 10
        
        return num
        