## A string is considered beautiful if it satisfies the following conditions: <br> <br> 
Each of the 5 English vowels ('a', 'e', 'i', 'o', 'u') must appear at least once in it. <br> 
The letters must be sorted in alphabetical order (i.e. all 'a's before 'e's, all 'e's before 'i's, etc.). <br> 
For example, strings "aeiou" and "aaaaaaeiiiioou" are considered beautiful, but "uaeio", "aeoiu", and "aaaeeeooo" are not beautiful. <br> <br> 
Given a string word consisting of English vowels, return the length of the longest beautiful substring of word. If no such substring exists, return 0. <br> <br> 
A substring is a contiguous sequence of characters in a string. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: word = "aeiaaioaaaaeiiiiouuuooaauuaeiu" <br> 
Output: 13 <br> 
Explanation: The longest beautiful substring in word is "aaaaeiiiiouuu" of length 13. <br> 
Example 2: <br> <br> 
Input: word = "aeeeiiiioooauuuaeiou" <br> 
Output: 5 <br> 
Explanation: The longest beautiful substring in word is "aeiou" of length 5. <br> 
Example 3: <br> <br> 
Input: word = "a" <br> 
Output: 0 <br> 
Explanation: There is no beautiful substring, so return 0. <br> <br> <br> 
Constraints: <br> <br> 
1 <= word.length <= 5 * 105 <br> 
word consists of characters 'a', 'e', 'i', 'o', and 'u'. <br> 
