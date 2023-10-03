//Link: https://leetcode.com/problems/goal-parser-interpretation/

class Solution {
public:
    string interpret(string command) {
        string result = "";
        for(int i = 0 ; i < command.length() ; i++) {
            if (command[i] == 'G')
                result += 'G';
            else if (command[i] == '(') {
                if(command[i+1] == ')')
                    result += 'o';
                else
                    result += "al";
            }
        }
        return result;
    }
};
