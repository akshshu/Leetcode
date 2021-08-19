## Description <br> 
Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical). You may assume all four edges of the grid are surrounded by water. <br> <br> 
Count the number of distinct islands. An island is considered to be the same as another if and only if one island has the same shape as another island (and not rotated or reflected). <br> <br> 
Notice that: <br> <br> 
11 <br> 
1 <br> 
and <br> <br> 
 1 <br> 
11 <br> 
are considered different island, because we do not consider reflection / rotation. <br> <br> 
The length of each dimension in the given grid does not exceed 50. <br> <br> 
Example <br> 
Example 1: <br> <br> 
Input: <br> 
  [ <br> 
    [1,1,0,0,1], <br> 
    [1,0,0,0,0], <br> 
    [1,1,0,0,1], <br> 
    [0,1,0,1,1] <br> 
  ] <br> 
Output: 3 <br> 
Explanation: <br> 
  11   1    1 <br> 
  1        11 <br> 
  11 <br> 
   1 <br> 
Example 2: <br> <br> 
Input: <br> 
  [ <br> 
    [1,1,0,0,0], <br> 
    [1,1,0,0,0], <br> 
    [0,0,0,1,1], <br> 
    [0,0,0,1,1] <br> 
  ] <br> 
Output: 1 <br> 
Tags <br> 
Company <br> 
Amazon <br> 
