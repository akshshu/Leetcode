## You are given an array of intervals, where intervals[i] = [starti, endi] and each starti is unique. <br> <br> 
The right interval for an interval i is an interval j such that startj >= endi and startj is minimized. <br> <br> 
Return an array of right interval indices for each interval i. If no right interval exists for interval i, then put -1 at index i. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: intervals = [[1,2]] <br> 
Output: [-1] <br> 
Explanation: There is only one interval in the collection, so it outputs -1. <br> 
Example 2: <br> <br> 
Input: intervals = [[3,4],[2,3],[1,2]] <br> 
Output: [-1,0,1] <br> 
Explanation: There is no right interval for [3,4]. <br> 
The right interval for [2,3] is [3,4] since start0 = 3 is the smallest start that is >= end1 = 3. <br> 
The right interval for [1,2] is [2,3] since start1 = 2 is the smallest start that is >= end2 = 2. <br> 
Example 3: <br> <br> 
Input: intervals = [[1,4],[2,3],[3,4]] <br> 
Output: [-1,2,-1] <br> 
Explanation: There is no right interval for [1,4] and [3,4]. <br> 
The right interval for [2,3] is [3,4] since start2 = 3 is the smallest start that is >= end1 = 3. <br> <br> <br> 
Constraints: <br> <br> 
1 <= intervals.length <= 2 * 104 <br> 
intervals[i].length == 2 <br> 
-106 <= starti <= endi <= 106 <br> 
The start point of each interval is unique. <br> 
