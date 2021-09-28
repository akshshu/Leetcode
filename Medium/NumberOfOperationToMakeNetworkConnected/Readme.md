## There are n computers numbered from 0 to n-1 connected by ethernet cables connections forming a network where connections[i] = [a, b] represents a connection between computers a and b. Any computer can reach any other computer directly or indirectly through the network. <br> <br> 
Given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected. Return the minimum number of times you need to do this in order to make all the computers connected. If it's not possible, return -1. <br> <br> <br> <br> 
Example 1: <br> <br> <br> <br> 
Input: n = 4, connections = [[0,1],[0,2],[1,2]] <br> 
Output: 1 <br> 
Explanation: Remove cable between computer 1 and 2 and place between computers 1 and 3. <br> 
Example 2: <br> <br> <br> <br> 
Input: n = 6, connections = [[0,1],[0,2],[0,3],[1,2],[1,3]] <br> 
Output: 2 <br> 
Example 3: <br> <br> 
Input: n = 6, connections = [[0,1],[0,2],[0,3],[1,2]] <br> 
Output: -1 <br> 
Explanation: There are not enough cables. <br> 
Example 4: <br> <br> 
Input: n = 5, connections = [[0,1],[0,2],[3,4],[2,3]] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 10^5 <br> 
1 <= connections.length <= min(n*(n-1)/2, 10^5) <br> 
connections[i].length == 2 <br> 
0 <= connections[i][0], connections[i][1] < n <br> 
connections[i][0] != connections[i][1] <br> 
There are no repeated connections. <br> 
No two computers are connected by more than one cable. <br> 
