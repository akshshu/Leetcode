## There are n cities numbered from 0 to n-1. Given the array edges where edges[i] = [fromi, toi, weighti] represents a bidirectional and weighted edge between cities fromi and toi, and given the integer distanceThreshold. <br> <br> 
Return the city with the smallest number of cities that are reachable through some path and whose distance is at most distanceThreshold, If there are multiple such cities, return the city with the greatest number. <br> <br> 
Notice that the distance of a path connecting cities i and j is equal to the sum of the edges' weights along that path. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: n = 4, edges = [[0,1,3],[1,2,1],[1,3,4],[2,3,1]], distanceThreshold = 4 <br> 
Output: 3 <br> 
Explanation: The figure above describes the graph. <br> 
The neighboring cities at a distanceThreshold = 4 for each city are: <br> 
City 0 -> [City 1, City 2] <br> 
City 1 -> [City 0, City 2, City 3] <br> 
City 2 -> [City 0, City 1, City 3] <br> 
City 3 -> [City 1, City 2] <br> 
Cities 0 and 3 have 2 neighboring cities at a distanceThreshold = 4, but we have to return city 3 since it has the greatest number. <br> 
Example 2: <br> <br> <br> 
Input: n = 5, edges = [[0,1,2],[0,4,8],[1,2,3],[1,4,2],[2,3,1],[3,4,1]], distanceThreshold = 2 <br> 
Output: 0 <br> 
Explanation: The figure above describes the graph. <br> 
The neighboring cities at a distanceThreshold = 2 for each city are: <br> 
City 0 -> [City 1] <br> 
City 1 -> [City 0, City 4] <br> 
City 2 -> [City 3, City 4] <br> 
City 3 -> [City 2, City 4] <br> 
City 4 -> [City 1, City 2, City 3] <br> 
The city 0 has 1 neighboring city at a distanceThreshold = 2. <br> <br> <br> 
Constraints: <br> <br> 
2 <= n <= 100 <br> 
1 <= edges.length <= n * (n - 1) / 2 <br> 
edges[i].length == 3 <br> 
0 <= fromi < toi < n <br> 
1 <= weighti, distanceThreshold <= 10^4 <br> 
All pairs (fromi, toi) are distinct. <br> 
