## There is a forest with an unknown number of rabbits. We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array answers where answers[i] is the answer of the ith rabbit. <br> <br> 
Given the array answers, return the minimum number of rabbits that could be in the forest. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: answers = [1,1,2] <br> 
Output: 5 <br> 
Explanation: <br> 
The two rabbits that answered "1" could both be the same color, say red. <br> 
The rabbit that answered "2" can't be red or the answers would be inconsistent. <br> 
Say the rabbit that answered "2" was blue. <br> 
Then there should be 2 other blue rabbits in the forest that didn't answer into the array. <br> 
The smallest possible number of rabbits in the forest is therefore 5: 3 that answered plus 2 that didn't. <br> 
Example 2: <br> <br> 
Input: answers = [10,10,10] <br> 
Output: 11 <br> 
