## A tree is an undirected graph in which any two vertices are connected by exactly one path. In other words, any connected graph without simple cycles is a tree. <br> <br> 
Given a tree of n nodes labelled from 0 to n - 1, and an array of n - 1 edges where edges[i] = [ai, bi] indicates that there is an undirected edge between the two nodes ai and bi in the tree, you can choose any node of the tree as the root. When you select a node x as the root, the result tree has height h. Among all possible rooted trees, those with minimum height (i.e. min(h))  are called minimum height trees (MHTs). <br> <br> 
Return a list of all MHTs' root labels. You can return the answer in any order. <br> <br> 
The height of a rooted tree is the number of edges on the longest downward path between the root and a leaf. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: n = 4, edges = [[1,0],[1,2],[1,3]] <br> 
Output: [1] <br> 
Explanation: As shown, the height of the tree is 1 when the root is the node with label 1 which is the only MHT. <br> 
Example 2: <br> <br> <br> 
Input: n = 6, edges = [[3,0],[3,1],[3,2],[3,4],[5,4]] <br> 
Output: [3,4] <br> 
Example 3: <br> <br> 
Input: n = 1, edges = [] <br> 
Output: [0] <br> 
Example 4: <br> <br> 
Input: n = 2, edges = [[0,1]] <br> 
Output: [0,1] <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 2 * 104 <br> 
edges.length == n - 1 <br> 
0 <= ai, bi < n <br> 
ai != bi <br> 
All the pairs (ai, bi) are distinct. <br> 
The given input is guaranteed to be a tree and there will be no repeated edges. <br> 
