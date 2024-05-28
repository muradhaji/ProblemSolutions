/**
 * https://leetcode.com/problems/sqrtx/
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
  let i = 1;
  while (i * i <= x) {
    i++;
  }
  return i - 1;
};
