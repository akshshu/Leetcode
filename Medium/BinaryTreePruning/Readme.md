## Given the root of a binary tree, return the same tree where every subtree (of the given tree) not containing a 1 has been removed. <br> <br> 
A subtree of a node node is node plus every node that is a descendant of node. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [1,null,0,0,1] <br> 
Output: [1,null,0,null,1] <br> 
Explanation: <br> 
Only the red nodes satisfy the property "every subtree not containing a 1". <br> 
The diagram on the right represents the answer. <br> 
Example 2: <br> <br> <br> 
Input: root = [1,0,1,0,0,0,1] <br> 
Output: [1,null,1,null,1] <br> 
Example 3: <br> <br> <br> 
Input: root = [1,1,0,1,1,0,1,0] <br> 
Output: [1,1,0,1,1,null,1] <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 200]. <br> 
Node.val is either 0 or 1. <br> 
