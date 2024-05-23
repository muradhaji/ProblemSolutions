/**
 * https://leetcode.com/problems/longest-common-prefix/
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  let shortestStr = strs[0];
  for (let i = 0; i < strs.length; i++) {
    if (strs[i].length < shortestStr.length) {
      shortestStr = strs[i];
    }
  }
  for (let i = 0; i < shortestStr.length; i++) {
    for (let j = 0; j < strs.length; j++) {
      if (strs[j][i] !== shortestStr[i]) {
        return shortestStr.slice(0, i);
      }
    }
  }
  return shortestStr;
};
