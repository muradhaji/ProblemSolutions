//Link: https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int counts[10000] = {0}, res;
        for(auto num : A)
            counts[num]++;
        for(int i = 0 ; i < 10000 ; i++) {
            if(counts[i] == A.size()/2){
                res = i;
                break;
            }
        }
        return res;
    }
};
