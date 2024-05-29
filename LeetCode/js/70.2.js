/**
 * https://leetcode.com/problems/climbing-stairs/
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  return n < 0 ? 0 : n === 0 ? 1 : climbStairs(n - 1) + climbStairs(n - 2);
};
