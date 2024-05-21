//Link: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest = -1, temp;
        for(int i = arr.size()-1 ; i >= 0 ; i--) {
            temp = arr[i];
            arr[i] = greatest;
            greatest = max(greatest, temp);
        }
        return arr;
    }
};
