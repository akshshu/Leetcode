## We start at some node in a directed graph, and every turn, we walk along a directed edge of the graph. If we reach a terminal node (that is, it has no outgoing directed edges), we stop. <br> <br> 
We define a starting node to be safe if we must eventually walk to a terminal node. More specifically, there is a natural number k, so that we must have stopped at a terminal node in less than k steps for any choice of where to walk. <br> <br> 
Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order. <br> <br> 
The directed graph has n nodes with labels from 0 to n - 1, where n is the length of graph. The graph is given in the following form: graph[i] is a list of labels j such that (i, j) is a directed edge of the graph, going from node i to node j. <br> <br> <br> <br> 
Example 1: <br> 
Input: graph = [[1,2],[2,3],[5],[0],[5],[],[]] <br> 
Output: [2,4,5,6] <br> 
Explanation: The given graph is shown above. <br> 
Example 2: <br> <br> 
Input: graph = [[1,2,3,4],[1,2],[3,4],[0,4],[]] <br> 
Output: [4] <br> <br> <br> 
Constraints: <br> <br> 
n == graph.length <br> 
1 <= n <= 104 <br> 
0 <= graph[i].length <= n <br> 
graph[i] is sorted in a strictly increasing order. <br> 
The graph may contain self-loops. <br> 
The number of edges in the graph will be in the range [1, 4 * 104]. <br> 
