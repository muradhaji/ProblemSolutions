//Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int mid = arr.size() / 2;
        while(true) {
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1])
                return mid;
            if(arr[mid] > arr[mid-1])
                mid++;
            else
                mid--;
        }
    }
};
