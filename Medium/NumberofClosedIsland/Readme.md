## Given a 2D grid consists of 0s (land) and 1s (water).  An island is a maximal 4-directionally connected group of 0s and a closed island is an island totally (all left, top, right, bottom) surrounded by 1s. <br> <br> 
Return the number of closed islands. <br> <br> <br> <br> 
Example 1: <br> <br> <br> <br> 
Input: grid = [[1,1,1,1,1,1,1,0],[1,0,0,0,0,1,1,0],[1,0,1,0,1,1,1,0],[1,0,0,0,0,1,0,1],[1,1,1,1,1,1,1,0]] <br> 
Output: 2 <br> 
Explanation: <br> 
Islands in gray are closed because they are completely surrounded by water (group of 1s). <br> 
Example 2: <br> <br> <br> <br> 
Input: grid = [[0,0,1,0,0],[0,1,0,1,0],[0,1,1,1,0]] <br> 
Output: 1 <br> 
Example 3: <br> <br> 
Input: grid = [[1,1,1,1,1,1,1], <br> 
               [1,0,0,0,0,0,1], <br> 
               [1,0,1,1,1,0,1], <br> 
               [1,0,1,0,1,0,1], <br> 
               [1,0,1,1,1,0,1], <br> 
               [1,0,0,0,0,0,1], <br> 
               [1,1,1,1,1,1,1]] <br> 
Output: 2 <br> <br> <br> 
Constraints: <br> <br> 
1 <= grid.length, grid[0].length <= 100 <br> 
0 <= grid[i][j] <=1 <br> 
