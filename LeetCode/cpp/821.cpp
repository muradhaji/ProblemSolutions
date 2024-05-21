//Link: https://leetcode.com/problems/shortest-distance-to-a-character/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> answer(s.length(), INT_MAX);
        int n = s.length();
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == c) {
                for(int j = i ; j >= 0 ; j--) {
                    if(abs(i-j) < answer[j]) answer[j] = abs(i-j);
                    else break;
                }
                for(int j = i + 1 ; j < n ; j++) {
                    if(abs(i-j) < answer[j]) answer[j] = abs(i-j);
                    else break;
                }
            }
        }
        return answer;
    }
};
