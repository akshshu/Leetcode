## Given an unsorted array of integers nums, return the length of the longest continuous increasing subsequence (i.e. subarray). The subsequence must be strictly increasing. <br> <br> 
A continuous increasing subsequence is defined by two indices l and r (l < r) such that it is [nums[l], nums[l + 1], ..., nums[r - 1], nums[r]] and for each l <= i < r, nums[i] < nums[i + 1]. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,3,5,4,7] <br> 
Output: 3 <br> 
Explanation: The longest continuous increasing subsequence is [1,3,5] with length 3. <br> 
Even though [1,3,5,7] is an increasing subsequence, it is not continuous as elements 5 and 7 are separated by element <br> 
4. <br> 
Example 2: <br> <br> 
Input: nums = [2,2,2,2,2] <br> 
Output: 1 <br> 
Explanation: The longest continuous increasing subsequence is [2] with length 1. Note that it must be strictly <br> 
increasing. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 104 <br> 
-109 <= nums[i] <= 109 <br> 
