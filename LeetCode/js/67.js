/**
 * https://leetcode.com/problems/add-binary/
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
  while (a.length < b.length) {
    a = '0' + a;
  }
  while (b.length < a.length) {
    b = '0' + b;
  }

  let sum = '';
  let carry = '0';
  let i = a.length - 1;

  while (i >= 0) {
    if (a[i] === '1' && b[i] === '1') {
      if (carry === '1') {
        sum = '1' + sum;
      } else {
        sum = '0' + sum;
      }
      carry = '1';
    } else if (a[i] === '0' && b[i] === '0') {
      if (carry === '1') {
        sum = '1' + sum;
        carry = 0;
      } else {
        sum = '0' + sum;
      }
    } else {
      if (carry === '1') {
        sum = '0' + sum;
      } else {
        sum = '1' + sum;
      }
    }
    i--;
  }
  if (carry === '1') {
    sum = '1' + sum;
  }
  return sum;
};
