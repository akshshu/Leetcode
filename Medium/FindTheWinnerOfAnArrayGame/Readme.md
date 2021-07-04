## Given an integer array arr of distinct integers and an integer k. <br> <br> 
A game will be played between the first two elements of the array (i.e. arr[0] and arr[1]). In each round of the game, we compare arr[0] with arr[1], the larger integer wins and remains at position 0 and the smaller integer moves to the end of the array. The game ends when an integer wins k consecutive rounds. <br> <br> 
Return the integer which will win the game. <br> <br> 
It is guaranteed that there will be a winner of the game. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: arr = [2,1,3,5,4,6,7], k = 2 <br> 
Output: 5 <br> 
Explanation: Let's see the rounds of the game: <br> 
Round |       arr       | winner | win_count <br> 
  1   | [2,1,3,5,4,6,7] | 2      | 1 <br> 
  2   | [2,3,5,4,6,7,1] | 3      | 1 <br> 
  3   | [3,5,4,6,7,1,2] | 5      | 1 <br> 
  4   | [5,4,6,7,1,2,3] | 5      | 2 <br> 
So we can see that 4 rounds will be played and 5 is the winner because it wins 2 consecutive games. <br> 
Example 2: <br> <br> 
Input: arr = [3,2,1], k = 10 <br> 
Output: 3 <br> 
Explanation: 3 will win the first 10 rounds consecutively. <br> 
Example 3: <br> <br> 
Input: arr = [1,9,8,2,3,7,6,4,5], k = 7 <br> 
Output: 9 <br> 
Example 4: <br> <br> 
Input: arr = [1,11,22,33,44,55,66,77,88,99], k = 1000000000 <br> 
Output: 99 <br> <br> <br> 
Constraints: <br> <br> 
2 <= arr.length <= 10^5 <br> 
1 <= arr[i] <= 10^6 <br> 
arr contains distinct integers. <br> 
1 <= k <= 10^9 <br> 
