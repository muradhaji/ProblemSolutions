/**
 * https://leetcode.com/problems/longest-common-prefix/
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  let firstStr = strs[0];
  for (let i = 0; i < firstStr.length; i++) {
    let char = strs[0][i];
    for (let j = 1; j < strs.length; j++) {
      if (strs[j][i] !== char) {
        return strs[0].slice(0, i);
      }
    }
  }
  return firstStr;
};
