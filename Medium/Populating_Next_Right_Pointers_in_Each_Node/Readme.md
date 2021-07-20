## You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. The binary tree has the following definition: <br> <br> 
struct Node { <br> 
  int val; <br> 
  Node *left; <br> 
  Node *right; <br> 
  Node *next; <br> 
} <br> 
Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL. <br> <br> 
Initially, all next pointers are set to NULL. <br> <br> <br> <br> 
Follow up: <br> <br> 
You may only use constant extra space. <br> 
Recursive approach is fine, you may assume implicit stack space does not count as extra space for this problem. <br> 
Input: root = [1,2,3,4,5,6,7] <br> 
Output: [1,#,2,3,#,4,5,6,7,#] <br> 
Explanation: Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level. <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the given tree is less than 4096. <br> 
-1000 <= node.val <= 1000 <br> 
