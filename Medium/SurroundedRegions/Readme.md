## Given an m x n matrix board containing 'X' and 'O', capture all regions that are 4-directionally surrounded by 'X'. <br> <br> 
A region is captured by flipping all 'O's into 'X's in that surrounded region. <br> 
Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]] <br> 
Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]] <br> 
Explanation: Surrounded regions should not be on the border, which means that any 'O' on the border of the board are not flipped to 'X'. Any 'O' that is not on the border and it is not connected to an 'O' on the border will be flipped to 'X'. Two cells are connected if they are adjacent cells connected horizontally or vertically. <br> 
Example 2: <br> <br> 
Input: board = [["X"]] <br> 
Output: [["X"]] <br> <br> <br> 
Constraints: <br> <br> 
m == board.length <br> 
n == board[i].length <br> 
1 <= m, n <= 200 <br> 
board[i][j] is 'X' or 'O'. <br> 
