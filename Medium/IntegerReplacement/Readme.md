## Given a positive integer n, you can apply one of the following operations: <br> <br> 
If n is even, replace n with n / 2. <br> 
If n is odd, replace n with either n + 1 or n - 1. <br> 
Return the minimum number of operations needed for n to become 1. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 8 <br> 
Output: 3 <br> 
Explanation: 8 -> 4 -> 2 -> 1 <br> 
Example 2: <br> <br> 
Input: n = 7 <br> 
Output: 4 <br> 
Explanation: 7 -> 8 -> 4 -> 2 -> 1 <br> 
or 7 -> 6 -> 3 -> 2 -> 1 <br> 
Example 3: <br> <br> 
Input: n = 4 <br> 
Output: 2 <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 231 - 1 <br> 
