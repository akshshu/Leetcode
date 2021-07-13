## Given a characters array tasks, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle. <br> <br> 
However, there is a non-negative integer n that represents the cooldown period between two same tasks (the same letter in the array), that is that there must be at least n units of time between any two same tasks. <br> <br> 
Return the least number of units of times that the CPU will take to finish all the given tasks. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: tasks = ["A","A","A","B","B","B"], n = 2 <br> 
Output: 8 <br> 
Explanation: <br> 
A -> B -> idle -> A -> B -> idle -> A -> B <br> 
There is at least 2 units of time between any two same tasks. <br> 
Example 2: <br> <br> 
Input: tasks = ["A","A","A","B","B","B"], n = 0 <br> 
Output: 6 <br> 
Explanation: On this case any permutation of size 6 would work since n = 0. <br> 
["A","A","A","B","B","B"] <br> 
["A","B","A","B","A","B"] <br> 
["B","B","B","A","A","A"] <br> 
... <br> 
And so on. <br> 
Example 3: <br> <br> 
Input: tasks = ["A","A","A","A","A","A","B","C","D","E","F","G"], n = 2 <br> 
Output: 16 <br> 
Explanation: <br> 
One possible solution is <br> 
A -> B -> C -> A -> D -> E -> A -> F -> G -> A -> idle -> idle -> A -> idle -> idle -> A <br> <br> <br> 
Constraints: <br> <br> 
1 <= task.length <= 104 <br> 
tasks[i] is upper-case English letter. <br> 
The integer n is in the range [0, 100]. <br> 
