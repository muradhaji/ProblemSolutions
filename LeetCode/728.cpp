//Link: https://leetcode.com/problems/self-dividing-numbers/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left ; i <= right ; i++)
            if(isSelfDividing(i))
                result.push_back(i);
        return result;
    }
    bool isSelfDividing(int num) {
        for(auto digit : to_string(num)) {
            digit = digit-'0';
            if(digit == 0 || num%digit != 0)
                return false;
        }
        return true;
    }
};
