## Example 1: <br> <br> 
Input: s = "aa", p = "a" <br> 
Output: false <br> 
Explanation: "a" does not match the entire string "aa". <br> 
Example 2: <br> <br> 
Input: s = "aa", p = "a*" <br> 
Output: true <br> 
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa". <br> 
Example 3: <br> <br> 
Input: s = "ab", p = ".*" <br> 
Output: true <br> 
Explanation: ".*" means "zero or more (*) of any character (.)". <br> 
Example 4: <br> <br> 
Input: s = "aab", p = "c*a*b" <br> 
Output: true <br> 
Explanation: c can be repeated 0 times, a can be repeated 1 time. Therefore, it matches "aab". <br> 
Example 5: <br> <br> 
Input: s = "mississippi", p = "mis*is*p*." <br> 
Output: false <br> 
