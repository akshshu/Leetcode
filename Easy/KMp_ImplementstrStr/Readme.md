## Implement strStr(). <br> <br> 
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack. <br> <br> 
Clarification: <br> <br> 
What should we return when needle is an empty string? This is a great question to ask during an interview. <br> <br> 
For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf(). <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: haystack = "hello", needle = "ll" <br> 
Output: 2 <br> 
Example 2: <br> <br> 
Input: haystack = "aaaaa", needle = "bba" <br> 
Output: -1 <br> 
Example 3: <br> <br> 
Input: haystack = "", needle = "" <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
0 <= haystack.length, needle.length <= 5 * 104 <br> 
haystack and needle consist of only lower-case English characters. <br> 
