## You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times. <br> <br> 
Return the length of the longest substring containing the same letter you can get after performing the above operations. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "ABAB", k = 2 <br> 
Output: 4 <br> 
Explanation: Replace the two 'A's with two 'B's or vice versa. <br> 
Example 2: <br> <br> 
Input: s = "AABABBA", k = 1 <br> 
Output: 4 <br> 
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA". <br> 
The substring "BBBB" has the longest repeating letters, which is 4. <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 105 <br> 
s consists of only uppercase English letters. <br> 
0 <= k <= s.length <br> 
