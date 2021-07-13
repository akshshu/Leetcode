## Input: seats = [1,0,0,0,1,0,1] <br> 
Output: 2 <br> 
Explanation: <br> 
If Alex sits in the second open seat (i.e. seats[2]), then the closest person has distance 2. <br> 
If Alex sits in any other open seat, the closest person has distance 1. <br> 
Thus, the maximum distance to the closest person is 2. <br> 
Example 2: <br> <br> 
Input: seats = [1,0,0,0] <br> 
Output: 3 <br> 
Explanation: <br> 
If Alex sits in the last seat (i.e. seats[3]), the closest person is 3 seats away. <br> 
This is the maximum distance possible, so the answer is 3. <br> 
Example 3: <br> <br> 
Input: seats = [0,1] <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
2 <= seats.length <= 2 * 104 <br> 
seats[i] is 0 or 1. <br> 
At least one seat is empty. <br> 
At least one seat is occupied. <br> <br> 
You are given an array representing a row of seats where seats[i] = 1 represents a person sitting in the ith seat, and seats[i] = 0 represents that the ith seat is empty (0-indexed). <br> <br> 
There is at least one empty seat, and at least one person sitting. <br> <br> 
Alex wants to sit in the seat such that the distance between him and the closest person to him is maximized. <br> <br> 
Return that maximum distance to the closest person. <br> 
