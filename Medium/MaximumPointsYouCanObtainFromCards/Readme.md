## There are several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints. <br> <br> 
In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards. <br> <br> 
Your score is the sum of the points of the cards you have taken. <br> <br> 
Given the integer array cardPoints and the integer k, return the maximum score you can obtain. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: cardPoints = [1,2,3,4,5,6,1], k = 3 <br> 
Output: 12 <br> 
Explanation: After the first step, your score will always be 1. However, choosing the rightmost card first will maximize your total score. The optimal strategy is to take the three cards on the right, giving a final score of 1 + 6 + 5 = 12. <br> 
Example 2: <br> <br> 
Input: cardPoints = [2,2,2], k = 2 <br> 
Output: 4 <br> 
Explanation: Regardless of which two cards you take, your score will always be 4. <br> 
Example 3: <br> <br> 
Input: cardPoints = [9,7,7,9,7,7,9], k = 7 <br> 
Output: 55 <br> 
Explanation: You have to take all the cards. Your score is the sum of points of all cards. <br> 
Example 4: <br> <br> 
Input: cardPoints = [1,1000,1], k = 1 <br> 
Output: 1 <br> 
Explanation: You cannot take the card in the middle. Your best score is 1. <br> 
Example 5: <br> <br> 
Input: cardPoints = [1,79,80,1,1,1,200,1], k = 3 <br> 
Output: 202 <br> <br> <br> 
Constraints: <br> <br> 
1 <= cardPoints.length <= 105 <br> 
1 <= cardPoints[i] <= 104 <br> 
1 <= k <= cardPoints.length <br> 
