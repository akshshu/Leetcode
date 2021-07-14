## In an exam room, there are n seats in a single row, numbered 0, 1, 2, ..., n-1. <br> <br> 
When a student enters the room, they must sit in the seat that maximizes the distance to the closest person.  If there are multiple such seats, they sit in the seat with the lowest number.  (Also, if no one is in the room, then the student sits at seat number 0.) <br> <br> 
Return a class ExamRoom(int n) that exposes two functions: ExamRoom.seat() returning an int representing what seat the student sat in, and ExamRoom.leave(int p) representing that the student in seat number p now leaves the room.  It is guaranteed that any calls to ExamRoom.leave(p) have a student sitting in seat p. <br> <br> <br> <br> 
Example 1: <br> <br> 
Input: ["ExamRoom","seat","seat","seat","seat","leave","seat"], [[10],[],[],[],[],[4],[]] <br> 
Output: [null,0,9,4,2,null,5] <br> 
Explanation: <br> 
ExamRoom(10) -> null <br> 
seat() -> 0, no one is in the room, then the student sits at seat number 0. <br> 
seat() -> 9, the student sits at the last seat number 9. <br> 
seat() -> 4, the student sits at the last seat number 4. <br> 
seat() -> 2, the student sits at the last seat number 2. <br> 
leave(4) -> null <br> 
seat() -> 5, the student sits at the last seat number 5. <br> <br> <br> 
Note: <br> <br> 
1 <= n <= 109 <br> 
ExamRoom.seat() and ExamRoom.leave() will be called at most 104 times across all test cases. <br> 
Calls to ExamRoom.leave(p) are guaranteed to have a student currently sitting in seat number p. <br> 
