## <br> 
Given an m x n integers matrix, return the length of the longest increasing path in matrix. <br> <br> 
From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary (i.e., wrap-around is not allowed). <br> 
Input: matrix = [[9,9,4],[6,6,8],[2,1,1]] <br> 
Output: 4 <br> 
Explanation: The longest increasing path is [1, 2, 6, 9]. <br> 
Input: matrix = [[3,4,5],[3,2,6],[2,2,1]] <br> 
Output: 4 <br> 
Explanation: The longest increasing path is [3, 4, 5, 6]. Moving diagonally is not allowed. <br> 
Example 3: <br> <br> 
Input: matrix = [[1]] <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
m == matrix.length <br> 
n == matrix[i].length <br> 
1 <= m, n <= 200 <br> 
0 <= matrix[i][j] <= 231 - 1 <br> 
