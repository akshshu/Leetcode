## Design a data structure that is initialized with a list of different words. Provided a string, you should determine if you can change exactly one character in this string to match any word in the data structure. <br> <br> 
Implement the MagicDictionary class: <br> <br> 
MagicDictionary() Initializes the object. <br> 
void buildDict(String[] dictionary) Sets the data structure with an array of distinct strings dictionary. <br> 
bool search(String searchWord) Returns true if you can change exactly one character in searchWord to match any string in the data structure, otherwise returns false. <br> <br> <br> 
Example 1: <br> <br> 
Input <br> 
["MagicDictionary", "buildDict", "search", "search", "search", "search"] <br> 
[[], [["hello", "leetcode"]], ["hello"], ["hhllo"], ["hell"], ["leetcoded"]] <br> 
Output <br> 
[null, null, false, true, false, false] <br> <br> 
Explanation <br> 
MagicDictionary magicDictionary = new MagicDictionary(); <br> 
magicDictionary.buildDict(["hello", "leetcode"]); <br> 
magicDictionary.search("hello"); // return False <br> 
magicDictionary.search("hhllo"); // We can change the second 'h' to 'e' to match "hello" so we return True <br> 
magicDictionary.search("hell"); // return False <br> 
magicDictionary.search("leetcoded"); // return False <br> <br> <br> 
Constraints: <br> <br> 
1 <= dictionary.length <= 100 <br> 
1 <= dictionary[i].length <= 100 <br> 
dictionary[i] consists of only lower-case English letters. <br> 
All the strings in dictionary are distinct. <br> 
1 <= searchWord.length <= 100 <br> 
searchWord consists of only lower-case English letters. <br> 
buildDict will be called only once before search. <br> 
At most 100 calls will be made to search. <br> 
