## Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment. <br> <br> 
Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure. <br> <br> 
Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: root = [1,2,3,null,null,4,5] <br> 
Output: [1,2,3,null,null,4,5] <br> 
Example 2: <br> <br> 
Input: root = [] <br> 
Output: [] <br> 
Example 3: <br> <br> 
Input: root = [1] <br> 
Output: [1] <br> 
Example 4: <br> <br> 
Input: root = [1,2] <br> 
Output: [1,2] <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [0, 104]. <br> 
-1000 <= Node.val <= 1000 <br> 
