## Problem Description <br> <br> 
You are given the map of a city having A houses, in form of an undirected graph B, where B[i] denotes a road between <br> 
houses B[i][0] and B[i][1] having length B[i][2]. <br> <br> 
For a given pair of houses C and D, You have to tell the shortest road that can exist in a shortest path between them. <br> <br> 
NOTE: It is guaranteed that there exists always exists a path between C and D, i.e, they are always connected. <br> <br> <br> <br> 
Problem Constraints <br> 
 2 <= A <= 105 <br> <br> 
 1 <= |B| <= 106 <br> <br> 
 1 <= A[i][0], A[i][1] <= N <br> <br> 
 1 <= A[i][2] <= 109 <br> <br> 
 C is not equal to D. <br> <br> <br> <br> 
Input Format <br> 
First argument is an integer A. <br> <br> 
Second argument is a 2-D integer matrix B. <br> <br> 
Third argument is an integer C. <br> <br> 
Fourth argument is an integer D. <br> <br> <br> <br> 
Output Format <br> 
Return an integer denoting length of required shortest edge. <br> <br> <br> <br> 
Example Input <br> 
Input 1: <br> <br> 
 A = 7 <br> 
 B = [1 2 2] <br> 
     [2 3 8] <br> 
     [1 7 3] <br> 
     [7 4 2] <br> 
     [4 3 5] <br> 
     [1 5 3] <br> 
     [5 3 7] <br> 
     [1 6 1] <br> 
 C = 1 <br> 
 D = 3 <br> 
Input 2: <br> <br> 
 A = 4 <br> 
 B = [1 2 1] <br> 
     [2 3 1] <br> 
     [1 3 2] <br> 
     [3 4 1] <br> 
 C = 2 <br> 
 D = 4 <br> <br> <br> 
Example Output <br> 
Output 1: <br> <br> 
 2 <br> 
Output 2: <br> <br> 
 2 <br> <br> <br> 
Example Explanation <br> 
Explanation 1: <br> <br> <br> 
graph-5 <br> <br> <br> 
 In the graph, we need to go from house 1 to house 3. None of the shortest path includes road [1 6 1], so it can never give the answer. <br> 
 There are 3 shortest paths between house 1 and house 3: <br> 
 1) 1 -> 2 -> 3 = Total length = 10 <br> 
 2) 1 -> 5 -> 3 = Total length = 10 <br> 
 3) 1 -> 7 -> 4 -> 3 = Total length = 10 <br> 
 So, edges [1 2 2], [2 3 8], [1 5 3], [5 3 7], [1 7 3], [7 4 2] and [4 3 5] are each part of one of shortest paths between houses 1 and 3. <br> 
 Hence, the shortest road length in a shortest path = 2 <br> 
Explanation 2: <br> <br> <br> 
graph-6 <br> <br> <br> 
 There is only one shortest path between C and D : 2 -> 3 -> 4. <br> 
 The shortest road in the path has length = 1. <br> <br> <br> 
Note:You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, instead return values as specified. Still have a doubt? Checkout Sample Codes for more details. <br> 
