## Given a directed acyclic graph (DAG) of n nodes labeled from 0 to n - 1, find all possible paths from node 0 to node n - 1 and return them in any order. <br> <br> 
The graph is given as follows: graph[i] is a list of all nodes you can visit from node i (i.e., there is a directed edge from node i to node graph[i][j]). <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: graph = [[1,2],[3],[3],[]] <br> 
Output: [[0,1,3],[0,2,3]] <br> 
Explanation: There are two paths: 0 -> 1 -> 3 and 0 -> 2 -> 3. <br> 
Input: graph = [[4,3,1],[3,2,4],[3],[4],[]] <br> 
Output: [[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]] <br> 
Example 3: <br> <br> 
Input: graph = [[1],[]] <br> 
Output: [[0,1]] <br> 
Example 4: <br> <br> 
Input: graph = [[1,2,3],[2],[3],[]] <br> 
Output: [[0,1,2,3],[0,2,3],[0,3]] <br> 
Example 5: <br> <br> 
Input: graph = [[1,3],[2],[3],[]] <br> 
Output: [[0,1,2,3],[0,3]] <br> <br> <br> 
Constraints: <br> <br> 
n == graph.length <br> 
2 <= n <= 15 <br> 
0 <= graph[i][j] < n <br> 
graph[i][j] != i (i.e., there will be no self-loops). <br> 
All the elements of graph[i] are unique. <br> 
The input graph is guaranteed to be a DAG. <br> 
