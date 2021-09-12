## You have been given a binary tree of 'N' unique nodes and a Start node from where the tree will start to burn. Given that the Start node will always exist in the tree, your task is to print the time (in minutes) that it will take to burn the whole tree. <br> 
It is given that it takes 1 minute for the fire to travel from the burning node to its adjacent node and burn down the adjacent node. <br> 
For Example : <br> 
For the given binary tree: [1, 2, 3, -1, -1, 4, 5, -1, -1, -1, -1] <br> 
Start Node: 3 <br> <br> 
    1 <br> 
   / \ <br> 
  2   3 <br> 
     / \ <br> 
    4   5 <br> <br> 
Output: 2 <br> <br> 
Explanation : <br> 
In the zeroth minute, Node 3 will start to burn. <br> 
After one minute, Nodes (1, 4, 5) that are adjacent to 3 will burn completely. <br> 
After two minutes, the only remaining Node 2 will be burnt and there will be no nodes remaining in the binary tree. <br> 
So, the whole tree will burn in 2 minutes. <br> 
Input Format : <br> 
The first line contains elements of the tree in the level order form. The line consists of values of nodes separated by a single space. In case a node is null, we take -1 in its place. <br> <br> 
The second line of input contains the value of the start node. <br> <br> 
For example, the input for the tree depicted in the above image would be : <br> <br> 
1 <br> 
2 3 <br> 
4 -1 5 6 <br> 
-1 7 -1 -1 -1 -1 <br> 
-1 -1 <br> 
Explanation : <br> 
Level 1 : <br> 
The root node of the tree is 1 <br> <br> 
Level 2 : <br> 
Left child of 1 = 2 <br> 
Right child of 1 = 3 <br> <br> 
Level 3 : <br> 
Left child of 2 = 4 <br> 
Right child of 2 = null (-1) <br> 
Left child of 3 = 5 <br> 
Right child of 3 = 6 <br> <br> 
Level 4 : <br> 
Left child of 4 = null (-1) <br> 
Right child of 4 = 7 <br> 
Left child of 5 = null (-1) <br> 
Right child of 5 = null (-1) <br> 
Left child of 6 = null (-1) <br> 
Right child of 6 = null (-1) <br> <br> 
Level 5 : <br> 
Left child of 7 = null (-1) <br> 
Right child of 7 = null (-1) <br> 
Note : <br> 
The above format was just to provide clarity on how the input is formed for a given tree. <br> 
The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as: <br> <br> 
1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1 <br> 
Output Format <br> 
Print a single integer denoting the time in minutes that will be taken to burn the whole tree. <br> 
Note: <br> 
You do not need to print anything, it has already been taken care of. Just implement the given function. <br> 
Constraints : <br> 
1 <= N <= 10^5 <br> 
1 <= Value of Tree Node <= 10^9 <br> 
1 <= Value of Start Node <= 10^9 <br> <br> 
Time limit: 1 sec <br> 
Sample Input 1 : <br> 
1 2 3 4 -1 -1 5 -1 -1 -1 -1 <br> 
2 <br> 
Sample Output 1 : <br> 
3 <br> 
Explanation Of Sample Input 1 : <br> 
The given binary tree will look as - <br> <br> 
The Start node is 2. <br> 
In the zeroth minute, Node 2 will start to burn. <br> 
After one minute, Nodes 1 and 4 that are adjacent to 2 will burn completely. <br> 
After two minutes, Node 3 that is adjacent to node 1 will burn completely. <br> 
After three minutes, the only remaining Node 5 will be burnt and there will be no nodes remaining in the binary tree i.e the whole tree will burn in 3 minutes. <br> 
Sample Input 2 : <br> 
3 1 2 5 6 -1 -1 -1 -1 -1 -1 <br> 
3 <br> 
Sample Output 2 : <br> 
2 <br> 
