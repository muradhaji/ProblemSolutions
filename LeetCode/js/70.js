/**
 * https://leetcode.com/problems/climbing-stairs/
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  if (n <= 2) {
    return n;
  }

  let a = 1;
  let b = 2;
  let c = 0;

  while (n > 2) {
    c = a + b;
    a = b;
    b = c;
    n--;
  }
  return c;
};
