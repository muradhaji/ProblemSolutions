/**
 * https://leetcode.com/problems/add-two-promises/
 * @param {Promise} promise1
 * @param {Promise} promise2
 * @return {Promise}
 */
var addTwoPromises = async function (promise1, promise2) {
  let answer1 = await promise1;
  let answer2 = await promise2;
  return new Promise((resolve) => {
    resolve(answer1 + answer2);
  });
};
