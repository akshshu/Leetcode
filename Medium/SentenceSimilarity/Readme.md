## Description <br> 
Given two sentences words1, words2 (each represented as an array of strings), and a list of similar word pairs pairs, determine if two sentences are similar. <br> <br> 
For example, words1 = great acting skills and words2 = fine drama talent are similar, if the similar word pairs are pairs = [["great", "fine"], ["acting","drama"], ["skills","talent"]]. <br> <br> 
Note that the similarity relation is not transitive. For example, if "great" and "fine" are similar, and "fine" and "good" are similar, "great" and "good" are not necessarily similar. <br> <br> 
However, similarity is symmetric. For example, "great" and "fine" being similar is the same as "fine" and "great" being similar. <br> <br> 
Also, a word is always similar with itself. For example, the sentences words1 = ["great"], words2 = ["great"], pairs = [] are similar, even though there are no specified similar word pairs. <br> <br> 
Finally, sentences can only be similar if they have the same number of words. So a sentence like words1 = ["great"] can never be similar to words2 = ["doubleplus","good"]. <br> <br> 
1.The length of words1 and words2 will not exceed 1000. <br> 
2.The length of pairs will not exceed 2000. <br> 
3.The length of each pairs[i] will be 2. <br> 
4.The length of each words[i] and pairs[i][j] will be in the range [1, 20]. <br> <br> 
Example <br> 
Example1 <br> <br> 
Input: words1 = ["great","acting","skills"], words2 = ["fine","drama","talent"] and pairs = [["great","fine"],["drama","acting"],["skills","talent"]] <br> 
Output: true <br> 
Explanation: <br> 
"great" is similar with "fine" <br> 
"acting" is similar with "drama" <br> 
"skills" is similar with "talent" <br> 
Example2 <br> <br> 
Input: words1 = ["fine","skills","acting"], words2 = ["fine","drama","talent"] and pairs = [["great","fine"],["drama","acting"],["skills","talent"]] <br> 
Output: false <br> 
Explanation: <br> 
"fine" is the same as "fine" <br> 
"skills" is not similar with "drama" <br> 
"acting" is not similar with "talent" <br> 
Tags <br> 
Company <br> 
Google <br> 
