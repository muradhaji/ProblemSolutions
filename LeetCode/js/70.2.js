/**
 * https://leetcode.com/problems/climbing-stairs/
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  return n <= 2 ? n : climbStairs(n - 1) + climbStairs(n - 2);
};
