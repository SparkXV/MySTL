# STL-Implementation

Implementation of various STL containers in C++

##### Vector
```
Version2: Used templates to make easier to work with different data types.
```
##### Stack
```
version1:
Time complexity:
     push()=O(N)
     pop()= O(1)
Space Complexity: O(N)
```
##### Queue
```
version1:Implemented using Array
Time complexity:
     push()=O(1)
     pop()= O(N)
Space Complexity: O(N)

version2:Using two stacks
```
##### HashMap
```
version1:Implemented using Linked List
Time complexity:
     insert()=O(N)
     search()=O(N)
Space Complexity: O(N)

version2:Implemented using Binary Search Tree
Time complexity:
     insert()=O(N)   (skewed Tree)
     search()=O(N)
Space Complexity: O(N)
```
##### Priority Queue
```
version1:Implemented using Max and Min Heap
Time complexity:
     top()   =O(1)
     insert()=O(log N)
     delete()=O(log N)
Space Complexity: O(N)
```
##### Deque
```
version1:Implemented using static Circular Array
Time complexity:
     insertfront()=O(1)
     insertback()=O(1)
     popfront()=O(1)
     popback()=O(1)
     getfront()=O(1)
Space Complexity: O(N)

version2:Implemented using Doubly Linked List
Time complexity:
     insertfront()=O(1)
     insertback()=O(1)
     popfront()=O(1)
     popback()=O(1)
     getfront()=O(1)
Space Complexity: O(N)
```