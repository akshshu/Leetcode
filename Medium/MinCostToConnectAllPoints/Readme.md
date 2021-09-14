## You are given an array points representing integer coordinates of some points on a 2D-plane, where points[i] = [xi, yi]. <br> <br> 
The cost of connecting two points [xi, yi] and [xj, yj] is the manhattan distance between them: |xi - xj| + |yi - yj|, where |val| denotes the absolute value of val. <br> <br> 
Return the minimum cost to make all points connected. All points are connected if there is exactly one simple path between any two points. <br> <br> <br> <br> 
Example 1: <br> <br> <br> <br> 
Input: points = [[0,0],[2,2],[3,10],[5,2],[7,0]] <br> 
Output: 20 <br> 
Explanation: <br> <br> 
We can connect the points as shown above to get the minimum cost of 20. <br> 
Notice that there is a unique path between every pair of points. <br> 
Example 2: <br> <br> 
Input: points = [[3,12],[-2,5],[-4,1]] <br> 
Output: 18 <br> 
Example 3: <br> <br> 
Input: points = [[0,0],[1,1],[1,0],[-1,1]] <br> 
Output: 4 <br> 
Example 4: <br> <br> 
Input: points = [[-1000000,-1000000],[1000000,1000000]] <br> 
Output: 4000000 <br> 
Example 5: <br> <br> 
Input: points = [[0,0]] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
1 <= points.length <= 1000 <br> 
-106 <= xi, yi <= 106 <br> 
All pairs (xi, yi) are distinct. <br> 
