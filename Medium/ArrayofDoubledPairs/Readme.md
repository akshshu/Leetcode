## Given an array of integers arr of even length, return true if and only if it is possible to reorder it such that arr[2 * i + 1] = 2 * arr[2 * i] for every 0 <= i < len(arr) / 2. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [3,1,3,6] <br> 
Output: false <br> 
Example 2: <br> <br> 
Input: arr = [2,1,2,6] <br> 
Output: false <br> 
Example 3: <br> <br> 
Input: arr = [4,-2,2,-4] <br> 
Output: true <br> 
Explanation: We can take two groups, [-2,-4] and [2,4] to form [-2,-4,2,4] or [2,4,-2,-4]. <br> 
Example 4: <br> <br> 
Input: arr = [1,2,4,16,8,4] <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
0 <= arr.length <= 3 * 104 <br> 
arr.length is even. <br> 
-105 <= arr[i] <= 105 <br> 
