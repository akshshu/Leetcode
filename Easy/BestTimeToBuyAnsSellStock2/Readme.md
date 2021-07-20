## You are given an array prices where prices[i] is the price of a given stock on the ith day. <br> <br> 
Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times). <br> <br> 
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again). <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: prices = [7,1,5,3,6,4] <br> 
Output: 7 <br> 
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4. <br> 
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3. <br> 
Example 2: <br> <br> 
Input: prices = [1,2,3,4,5] <br> 
Output: 4 <br> 
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4. <br> 
Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are engaging multiple transactions at the same time. You must sell before buying again. <br> 
Example 3: <br> <br> 
Input: prices = [7,6,4,3,1] <br> 
Output: 0 <br> 
Explanation: In this case, no transaction is done, i.e., max profit = 0. <br> <br> <br> 
Constraints: <br> <br> 
1 <= prices.length <= 3 * 104 <br> 
0 <= prices[i] <= 104 <br> 
