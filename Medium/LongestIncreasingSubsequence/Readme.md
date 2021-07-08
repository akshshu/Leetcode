## Given an integer array nums, return the length of the longest strictly increasing subsequence. <br> <br> 
A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7]. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [10,9,2,5,3,7,101,18] <br> 
Output: 4 <br> 
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. <br> 
Example 2: <br> <br> 
Input: nums = [0,1,0,3,2,3] <br> 
Output: 4 <br> 
Example 3: <br> <br> 
Input: nums = [7,7,7,7,7,7,7] <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 2500 <br> 
-104 <= nums[i] <= 104 <br> <br> <br> 
Follow up: Can you come up with an algorithm that runs in O(n log(n)) time complexity? <br> 
