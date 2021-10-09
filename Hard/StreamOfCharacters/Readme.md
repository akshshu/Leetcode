## Design an algorithm that accepts a stream of characters and checks if a suffix of these characters is a string of a given array of strings words. <br> <br> 
For example, if words = ["abc", "xyz"] and the stream added the four characters (one by one) 'a', 'x', 'y', and 'z', your algorithm should detect that the suffix "xyz" of the characters "axyz" matches "xyz" from words. <br> <br> 
Implement the StreamChecker class: <br> <br> 
StreamChecker(String[] words) Initializes the object with the strings array words. <br> 
boolean query(char letter) Accepts a new character from the stream and returns true if any non-empty suffix from the stream forms a word that is in words. <br> <br> <br> 
Example 1: <br> <br> 
Input <br> 
["StreamChecker", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query", "query"] <br> 
[[["cd", "f", "kl"]], ["a"], ["b"], ["c"], ["d"], ["e"], ["f"], ["g"], ["h"], ["i"], ["j"], ["k"], ["l"]] <br> 
Output <br> 
[null, false, false, false, true, false, true, false, false, false, false, false, true] <br> <br> 
Explanation <br> 
StreamChecker streamChecker = new StreamChecker(["cd", "f", "kl"]); <br> 
streamChecker.query("a"); // return False <br> 
streamChecker.query("b"); // return False <br> 
streamChecker.query("c"); // return False <br> 
streamChecker.query("d"); // return True, because 'cd' is in the wordlist <br> 
streamChecker.query("e"); // return False <br> 
streamChecker.query("f"); // return True, because 'f' is in the wordlist <br> 
streamChecker.query("g"); // return False <br> 
streamChecker.query("h"); // return False <br> 
streamChecker.query("i"); // return False <br> 
streamChecker.query("j"); // return False <br> 
streamChecker.query("k"); // return False <br> 
streamChecker.query("l"); // return True, because 'kl' is in the wordlist <br> <br> <br> 
Constraints: <br> <br> 
1 <= words.length <= 2000 <br> 
1 <= words[i].length <= 2000 <br> 
words[i] consists of lowercase English letters. <br> 
letter is a lowercase English letter. <br> 
At most 4 * 104 calls will be made to query. <br> 
