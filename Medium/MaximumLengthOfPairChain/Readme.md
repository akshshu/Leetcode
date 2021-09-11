## You are given an array of n pairs pairs where pairs[i] = [lefti, righti] and lefti < righti. <br> <br> 
A pair p2 = [c, d] follows a pair p1 = [a, b] if b < c. A chain of pairs can be formed in this fashion. <br> <br> 
Return the length longest chain which can be formed. <br> <br> 
You do not need to use up all the given intervals. You can select pairs in any order. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: pairs = [[1,2],[2,3],[3,4]] <br> 
Output: 2 <br> 
Explanation: The longest chain is [1,2] -> [3,4]. <br> 
Example 2: <br> <br> 
Input: pairs = [[1,2],[7,8],[4,5]] <br> 
Output: 3 <br> 
Explanation: The longest chain is [1,2] -> [4,5] -> [7,8]. <br> <br> <br> 
Constraints: <br> <br> 
n == pairs.length <br> 
1 <= n <= 1000 <br> 
-1000 <= lefti < righti <= 1000 <br> 
