# Duplicate in list
**Problem Definition:** 
You are provided with a class Node that contains the properties: int data and Node next. Write a function named FindDuplicate
that takes in the head of a linked list. The function should a linked list of duplicate numbers or `null` if all elements are unique.

---
**Examples:***
* `[1] -> [2] -> [3] -> [4]         ===> null`
* `[1] -> [2] -> [3] -> [3] -> [4]  ===> [3]`
* `[1] -> [2] -> [1] -> [3] -> [2]  ===> [1] -> [2]`

---
**Notes:**
* A commmon first approach uses nested for loop. However, to be most correct a hashing method should be used.
