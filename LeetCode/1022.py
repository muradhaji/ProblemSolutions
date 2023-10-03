#Link: https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: TreeNode) -> int:
        return self.solve(root, 0)
    def solve(self, root: TreeNode, value: int) -> int:
        if root == None:
            return 0
        if root.left == None and root.right == None:
            return (value << 1) + root.val;
        value = (value << 1) + root.val
        return self.solve(root.left, value) + self.solve(root.right, value)
