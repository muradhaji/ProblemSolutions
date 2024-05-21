//Link: https://leetcode.com/problems/n-ary-tree-postorder-traversal/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        Node* temp;
        vector<int> res;
        stack<Node*> s;
        s.push(root);
        while(!s.empty()) {
            temp = s.top();
            s.pop();
            if(temp) {
                res.push_back(temp->val);
                for(auto child : temp->children)
                    s.push(child);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
