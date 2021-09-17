## Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [3,1,2,4] <br> 
Output: 17 <br> 
Explanation: <br> 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. <br> 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1. <br> 
Sum is 17. <br> 
Example 2: <br> <br> 
Input: arr = [11,81,94,43,3] <br> 
Output: 444 <br> <br> <br> 
Constraints: <br> <br> 
1 <= arr.length <= 3 * 104 <br> 
1 <= arr[i] <= 3 * 104 <br> 
