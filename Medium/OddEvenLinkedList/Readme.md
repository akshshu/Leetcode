## Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list. <br> <br> 
The first node is considered odd, and the second node is even, and so on. <br> <br> 
Note that the relative order inside both the even and odd groups should remain as it was in the input. <br> <br> 
You must solve the problem in O(1) extra space complexity and O(n) time complexity. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: head = [1,2,3,4,5] <br> 
Output: [1,3,5,2,4] <br> 
Example 2: <br> <br> <br> 
Input: head = [2,1,3,5,6,4,7] <br> 
Output: [2,3,6,7,1,5,4] <br> <br> <br> 
Constraints: <br> <br> 
n == number of nodes in the linked list <br> 
0 <= n <= 104 <br> 
-106 <= Node.val <= 106 <br> 
