## Given the root of a binary tree, flatten the tree into a "linked list": <br> <br> 
The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null. <br> 
The "linked list" should be in the same order as a pre-order traversal of the binary tree. <br> 
Input: root = [1,2,5,3,4,null,6] <br> 
Output: [1,null,2,null,3,null,4,null,5,null,6] <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [0, 2000]. <br> 
-100 <= Node.val <= 100 <br> <br> <br> 
Follow up: Can you flatten the tree in-place (with O(1) extra space)? <br> 
