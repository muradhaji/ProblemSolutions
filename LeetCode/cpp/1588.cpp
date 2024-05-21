//Link: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int e, n = arr.size(), sum = 0;
        for(int s = 0 ; s < n ; s++) {
            for(int k = 1 ; s+k <= n ; k += 2) {
                e = s+k;
                for(int i = s ; i < e ; i++)
                    sum += arr[i];
            }
        }
        return sum;
    }
};
