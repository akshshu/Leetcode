## You are given an integer array nums with no duplicates. A maximum binary tree can be built recursively from nums using the following algorithm: <br> <br> 
Create a root node whose value is the maximum value in nums. <br> 
Recursively build the left subtree on the subarray prefix to the left of the maximum value. <br> 
Recursively build the right subtree on the subarray suffix to the right of the maximum value. <br> 
Return the maximum binary tree built from nums. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: nums = [3,2,1,6,0,5] <br> 
Output: [6,3,5,null,2,0,null,null,1] <br> 
Explanation: The recursive calls are as follow: <br> 
- The largest value in [3,2,1,6,0,5] is 6. Left prefix is [3,2,1] and right suffix is [0,5]. <br> 
    - The largest value in [3,2,1] is 3. Left prefix is [] and right suffix is [2,1]. <br> 
        - Empty array, so no child. <br> 
        - The largest value in [2,1] is 2. Left prefix is [] and right suffix is [1]. <br> 
            - Empty array, so no child. <br> 
            - Only one element, so child is a node with value 1. <br> 
    - The largest value in [0,5] is 5. Left prefix is [0] and right suffix is []. <br> 
        - Only one element, so child is a node with value 0. <br> 
        - Empty array, so no child. <br> 
Example 2: <br> <br> <br> 
Input: nums = [3,2,1] <br> 
Output: [3,null,2,null,1] <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 1000 <br> 
0 <= nums[i] <= 1000 <br> 
All integers in nums are unique. <br> 
