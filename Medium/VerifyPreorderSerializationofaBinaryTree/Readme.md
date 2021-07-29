## One way to serialize a binary tree is to use preorder traversal. When we encounter a non-null node, we record the node's value. If it is a null node, we record using a sentinel value such as '#'. <br> 
For example, the above binary tree can be serialized to the string "9,3,4,#,#,1,#,#,2,#,6,#,#", where '#' represents a null node. <br> <br> 
Given a string of comma-separated values preorder, return true if it is a correct preorder traversal serialization of a binary tree. <br> <br> 
It is guaranteed that each comma-separated value in the string must be either an integer or a character '#' representing null pointer. <br> <br> 
You may assume that the input format is always valid. <br> <br> 
For example, it could never contain two consecutive commas, such as "1,,3". <br> 
Note: You are not allowed to reconstruct the tree. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#" <br> 
Output: true <br> 
Example 2: <br> <br> 
Input: preorder = "1,#" <br> 
Output: false <br> 
Example 3: <br> <br> 
Input: preorder = "9,#,#,1" <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
1 <= preorder.length <= 104 <br> 
preoder consist of integers in the range [0, 100] and '#' separated by commas ','. <br> 
Company: Google! <br> 
