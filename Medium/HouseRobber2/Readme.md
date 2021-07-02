## You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night. <br> <br> 
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [2,3,2] <br> 
Output: 3 <br> 
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,3,1] <br> 
Output: 4 <br> 
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3). <br> 
Total amount you can rob = 1 + 3 = 4. <br> 
Example 3: <br> <br> 
Input: nums = [0] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 100 <br> 
0 <= nums[i] <= 1000 <br> 
