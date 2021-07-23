## Design a queue that supports push and pop operations in the front, middle, and back. <br> <br> 
Implement the FrontMiddleBack class: <br> <br> 
FrontMiddleBack() Initializes the queue. <br> 
void pushFront(int val) Adds val to the front of the queue. <br> 
void pushMiddle(int val) Adds val to the middle of the queue. <br> 
void pushBack(int val) Adds val to the back of the queue. <br> 
int popFront() Removes the front element of the queue and returns it. If the queue is empty, return -1. <br> 
int popMiddle() Removes the middle element of the queue and returns it. If the queue is empty, return -1. <br> 
int popBack() Removes the back element of the queue and returns it. If the queue is empty, return -1. <br> 
Notice that when there are two middle position choices, the operation is performed on the frontmost middle position choice. For example: <br> <br> 
Pushing 6 into the middle of [1, 2, 3, 4, 5] results in [1, 2, 6, 3, 4, 5]. <br> 
Popping the middle from [1, 2, 3, 4, 5, 6] returns 3 and results in [1, 2, 4, 5, 6]. <br> <br> <br> 
Example 1: <br> <br> 
Input: <br> 
["FrontMiddleBackQueue", "pushFront", "pushBack", "pushMiddle", "pushMiddle", "popFront", "popMiddle", "popMiddle", "popBack", "popFront"] <br> 
[[], [1], [2], [3], [4], [], [], [], [], []] <br> 
Output: <br> 
[null, null, null, null, null, 1, 3, 4, 2, -1] <br> <br> 
Explanation: <br> 
FrontMiddleBackQueue q = new FrontMiddleBackQueue(); <br> 
q.pushFront(1);   // [1] <br> 
q.pushBack(2);    // [1, 2] <br> 
q.pushMiddle(3);  // [1, 3, 2] <br> 
q.pushMiddle(4);  // [1, 4, 3, 2] <br> 
q.popFront();     // return 1 -> [4, 3, 2] <br> 
q.popMiddle();    // return 3 -> [4, 2] <br> 
q.popMiddle();    // return 4 -> [2] <br> 
q.popBack();      // return 2 -> [] <br> 
q.popFront();     // return -1 -> [] (The queue is empty) <br> <br> <br> 
Constraints: <br> <br> 
1 <= val <= 109 <br> 
At most 1000 calls will be made to pushFront, pushMiddle, pushBack, popFront, popMiddle, and popBack. <br> 
