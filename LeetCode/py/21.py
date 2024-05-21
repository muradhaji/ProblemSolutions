#Link: https://leetcode.com/problems/merge-two-sorted-lists/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        result = ListNode
        tail = result
        
        if not l1 and not l2:
            return None
        elif not l1:
            return l2
        elif not l2:
            return l1
        
        while(l1 and l2):
            if(l1.val < l2.val):
                tail.next = ListNode(l1.val)
                tail = tail.next
                l1 = l1.next
            else:
                tail.next = ListNode(l2.val)
                tail = tail.next
                l2 = l2.next
        
        while(l1):
            tail.next = ListNode(l1.val)
            tail = tail.next
            l1 = l1.next
        
        while(l2):
            tail.next = ListNode(l2.val)
            tail = tail.next
            l2 = l2.next
        
        result = result.next
            
        return result          
        