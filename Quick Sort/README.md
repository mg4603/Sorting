# Quick Sort
Quick sort is a sorting algorithm that follows the divide and conquer paradigm. It has time complexity of O(nlogn) in the best case and average case and a time complexity of O(n<sup>2</sup>) in the worst case. The worst case occurs when the array is already sorted.

### Basic Rundown:
The algorithm picks a pivot and partitions the given array around the pivot. When partitioning, the algorithm ensures that all elements on the left of the pivot are smaller than it while all elements on its right are larger than it, i.e., the pivot is placed at its correct position in the array.


The pivot can be:
1. The first element in the array
2. The last element in the array 
3. Any random element in the array.


### Algorithm:

1. Pick the pivot according to one of the above discussed strategies and find its correct position in the array.
2. Recursively call quick sort on both portions of the array, that was divided by the pivot.
 


