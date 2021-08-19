## Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands. <br> <br> 
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: grid = [ <br> 
  ["1","1","1","1","0"], <br> 
  ["1","1","0","1","0"], <br> 
  ["1","1","0","0","0"], <br> 
  ["0","0","0","0","0"] <br> 
] <br> 
Output: 1 <br> 
Example 2: <br> <br> 
Input: grid = [ <br> 
  ["1","1","0","0","0"], <br> 
  ["1","1","0","0","0"], <br> 
  ["0","0","1","0","0"], <br> 
  ["0","0","0","1","1"] <br> 
] <br> 
Output: 3 <br> <br> <br> 
Constraints: <br> <br> 
m == grid.length <br> 
n == grid[i].length <br> 
1 <= m, n <= 300 <br> 
grid[i][j] is '0' or '1'. <br> 
