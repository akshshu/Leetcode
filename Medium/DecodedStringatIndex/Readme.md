## You are given an encoded string s. To decode the string to a tape, the encoded string is read one character at a time and the following steps are taken: <br> <br> 
If the character read is a letter, that letter is written onto the tape. <br> 
If the character read is a digit d, the entire current tape is repeatedly written d - 1 more times in total. <br> 
Given an integer k, return the kth letter (1-indexed) in the decoded string. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "leet2code3", k = 10 <br> 
Output: "o" <br> 
Explanation: The decoded string is "leetleetcodeleetleetcodeleetleetcode". <br> 
The 10th letter in the string is "o". <br> 
Example 2: <br> <br> 
Input: s = "ha22", k = 5 <br> 
Output: "h" <br> 
Explanation: The decoded string is "hahahaha". <br> 
The 5th letter is "h". <br> 
Example 3: <br> <br> 
Input: s = "a2345678999999999999999", k = 1 <br> 
Output: "a" <br> 
Explanation: The decoded string is "a" repeated 8301530446056247680 times. <br> 
The 1st letter is "a". <br> <br> <br> 
Constraints: <br> <br> 
2 <= s.length <= 100 <br> 
s consists of lowercase English letters and digits 2 through 9. <br> 
s starts with a letter. <br> 
1 <= k <= 109 <br> 
It is guaranteed that k is less than or equal to the length of the decoded string. <br> 
The decoded string is guaranteed to have less than 263 letters. <br> 
