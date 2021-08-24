## Given an integer array nums, return the maximum result of nums[i] XOR nums[j], where 0 <= i <= j < n. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [3,10,5,25,2,8] <br> 
Output: 28 <br> 
Explanation: The maximum result is 5 XOR 25 = 28. <br> 
Example 2: <br> <br> 
Input: nums = [0] <br> 
Output: 0 <br> 
Example 3: <br> <br> 
Input: nums = [2,4] <br> 
Output: 6 <br> 
Example 4: <br> <br> 
Input: nums = [8,10,2] <br> 
Output: 10 <br> 
Example 5: <br> <br> 
Input: nums = [14,70,53,83,49,91,36,80,92,51,66,70] <br> 
Output: 127 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 2 * 105 <br> 
0 <= nums[i] <= 231 - 1 <br> 
