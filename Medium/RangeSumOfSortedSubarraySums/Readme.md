## You are given the array nums consisting of n positive integers. You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, creating a new array of n * (n + 1) / 2 numbers. <br> <br> 
Return the sum of the numbers from index left to index right (indexed from 1), inclusive, in the new array. Since the answer can be a huge number return it modulo 109 + 7. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3,4], n = 4, left = 1, right = 5 <br> 
Output: 13 <br> 
Explanation: All subarray sums are 1, 3, 6, 10, 2, 5, 9, 3, 7, 4. After sorting them in non-decreasing order we have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 1 to ri = 5 is 1 + 2 + 3 + 3 + 4 = 13. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,3,4], n = 4, left = 3, right = 4 <br> 
Output: 6 <br> 
Explanation: The given array is the same as example 1. We have the new array [1, 2, 3, 3, 4, 5, 6, 7, 9, 10]. The sum of the numbers from index le = 3 to ri = 4 is 3 + 3 = 6. <br> 
Example 3: <br> <br> 
Input: nums = [1,2,3,4], n = 4, left = 1, right = 10 <br> 
Output: 50 <br> <br> <br> 
Constraints: <br> <br> 
n == nums.length <br> 
1 <= nums.length <= 1000 <br> 
1 <= nums[i] <= 100 <br> 
1 <= left <= right <= n * (n + 1) / 2 <br> 
