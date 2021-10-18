## Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0. <br> <br> 
You must write an algorithm that runs in linear time and uses linear extra space. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [3,6,9,1] <br> 
Output: 3 <br> 
Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3. <br> 
Example 2: <br> <br> 
Input: nums = [10] <br> 
Output: 0 <br> 
Explanation: The array contains less than 2 elements, therefore return 0. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 105 <br> 
0 <= nums[i] <= 109 <br> 
