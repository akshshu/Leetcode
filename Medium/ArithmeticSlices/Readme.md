## An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same. <br> <br> 
For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences. <br> 
Given an integer array nums, return the number of arithmetic subarrays of nums. <br> <br> 
A subarray is a contiguous subsequence of the array. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3,4] <br> 
Output: 3 <br> 
Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself. <br> 
Example 2: <br> <br> 
Input: nums = [1] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 5000 <br> 
-1000 <= nums[i] <= 1000 <br> 
