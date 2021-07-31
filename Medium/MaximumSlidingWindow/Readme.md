## You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. <br> <br> 
Return the max sliding window. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3 <br> 
Output: [3,3,5,5,6,7] <br> 
Explanation: <br> 
Window position                Max <br> 
---------------               ----- <br> 
[1  3  -1] -3  5  3  6  7       3 <br> 
 1 [3  -1  -3] 5  3  6  7       3 <br> 
 1  3 [-1  -3  5] 3  6  7       5 <br> 
 1  3  -1 [-3  5  3] 6  7       5 <br> 
 1  3  -1  -3 [5  3  6] 7       6 <br> 
 1  3  -1  -3  5 [3  6  7]      7 <br> 
Example 2: <br> <br> 
Input: nums = [1], k = 1 <br> 
Output: [1] <br> 
Example 3: <br> <br> 
Input: nums = [1,-1], k = 1 <br> 
Output: [1,-1] <br> 
Example 4: <br> <br> 
Input: nums = [9,11], k = 2 <br> 
Output: [11] <br> 
Example 5: <br> <br> 
Input: nums = [4,-2], k = 2 <br> 
Output: [4] <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 105 <br> 
-104 <= nums[i] <= 104 <br> 
1 <= k <= nums.length <br> 
