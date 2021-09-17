## Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: temperatures = [73,74,75,71,69,72,76,73] <br> 
Output: [1,1,4,2,1,1,0,0] <br> 
Example 2: <br> <br> 
Input: temperatures = [30,40,50,60] <br> 
Output: [1,1,1,0] <br> 
Example 3: <br> <br> 
Input: temperatures = [30,60,90] <br> 
Output: [1,1,0] <br> <br> <br> 
Constraints: <br> <br> 
1 <= temperatures.length <= 105 <br> 
30 <= temperatures[i] <= 100 <br> 
