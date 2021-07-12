## Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3] <br> 
Output: [3,9,20,null,null,15,7] <br> 
Example 2: <br> <br> 
Input: inorder = [-1], postorder = [-1] <br> 
Output: [-1] <br> <br> <br> 
Constraints: <br> <br> 
1 <= inorder.length <= 3000 <br> 
postorder.length == inorder.length <br> 
-3000 <= inorder[i], postorder[i] <= 3000 <br> 
inorder and postorder consist of unique values. <br> 
Each value of postorder also appears in inorder. <br> 
inorder is guaranteed to be the inorder traversal of the tree. <br> 
postorder is guaranteed to be the postorder traversal of the tree. <br> 
