//Link: https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

class Solution {
public:
    string generateTheString(int n) {
        string result;
        for(int i = 0 ; i < n ; i++)
            result += 'x';
        if(n % 2 == 0) result[n-1] = 'y';
        return result;
    }
};
