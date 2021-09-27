## Given a binary tree with the following rules: <br> <br> 
root.val == 0 <br> 
If treeNode.val == x and treeNode.left != null, then treeNode.left.val == 2 * x + 1 <br> 
If treeNode.val == x and treeNode.right != null, then treeNode.right.val == 2 * x + 2 <br> 
Now the binary tree is contaminated, which means all treeNode.val have been changed to -1. <br> <br> 
Implement the FindElements class: <br> <br> 
FindElements(TreeNode* root) Initializes the object with a contaminated binary tree and recovers it. <br> 
bool find(int target) Returns true if the target value exists in the recovered binary tree. <br> <br> <br> 
Example 1: <br> <br> <br> 
Input <br> 
["FindElements","find","find"] <br> 
[[[-1,null,-1]],[1],[2]] <br> 
Output <br> 
[null,false,true] <br> 
Explanation <br> 
FindElements findElements = new FindElements([-1,null,-1]); <br> 
findElements.find(1); // return False <br> 
findElements.find(2); // return True <br> 
Example 2: <br> <br> <br> 
Input <br> 
["FindElements","find","find","find"] <br> 
[[[-1,-1,-1,-1,-1]],[1],[3],[5]] <br> 
Output <br> 
[null,true,true,false] <br> 
Explanation <br> 
FindElements findElements = new FindElements([-1,-1,-1,-1,-1]); <br> 
findElements.find(1); // return True <br> 
findElements.find(3); // return True <br> 
findElements.find(5); // return False <br> 
Example 3: <br> <br> <br> 
Input <br> 
["FindElements","find","find","find","find"] <br> 
[[[-1,null,-1,-1,null,-1]],[2],[3],[4],[5]] <br> 
Output <br> 
[null,true,false,false,true] <br> 
Explanation <br> 
FindElements findElements = new FindElements([-1,null,-1,-1,null,-1]); <br> 
findElements.find(2); // return True <br> 
findElements.find(3); // return False <br> 
findElements.find(4); // return False <br> 
findElements.find(5); // return True <br> <br> <br> 
Constraints: <br> <br> 
TreeNode.val == -1 <br> 
The height of the binary tree is less than or equal to 20 <br> 
The total number of nodes is between [1, 104] <br> 
Total calls of find() is between [1, 104] <br> 
0 <= target <= 106 <br> 
