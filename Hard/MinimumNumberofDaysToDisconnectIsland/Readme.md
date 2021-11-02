## Given a 2D grid consisting of 1s (land) and 0s (water).  An island is a maximal 4-directionally (horizontal or vertical) connected group of 1s. <br> <br> 
The grid is said to be connected if we have exactly one island, otherwise is said disconnected. <br> <br> 
In one day, we are allowed to change any single land cell (1) into a water cell (0). <br> <br> 
Return the minimum number of days to disconnect the grid. <br> <br> <br> <br> 
Example 1: <br> <br> <br> <br> 
Input: grid = [[0,1,1,0],[0,1,1,0],[0,0,0,0]] <br> 
Output: 2 <br> 
Explanation: We need at least 2 days to get a disconnected grid. <br> 
Change land grid[1][1] and grid[0][2] to water and get 2 disconnected island. <br> 
Example 2: <br> <br> 
Input: grid = [[1,1]] <br> 
Output: 2 <br> 
Explanation: Grid of full water is also disconnected ([[1,1]] -> [[0,0]]), 0 islands. <br> 
Example 3: <br> <br> 
Input: grid = [[1,0,1,0]] <br> 
Output: 0 <br> 
Example 4: <br> <br> 
Input: grid = [[1,1,0,1,1], <br> 
               [1,1,1,1,1], <br> 
               [1,1,0,1,1], <br> 
               [1,1,0,1,1]] <br> 
Output: 1 <br> 
Example 5: <br> <br> 
Input: grid = [[1,1,0,1,1], <br> 
               [1,1,1,1,1], <br> 
               [1,1,0,1,1], <br> 
               [1,1,1,1,1]] <br> 
Output: 2 <br> <br> <br> 
Constraints: <br> <br> 
1 <= grid.length, grid[i].length <= 30 <br> 
grid[i][j] is 0 or 1. <br> 
