## A Range Module is a module that tracks ranges of numbers. Your task is to design and implement the following interfaces in an efficient manner. <br> <br> 
addRange(int left, int right) Adds the half-open interval [left, right), tracking every real number in that interval. Adding an interval that partially overlaps with currently tracked numbers should add any numbers in the interval [left, right) that are not already tracked. <br> 
queryRange(int left, int right) Returns true if and only if every real number in the interval [left, right) is currently being tracked. <br> 
removeRange(int left, int right) Stops tracking every real number currently being tracked in the interval [left, right). <br> 
