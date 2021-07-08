## Given a set of distinct positive integers nums, return the largest subset answer such that every pair (answer[i], answer[j]) of elements in this subset satisfies: <br> <br> 
answer[i] % answer[j] == 0, or <br> 
answer[j] % answer[i] == 0 <br> 
If there are multiple solutions, return any of them. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3] <br> 
Output: [1,2] <br> 
Explanation: [1,3] is also accepted. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,4,8] <br> 
Output: [1,2,4,8] <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 1000 <br> 
1 <= nums[i] <= 2 * 109 <br> 
All the integers in nums are unique. <br> 
