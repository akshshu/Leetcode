## Given an integer array A[ ] of size N, the task is to find a subsequence of size B such that the minimum difference between any two of them is maximum and print this largest minimum difference. <br> 
Efficient Approach: <br> 
Follow the steps below to optimize the above approach using Binary Search: <br> <br> 
Set the search space from 0 to maximum element in the array(maxm) <br> 
For each calculated mid, check whether it is possible to get a subsequence of size B with a minimum difference among any pair equal to mid. <br> 
If it is possible, then store mid in a variable and find a better answer in the right half and discard the left half of the mid <br> 
Otherwise, traverse the left half of the mid, to check if a subsequence with smaller minimum difference of pairs exists. <br> 
Finally, after termination of the binary search, print the highest mid for which any subsequence with minimum difference of pairs equal to mid was found. <br> 
