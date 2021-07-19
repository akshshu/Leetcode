## You are given n points in the plane that are all distinct, where points[i] = [xi, yi]. A boomerang is a tuple of points (i, j, k) such that the distance between i and j equals the distance between i and k (the order of the tuple matters). <br> <br> 
Return the number of boomerangs. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: points = [[0,0],[1,0],[2,0]] <br> 
Output: 2 <br> 
Explanation: The two boomerangs are [[1,0],[0,0],[2,0]] and [[1,0],[2,0],[0,0]]. <br> 
Example 2: <br> <br> 
Input: points = [[1,1],[2,2],[3,3]] <br> 
Output: 2 <br> 
Example 3: <br> <br> 
Input: points = [[1,1]] <br> 
Output: 0 <br> <br> <br> 
Constraints: <br> <br> 
n == points.length <br> 
1 <= n <= 500 <br> 
points[i].length == 2 <br> 
-104 <= xi, yi <= 104 <br> 
All the points are unique. <br> 
