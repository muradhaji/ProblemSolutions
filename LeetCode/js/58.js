/**
 * https://leetcode.com/problems/length-of-last-word/
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  let length = 0;
  for (let i = s.length - 1; i >= 0; i--) {
    if (s[i] == ' ') {
      if (length != 0) {
        break;
      }
    } else {
      length++;
    }
  }
  return length;
};
