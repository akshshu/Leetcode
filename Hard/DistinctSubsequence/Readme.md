## Given two strings s and t, return the number of distinct subsequences of s which equals t. <br> <br> 
A string's subsequence is a new string formed from the original string by deleting some (can be none) of the characters without disturbing the remaining characters' relative positions. (i.e., "ACE" is a subsequence of "ABCDE" while "AEC" is not). <br> <br> 
It is guaranteed the answer fits on a 32-bit signed integer. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "rabbbit", t = "rabbit" <br> 
Output: 3 <br> 
Explanation: <br> 
As shown below, there are 3 ways you can generate "rabbit" from S. <br> 
rabbbit <br> 
rabbbit <br> 
rabbbit <br> 
Example 2: <br> <br> 
Input: s = "babgbag", t = "bag" <br> 
Output: 5 <br> 
Explanation: <br> 
As shown below, there are 5 ways you can generate "bag" from S. <br> 
babgbag <br> 
babgbag <br> 
babgbag <br> 
babgbag <br> 
babgbag <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length, t.length <= 1000 <br> 
s and t consist of English letters. <br> 
