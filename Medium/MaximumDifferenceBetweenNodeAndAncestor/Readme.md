## Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b. <br> <br> 
A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of b. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [8,3,10,1,6,null,14,null,null,4,7,13] <br> 
Output: 7 <br> 
Explanation: We have various ancestor-node differences, some of which are given below : <br> 
|8 - 3| = 5 <br> 
|3 - 7| = 4 <br> 
|8 - 1| = 7 <br> 
|10 - 13| = 3 <br> 
Among all possible differences, the maximum value of 7 is obtained by |8 - 1| = 7. <br> 
Example 2: <br> <br> <br> 
Input: root = [1,null,2,null,0,3] <br> 
Output: 3 <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [2, 5000]. <br> 
0 <= Node.val <= 105 <br> 
