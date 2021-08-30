## Given a binary array nums, you should delete one element from it. <br> <br> 
Return the size of the longest non-empty subarray containing only 1's in the resulting array. <br> <br> 
Return 0 if there is no such subarray. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,1,0,1] <br> 
Output: 3 <br> 
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's. <br> 
Example 2: <br> <br> 
Input: nums = [0,1,1,1,0,1,1,0,1] <br> 
Output: 5 <br> 
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1]. <br> 
Example 3: <br> <br> 
Input: nums = [1,1,1] <br> 
Output: 2 <br> 
Explanation: You must delete one element. <br> 
Example 4: <br> <br> 
Input: nums = [1,1,0,0,1,1,1,0,1] <br> 
Output: 4 <br> 
Example 5: <br> <br> 
Input: nums = [0,0,0] <br> 
Output: 0 <br> 
