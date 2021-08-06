## Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: target = 7, nums = [2,3,1,2,4,3] <br> 
Output: 2 <br> 
Explanation: The subarray [4,3] has the minimal length under the problem constraint. <br> 
Example 2: <br> <br> 
Input: target = 4, nums = [1,4,4] <br> 
Output: 1 <br> 
Example 3: <br> <br> 
Input: target = 11, nums = [1,1,1,1,1,1,1,1] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= target <= 109 <br> 
1 <= nums.length <= 105 <br> 
1 <= nums[i] <= 105 <br> <br> <br> 
Follow up: If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log(n)). <br> 
