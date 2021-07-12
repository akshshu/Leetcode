## A message containing letters from A-Z can be encoded into numbers using the following mapping: <br> <br> 
'A' -> "1" <br> 
'B' -> "2" <br> 
... <br> 
'Z' -> "26" <br> 
To decode an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, "11106" can be mapped into: <br> <br> 
"AAJF" with the grouping (1 1 10 6) <br> 
"KJF" with the grouping (11 10 6) <br> 
Note that the grouping (1 11 06) is invalid because "06" cannot be mapped into 'F' since "6" is different from "06". <br> <br> 
Given a string s containing only digits, return the number of ways to decode it. <br> <br> 
The answer is guaranteed to fit in a 32-bit integer. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "12" <br> 
Output: 2 <br> 
Explanation: "12" could be decoded as "AB" (1 2) or "L" (12). <br> 
Example 2: <br> <br> 
Input: s = "226" <br> 
Output: 3 <br> 
Explanation: "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6). <br> 
Example 3: <br> <br> 
Input: s = "0" <br> 
Output: 0 <br> 
Explanation: There is no character that is mapped to a number starting with 0. <br> 
The only valid mappings with 0 are 'J' -> "10" and 'T' -> "20", neither of which start with 0. <br> 
Hence, there are no valid ways to decode this since all digits need to be mapped. <br> 
Example 4: <br> <br> 
Input: s = "06" <br> 
Output: 0 <br> 
Explanation: "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06"). <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 100 <br> 
s contains only digits and may contain leading zero(s). <br> 
