# Caesar Cipher
**Problem Definition:** 
Define a function such that when given a string and a postitive integer shift value it will shift all the characters of the string by that amount

---
**Examples:**
* CaesarCipher("ATTACKATONCE", 4) # => 'EXXEGOEXSRGI'
* CaesarCipher("NoChange", 0) # => 'NoChange'
* CaesarCipher("JobInterviewAlgorithms", 4) # => 'NsfMrxivzmibEpksvmxlqw'
---
**Notes:**
* A Caesar Cipher is a type of substitution cipher in which each letter in the plaintext is 'shifted' a certain number of places down the alphabet. For example, with a shift of 1, A would be replaced by B, B would become C, and so on.
* A - Z corresponds to ASCII values 65-90 and a-z corresponds to ASCII values of 97-122
