## You are given a 0-indexed string s of even length n. The string consists of exactly n / 2 opening brackets '[' and n / 2 closing brackets ']'. <br> <br> 
A string is called balanced if and only if: <br> <br> 
It is the empty string, or <br> 
It can be written as AB, where both A and B are balanced strings, or <br> 
It can be written as [C], where C is a balanced string. <br> 
You may swap the brackets at any two indices any number of times. <br> <br> 
Return the minimum number of swaps to make s balanced. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "][][" <br> 
Output: 1 <br> 
Explanation: You can make the string balanced by swapping index 0 with index 3. <br> 
The resulting string is "[[]]". <br> 
Example 2: <br> <br> 
Input: s = "]]][[[" <br> 
Output: 2 <br> 
Explanation: You can do the following to make the string balanced: <br> 
- Swap index 0 with index 4. s = "[]][][". <br> 
- Swap index 1 with index 5. s = "[[][]]". <br> 
The resulting string is "[[][]]". <br> 
Example 3: <br> <br> 
Input: s = "[]" <br> 
Output: 0 <br> 
Explanation: The string is already balanced. <br> <br> <br> 
Constraints: <br> <br> 
n == s.length <br> 
2 <= n <= 106 <br> 
n is even. <br> 
s[i] is either '[' or ']'. <br> 
The number of opening brackets '[' equals n / 2, and the number of closing brackets ']' equals n / 2. <br> 
