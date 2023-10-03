//Link: https://leetcode.com/problems/maximum-units-on-a-truck/

class Solution {
private:
    static bool sortBySec(const vector<int>& a, const vector<int> b) {
        return a[1] > b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), sortBySec);
        int max_sum = 0;
        for(auto x : boxTypes) {
            if(x[0] <= truckSize) {
                max_sum += x[0]*x[1];
                truckSize -= x[0];
            }
            else {
                max_sum += truckSize*x[1];
                break;
            }
        }
        return max_sum;
    }
};
