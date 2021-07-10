## Given a singly linked list, return a random node's value from the linked list. Each node must have the same probability of being chosen. <br> <br> 
Input <br> 
["Solution", "getRandom", "getRandom", "getRandom", "getRandom", "getRandom"] <br> 
[[[1, 2, 3]], [], [], [], [], []] <br> 
Output <br> 
[null, 1, 3, 2, 2, 3] <br> <br> 
Explanation <br> 
Solution solution = new Solution([1, 2, 3]); <br> 
solution.getRandom(); // return 1 <br> 
solution.getRandom(); // return 3 <br> 
solution.getRandom(); // return 2 <br> 
solution.getRandom(); // return 2 <br> 
solution.getRandom(); // return 3 <br> 
// getRandom() should return either 1, 2, or 3 randomly. Each element should have equal probability of returning. <br> <br> <br> 
Constraints: <br> <br> 
The number of nodes in the linked list will be in the range [1, 104]. <br> 
-104 <= Node.val <= 104 <br> 
At most 104 calls will be made to getRandom. <br> <br> <br> 
Follow up: <br> <br> 
What if the linked list is extremely large and its length is unknown to you? <br> 
Could you solve this efficiently without using extra space? <br> 
