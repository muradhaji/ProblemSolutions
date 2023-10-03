//Link: https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int num) {
        int divisor, n = num;
        
        if(num >= 6666) divisor = 1000;
        else if(num >= 666) divisor = 100;
        else if(num >= 66) divisor = 10;
        else divisor = 1;
        
        while(divisor != 0) {
            if(n / divisor == 6) {
                num += 3 * divisor;
                break;
            }
            n -= 9 * divisor;
            divisor /= 10;
        }
        
        return num;
    }
};
