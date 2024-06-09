/**
 * https://leetcode.com/problems/memoize/
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
  this.cache = {};
  return function (...args) {
    let cacheKey = JSON.stringify(args);
    if (this.cache[cacheKey] != undefined) {
      return this.cache[cacheKey];
    }
    let answer = fn(...args);
    this.cache[cacheKey] = answer;
    return answer;
  };
}
