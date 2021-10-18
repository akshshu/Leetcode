## A certain bug's home is on the x-axis at position x. Help them get there from position 0. <br> <br> 
The bug jumps according to the following rules: <br> <br> 
It can jump exactly a positions forward (to the right). <br> 
It can jump exactly b positions backward (to the left). <br> 
It cannot jump backward twice in a row. <br> 
It cannot jump to any forbidden positions. <br> 
The bug may jump forward beyond its home, but it cannot jump to positions numbered with negative integers. <br> <br> 
Given an array of integers forbidden, where forbidden[i] means that the bug cannot jump to the position forbidden[i], and integers a, b, and x, return the minimum number of jumps needed for the bug to reach its home. If there is no possible sequence of jumps that lands the bug on position x, return -1. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: forbidden = [14,4,18,1,15], a = 3, b = 15, x = 9 <br> 
Output: 3 <br> 
Explanation: 3 jumps forward (0 -> 3 -> 6 -> 9) will get the bug home. <br> 
Example 2: <br> <br> 
Input: forbidden = [8,3,16,6,12,20], a = 15, b = 13, x = 11 <br> 
Output: -1 <br> 
Example 3: <br> <br> 
Input: forbidden = [1,6,2,14,5,17,4], a = 16, b = 9, x = 7 <br> 
Output: 2 <br> 
Explanation: One jump forward (0 -> 16) then one jump backward (16 -> 7) will get the bug home. <br> <br> <br> 
Constraints: <br> <br> 
1 <= forbidden.length <= 1000 <br> 
1 <= a, b, forbidden[i] <= 2000 <br> 
0 <= x <= 2000 <br> 
All the elements in forbidden are distinct. <br> 
Position x is not forbidden. <br> 
