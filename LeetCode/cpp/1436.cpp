//Link: https://leetcode.com/problems/destination-city/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        for(int i = 0 ; i < paths.size() ; i++)
            for(int j = 0 ; j < paths.size() ; j++)
                if(paths[i][0] == paths[j][1])
                    paths[j][1] = "0";
        for(int i = 0 ; i < paths.size() ; i++)
            if(paths[i][1] != "0")
                return paths[i][1];
        return "";
    }
};
