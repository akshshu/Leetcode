## Given the root of a Binary Search Tree (BST), convert it to a Greater Tree such that every key of the original BST is changed to the original key plus the sum of all keys greater than the original key in BST. <br> <br> 
As a reminder, a binary search tree is a tree that satisfies these constraints: <br> <br> 
The left subtree of a node contains only nodes with keys less than the node's key. <br> 
The right subtree of a node contains only nodes with keys greater than the node's key. <br> 
Both the left and right subtrees must also be binary search trees. <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [4,1,6,0,2,5,7,null,null,null,3,null,null,null,8] <br> 
Output: [30,36,21,36,35,26,15,null,null,null,33,null,null,null,8] <br> 
Example 2: <br> <br> 
Input: root = [0,null,1] <br> 
Output: [1,null,1] <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 100]. <br> 
0 <= Node.val <= 100 <br> 
All the values in the tree are unique. <br> <br> <br> 
Note: This question is the same as 538: https://leetcode.com/problems/convert-bst-to-greater-tree/ <br> 
