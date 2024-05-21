//Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size() - 1, mid;
        while(l < r) {
            mid = l + (r - l) / 2;
            if(arr[mid] < arr[mid + 1])
                l = mid + 1;
            else if(arr[mid] < arr[mid - 1])
                r = mid;
            else
                return mid;
        }
        return mid;
    }
};
