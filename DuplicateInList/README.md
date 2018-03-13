# Duplicate in list
**Problem Definition:** 
You are provided with a class Node that contains the properties: int data and Node next. Write a function named FindDuplicate
that takes in the head of a linked list. If the list contains any duplicates return the number, otherwise return -1.

---
**Examples:***
* `[1] -> [2] -> [3] -> [4]         ===> -1`
* `[1] -> [2] -> [3] -> [3] -> [4]  ===>  3`

---
**Notes:**
* A commmon first approach uses nested for loop. However, to be most correct a hashing method should be used.