/**
 * https://leetcode.com/problems/remove-element/
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
  let numsCopy = nums;
  let k = 0;
  for (let i = 0; i < numsCopy.length; i++) {
    if (numsCopy[i] != val) {
      nums[k++] = numsCopy[i];
    }
  }
  return k;
};
