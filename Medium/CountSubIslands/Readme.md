## You are given two m x n binary matrices grid1 and grid2 containing only 0's (representing water) and 1's (representing land). An island is a group of 1's connected 4-directionally (horizontal or vertical). Any cells outside of the grid are considered water cells. <br> <br> 
An island in grid2 is considered a sub-island if there is an island in grid1 that contains all the cells that make up this island in grid2. <br> <br> 
Return the number of islands in grid2 that are considered sub-islands. <br> <br> <br> <br> 
Example 1: <br> 
Input: grid1 = [[1,1,1,0,0],[0,1,1,1,1],[0,0,0,0,0],[1,0,0,0,0],[1,1,0,1,1]], grid2 = [[1,1,1,0,0],[0,0,1,1,1],[0,1,0,0,0],[1,0,1,1,0],[0,1,0,1,0]] <br> 
Output: 3 <br> 
Explanation: In the picture above, the grid on the left is grid1 and the grid on the right is grid2. <br> 
The 1s colored red in grid2 are those considered to be part of a sub-island. There are three sub-islands. <br> 
Input: grid1 = [[1,0,1,0,1],[1,1,1,1,1],[0,0,0,0,0],[1,1,1,1,1],[1,0,1,0,1]], grid2 = [[0,0,0,0,0],[1,1,1,1,1],[0,1,0,1,0],[0,1,0,1,0],[1,0,0,0,1]] <br> 
Output: 2 <br> 
Explanation: In the picture above, the grid on the left is grid1 and the grid on the right is grid2. <br> 
The 1s colored red in grid2 are those considered to be part of a sub-island. There are two sub-islands. <br> <br> <br> 
Constraints: <br> <br> 
m == grid1.length == grid2.length <br> 
n == grid1[i].length == grid2[i].length <br> 
1 <= m, n <= 500 <br> 
grid1[i][j] and grid2[i][j] are either 0 or 1. <br> 
