## You may recall that an array arr is a mountain array if and only if: <br> <br> 
arr.length >= 3 <br> 
There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that: <br> 
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] <br> 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1] <br> 
Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [2,1,4,7,3,2,5] <br> 
Output: 5 <br> 
Explanation: The largest mountain is [1,4,7,3,2] which has length 5. <br> 
Example 2: <br> <br> 
Input: arr = [2,2,2] <br> 
Output: 0 <br> 
Explanation: There is no mountain. <br> <br> <br> 
Constraints: <br> <br> 
1 <= arr.length <= 104 <br> 
0 <= arr[i] <= 104 <br> <br> <br> 
Follow up: <br> <br> 
Can you solve it using only one pass? <br> 
Can you solve it in O(1) space? <br> 
