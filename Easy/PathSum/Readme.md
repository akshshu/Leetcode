## Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum. <br> <br> 
A leaf is a node with no children. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22 <br> 
Output: true <br> 
Example 2: <br> <br> <br> 
Input: root = [1,2,3], targetSum = 5 <br> 
Output: false <br> 
Example 3: <br> <br> 
Input: root = [1,2], targetSum = 0 <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [0, 5000]. <br> 
-1000 <= Node.val <= 1000 <br> 
-1000 <= targetSum <= 1000 <br> 
