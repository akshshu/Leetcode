## Today, the bookstore owner has a store open for customers.length minutes.  Every minute, some number of customers (customers[i]) enter the store, and all those customers leave after the end of that minute. <br> <br> 
On some minutes, the bookstore owner is grumpy.  If the bookstore owner is grumpy on the i-th minute, grumpy[i] = 1, otherwise grumpy[i] = 0.  When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise they are satisfied. <br> <br> 
The bookstore owner knows a secret technique to keep themselves not grumpy for minutes minutes straight, but can only use it once. <br> <br> 
Return the maximum number of customers that can be satisfied throughout the day. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3 <br> 
Output: 16 <br> 
Explanation: The bookstore owner keeps themselves not grumpy for the last 3 minutes. <br> 
The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16. <br> 
