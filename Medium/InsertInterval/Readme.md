## Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary). <br> <br> 
You may assume that the intervals were initially sorted according to their start times. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: intervals = [[1,3],[6,9]], newInterval = [2,5] <br> 
Output: [[1,5],[6,9]] <br> 
Example 2: <br> <br> 
Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8] <br> 
Output: [[1,2],[3,10],[12,16]] <br> 
Explanation: Because the new interval [4,8] overlaps with [3,5],[6,7],[8,10]. <br> 
