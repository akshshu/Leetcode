## We want to split a group of n people (labeled from 1 to n) into two groups of any size. Each person may dislike some other people, and they should not go into the same group. <br> <br> 
Given the integer n and the array dislikes where dislikes[i] = [ai, bi] indicates that the person labeled ai does not like the person labeled bi, return true if it is possible to split everyone into two groups in this way. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 4, dislikes = [[1,2],[1,3],[2,4]] <br> 
Output: true <br> 
Explanation: group1 [1,4] and group2 [2,3]. <br> 
Example 2: <br> <br> 
Input: n = 3, dislikes = [[1,2],[1,3],[2,3]] <br> 
Output: false <br> 
Example 3: <br> <br> 
Input: n = 5, dislikes = [[1,2],[2,3],[3,4],[4,5],[1,5]] <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 2000 <br> 
0 <= dislikes.length <= 104 <br> 
dislikes[i].length == 2 <br> 
1 <= dislikes[i][j] <= n <br> 
ai < bi <br> 
All the pairs of dislikes are unique. <br> 
