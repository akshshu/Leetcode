## You are given an integer array nums and an array queries where queries[i] = [vali, indexi]. <br> <br> 
For each query i, first, apply nums[indexi] = nums[indexi] + vali, then print the sum of the even values of nums. <br> <br> 
Return an integer array answer where answer[i] is the answer to the ith query. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]] <br> 
Output: [8,6,2,4] <br> 
Explanation: At the beginning, the array is [1,2,3,4]. <br> 
After adding 1 to nums[0], the array is [2,2,3,4], and the sum of even values is 2 + 2 + 4 = 8. <br> 
After adding -3 to nums[1], the array is [2,-1,3,4], and the sum of even values is 2 + 4 = 6. <br> 
After adding -4 to nums[0], the array is [-2,-1,3,4], and the sum of even values is -2 + 4 = 2. <br> 
After adding 2 to nums[3], the array is [-2,-1,3,6], and the sum of even values is -2 + 6 = 4. <br> 
Example 2: <br> <br> 
Input: nums = [1], queries = [[4,0]] <br> 
Output: [0] <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 104 <br> 
-104 <= nums[i] <= 104 <br> 
1 <= queries.length <= 104 <br> 
-104 <= vali <= 104 <br> 
0 <= indexi < nums.length <br> 
