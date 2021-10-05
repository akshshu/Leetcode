## The frequency of an element is the number of times it occurs in an array. <br> <br> 
You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1. <br> <br> 
Return the maximum possible frequency of an element after performing at most k operations. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [1,2,4], k = 5 <br> 
Output: 3 <br> 
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4]. <br> 
4 has a frequency of 3. <br> 
Example 2: <br> <br> 
Input: nums = [1,4,8,13], k = 5 <br> 
Output: 2 <br> 
Explanation: There are multiple optimal solutions: <br> 
- Increment the first element three times to make nums = [4,4,8,13]. 4 has a frequency of 2. <br> 
- Increment the second element four times to make nums = [1,8,8,13]. 8 has a frequency of 2. <br> 
- Increment the third element five times to make nums = [1,4,13,13]. 13 has a frequency of 2. <br> 
Example 3: <br> <br> 
Input: nums = [3,9,6], k = 2 <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 105 <br> 
1 <= nums[i] <= 105 <br> 
1 <= k <= 105 <br> 
