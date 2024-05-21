//Link: https://leetcode.com/problems/build-an-array-with-stack-operations/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> operations;
        for(int i = 1, j = 0 ; i <= n && j < target.size() ; i++, j++) {
            operations.push_back("Push");
            if(i != target[j]) {
                operations.push_back("Pop");
                j--;
            }
        }
        return operations;
    }
};
