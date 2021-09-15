## Given an integer array arr, return the length of a maximum size turbulent subarray of arr. <br> <br> 
A subarray is turbulent if the comparison sign flips between each adjacent pair of elements in the subarray. <br> <br> 
More formally, a subarray [arr[i], arr[i + 1], ..., arr[j]] of arr is said to be turbulent if and only if: <br> <br> 
For i <= k < j: <br> 
arr[k] > arr[k + 1] when k is odd, and <br> 
arr[k] < arr[k + 1] when k is even. <br> 
Or, for i <= k < j: <br> 
arr[k] > arr[k + 1] when k is even, and <br> 
arr[k] < arr[k + 1] when k is odd. <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [9,4,2,10,7,8,8,1,9] <br> 
Output: 5 <br> 
Explanation: arr[1] > arr[2] < arr[3] > arr[4] < arr[5] <br> 
Example 2: <br> <br> 
Input: arr = [4,8,12,16] <br> 
Output: 2 <br> 
Example 3: <br> <br> 
Input: arr = [100] <br> 
Output: 1 <br> <br> <br> 
Constraints: <br> <br> 
1 <= arr.length <= 4 * 104 <br> 
0 <= arr[i] <= 109 <br> 
