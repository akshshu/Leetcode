## Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become: <br> <br> 
[4,5,6,7,0,1,2] if it was rotated 4 times. <br> 
[0,1,2,4,5,6,7] if it was rotated 7 times. <br> 
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]]. <br> <br> 
Given the sorted rotated array nums of unique elements, return the minimum element of this array. <br> <br> 
You must write an algorithm that runs in O(log n) time. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [3,4,5,1,2] <br> 
Output: 1 <br> 
Explanation: The original array was [1,2,3,4,5] rotated 3 times. <br> 
Example 2: <br> <br> 
Input: nums = [4,5,6,7,0,1,2] <br> 
Output: 0 <br> 
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times. <br> 
Example 3: <br> <br> 
Input: nums = [11,13,15,17] <br> 
Output: 11 <br> 
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. <br> <br> <br> 
Constraints: <br> <br> 
n == nums.length <br> 
1 <= n <= 5000 <br> 
-5000 <= nums[i] <= 5000 <br> 
All the integers of nums are unique. <br> 
nums is sorted and rotated between 1 and n times. <br> 
