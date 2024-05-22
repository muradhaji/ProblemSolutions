/**
 * https://leetcode.com/problems/roman-to-integer/
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  s = 'B' + s;
  s = s + 'E';

  let values = {
    E: 0,
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };

  let sum = 0;
  let last = 'E';
  for (let i = s.length - 2; i >= 1; i--) {
    if (values[s[i]] > values[last]) {
      sum += values[s[i]];
    } else {
      sum -= values[s[i]];
    }
    if (s[i] !== last && s[i] !== s[i - 1]) {
      last = s[i];
    }
  }

  return sum;
};
