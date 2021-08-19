## We have an array arr of non-negative integers. <br> <br> 
For every (contiguous) subarray sub = [arr[i], arr[i + 1], ..., arr[j]] (with i <= j), we take the bitwise OR of all the elements in sub, obtaining a result arr[i] | arr[i + 1] | ... | arr[j]. <br> <br> 
Return the number of possible results. Results that occur more than once are only counted once in the final answer <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [0] <br> 
Output: 1 <br> 
Explanation: There is only one possible result: 0. <br> 
Example 2: <br> <br> 
Input: arr = [1,1,2] <br> 
Output: 3 <br> 
Explanation: The possible subarrays are [1], [1], [2], [1, 1], [1, 2], [1, 1, 2]. <br> 
These yield the results 1, 1, 2, 1, 3, 3. <br> 
There are 3 unique values, so the answer is 3. <br> 
Example 3: <br> <br> 
Input: arr = [1,2,4] <br> 
Output: 6 <br> 
Explanation: The possible results are 1, 2, 3, 4, 6, and 7. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 5 * 104 <br> 
0 <= nums[i] <= 109 <br> 
