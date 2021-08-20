## You are given a 0-indexed integer array nums and an integer k. <br> <br> 
You are initially standing at index 0. In one move, you can jump at most k steps forward without going outside the boundaries of the array. That is, you can jump from index i to any index in the range [i + 1, min(n - 1, i + k)] inclusive. <br> <br> 
You want to reach the last index of the array (index n - 1). Your score is the sum of all nums[j] for each index j you visited in the array. <br> <br> 
Return the maximum score you can get. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,-1,-2,4,-7,3], k = 2 <br> 
Output: 7 <br> 
Explanation: You can choose your jumps forming the subsequence [1,-1,4,3] (underlined above). The sum is 7. <br> 
Example 2: <br> <br> 
Input: nums = [10,-5,-2,4,0,3], k = 3 <br> 
Output: 17 <br> 
Explanation: You can choose your jumps forming the subsequence [10,4,3] (underlined above). The sum is 17. <br> 
Example 3: <br> <br> 
Input: nums = [1,-5,-20,4,-1,3,-6,-3], k = 2 <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length, k <= 105 <br> 
-104 <= nums[i] <= 104 <br> 
