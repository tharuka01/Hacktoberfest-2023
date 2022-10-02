/**
 * Best sum is a classic dynamic programming problem which aims to solve
 * for the best way to get target number from a given set of numbers.
 *
 * For example what is the best way to get a sum 8 using numbers [1, 2, 3].
 * Here 8 can be generated in many ways ([2, 2, 2, 2], [2, 3, 3], etc...)
 * Out of which [2, 3, 3] is the optimal solution.
 *
 * Similarly we can use this to solve coin change problem.
 * from given set of coins find optimal way to get desired sum.
 */

const bestSum = (target, bank, memo = {}) => {
  if (target in memo) return memo[target];
  if (target === 0) return [];
  if (target < 0) return null;

  let shortestComb = null;

  for (const num of bank) {
    const rem = target - num;
    const possibility = bestSum(rem, bank, memo);
    if (possibility !== null) {
      const combination = [...possibility, num];
      if (shortestComb === null || combination.length < shortestComb.length) {
        shortestComb = combination;
      }
    }
  }

  memo[target] = shortestComb;
  return shortestComb;
};

console.log(bestSum(98, [1, 2, 5, 10, 20, 100]));
