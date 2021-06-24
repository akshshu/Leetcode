## Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same. <br> <br> 
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements. <br> <br> 
Return k after placing the final result in the first k slots of nums. <br> <br> 
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory. <br> <br> 
Custom Judge: <br> <br> 
The judge will test your solution with the following code: <br> <br> 
int[] nums = [...]; // Input array <br> 
int[] expectedNums = [...]; // The expected answer with correct length <br> <br> 
int k = removeDuplicates(nums); // Calls your implementation <br> <br> 
assert k == expectedNums.length; <br> 
for (int i = 0; i < k; i++) { <br> 
    assert nums[i] == expectedNums[i]; <br> 
} <br> 
