## An attendance record for a student can be represented as a string where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters: <br> <br> 
'A': Absent. <br> 
'L': Late. <br> 
'P': Present. <br> 
Any student is eligible for an attendance award if they meet both of the following criteria: <br> <br> 
The student was absent ('A') for strictly fewer than 2 days total. <br> 
The student was never late ('L') for 3 or more consecutive days. <br> 
Given an integer n, return the number of possible attendance records of length n that make a student eligible for an attendance award. The answer may be very large, so return it modulo 109 + 7. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 2 <br> 
Output: 8 <br> 
Explanation: There are 8 records with length 2 that are eligible for an award: <br> 
"PP", "AP", "PA", "LP", "PL", "AL", "LA", "LL" <br> 
Only "AA" is not eligible because there are 2 absences (there need to be fewer than 2). <br> 
Example 2: <br> <br> 
Input: n = 1 <br> 
Output: 3 <br> 
Example 3: <br> <br> 
Input: n = 10101 <br> 
Output: 183236316 <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 105 <br> 
