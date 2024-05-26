/**
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function (haystack, needle) {
  for (let i = 0; i < haystack.length; i++) {
    if (haystack[i] === needle[0]) {
      let j = 1;
      while (j < needle.length) {
        if (haystack[i + j] != needle[j]) {
          break;
        }
        j++;
      }
      if (j == needle.length) {
        return i;
      }
    }
  }
  return -1;
};
