## Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 2 <br> 
Output: [0,1,1] <br> 
Explanation: <br> 
0 --> 0 <br> 
1 --> 1 <br> 
2 --> 10 <br> 
Example 2: <br> <br> 
Input: n = 5 <br> 
Output: [0,1,1,2,1,2] <br> 
Explanation: <br> 
0 --> 0 <br> 
1 --> 1 <br> 
2 --> 10 <br> 
3 --> 11 <br> 
4 --> 100 <br> 
5 --> 101 <br> <br> <br> 
Constraints: <br> <br> 
0 <= n <= 105 <br> <br> <br> 
Follow up: <br> <br> 
It is very easy to come up with a solution with a runtime of O(n log n). Can you do it in linear time O(n) and possibly in a single pass? <br> 
Can you do it without using any built-in function (i.e., like __builtin_popcount in C++)? <br> 
