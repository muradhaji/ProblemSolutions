//Link: https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(int i = 0 ; i < J.size() ; i++)
            for(int j = 0 ; j < S.size() ; j++)
                if(S[j] == J[i]) count += 1;
        return count;
    }
};
