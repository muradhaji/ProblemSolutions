//Link: https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size(), a, b;
        int m = (n%2==0) ? n/2 : n/2 + 1;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                a = !image[i][j];
                b = !image[i][n-j-1];
                image[i][j] = b;
                image[i][n-j-1] = a;
            }
        }
        return image;
    }
};
