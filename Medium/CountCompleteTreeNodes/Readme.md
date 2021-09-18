## Given the root of a complete binary tree, return the number of the nodes in the tree. <br> <br> 
According to Wikipedia, every level, except possibly the last, is completely filled in a complete binary tree, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h. <br> <br> 
Design an algorithm that runs in less than O(n) time complexity. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [1,2,3,4,5,6] <br> 
Output: 6 <br> 
Example 2: <br> <br> 
Input: root = [] <br> 
Output: 0 <br> 
Example 3: <br> <br> 
Input: root = [1] <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [0, 5 * 104]. <br> 
0 <= Node.val <= 5 * 104 <br> 
The tree is guaranteed to be complete. <br> 
