# Bubble Sort
<br>
Bubble Sort is a basic sorting algorithm with a space complexity of O(n) and auxillary space of O(1). It has an average, best and worst case time complexity of O(n<sup>2</sup>). It can be further optimized by stopping algorithm incase of no swap in innner loop, in which case best case complexity becomes O(n) - when array is sorted. The worst case and average case time complexity remain O(n<sup>2</sup>).
<br>

### Basic rundown:


NOTE: In order for auxillary space to be O(1), no new array is created for holding the sorted elements.

### Algorithm:
1. Find the smallest element in the array and swap it with the first element of the array. This divides the array into two distinct parts, the first element which is now ordered and the remaining elements that are yet unordered.
2. Leaving the sorted elements untouched, pick the first element of the new unsorted array - the second element of the original array and swap with the smallest element in the new unsorted array. The first 2 elements of the original array are now sorted while the remainder of the array is still unsorted.
3. Repeat the second step sequentially for the rest of unordered array till the second last element of original array. At this point the entire array is ordered as the first n-1 elements are in order from the smallest to largest, which implies that the last element must be the largest.
