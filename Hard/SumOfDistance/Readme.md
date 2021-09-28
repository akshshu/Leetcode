## There is an undirected connected tree with n nodes labeled from 0 to n - 1 and n - 1 edges. <br> <br> 
You are given the integer n and the array edges where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree. <br> <br> 
Return an array answer of length n where answer[i] is the sum of the distances between the ith node in the tree and all other nodes. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: n = 6, edges = [[0,1],[0,2],[2,3],[2,4],[2,5]] <br> 
Output: [8,12,6,10,10,10] <br> 
Explanation: The tree is shown above. <br> 
We can see that dist(0,1) + dist(0,2) + dist(0,3) + dist(0,4) + dist(0,5) <br> 
equals 1 + 1 + 2 + 2 + 2 = 8. <br> 
Hence, answer[0] = 8, and so on. <br> 
Example 2: <br> <br> <br> 
Input: n = 1, edges = [] <br> 
Output: [0] <br> 
Example 3: <br> <br> <br> 
Input: n = 2, edges = [[1,0]] <br> 
Output: [1,1] <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 3 * 104 <br> 
edges.length == n - 1 <br> 
edges[i].length == 2 <br> 
0 <= ai, bi < n <br> 
ai != bi <br> 
The given input represents a valid tree <br> 
