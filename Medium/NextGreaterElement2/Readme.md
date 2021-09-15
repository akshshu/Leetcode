## Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums. <br> <br> 
The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,1] <br> 
Output: [2,-1,2] <br> 
Explanation: The first 1's next greater number is 2; <br> 
The number 2 can't find next greater number. <br> 
The second 1's next greater number needs to search circularly, which is also 2. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,3,4,3] <br> 
Output: [2,3,4,-1,4] <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 104 <br> 
-109 <= nums[i] <= 109 <br> 
