## Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: intervals = [[1,2],[2,3],[3,4],[1,3]] <br> 
Output: 1 <br> 
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping. <br> 
Example 2: <br> <br> 
Input: intervals = [[1,2],[1,2],[1,2]] <br> 
Output: 2 <br> 
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping. <br> 
Example 3: <br> <br> 
Input: intervals = [[1,2],[2,3]] <br> 
Output: 0 <br> 
Explanation: You don't need to remove any of the intervals since they're already non-overlapping. <br> <br> <br> 
Constraints: <br> <br> 
1 <= intervals.length <= 2 * 104 <br> 
intervals[i].length == 2 <br> 
-2 * 104 <= starti < endi <= 2 * 104 <br> 
