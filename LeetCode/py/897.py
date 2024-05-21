#Link: https://leetcode.com/problems/increasing-order-search-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    head = ptr = None
    def increasingBST(self, root: TreeNode) -> TreeNode:
        self.create(root)
        return self.head
    def create(self, node):
        if node == None: return
        self.create(node.left)
        newNode = TreeNode(node.val)
        if self.head == None:
            self.head = newNode
            self.ptr = newNode
        else:
            self.ptr.right = newNode
            self.ptr = self.ptr.right
        self.create(node.right)
        