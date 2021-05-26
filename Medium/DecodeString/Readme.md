## Given an encoded string, return its decoded string. <br> <br> 
The encoding rule is: k[encoded_string], where the encoded_string inside the square brackets is being repeated exactly k times. Note that k is guaranteed to be a positive integer. <br> <br> 
You may assume that the input string is always valid; No extra white spaces, square brackets are well-formed, etc. <br> <br> 
Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, k. For example, there won't be input like 3a or 2[4]. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "3[a]2[bc]" <br> 
Output: "aaabcbc" <br> 
Example 2: <br> <br> 
Input: s = "3[a2[c]]" <br> 
Output: "accaccacc" <br> 
