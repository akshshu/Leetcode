## Given an integer array nums, return the number of all the arithmetic subsequences of nums. <br> <br> 
A sequence of numbers is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same. <br> <br> 
For example, [1, 3, 5, 7, 9], [7, 7, 7, 7], and [3, -1, -5, -9] are arithmetic sequences. <br> 
For example, [1, 1, 2, 5, 7] is not an arithmetic sequence. <br> 
A subsequence of an array is a sequence that can be formed by removing some elements (possibly none) of the array. <br> <br> 
For example, [2,5,10] is a subsequence of [1,2,1,2,4,1,5,10]. <br> 
The test cases are generated so that the answer fits in 32-bit integer. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [2,4,6,8,10] <br> 
Output: 7 <br> 
Explanation: All arithmetic subsequence slices are: <br> 
[2,4,6] <br> 
[4,6,8] <br> 
[6,8,10] <br> 
[2,4,6,8] <br> 
[4,6,8,10] <br> 
[2,4,6,8,10] <br> 
[2,6,10] <br> 
Example 2: <br> <br> 
Input: nums = [7,7,7,7,7] <br> 
Output: 16 <br> 
Explanation: Any subsequence of this array is arithmetic. <br> <br> <br> 
Constraints: <br> <br> 
1  <= nums.length <= 1000 <br> 
-231 <= nums[i] <= 231 - 1 <br> 
