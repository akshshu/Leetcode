## Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order. <br> <br> 
An integer a is closer to x than an integer b if: <br> <br> 
|a - x| < |b - x|, or <br> 
|a - x| == |b - x| and a < b <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [1,2,3,4,5], k = 4, x = 3 <br> 
Output: [1,2,3,4] <br> 
Example 2: <br> <br> 
Input: arr = [1,2,3,4,5], k = 4, x = -1 <br> 
Output: [1,2,3,4] <br> <br> <br> 
Constraints: <br> <br> 
1 <= k <= arr.length <br> 
1 <= arr.length <= 104 <br> 
arr is sorted in ascending order. <br> 
-104 <= arr[i], x <= 104 <br> 
