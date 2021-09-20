## You are playing a game that contains multiple characters, and each of the characters has two main properties: attack and defense. You are given a 2D integer array properties where properties[i] = [attacki, defensei] represents the properties of the ith character in the game. <br> <br> 
A character is said to be weak if any other character has both attack and defense levels strictly greater than this character's attack and defense levels. More formally, a character i is said to be weak if there exists another character j where attackj > attacki and defensej > defensei. <br> <br> 
Return the number of weak characters. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: properties = [[5,5],[6,3],[3,6]] <br> 
Output: 0 <br> 
Explanation: No character has strictly greater attack and defense than the other. <br> 
Example 2: <br> <br> 
Input: properties = [[2,2],[3,3]] <br> 
Output: 1 <br> 
Explanation: The first character is weak because the second character has a strictly greater attack and defense. <br> 
Example 3: <br> <br> 
Input: properties = [[1,5],[10,4],[4,3]] <br> 
Output: 1 <br> 
Explanation: The third character is weak because the second character has a strictly greater attack and defense. <br> <br> <br> 
Constraints: <br> <br> 
2 <= properties.length <= 105 <br> 
properties[i].length == 2 <br> 
1 <= attacki, defensei <= 105 <br> 
