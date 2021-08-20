## You are given a 0-indexed binary string s and two integers minJump and maxJump. In the beginning, you are standing at index 0, which is equal to '0'. You can move from index i to index j if the following conditions are fulfilled: <br> <br> 
i + minJump <= j <= min(i + maxJump, s.length - 1), and <br> 
s[j] == '0'. <br> 
Return true if you can reach index s.length - 1 in s, or false otherwise. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "011010", minJump = 2, maxJump = 3 <br> 
Output: true <br> 
Explanation: <br> 
In the first step, move from index 0 to index 3. <br> 
In the second step, move from index 3 to index 5. <br> 
Example 2: <br> <br> 
Input: s = "01101110", minJump = 2, maxJump = 3 <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
2 <= s.length <= 105 <br> 
s[i] is either '0' or '1'. <br> 
s[0] == '0' <br> 
1 <= minJump <= maxJump < s.length <br> 
