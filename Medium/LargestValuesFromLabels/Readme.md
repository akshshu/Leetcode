## There is a set of n items. You are given two integer arrays values and labels where the value and the label of the ith element are values[i] and labels[i] respectively. You are also given two integers numWanted and useLimit. <br> <br> 
Choose a subset s of the n elements such that: <br> <br> 
The size of the subset s is less than or equal to numWanted. <br> 
There are at most useLimit items with the same label in s. <br> 
The score of a subset is the sum of the values in the subset. <br> <br> 
Return the maximum score of a subset s. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: values = [5,4,3,2,1], labels = [1,1,2,2,3], numWanted = 3, useLimit = 1 <br> 
Output: 9 <br> 
Explanation: The subset chosen is the first, third, and fifth items. <br> 
Example 2: <br> <br> 
Input: values = [5,4,3,2,1], labels = [1,3,3,3,2], numWanted = 3, useLimit = 2 <br> 
Output: 12 <br> 
Explanation: The subset chosen is the first, second, and third items. <br> 
Example 3: <br> <br> 
Input: values = [9,8,8,7,6], labels = [0,0,0,1,1], numWanted = 3, useLimit = 1 <br> 
Output: 16 <br> 
Explanation: The subset chosen is the first and fourth items. <br> 
Example 4: <br> <br> 
Input: values = [9,8,8,7,6], labels = [0,0,0,1,1], numWanted = 3, useLimit = 2 <br> 
Output: 24 <br> 
Explanation: The subset chosen is the first, second, and fourth items. <br> <br> <br> 
Constraints: <br> <br> 
n == values.length == labels.length <br> 
1 <= n <= 2 * 104 <br> 
0 <= values[i], labels[i] <= 2 * 104 <br> 
1 <= numWanted, useLimit <= n <br> 
