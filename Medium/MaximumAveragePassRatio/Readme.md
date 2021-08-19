## There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array classes, where classes[i] = [passi, totali]. You know beforehand that in the ith class, there are totali total students, but only passi number of students will pass the exam. <br> <br> 
You are also given an integer extraStudents. There are another extraStudents brilliant students that are guaranteed to pass the exam of any class they are assigned to. You want to assign each of the extraStudents students to a class in a way that maximizes the average pass ratio across all the classes. <br> <br> 
The pass ratio of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The average pass ratio is the sum of pass ratios of all the classes divided by the number of the classes. <br> <br> 
Return the maximum possible average pass ratio after assigning the extraStudents students. Answers within 10-5 of the actual answer will be accepted. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: classes = [[1,2],[3,5],[2,2]], extraStudents = 2 <br> 
Output: 0.78333 <br> 
Explanation: You can assign the two extra students to the first class. The average pass ratio will be equal to (3/4 + 3/5 + 2/2) / 3 = 0.78333. <br> 
Example 2: <br> <br> 
Input: classes = [[2,4],[3,9],[4,5],[2,10]], extraStudents = 4 <br> 
Output: 0.53485 <br> <br> <br> 
Constraints: <br> <br> 
1 <= classes.length <= 105 <br> 
classes[i].length == 2 <br> 
1 <= passi <= totali <= 105 <br> 
1 <= extraStudents <= 105 <br> 
