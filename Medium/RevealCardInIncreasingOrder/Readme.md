## You are given an integer array deck. There is a deck of cards where every card has a unique integer. The integer on the ith card is deck[i]. <br> <br> 
You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck. <br> <br> 
You will do the following steps repeatedly until all cards are revealed: <br> <br> 
Take the top card of the deck, reveal it, and take it out of the deck. <br> 
If there are still cards in the deck then put the next top card of the deck at the bottom of the deck. <br> 
If there are still unrevealed cards, go back to step 1. Otherwise, stop. <br> 
Return an ordering of the deck that would reveal the cards in increasing order. <br> <br> 
Note that the first entry in the answer is considered to be the top of the deck. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: deck = [17,13,11,2,3,5,7] <br> 
Output: [2,13,3,11,5,17,7] <br> 
Explanation: <br> 
We get the deck in the order [17,13,11,2,3,5,7] (this order does not matter), and reorder it. <br> 
After reordering, the deck starts as [2,13,3,11,5,17,7], where 2 is the top of the deck. <br> 
We reveal 2, and move 13 to the bottom.  The deck is now [3,11,5,17,7,13]. <br> 
We reveal 3, and move 11 to the bottom.  The deck is now [5,17,7,13,11]. <br> 
We reveal 5, and move 17 to the bottom.  The deck is now [7,13,11,17]. <br> 
We reveal 7, and move 13 to the bottom.  The deck is now [11,17,13]. <br> 
We reveal 11, and move 17 to the bottom.  The deck is now [13,17]. <br> 
We reveal 13, and move 17 to the bottom.  The deck is now [17]. <br> 
We reveal 17. <br> 
Since all the cards revealed are in increasing order, the answer is correct. <br> 
Example 2: <br> <br> 
Input: deck = [1,1000] <br> 
Output: [1,1000] <br> <br> <br> 
Constraints: <br> <br> 
1 <= deck.length <= 1000 <br> 
1 <= deck[i] <= 106 <br> 
All the values of deck are unique. <br> 
