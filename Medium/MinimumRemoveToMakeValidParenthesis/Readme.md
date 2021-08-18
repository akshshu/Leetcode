## Given a string s of '(' , ')' and lowercase English characters. <br> <br> 
Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string. <br> <br> 
Formally, a parentheses string is valid if and only if: <br> <br> 
It is the empty string, contains only lowercase characters, or <br> 
It can be written as AB (A concatenated with B), where A and B are valid strings, or <br> 
It can be written as (A), where A is a valid string. <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "lee(t(c)o)de)" <br> 
Output: "lee(t(c)o)de" <br> 
Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted. <br> 
Example 2: <br> <br> 
Input: s = "a)b(c)d" <br> 
Output: "ab(c)d" <br> 
Example 3: <br> <br> 
Input: s = "))((" <br> 
Output: "" <br> 
Explanation: An empty string is also valid. <br> 
Example 4: <br> <br> 
Input: s = "(a(b(c)d)" <br> 
Output: "a(b(c)d)" <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 10^5 <br> 
s[i] is one of  '(' , ')' and lowercase English letters. <br> 
