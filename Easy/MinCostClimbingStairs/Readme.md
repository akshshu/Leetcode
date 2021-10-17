## You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps. <br> <br> 
You can either start from the step with index 0, or the step with index 1. <br> <br> 
Return the minimum cost to reach the top of the floor. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: cost = [10,15,20] <br> 
Output: 15 <br> 
Explanation: Cheapest is: start on cost[1], pay that cost, and go to the top. <br> 
Example 2: <br> <br> 
Input: cost = [1,100,1,1,1,100,1,1,100,1] <br> 
Output: 6 <br> 
Explanation: Cheapest is: start on cost[0], and only step on 1s, skipping cost[3]. <br> <br> <br> 
Constraints: <br> <br> 
2 <= cost.length <= 1000 <br> 
0 <= cost[i] <= 999 <br> 
