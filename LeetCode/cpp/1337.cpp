//Link: https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> rows;
        vector<int> result;
        int sum;
        for(int i = 0 ; i < mat.size() ; i++) {
            sum = 0;
            for(int x : mat[i]) sum += x;
            rows.push_back(make_pair(sum, i));
        }
        sort(rows.begin(), rows.end());
        for(int i = 0 ; i < k ; i++)
            result.push_back(rows[i].second);
        return result;
    }
};
