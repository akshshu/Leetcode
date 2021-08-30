## The thief has found himself a new place for his thievery again. There is only one entrance to this area, called root. <br> <br> 
Besides the root, each house has one and only one parent house. After a tour, the smart thief realized that all houses in this place form a binary tree. It will automatically contact the police if two directly-linked houses were broken into on the same night. <br> <br> 
Given the root of the binary tree, return the maximum amount of money the thief can rob without alerting the police. <br> 
Input: root = [3,2,3,null,3,null,1] <br> 
Output: 7 <br> 
Explanation: Maximum amount of money the thief can rob = 3 + 3 + 1 = 7. <br> <br> 
Input: root = [3,4,5,1,3,null,1] <br> 
Output: 9 <br> 
Explanation: Maximum amount of money the thief can rob = 4 + 5 = 9. <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the tree is in the range [1, 104]. <br> 
0 <= Node.val <= 104 <br> 
