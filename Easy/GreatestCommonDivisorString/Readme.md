## For two strings s and t, we say "t divides s" if and only if s = t + ... + t  (t concatenated with itself 1 or more times) <br> <br> 
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: str1 = "ABCABC", str2 = "ABC" <br> 
Output: "ABC" <br> 
Example 2: <br> <br> 
Input: str1 = "ABABAB", str2 = "ABAB" <br> 
Output: "AB" <br> 
Example 3: <br> <br> 
Input: str1 = "LEET", str2 = "CODE" <br> 
Output: "" <br> 
Example 4: <br> <br> 
Input: str1 = "ABCDEF", str2 = "ABC" <br> 
Output: "" <br> <br> <br> 
Constraints: <br> <br> 
1 <= str1.length <= 1000 <br> 
1 <= str2.length <= 1000 <br> 
str1 and str2 consist of English uppercase letters. <br> 
