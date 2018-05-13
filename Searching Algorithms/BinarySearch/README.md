# Binary Search
**Problem Definition:** 
This algorithm is tasked with finding a specified value in some sort of pre-sorted list(Array, Hash, Vector, etc.).
It has a time complexity of O(log2(n)) - meaning it runs in logarithmic time. Simply, it finds the middle index of the given list and
determines if the specified search value is greater or less than the middle index value you just found. Once it determines if it's 
greater or less than the given value it will cut the opposite half off from calculations and continue this process until either the
specified search value is found or the list is empty.

---
**Examples:**
* `binarySearch(arrayBeingTested, specifiedSearchValue, sizeOfArray)`
   * `int test[5] = {6,4,7,8,3} => binarySearch(test, 4, 5) => | pos = 1 |`
   * `int test[5] = {6,4,7,8,3} => binarySearch(test, 8, 5) => | pos = 4 |`
   * `int test[5] = {6,4,7,8,3} => binarySearch(test, 1, 5) => | pos = -1 |`
