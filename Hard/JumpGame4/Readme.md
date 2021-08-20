## Given an array of integers arr, you are initially positioned at the first index of the array. <br> <br> 
In one step you can jump from index i to index: <br> <br> 
i + 1 where: i + 1 < arr.length. <br> 
i - 1 where: i - 1 >= 0. <br> 
j where: arr[i] == arr[j] and i != j. <br> 
Return the minimum number of steps to reach the last index of the array. <br> <br> 
Notice that you can not jump outside of the array at any time. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [100,-23,-23,404,100,23,23,23,3,404] <br> 
Output: 3 <br> 
Explanation: You need three jumps from index 0 --> 4 --> 3 --> 9. Note that index 9 is the last index of the array. <br> 
Example 2: <br> <br> 
Input: arr = [7] <br> 
Output: 0 <br> 
Explanation: Start index is the last index. You don't need to jump. <br> 
Example 3: <br> <br> 
Input: arr = [7,6,9,6,9,6,9,7] <br> 
Output: 1 <br> 
Explanation: You can jump directly from index 0 to index 7 which is last index of the array. <br> 
Example 4: <br> <br> 
Input: arr = [6,1,9] <br> 
Output: 2 <br> 
Example 5: <br> <br> 
Input: arr = [11,22,7,7,7,7,7,7,7,22,13] <br> 
Output: 3 <br> <br> <br> 
Constraints: <br> <br> 
1 <= arr.length <= 5 * 104 <br> 
-108 <= arr[i] <= 108 <br> 
