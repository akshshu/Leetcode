## A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root. <br> <br> 
The path sum of a path is the sum of the node's values in the path. <br> <br> 
Given the root of a binary tree, return the maximum path sum of any path. <br> 
Input: root = [1,2,3] <br> 
Output: 6 <br> 
Explanation: The optimal path is 2 -> 1 -> 3 with a path sum of 2 + 1 + 3 = 6. <br> 
Input: root = [-10,9,20,null,null,15,7] <br> 
Output: 42 <br> 
Explanation: The optimal path is 15 -> 20 -> 7 with a path sum of 15 + 20 + 7 = 42. <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 3 * 104]. <br> 
-1000 <= Node.val <= 1000 <br> 
