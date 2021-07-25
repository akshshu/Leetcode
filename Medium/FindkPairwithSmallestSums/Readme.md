## You are given two integer arrays nums1 and nums2 sorted in ascending order and an integer k. <br> <br> 
Define a pair (u, v) which consists of one element from the first array and one element from the second array. <br> <br> 
Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3 <br> 
Output: [[1,2],[1,4],[1,6]] <br> 
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6] <br> 
Example 2: <br> <br> 
Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2 <br> 
Output: [[1,1],[1,1]] <br> 
Explanation: The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3] <br> 
Example 3: <br> <br> 
Input: nums1 = [1,2], nums2 = [3], k = 3 <br> 
Output: [[1,3],[2,3]] <br> 
Explanation: All possible pairs are returned from the sequence: [1,3],[2,3] <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums1.length, nums2.length <= 104 <br> 
-109 <= nums1[i], nums2[i] <= 109 <br> 
nums1 and nums2 both are sorted in ascending order. <br> 
1 <= k <= 1000 <br> 
