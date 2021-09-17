## A ramp in an integer array nums is a pair (i, j) for which i < j and nums[i] <= nums[j]. The width of such a ramp is j - i. <br> <br> 
Given an integer array nums, return the maximum width of a ramp in nums. If there is no ramp in nums, return 0. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [6,0,8,2,1,5] <br> 
Output: 4 <br> 
Explanation: The maximum width ramp is achieved at (i, j) = (1, 5): nums[1] = 0 and nums[5] = 5. <br> 
Example 2: <br> <br> 
Input: nums = [9,8,1,0,1,9,4,0,4,1] <br> 
Output: 7 <br> 
Explanation: The maximum width ramp is achieved at (i, j) = (2, 9): nums[2] = 1 and nums[9] = 1. <br> <br> <br> 
Constraints: <br> <br> 
2 <= nums.length <= 5 * 104 <br> 
0 <= nums[i] <= 5 * 104 <br> 
