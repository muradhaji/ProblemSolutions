/**
 * https://leetcode.com/problems/function-composition/
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function (functions) {
  return function (x) {
    let sum = 0;
    for (let i = functions.length - 1; i >= 0; i--) {
      x = functions[i](x);
      sum += x;
    }
    return x;
  };
};
