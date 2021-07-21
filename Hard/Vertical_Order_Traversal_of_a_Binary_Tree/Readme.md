## Given the root of a binary tree, calculate the vertical order traversal of the binary tree. <br> <br> 
For each node at position (row, col), its left and right children will be at positions (row + 1, col - 1) and (row + 1, col + 1) respectively. The root of the tree is at (0, 0). <br> <br> 
The vertical order traversal of a binary tree is a list of top-to-bottom orderings for each column index starting from the leftmost column and ending on the rightmost column. There may be multiple nodes in the same row and same column. In such a case, sort these nodes by their values. <br> <br> 
Return the vertical order traversal of the binary tree. <br> 
Input: root = [1,2,3,4,6,5,7] <br> 
Output: [[4],[2],[1,5,6],[3],[7]] <br> 
Explanation: <br> 
This case is the exact same as example 2, but with nodes 5 and 6 swapped. <br> 
Note that the solution remains the same since 5 and 6 are in the same location and should be ordered by their values. <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 1000]. <br> 
0 <= Node.val <= 1000 <br> 
