## You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money. <br> <br> 
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1. <br> <br> 
You may assume that you have an infinite number of each kind of coin. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: coins = [1,2,5], amount = 11 <br> 
Output: 3 <br> 
Explanation: 11 = 5 + 5 + 1 <br> 
Example 2: <br> <br> 
Input: coins = [2], amount = 3 <br> 
Output: -1 <br> 
Example 3: <br> <br> 
Input: coins = [1], amount = 0 <br> 
Output: 0 <br> 
Example 4: <br> <br> 
Input: coins = [1], amount = 1 <br> 
Output: 1 <br> 
Example 5: <br> <br> 
Input: coins = [1], amount = 2 <br> 
Output: 2 <br> <br> <br> 
Constraints: <br> <br> 
1 <= coins.length <= 12 <br> 
1 <= coins[i] <= 231 - 1 <br> 
0 <= amount <= 104 <br> 
