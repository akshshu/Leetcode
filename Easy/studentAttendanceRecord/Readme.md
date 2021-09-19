## You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters: <br> <br> 
'A': Absent. <br> 
'L': Late. <br> 
'P': Present. <br> 
The student is eligible for an attendance award if they meet both of the following criteria: <br> <br> 
The student was absent ('A') for strictly fewer than 2 days total. <br> 
The student was never late ('L') for 3 or more consecutive days. <br> 
Return true if the student is eligible for an attendance award, or false otherwise. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "PPALLP" <br> 
Output: true <br> 
Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days. <br> 
Example 2: <br> <br> 
Input: s = "PPALLL" <br> 
Output: false <br> 
Explanation: The student was late 3 consecutive days in the last 3 days, so is not eligible for the award. <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 1000 <br> 
s[i] is either 'A', 'L', or 'P'. <br> 
