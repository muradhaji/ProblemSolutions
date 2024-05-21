//Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int bits[30] = {0}, i = 0, j = 0, result = 0;
        while(head != nullptr) {
            bits[i] = head->val;
            head = head->next;
            i += 1;
        }
        i -= 1;
        while(i >= 0) {
            if(bits[i])
                result += pow(2, j);
            i -= 1;
            j += 1;
        }
        return result;
    }
};
