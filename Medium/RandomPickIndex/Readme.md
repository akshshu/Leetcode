## Given an integer array nums with possible duplicates, randomly output the index of a given target number. You can assume that the given target number must exist in the array. <br> <br> 
Implement the Solution class: <br> <br> 
Solution(int[] nums) Initializes the object with the array nums. <br> 
int pick(int target) Picks a random index i from nums where nums[i] == target. If there are multiple valid i's, then each index should have an equal probability of returning. <br> <br> <br> 
Example 1: <br> <br> 
Input <br> 
["Solution", "pick", "pick", "pick"] <br> 
[[[1, 2, 3, 3, 3]], [3], [1], [3]] <br> 
Output <br> 
[null, 4, 0, 2] <br> <br> 
Explanation <br> 
Solution solution = new Solution([1, 2, 3, 3, 3]); <br> 
solution.pick(3); // It should return either index 2, 3, or 4 randomly. Each index should have equal probability of returning. <br> 
solution.pick(1); // It should return 0. Since in the array only nums[0] is equal to 1. <br> 
solution.pick(3); // It should return either index 2, 3, or 4 randomly. Each index should have equal probability of returning. <br> <br> <br> 
Constraints: <br> <br> 
1 <= nums.length <= 2 * 104 <br> 
-231 <= nums[i] <= 231 - 1 <br> 
target is an integer from nums. <br> 
At most 104 calls will be made to pick. <br> 
