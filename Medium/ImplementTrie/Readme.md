## A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker. <br> <br> 
Implement the Trie class: <br> <br> 
Trie() Initializes the trie object. <br> 
void insert(String word) Inserts the string word into the trie. <br> 
boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise. <br> 
boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise. <br> <br> <br> 
Example 1: <br> <br> 
Input <br> 
["Trie", "insert", "search", "search", "startsWith", "insert", "search"] <br> 
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]] <br> 
Output <br> 
[null, null, true, false, true, null, true] <br> <br> 
Explanation <br> 
Trie trie = new Trie(); <br> 
trie.insert("apple"); <br> 
trie.search("apple");   // return True <br> 
trie.search("app");     // return False <br> 
trie.startsWith("app"); // return True <br> 
trie.insert("app"); <br> 
trie.search("app");     // return True <br> <br> <br> 
Constraints: <br> <br> 
1 <= word.length, prefix.length <= 2000 <br> 
word and prefix consist only of lowercase English letters. <br> 
At most 3 * 104 calls in total will be made to insert, search, and startsWith. <br> 
