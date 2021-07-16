## We write the integers of nums1 and nums2 (in the order they are given) on two separate horizontal lines. <br> <br> 
Now, we may draw connecting lines: a straight line connecting two numbers nums1[i] and nums2[j] such that: <br> <br> 
nums1[i] == nums2[j]; <br> 
The line we draw does not intersect any other connecting (non-horizontal) line. <br> 
Note that a connecting lines cannot intersect even at the endpoints: each number can only belong to one connecting line. <br> <br> 
Return the maximum number of connecting lines we can draw in this way. <br> <br> <br> <br> 
Example 1: <br> <br> <br> 
Input: nums1 = [1,4,2], nums2 = [1,2,4] <br> 
Output: 2 <br> 
Explanation: We can draw 2 uncrossed lines as in the diagram. <br> 
We cannot draw 3 uncrossed lines, because the line from nums1[1]=4 to nums2[2]=4 will intersect the line from nums1[2]=2 to nums2[1]=2. <br> 
Example 2: <br> <br> 
Input: nums1 = [2,5,1,2,5], nums2 = [10,5,2,1,5,2] <br> 
Output: 3 <br> 
Example 3: <br> <br> 
Input: nums1 = [1,3,7,1,7,5], nums2 = [1,9,2,5,1] <br> 
Output: 2 <br> <br> <br> 
Note: <br> <br> 
1 <= nums1.length <= 500 <br> 
1 <= nums2.length <= 500 <br> 
1 <= nums1[i], nums2[i] <= 2000 <br> 
