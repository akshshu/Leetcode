## There is an undirected weighted connected graph. You are given a positive integer n which denotes that the graph has n nodes labeled from 1 to n, and an array edges where each edges[i] = [ui, vi, weighti] denotes that there is an edge between nodes ui and vi with weight equal to weighti. <br> <br> 
A path from node start to node end is a sequence of nodes [z0, z1, z2, ..., zk] such that z0 = start and zk = end and there is an edge between zi and zi+1 where 0 <= i <= k-1. <br> <br> 
The distance of a path is the sum of the weights on the edges of the path. Let distanceToLastNode(x) denote the shortest distance of a path between node n and node x. A restricted path is a path that also satisfies that distanceToLastNode(zi) > distanceToLastNode(zi+1) where 0 <= i <= k-1. <br> <br> 
Return the number of restricted paths from node 1 to node n. Since that number may be too large, return it modulo 109 + 7. <br> <br> <br> <br> 
Example 1: <br> 
Input: n = 5, edges = [[1,2,3],[1,3,3],[2,3,1],[1,4,2],[5,2,2],[3,5,1],[5,4,10]] <br> 
Output: 3 <br> 
Explanation: Each circle contains the node number in black and its distanceToLastNode value in blue. The three restricted paths are: <br> 
1) 1 --> 2 --> 5 <br> 
2) 1 --> 2 --> 3 --> 5 <br> 
3) 1 --> 3 --> 5 <br> <br> 
Example 2 <br> 
Input: n = 7, edges = [[1,3,1],[4,1,2],[7,3,4],[2,5,3],[5,6,1],[6,7,2],[7,5,3],[2,6,4]] <br> 
Output: 1 <br> 
Explanation: Each circle contains the node number in black and its distanceToLastNode value in blue. The only restricted path is 1 --> 3 --> 7. <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 2 * 104 <br> 
n - 1 <= edges.length <= 4 * 104 <br> 
edges[i].length == 3 <br> 
1 <= ui, vi <= n <br> 
ui != vi <br> 
1 <= weighti <= 105 <br> 
There is at most one edge between any two nodes. <br> 
There is at least one path between any two nodes. <br> 
