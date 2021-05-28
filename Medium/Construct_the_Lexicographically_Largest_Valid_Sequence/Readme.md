## Given an integer n, find a sequence that satisfies all of the following: <br> <br> 
The integer 1 occurs once in the sequence. <br> 
Each integer between 2 and n occurs twice in the sequence. <br> 
For every integer i between 2 and n, the distance between the two occurrences of i is exactly i. <br> 
The distance between two numbers on the sequence, a[i] and a[j], is the absolute difference of their indices, |j - i|. <br> <br> 
Return the lexicographically largest sequence. It is guaranteed that under the given constraints, there is always a solution. <br> <br> 
A sequence a is lexicographically larger than a sequence b (of the same length) if in the first position where a and b differ, sequence a has a number greater than the corresponding number in b. For example, [0,1,9,0] is lexicographically larger than [0,1,5,6] because the first position they differ is at the third number, and 9 is greater than 5. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 3 <br> 
Output: [3,1,2,3,2] <br> 
Explanation: [2,3,2,1,3] is also a valid sequence, but [3,1,2,3,2] is the lexicographically largest valid sequence. <br> 
