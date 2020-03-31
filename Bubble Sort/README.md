# Bubble Sort
<br>
Bubble Sort is a basic sorting algorithm with a space complexity of O(n) and auxillary space of O(1). It has an average, best and worst case time complexity of O(n<sup>2</sup>). It can be further optimized by stopping algorithm incase of no swap in innner loop, in which case best case complexity becomes O(n) - when array is sorted. The worst case and average case time complexity remain O(n<sup>2</sup>).
<br>

### Basic rundown:
The current element is compared with the immediate next element and swap if the current element is larger. This goes on till you reach the end of the array, meaning that the largest element is at the end of the array at the end of the first pass. You then do n-1 passes to sort the entire array.

NOTE: In order for auxillary space to be O(1), no new array is created for holding the sorted elements.

### Algorithm:
1. Compare each element of the array with the next element and swap if the current element is larger. This ensures that at the end of the the first pass the largest element is at the end of the array.
2. Repeat step one, while excluding the last i elements till you can make a pass, without any swaps.
3. When you reach a point where you can make a pass without any swaps, every element in the array is smaller then the next element, which implies that the array is completely sorted.
  
NOTE: You only have to check upto the n-i-1 element in each pass as the remaining i<sup>th</sup> elements are already in order.
    
    
