## Consider a directed graph, with nodes labelled 0, 1, ..., n-1.  In this graph, each edge is either red or blue, and there could be self-edges or parallel edges. <br> <br> 
Each [i, j] in red_edges denotes a red directed edge from node i to node j.  Similarly, each [i, j] in blue_edges denotes a blue directed edge from node i to node j. <br> <br> 
Return an array answer of length n, where each answer[X] is the length of the shortest path from node 0 to node X such that the edge colors alternate along the path (or -1 if such a path doesn't exist). <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 3, red_edges = [[0,1],[1,2]], blue_edges = [] <br> 
Output: [0,1,-1] <br> 
Example 2: <br> <br> 
Input: n = 3, red_edges = [[0,1]], blue_edges = [[2,1]] <br> 
Output: [0,1,-1] <br> 
Example 3: <br> <br> 
Input: n = 3, red_edges = [[1,0]], blue_edges = [[2,1]] <br> 
Output: [0,-1,-1] <br> 
Example 4: <br> <br> 
Input: n = 3, red_edges = [[0,1]], blue_edges = [[1,2]] <br> 
Output: [0,1,2] <br> 
Example 5: <br> <br> 
Input: n = 3, red_edges = [[0,1],[0,2]], blue_edges = [[1,0]] <br> 
Output: [0,1,1] <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 100 <br> 
red_edges.length <= 400 <br> 
blue_edges.length <= 400 <br> 
red_edges[i].length == blue_edges[i].length == 2 <br> 
0 <= red_edges[i][j], blue_edges[i][j] < n <br> 
