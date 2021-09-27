## Given a directed acyclic graph, with n vertices numbered from 0 to n-1, and an array edges where edges[i] = [fromi, toi] represents a directed edge from node fromi to node toi. <br> <br> 
Find the smallest set of vertices from which all nodes in the graph are reachable. It's guaranteed that a unique solution exists. <br> <br> 
Notice that you can return the vertices in any order. <br> <br> <br> <br> 
Example 1: <br> <br> <br> <br> 
Input: n = 6, edges = [[0,1],[0,2],[2,5],[3,4],[4,2]] <br> 
Output: [0,3] <br> 
Explanation: It's not possible to reach all the nodes from a single vertex. From 0 we can reach [0,1,2,5]. From 3 we can reach [3,4,2,5]. So we output [0,3]. <br> 
Example 2: <br> <br> <br> <br> 
Input: n = 5, edges = [[0,1],[2,1],[3,1],[1,4],[2,4]] <br> 
Output: [0,2,3] <br> 
Explanation: Notice that vertices 0, 3 and 2 are not reachable from any other node, so we must include them. Also any of these vertices can reach nodes 1 and 4. <br> <br> <br> 
Constraints: <br> <br> 
2 <= n <= 10^5 <br> 
1 <= edges.length <= min(10^5, n * (n - 1) / 2) <br> 
edges[i].length == 2 <br> 
0 <= fromi, toi < n <br> 
All pairs (fromi, toi) are distinct. <br> 
