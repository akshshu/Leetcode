## You are given an integer array nums. The absolute sum of a subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr). <br> <br> 
Return the maximum absolute sum of any (possibly empty) subarray of nums. <br> <br> 
Note that abs(x) is defined as follows: <br> <br> 
If x is a negative integer, then abs(x) = -x. <br> 
If x is a non-negative integer, then abs(x) = x. <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,-3,2,3,-4] <br> 
Output: 5 <br> 
Explanation: The subarray [2,3] has absolute sum = abs(2+3) = abs(5) = 5. <br> 
Example 2: <br> <br> 
Input: nums = [2,-5,1,-4,3,-2] <br> 
Output: 8 <br> 
Explanation: The subarray [-5,1,-4] has absolute sum = abs(-5+1-4) = abs(-8) = 8. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 105 <br> 
-104 <= nums[i] <= 104 <br> 
