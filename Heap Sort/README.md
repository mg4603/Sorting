# Heap Sort
In-place sorting algorithm with a time complexity of O(nlogn). Heapify has a time complexity of O(logn) and building the heap has a time complexity of O(n).

Applications:
1. Sort an array array with only few elements out of place.
2. Useful when there are k largest (or smallest) elements in the array.

### Binary Heap
A binary heap is a complete binary tree where elements are stored according to the rule that the element at the parent node is greater (or smaller) than the values in the two child nodes. If the parent is greater it is called a max heap, else it is called a min-heap.


### Algorithm
1. Build a max heap from input array.
2. The largest element of the max heap is at the root. Replace it with the last element of the heap and then reduce the size of the heap by 1. 
3. Heapify the root of the tree.
4. Repeat 2 and 3 while size of the heap is greater than 1.


