/**
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function (nums) {
  let unique = [nums[0]];
  for (let i = 1; i < nums.length; i++) {
    if (nums[i] != unique[unique.length - 1]) {
      unique.push(nums[i]);
    }
  }
  for (let i = 0; i < unique.length; i++) {
    nums[i] = unique[i];
  }
  return unique.length;
};
