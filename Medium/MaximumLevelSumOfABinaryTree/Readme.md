## Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on. <br> <br> 
Return the smallest level x such that the sum of all the values of nodes at level x is maximal. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [1,7,0,7,-8,null,null] <br> 
Output: 2 <br> 
Explanation: <br> 
Level 1 sum = 1. <br> 
Level 2 sum = 7 + 0 = 7. <br> 
Level 3 sum = 7 + -8 = -1. <br> 
So we return the level with the maximum sum which is level 2. <br> 
Example 2: <br> <br> 
Input: root = [989,null,10250,98693,-89388,null,null,null,-32127] <br> 
Output: 2 <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 104]. <br> 
-105 <= Node.val <= 105 <br> 
