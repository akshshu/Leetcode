## You are working in a ball factory where you have n balls numbered from lowLimit up to highLimit inclusive (i.e., n == highLimit - lowLimit + 1), and an infinite number of boxes numbered from 1 to infinity. <br> <br> 
Your job at this factory is to put each ball in the box with a number equal to the sum of digits of the ball's number. For example, the ball number 321 will be put in the box number 3 + 2 + 1 = 6 and the ball number 10 will be put in the box number 1 + 0 = 1. <br> <br> 
Given two integers lowLimit and highLimit, return the number of balls in the box with the most balls. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: lowLimit = 1, highLimit = 10 <br> 
Output: 2 <br> 
Explanation: <br> 
Box Number:  1 2 3 4 5 6 7 8 9 10 11 ... <br> 
Ball Count:  2 1 1 1 1 1 1 1 1 0  0  ... <br> 
Box 1 has the most number of balls with 2 balls. <br> 
Example 2: <br> <br> 
Input: lowLimit = 5, highLimit = 15 <br> 
Output: 2 <br> 
Explanation: <br> 
Box Number:  1 2 3 4 5 6 7 8 9 10 11 ... <br> 
Ball Count:  1 1 1 1 2 2 1 1 1 0  0  ... <br> 
Boxes 5 and 6 have the most number of balls with 2 balls in each. <br> 
Example 3: <br> <br> 
Input: lowLimit = 19, highLimit = 28 <br> 
Output: 2 <br> 
Explanation: <br> 
Box Number:  1 2 3 4 5 6 7 8 9 10 11 12 ... <br> 
Ball Count:  0 1 1 1 1 1 1 1 1 2  0  0  ... <br> 
Box 10 has the most number of balls with 2 balls. <br> <br> <br> 
Constraints: <br> <br> 
1 <= lowLimit <= highLimit <= 105 <br> 
