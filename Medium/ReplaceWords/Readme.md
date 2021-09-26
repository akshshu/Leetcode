## In English, we have a concept called root, which can be followed by some other word to form another longer word - let's call this word successor. For example, when the root "an" is followed by the successor word "other", we can form a new word "another". <br> <br> 
Given a dictionary consisting of many roots and a sentence consisting of words separated by spaces, replace all the successors in the sentence with the root forming it. If a successor can be replaced by more than one root, replace it with the root that has the shortest length. <br> <br> 
Return the sentence after the replacement. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery" <br> 
Output: "the cat was rat by the bat" <br> 
Example 2: <br> <br> 
Input: dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs" <br> 
Output: "a a b c" <br> 
Example 3: <br> <br> 
Input: dictionary = ["a", "aa", "aaa", "aaaa"], sentence = "a aa a aaaa aaa aaa aaa aaaaaa bbb baba ababa" <br> 
Output: "a a a a a a a a bbb baba a" <br> 
Example 4: <br> <br> 
Input: dictionary = ["catt","cat","bat","rat"], sentence = "the cattle was rattled by the battery" <br> 
Output: "the cat was rat by the bat" <br> 
Example 5: <br> <br> 
Input: dictionary = ["ac","ab"], sentence = "it is abnormal that this solution is accepted" <br> 
Output: "it is ab that this solution is ac" <br> <br> <br> 
Constraints: <br> <br> 
1 <= dictionary.length <= 1000 <br> 
1 <= dictionary[i].length <= 100 <br> 
dictionary[i] consists of only lower-case letters. <br> 
1 <= sentence.length <= 10^6 <br> 
sentence consists of only lower-case letters and spaces. <br> 
The number of words in sentence is in the range [1, 1000] <br> 
The length of each word in sentence is in the range [1, 1000] <br> 
Each two consecutive words in sentence will be separated by exactly one space. <br> 
sentence does not have leading or trailing spaces. <br> <br> 
