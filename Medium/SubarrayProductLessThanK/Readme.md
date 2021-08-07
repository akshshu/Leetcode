## Given an array of integers nums and an integer k, return the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [10,5,2,6], k = 100 <br> 
Output: 8 <br> 
Explanation: The 8 subarrays that have product less than 100 are: <br> 
[10], [5], [2], [6], [10, 5], [5, 2], [2, 6], [5, 2, 6] <br> 
Note that [10, 5, 2] is not included as the product of 100 is not strictly less than k. <br> 
Example 2: <br> <br> 
Input: nums = [1,2,3], k = 0 <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 3 * 104 <br> 
1 <= nums[i] <= 1000 <br> 
0 <= k <= 106 <br> 
