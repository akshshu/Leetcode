## Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. <br> <br> 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. <br> <br> 
You must write an algorithm that runs in O(n) time and without using the division operation. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3,4] <br> 
Output: [24,12,8,6] <br> 
Example 2: <br> <br> 
Input: nums = [-1,1,0,-3,3] <br> 
Output: [0,0,9,0,0] <br> <br> <br> 
Constraints: <br> <br> 
2 <= nums.length <= 105 <br> 
-30 <= nums[i] <= 30 <br> 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. <br> <br> <br> 
Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.) <br> 
