## You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water. <br> <br> 
The area of an island is the number of cells with a value 1 in the island. <br> <br> 
Return the maximum area of an island in grid. If there is no island, return 0. <br> <br> <br> <br> 
Example 1: <br> 
Input: grid = [[0,0,1,0,0,0,0,1,0,0,0,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,1,1,0,1,0,0,0,0,0,0,0,0],[0,1,0,0,1,1,0,0,1,0,1,0,0],[0,1,0,0,1,1,0,0,1,1,1,0,0],[0,0,0,0,0,0,0,0,0,0,1,0,0],[0,0,0,0,0,0,0,1,1,1,0,0,0],[0,0,0,0,0,0,0,1,1,0,0,0,0]] <br> 
Output: 6 <br> 
Explanation: The answer is not 11, because the island must be connected 4-directionally. <br> 
Example 2: <br> <br> 
Input: grid = [[0,0,0,0,0,0,0,0]] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
m == grid.length <br> 
n == grid[i].length <br> 
1 <= m, n <= 50 <br> 
grid[i][j] is either 0 or 1. <br> 
