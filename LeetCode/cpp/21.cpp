//Link: https://leetcode.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3 = NULL, *temp;
        if(!l1 && !l2)
            return l3;
        else if(!l1) {
            l3 = new ListNode(l2->val);
            l2 = l2->next;
        }
        else if(!l2) {
            l3 = new ListNode(l1->val);
            l1 = l1->next;
        }
        else {
            if(l1->val < l2->val){
                l3 = new ListNode(l1->val);
                l1 = l1->next;
            }
            else {
                l3 = new ListNode(l2->val);
                l2 = l2->next;
            }
        }
        temp = l3;
        while(l1 && l2) {
            if(l1->val < l2->val){
                temp->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else {
                temp->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            temp = temp->next;
        }
        while(l1){
            temp->next = new ListNode(l1->val);
            temp = temp->next;
            l1 = l1->next;
        }
        while(l2){
            temp->next = new ListNode(l2->val);
            temp = temp->next;
            l2 = l2->next;
        }
        temp = l3;
        while(temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        return l3;
    }
};
