## Given a string s, return the number of distinct non-empty subsequences of s. Since the answer may be very large, return it modulo 109 + 7. <br> <br> 
A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not. <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "abc" <br> 
Output: 7 <br> 
Explanation: The 7 distinct subsequences are "a", "b", "c", "ab", "ac", "bc", and "abc". <br> 
Example 2: <br> <br> 
Input: s = "aba" <br> 
Output: 6 <br> 
Explanation: The 6 distinct subsequences are "a", "b", "ab", "aa", "ba", and "aba". <br> 
Example 3: <br> <br> 
Input: s = "aaa" <br> 
Output: 3 <br> 
Explanation: The 3 distinct subsequences are "a", "aa" and "aaa". <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 2000 <br> 
s consists of lowercase English letters. <br> 
