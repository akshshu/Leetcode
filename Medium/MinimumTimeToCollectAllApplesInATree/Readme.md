## Given an undirected tree consisting of n vertices numbered from 0 to n-1, which has some apples in their vertices. You spend 1 second to walk over one edge of the tree. Return the minimum time in seconds you have to spend to collect all apples in the tree, starting at vertex 0 and coming back to this vertex. <br> <br> 
The edges of the undirected tree are given in the array edges, where edges[i] = [ai, bi] means that exists an edge connecting the vertices ai and bi. Additionally, there is a boolean array hasApple, where hasApple[i] = true means that vertex i has an apple; otherwise, it does not have any apple. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], hasApple = [false,false,true,false,true,true,false] <br> 
Output: 8 <br> 
Explanation: The figure above represents the given tree where red vertices have an apple. One optimal path to collect all apples is shown by the green arrows. <br> 
Example 2: <br> <br> <br> 
Input: n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], hasApple = [false,false,true,false,false,true,false] <br> 
Output: 6 <br> 
Explanation: The figure above represents the given tree where red vertices have an apple. One optimal path to collect all apples is shown by the green arrows. <br> 
Example 3: <br> <br> 
Input: n = 7, edges = [[0,1],[0,2],[1,4],[1,5],[2,3],[2,6]], hasApple = [false,false,false,false,false,false,false] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 105 <br> 
edges.length == n - 1 <br> 
edges[i].length == 2 <br> 
0 <= ai < bi <= n - 1 <br> 
fromi < toi <br> 
hasApple.length == n <br> 
