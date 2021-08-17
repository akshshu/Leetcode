## Given an integer array nums and two integers firstLen and secondLen, return the maximum sum of elements in two non-overlapping subarrays with lengths firstLen and secondLen. <br> <br> 
The array with length firstLen could occur before or after the array with length secondLen, but they have to be non-overlapping. <br> <br> 
A subarray is a contiguous part of an array. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [0,6,5,2,2,5,1,9,4], firstLen = 1, secondLen = 2 <br> 
Output: 20 <br> 
Explanation: One choice of subarrays is [9] with length 1, and [6,5] with length 2. <br> 
Example 2: <br> <br> 
Input: nums = [3,8,1,3,2,1,8,9,0], firstLen = 3, secondLen = 2 <br> 
Output: 29 <br> 
Explanation: One choice of subarrays is [3,8,1] with length 3, and [8,9] with length 2. <br> 
Example 3: <br> <br> 
Input: nums = [2,1,5,6,0,9,5,0,3,8], firstLen = 4, secondLen = 3 <br> 
Output: 31 <br> 
Explanation: One choice of subarrays is [5,6,0,9] with length 4, and [3,8] with length 3. <br> <br> <br> 
Constraints: <br> <br> 
1 <= firstLen, secondLen <= 1000 <br> 
2 <= firstLen + secondLen <= 1000 <br> 
firstLen + secondLen <= nums.length <= 1000 <br> 
0 <= nums[i] <= 1000 <br> 
