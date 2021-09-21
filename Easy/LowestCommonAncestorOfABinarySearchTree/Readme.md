## iven a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST. <br> <br> 
According to the definition of LCA on Wikipedia: "The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself)." <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8 <br> 
Output: 6 <br> 
Explanation: The LCA of nodes 2 and 8 is 6. <br> 
Example 2: <br> <br> <br> 
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4 <br> 
Output: 2 <br> 
Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition. <br> 
Example 3: <br> <br> 
Input: root = [2,1], p = 2, q = 1 <br> 
Output: 2 <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [2, 105]. <br> 
-109 <= Node.val <= 109 <br> 
All Node.val are unique. <br> 
p != q <br> 
p and q will exist in the BST. <br> 
