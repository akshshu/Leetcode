## Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in any order. <br> <br> 
Note that the same word in the dictionary may be reused multiple times in the segmentation. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"] <br> 
Output: ["cats and dog","cat sand dog"] <br> 
Example 2: <br> <br> 
Input: s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"] <br> 
Output: ["pine apple pen apple","pineapple pen apple","pine applepen apple"] <br> 
Explanation: Note that you are allowed to reuse a dictionary word. <br> 
Example 3: <br> <br> 
Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"] <br> 
Output: [] <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 20 <br> 
1 <= wordDict.length <= 1000 <br> 
1 <= wordDict[i].length <= 10 <br> 
s and wordDict[i] consist of only lowercase English letters. <br> 
All the strings of wordDict are unique. <br> 
