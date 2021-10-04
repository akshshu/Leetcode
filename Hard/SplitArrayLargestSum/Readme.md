## Given an array nums which consists of non-negative integers and an integer m, you can split the array into m non-empty continuous subarrays. <br> <br> 
Write an algorithm to minimize the largest sum among these m subarrays. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [7,2,5,10,8], m = 2 <br> 
Output: 18 <br> 
Explanation: <br> 
There are four ways to split nums into two subarrays. <br> 
The best way is to split it into [7,2,5] and [10,8], <br> 
where the largest sum among the two subarrays is only 18. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,3,4,5], m = 2 <br> 
Output: 9 <br> 
Example 3: <br> <br> 
Input: nums = [1,4,4], m = 3 <br> 
Output: 4 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 1000 <br> 
0 <= nums[i] <= 106 <br> 
1 <= m <= min(50, nums.length) <br> 
