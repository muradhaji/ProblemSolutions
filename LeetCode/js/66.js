/**
 * https://leetcode.com/problems/plus-one/
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function (digits) {
  let remainder = 0;
  for (let i = digits.length - 1; i >= 0; i--) {
    digits[i]++;
    remainder = digits[i] === 10 ? 1 : 0;
    if (remainder == 0) {
      return digits;
    }
    digits[i] %= 10;
  }
  if (remainder) {
    digits.unshift(1);
  }
  return digits;
};
