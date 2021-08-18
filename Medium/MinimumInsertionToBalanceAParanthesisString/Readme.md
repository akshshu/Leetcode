## Given a parentheses string s containing only the characters '(' and ')'. A parentheses string is balanced if: <br> <br> 
Any left parenthesis '(' must have a corresponding two consecutive right parenthesis '))'. <br> 
Left parenthesis '(' must go before the corresponding two consecutive right parenthesis '))'. <br> 
In other words, we treat '(' as openning parenthesis and '))' as closing parenthesis. <br> <br> 
For example, "())", "())(())))" and "(())())))" are balanced, ")()", "()))" and "(()))" are not balanced. <br> <br> 
You can insert the characters '(' and ')' at any position of the string to balance it if needed. <br> <br> 
Return the minimum number of insertions needed to make s balanced. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "(()))" <br> 
Output: 1 <br> 
Explanation: The second '(' has two matching '))', but the first '(' has only ')' matching. We need to to add one more ')' at the end of the string to be "(())))" which is balanced. <br> 
Example 2: <br> <br> 
Input: s = "())" <br> 
Output: 0 <br> 
Explanation: The string is already balanced. <br> 
Example 3: <br> <br> 
Input: s = "))())(" <br> 
Output: 3 <br> 
Explanation: Add '(' to match the first '))', Add '))' to match the last '('. <br> 
Example 4: <br> <br> 
Input: s = "((((((" <br> 
Output: 12 <br> 
Explanation: Add 12 ')' to balance the string. <br> 
Example 5: <br> <br> 
Input: s = ")))))))" <br> 
Output: 5 <br> 
Explanation: Add 4 '(' at the beginning of the string and one ')' at the end. The string becomes "(((())))))))". <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 10^5 <br> 
s consists of '(' and ')' only. <br> 
