## The Hamming distance between two integers is the number of positions at which the corresponding bits are different. <br> <br> 
Given an integer array nums, return the sum of Hamming distances between all the pairs of the integers in nums. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums = [4,14,2] <br> 
Output: 6 <br> 
Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just <br> 
showing the four bits relevant in this case). <br> 
The answer will be: <br> 
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6. <br> 
Example 2: <br> <br> 
Input: nums = [4,14,4] <br> 
Output: 4 <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 104 <br> 
0 <= nums[i] <= 109 <br> 
The answer for the given input will fit in a 32-bit integer. <br> 
