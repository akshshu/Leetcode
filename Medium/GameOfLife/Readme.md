## According to Wikipedia's article: "The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970." <br> <br> 
The board is made up of an m x n grid of cells, where each cell has an initial state: live (represented by a 1) or dead (represented by a 0). Each cell interacts with its eight neighbors (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article): <br> <br> 
Any live cell with fewer than two live neighbors dies as if caused by under-population. <br> 
Any live cell with two or three live neighbors lives on to the next generation. <br> 
Any live cell with more than three live neighbors dies, as if by over-population. <br> 
Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction. <br> 
The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the m x n grid board, return the next state. <br> 
Input: board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]] <br> 
Output: [[0,0,0],[1,0,1],[0,1,1],[0,1,0]] <br> 
Input: board = [[1,1],[1,0]] <br> 
Output: [[1,1],[1,1]] <br> <br> <br> 
Constraints: <br> <br> 
m == board.length <br> 
n == board[i].length <br> 
1 <= m, n <= 25 <br> 
board[i][j] is 0 or 1. <br> <br> <br> 
Follow up: <br> <br> 
Could you solve it in-place? Remember that the board needs to be updated simultaneously: You cannot update some cells first and then use their updated values to update other cells. <br> 
In this question, we represent the board using a 2D array. In principle, the board is infinite, which would cause problems when the active area encroaches upon the border of the array (i.e., live cells reach the border). How would you address these problems? <br> 
