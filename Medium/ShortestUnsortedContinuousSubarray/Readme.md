## Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order. <br> <br> 
Return the shortest such subarray and output its length. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [2,6,4,8,10,9,15] <br> 
Output: 5 <br> 
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,3,4] <br> 
Output: 0 <br> 
Example 3: <br> <br> 
Input: nums = [1] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 104 <br> 
-105 <= nums[i] <= 105 <br> <br> <br> 
Follow up: Can you solve it in O(n) time complexity? <br> 
