# Counting Sort 
A sorting algorithm that works based on the idea of counting number of occurances of keys between a certain range and using basic arithmetic to find their position in the sorted array.
It has a time complexity of O(n+k), where n is the number of elements in the input array and k is the input range. It has an auxillary space requirement of O(n+k).<br>
It is efficient as long as the range of input data is not a lot larger than the number of objects to be stored. 

### Algorithm
1. Create a count array to store the number of occurances of each unique key in the array to be sorted.
2. Modify the count array, such that each element of the count array reflects the sum of occurances(accu) of keys til that particular key.
3. Put each element in the input sequence in an output array of the same size, using accu - 1, as the index for that key and decrease accu for that key by 1.

