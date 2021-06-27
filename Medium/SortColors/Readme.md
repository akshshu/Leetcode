## Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue. <br> <br> 
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively. <br> <br> 
You must solve this problem without using the library's sort function. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [2,0,2,1,1,0] <br> 
Output: [0,0,1,1,2,2] <br> 
Example 2: <br> <br> 
Input: nums = [2,0,1] <br> 
Output: [0,1,2] <br> 
Example 3: <br> <br> 
Input: nums = [0] <br> 
Output: [0] <br> 
Example 4: <br> <br> 
Input: nums = [1] <br> 
Output: [1] <br> <br> <br> 
Constraints: <br> <br> 
n == nums.length <br> 
1 <= n <= 300 <br> 
nums[i] is 0, 1, or 2 <br> 
