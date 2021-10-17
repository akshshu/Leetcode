## There are n soldiers standing in a line. Each soldier is assigned a unique rating value. <br> <br> 
You have to form a team of 3 soldiers amongst them under the following rules: <br> <br> 
Choose 3 soldiers with index (i, j, k) with rating (rating[i], rating[j], rating[k]). <br> 
A team is valid if: (rating[i] < rating[j] < rating[k]) or (rating[i] > rating[j] > rating[k]) where (0 <= i < j < k < n). <br> 
Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams). <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: rating = [2,5,3,4,1] <br> 
Output: 3 <br> 
Explanation: We can form three teams given the conditions. (2,3,4), (5,4,1), (5,3,1). <br> 
Example 2: <br> <br> 
Input: rating = [2,1,3] <br> 
Output: 0 <br> 
Explanation: We can't form any team given the conditions. <br> 
Example 3: <br> <br> 
Input: rating = [1,2,3,4] <br> 
Output: 4 <br> <br> <br> 
Constraints: <br> <br> 
n == rating.length <br> 
3 <= n <= 1000 <br> 
1 <= rating[i] <= 105 <br> 
All the integers in rating are unique. <br> 
