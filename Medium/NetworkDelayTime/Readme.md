## You are given a network of n nodes, labeled from 1 to n. You are also given times, a list of travel times as directed edges times[i] = (ui, vi, wi), where ui is the source node, vi is the target node, and wi is the time it takes for a signal to travel from source to target. <br> <br> 
We will send a signal from a given node k. Return the time it takes for all the n nodes to receive the signal. If it is impossible for all the n nodes to receive the signal, return -1. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2 <br> 
Output: 2 <br> 
Example 2: <br> <br> 
Input: times = [[1,2,1]], n = 2, k = 1 <br> 
Output: 1 <br> 
Example 3: <br> <br> 
Input: times = [[1,2,1]], n = 2, k = 2 <br> 
Output: -1 <br> <br> <br> 
Constraints: <br> <br> 
1 <= k <= n <= 100 <br> 
1 <= times.length <= 6000 <br> 
times[i].length == 3 <br> 
1 <= ui, vi <= n <br> 
ui != vi <br> 
0 <= wi <= 100 <br> 
All the pairs (ui, vi) are unique. (i.e., no multiple edges.) <br> 
