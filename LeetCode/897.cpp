//Link: https://leetcode.com/problems/increasing-order-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* head, *ptr;
    TreeNode* increasingBST(TreeNode* root) {
        create(root);
        return head;
    }
private:
    void create(TreeNode* node) {
        if(node == nullptr) return ;
        create(node->left);
        TreeNode* newNode = new TreeNode(node->val);
        if(head == nullptr) {
            head = newNode;
            ptr = newNode;
        }
        else {
            ptr->right = newNode;
            ptr = ptr->right;
        }
        create(node->right);
    }
};
