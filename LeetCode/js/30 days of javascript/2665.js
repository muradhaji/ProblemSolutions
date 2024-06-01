/**
 * https://leetcode.com/problems/counter-ii/description/
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  this.value = init;
  return {
    value: init,
    increment: () => ++this.value,
    decrement: () => --this.value,
    reset: () => (this.value = init),
  };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
