## Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true: <br> <br> 
perm[i] is divisible by i. <br> 
i is divisible by perm[i]. <br> 
Given an integer n, return the number of the beautiful arrangements that you can construct. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 2 <br> 
Output: 2 <br> 
Explanation: <br> 
The first beautiful arrangement is [1,2]: <br> 
    - perm[1] = 1 is divisible by i = 1 <br> 
    - perm[2] = 2 is divisible by i = 2 <br> 
The second beautiful arrangement is [2,1]: <br> 
    - perm[1] = 2 is divisible by i = 1 <br> 
    - i = 2 is divisible by perm[2] = 1 <br> 
Example 2: <br> <br> 
Input: n = 1 <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 15 <br> 
