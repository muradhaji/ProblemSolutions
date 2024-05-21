/**
 * https://leetcode.com/problems/palindrome-number/
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  let strValue = String(x);
  for (let i = 0; i < Math.floor(strValue.length / 2); i++) {
    if (strValue[i] !== strValue[strValue.length - i - 1]) {
      return false;
    }
  }
  return true;
};
