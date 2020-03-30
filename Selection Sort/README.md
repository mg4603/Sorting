# Selection Sort
<br>
Selection Sort is a basic sorting algorithm with a time complexity of O(n<sup>2</sup>) and space complexity of O(n) and auxillary space of O(1).
<br>

### Basic rundown:
1. The array to be sorted is divided into two parts: the sorted and unsorted parts.
2. To begin the entire array is considered unsorted and the smallest element in the unorderd array is found and swapped with the 1<sup>st</sup> element of the unordered array.
3. This goes on till the unordered part of the array is empty. 


NOTE: In order for auxillary space to be O(1), no new array is created for holding the sorted elements.

### Algorithm:
1. Find the smallest element in the array and swap it with the first element of the array. This divides the array into two distinct parts, the first element which is now ordered and the remaining elements that are yet unordered.
2. Leaving the sorted elements untouched, pick the first element of the new unsorted array - the second element of the original array and swap with the smallest element in the new unsorted array. The first 2 elements of the original array are now sorted while the remainder of the array is still unsorted.
3. Repeat the second step sequentially for the rest of unordered array till the second last element of original array. At this point the entire array is ordered as the first n-1 elements are in order from the smallest to largest, which implies that the last element must be the largest.
