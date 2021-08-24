## Given a string expression of numbers and operators, return all possible results from computing all the different possible ways to group numbers and operators. You may return the answer in any order. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: expression = "2-1-1" <br> 
Output: [0,2] <br> 
Explanation: <br> 
((2-1)-1) = 0 <br> 
(2-(1-1)) = 2 <br> 
Example 2: <br> <br> 
Input: expression = "2*3-4*5" <br> 
Output: [-34,-14,-10,-10,10] <br> 
Explanation: <br> 
(2*(3-(4*5))) = -34 <br> 
((2*3)-(4*5)) = -14 <br> 
((2*(3-4))*5) = -10 <br> 
(2*((3-4)*5)) = -10 <br> 
(((2*3)-4)*5) = 10 <br> <br> <br> 
Constraints: <br> <br> 
1 <= expression.length <= 20 <br> 
expression consists of digits and the operator '+', '-', and '*'. <br> 
