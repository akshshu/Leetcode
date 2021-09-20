## Example 1 <br> 
Input <br> 
methods = ["constructor", "value", "value", "valueInRange", "valueInRange", "valueInRange"] <br> 
arguments = [["3a3b2c1d1a"], [0], [4], ["a", 0, 9], ["b", 3, 9], ["e", 3, 9]]` <br> 
Output <br> 
[null, "a", "b", "a", "b", "?"] <br> 
Explanation <br> 
r = RunLengthDecoder("3a3b2c1d1a") # In decoded version it's "aaabbbccda" <br> 
r.value(0) == "a" <br> 
r.value(4) == "b" <br> 
r.valueInRange("a", 0, 9) == "a" <br> 
r.valueInRange("b", 3, 9) == "b" <br> 
r.valueInRange("e", 3, 9) == "?" <br> 
