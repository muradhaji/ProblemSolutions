/**
 * https://leetcode.com/problems/merge-sorted-array/
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function (nums1, m, nums2, n) {
  let nums1copy = [...nums1];
  let i = 0,
    j = 0,
    k = 0;
  while (i < m && j < n) {
    if (nums1copy[i] < nums2[j]) {
      nums1[k++] = nums1copy[i++];
    } else {
      nums1[k++] = nums2[j++];
    }
  }
  while (i < m) {
    nums1[k++] = nums1copy[i++];
  }
  while (j < n) {
    nums1[k++] = nums2[j++];
  }
};
