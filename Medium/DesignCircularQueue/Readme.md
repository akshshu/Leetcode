## Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer". <br> <br> 
One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values. <br> <br> 
Implementation the MyCircularQueue class: <br> <br> 
MyCircularQueue(k) Initializes the object with the size of the queue to be k. <br> 
int Front() Gets the front item from the queue. If the queue is empty, return -1. <br> 
int Rear() Gets the last item from the queue. If the queue is empty, return -1. <br> 
boolean enQueue(int value) Inserts an element into the circular queue. Return true if the operation is successful. <br> 
boolean deQueue() Deletes an element from the circular queue. Return true if the operation is successful. <br> 
boolean isEmpty() Checks whether the circular queue is empty or not. <br> 
boolean isFull() Checks whether the circular queue is full or not. <br> 
You must solve the problem without using the built-in queue data structure in your programming language. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input <br> 
["MyCircularQueue", "enQueue", "enQueue", "enQueue", "enQueue", "Rear", "isFull", "deQueue", "enQueue", "Rear"] <br> 
[[3], [1], [2], [3], [4], [], [], [], [4], []] <br> 
Output <br> 
[null, true, true, true, false, 3, true, true, true, 4] <br> <br> 
Explanation <br> 
MyCircularQueue myCircularQueue = new MyCircularQueue(3); <br> 
myCircularQueue.enQueue(1); // return True <br> 
myCircularQueue.enQueue(2); // return True <br> 
myCircularQueue.enQueue(3); // return True <br> 
myCircularQueue.enQueue(4); // return False <br> 
myCircularQueue.Rear();     // return 3 <br> 
myCircularQueue.isFull();   // return True <br> 
myCircularQueue.deQueue();  // return True <br> 
myCircularQueue.enQueue(4); // return True <br> 
myCircularQueue.Rear();     // return 4 <br> <br> <br> 
Constraints: <br> <br> 
1 <= k <= 1000 <br> 
0 <= value <= 1000 <br> 
At most 3000 calls will be made to enQueue, deQueue, Front, Rear, isEmpty, and isFull. <br> 
