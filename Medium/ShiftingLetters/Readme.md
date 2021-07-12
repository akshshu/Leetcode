## We have a string s of lowercase letters, and an integer array shifts. <br> <br> 
Call the shift of a letter, the next letter in the alphabet, (wrapping around so that 'z' becomes 'a'). <br> <br> 
For example, shift('a') = 'b', shift('t') = 'u', and shift('z') = 'a'. <br> <br> 
Now for each shifts[i] = x, we want to shift the first i+1 letters of S, x times. <br> <br> 
Return the final string after all such shifts to s are applied. <br> <br> 
Example 1: <br> <br> 
Input: s = "abc", shifts = [3,5,9] <br> 
Output: "rpl" <br> 
Explanation: <br> 
We start with "abc". <br> 
After shifting the first 1 letters of S by 3, we have "dbc". <br> 
After shifting the first 2 letters of S by 5, we have "igc". <br> 
After shifting the first 3 letters of S by 9, we have "rpl", the answer. <br> 
Note: <br> <br> 
1 <= s.length = shifts.length <= 20000 <br> 
0 <= shifts[i] <= 109 <br> 
