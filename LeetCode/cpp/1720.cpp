//Link: https://leetcode.com/problems/decode-xored-array/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr(encoded.size()+1);
        arr[0] = first;
        for(int i = 1 ; i < encoded.size() + 1 ; i++)
            arr[i] = arr[i-1] xor encoded[i-1];
        return arr;
    }
};
