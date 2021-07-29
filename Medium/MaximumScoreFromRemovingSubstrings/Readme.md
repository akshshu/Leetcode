## You are given a string s and two integers x and y. You can perform two types of operations any number of times. <br> <br> 
Remove substring "ab" and gain x points. <br> 
For example, when removing "ab" from "cabxbae" it becomes "cxbae". <br> 
Remove substring "ba" and gain y points. <br> 
For example, when removing "ba" from "cabxbae" it becomes "cabxe". <br> 
Return the maximum points you can gain after applying the above operations on s. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "cdbcbbaaabab", x = 4, y = 5 <br> 
Output: 19 <br> 
Explanation: <br> 
- Remove the "ba" underlined in "cdbcbbaaabab". Now, s = "cdbcbbaaab" and 5 points are added to the score. <br> 
- Remove the "ab" underlined in "cdbcbbaaab". Now, s = "cdbcbbaa" and 4 points are added to the score. <br> 
- Remove the "ba" underlined in "cdbcbbaa". Now, s = "cdbcba" and 5 points are added to the score. <br> 
- Remove the "ba" underlined in "cdbcba". Now, s = "cdbc" and 5 points are added to the score. <br> 
Total score = 5 + 4 + 5 + 5 = 19. <br> 
Example 2: <br> <br> 
Input: s = "aabbaaxybbaabb", x = 5, y = 4 <br> 
Output: 20 <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 105 <br> 
1 <= x, y <= 104 <br> 
s consists of lowercase English letters. <br> 
