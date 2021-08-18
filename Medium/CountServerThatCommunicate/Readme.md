## You are given a map of a server center, represented as a m * n integer matrix grid, where 1 means that on that cell there is a server and 0 means that it is no server. Two servers are said to communicate if they are on the same row or on the same column. <br> <br> 
Return the number of servers that communicate with any other server. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: grid = [[1,0],[0,1]] <br> 
Output: 0 <br> 
Explanation: No servers can communicate with others. <br> 
Input: grid = [[1,0],[1,1]] <br> 
Output: 3 <br> 
Explanation: All three servers can communicate with at least one other server. <br> 
Input: grid = [[1,1,0,0],[0,0,1,0],[0,0,1,0],[0,0,0,1]] <br> 
Output: 4 <br> 
Explanation: The two servers in the first row can communicate with each other. The two servers in the third column can communicate with each other. The server at right bottom corner can't communicate with any other server. <br> <br> <br> 
Constraints: <br> <br> 
m == grid.length <br> 
n == grid[i].length <br> 
1 <= m <= 250 <br> 
1 <= n <= 250 <br> 
grid[i][j] == 0 or 1 <br> 
