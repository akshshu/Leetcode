## Given string num representing a non-negative integer num, and an integer k, return the smallest possible integer after removing k digits from num. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: num = "1432219", k = 3 <br> 
Output: "1219" <br> 
Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest. <br> 
Example 2: <br> <br> 
Input: num = "10200", k = 1 <br> 
Output: "200" <br> 
Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes. <br> 
Example 3: <br> <br> 
Input: num = "10", k = 2 <br> 
Output: "0" <br> 
Explanation: Remove all the digits from the number and it is left with nothing which is 0. <br> <br> <br> 
Constraints: <br> <br> 
1 <= k <= num.length <= 105 <br> 
num consists of only digits. <br> 
num does not have any leading zeros except for the zero itself. <br> 
