## Given an n x n binary matrix grid, return the length of the shortest clear path in the matrix. If there is no clear path, return -1. <br> <br> 
A clear path in a binary matrix is a path from the top-left cell (i.e., (0, 0)) to the bottom-right cell (i.e., (n - 1, n - 1)) such that: <br> <br> 
All the visited cells of the path are 0. <br> 
All the adjacent cells of the path are 8-directionally connected (i.e., they are different and they share an edge or a corner). <br> 
The length of a clear path is the number of visited cells of this path. <br> 
Input: grid = [[0,1],[1,0]] <br> 
Output: 2 <br> 
