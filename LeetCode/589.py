#Link: https://leetcode.com/problems/n-ary-tree-preorder-traversal/

"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res = []
        stack = deque()
        stack.append(root)
        while stack:
            temp = stack.pop()
            if temp:
                res.append(temp.val)
                for child in temp.children[::-1]:
                    stack.append(child)
        return res
        