## Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product. <br> <br> 
It is guaranteed that the answer will fit in a 32-bit integer. <br> <br> 
A subarray is a contiguous subsequence of the array. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [2,3,-2,4] <br> 
Output: 6 <br> 
Explanation: [2,3] has the largest product 6. <br> 
Example 2: <br> <br> 
Input: nums = [-2,0,-1] <br> 
Output: 0 <br> 
Explanation: The result cannot be 2, because [-2,-1] is not a subarray. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 2 * 104 <br> 
-10 <= nums[i] <= 10 <br> 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. <br> 
