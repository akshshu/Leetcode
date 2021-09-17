## The min-product of an array is equal to the minimum value in the array multiplied by the array's sum. <br> <br> 
For example, the array [3,2,5] (minimum value is 2) has a min-product of 2 * (3+2+5) = 2 * 10 = 20. <br> 
Given an array of integers nums, return the maximum min-product of any non-empty subarray of nums. Since the answer may be large, return it modulo 109 + 7. <br> <br> 
Note that the min-product should be maximized before performing the modulo operation. Testcases are generated such that the maximum min-product without modulo will fit in a 64-bit signed integer. <br> <br> 
A subarray is a contiguous part of an array. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3,2] <br> 
Output: 14 <br> 
Explanation: The maximum min-product is achieved with the subarray [2,3,2] (minimum value is 2). <br> 
2 * (2+3+2) = 2 * 7 = 14. <br> 
Example 2: <br> <br> 
Input: nums = [2,3,3,1,2] <br> 
Output: 18 <br> 
Explanation: The maximum min-product is achieved with the subarray [3,3] (minimum value is 3). <br> 
3 * (3+3) = 3 * 6 = 18. <br> 
Example 3: <br> <br> 
Input: nums = [3,1,5,6,4,2] <br> 
Output: 60 <br> 
Explanation: The maximum min-product is achieved with the subarray [5,6,4] (minimum value is 4). <br> 
4 * (5+6+4) = 4 * 15 = 60. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 105 <br> 
1 <= nums[i] <= 107 <br> 
Accepted <br> 
