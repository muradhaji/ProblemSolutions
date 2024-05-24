/**
 * https://leetcode.com/problems/valid-parentheses/
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
  let openBrackets = {
    '(': 1,
    ')': 1,
    '[': 2,
    ']': 2,
    '{': 3,
    '}': 3,
  };
  let stack = [];
  for (let i = 0; i < s.length; i++) {
    if (['(', '[', '{'].includes(s[i])) {
      stack.push(openBrackets[s[i]]);
    } else {
      if (openBrackets[s[i]] !== stack[stack.length - 1]) {
        return false;
      }
      stack.pop();
    }
  }
  return stack.length === 0;
};
