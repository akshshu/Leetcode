## A company has n employees with a unique ID for each employee from 0 to n - 1. The head of the company is the one with headID. <br> <br> 
Each employee has one direct manager given in the manager array where manager[i] is the direct manager of the i-th employee, manager[headID] = -1. Also, it is guaranteed that the subordination relationships have a tree structure. <br> <br> 
The head of the company wants to inform all the company employees of an urgent piece of news. He will inform his direct subordinates, and they will inform their subordinates, and so on until all employees know about the urgent news. <br> <br> 
The i-th employee needs informTime[i] minutes to inform all of his direct subordinates (i.e., After informTime[i] minutes, all his direct subordinates can start spreading the news). <br> <br> 
Return the number of minutes needed to inform all the employees about the urgent news. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: n = 1, headID = 0, manager = [-1], informTime = [0] <br> 
Output: 0 <br> 
Explanation: The head of the company is the only employee in the company. <br> 
