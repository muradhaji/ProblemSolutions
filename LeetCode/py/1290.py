#Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        bits = []
        result = 0
        while(head != None):
            bits.append(head.val)
            head = head.next
        i = len(bits) - 1
        for bit in bits:
            if bit: result += 2 ** i
            i -= 1
        return result
        