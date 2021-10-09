## You have a lock in front of you with 4 circular wheels. Each wheel has 10 slots: '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'. The wheels can rotate freely and wrap around: for example we can turn '9' to be '0', or '0' to be '9'. Each move consists of turning one wheel one slot. <br> <br> 
The lock initially starts at '0000', a string representing the state of the 4 wheels. <br> <br> 
You are given a list of deadends dead ends, meaning if the lock displays any of these codes, the wheels of the lock will stop turning and you will be unable to open it. <br> <br> 
Given a target representing the value of the wheels that will unlock the lock, return the minimum total number of turns required to open the lock, or -1 if it is impossible. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: deadends = ["0201","0101","0102","1212","2002"], target = "0202" <br> 
Output: 6 <br> 
Explanation: <br> 
A sequence of valid moves would be "0000" -> "1000" -> "1100" -> "1200" -> "1201" -> "1202" -> "0202". <br> 
Note that a sequence like "0000" -> "0001" -> "0002" -> "0102" -> "0202" would be invalid, <br> 
because the wheels of the lock become stuck after the display becomes the dead end "0102". <br> 
Example 2: <br> <br> 
Input: deadends = ["8888"], target = "0009" <br> 
Output: 1 <br> 
Explanation: <br> 
We can turn the last wheel in reverse to move from "0000" -> "0009". <br> 
Example 3: <br> <br> 
Input: deadends = ["8887","8889","8878","8898","8788","8988","7888","9888"], target = "8888" <br> 
Output: -1 <br> 
Explanation: <br> 
We can't reach the target without getting stuck. <br> 
Example 4: <br> <br> 
Input: deadends = ["0000"], target = "8888" <br> 
Output: -1 <br> <br> <br> 
Constraints: <br> <br> 
1 <= deadends.length <= 500 <br> 
deadends[i].length == 4 <br> 
target.length == 4 <br> 
target will not be in the list deadends. <br> 
target and deadends[i] consist of digits only. <br> 
