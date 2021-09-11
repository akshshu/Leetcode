## Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area. <br> 
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]] <br> 
Output: 6 <br> 
Explanation: The maximal rectangle is shown in the above picture. <br> 
Example 2: <br> <br> 
Input: matrix = [] <br> 
Output: 0 <br> 
Example 3: <br> <br> 
Input: matrix = [["0"]] <br> 
Output: 0 <br> 
Example 4: <br> <br> 
Input: matrix = [["1"]] <br> 
Output: 1 <br> 
Example 5: <br> <br> 
Input: matrix = [["0","0"]] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
rows == matrix.length <br> 
cols == matrix[i].length <br> 
0 <= row, cols <= 200 <br> 
matrix[i][j] is '0' or '1' <br> 
