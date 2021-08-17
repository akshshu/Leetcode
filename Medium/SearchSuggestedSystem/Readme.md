## Input: products = ["mobile","mouse","moneypot","monitor","mousepad"], searchWord = "mouse" <br> 
Output: [ <br> 
["mobile","moneypot","monitor"], <br> 
["mobile","moneypot","monitor"], <br> 
["mouse","mousepad"], <br> 
["mouse","mousepad"], <br> 
["mouse","mousepad"] <br> 
] <br> 
Explanation: products sorted lexicographically = ["mobile","moneypot","monitor","mouse","mousepad"] <br> 
After typing m and mo all products match and we show user ["mobile","moneypot","monitor"] <br> 
After typing mou, mous and mouse the system suggests ["mouse","mousepad"] <br> 
Example 2: <br> <br> 
Input: products = ["havana"], searchWord = "havana" <br> 
Output: [["havana"],["havana"],["havana"],["havana"],["havana"],["havana"]] <br> 
Example 3: <br> <br> 
Input: products = ["bags","baggage","banner","box","cloths"], searchWord = "bags" <br> 
Output: [["baggage","bags","banner"],["baggage","bags","banner"],["baggage","bags"],["bags"]] <br> 
Example 4: <br> <br> 
Input: products = ["havana"], searchWord = "tatiana" <br> 
Output: [[],[],[],[],[],[],[]] <br> 
