## Given two strings s1 and s2, return the lowest ASCII sum of deleted characters to make two strings equal. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s1 = "sea", s2 = "eat" <br> 
Output: 231 <br> 
Explanation: Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum. <br> 
Deleting "t" from "eat" adds 116 to the sum. <br> 
At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this. <br> 
Example 2: <br> <br> 
Input: s1 = "delete", s2 = "leet" <br> 
Output: 403 <br> 
Explanation: Deleting "dee" from "delete" to turn the string into "let", <br> 
adds 100[d] + 101[e] + 101[e] to the sum. <br> 
Deleting "e" from "leet" adds 101[e] to the sum. <br> 
At the end, both strings are equal to "let", and the answer is 100+101+101+101 = 403. <br> 
If instead we turned both strings into "lee" or "eet", we would get answers of 433 or 417, which are higher. <br> <br> <br> 
Constraints: <br> <br> 
1 <= s1.length, s2.length <= 1000 <br> 
s1 and s2 consist of lowercase English letters. <br> 
