## You are given an array of n strings strs, all of the same length. <br> <br> 
We may choose any deletion indices, and we delete all the characters in those indices for each string. <br> <br> 
For example, if we have strs = ["abcdef","uvwxyz"] and deletion indices {0, 2, 3}, then the final array after deletions is ["bef", "vyz"]. <br> <br> 
Suppose we chose a set of deletion indices answer such that after deletions, the final array has its elements in lexicographic order (i.e., strs[0] <= strs[1] <= strs[2] <= ... <= strs[n - 1]). Return the minimum possible value of answer.length. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: strs = ["ca","bb","ac"] <br> 
Output: 1 <br> 
Explanation: <br> 
After deleting the first column, strs = ["a", "b", "c"]. <br> 
Now strs is in lexicographic order (ie. strs[0] <= strs[1] <= strs[2]). <br> 
We require at least 1 deletion since initially strs was not in lexicographic order, so the answer is 1. <br> 
Example 2: <br> <br> 
Input: strs = ["xc","yb","za"] <br> 
Output: 0 <br> 
Explanation: <br> 
strs is already in lexicographic order, so we do not need to delete anything. <br> 
Note that the rows of strs are not necessarily in lexicographic order: <br> 
i.e., it is NOT necessarily true that (strs[0][0] <= strs[0][1] <= ...) <br> 
Example 3: <br> <br> 
Input: strs = ["zyx","wvu","tsr"] <br> 
Output: 3 <br> 
Explanation: We have to delete every column. <br> 
