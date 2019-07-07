#ASCII CODES: 65-90 is A-Z ; 97-122 is a-z

def CaesarCipher(str, shift):
    newStr = ""
    addNum = 0
    for i in str:
        print(newStr)
        # Is character Uppercase?
        if i.isupper():
            # We take the current ASCII code and add some number from 0-25
            if (ord(i) + shift) > 90:
                addNum = (ord(i) + shift) - 90
                newStr += chr(65 + addNum)
            else:
                newStr += chr(ord(i) + shift)
        # If not, it's lowercase
        else:
            if(ord(i) + shift) > 122:
                addNum = (ord(i) + shift) - 122
                newStr += chr(97 + addNum)
            else:
                newStr += chr(ord(i) + shift)
    return newStr                            
                
 
    
print(CaesarCipher("ATTACKATONCE", 4)) # => 'EXXEGOEXSRGI'
print(CaesarCipher("NoChange", 0)) # => 'NoChange'
print(CaesarCipher("JobInterviewAlgorithms", 4)) # => 'NsfMrxivzmibEpksvmxlqw'
