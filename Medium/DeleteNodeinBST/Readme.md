## Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST. <br> <br> 
Basically, the deletion can be divided into two stages: <br> <br> 
Search for a node to remove. <br> 
If the node is found, delete the node. <br> 
Follow up: Can you solve it with time complexity O(height of tree)? <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [5,3,6,2,4,null,7], key = 3 <br> 
Output: [5,4,6,2,null,null,7] <br> 
Explanation: Given key to delete is 3. So we find the node with value 3 and delete it. <br> 
One valid answer is [5,4,6,2,null,null,7], shown in the above BST. <br> 
Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted. <br> <br> 
Example 2: <br> <br> 
Input: root = [5,3,6,2,4,null,7], key = 0 <br> 
Output: [5,3,6,2,4,null,7] <br> 
Explanation: The tree does not contain a node with value = 0. <br> 
Example 3: <br> <br> 
Input: root = [], key = 0 <br> 
Output: [] <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [0, 104]. <br> 
-105 <= Node.val <= 105 <br> 
Each node has a unique value. <br> 
root is a valid binary search tree. <br> 
-105 <= key <= 105 <br> 
