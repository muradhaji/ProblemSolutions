/**
 * https://leetcode.com/problems/timeout-cancellation/
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function (fn, args, t) {
  let timeoutId = setTimeout(() => {
    fn(...args);
  }, t);
  return function () {
    clearInterval(timeoutId);
  };
};
