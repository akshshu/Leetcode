## Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words. <br> <br> 
Note that the same word in the dictionary may be reused multiple times in the segmentation. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: s = "leetcode", wordDict = ["leet","code"] <br> 
Output: true <br> 
Explanation: Return true because "leetcode" can be segmented as "leet code". <br> 
Example 2: <br> <br> 
Input: s = "applepenapple", wordDict = ["apple","pen"] <br> 
Output: true <br> 
Explanation: Return true because "applepenapple" can be segmented as "apple pen apple". <br> 
Note that you are allowed to reuse a dictionary word. <br> 
Example 3: <br> <br> 
Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"] <br> 
Output: false <br> <br> <br> 
Constraints: <br> <br> 
1 <= s.length <= 300 <br> 
1 <= wordDict.length <= 1000 <br> 
1 <= wordDict[i].length <= 20 <br> 
s and wordDict[i] consist of only lowercase English letters. <br> 
All the strings of wordDict are unique. <br> 
