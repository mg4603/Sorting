# Insertion Sort
Insertion sort has a time complexity of O(n<sup>2</sup>) and requires auxillary space of the order of O(1). Time complexity if array is sorted in reverse order: O(n<sup>2</sup>) and if array is already sorted: O(n).
It is usually used when number of elements is small or if only few elements are misplaced in a large array.

### Basic Rundown
The algorithm iterates through the array finding the correct position of each element and inserting it in that position.

### Algorithm
1. Start with the second element of the array and check if it is smaller than the first. If it is, insert it in the first postion
2. Repeat step 1 for each of the elements of the array sequentially and insert the element in the correct position such that it is larger than the element to its immediate left and smaller than the element to its immediate right.
