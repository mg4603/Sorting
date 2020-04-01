# Merge Sort
A sorting algorithm that follows the divide and conquer paradigm. It has a time complexity of O(nlogn) in all cases as it always divides the array into two halves and then takes linear time to merge the two halves.
It does not sort in place and requires auxillary space of the order of O(n).

### Basic Rundown
The algorithm divides the array into two halves, recursively calls its for the two halves and merges the two halfs. The two sub-arrays are merged into a sorted array.


### Algorithm
1. Find mid-point of original array.
2. Divide original array into two sub-arrays and recursively call the algorithm on the two sub-arrays, till each sub-array contains only one element.
3. Merge the two sub arrays such that elements are sorted at each step of the recursive call
