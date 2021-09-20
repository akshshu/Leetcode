## Given the array prices where prices[i] is the price of the ith item in a shop. There is a special discount for items in the shop, if you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all. <br> <br> 
Return an array where the ith element is the final price you will pay for the ith item of the shop considering the special discount. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: prices = [8,4,6,2,3] <br> 
Output: [4,2,4,2,3] <br> 
Explanation: <br> 
For item 0 with price[0]=8 you will receive a discount equivalent to prices[1]=4, therefore, the final price you will pay is 8 - 4 = 4. <br> 
For item 1 with price[1]=4 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 4 - 2 = 2. <br> 
For item 2 with price[2]=6 you will receive a discount equivalent to prices[3]=2, therefore, the final price you will pay is 6 - 2 = 4. <br> 
For items 3 and 4 you will not receive any discount at all. <br> 
Example 2: <br> <br> 
Input: prices = [1,2,3,4,5] <br> 
Output: [1,2,3,4,5] <br> 
Explanation: In this case, for all items, you will not receive any discount at all. <br> 
Example 3: <br> <br> 
Input: prices = [10,1,1,6] <br> 
Output: [9,0,1,6] <br> <br> <br> 
Constraints: <br> <br> 
1 <= prices.length <= 500 <br> 
1 <= prices[i] <= 10^3 <br> 
