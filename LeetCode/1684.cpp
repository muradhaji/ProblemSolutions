//Link: https://leetcode.com/problems/count-the-number-of-consistent-strings/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        bool consistent, found;
        for(int i = 0 ; i < words.size() ; i++) {
            consistent = true;
            for(int j = 0 ; j < words[i].length() ; j++) {
                found = false;
                for(int k = 0 ; k < allowed.length() ; k++) {
                    if(words[i][j] == allowed[k]) {
                        found = true;
                        break;
                    }
                }
                if(found == false) {
                    consistent = false;
                    break;
                }
            }
            if(consistent == true) count += 1;
        }
        return count;
    }
};
