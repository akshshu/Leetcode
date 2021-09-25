## We run a preorder depth-first search (DFS) on the root of a binary tree. <br> <br> 
At each node in this traversal, we output D dashes (where D is the depth of this node), then we output the value of this node.  If the depth of a node is D, the depth of its immediate child is D + 1.  The depth of the root node is 0. <br> <br> 
If a node has only one child, that child is guaranteed to be the left child. <br> <br> 
Given the output traversal of this traversal, recover the tree and return its root. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: traversal = "1-2--3--4-5--6--7" <br> 
Output: [1,2,5,3,4,6,7] <br> 
Example 2: <br> <br> <br> 
Input: traversal = "1-2--3---4-5--6---7" <br> 
Output: [1,2,5,3,null,6,null,4,null,7] <br> 
Example 3: <br> <br> <br> 
Input: traversal = "1-401--349---90--88" <br> 
Output: [1,401,null,349,88,90] <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the original tree is in the range [1, 1000]. <br> 
1 <= Node.val <= 109 <br> <br> 
Approach :  Just Recursively Go through nodes -and count number of dashes if dashes==level+1 go to its left if not equal store the number of dashes in global variable nd return nullptr; check on last if globaldash=numlevel <br> 
+1 <br> 
and then make call to right node <br> 