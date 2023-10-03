//Link: https://leetcode.com/problems/unique-morse-code-words/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                          ".---","-.-",".-..","--","-.","---",".--.","--.-",
                          ".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> morse_words;
        string transformation;
        for(int i = 0 ; i < words.size() ; i++) {
            transformation = "";
            for(int j = 0 ; j < words[i].length() ; j++)
                transformation += morse[words[i][j] - 'a'];
            morse_words.insert(transformation);
        }
        return morse_words.size();
    }
};
