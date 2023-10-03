//Link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> bits_num;
        int bits, num;
        for(int i = 0 ; i < arr.size() ; i++) {
            bits = 0;
            num = arr[i];
            while(num != 0) {
                bits += num % 2;
                num /= 2;
            }
            bits_num.push_back(make_pair(bits,arr[i]));
        }
        sort(bits_num.begin(), bits_num.end());
        for(int i = 0 ; i < arr.size() ; i++)
            arr[i] = bits_num[i].second;
        return arr;
    }
};
