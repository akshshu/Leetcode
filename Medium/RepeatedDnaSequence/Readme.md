## The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'. <br> <br> 
For example, "ACGAATTCCG" is a DNA sequence. <br> 
When studying DNA, it is useful to identify repeated sequences within the DNA. <br> <br> 
Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT" <br> 
Output: ["AAAAACCCCC","CCCCCAAAAA"] <br> 
Example 2: <br> <br> 
Input: s = "AAAAAAAAAAAAA" <br> 
Output: ["AAAAAAAAAA"] <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 105 <br> 
s[i] is either 'A', 'C', 'G', or 'T'. <br> 
