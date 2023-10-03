//Link: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int count_t[1001] = {0};
        int count_a[1001] = {0};
        for(int i = 0 ; i < target.size() ; i++) {
            count_t[target[i]]++;
            count_a[arr[i]]++;
        }
        for(int i = 0 ; i < 1001 ; i++)
            if(count_t[i] != count_a[i])
                return false;
        return true;
    }
};
