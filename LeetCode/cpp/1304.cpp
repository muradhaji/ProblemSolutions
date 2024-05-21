//Link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> array;
        int begin = -(n/2);
        int end = n/2;
        for(int i = begin ; i <= end ; i++)
            array.push_back(i);
        if(n % 2 == 0)
            array.erase(array.begin() + n/2);
        return array;
    }
};
