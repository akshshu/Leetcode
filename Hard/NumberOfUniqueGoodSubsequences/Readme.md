## You are given a binary string binary. A subsequence of binary is considered good if it is not empty and has no leading zeros (with the exception of "0"). <br> <br> 
Find the number of unique good subsequences of binary. <br> <br> 
For example, if binary = "001", then all the good subsequences are ["0", "0", "1"], so the unique good subsequences are "0" and "1". Note that subsequences "00", "01", and "001" are not good because they have leading zeros. <br> 
Return the number of unique good subsequences of binary. Since the answer may be very large, return it modulo 109 + 7. <br> <br> 
A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: binary = "001" <br> 
Output: 2 <br> 
Explanation: The good subsequences of binary are ["0", "0", "1"]. <br> 
The unique good subsequences are "0" and "1". <br> 
Example 2: <br> <br> 
Input: binary = "11" <br> 
Output: 2 <br> 
Explanation: The good subsequences of binary are ["1", "1", "11"]. <br> 
The unique good subsequences are "1" and "11". <br> 
Example 3: <br> <br> 
Input: binary = "101" <br> 
Output: 5 <br> 
Explanation: The good subsequences of binary are ["1", "0", "1", "10", "11", "101"]. <br> 
The unique good subsequences are "0", "1", "10", "11", and "101". <br> <br> <br> 
Constraints: <br> <br> 
1 <= binary.length <= 105 <br> 
binary consists of only '0's and '1's. <br> 
