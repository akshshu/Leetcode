## You are given an array prices where prices[i] is the price of a given stock on the ith day. <br> <br> 
Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions: <br> <br> 
After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day). <br> 
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again). <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: prices = [1,2,3,0,2] <br> 
Output: 3 <br> 
Explanation: transactions = [buy, sell, cooldown, buy, sell] <br> 
Example 2: <br> <br> 
Input: prices = [1] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= prices.length <= 5000 <br> 
0 <= prices[i] <= 1000 <br> 
