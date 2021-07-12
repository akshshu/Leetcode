## There are 3n piles of coins of varying size, you and your friends will take piles of coins as follows: <br> <br> 
In each step, you will choose any 3 piles of coins (not necessarily consecutive). <br> 
Of your choice, Alice will pick the pile with the maximum number of coins. <br> 
You will pick the next pile with maximum number of coins. <br> 
Your friend Bob will pick the last pile. <br> 
Repeat until there are no more piles of coins. <br> 
Given an array of integers piles where piles[i] is the number of coins in the ith pile. <br> <br> 
Return the maximum number of coins which you can have. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: piles = [2,4,1,2,7,8] <br> 
Output: 9 <br> 
Explanation: Choose the triplet (2, 7, 8), Alice Pick the pile with 8 coins, you the pile with 7 coins and Bob the last one. <br> 
Choose the triplet (1, 2, 4), Alice Pick the pile with 4 coins, you the pile with 2 coins and Bob the last one. <br> 
The maximum number of coins which you can have are: 7 + 2 = 9. <br> 
On the other hand if we choose this arrangement (1, 2, 8), (2, 4, 7) you only get 2 + 4 = 6 coins which is not optimal. <br> 
Example 2: <br> <br> 
Input: piles = [2,4,5] <br> 
Output: 4 <br> 
Example 3: <br> <br> 
Input: piles = [9,8,7,6,5,1,2,3,4] <br> 
Output: 18 <br> <br> <br> 
Constraints: <br> <br> 
3 <= piles.length <= 10^5 <br> 
piles.length % 3 == 0 <br> 
1 <= piles[i] <= 10^4 <br> 
