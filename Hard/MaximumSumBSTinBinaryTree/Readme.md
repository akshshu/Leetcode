## Given a binary tree root, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST). <br> <br> 
Assume a BST is defined as follows: <br> <br> 
The left subtree of a node contains only nodes with keys less than the node's key. <br> 
The right subtree of a node contains only nodes with keys greater than the node's key. <br> 
Both the left and right subtrees must also be binary search trees. <br> <br> <br> 
Example 1: <br> <br> <br> <br> 
Input: root = [1,4,3,2,4,2,5,null,null,null,null,null,null,4,6] <br> 
Output: 20 <br> 
Explanation: Maximum sum in a valid Binary search tree is obtained in root node with key equal to 3. <br> 
Example 2: <br> <br> <br> <br> 
Input: root = [4,3,null,1,2] <br> 
Output: 2 <br> 
Explanation: Maximum sum in a valid Binary search tree is obtained in a single root node with key equal to 2. <br> 
Example 3: <br> <br> 
Input: root = [-4,-2,-5] <br> 
Output: 0 <br> 
Explanation: All values are negatives. Return an empty BST. <br> 
Example 4: <br> <br> 
Input: root = [2,1,3] <br> 
Output: 6 <br> 
Example 5: <br> <br> 
Input: root = [5,4,8,3,null,6,3] <br> 
Output: 7 <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 4 * 104]. <br> 
-4 * 104 <= Node.val <= 4 * 104 <br> 
