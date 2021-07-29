## iven an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j]. <br> <br> 
Return true if there is a 132 pattern in nums, otherwise, return false. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3,4] <br> 
Output: false <br> 
Explanation: There is no 132 pattern in the sequence. <br> 
Example 2: <br> <br> 
Input: nums = [3,1,4,2] <br> 
Output: true <br> 
Explanation: There is a 132 pattern in the sequence: [1, 4, 2]. <br> 
Example 3: <br> <br> 
Input: nums = [-1,3,2,0] <br> 
Output: true <br> 
Explanation: There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0]. <br> <br> <br> 
Constraints: <br> <br> 
n == nums.length <br> 
1 <= n <= 2 * 105 <br> 
-109 <= nums[i] <= 109 <br> 
