/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function (head) {
  if (head === null) {
    return null;
  }
  let uniqueListHead = head;
  let lastNode = uniqueListHead;
  let node = head.next;
  while (node !== null) {
    if (node.val !== lastNode.val) {
      lastNode.next = node;
      lastNode = node;
    } else {
      lastNode.next = null;
    }
    node = node.next;
  }

  return uniqueListHead;
};
