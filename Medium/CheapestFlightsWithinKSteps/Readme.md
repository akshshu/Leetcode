## There are n cities connected by some number of flights. You are given an array flights where flights[i] = [fromi, toi, pricei] indicates that there is a flight from city fromi to city toi with cost pricei. <br> <br> 
You are also given three integers src, dst, and k, return the cheapest price from src to dst with at most k stops. If there is no such route, return -1. <br> <br> <br> <br> 
Example 1: <br> 
Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1 <br> 
Output: 200 <br> 
Explanation: The graph is shown. <br> 
The cheapest price from city 0 to city 2 with at most 1 stop costs 200, as marked red in the picture. <br> 
Input: n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 0 <br> 
Output: 500 <br> 
Explanation: The graph is shown. <br> 
The cheapest price from city 0 to city 2 with at most 0 stop costs 500, as marked blue in the picture. <br> <br> <br> 
Constraints: <br> <br> 
1 <= n <= 100 <br> 
0 <= flights.length <= (n * (n - 1) / 2) <br> 
flights[i].length == 3 <br> 
0 <= fromi, toi < n <br> 
fromi != toi <br> 
1 <= pricei <= 104 <br> 
There will not be any multiple flights between two cities. <br> 
0 <= src, dst, k < n <br> 
src != dst <br> 
