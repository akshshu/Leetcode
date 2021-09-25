## Design a data structure that supports adding new words and finding if a string matches any previously added string. <br> <br> 
Implement the WordDictionary class: <br> <br> 
WordDictionary() Initializes the object. <br> 
void addWord(word) Adds word to the data structure, it can be matched later. <br> 
bool search(word) Returns true if there is any string in the data structure that matches word or false otherwise. word may contain dots '.' where dots can be matched with any letter. <br> <br> <br> 
Example: <br> <br> 
Input <br> 
["WordDictionary","addWord","addWord","addWord","search","search","search","search"] <br> 
[[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]] <br> 
Output <br> 
[null,null,null,null,false,true,true,true] <br> <br> 
Explanation <br> 
WordDictionary wordDictionary = new WordDictionary(); <br> 
wordDictionary.addWord("bad"); <br> 
wordDictionary.addWord("dad"); <br> 
wordDictionary.addWord("mad"); <br> 
wordDictionary.search("pad"); // return False <br> 
wordDictionary.search("bad"); // return True <br> 
wordDictionary.search(".ad"); // return True <br> 
wordDictionary.search("b.."); // return True <br> <br> <br> 
Constraints: <br> <br> 
1 <= word.length <= 500 <br> 
word in addWord consists lower-case English letters. <br> 
word in search consist of  '.' or lower-case English letters. <br> 
At most 50000 calls will be made to addWord and search. <br> 
