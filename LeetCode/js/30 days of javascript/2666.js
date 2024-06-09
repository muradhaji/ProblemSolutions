/**
 * https://leetcode.com/problems/allow-one-function-call/
 * @param {Function} fn
 * @return {Function}
 */
var once = function (fn) {
  this.called = false;
  return function (...args) {
    if (this.called) {
      return;
    }
    this.called = true;
    return fn(...args);
  };
};
