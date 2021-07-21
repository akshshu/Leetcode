## Given the root of a binary tree with unique values and the values of two different nodes of the tree x and y, return true if the nodes corresponding to the values x and y in the tree are cousins, or false otherwise. <br> <br> 
Two nodes of a binary tree are cousins if they have the same depth with different parents. <br> <br> 
Note that in a binary tree, the root node is at the depth 0, and children of each depth k node are at the depth k + 1. <br> 
Input: root = [1,2,3,null,4], x = 2, y = 3 <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [2, 100]. <br> 
1 <= Node.val <= 100 <br> 
Each node has a unique value. <br> 
x != y <br> 
x and y are exist in the tree. <br> 
